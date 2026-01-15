#include "constants/event_objects.h"
#include "constants/items.h"
#include "constants/moves.h"
#include "constants/species.h"

struct LilycoveContestLadyValues
{
    u16 monGfxId;
    enum Species monSpecies;
    const u8 *monName;
    const u8 *categoryName;
    const u8 *contestName;
};

struct LilycoveQuizLadyQuestions
{
    const u16 *question;
    u16 answer;
    u16 prize;
};

struct LilycoveFavorLady
{
    const u8 *request;
    const u16 *acceptedItems;
    u16 prize;
};

static const u16 sLilycoveLadyGfxId[] =
{
    [LILYCOVE_LADY_QUIZ]    = OBJ_EVENT_GFX_WOMAN_4,
    [LILYCOVE_LADY_FAVOR]   = OBJ_EVENT_GFX_WOMAN_2,
    [LILYCOVE_LADY_CONTEST] = OBJ_EVENT_GFX_GIRL_2,
};

// Contest Lady data
static const struct LilycoveContestLadyValues sContestLadyValues[] =
{
    [CONTEST_CATEGORY_COOL] = {
        .monGfxId = OBJ_EVENT_GFX_SPECIES(CONTEST_LADY_COOL),
        .monSpecies = SPECIES_CONTEST_LADY_COOL,
        .monName = COMPOUND_STRING("Handsome"),
        .categoryName = COMPOUND_STRING("coolness"),
        .contestName = gText_CoolnessContest,
    },
    [CONTEST_CATEGORY_BEAUTY] = {
        .monGfxId = OBJ_EVENT_GFX_SPECIES(CONTEST_LADY_BEAUTY),
        .monSpecies = SPECIES_CONTEST_LADY_BEAUTY,
        .monName = COMPOUND_STRING("Vinny"),
        .categoryName = COMPOUND_STRING("beauty"),
        .contestName = gText_BeautyContest,
    },
    [CONTEST_CATEGORY_CUTE] = {
        .monGfxId = OBJ_EVENT_GFX_SPECIES(CONTEST_LADY_CUTE),
        .monSpecies = SPECIES_CONTEST_LADY_CUTE,
        .monName = COMPOUND_STRING("Moreme"),
        .categoryName = COMPOUND_STRING("cuteness"),
        .contestName = gText_CutenessContest,
    },
    [CONTEST_CATEGORY_SMART] = {
        .monGfxId = OBJ_EVENT_GFX_SPECIES(CONTEST_LADY_SMART),
        .monSpecies = SPECIES_CONTEST_LADY_SMART,
        .monName = COMPOUND_STRING("Ironhard"),
        .categoryName = COMPOUND_STRING("smartness"),
        .contestName = gText_SmartnessContest,
    },
    [CONTEST_CATEGORY_TOUGH] = {
        .monGfxId = OBJ_EVENT_GFX_SPECIES(CONTEST_LADY_TOUGH),
        .monSpecies = SPECIES_CONTEST_LADY_TOUGH,
        .monName = COMPOUND_STRING("Muscle"),
        .categoryName = COMPOUND_STRING("toughness"),
        .contestName = gText_ToughnessContest,
    },
};

// Quiz Lady data
static const u16 sQuizLadyQuestion1[QUIZ_QUESTION_LEN] =
{
    EC_WORD_WHICH,
    EC_WORD_STORES,
    EC_WORD_INFORMATION,
    EC_WORD_ON,
    EC_WORD_POKEMON,
    EC_WORD_QUES,
    EC_WORD_CAMERA,
    EC_WORD_POKEDEX,
    EC_WORD_POKENAV
};

static const u16 sQuizLadyQuestion2[QUIZ_QUESTION_LEN] =
{
    EC_WORD_WHICH,
    EC_WORD_ISN_T,
    EC_WORD_A,
    EC_WORD_GAME,
    EC_WORD_VERSION,
    EC_WORD_QUES,
    EC_WORD_RUBY,
    EC_WORD_SAPPHIRE,
    EC_WORD_DARK
};

static const u16 sQuizLadyQuestion3[QUIZ_QUESTION_LEN] =
{
    EC_WORD_HOW,
    EC_WORD_DO,
    EC_WORD_POKEMON,
    EC_WORD_EVOLVE,
    EC_WORD_QUES,
    EC_EMPTY_WORD,
    EC_WORD_LEVEL,
    EC_WORD_INSOMNIA,
    EC_WORD_CUTE_CHARM
};

static const u16 sQuizLadyQuestion4[QUIZ_QUESTION_LEN] =
{
    EC_WORD_WHICH,
    EC_WORD_IS,
    EC_WORD_THE,
    EC_WORD_PRETTY,
    EC_WORD_ITEM,
    EC_WORD_QUES,
    EC_WORD_COLD,
    EC_WORD_FLOWERS,
    EC_WORD_MACHINE
};

static const u16 sQuizLadyQuestion5[QUIZ_QUESTION_LEN] =
{
    EC_WORD_WHICH,
    EC_WORD_ITEM,
    EC_WORD_DO,
    EC_WORD_YOU,
    EC_WORD_BREAK,
    EC_WORD_QUES,
    EC_WORD_EGG,
    EC_WORD_MAIL,
    EC_WORD_PHONE
};

static const u16 sQuizLadyQuestion6[QUIZ_QUESTION_LEN] =
{
    EC_WORD_WHICH,
    EC_WORD_WILL,
    EC_WORD_STOP,
    EC_MOVE2(CONFUSION),
    EC_WORD_QUES,
    EC_EMPTY_WORD,
    EC_WORD_ILLUMINATE,
    EC_WORD_OWN_TEMPO,
    EC_WORD_SWIFT_SWIM
};

static const u16 sQuizLadyQuestion7[QUIZ_QUESTION_LEN] =
{
    EC_WORD_WHICH,
    EC_WORD_OF,
    EC_WORD_THESE,
    EC_WORD_IS,
    EC_WORD_MUSIC,
    EC_WORD_QUES,
    EC_WORD_FLYING,
    EC_WORD_STEEL,
    EC_WORD_ROCK
};

static const u16 sQuizLadyQuestion8[QUIZ_QUESTION_LEN] =
{
    EC_WORD_WHICH,
    EC_WORD_WILL,
    EC_MOVE2(BLOCK),
    EC_WORD_ESCAPE,
    EC_WORD_QUES,
    EC_EMPTY_WORD,
    EC_WORD_RUN_AWAY,
    EC_WORD_SHADOW_TAG,
    EC_WORD_WONDER_GUARD
};

static const u16 sQuizLadyQuestion9[QUIZ_QUESTION_LEN] =
{
    EC_WORD_WHICH,
    EC_WORD_WILL,
    EC_WORD_STOP,
    EC_WORD_POISON,
    EC_WORD_QUES,
    EC_EMPTY_WORD,
    EC_WORD_GUTS,
    EC_WORD_IMMUNITY,
    EC_WORD_SHED_SKIN
};

static const u16 sQuizLadyQuestion10[QUIZ_QUESTION_LEN] =
{
    EC_WORD_WHICH,
    EC_WORD_GOES,
    EC_WORD_WITH,
    EC_WORD_CENTER,
    EC_WORD_QUES,
    EC_EMPTY_WORD,
    EC_WORD_POKEDEX,
    EC_WORD_POKEMON,
    EC_WORD_POKENAV
};

static const u16 sQuizLadyQuestion11[QUIZ_QUESTION_LEN] =
{
    EC_WORD_WHICH,
    EC_WORD_STORES,
    EC_WORD_YOUR,
    EC_WORD_POKEMON,
    EC_WORD_QUES,
    EC_EMPTY_WORD,
    EC_WORD_PC,
    EC_WORD_DEPT_STORE,
    EC_WORD_TELEVISION
};

static const u16 sQuizLadyQuestion12[QUIZ_QUESTION_LEN] =
{
    EC_WORD_WHICH,
    EC_WORD_MACHINE,
    EC_WORD_GIVES,
    EC_WORD_YOU,
    EC_WORD_INFORMATION,
    EC_WORD_QUES,
    EC_WORD_BIKE,
    EC_WORD_LOCOMOTIVE,
    EC_WORD_TELEVISION
};

static const u16 sQuizLadyQuestion13[QUIZ_QUESTION_LEN] =
{
    EC_WORD_A,
    EC_WORD_POKEMON,
    EC_WORD_WAS,
    EC_WORD_ONCE,
    EC_WORD_THIS,
    EC_WORD_QUES,
    EC_WORD_PHONE,
    EC_WORD_PLUSH_DOLL,
    EC_WORD_LETTER
};

static const u16 sQuizLadyQuestion14[QUIZ_QUESTION_LEN] =
{
    EC_WORD_STEEL,
    EC_WORD_IS,
    EC_WORD_STRONG,
    EC_WORD_VERSUS,
    EC_WORD_WHICH,
    EC_WORD_QUES,
    EC_WORD_ICE,
    EC_WORD_GROUND,
    EC_EMPTY_WORD
};

static const u16 sQuizLadyQuestion15[QUIZ_QUESTION_LEN] =
{
    EC_WORD_DARK,
    EC_WORD_IS,
    EC_WORD_WEAK,
    EC_WORD_VERSUS,
    EC_WORD_WHICH,
    EC_WORD_QUES,
    EC_WORD_PSYCHIC,
    EC_WORD_FIGHTING,
    EC_EMPTY_WORD
};

static const u16 sQuizLadyQuestion16[QUIZ_QUESTION_LEN] =
{
    EC_WORD_GHOST,
    EC_WORD_IS,
    EC_WORD_WEAK,
    EC_WORD_VERSUS,
    EC_WORD_WHICH,
    EC_WORD_QUES,
    EC_WORD_NORMAL,
    EC_WORD_DARK,
    EC_EMPTY_WORD
};

static const struct LilycoveQuizLadyQuestions sQuizLadyQuestions[] =
{
    {.question = sQuizLadyQuestion1,  .answer = EC_WORD_POKEDEX,    .prize = ITEM_SPELON_BERRY},
    {.question = sQuizLadyQuestion2,  .answer = EC_WORD_DARK,       .prize = ITEM_PAMTRE_BERRY},
    {.question = sQuizLadyQuestion3,  .answer = EC_WORD_LEVEL,      .prize = ITEM_EXP_CANDY_XL},
    {.question = sQuizLadyQuestion4,  .answer = EC_WORD_FLOWERS,    .prize = ITEM_MAX_ETHER},
    {.question = sQuizLadyQuestion5,  .answer = EC_WORD_EGG,        .prize = ITEM_MAX_ETHER},
    {.question = sQuizLadyQuestion6,  .answer = EC_WORD_OWN_TEMPO,  .prize = ITEM_MAX_ETHER},
    {.question = sQuizLadyQuestion7,  .answer = EC_WORD_ROCK,       .prize = ITEM_WATMEL_BERRY},
    {.question = sQuizLadyQuestion8,  .answer = EC_WORD_SHADOW_TAG, .prize = ITEM_BELUE_BERRY},
    {.question = sQuizLadyQuestion9,  .answer = EC_WORD_IMMUNITY,   .prize = ITEM_DURIN_BERRY},
    {.question = sQuizLadyQuestion10, .answer = EC_WORD_POKEMON,    .prize = ITEM_LUXURY_BALL},
    {.question = sQuizLadyQuestion11, .answer = EC_WORD_PC,         .prize = ITEM_COMET_SHARD},
    {.question = sQuizLadyQuestion12, .answer = EC_WORD_TELEVISION, .prize = ITEM_BIG_PEARL},
    {.question = sQuizLadyQuestion13, .answer = EC_WORD_PLUSH_DOLL, .prize = ITEM_STAR_PIECE},
    {.question = sQuizLadyQuestion14, .answer = EC_WORD_ICE,        .prize = ITEM_RARE_CANDY},
    {.question = sQuizLadyQuestion15, .answer = EC_WORD_FIGHTING,   .prize = ITEM_RARE_CANDY},
    {.question = sQuizLadyQuestion16, .answer = EC_WORD_DARK,       .prize = ITEM_DUSK_BALL},
};

// Favor Lady data
static const u16 sFavorLadyAcceptedItems_Slippery[] =
{
    ITEM_REPEL,
    ITEM_SUPER_REPEL,
    ITEM_MAX_REPEL,
    ITEM_ANTIDOTE,
    ITEM_PARALYZE_HEAL,
    ITEM_BURN_HEAL,
    ITEM_BELUE_BERRY,
    ITEM_AWAKENING,
    ITEM_ICE_HEAL,
    ITEM_REVIVE,
    ITEM_MAX_REVIVE,
    ITEM_ENERGY_POWDER,
    ITEM_NONE
};

static const u16 sFavorLadyAcceptedItems_Roundish[] =
{
    ITEM_PEARL,
    ITEM_BIG_PEARL,
    ITEM_NUGGET,
    ITEM_BIG_NUGGET,
    ITEM_LIGHT_BALL,
    ITEM_HARD_STONE,
    ITEM_SMOKE_BALL,
    ITEM_SHOAL_SHELL,
    ITEM_TINY_MUSHROOM,
    ITEM_BIG_MUSHROOM,
    ITEM_IRON_BALL,
    ITEM_PECHA_BERRY,
    ITEM_ASPEAR_BERRY,
    ITEM_ORAN_BERRY,
    ITEM_GREPA_BERRY,
    ITEM_MAGOST_BERRY,
    ITEM_WATMEL_BERRY,
    ITEM_POKE_BALL,
    ITEM_GREAT_BALL,
    ITEM_ULTRA_BALL,
    ITEM_MASTER_BALL,
    ITEM_PREMIER_BALL,
    ITEM_NET_BALL,
    ITEM_NEST_BALL,
    ITEM_DIVE_BALL,
    ITEM_DUSK_BALL,
    ITEM_TIMER_BALL,
    ITEM_QUICK_BALL,
    ITEM_REPEAT_BALL,
    ITEM_LUXURY_BALL,
    ITEM_LEVEL_BALL,
    ITEM_LURE_BALL,
    ITEM_MOON_BALL,
    ITEM_FRIEND_BALL,
    ITEM_LOVE_BALL,
    ITEM_FAST_BALL,
    ITEM_HEAVY_BALL,
    ITEM_DREAM_BALL,
    ITEM_SAFARI_BALL,
    ITEM_SPORT_BALL,
    ITEM_PARK_BALL,
    ITEM_BEAST_BALL,
    ITEM_CHERISH_BALL,
    ITEM_NONE
};

static const u16 sFavorLadyAcceptedItems_Whamish[] =
{
    ITEM_REVIVAL_HERB,
    ITEM_POTION,
    ITEM_FRESH_WATER,
    ITEM_SODA_POP,
    ITEM_LEMONADE,
    ITEM_HARD_STONE,
    ITEM_LIGHT_BALL,
    ITEM_LAVA_COOKIE,
    ITEM_IRON_BALL,
    ITEM_LAGGING_TAIL,
    ITEM_CHESTO_BERRY,
    ITEM_NANAB_BERRY,
    ITEM_WEPEAR_BERRY,
    ITEM_KELPSY_BERRY,
    ITEM_NOMEL_BERRY,
    ITEM_DURIN_BERRY,
    ITEM_HEAVY_BALL,
    ITEM_NONE
};

static const u16 sFavorLadyAcceptedItems_Shiny[] =
{
    ITEM_HEAL_POWDER,
    ITEM_X_SPEED,
    ITEM_X_ATTACK,
    ITEM_X_DEFENSE,
    ITEM_BLUE_FLUTE,
    ITEM_YELLOW_FLUTE,
    ITEM_RED_FLUTE,
    ITEM_BLACK_FLUTE,
    ITEM_WHITE_FLUTE,
    ITEM_NUGGET,
    ITEM_SHINY_STONE,
    ITEM_STARDUST,
    ITEM_STAR_PIECE,
    ITEM_PEARL,
    ITEM_BIG_PEARL,
    ITEM_NUGGET,
    ITEM_BIG_NUGGET,
    ITEM_TWISTED_SPOON,
    ITEM_SILVER_POWDER,
    ITEM_BRIGHT_POWDER,
    ITEM_LUXURY_BALL,
    ITEM_PREMIER_BALL,
    ITEM_NONE
};

static const u16 sFavorLadyAcceptedItems_Sticky[] =
{
    ITEM_ENERGY_ROOT,
    ITEM_BERRY_JUICE,
    ITEM_STICKY_BARB,
    ITEM_FULL_RESTORE,
    ITEM_MAX_POTION,
    ITEM_DIRE_HIT,
    ITEM_X_ACCURACY,
    ITEM_GUARD_SPEC,
    ITEM_WATMEL_BERRY,
    ITEM_LEFTOVERS,
    ITEM_TINY_MUSHROOM,
    ITEM_HEART_SCALE,
    ITEM_MAX_HONEY,
    ITEM_NONE
};

static const u16 sFavorLadyAcceptedItems_Pointy[] =
{
    ITEM_QUICK_CLAW,
    ITEM_POISON_BARB,
    ITEM_SHARP_BEAK,
    ITEM_DRAGON_FANG,
    ITEM_DEEP_SEA_TOOTH,
    ITEM_STICKY_BARB,
    ITEM_TAMATO_BERRY,
    ITEM_DURIN_BERRY,
    ITEM_PETAYA_BERRY,
    ITEM_SALAC_BERRY,
    ITEM_STARDUST,
    ITEM_STAR_PIECE,
    ITEM_COMET_SHARD,
    ITEM_MAX_REVIVE,
    ITEM_BEAST_BALL,
    ITEM_NONE
};

static const struct LilycoveFavorLady sFavorLady[] =
{
    {.request = COMPOUND_STRING("slippery"), .acceptedItems = sFavorLadyAcceptedItems_Slippery, .prize = ITEM_LUXURY_BALL},
    {.request = COMPOUND_STRING("roundish"), .acceptedItems = sFavorLadyAcceptedItems_Roundish, .prize = ITEM_NUGGET},
    {.request = COMPOUND_STRING("wham-ish"), .acceptedItems = sFavorLadyAcceptedItems_Whamish,  .prize = ITEM_PROTEIN},
    {.request = COMPOUND_STRING("shiny"),    .acceptedItems = sFavorLadyAcceptedItems_Shiny,    .prize = ITEM_HEART_SCALE},
    {.request = COMPOUND_STRING("sticky"),   .acceptedItems = sFavorLadyAcceptedItems_Sticky,   .prize = ITEM_RARE_CANDY},
    {.request = COMPOUND_STRING("pointy"),   .acceptedItems = sFavorLadyAcceptedItems_Pointy,   .prize = ITEM_BALM_MUSHROOM},
};
