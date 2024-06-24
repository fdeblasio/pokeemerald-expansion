#include "global.h"
#include "battle.h"
#include "load_save.h"
#include "battle_setup.h"
#include "battle_transition.h"
#include "main.h"
#include "task.h"
#include "safari_zone.h"
#include "script.h"
#include "event_data.h"
#include "metatile_behavior.h"
#include "field_player_avatar.h"
#include "fieldmap.h"
#include "random.h"
#include "starter_choose.h"
#include "script_pokemon_util.h"
#include "palette.h"
#include "window.h"
#include "event_object_movement.h"
#include "event_scripts.h"
#include "tv.h"
#include "trainer_see.h"
#include "field_message_box.h"
#include "sound.h"
#include "strings.h"
#include "trainer_hill.h"
#include "secret_base.h"
#include "string_util.h"
#include "overworld.h"
#include "field_weather.h"
#include "battle_tower.h"
#include "gym_leader_rematch.h"
#include "battle_pike.h"
#include "battle_pyramid.h"
#include "fldeff.h"
#include "fldeff_misc.h"
#include "field_control_avatar.h"
#include "mirage_tower.h"
#include "field_screen_effect.h"
#include "data.h"
#include "vs_seeker.h"
#include "item.h"
#include "constants/battle_frontier.h"
#include "constants/battle_setup.h"
#include "constants/game_stat.h"
#include "constants/items.h"
#include "constants/songs.h"
#include "constants/map_types.h"
#include "constants/trainers.h"
#include "constants/trainer_hill.h"
#include "constants/weather.h"

enum {
    TRANSITION_TYPE_NORMAL,
    TRANSITION_TYPE_CAVE,
    TRANSITION_TYPE_FLASH,
    TRANSITION_TYPE_WATER,
};

enum {
    TRAINER_PARAM_LOAD_VAL_8BIT,
    TRAINER_PARAM_LOAD_VAL_16BIT,
    TRAINER_PARAM_LOAD_VAL_32BIT,
    TRAINER_PARAM_CLEAR_VAL_8BIT,
    TRAINER_PARAM_CLEAR_VAL_16BIT,
    TRAINER_PARAM_CLEAR_VAL_32BIT,
    TRAINER_PARAM_LOAD_SCRIPT_RET_ADDR,
};

struct TrainerBattleParameter
{
    void *varPtr;
    u8 ptrType;
};

// this file's functions
static void DoBattlePikeWildBattle(void);
static void DoSafariBattle(void);
static void DoStandardWildBattle(bool32 isDouble);
static void CB2_EndWildBattle(void);
static void CB2_EndScriptedWildBattle(void);
static void TryUpdateGymLeaderRematchFromWild(void);
static void TryUpdateGymLeaderRematchFromTrainer(void);
static void CB2_GiveStarter(void);
static void CB2_StartFirstBattle(void);
static void CB2_EndFirstBattle(void);
static void SaveChangesToPlayerParty(void);
static void HandleBattleVariantEndParty(void);
static void CB2_EndTrainerBattle(void);
static bool32 IsPlayerDefeated(u32 battleOutcome);
#if FREE_MATCH_CALL == FALSE
static u16 GetRematchTrainerId(u16 trainerId);
#endif //FREE_MATCH_CALL
static void RegisterTrainerInMatchCall(void);
static void HandleRematchVarsOnBattleEnd(void);
static const u8 *GetIntroSpeechOfApproachingTrainer(void);
static const u8 *GetTrainerCantBattleSpeech(void);

EWRAM_DATA static u16 sTrainerBattleMode = 0;
EWRAM_DATA u16 gTrainerBattleOpponent_A = 0;
EWRAM_DATA u16 gTrainerBattleOpponent_B = 0;
EWRAM_DATA u16 gPartnerTrainerId = 0;
EWRAM_DATA static u16 sTrainerObjectEventLocalId = 0;
EWRAM_DATA static u8 *sTrainerAIntroSpeech = NULL;
EWRAM_DATA static u8 *sTrainerBIntroSpeech = NULL;
EWRAM_DATA static u8 *sTrainerADefeatSpeech = NULL;
EWRAM_DATA static u8 *sTrainerBDefeatSpeech = NULL;
EWRAM_DATA static u8 *sTrainerVictorySpeech = NULL;
EWRAM_DATA static u8 *sTrainerCannotBattleSpeech = NULL;
EWRAM_DATA static u8 *sTrainerBattleEndScript = NULL;
EWRAM_DATA static u8 *sTrainerABattleScriptRetAddr = NULL;
EWRAM_DATA static u8 *sTrainerBBattleScriptRetAddr = NULL;
EWRAM_DATA static bool8 sShouldCheckTrainerBScript = FALSE;
EWRAM_DATA static u8 sNoOfPossibleTrainerRetScripts = 0;

// The first transition is used if the enemy Pokémon are lower level than our Pokémon.
// Otherwise, the second transition is used.
static const u8 sBattleTransitionTable_Wild[][2] =
{
    [TRANSITION_TYPE_NORMAL] = {B_TRANSITION_SLICE,          B_TRANSITION_WHITE_BARS_FADE},
    [TRANSITION_TYPE_CAVE]   = {B_TRANSITION_CLOCKWISE_WIPE, B_TRANSITION_GRID_SQUARES},
    [TRANSITION_TYPE_FLASH]  = {B_TRANSITION_BLUR,           B_TRANSITION_GRID_SQUARES},
    [TRANSITION_TYPE_WATER]  = {B_TRANSITION_WAVE,           B_TRANSITION_RIPPLE},
};

static const u8 sBattleTransitionTable_Trainer[][2] =
{
    [TRANSITION_TYPE_NORMAL] = {B_TRANSITION_POKEBALLS_TRAIL, B_TRANSITION_ANGLED_WIPES},
    [TRANSITION_TYPE_CAVE]   = {B_TRANSITION_SHUFFLE,         B_TRANSITION_BIG_POKEBALL},
    [TRANSITION_TYPE_FLASH]  = {B_TRANSITION_BLUR,            B_TRANSITION_GRID_SQUARES},
    [TRANSITION_TYPE_WATER]  = {B_TRANSITION_SWIRL,           B_TRANSITION_RIPPLE},
};

// Battle Frontier (excluding Pyramid and Dome, which have their own tables below)
static const u8 sBattleTransitionTable_BattleFrontier[] =
{
    B_TRANSITION_FRONTIER_LOGO_WIGGLE,
    B_TRANSITION_FRONTIER_LOGO_WAVE,
    B_TRANSITION_FRONTIER_SQUARES,
    B_TRANSITION_FRONTIER_SQUARES_SCROLL,
    B_TRANSITION_FRONTIER_CIRCLES_MEET,
    B_TRANSITION_FRONTIER_CIRCLES_CROSS,
    B_TRANSITION_FRONTIER_CIRCLES_ASYMMETRIC_SPIRAL,
    B_TRANSITION_FRONTIER_CIRCLES_SYMMETRIC_SPIRAL,
    B_TRANSITION_FRONTIER_CIRCLES_MEET_IN_SEQ,
    B_TRANSITION_FRONTIER_CIRCLES_CROSS_IN_SEQ,
    B_TRANSITION_FRONTIER_CIRCLES_ASYMMETRIC_SPIRAL_IN_SEQ,
    B_TRANSITION_FRONTIER_CIRCLES_SYMMETRIC_SPIRAL_IN_SEQ
};

static const u8 sBattleTransitionTable_BattlePyramid[] =
{
    B_TRANSITION_FRONTIER_SQUARES,
    B_TRANSITION_FRONTIER_SQUARES_SCROLL,
    B_TRANSITION_FRONTIER_SQUARES_SPIRAL
};

static const u8 sBattleTransitionTable_BattleDome[] =
{
    B_TRANSITION_FRONTIER_LOGO_WIGGLE,
    B_TRANSITION_FRONTIER_SQUARES,
    B_TRANSITION_FRONTIER_SQUARES_SCROLL,
    B_TRANSITION_FRONTIER_SQUARES_SPIRAL
};

static const struct TrainerBattleParameter sOrdinaryBattleParams[] =
{
    {&sTrainerBattleMode,           TRAINER_PARAM_LOAD_VAL_8BIT},
    {&gTrainerBattleOpponent_A,     TRAINER_PARAM_LOAD_VAL_16BIT},
    {&sTrainerObjectEventLocalId,   TRAINER_PARAM_LOAD_VAL_16BIT},
    {&sTrainerAIntroSpeech,         TRAINER_PARAM_LOAD_VAL_32BIT},
    {&sTrainerADefeatSpeech,        TRAINER_PARAM_LOAD_VAL_32BIT},
    {&sTrainerVictorySpeech,        TRAINER_PARAM_CLEAR_VAL_32BIT},
    {&sTrainerCannotBattleSpeech,   TRAINER_PARAM_CLEAR_VAL_32BIT},
    {&sTrainerABattleScriptRetAddr, TRAINER_PARAM_CLEAR_VAL_32BIT},
    {&sTrainerBattleEndScript,      TRAINER_PARAM_LOAD_SCRIPT_RET_ADDR},
};

static const struct TrainerBattleParameter sContinueScriptBattleParams[] =
{
    {&sTrainerBattleMode,           TRAINER_PARAM_LOAD_VAL_8BIT},
    {&gTrainerBattleOpponent_A,     TRAINER_PARAM_LOAD_VAL_16BIT},
    {&sTrainerObjectEventLocalId,   TRAINER_PARAM_LOAD_VAL_16BIT},
    {&sTrainerAIntroSpeech,         TRAINER_PARAM_LOAD_VAL_32BIT},
    {&sTrainerADefeatSpeech,        TRAINER_PARAM_LOAD_VAL_32BIT},
    {&sTrainerVictorySpeech,        TRAINER_PARAM_CLEAR_VAL_32BIT},
    {&sTrainerCannotBattleSpeech,   TRAINER_PARAM_CLEAR_VAL_32BIT},
    {&sTrainerABattleScriptRetAddr, TRAINER_PARAM_LOAD_VAL_32BIT},
    {&sTrainerBattleEndScript,      TRAINER_PARAM_LOAD_SCRIPT_RET_ADDR},
};

static const struct TrainerBattleParameter sDoubleBattleParams[] =
{
    {&sTrainerBattleMode,           TRAINER_PARAM_LOAD_VAL_8BIT},
    {&gTrainerBattleOpponent_A,     TRAINER_PARAM_LOAD_VAL_16BIT},
    {&sTrainerObjectEventLocalId,   TRAINER_PARAM_LOAD_VAL_16BIT},
    {&sTrainerAIntroSpeech,         TRAINER_PARAM_LOAD_VAL_32BIT},
    {&sTrainerADefeatSpeech,        TRAINER_PARAM_LOAD_VAL_32BIT},
    {&sTrainerVictorySpeech,        TRAINER_PARAM_CLEAR_VAL_32BIT},
    {&sTrainerCannotBattleSpeech,   TRAINER_PARAM_LOAD_VAL_32BIT},
    {&sTrainerABattleScriptRetAddr, TRAINER_PARAM_CLEAR_VAL_32BIT},
    {&sTrainerBattleEndScript,      TRAINER_PARAM_LOAD_SCRIPT_RET_ADDR},
};

static const struct TrainerBattleParameter sOrdinaryNoIntroBattleParams[] =
{
    {&sTrainerBattleMode,           TRAINER_PARAM_LOAD_VAL_8BIT},
    {&gTrainerBattleOpponent_A,     TRAINER_PARAM_LOAD_VAL_16BIT},
    {&sTrainerObjectEventLocalId,   TRAINER_PARAM_LOAD_VAL_16BIT},
    {&sTrainerAIntroSpeech,         TRAINER_PARAM_CLEAR_VAL_32BIT},
    {&sTrainerADefeatSpeech,        TRAINER_PARAM_LOAD_VAL_32BIT},
    {&sTrainerVictorySpeech,        TRAINER_PARAM_CLEAR_VAL_32BIT},
    {&sTrainerCannotBattleSpeech,   TRAINER_PARAM_CLEAR_VAL_32BIT},
    {&sTrainerABattleScriptRetAddr, TRAINER_PARAM_CLEAR_VAL_32BIT},
    {&sTrainerBattleEndScript,      TRAINER_PARAM_LOAD_SCRIPT_RET_ADDR},
};

static const struct TrainerBattleParameter sContinueScriptDoubleBattleParams[] =
{
    {&sTrainerBattleMode,           TRAINER_PARAM_LOAD_VAL_8BIT},
    {&gTrainerBattleOpponent_A,     TRAINER_PARAM_LOAD_VAL_16BIT},
    {&sTrainerObjectEventLocalId,   TRAINER_PARAM_LOAD_VAL_16BIT},
    {&sTrainerAIntroSpeech,         TRAINER_PARAM_LOAD_VAL_32BIT},
    {&sTrainerADefeatSpeech,        TRAINER_PARAM_LOAD_VAL_32BIT},
    {&sTrainerVictorySpeech,        TRAINER_PARAM_CLEAR_VAL_32BIT},
    {&sTrainerCannotBattleSpeech,   TRAINER_PARAM_LOAD_VAL_32BIT},
    {&sTrainerABattleScriptRetAddr, TRAINER_PARAM_LOAD_VAL_32BIT},
    {&sTrainerBattleEndScript,      TRAINER_PARAM_LOAD_SCRIPT_RET_ADDR},
};

static const struct TrainerBattleParameter sTrainerBOrdinaryBattleParams[] =
{
    {&sTrainerBattleMode,           TRAINER_PARAM_LOAD_VAL_8BIT},
    {&gTrainerBattleOpponent_B,     TRAINER_PARAM_LOAD_VAL_16BIT},
    {&sTrainerObjectEventLocalId,   TRAINER_PARAM_LOAD_VAL_16BIT},
    {&sTrainerBIntroSpeech,         TRAINER_PARAM_LOAD_VAL_32BIT},
    {&sTrainerBDefeatSpeech,        TRAINER_PARAM_LOAD_VAL_32BIT},
    {&sTrainerVictorySpeech,        TRAINER_PARAM_CLEAR_VAL_32BIT},
    {&sTrainerCannotBattleSpeech,   TRAINER_PARAM_CLEAR_VAL_32BIT},
    {&sTrainerBBattleScriptRetAddr, TRAINER_PARAM_CLEAR_VAL_32BIT},
    {&sTrainerBattleEndScript,      TRAINER_PARAM_LOAD_SCRIPT_RET_ADDR},
};

static const struct TrainerBattleParameter sTrainerBContinueScriptBattleParams[] =
{
    {&sTrainerBattleMode,           TRAINER_PARAM_LOAD_VAL_8BIT},
    {&gTrainerBattleOpponent_B,     TRAINER_PARAM_LOAD_VAL_16BIT},
    {&sTrainerObjectEventLocalId,   TRAINER_PARAM_LOAD_VAL_16BIT},
    {&sTrainerBIntroSpeech,         TRAINER_PARAM_LOAD_VAL_32BIT},
    {&sTrainerBDefeatSpeech,        TRAINER_PARAM_LOAD_VAL_32BIT},
    {&sTrainerVictorySpeech,        TRAINER_PARAM_CLEAR_VAL_32BIT},
    {&sTrainerCannotBattleSpeech,   TRAINER_PARAM_CLEAR_VAL_32BIT},
    {&sTrainerBBattleScriptRetAddr, TRAINER_PARAM_LOAD_VAL_32BIT},
    {&sTrainerBattleEndScript,      TRAINER_PARAM_LOAD_SCRIPT_RET_ADDR},
};

// two trainers, each with a defeat speech
static const struct TrainerBattleParameter sTrainerTwoTrainerBattleParams[] =
{
    {&sTrainerBattleMode,           TRAINER_PARAM_LOAD_VAL_8BIT},
    {&sTrainerObjectEventLocalId,   TRAINER_PARAM_CLEAR_VAL_16BIT},
    {&gTrainerBattleOpponent_A,     TRAINER_PARAM_LOAD_VAL_16BIT},
    {&sTrainerAIntroSpeech,         TRAINER_PARAM_CLEAR_VAL_32BIT},
    {&sTrainerADefeatSpeech,        TRAINER_PARAM_LOAD_VAL_32BIT},
    {&gTrainerBattleOpponent_B,     TRAINER_PARAM_LOAD_VAL_16BIT},
    {&sTrainerBIntroSpeech,         TRAINER_PARAM_CLEAR_VAL_32BIT},
    {&sTrainerBDefeatSpeech,        TRAINER_PARAM_LOAD_VAL_32BIT},
    {&sTrainerVictorySpeech,        TRAINER_PARAM_CLEAR_VAL_32BIT},
    {&sTrainerCannotBattleSpeech,   TRAINER_PARAM_CLEAR_VAL_32BIT},
    {&sTrainerBBattleScriptRetAddr, TRAINER_PARAM_CLEAR_VAL_32BIT},
    {&sTrainerBattleEndScript,      TRAINER_PARAM_LOAD_SCRIPT_RET_ADDR},
};

#define REMATCH(trainer1, trainer2, trainer3, trainer4, trainer5, map)  \
{                                                                       \
    .trainerIds = {TRAINER_##trainer1, TRAINER_##trainer2, TRAINER_##trainer3, TRAINER_##trainer4, TRAINER_##trainer5},   \
    .mapGroup = MAP_GROUP(map),                                         \
    .mapNum = MAP_NUM(map),                                             \
}

const struct RematchTrainer gRematchTable[REMATCH_TABLE_ENTRIES] =
{
    [REMATCH_ROSE] = REMATCH(ROSE_1, ROSE_2, ROSE_3, ROSE_4, ROSE_5, ROUTE118),
    [REMATCH_ANDRES] = REMATCH(ANDRES_1, ANDRES_2, ANDRES_3, ANDRES_4, ANDRES_5, ROUTE105),
    [REMATCH_DUSTY] = REMATCH(DUSTY_1, DUSTY_2, DUSTY_3, DUSTY_4, DUSTY_5, ROUTE111),
    [REMATCH_LOLA] = REMATCH(LOLA_1, LOLA_2, LOLA_3, LOLA_4, LOLA_5, ROUTE109),
    [REMATCH_RICKY] = REMATCH(RICKY_1, RICKY_2, RICKY_3, RICKY_4, RICKY_5, ROUTE109),
    [REMATCH_LILA_AND_ROY] = REMATCH(LILA_AND_ROY_1, LILA_AND_ROY_2, LILA_AND_ROY_3, LILA_AND_ROY_4, LILA_AND_ROY_5, ROUTE124),
    [REMATCH_CRISTIN] = REMATCH(CRISTIN_1, CRISTIN_2, CRISTIN_3, CRISTIN_4, CRISTIN_5, ROUTE121),
    [REMATCH_BROOKE] = REMATCH(BROOKE_1, BROOKE_2, BROOKE_3, BROOKE_4, BROOKE_5, ROUTE111),
    [REMATCH_WILTON] = REMATCH(WILTON_1, WILTON_2, WILTON_3, WILTON_4, WILTON_5, ROUTE111),
    [REMATCH_VALERIE] = REMATCH(VALERIE_1, VALERIE_2, VALERIE_3, VALERIE_4, VALERIE_5, MT_PYRE_6F),
    [REMATCH_CINDY] = REMATCH(CINDY_1, CINDY_2, CINDY_3, CINDY_4, CINDY_5, ROUTE104),
    [REMATCH_THALIA] = REMATCH(THALIA_1, THALIA_2, THALIA_3, THALIA_4, THALIA_5, ABANDONED_SHIP_ROOMS_1F),
    [REMATCH_JESSICA] = REMATCH(JESSICA_1, JESSICA_2, JESSICA_3, JESSICA_4, JESSICA_5, ROUTE121),
    [REMATCH_WINSTON] = REMATCH(WINSTON_1, WINSTON_2, WINSTON_3, WINSTON_4, WINSTON_5, ROUTE104),
    [REMATCH_STEVE] = REMATCH(STEVE_1, STEVE_2, STEVE_3, STEVE_4, STEVE_5, ROUTE114),
    [REMATCH_TONY] = REMATCH(TONY_1, TONY_2, TONY_3, TONY_4, TONY_5, ROUTE107),
    [REMATCH_NOB] = REMATCH(NOB_1, NOB_2, NOB_3, NOB_4, NOB_5, ROUTE115),
    [REMATCH_KOJI] = REMATCH(KOJI_1, KOJI_2, KOJI_3, KOJI_4, KOJI_5, ROUTE127),
    [REMATCH_FERNANDO] = REMATCH(FERNANDO_1, FERNANDO_2, FERNANDO_3, FERNANDO_4, FERNANDO_5, ROUTE123),
    [REMATCH_DALTON] = REMATCH(DALTON_1, DALTON_2, DALTON_3, DALTON_4, DALTON_5, ROUTE118),
    [REMATCH_BERNIE] = REMATCH(BERNIE_1, BERNIE_2, BERNIE_3, BERNIE_4, BERNIE_5, ROUTE114),
    [REMATCH_ETHAN] = REMATCH(ETHAN_1, ETHAN_2, ETHAN_3, ETHAN_4, ETHAN_5, JAGGED_PASS),
    [REMATCH_JOHN_AND_JAY] = REMATCH(JOHN_AND_JAY_1, JOHN_AND_JAY_2, JOHN_AND_JAY_3, JOHN_AND_JAY_4, JOHN_AND_JAY_5, METEOR_FALLS_1F_2R),
    [REMATCH_JEFFREY] = REMATCH(JEFFREY_1, JEFFREY_2, JEFFREY_3, JEFFREY_4, JEFFREY_5, ROUTE120),
    [REMATCH_CAMERON] = REMATCH(CAMERON_1, CAMERON_2, CAMERON_3, CAMERON_4, CAMERON_5, ROUTE123),
    [REMATCH_JACKI] = REMATCH(JACKI_1, JACKI_2, JACKI_3, JACKI_4, JACKI_5, ROUTE123),
    [REMATCH_WALTER] = REMATCH(WALTER_1, WALTER_2, WALTER_3, WALTER_4, WALTER_5, ROUTE121),
    [REMATCH_KAREN] = REMATCH(KAREN_1, KAREN_2, KAREN_3, KAREN_4, KAREN_5, ROUTE116),
    [REMATCH_JERRY] = REMATCH(JERRY_1, JERRY_2, JERRY_3, JERRY_4, JERRY_5, ROUTE116),
    [REMATCH_ANNA_AND_MEG] = REMATCH(ANNA_AND_MEG_1, ANNA_AND_MEG_2, ANNA_AND_MEG_3, ANNA_AND_MEG_4, ANNA_AND_MEG_5, ROUTE117),
    [REMATCH_ISABEL] = REMATCH(ISABEL_1, ISABEL_2, ISABEL_3, ISABEL_4, ISABEL_5, ROUTE110),
    [REMATCH_MIGUEL] = REMATCH(MIGUEL_1, MIGUEL_2, MIGUEL_3, MIGUEL_4, MIGUEL_5, ROUTE103),
    [REMATCH_TIMOTHY] = REMATCH(TIMOTHY_1, TIMOTHY_2, TIMOTHY_3, TIMOTHY_4, TIMOTHY_5, ROUTE115),
    [REMATCH_SHELBY] = REMATCH(SHELBY_1, SHELBY_2, SHELBY_3, SHELBY_4, SHELBY_5, MT_CHIMNEY),
    [REMATCH_CALVIN] = REMATCH(CALVIN_1, CALVIN_2, CALVIN_3, CALVIN_4, CALVIN_5, ROUTE102),
    [REMATCH_ELLIOT] = REMATCH(ELLIOT_1, ELLIOT_2, ELLIOT_3, ELLIOT_4, ELLIOT_5, ROUTE106),
    [REMATCH_ISAIAH] = REMATCH(ISAIAH_1, ISAIAH_2, ISAIAH_3, ISAIAH_4, ISAIAH_5, ROUTE128),
    [REMATCH_MARIA] = REMATCH(MARIA_1, MARIA_2, MARIA_3, MARIA_4, MARIA_5, ROUTE117),
    [REMATCH_ABIGAIL] = REMATCH(ABIGAIL_1, ABIGAIL_2, ABIGAIL_3, ABIGAIL_4, ABIGAIL_5, ROUTE110),
    [REMATCH_DYLAN] = REMATCH(DYLAN_1, DYLAN_2, DYLAN_3, DYLAN_4, DYLAN_5, ROUTE117),
    [REMATCH_KATELYN] = REMATCH(KATELYN_1, KATELYN_2, KATELYN_3, KATELYN_4, KATELYN_5, ROUTE128),
    [REMATCH_BENJAMIN] = REMATCH(BENJAMIN_1, BENJAMIN_2, BENJAMIN_3, BENJAMIN_4, BENJAMIN_5, ROUTE110),
    [REMATCH_PABLO] = REMATCH(PABLO_1, PABLO_2, PABLO_3, PABLO_4, PABLO_5, ROUTE126),
    [REMATCH_NICOLAS] = REMATCH(NICOLAS_1, NICOLAS_2, NICOLAS_3, NICOLAS_4, NICOLAS_5, METEOR_FALLS_1F_2R),
    [REMATCH_ROBERT] = REMATCH(ROBERT_1, ROBERT_2, ROBERT_3, ROBERT_4, ROBERT_5, ROUTE120),
    [REMATCH_LAO] = REMATCH(LAO_1, LAO_2, LAO_3, LAO_4, LAO_5, ROUTE113),
    [REMATCH_CYNDY] = REMATCH(CYNDY_1, CYNDY_2, CYNDY_3, CYNDY_4, CYNDY_5, ROUTE115),
    [REMATCH_MADELINE] = REMATCH(MADELINE_1, MADELINE_2, MADELINE_3, MADELINE_4, MADELINE_5, ROUTE113),
    [REMATCH_JENNY] = REMATCH(JENNY_1, JENNY_2, JENNY_3, JENNY_4, JENNY_5, ROUTE124),
    [REMATCH_DIANA] = REMATCH(DIANA_1, DIANA_2, DIANA_3, DIANA_4, DIANA_5, JAGGED_PASS),
    [REMATCH_AMY_AND_LIV] = REMATCH(AMY_AND_LIV_1, AMY_AND_LIV_2, AMY_AND_LIV_3, AMY_AND_LIV_4, AMY_AND_LIV_5, ROUTE103),
    [REMATCH_ERNEST] = REMATCH(ERNEST_1, ERNEST_2, ERNEST_3, ERNEST_4, ERNEST_5, ROUTE125),
    [REMATCH_CORY] = REMATCH(CORY_1, CORY_2, CORY_3, CORY_4, CORY_5, ROUTE108),
    [REMATCH_EDWIN] = REMATCH(EDWIN_1, EDWIN_2, EDWIN_3, EDWIN_4, EDWIN_5, ROUTE110),
    [REMATCH_LYDIA] = REMATCH(LYDIA_1, LYDIA_2, LYDIA_3, LYDIA_4, LYDIA_5, ROUTE117),
    [REMATCH_ISAAC] = REMATCH(ISAAC_1, ISAAC_2, ISAAC_3, ISAAC_4, ISAAC_5, ROUTE117),
    [REMATCH_GABRIELLE] = REMATCH(GABRIELLE_1, GABRIELLE_2, GABRIELLE_3, GABRIELLE_4, GABRIELLE_5, MT_PYRE_3F),
    [REMATCH_CATHERINE] = REMATCH(CATHERINE_1, CATHERINE_2, CATHERINE_3, CATHERINE_4, CATHERINE_5, ROUTE119),
    [REMATCH_JACKSON] = REMATCH(JACKSON_1, JACKSON_2, JACKSON_3, JACKSON_4, JACKSON_5, ROUTE119),
    [REMATCH_HALEY] = REMATCH(HALEY_1, HALEY_2, HALEY_3, HALEY_4, HALEY_5, ROUTE104),
    [REMATCH_JAMES] = REMATCH(JAMES_1, JAMES_2, JAMES_3, JAMES_4, JAMES_5, PETALBURG_WOODS),
    [REMATCH_TRENT] = REMATCH(TRENT_1, TRENT_2, TRENT_3, TRENT_4, TRENT_5, ROUTE112),
    [REMATCH_SAWYER] = REMATCH(SAWYER_1, SAWYER_2, SAWYER_3, SAWYER_4, SAWYER_5, MT_CHIMNEY),
    [REMATCH_KIRA_AND_DAN] = REMATCH(KIRA_AND_DAN_1, KIRA_AND_DAN_2, KIRA_AND_DAN_3, KIRA_AND_DAN_4, KIRA_AND_DAN_5, ABANDONED_SHIP_ROOMS2_1F),
    [REMATCH_WALLY_VR] = REMATCH(WALLY_VR_2, WALLY_VR_3, WALLY_VR_4, WALLY_VR_5, WALLY_VR_5, VICTORY_ROAD_1F),
    [REMATCH_ROXANNE] = REMATCH(ROXANNE_1, ROXANNE_2, ROXANNE_3, ROXANNE_4, ROXANNE_5, RUSTBORO_CITY),
    [REMATCH_BRAWLY] = REMATCH(BRAWLY_1, BRAWLY_2, BRAWLY_3, BRAWLY_4, BRAWLY_5, DEWFORD_TOWN),
    [REMATCH_WATTSON] = REMATCH(WATTSON_1, WATTSON_2, WATTSON_3, WATTSON_4, WATTSON_5, MAUVILLE_CITY),
    [REMATCH_FLANNERY] = REMATCH(FLANNERY_1, FLANNERY_2, FLANNERY_3, FLANNERY_4, FLANNERY_5, LAVARIDGE_TOWN),
    [REMATCH_NORMAN] = REMATCH(NORMAN_1, NORMAN_2, NORMAN_3, NORMAN_4, NORMAN_5, PETALBURG_CITY),
    [REMATCH_WINONA] = REMATCH(WINONA_1, WINONA_2, WINONA_3, WINONA_4, WINONA_5, FORTREE_CITY),
    [REMATCH_TATE_AND_LIZA] = REMATCH(TATE_AND_LIZA_1, TATE_AND_LIZA_2, TATE_AND_LIZA_3, TATE_AND_LIZA_4, TATE_AND_LIZA_5, MOSSDEEP_CITY),
    [REMATCH_JUAN] = REMATCH(JUAN_1, JUAN_2, JUAN_3, JUAN_4, JUAN_5, SOOTOPOLIS_CITY),
    [REMATCH_SIDNEY] = REMATCH(SIDNEY, SIDNEY, SIDNEY, SIDNEY, SIDNEY, EVER_GRANDE_CITY),
    [REMATCH_PHOEBE] = REMATCH(PHOEBE, PHOEBE, PHOEBE, PHOEBE, PHOEBE, EVER_GRANDE_CITY),
    [REMATCH_GLACIA] = REMATCH(GLACIA, GLACIA, GLACIA, GLACIA, GLACIA, EVER_GRANDE_CITY),
    [REMATCH_DRAKE] = REMATCH(DRAKE, DRAKE, DRAKE, DRAKE, DRAKE, EVER_GRANDE_CITY),
    [REMATCH_WALLACE] = REMATCH(WALLACE, WALLACE, WALLACE, WALLACE, WALLACE, EVER_GRANDE_CITY),
};

static const u16 sBadgeFlags[NUM_BADGES] =
{
    FLAG_BADGE01_GET, FLAG_BADGE02_GET, FLAG_BADGE03_GET, FLAG_BADGE04_GET,
    FLAG_BADGE05_GET, FLAG_BADGE06_GET, FLAG_BADGE07_GET, FLAG_BADGE08_GET,
};

#define tState data[0]
#define tTransition data[1]

static void Task_BattleStart(u8 taskId)
{
    s16 *data = gTasks[taskId].data;

    switch (tState)
    {
    case 0:
        if (!FldEffPoison_IsActive()) // is poison not active?
        {
            BattleTransition_StartOnField(tTransition);
            ClearMirageTowerPulseBlendEffect();
            tState++; // go to case 1.
        }
        break;
    case 1:
        if (IsBattleTransitionDone() == TRUE)
        {
            CleanupOverworldWindowsAndTilemaps();
            SetMainCallback2(CB2_InitBattle);
            RestartWildEncounterImmunitySteps();
            ClearPoisonStepCounter();
            DestroyTask(taskId);
        }
        break;
    }
}

static void CreateBattleStartTask(u8 transition, u16 song)
{
    u8 taskId = CreateTask(Task_BattleStart, 1);

    gTasks[taskId].tTransition = transition;
    PlayMapChosenOrBattleBGM(song);
}

static void Task_BattleStart_Debug(u8 taskId)
{
    s16 *data = gTasks[taskId].data;

    switch (tState)
    {
    case 0:
        if (!FldEffPoison_IsActive()) // is poison not active?
        {
            BattleTransition_StartOnField(tTransition);
            ClearMirageTowerPulseBlendEffect();
            tState++; // go to case 1.
        }
        break;
    case 1:
        if (IsBattleTransitionDone() == TRUE)
        {
            CleanupOverworldWindowsAndTilemaps();
            SetMainCallback2(CB2_InitBattle);
            RestartWildEncounterImmunitySteps();
            ClearPoisonStepCounter();
            DestroyTask(taskId);
        }
        break;
    }
}

static void CreateBattleStartTask_Debug(u8 transition, u16 song)
{
    u8 taskId = CreateTask(Task_BattleStart_Debug, 1);

    gTasks[taskId].tTransition = transition;
    PlayMapChosenOrBattleBGM(song);
}

#undef tState
#undef tTransition

void BattleSetup_StartWildBattle(void)
{
    if (GetSafariZoneFlag())
        DoSafariBattle();
    else
        DoStandardWildBattle(FALSE);
}

void BattleSetup_StartDoubleWildBattle(void)
{
    DoStandardWildBattle(TRUE);
}

void BattleSetup_StartBattlePikeWildBattle(void)
{
    DoBattlePikeWildBattle();
}

static void DoStandardWildBattle(bool32 isDouble)
{
    LockPlayerFieldControls();
    FreezeObjectEvents();
    StopPlayerAvatar();
    gMain.savedCallback = CB2_EndWildBattle;
    gBattleTypeFlags = 0;
    if (isDouble)
        gBattleTypeFlags |= BATTLE_TYPE_DOUBLE;
    if (InBattlePyramid())
    {
        VarSet(VAR_TEMP_E, 0);
        gBattleTypeFlags |= BATTLE_TYPE_PYRAMID;
    }
    CreateBattleStartTask(GetWildBattleTransition(), 0);
    IncrementGameStat(GAME_STAT_TOTAL_BATTLES);
    IncrementGameStat(GAME_STAT_WILD_BATTLES);
    IncrementDailyWildBattles();
    TryUpdateGymLeaderRematchFromWild();
}

void DoStandardWildBattle_Debug(void)
{
    LockPlayerFieldControls();
    FreezeObjectEvents();
    StopPlayerAvatar();
    gMain.savedCallback = CB2_EndWildBattle;
    gBattleTypeFlags = 0;
    if (InBattlePyramid())
    {
        VarSet(VAR_TEMP_PLAYING_PYRAMID_MUSIC, 0);
        gBattleTypeFlags |= BATTLE_TYPE_PYRAMID;
    }
    CreateBattleStartTask_Debug(GetWildBattleTransition(), 0);
    //IncrementGameStat(GAME_STAT_TOTAL_BATTLES);
    //IncrementGameStat(GAME_STAT_WILD_BATTLES);
    //IncrementDailyWildBattles();
    //TryUpdateGymLeaderRematchFromWild();
}

void BattleSetup_StartRoamerBattle(void)
{
    LockPlayerFieldControls();
    FreezeObjectEvents();
    StopPlayerAvatar();
    gMain.savedCallback = CB2_EndWildBattle;
    gBattleTypeFlags = BATTLE_TYPE_ROAMER;
    CreateBattleStartTask(GetWildBattleTransition(), 0);
    IncrementGameStat(GAME_STAT_TOTAL_BATTLES);
    IncrementGameStat(GAME_STAT_WILD_BATTLES);
    IncrementDailyWildBattles();
    TryUpdateGymLeaderRematchFromWild();
}

static void DoSafariBattle(void)
{
    LockPlayerFieldControls();
    FreezeObjectEvents();
    StopPlayerAvatar();
    gMain.savedCallback = CB2_EndSafariBattle;
    gBattleTypeFlags = BATTLE_TYPE_SAFARI;
    CreateBattleStartTask(GetWildBattleTransition(), 0);
}

static void DoBattlePikeWildBattle(void)
{
    LockPlayerFieldControls();
    FreezeObjectEvents();
    StopPlayerAvatar();
    gMain.savedCallback = CB2_EndWildBattle;
    gBattleTypeFlags = BATTLE_TYPE_PIKE;
    CreateBattleStartTask(GetWildBattleTransition(), 0);
    IncrementGameStat(GAME_STAT_TOTAL_BATTLES);
    IncrementGameStat(GAME_STAT_WILD_BATTLES);
    IncrementDailyWildBattles();
    TryUpdateGymLeaderRematchFromWild();
}

static void DoTrainerBattle(void)
{
    CreateBattleStartTask(GetTrainerBattleTransition(), 0);
    IncrementGameStat(GAME_STAT_TOTAL_BATTLES);
    IncrementGameStat(GAME_STAT_TRAINER_BATTLES);
    TryUpdateGymLeaderRematchFromTrainer();
}

static void DoBattlePyramidTrainerHillBattle(void)
{
    if (InBattlePyramid())
        CreateBattleStartTask(GetSpecialBattleTransition(B_TRANSITION_GROUP_B_PYRAMID), 0);
    else
        CreateBattleStartTask(GetSpecialBattleTransition(B_TRANSITION_GROUP_TRAINER_HILL), 0);

    IncrementGameStat(GAME_STAT_TOTAL_BATTLES);
    IncrementGameStat(GAME_STAT_TRAINER_BATTLES);
    TryUpdateGymLeaderRematchFromTrainer();
}

// Initiates battle where Wally catches Ralts
void StartWallyTutorialBattle(void)
{
    CreateMaleMon(&gEnemyParty[0], SPECIES_RALTS, 5);
    LockPlayerFieldControls();
    gMain.savedCallback = CB2_ReturnToFieldContinueScriptPlayMapMusic;
    gBattleTypeFlags = BATTLE_TYPE_WALLY_TUTORIAL;
    CreateBattleStartTask(B_TRANSITION_SLICE, 0);
}

void BattleSetup_StartScriptedWildBattle(void)
{
    LockPlayerFieldControls();
    gMain.savedCallback = CB2_EndScriptedWildBattle;
    gBattleTypeFlags = 0;
    CreateBattleStartTask(GetWildBattleTransition(), 0);
    IncrementGameStat(GAME_STAT_TOTAL_BATTLES);
    IncrementGameStat(GAME_STAT_WILD_BATTLES);
    IncrementDailyWildBattles();
    TryUpdateGymLeaderRematchFromWild();
}

void BattleSetup_StartScriptedDoubleWildBattle(void)
{
    LockPlayerFieldControls();
    gMain.savedCallback = CB2_EndScriptedWildBattle;
    gBattleTypeFlags = BATTLE_TYPE_DOUBLE;
    CreateBattleStartTask(GetWildBattleTransition(), 0);
    IncrementGameStat(GAME_STAT_TOTAL_BATTLES);
    IncrementGameStat(GAME_STAT_WILD_BATTLES);
    IncrementDailyWildBattles();
    TryUpdateGymLeaderRematchFromWild();
}

void BattleSetup_StartLatiBattle(void)
{
    LockPlayerFieldControls();
    gMain.savedCallback = CB2_EndScriptedWildBattle;
    gBattleTypeFlags = BATTLE_TYPE_LEGENDARY;
    CreateBattleStartTask(GetWildBattleTransition(), 0);
    IncrementGameStat(GAME_STAT_TOTAL_BATTLES);
    IncrementGameStat(GAME_STAT_WILD_BATTLES);
    IncrementDailyWildBattles();
    TryUpdateGymLeaderRematchFromWild();
}

void BattleSetup_StartLegendaryBattle(void)
{
    LockPlayerFieldControls();
    gMain.savedCallback = CB2_EndScriptedWildBattle;
    gBattleTypeFlags = BATTLE_TYPE_LEGENDARY;

    switch (GetMonData(&gEnemyParty[0], MON_DATA_SPECIES, NULL))
    {
    default:
    case SPECIES_GROUDON:
    case SPECIES_GROUDON_PRIMAL:
        CreateBattleStartTask(B_TRANSITION_GROUDON, MUS_VS_KYOGRE_GROUDON);
        break;
    case SPECIES_KYOGRE:
    case SPECIES_KYOGRE_PRIMAL:
        CreateBattleStartTask(B_TRANSITION_KYOGRE, MUS_VS_KYOGRE_GROUDON);
        break;
    case SPECIES_RAYQUAZA:
    case SPECIES_RAYQUAZA_MEGA:
        CreateBattleStartTask(B_TRANSITION_RAYQUAZA, MUS_VS_RAYQUAZA);
        break;
    case SPECIES_DEOXYS_NORMAL:
    case SPECIES_DEOXYS_ATTACK:
    case SPECIES_DEOXYS_DEFENSE:
    case SPECIES_DEOXYS_SPEED:
        CreateBattleStartTask(B_TRANSITION_BLUR, MUS_RG_VS_DEOXYS);
        break;
    case SPECIES_LUGIA:
    case SPECIES_HO_OH:
        CreateBattleStartTask(B_TRANSITION_BLUR, MUS_RG_VS_LEGEND);
        break;
    case SPECIES_MEW:
        CreateBattleStartTask(B_TRANSITION_GRID_SQUARES, MUS_VS_MEW);
        break;
    }

    IncrementGameStat(GAME_STAT_TOTAL_BATTLES);
    IncrementGameStat(GAME_STAT_WILD_BATTLES);
    IncrementDailyWildBattles();
    TryUpdateGymLeaderRematchFromWild();
}

void StartGroudonKyogreBattle(void)
{
    LockPlayerFieldControls();
    gMain.savedCallback = CB2_EndScriptedWildBattle;
    gBattleTypeFlags = BATTLE_TYPE_LEGENDARY;

    if (gGameVersion == VERSION_RUBY)
        CreateBattleStartTask(B_TRANSITION_ANGLED_WIPES, MUS_VS_KYOGRE_GROUDON); // GROUDON
    else
        CreateBattleStartTask(B_TRANSITION_RIPPLE, MUS_VS_KYOGRE_GROUDON); // KYOGRE

    IncrementGameStat(GAME_STAT_TOTAL_BATTLES);
    IncrementGameStat(GAME_STAT_WILD_BATTLES);
    IncrementDailyWildBattles();
    TryUpdateGymLeaderRematchFromWild();
}

void StartRegiBattle(void)
{
    u8 transitionId;
    u16 species;

    LockPlayerFieldControls();
    gMain.savedCallback = CB2_EndScriptedWildBattle;
    gBattleTypeFlags = BATTLE_TYPE_LEGENDARY;

    species = GetMonData(&gEnemyParty[0], MON_DATA_SPECIES);
    switch (species)
    {
    case SPECIES_REGIROCK:
        transitionId = B_TRANSITION_REGIROCK;
        break;
    case SPECIES_REGICE:
        transitionId = B_TRANSITION_REGICE;
        break;
    case SPECIES_REGISTEEL:
        transitionId = B_TRANSITION_REGISTEEL;
        break;
    default:
        transitionId = B_TRANSITION_GRID_SQUARES;
        break;
    }
    CreateBattleStartTask(transitionId, MUS_VS_REGI);

    IncrementGameStat(GAME_STAT_TOTAL_BATTLES);
    IncrementGameStat(GAME_STAT_WILD_BATTLES);
    IncrementDailyWildBattles();
    TryUpdateGymLeaderRematchFromWild();
}

static void DowngradeBadPoison(void)
{
    u8 i;
    u32 status = STATUS1_POISON;
    if (B_TOXIC_REVERSAL < GEN_5)
        return;
    for(i = 0; i < PARTY_SIZE; i++)
    {
        if (GetMonData(&gPlayerParty[i], MON_DATA_SANITY_HAS_SPECIES) && GetMonData(&gPlayerParty[i], MON_DATA_STATUS) == STATUS1_TOXIC_POISON)
            SetMonData(&gPlayerParty[i], MON_DATA_STATUS, &status);
    }
}

static void CB2_EndWildBattle(void)
{
    CpuFill16(0, (void *)(BG_PLTT), BG_PLTT_SIZE);
    ResetOamRange(0, 128);

    if (IsPlayerDefeated(gBattleOutcome) == TRUE && !InBattlePyramid() && !InBattlePike())
    {
        SetMainCallback2(CB2_WhiteOut);
    }
    else
    {
        SetMainCallback2(CB2_ReturnToField);
        DowngradeBadPoison();
        gFieldCallback = FieldCB_ReturnToFieldNoScriptCheckMusic;
    }
}

static void CB2_EndScriptedWildBattle(void)
{
    CpuFill16(0, (void *)(BG_PLTT), BG_PLTT_SIZE);
    ResetOamRange(0, 128);

    if (IsPlayerDefeated(gBattleOutcome) == TRUE)
    {
        if (InBattlePyramid())
            SetMainCallback2(CB2_ReturnToFieldContinueScriptPlayMapMusic);
        else
            SetMainCallback2(CB2_WhiteOut);
    }
    else
    {
        DowngradeBadPoison();
        SetMainCallback2(CB2_ReturnToFieldContinueScriptPlayMapMusic);
    }
}

u8 BattleSetup_GetTerrainId(void)
{
    u16 tileBehavior;
    s16 x, y;

    PlayerGetDestCoords(&x, &y);
    tileBehavior = MapGridGetMetatileBehaviorAt(x, y);

    if (MetatileBehavior_IsTallGrass(tileBehavior))
        return BATTLE_TERRAIN_GRASS;
    if (MetatileBehavior_IsLongGrass(tileBehavior))
        return BATTLE_TERRAIN_LONG_GRASS;
    if (MetatileBehavior_IsSandOrDeepSand(tileBehavior))
        return BATTLE_TERRAIN_SAND;

    switch (gMapHeader.mapType)
    {
    case MAP_TYPE_TOWN:
    case MAP_TYPE_CITY:
    case MAP_TYPE_ROUTE:
        break;
    case MAP_TYPE_UNDERGROUND:
        if (MetatileBehavior_IsIndoorEncounter(tileBehavior))
            return BATTLE_TERRAIN_BUILDING;
        if (MetatileBehavior_IsSurfableWaterOrUnderwater(tileBehavior))
            return BATTLE_TERRAIN_POND;
        return BATTLE_TERRAIN_CAVE;
    case MAP_TYPE_INDOOR:
    case MAP_TYPE_SECRET_BASE:
        return BATTLE_TERRAIN_BUILDING;
    case MAP_TYPE_UNDERWATER:
        return BATTLE_TERRAIN_UNDERWATER;
    case MAP_TYPE_OCEAN_ROUTE:
        if (MetatileBehavior_IsSurfableWaterOrUnderwater(tileBehavior))
            return BATTLE_TERRAIN_WATER;
        return BATTLE_TERRAIN_PLAIN;
    }
    if (MetatileBehavior_IsDeepOrOceanWater(tileBehavior))
        return BATTLE_TERRAIN_WATER;
    if (MetatileBehavior_IsSurfableWaterOrUnderwater(tileBehavior))
        return BATTLE_TERRAIN_POND;
    if (MetatileBehavior_IsMountain(tileBehavior))
        return BATTLE_TERRAIN_MOUNTAIN;
    if (TestPlayerAvatarFlags(PLAYER_AVATAR_FLAG_SURFING))
    {
        // Is BRIDGE_TYPE_POND_*?
        if (MetatileBehavior_GetBridgeType(tileBehavior) != BRIDGE_TYPE_OCEAN)
            return BATTLE_TERRAIN_POND;

        if (MetatileBehavior_IsBridgeOverWater(tileBehavior) == TRUE)
            return BATTLE_TERRAIN_WATER;
    }
    if (gSaveBlock1Ptr->location.mapGroup == MAP_GROUP(ROUTE113) && gSaveBlock1Ptr->location.mapNum == MAP_NUM(ROUTE113))
        return BATTLE_TERRAIN_SAND;
    if (GetSavedWeather() == WEATHER_SANDSTORM)
        return BATTLE_TERRAIN_SAND;

    return BATTLE_TERRAIN_PLAIN;
}

static u8 GetBattleTransitionTypeByMap(void)
{
    u16 tileBehavior;
    s16 x, y;

    PlayerGetDestCoords(&x, &y);
    tileBehavior = MapGridGetMetatileBehaviorAt(x, y);

    if (GetFlashLevel())
        return TRANSITION_TYPE_FLASH;

    if (MetatileBehavior_IsSurfableWaterOrUnderwater(tileBehavior))
        return TRANSITION_TYPE_WATER;

    switch (gMapHeader.mapType)
    {
    case MAP_TYPE_UNDERGROUND:
        return TRANSITION_TYPE_CAVE;
    case MAP_TYPE_UNDERWATER:
        return TRANSITION_TYPE_WATER;
    default:
        return TRANSITION_TYPE_NORMAL;
    }
}

static u16 GetSumOfPlayerPartyLevel(u8 numMons)
{
    u8 sum = 0;
    int i;

    for (i = 0; i < PARTY_SIZE; i++)
    {
        u32 species = GetMonData(&gPlayerParty[i], MON_DATA_SPECIES_OR_EGG);

        if (species != SPECIES_EGG && species != SPECIES_NONE && GetMonData(&gPlayerParty[i], MON_DATA_HP) != 0)
        {
            sum += GetMonData(&gPlayerParty[i], MON_DATA_LEVEL);
            if (--numMons == 0)
                break;
        }
    }
    return sum;
}

static u8 GetSumOfEnemyPartyLevel(u16 opponentId, u8 numMons)
{
    u8 i;
    u8 sum;
    u32 count = numMons;
    const struct TrainerMon *party;

    if (GetTrainerPartySizeFromId(opponentId) < count)
        count = GetTrainerPartySizeFromId(opponentId);

    sum = 0;

    party = GetTrainerPartyFromId(opponentId);
    for (i = 0; i < count && party != NULL; i++)
        sum += party[i].lvl;

    return sum;
}

u8 GetWildBattleTransition(void)
{
    u8 transitionType = GetBattleTransitionTypeByMap();
    u8 enemyLevel = GetMonData(&gEnemyParty[0], MON_DATA_LEVEL);
    u8 playerLevel = GetSumOfPlayerPartyLevel(1);

    if (enemyLevel < playerLevel)
    {
        if (InBattlePyramid())
            return B_TRANSITION_BLUR;
        else
            return sBattleTransitionTable_Wild[transitionType][0];
    }
    else
    {
        if (InBattlePyramid())
            return B_TRANSITION_GRID_SQUARES;
        else
            return sBattleTransitionTable_Wild[transitionType][1];
    }
}

u8 GetTrainerBattleTransition(void)
{
    u8 minPartyCount;
    u8 transitionType;
    u8 enemyLevel;
    u8 playerLevel;
    u32 trainerId = SanitizeTrainerId(gTrainerBattleOpponent_A);
    u32 trainerClass = GetTrainerClassFromId(gTrainerBattleOpponent_A);

    if (DoesTrainerHaveMugshot(trainerId))
        return B_TRANSITION_MUGSHOT;

    if (trainerClass == TRAINER_CLASS_TEAM_MAGMA
        || trainerClass == TRAINER_CLASS_MAGMA_LEADER
        || trainerClass == TRAINER_CLASS_MAGMA_ADMIN)
        return B_TRANSITION_MAGMA;

    if (trainerClass == TRAINER_CLASS_TEAM_AQUA
        || trainerClass == TRAINER_CLASS_AQUA_LEADER
        || trainerClass == TRAINER_CLASS_AQUA_ADMIN)
        return B_TRANSITION_AQUA;

    if (IsTrainerDoubleBattle(trainerId))
        minPartyCount = 2; // double battles always at least have 2 Pokémon.
    else
        minPartyCount = 1;

    transitionType = GetBattleTransitionTypeByMap();
    enemyLevel = GetSumOfEnemyPartyLevel(trainerId, minPartyCount);
    playerLevel = GetSumOfPlayerPartyLevel(minPartyCount);

    if (enemyLevel < playerLevel)
        return sBattleTransitionTable_Trainer[transitionType][0];
    else
        return sBattleTransitionTable_Trainer[transitionType][1];
}

#define RANDOM_TRANSITION(table)(table[Random() % ARRAY_COUNT(table)])
u8 GetSpecialBattleTransition(s32 id)
{
    u16 var;
    u8 enemyLevel = GetMonData(&gEnemyParty[0], MON_DATA_LEVEL);
    u8 playerLevel = GetSumOfPlayerPartyLevel(1);

    if (enemyLevel < playerLevel)
    {
        switch (id)
        {
        case B_TRANSITION_GROUP_TRAINER_HILL:
        case B_TRANSITION_GROUP_SECRET_BASE:
        case B_TRANSITION_GROUP_E_READER:
            return B_TRANSITION_POKEBALLS_TRAIL;
        case B_TRANSITION_GROUP_B_PYRAMID:
            return RANDOM_TRANSITION(sBattleTransitionTable_BattlePyramid);
        case B_TRANSITION_GROUP_B_DOME:
            return RANDOM_TRANSITION(sBattleTransitionTable_BattleDome);
        }

        if (VarGet(VAR_FRONTIER_BATTLE_MODE) != FRONTIER_MODE_LINK_MULTIS)
            return RANDOM_TRANSITION(sBattleTransitionTable_BattleFrontier);
    }
    else
    {
        switch (id)
        {
        case B_TRANSITION_GROUP_TRAINER_HILL:
        case B_TRANSITION_GROUP_SECRET_BASE:
        case B_TRANSITION_GROUP_E_READER:
            return B_TRANSITION_BIG_POKEBALL;
        case B_TRANSITION_GROUP_B_PYRAMID:
            return RANDOM_TRANSITION(sBattleTransitionTable_BattlePyramid);
        case B_TRANSITION_GROUP_B_DOME:
            return RANDOM_TRANSITION(sBattleTransitionTable_BattleDome);
        }

        if (VarGet(VAR_FRONTIER_BATTLE_MODE) != FRONTIER_MODE_LINK_MULTIS)
            return RANDOM_TRANSITION(sBattleTransitionTable_BattleFrontier);
    }

    var = gSaveBlock2Ptr->frontier.trainerIds[gSaveBlock2Ptr->frontier.curChallengeBattleNum * 2 + 0]
        + gSaveBlock2Ptr->frontier.trainerIds[gSaveBlock2Ptr->frontier.curChallengeBattleNum * 2 + 1];

    return sBattleTransitionTable_BattleFrontier[var % ARRAY_COUNT(sBattleTransitionTable_BattleFrontier)];
}

void ChooseStarter(void)
{
    SetMainCallback2(CB2_ChooseStarter);
    gMain.savedCallback = CB2_GiveStarter;
}

static void CB2_GiveStarter(void)
{
    u16 starterMon;

    *GetVarPointer(VAR_STARTER_MON) = gSpecialVar_Result;
    starterMon = GetStarterPokemon(gSpecialVar_Result);
    ScriptGiveMon(starterMon, 5, ITEM_NONE);
    ResetTasks();
    PlayBattleBGM();
    SetMainCallback2(CB2_StartFirstBattle);
    BattleTransition_Start(B_TRANSITION_BLUR);
}

static void CB2_StartFirstBattle(void)
{
    UpdatePaletteFade();
    RunTasks();

    if (IsBattleTransitionDone() == TRUE)
    {
        gBattleTypeFlags = BATTLE_TYPE_FIRST_BATTLE;
        gMain.savedCallback = CB2_EndFirstBattle;
        FreeAllWindowBuffers();
        SetMainCallback2(CB2_InitBattle);
        RestartWildEncounterImmunitySteps();
        ClearPoisonStepCounter();
        IncrementGameStat(GAME_STAT_TOTAL_BATTLES);
        IncrementGameStat(GAME_STAT_WILD_BATTLES);
        IncrementDailyWildBattles();
        TryUpdateGymLeaderRematchFromWild();
    }
}

static void CB2_EndFirstBattle(void)
{
    Overworld_ClearSavedMusic();
    DowngradeBadPoison();
    SetMainCallback2(CB2_ReturnToFieldContinueScriptPlayMapMusic);
}

static void TryUpdateGymLeaderRematchFromWild(void)
{
    if (GetGameStat(GAME_STAT_WILD_BATTLES) % 60 == 0)
        UpdateGymLeaderRematch();
}

static void TryUpdateGymLeaderRematchFromTrainer(void)
{
    if (GetGameStat(GAME_STAT_TRAINER_BATTLES) % 20 == 0)
        UpdateGymLeaderRematch();
}

// why not just use the macros? maybe its because they didnt want to uncast const every time?
static u32 TrainerBattleLoadArg32(const u8 *ptr)
{
    return T1_READ_32(ptr);
}

static u16 TrainerBattleLoadArg16(const u8 *ptr)
{
    return T1_READ_16(ptr);
}

static u8 TrainerBattleLoadArg8(const u8 *ptr)
{
    return T1_READ_8(ptr);
}

static u16 GetTrainerAFlag(void)
{
    return TRAINER_FLAGS_START + gTrainerBattleOpponent_A;
}

static u16 GetTrainerBFlag(void)
{
    return TRAINER_FLAGS_START + gTrainerBattleOpponent_B;
}

static bool32 IsPlayerDefeated(u32 battleOutcome)
{
    switch (battleOutcome)
    {
    case B_OUTCOME_LOST:
    case B_OUTCOME_DREW:
        return TRUE;
    case B_OUTCOME_WON:
    case B_OUTCOME_RAN:
    case B_OUTCOME_PLAYER_TELEPORTED:
    case B_OUTCOME_MON_FLED:
    case B_OUTCOME_CAUGHT:
        return FALSE;
    default:
        return FALSE;
    }
}

void ResetTrainerOpponentIds(void)
{
    gTrainerBattleOpponent_A = 0;
    gTrainerBattleOpponent_B = 0;
}

static void InitTrainerBattleVariables(void)
{
    sTrainerBattleMode = 0;
    if (gApproachingTrainerId == 0)
    {
        sTrainerAIntroSpeech = NULL;
        sTrainerADefeatSpeech = NULL;
        sTrainerABattleScriptRetAddr = NULL;
    }
    else
    {
        sTrainerBIntroSpeech = NULL;
        sTrainerBDefeatSpeech = NULL;
        sTrainerBBattleScriptRetAddr = NULL;
    }
    sTrainerObjectEventLocalId = 0;
    sTrainerVictorySpeech = NULL;
    sTrainerCannotBattleSpeech = NULL;
    sTrainerBattleEndScript = NULL;
}

static inline void SetU8(void *ptr, u8 value)
{
    *(u8 *)(ptr) = value;
}

static inline void SetU16(void *ptr, u16 value)
{
    *(u16 *)(ptr) = value;
}

static inline void SetU32(void *ptr, u32 value)
{
    *(u32 *)(ptr) = value;
}

static inline void SetPtr(const void *ptr, const void *value)
{
    *(const void **)(ptr) = value;
}

static void TrainerBattleLoadArgs(const struct TrainerBattleParameter *specs, const u8 *data)
{
    while (1)
    {
        switch (specs->ptrType)
        {
        case TRAINER_PARAM_LOAD_VAL_8BIT:
            SetU8(specs->varPtr, TrainerBattleLoadArg8(data));
            data += 1;
            break;
        case TRAINER_PARAM_LOAD_VAL_16BIT:
            SetU16(specs->varPtr, TrainerBattleLoadArg16(data));
            data += 2;
            break;
        case TRAINER_PARAM_LOAD_VAL_32BIT:
            SetU32(specs->varPtr, TrainerBattleLoadArg32(data));
            data += 4;
            break;
        case TRAINER_PARAM_CLEAR_VAL_8BIT:
            SetU8(specs->varPtr, 0);
            break;
        case TRAINER_PARAM_CLEAR_VAL_16BIT:
            SetU16(specs->varPtr, 0);
            break;
        case TRAINER_PARAM_CLEAR_VAL_32BIT:
            SetU32(specs->varPtr, 0);
            break;
        case TRAINER_PARAM_LOAD_SCRIPT_RET_ADDR:
            SetPtr(specs->varPtr, data);
            return;
        }
        specs++;
    }
}

void SetMapVarsToTrainer(void)
{
    if (sTrainerObjectEventLocalId != 0)
    {
        gSpecialVar_LastTalked = sTrainerObjectEventLocalId;
        gSelectedObjectEvent = GetObjectEventIdByLocalIdAndMap(sTrainerObjectEventLocalId, gSaveBlock1Ptr->location.mapNum, gSaveBlock1Ptr->location.mapGroup);
    }
}

const u8 *BattleSetup_ConfigureTrainerBattle(const u8 *data)
{
    if (TrainerBattleLoadArg8(data) != TRAINER_BATTLE_SET_TRAINER_B)
        InitTrainerBattleVariables();
    sTrainerBattleMode = TrainerBattleLoadArg8(data);

    switch (sTrainerBattleMode)
    {
    case TRAINER_BATTLE_SINGLE_NO_INTRO_TEXT:
        TrainerBattleLoadArgs(sOrdinaryNoIntroBattleParams, data);
        return EventScript_DoNoIntroTrainerBattle;
    case TRAINER_BATTLE_DOUBLE:
        TrainerBattleLoadArgs(sDoubleBattleParams, data);
        SetMapVarsToTrainer();
        return EventScript_TryDoDoubleTrainerBattle;
    case TRAINER_BATTLE_CONTINUE_SCRIPT:
        if (gApproachingTrainerId == 0)
        {
            TrainerBattleLoadArgs(sContinueScriptBattleParams, data);
            SetMapVarsToTrainer();
        }
        else
        {
            TrainerBattleLoadArgs(sTrainerBContinueScriptBattleParams, data);
        }
        return EventScript_TryDoNormalTrainerBattle;
    case TRAINER_BATTLE_CONTINUE_SCRIPT_NO_MUSIC:
        TrainerBattleLoadArgs(sContinueScriptBattleParams, data);
        SetMapVarsToTrainer();
        return EventScript_TryDoNormalTrainerBattle;
    case TRAINER_BATTLE_CONTINUE_SCRIPT_DOUBLE:
    case TRAINER_BATTLE_CONTINUE_SCRIPT_DOUBLE_NO_MUSIC:
        TrainerBattleLoadArgs(sContinueScriptDoubleBattleParams, data);
        SetMapVarsToTrainer();
        return EventScript_TryDoDoubleTrainerBattle;
#if FREE_MATCH_CALL == FALSE
    case TRAINER_BATTLE_REMATCH_DOUBLE:
        TrainerBattleLoadArgs(sDoubleBattleParams, data);
        SetMapVarsToTrainer();
        gTrainerBattleOpponent_A = GetRematchTrainerId(gTrainerBattleOpponent_A);
        return EventScript_TryDoDoubleRematchBattle;
    case TRAINER_BATTLE_REMATCH:
        TrainerBattleLoadArgs(sOrdinaryBattleParams, data);
        SetMapVarsToTrainer();
        gTrainerBattleOpponent_A = GetRematchTrainerId(gTrainerBattleOpponent_A);
        return EventScript_TryDoRematchBattle;
#endif //FREE_MATCH_CALL
    case TRAINER_BATTLE_PYRAMID:
        if (gApproachingTrainerId == 0)
        {
            TrainerBattleLoadArgs(sOrdinaryBattleParams, data);
            SetMapVarsToTrainer();
            gTrainerBattleOpponent_A = LocalIdToPyramidTrainerId(gSpecialVar_LastTalked);
        }
        else
        {
            TrainerBattleLoadArgs(sTrainerBOrdinaryBattleParams, data);
            gTrainerBattleOpponent_B = LocalIdToPyramidTrainerId(gSpecialVar_LastTalked);
        }
        return EventScript_TryDoNormalTrainerBattle;
    case TRAINER_BATTLE_SET_TRAINER_A:
        TrainerBattleLoadArgs(sOrdinaryBattleParams, data);
        return sTrainerBattleEndScript;
    case TRAINER_BATTLE_SET_TRAINER_B:
        TrainerBattleLoadArgs(sTrainerBOrdinaryBattleParams, data);
        return sTrainerBattleEndScript;
    case TRAINER_BATTLE_HILL:
        if (gApproachingTrainerId == 0)
        {
            TrainerBattleLoadArgs(sOrdinaryBattleParams, data);
            SetMapVarsToTrainer();
            gTrainerBattleOpponent_A = LocalIdToHillTrainerId(gSpecialVar_LastTalked);
        }
        else
        {
            TrainerBattleLoadArgs(sTrainerBOrdinaryBattleParams, data);
            gTrainerBattleOpponent_B = LocalIdToHillTrainerId(gSpecialVar_LastTalked);
        }
        return EventScript_TryDoNormalTrainerBattle;
    case TRAINER_BATTLE_TWO_TRAINERS_NO_INTRO:
        gNoOfApproachingTrainers = 2; // set TWO_OPPONENTS gBattleTypeFlags
        gApproachingTrainerId = 1; // prevent trainer approach
        TrainerBattleLoadArgs(sTrainerTwoTrainerBattleParams, data);
        return EventScript_DoNoIntroTrainerBattle;
    default:
        if (gApproachingTrainerId == 0)
        {
            TrainerBattleLoadArgs(sOrdinaryBattleParams, data);
            SetMapVarsToTrainer();
        }
        else
        {
            TrainerBattleLoadArgs(sTrainerBOrdinaryBattleParams, data);
        }
        return EventScript_TryDoNormalTrainerBattle;
    }
}

void ConfigureAndSetUpOneTrainerBattle(u8 trainerObjEventId, const u8 *trainerScript)
{
    gSelectedObjectEvent = trainerObjEventId;
    gSpecialVar_LastTalked = gObjectEvents[trainerObjEventId].localId;
    BattleSetup_ConfigureTrainerBattle(trainerScript + 1);
    ScriptContext_SetupScript(EventScript_StartTrainerApproach);
    LockPlayerFieldControls();
}

void ConfigureTwoTrainersBattle(u8 trainerObjEventId, const u8 *trainerScript)
{
    gSelectedObjectEvent = trainerObjEventId;
    gSpecialVar_LastTalked = gObjectEvents[trainerObjEventId].localId;
    BattleSetup_ConfigureTrainerBattle(trainerScript + 1);
}

void SetUpTwoTrainersBattle(void)
{
    ScriptContext_SetupScript(EventScript_StartTrainerApproach);
    LockPlayerFieldControls();
}

bool32 GetTrainerFlagFromScriptPointer(const u8 *data)
{
    u32 flag = TrainerBattleLoadArg16(data + 2);
    return FlagGet(TRAINER_FLAGS_START + flag);
}

// Set trainer's movement type so they stop and remain facing that direction
// Note: Only for trainers who are spoken to directly
//       For trainers who spot the player this is handled by PlayerFaceApproachingTrainer
void SetTrainerFacingDirection(void)
{
    struct ObjectEvent *objectEvent = &gObjectEvents[gSelectedObjectEvent];
    SetTrainerMovementType(objectEvent, GetTrainerFacingDirectionMovementType(objectEvent->facingDirection));
}

u8 GetTrainerBattleMode(void)
{
    return sTrainerBattleMode;
}

bool8 GetTrainerFlag(void)
{
    if (InBattlePyramid())
        return GetBattlePyramidTrainerFlag(gSelectedObjectEvent);
    else if (InTrainerHill())
        return GetHillTrainerFlag(gSelectedObjectEvent);
    else
        return FlagGet(GetTrainerAFlag());
}

static void SetBattledTrainersFlags(void)
{
    if (gTrainerBattleOpponent_B != 0)
        FlagSet(GetTrainerBFlag());
    FlagSet(GetTrainerAFlag());
}

static void UNUSED SetBattledTrainerFlag(void)
{
    FlagSet(GetTrainerAFlag());
}

bool8 HasTrainerBeenFought(u16 trainerId)
{
    return FlagGet(TRAINER_FLAGS_START + trainerId);
}

void SetTrainerFlag(u16 trainerId)
{
    FlagSet(TRAINER_FLAGS_START + trainerId);
}

void ClearTrainerFlag(u16 trainerId)
{
    FlagClear(TRAINER_FLAGS_START + trainerId);
}

void BattleSetup_StartTrainerBattle(void)
{
    if (gNoOfApproachingTrainers == 2)
        gBattleTypeFlags = (BATTLE_TYPE_DOUBLE | BATTLE_TYPE_TWO_OPPONENTS | BATTLE_TYPE_TRAINER);
    else
        gBattleTypeFlags = (BATTLE_TYPE_TRAINER);

    if (InBattlePyramid())
    {
        VarSet(VAR_TEMP_PLAYING_PYRAMID_MUSIC, 0);
        gBattleTypeFlags |= BATTLE_TYPE_PYRAMID;

        if (gNoOfApproachingTrainers == 2)
        {
            FillFrontierTrainersParties(1);
            ZeroMonData(&gEnemyParty[1]);
            ZeroMonData(&gEnemyParty[2]);
            ZeroMonData(&gEnemyParty[4]);
            ZeroMonData(&gEnemyParty[5]);
        }
        else
        {
            FillFrontierTrainerParty(1);
            ZeroMonData(&gEnemyParty[1]);
            ZeroMonData(&gEnemyParty[2]);
        }

        MarkApproachingPyramidTrainersAsBattled();
    }
    else if (InTrainerHillChallenge())
    {
        gBattleTypeFlags |= BATTLE_TYPE_TRAINER_HILL;

        if (gNoOfApproachingTrainers == 2)
            FillHillTrainersParties();
        else
            FillHillTrainerParty();

        SetHillTrainerFlag();
    }

    sNoOfPossibleTrainerRetScripts = gNoOfApproachingTrainers;
    gNoOfApproachingTrainers = 0;
    sShouldCheckTrainerBScript = FALSE;
    gWhichTrainerToFaceAfterBattle = 0;
    gMain.savedCallback = CB2_EndTrainerBattle;

    if (InBattlePyramid() || InTrainerHillChallenge())
        DoBattlePyramidTrainerHillBattle();
    else
        DoTrainerBattle();

    ScriptContext_Stop();
}

void BattleSetup_StartTrainerBattle_Debug(void)
{
    sNoOfPossibleTrainerRetScripts = gNoOfApproachingTrainers;
    gNoOfApproachingTrainers = 0;
    sShouldCheckTrainerBScript = FALSE;
    gWhichTrainerToFaceAfterBattle = 0;
    gMain.savedCallback = CB2_EndTrainerBattle;

    CreateBattleStartTask_Debug(GetWildBattleTransition(), 0);

    ScriptContext_Stop();
}

static void SaveChangesToPlayerParty(void)
{
    u8 i = 0, j = 0;
    u8 participatedPokemon = VarGet(B_VAR_SKY_BATTLE);
    for (i = 0; i < PARTY_SIZE; i++)
    {
        if ((participatedPokemon >> i & 1) == 1)
        {
            gSaveBlock1Ptr->playerParty[i] = gPlayerParty[j];
            j++;
        }
    }
}

static void HandleBattleVariantEndParty(void)
{
    if (B_FLAG_SKY_BATTLE == 0 || !FlagGet(B_FLAG_SKY_BATTLE))
        return;
    SaveChangesToPlayerParty();
    LoadPlayerParty();
    FlagClear(B_FLAG_SKY_BATTLE);
}

static void CB2_EndTrainerBattle(void)
{
    HandleBattleVariantEndParty();

    if (gTrainerBattleOpponent_A == TRAINER_SECRET_BASE)
    {
        DowngradeBadPoison();
        SetMainCallback2(CB2_ReturnToFieldContinueScriptPlayMapMusic);
    }
    else if (IsPlayerDefeated(gBattleOutcome) == TRUE)
    {
        if (InBattlePyramid() || InTrainerHillChallenge() || (!NoAliveMonsForPlayer()))
            SetMainCallback2(CB2_ReturnToFieldContinueScriptPlayMapMusic);
        else
            SetMainCallback2(CB2_WhiteOut);
    }
    else
    {
        SetMainCallback2(CB2_ReturnToFieldContinueScriptPlayMapMusic);
        DowngradeBadPoison();
        if (!InBattlePyramid() && !InTrainerHillChallenge())
        {
            RegisterTrainerInMatchCall();
            SetBattledTrainersFlags();
        }
    }
}

static void CB2_EndRematchBattle(void)
{
    if (gTrainerBattleOpponent_A == TRAINER_SECRET_BASE)
    {
        DowngradeBadPoison();
        SetMainCallback2(CB2_ReturnToFieldContinueScriptPlayMapMusic);
    }
    else if (IsPlayerDefeated(gBattleOutcome) == TRUE)
    {
        SetMainCallback2(CB2_WhiteOut);
    }
    else
    {
        SetMainCallback2(CB2_ReturnToFieldContinueScriptPlayMapMusic);
        RegisterTrainerInMatchCall();
        SetBattledTrainersFlags();
        HandleRematchVarsOnBattleEnd();
        DowngradeBadPoison();
    }
}

void BattleSetup_StartRematchBattle(void)
{
    gBattleTypeFlags = BATTLE_TYPE_TRAINER;
    gMain.savedCallback = CB2_EndRematchBattle;
    DoTrainerBattle();
    ScriptContext_Stop();
}

void ShowTrainerIntroSpeech(void)
{
    if (InBattlePyramid())
    {
        if (gNoOfApproachingTrainers == 0 || gNoOfApproachingTrainers == 1)
            CopyPyramidTrainerSpeechBefore(LocalIdToPyramidTrainerId(gSpecialVar_LastTalked));
        else
            CopyPyramidTrainerSpeechBefore(LocalIdToPyramidTrainerId(gObjectEvents[gApproachingTrainers[gApproachingTrainerId].objectEventId].localId));

        ShowFieldMessageFromBuffer();
    }
    else if (InTrainerHillChallenge())
    {
        if (gNoOfApproachingTrainers == 0 || gNoOfApproachingTrainers == 1)
            CopyTrainerHillTrainerText(TRAINER_HILL_TEXT_INTRO, LocalIdToHillTrainerId(gSpecialVar_LastTalked));
        else
            CopyTrainerHillTrainerText(TRAINER_HILL_TEXT_INTRO, LocalIdToHillTrainerId(gObjectEvents[gApproachingTrainers[gApproachingTrainerId].objectEventId].localId));

        ShowFieldMessageFromBuffer();
    }
    else
    {
        ShowFieldMessage(GetIntroSpeechOfApproachingTrainer());
    }
}

const u8 *BattleSetup_GetScriptAddrAfterBattle(void)
{
    if (sTrainerBattleEndScript != NULL)
        return sTrainerBattleEndScript;
    else
        return EventScript_TestSignpostMsg;
}

const u8 *BattleSetup_GetTrainerPostBattleScript(void)
{
    if (sShouldCheckTrainerBScript)
    {
        sShouldCheckTrainerBScript = FALSE;
        if (sTrainerBBattleScriptRetAddr != NULL)
        {
            gWhichTrainerToFaceAfterBattle = 1;
            return sTrainerBBattleScriptRetAddr;
        }
    }
    else
    {
        if (sTrainerABattleScriptRetAddr != NULL)
        {
            gWhichTrainerToFaceAfterBattle = 0;
            return sTrainerABattleScriptRetAddr;
        }
    }

    return EventScript_TryGetTrainerScript;
}

void ShowTrainerCantBattleSpeech(void)
{
    ShowFieldMessage(GetTrainerCantBattleSpeech());
}

void PlayTrainerEncounterMusic(void)
{
    u16 trainerId;
    u16 music;

    if (gApproachingTrainerId == 0)
        trainerId = gTrainerBattleOpponent_A;
    else
        trainerId = gTrainerBattleOpponent_B;

    if (sTrainerBattleMode != TRAINER_BATTLE_CONTINUE_SCRIPT_NO_MUSIC
        && sTrainerBattleMode != TRAINER_BATTLE_CONTINUE_SCRIPT_DOUBLE_NO_MUSIC)
    {
        switch (GetTrainerEncounterMusicId(trainerId))
        {
        case TRAINER_ENCOUNTER_MUSIC_MALE:
            music = MUS_ENCOUNTER_MALE;
            break;
        case TRAINER_ENCOUNTER_MUSIC_FEMALE:
            music = MUS_ENCOUNTER_FEMALE;
            break;
        case TRAINER_ENCOUNTER_MUSIC_GIRL:
            music = MUS_ENCOUNTER_GIRL;
            break;
        case TRAINER_ENCOUNTER_MUSIC_INTENSE:
            music = MUS_ENCOUNTER_INTENSE;
            break;
        case TRAINER_ENCOUNTER_MUSIC_COOL:
            music = MUS_ENCOUNTER_COOL;
            break;
        case TRAINER_ENCOUNTER_MUSIC_AQUA:
            music = MUS_ENCOUNTER_AQUA;
            break;
        case TRAINER_ENCOUNTER_MUSIC_MAGMA:
            music = MUS_ENCOUNTER_MAGMA;
            break;
        case TRAINER_ENCOUNTER_MUSIC_SWIMMER:
            music = MUS_ENCOUNTER_SWIMMER;
            break;
        case TRAINER_ENCOUNTER_MUSIC_TWINS:
            music = MUS_ENCOUNTER_TWINS;
            break;
        case TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR:
            music = MUS_ENCOUNTER_ELITE_FOUR;
            break;
        case TRAINER_ENCOUNTER_MUSIC_HIKER:
            music = MUS_ENCOUNTER_HIKER;
            break;
        case TRAINER_ENCOUNTER_MUSIC_INTERVIEWER:
            music = MUS_ENCOUNTER_INTERVIEWER;
            break;
        case TRAINER_ENCOUNTER_MUSIC_RICH:
            music = MUS_ENCOUNTER_RICH;
            break;
        default:
            music = MUS_ENCOUNTER_SUSPICIOUS;
        }
        PlayNewMapMusic(music);
    }
}

static const u8 *ReturnEmptyStringIfNull(const u8 *string)
{
    if (string == NULL)
        return gText_EmptyString2;
    else
        return string;
}

static const u8 *GetIntroSpeechOfApproachingTrainer(void)
{
    if (gApproachingTrainerId == 0)
        return ReturnEmptyStringIfNull(sTrainerAIntroSpeech);
    else
        return ReturnEmptyStringIfNull(sTrainerBIntroSpeech);
}

const u8 *GetTrainerALoseText(void)
{
    const u8 *string;

    if (gTrainerBattleOpponent_A == TRAINER_SECRET_BASE)
        string = GetSecretBaseTrainerLoseText();
    else
        string = sTrainerADefeatSpeech;

    StringExpandPlaceholders(gStringVar4, ReturnEmptyStringIfNull(string));
    return gStringVar4;
}

const u8 *GetTrainerBLoseText(void)
{
    StringExpandPlaceholders(gStringVar4, ReturnEmptyStringIfNull(sTrainerBDefeatSpeech));
    return gStringVar4;
}

const u8 *GetTrainerWonSpeech(void)
{
    return ReturnEmptyStringIfNull(sTrainerVictorySpeech);
}

static const u8 *GetTrainerCantBattleSpeech(void)
{
    return ReturnEmptyStringIfNull(sTrainerCannotBattleSpeech);
}

s32 FirstBattleTrainerIdToRematchTableId(const struct RematchTrainer *table, u16 trainerId)
{
    s32 i;

    for (i = 0; i < REMATCH_TABLE_ENTRIES; i++)
    {
        if (table[i].trainerIds[0] == trainerId)
            return i;
    }

    return -1;
}

s32 TrainerIdToRematchTableId(const struct RematchTrainer *table, u16 trainerId)
{
    s32 i, j;

    for (i = 0; i < REMATCH_TABLE_ENTRIES; i++)
    {
        for (j = 0; j < REMATCHES_COUNT; j++)
        {
            if (table[i].trainerIds[j] == 0) break; // one line required to match -g
            if (table[i].trainerIds[j] == trainerId)
                return i;
        }
    }

    return -1;
}

// Returns TRUE if the given trainer (by their entry in the rematch table) is not allowed to have rematches.
// This applies to the Elite Four and Victory Road Wally (if he's not been defeated yet)
static inline bool32 IsRematchForbidden(s32 rematchTableId)
{
    if (rematchTableId >= REMATCH_ELITE_FOUR_ENTRIES)
        return TRUE;
    else if (rematchTableId == REMATCH_WALLY_VR)
        return !FlagGet(FLAG_DEFEATED_WALLY_VICTORY_ROAD);
    else
        return FALSE;
}

static void SetRematchIdForTrainer(const struct RematchTrainer *table, u32 tableId)
{
#if FREE_MATCH_CALL == FALSE
    s32 i;

    for (i = 1; i < REMATCHES_COUNT; i++)
    {
        u16 trainerId = table[tableId].trainerIds[i];

        if (trainerId == 0)
            break;
        if (!HasTrainerBeenFought(trainerId))
            break;
    }

    gSaveBlock1Ptr->trainerRematches[tableId] = i;
#endif //FREE_MATCH_CALL
}

static inline bool32 DoesCurrentMapMatchRematchTrainerMap(s32 i, const struct RematchTrainer *table, u16 mapGroup, u16 mapNum)
{
    return table[i].mapGroup == mapGroup && table[i].mapNum == mapNum;
}

bool32 TrainerIsMatchCallRegistered(s32 i)
{
    return FlagGet(FLAG_MATCH_CALL_REGISTERED + i);
}

#if FREE_MATCH_CALL == FALSE
static bool32 UpdateRandomTrainerRematches(const struct RematchTrainer *table, u16 mapGroup, u16 mapNum)
{
    s32 i;

    if (CheckBagHasItem(ITEM_VS_SEEKER, 1) && I_VS_SEEKER_CHARGING != 0)
        return FALSE;

    for (i = 0; i <= REMATCH_SPECIAL_TRAINER_START; i++)
    {
        if (DoesCurrentMapMatchRematchTrainerMap(i,table,mapGroup,mapNum) && !IsRematchForbidden(i))
            continue;

        if (gSaveBlock1Ptr->trainerRematches[i] != 0)
        {
            // Trainer already wants a rematch. Don't bother updating it.
            return TRUE;
        }
        else if (TrainerIsMatchCallRegistered(i) && ((Random() % 100) <= 30))
            // 31% chance of getting a rematch.
        {
            SetRematchIdForTrainer(table, i);
            return TRUE;
        }
    }

    return FALSE;
}
#endif //FREE_MATCH_CALL

void UpdateRematchIfDefeated(s32 rematchTableId)
{
    if (HasTrainerBeenFought(gRematchTable[rematchTableId].trainerIds[0]) == TRUE)
        SetRematchIdForTrainer(gRematchTable, rematchTableId);
}

static bool32 DoesSomeoneWantRematchIn_(const struct RematchTrainer *table, u16 mapGroup, u16 mapNum)
{
#if FREE_MATCH_CALL == FALSE
    s32 i;

    for (i = 0; i < REMATCH_TABLE_ENTRIES; i++)
    {
        if (table[i].mapGroup == mapGroup && table[i].mapNum == mapNum && gSaveBlock1Ptr->trainerRematches[i] != 0)
            return TRUE;
    }
#endif //FREE_MATCH_CALL

    return FALSE;
}

static bool32 IsRematchTrainerIn_(const struct RematchTrainer *table, u16 mapGroup, u16 mapNum)
{
    s32 i;

    for (i = 0; i < REMATCH_TABLE_ENTRIES; i++)
    {
        if (table[i].mapGroup == mapGroup && table[i].mapNum == mapNum)
            return TRUE;
    }

    return FALSE;
}

static bool8 IsFirstTrainerIdReadyForRematch(const struct RematchTrainer *table, u16 firstBattleTrainerId)
{
    s32 tableId = FirstBattleTrainerIdToRematchTableId(table, firstBattleTrainerId);

    if (tableId == -1)
        return FALSE;
    if (tableId >= MAX_REMATCH_ENTRIES)
        return FALSE;
#if FREE_MATCH_CALL == FALSE
    if (gSaveBlock1Ptr->trainerRematches[tableId] == 0)
        return FALSE;
#endif //FREE_MATCH_CALL

    return TRUE;
}

static bool8 IsTrainerReadyForRematch_(const struct RematchTrainer *table, u16 trainerId)
{
    s32 tableId = TrainerIdToRematchTableId(table, trainerId);

    if (tableId == -1)
        return FALSE;
    if (tableId >= MAX_REMATCH_ENTRIES)
        return FALSE;
#if FREE_MATCH_CALL == FALSE
    if (gSaveBlock1Ptr->trainerRematches[tableId] == 0)
        return FALSE;
#endif //FREE_MATCH_CALL

    return TRUE;
}

u16 GetRematchTrainerIdFromTable(const struct RematchTrainer *table, u16 firstBattleTrainerId)
{
    const struct RematchTrainer *trainerEntry;
    s32 i;
    s32 tableId = FirstBattleTrainerIdToRematchTableId(table, firstBattleTrainerId);

    if (tableId == -1)
        return FALSE;

    trainerEntry = &table[tableId];
    for (i = 1; i < REMATCHES_COUNT; i++)
    {
        if (trainerEntry->trainerIds[i] == 0) // previous entry was this trainer's last one
            return trainerEntry->trainerIds[i - 1];
        if (!HasTrainerBeenFought(trainerEntry->trainerIds[i]))
            return trainerEntry->trainerIds[i];
    }

    return trainerEntry->trainerIds[REMATCHES_COUNT - 1]; // already beaten at max stage
}

static u16 GetLastBeatenRematchTrainerIdFromTable(const struct RematchTrainer *table, u16 firstBattleTrainerId)
{
    const struct RematchTrainer *trainerEntry;
    s32 i;
    s32 tableId = FirstBattleTrainerIdToRematchTableId(table, firstBattleTrainerId);

    if (tableId == -1)
        return FALSE;

    trainerEntry = &table[tableId];
    for (i = 1; i < REMATCHES_COUNT; i++)
    {
        if (trainerEntry->trainerIds[i] == 0) // previous entry was this trainer's last one
            return trainerEntry->trainerIds[i - 1];
        if (!HasTrainerBeenFought(trainerEntry->trainerIds[i]))
            return trainerEntry->trainerIds[i - 1];
    }

    return trainerEntry->trainerIds[REMATCHES_COUNT - 1]; // already beaten at max stage
}

static void ClearTrainerWantRematchState(const struct RematchTrainer *table, u16 firstBattleTrainerId)
{
#if FREE_MATCH_CALL == FALSE
    s32 tableId = TrainerIdToRematchTableId(table, firstBattleTrainerId);

    if (tableId != -1)
        gSaveBlock1Ptr->trainerRematches[tableId] = 0;
#endif //FREE_MATCH_CALL
}

static u32 GetTrainerMatchCallFlag(u32 trainerId)
{
    s32 i;

    for (i = 0; i < REMATCH_TABLE_ENTRIES; i++)
    {
        if (gRematchTable[i].trainerIds[0] == trainerId)
            return FLAG_MATCH_CALL_REGISTERED + i;
    }

    return 0xFFFF;
}

static void RegisterTrainerInMatchCall(void)
{
    if (FlagGet(FLAG_HAS_MATCH_CALL))
    {
        u32 matchCallFlagId = GetTrainerMatchCallFlag(gTrainerBattleOpponent_A);
        if (matchCallFlagId != 0xFFFF)
            FlagSet(matchCallFlagId);
    }
}

static bool8 WasSecondRematchWon(const struct RematchTrainer *table, u16 firstBattleTrainerId)
{
    s32 tableId = FirstBattleTrainerIdToRematchTableId(table, firstBattleTrainerId);

    if (tableId == -1)
        return FALSE;
    if (!HasTrainerBeenFought(table[tableId].trainerIds[1]))
        return FALSE;

    return TRUE;
}

#if FREE_MATCH_CALL == FALSE
static bool32 HasAtLeastFiveBadges(void)
{
    s32 i, count;

    for (count = 0, i = 0; i < ARRAY_COUNT(sBadgeFlags); i++)
    {
        if (FlagGet(sBadgeFlags[i]) == TRUE)
        {
            if (++count >= 5)
                return TRUE;
        }
    }

    return FALSE;
}
#endif //FREE_MATCH_CALL

#define STEP_COUNTER_MAX 255

void IncrementRematchStepCounter(void)
{
#if FREE_MATCH_CALL == FALSE
    if (!HasAtLeastFiveBadges())
        return;
    
    if (IsVsSeekerEnabled())
        return;

    if (gSaveBlock1Ptr->trainerRematchStepCounter >= STEP_COUNTER_MAX)
        gSaveBlock1Ptr->trainerRematchStepCounter = STEP_COUNTER_MAX;
    else
        gSaveBlock1Ptr->trainerRematchStepCounter++;
#endif //FREE_MATCH_CALL
}

#if FREE_MATCH_CALL == FALSE
static bool32 IsRematchStepCounterMaxed(void)
{
    if (HasAtLeastFiveBadges() && gSaveBlock1Ptr->trainerRematchStepCounter >= STEP_COUNTER_MAX)
        return TRUE;
    else
        return FALSE;
}

void TryUpdateRandomTrainerRematches(u16 mapGroup, u16 mapNum)
{
    if (IsRematchStepCounterMaxed() && UpdateRandomTrainerRematches(gRematchTable, mapGroup, mapNum) == TRUE)
        gSaveBlock1Ptr->trainerRematchStepCounter = 0;
}
#endif //FREE_MATCH_CALL

bool32 DoesSomeoneWantRematchIn(u16 mapGroup, u16 mapNum)
{
    return DoesSomeoneWantRematchIn_(gRematchTable, mapGroup, mapNum);
}

bool32 IsRematchTrainerIn(u16 mapGroup, u16 mapNum)
{
    return IsRematchTrainerIn_(gRematchTable, mapGroup, mapNum);
}

#if FREE_MATCH_CALL == FALSE
static u16 GetRematchTrainerId(u16 trainerId)
{
    if (FlagGet(I_VS_SEEKER_CHARGING) && (I_VS_SEEKER_CHARGING != 0))
        return GetRematchTrainerIdVSSeeker(trainerId);
    else
        return GetRematchTrainerIdFromTable(gRematchTable, trainerId);
}
#endif //FREE_MATCH_CALL

u16 GetLastBeatenRematchTrainerId(u16 trainerId)
{
    return GetLastBeatenRematchTrainerIdFromTable(gRematchTable, trainerId);
}

bool8 ShouldTryRematchBattle(void)
{
    if (IsFirstTrainerIdReadyForRematch(gRematchTable, gTrainerBattleOpponent_A))
        return TRUE;

    return WasSecondRematchWon(gRematchTable, gTrainerBattleOpponent_A);
}

bool8 IsTrainerReadyForRematch(void)
{
    return IsTrainerReadyForRematch_(gRematchTable, gTrainerBattleOpponent_A);
}

static void HandleRematchVarsOnBattleEnd(void)
{
    if ((gBattleTypeFlags & BATTLE_TYPE_TRAINER) && (I_VS_SEEKER_CHARGING != 0))
        ClearRematchMovementByTrainerId();

    ClearTrainerWantRematchState(gRematchTable, gTrainerBattleOpponent_A);
    SetBattledTrainersFlags();
}

void ShouldTryGetTrainerScript(void)
{
    if (sNoOfPossibleTrainerRetScripts > 1)
    {
        sNoOfPossibleTrainerRetScripts = 0;
        sShouldCheckTrainerBScript = TRUE;
        gSpecialVar_Result = TRUE;
    }
    else
    {
        sShouldCheckTrainerBScript = FALSE;
        gSpecialVar_Result = FALSE;
    }
}

u16 CountBattledRematchTeams(u16 trainerId)
{
    s32 i;

    if (HasTrainerBeenFought(gRematchTable[trainerId].trainerIds[0]) != TRUE)
        return 0;

    for (i = 1; i < REMATCHES_COUNT; i++)
    {
        if (gRematchTable[trainerId].trainerIds[i] == 0)
            break;
        if (!HasTrainerBeenFought(gRematchTable[trainerId].trainerIds[i]))
            break;
    }

    return i;
}
