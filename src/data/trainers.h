#define BOSS_AI_FLAGS .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON
#define MINI_BOSS_AI_FLAGS .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON

#define IDEAL_ATTACKER_PHYSICAL \
    .nature = NATURE_ADAMANT,   \
    EV_SPREAD_ATK_SPE_HP

#define IDEAL_ATTACKER_SPECIAL \
    .nature = NATURE_MODEST,   \
    EV_SPREAD_SPA_SPE_HP

#define IDEAL_SPEEDSTER_PHYSICAL \
    .nature = NATURE_JOLLY,      \
    EV_SPREAD_ATK_SPE_HP

#define IDEAL_SPEEDSTER_SPECIAL \
    .nature = NATURE_TIMID,     \
    EV_SPREAD_SPA_SPE_HP

#define TRAINER_CLASS_PIC(class)           \
    .trainerClass = TRAINER_CLASS_##class, \
    .trainerPic = TRAINER_PIC_##class

#define TRAINER_CONDENSED(class)           \
    .trainerClass = TRAINER_CLASS_##class, \
    .trainerPic = TRAINER_PIC_##class,     \
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_##class


// Trainer defines
#define YOUNGSTER_INFO    TRAINER_CONDENSED(YOUNGSTER)
#define BUG_CATCHER_INFO  TRAINER_CONDENSED(BUG_CATCHER)
#define BUG_MANIAC_INFO   TRAINER_CONDENSED(BUG_MANIAC)
#define POKE_MANIAC_INFO  TRAINER_CONDENSED(POKE_MANIAC)
#define FISHERMAN_INFO    TRAINER_CONDENSED(FISHERMAN)
#define HIKER_INFO        TRAINER_CONDENSED(HIKER)
#define RUIN_MANIAC_INFO  TRAINER_CONDENSED(RUIN_MANIAC)
#define SAILOR_INFO       TRAINER_CONDENSED(SAILOR)
#define GUITARIST_INFO    TRAINER_CONDENSED(GUITARIST)
#define COLLECTOR_INFO    TRAINER_CONDENSED(COLLECTOR)
#define KINDLER_INFO      TRAINER_CONDENSED(KINDLER)
#define NINJA_BOY_INFO    TRAINER_CONDENSED(NINJA_BOY)
#define BIRD_KEEPER_INFO  TRAINER_CONDENSED(BIRD_KEEPER)
#define GENTLEMAN_INFO    TRAINER_CONDENSED(GENTLEMAN)
#define DRAGON_TAMER_INFO TRAINER_CONDENSED(DRAGON_TAMER)

#define LASS_INFO            \
    TRAINER_CONDENSED(LASS), \
    .gender = TRAINER_GENDER_FEMALE

#define RICH_MON(Level) \
    .lvl = Level,       \
    .heldItem = Level < REMATCH_5_LEVEL_6 ? ITEM_NUGGET : ITEM_BIG_NUGGET

#define RICH_BOY_INFO            \
    TRAINER_CONDENSED(RICH_BOY), \
    .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE}

#define RICH_BOY_MON(Level) \
    RICH_MON(Level),        \
    .isShiny = TRUE

#define LADY_INFO                    \
    TRAINER_CONDENSED(LADY),         \
    .gender = TRAINER_GENDER_FEMALE, \
    .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE}

#define TWINS_INFO                   \
    TRAINER_CONDENSED(TWINS),        \
    .gender = TRAINER_GENDER_FEMALE, \
    .battleType = TRAINER_BATTLE_TYPE_DOUBLES

#define SCHOOLKID_M_INFO   TRAINER_CONDENSED(SCHOOLKID_M)

#define SCHOOLKID_F_INFO            \
    TRAINER_CONDENSED(SCHOOLKID_F), \
    .gender = TRAINER_GENDER_FEMALE

#define TUBER_M_INFO TRAINER_CONDENSED(TUBER_M)

#define TUBER_F_INFO            \
    TRAINER_CONDENSED(TUBER_F), \
    .gender = TRAINER_GENDER_FEMALE

#define BEAUTY_INFO            \
    TRAINER_CONDENSED(BEAUTY), \
    .gender = TRAINER_GENDER_FEMALE

#define POKE_FAN_F_INFO            \
    TRAINER_CONDENSED(POKE_FAN_F), \
    .gender = TRAINER_GENDER_FEMALE

#define POKE_FAN_M_INFO TRAINER_CONDENSED(POKE_FAN_M)

#define POKE_FAN_MON(Level) \
    .lvl = Level,           \
    .heldItem = Level < REMATCH_5_LEVEL_6 ? ITEM_ORAN_BERRY : ITEM_SITRUS_BERRY

#define AROMA_LADY_INFO            \
    TRAINER_CONDENSED(AROMA_LADY), \
    .gender = TRAINER_GENDER_FEMALE

#define BLACK_BELT_INFO TRAINER_CONDENSED(BLACK_BELT)

#define BATTLE_GIRL_INFO            \
    TRAINER_CONDENSED(BATTLE_GIRL), \
    .gender = TRAINER_GENDER_FEMALE

#define PSYCHIC_M_INFO TRAINER_CONDENSED(PSYCHIC_M)

#define PSYCHIC_F_INFO            \
    TRAINER_CONDENSED(PSYCHIC_F), \
    .gender = TRAINER_GENDER_FEMALE

#define TRIATHLETE_M_CYCLING_INFO TRAINER_CONDENSED(CYCLING_TRIATHLETE_M)

#define TRIATHLETE_F_CYCLING_INFO            \
    TRAINER_CONDENSED(CYCLING_TRIATHLETE_F), \
    .gender = TRAINER_GENDER_FEMALE

#define TRIATHLETE_M_RUNNING_INFO TRAINER_CONDENSED(RUNNING_TRIATHLETE_M)

#define TRIATHLETE_F_RUNNING_INFO            \
    TRAINER_CONDENSED(RUNNING_TRIATHLETE_F), \
    .gender = TRAINER_GENDER_FEMALE

#define TRIATHLETE_M_SWIMMING_INFO TRAINER_CONDENSED(SWIMMING_TRIATHLETE_M)

#define TRIATHLETE_F_SWIMMING_INFO            \
    TRAINER_CONDENSED(SWIMMING_TRIATHLETE_F), \
    .gender = TRAINER_GENDER_FEMALE

#define TRIATHLETE_MON(Level, IV)                                            \
    .lvl = Level,                                                            \
    .ev = TRAINER_PARTY_EVS(MAX_PER_STAT_EVS, 0, 0, MAX_PER_STAT_EVS, 0, 0), \
    .iv = TRAINER_PARTY_IVS(MAX_PER_STAT_IVS, IV, IV, MAX_PER_STAT_IVS, IV, IV)

#define POKEMON_BREEDER_M_INFO            \
    TRAINER_CONDENSED(POKEMON_BREEDER_M), \
    .partySize = 6

#define POKEMON_BREEDER_F_INFO            \
    TRAINER_CONDENSED(POKEMON_BREEDER_F), \
    .gender = TRAINER_GENDER_FEMALE,      \
    .partySize = 6

#define POKEMON_BREEDER_MON(Level) \
    .lvl = Level,                  \
    PERFECT_IVS

#define TEAMMATES_INFO               \
    TRAINER_CONDENSED(TEAMMATES),    \
    .gender = TRAINER_GENDER_FEMALE, \
    .battleType = TRAINER_BATTLE_TYPE_DOUBLES

#define CAMPER_INFO TRAINER_CONDENSED(CAMPER)

#define PICNICKER_INFO               \
    TRAINER_CONDENSED(PICNICKER), \
    .gender = TRAINER_GENDER_FEMALE

#define ACE_TRAINER_M_INFO TRAINER_CONDENSED(ACE_TRAINER_M)

#define ACE_TRAINER_F_INFO            \
    TRAINER_CONDENSED(ACE_TRAINER_F), \
    .gender = TRAINER_GENDER_FEMALE

#define PARASOL_LADY_INFO            \
    TRAINER_CONDENSED(PARASOL_LADY), \
    .gender = TRAINER_GENDER_FEMALE

#define EXPERT_M_INFO TRAINER_CONDENSED(EXPERT_M)

#define EXPERT_F_INFO            \
    TRAINER_CONDENSED(EXPERT_F), \
    .gender = TRAINER_GENDER_FEMALE

#define OLD_COUPLE_INFO            \
    TRAINER_CONDENSED(OLD_COUPLE), \
    .battleType = TRAINER_BATTLE_TYPE_DOUBLES

#define SWIMMER_M_INFO TRAINER_CONDENSED(SWIMMER_M)

#define SWIMMER_F_INFO            \
    TRAINER_CONDENSED(SWIMMER_F), \
    .gender = TRAINER_GENDER_FEMALE

#define SIS_AND_BRO_INFO            \
    TRAINER_CONDENSED(SIS_AND_BRO), \
    .battleType = TRAINER_BATTLE_TYPE_DOUBLES

#define YOUNG_COUPLE_INFO            \
    TRAINER_CONDENSED(YOUNG_COUPLE), \
    .battleType = TRAINER_BATTLE_TYPE_DOUBLES

#define POKEMON_RANGER_M_INFO            \
    TRAINER_CONDENSED(POKEMON_RANGER_M), \
    .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE}

#define POKEMON_RANGER_F_INFO            \
    TRAINER_CONDENSED(POKEMON_RANGER_F), \
    .gender = TRAINER_GENDER_FEMALE,     \
    .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE}

#define HEX_MANIAC_INFO             \
    TRAINER_CONDENSED(HEX_MANIAC), \
    .gender = TRAINER_GENDER_FEMALE


//FRLG
//Still needs to be converted to TRAINER_CONDENSED
#define ROCKER_INFO                 \
    TRAINER_CLASS_PIC(ROCKER_FRLG), \
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE

#define COOL_COUPLE_INFO                 \
    TRAINER_CLASS_PIC(COOL_COUPLE_FRLG), \
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL

#define BIKER_INFO                 \
    TRAINER_CLASS_PIC(BIKER_FRLG), \
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE

#define CUE_BALL_INFO                 \
    TRAINER_CLASS_PIC(CUE_BALL_FRLG), \
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE

#define SUPER_NERD_INFO                 \
    TRAINER_CLASS_PIC(SUPER_NERD_FRLG), \
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS

#define SCIENTIST_INFO                 \
    TRAINER_CLASS_PIC(SCIENTIST_FRLG), \
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS

#define ENGINEER_INFO                 \
    TRAINER_CLASS_PIC(ENGINEER_FRLG), \
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE

#define BURGLAR_INFO                 \
    TRAINER_CLASS_PIC(BURGLAR_FRLG), \
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS

#define CRUSH_KIN_INFO                 \
    TRAINER_CLASS_PIC(CRUSH_KIN_FRLG), \
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE

#define JUGGLER_INFO                 \
    TRAINER_CLASS_PIC(JUGGLER_FRLG), \
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER

#define GAMBLER_INFO                 \
    TRAINER_CLASS_PIC(GAMER_FRLG), \
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE

#define TAMER_INFO                 \
    TRAINER_CLASS_PIC(TAMER_FRLG), \
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER

#define CHANNELER_INFO                 \
    TRAINER_CLASS_PIC(CHANNELER_FRLG), \
    .gender = TRAINER_GENDER_FEMALE,   \
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS

#define PAINTER_INFO                 \
    TRAINER_CLASS_PIC(PAINTER_FRLG), \
    .gender = TRAINER_GENDER_FEMALE, \
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE

#define YOUNGSTER_FRLG_INFO            \
    TRAINER_CLASS_PIC(YOUNGSTER_FRLG), \
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE

#define GENTLEMAN_FRLG_INFO            \
    TRAINER_CLASS_PIC(GENTLEMAN_FRLG), \
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_RICH

#define HIKER_FRLG_INFO                 \
    TRAINER_CLASS_PIC(HIKER_FRLG), \
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER

#define BUG_CATCHER_FRLG_INFO            \
    TRAINER_CLASS_PIC(BUG_CATCHER_FRLG), \
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE

#define SAILOR_FRLG_INFO            \
    TRAINER_CLASS_PIC(SAILOR_FRLG), \
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE

#define CAMPER_FRLG_INFO            \
    TRAINER_CLASS_PIC(CAMPER_FRLG), \
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE

#define POKE_MANIAC_FRLG_INFO           \
    TRAINER_CLASS_PIC(POKEMANIAC_FRLG), \
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS

#define BLACK_BELT_FRLG_INFO            \
    TRAINER_CLASS_PIC(BLACK_BELT_FRLG), \
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE

#define BIRD_KEEPER_FRLG_INFO            \
    TRAINER_CLASS_PIC(BIRD_KEEPER_FRLG), \
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL

#define FISHERMAN_FRLG_INFO            \
    TRAINER_CLASS_PIC(FISHERMAN_FRLG), \
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER

#define RUIN_MANIAC_FRLG_INFO            \
    TRAINER_CLASS_PIC(RUIN_MANIAC_FRLG), \
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER

#define LASS_FRLG_INFO               \
    TRAINER_CLASS_PIC(LASS_FRLG),    \
    .gender = TRAINER_GENDER_FEMALE, \
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE

#define BEAUTY_FRLG_INFO             \
    TRAINER_CLASS_PIC(BEAUTY_FRLG),  \
    .gender = TRAINER_GENDER_FEMALE, \
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE

#define PICNICKER_FRLG_INFO            \
    TRAINER_CLASS_PIC(PICNICKER_FRLG), \
    .gender = TRAINER_GENDER_FEMALE,   \
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_GIRL

#if !IS_FRLG
[DIFFICULTY_NORMAL][TRAINER_NONE] =
{
    .trainerName = _(""),
    .trainerClass = TRAINER_CLASS_PKMN_TRAINER_1,
    .trainerPic = TRAINER_PIC_HIKER,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
    .partySize = 0,
    .party = NULL,
},

// Important trainers
#define RIVAL_ROUTE_103 0
#define RIVAL_RUSTBORO  1
#define RIVAL_ROUTE_110 2
#define RIVAL_ROUTE_119 3
#define RIVAL_LILYCOVE  4

#define RIVAL_ROUTE_103_STARTER_LEVEL  5
#define RIVAL_RUSTBORO_STARTER_LEVEL  CAP_GYM_1
#define RIVAL_ROUTE_110_STARTER_LEVEL CAP_MAUVILLE_WALLY
#define RIVAL_ROUTE_119_STARTER_LEVEL CAP_RIVAL_119
#define RIVAL_LILYCOVE_STARTER_LEVEL  CAP_LILYCOVE

#define BRENDAN 1
#define MAY     2

#define BRENDAN_INFO                                \
    .trainerName = _("Rafi"),                       \
    .trainerClass = TRAINER_CLASS_RIVAL,            \
    .trainerPic = TRAINER_PIC_BRENDAN,              \
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE, \
    BOSS_AI_FLAGS

#define MAY_INFO                                      \
    .trainerName = _("Kim"),                          \
    .trainerClass = TRAINER_CLASS_RIVAL,              \
    .trainerPic = TRAINER_PIC_MAY,                    \
    .gender = TRAINER_GENDER_FEMALE,                  \
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE, \
    BOSS_AI_FLAGS

#define RIVAL_STARTER(Location, Rival, Rival2)                                                                   \
    {                                                                                                            \
    .lvl = Location##_STARTER_LEVEL,                                                                             \
    .species = SPECIES_##Rival2##_STARTER + (Location < RIVAL_ROUTE_110 ? 0 : (Location < RIVAL_ROUTE_119 ? 1 : 2)),        \
    .nature = Rival == BRENDAN ? NATURE_SERIOUS : NATURE_QUIRKY,                                                 \
    PERFECT_IVS,                                                                                                 \
    .gender = Rival,                                                                                             \
    .heldItem = Location < RIVAL_LILYCOVE ? ITEM_NONE : (Rival == BRENDAN ? ITEM_MACHAMPITE : ITEM_CORVIKNITE), \
    }

#define RIVAL_SECOND_BRENDAN(Location)                                      \
    {                                                                       \
    .lvl = Location##_STARTER_LEVEL - (Location < RIVAL_ROUTE_119 ? 2 : 1), \
    Location < RIVAL_ROUTE_119 ? SPECIES_NIDORAN_M : (Location < RIVAL_LILYCOVE ? SPECIES_NIDORINO : SPECIES_NIDOKING), \
    .ability = ABILITY_POISON_POINT,                                        \
    IVS(18),                                                                \
    .nickname = COMPOUND_STRING("Arnold"),                                  \
    }

#define RIVAL_SECOND_MAY(Location)                                          \
    {                                                                       \
    .lvl = Location##_STARTER_LEVEL - (Location < RIVAL_ROUTE_119 ? 2 : 1), \
    Location < RIVAL_ROUTE_119 ? SPECIES_NIDORAN_F : (Location < RIVAL_LILYCOVE ? SPECIES_NIDORINA : SPECIES_NIDOQUEEN), \
    .ability = ABILITY_POISON_POINT,                                        \
    IVS(18),                                                                \
    }

#define RIVAL_WHISMUR(Location, Rival)                                      \
    {                                                                       \
    .lvl = Location##_STARTER_LEVEL - (Location < RIVAL_ROUTE_119 ? 2 : 1), \
    .species = Location < RIVAL_ROUTE_119 ? SPECIES_WHISMUR : (Location < RIVAL_LILYCOVE ? SPECIES_LOUDRED : SPECIES_EXPLOUD), \
    .ability = Rival == BRENDAN,                                            \
    IVS(18),                                                                \
    .gender = Rival,                                                        \
    }

#define RIVAL_MON(Location, Species, Ability, Rival)                             \
    {                                                                            \
    .lvl = Location##_STARTER_LEVEL - 2,                                         \
    .species = SPECIES_##Species,                                                \
    .ability = ABILITY_##Ability,                                                \
    IVS(Location < RIVAL_ROUTE_119 ? 6 : (Location < RIVAL_LILYCOVE ? 12 : 18)), \
    .gender = Rival,                                                             \
    }

#define RIVAL_BATTLES(Rival, Rival2, Mon3, Evo3, Ability3, Mon4, Evo4, Ability4) \
[DIFFICULTY_NORMAL][TRAINER_##Rival##_ROUTE_103] =                             \
{                                                                              \
    Rival##_INFO,                                                              \
    .partySize = 1,                                                            \
    .party = (const struct TrainerMon[]) {                                     \
        RIVAL_STARTER(RIVAL_ROUTE_103, Rival, Rival2),                         \
    },                                                                         \
},                                                                             \
                                                                               \
[DIFFICULTY_NORMAL][TRAINER_##Rival##_RUSTBORO] =                              \
{                                                                              \
    Rival##_INFO,                                                              \
    .partySize = 2,                                                            \
    .party = (const struct TrainerMon[]) {                                     \
        RIVAL_WHISMUR(RIVAL_RUSTBORO, Rival),                                  \
        RIVAL_STARTER(RIVAL_RUSTBORO, Rival, Rival2),                          \
    },                                                                         \
},                                                                             \
                                                                               \
[DIFFICULTY_NORMAL][TRAINER_##Rival##_ROUTE_110] =                             \
{                                                                              \
    Rival##_INFO,                                                              \
    .partySize = 3,                                                            \
    .party = (const struct TrainerMon[]) {                                     \
        RIVAL_MON(RIVAL_ROUTE_110, Mon3, Ability3, Rival),                     \
        RIVAL_WHISMUR(RIVAL_ROUTE_110, Rival),                                 \
        RIVAL_STARTER(RIVAL_ROUTE_110, Rival, Rival2),                         \
    },                                                                         \
},                                                                             \
                                                                               \
[DIFFICULTY_NORMAL][TRAINER_##Rival##_ROUTE_119] =                             \
{                                                                              \
    Rival##_INFO,                                                              \
    .partySize = 4,                                                            \
    .party = (const struct TrainerMon[]) {                                     \
        RIVAL_MON(RIVAL_ROUTE_119, Mon4, Ability4, Rival),                     \
        RIVAL_MON(RIVAL_ROUTE_119, Evo3, Ability3, Rival),                     \
        RIVAL_WHISMUR(RIVAL_ROUTE_119, Rival),                                 \
        RIVAL_STARTER(RIVAL_ROUTE_119, Rival, Rival2),                         \
    },                                                                         \
},                                                                             \
                                                                               \
[DIFFICULTY_NORMAL][TRAINER_##Rival##_LILYCOVE] =                              \
{                                                                              \
    Rival##_INFO,                                                              \
    .partySize = 5,                                                            \
    .party = (const struct TrainerMon[]) {                                     \
        {                                                                      \
        .lvl = RIVAL_LILYCOVE_STARTER_LEVEL - 2,                               \
        .species = SPECIES_VIBRAVA,                                            \
        .ability = ABILITY_LEVITATE,                                           \
        IVS(18),                                                               \
        .gender = Rival,                                                       \
        },                                                                     \
        RIVAL_MON(RIVAL_LILYCOVE, Evo4, Ability4, Rival),                      \
        RIVAL_MON(RIVAL_LILYCOVE, Evo3, Ability3, Rival),                      \
        RIVAL_WHISMUR(RIVAL_LILYCOVE, Rival),                                  \
        RIVAL_STARTER(RIVAL_LILYCOVE, Rival, Rival2),                          \
    },                                                                         \
}

RIVAL_BATTLES(BRENDAN, RAFI, CORPHISH, CRAWDAUNT, HYPER_CUTTER, SLUGMA, MAGCARGO, FLAME_BODY),
RIVAL_BATTLES(MAY, KIM, FLITTLE, ESPATHRA, OPPORTUNIST, PSYDUCK, GOLDUCK, CLOUD_NINE),

#define ENDGAME_REMATCH_2_LEVEL 80
#define ENDGAME_REMATCH_3_LEVEL 85
#define ENDGAME_REMATCH_4_LEVEL 90

#define ACE   0
#define TIER2 2
#define TIER3 5

#define REMATCH_MON(Species, Tier, Rematch, ...)                             \
    .lvl = ENDGAME_REMATCH_##Rematch##_LEVEL - Tier,                         \
    .species = SPECIES_##Species,                                            \
    PERFECT_IVS,                                                             \
    .heldItem = Tier <= TIER2 ? DEFAULT(ITEM_NONE, __VA_ARGS__) : ITEM_NONE, \
    .ball = Tier == ACE ? ITEM_POKE_BALL : ITEM_NONE

#define WALLY_INFO                                  \
    .trainerName = _("Wally"),                      \
    .trainerClass = TRAINER_CLASS_RIVAL,            \
    .trainerPic = TRAINER_PIC_WALLY,                \
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE, \
    BOSS_AI_FLAGS

#define RALPH(Level)                                                                                              \
    .lvl = Level,                                                                                                 \
    .species = Level < 20 ? SPECIES_WALLY_STARTER : (Level < 30 ? (SPECIES_WALLY_STARTER + 1) : SPECIES_GALLADE), \
    .ability = 1,                                                                                                 \
    .gender = TRAINER_MON_MALE,                                                                                   \
    IVS(24),                                                                                                      \
    .nickname = COMPOUND_STRING("Ralph")

#define WALLY_BUDEW(Level)                                                                     \
    .lvl = Level,                                                                              \
    .species = Level < 25 ? SPECIES_BUDEW : (Level < 35 ? SPECIES_ROSELIA : SPECIES_ROSERADE), \
    .ability = ABILITY_NATURAL_CURE,                                                           \
    .gender = TRAINER_MON_FEMALE

#define WALLY_SWABLU(Level)                                   \
    .lvl = Level,                                             \
    .species = Level < 35 ? SPECIES_SWABLU : SPECIES_ALTARIA, \
    .ability = ABILITY_FLUFFY,                                \
    .gender = TRAINER_MON_MALE

//CAP_MAUVILLE_WALLY isn't used because Ralph needs to be unevolved
[DIFFICULTY_NORMAL][TRAINER_WALLY_MAUVILLE] =
{
    WALLY_INFO,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        RALPH(19),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_WALLY_VERDANTURF] =
{
    WALLY_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        WALLY_BUDEW(CAP_GYM_3 - 3),
        IVS(3),
        },
        {
        RALPH(CAP_GYM_3 - 1),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_WALLY_ROUTE_114] =
{
    WALLY_INFO,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        WALLY_SWABLU(CAP_METEOR_FALLS - 3),
        IVS(6),
        },
        {
        WALLY_BUDEW(CAP_METEOR_FALLS - 3),
        IVS(6),
        },
        {
        RALPH(CAP_METEOR_FALLS - 1),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_WALLY_VICTORY_ROAD_1] =
{
    WALLY_INFO,
    .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
    .partySize = 5,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 56,
        .species = SPECIES_DELCATTY,
        .ability = ABILITY_NORMALIZE,
        IVS(18),
        .moves = {MOVE_FAKE_OUT, MOVE_PLAY_ROUGH, MOVE_ASSIST, MOVE_CHARM},
        .gender = TRAINER_MON_FEMALE,
        },
        {
        .lvl = 56,
        .species = SPECIES_MAGNEZONE,
        .ability = ABILITY_ANALYTIC,
        IVS(18),
        .moves = {MOVE_THUNDERBOLT, MOVE_FLASH_CANNON, MOVE_TRI_ATTACK, MOVE_METAL_SOUND},
        },
        {
        WALLY_SWABLU(57),
        IVS(18),
        .moves = {MOVE_DRAGON_PULSE, MOVE_AIR_SLASH, MOVE_MOONBLAST, MOVE_COTTON_GUARD},
        },
        {
        WALLY_BUDEW(57),
        IVS(18),
        .moves = {MOVE_GIGA_DRAIN, MOVE_SLUDGE_BOMB, MOVE_LEECH_SEED, MOVE_TOXIC},
        },
        {
        RALPH(59),
        .nature = NATURE_ADAMANT,
        .moves = {MOVE_PSYCHO_CUT, MOVE_SACRED_SWORD, MOVE_LEAF_BLADE, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_GALLADITE,
        }
    },
},

#define REMATCH_RALPH(rematch, tier)                                                   \
    {                                                                                  \
    REMATCH_MON(GALLADE, tier, rematch, ITEM_GALLADITE),                               \
    .ability = ABILITY_SHARPNESS,                                                      \
    IDEAL_ATTACKER_PHYSICAL,                                                           \
    .moves = {MOVE_PSYCHO_CUT, MOVE_SACRED_SWORD, MOVE_LEAF_BLADE, MOVE_SWORDS_DANCE}, \
    .gender = TRAINER_MON_MALE,                                                        \
    .nickname = COMPOUND_STRING("Ralph"),                                              \
    .friendship = MAX_FRIENDSHIP,                                                      \
    }

#define WALLY_ROSERADE(rematch, tier)                                          \
    {                                                                          \
    REMATCH_MON(ROSERADE, tier, rematch, ITEM_MIRACLE_SEED),                   \
    .ability = ABILITY_NATURAL_CURE,                                           \
    .nature = NATURE_MODEST,                                                   \
    EV_SPREAD_SPA_SPE_SPD,                                                     \
    .moves = {MOVE_GIGA_DRAIN, MOVE_SLUDGE_BOMB, MOVE_LEECH_SEED, MOVE_TOXIC}, \
    .gender = TRAINER_MON_FEMALE,                                              \
    }

#define WALLY_ALTARIA(rematch, tier)                                                 \
    {                                                                                \
    REMATCH_MON(ALTARIA, tier, rematch),                                             \
    .ability = ABILITY_NATURAL_CURE,                                                 \
    .nature = NATURE_MODEST,                                                         \
    EV_SPREAD_SPA_SPE_DEF,                                                           \
    .moves = {MOVE_DRAGON_PULSE, MOVE_AIR_SLASH, MOVE_MOONBLAST, MOVE_COTTON_GUARD}, \
    .gender = TRAINER_MON_MALE,                                                      \
    }

#define WALLY_MAGNEZONE(rematch, tier)                                                 \
    {                                                                                  \
    REMATCH_MON(MAGNEZONE, tier, rematch),                                             \
    .ability = ABILITY_ANALYTIC,                                                       \
    .nature = NATURE_BOLD,                                                             \
    EV_SPREAD_SPA_DEF_SPD,                                                             \
    .moves = {MOVE_THUNDERBOLT, MOVE_FLASH_CANNON, MOVE_TRI_ATTACK, MOVE_METAL_SOUND}, \
    }

#define WALLY_DELCATTY(rematch, tier)                                   \
    {                                                                   \
    REMATCH_MON(DELCATTY, tier, rematch),                               \
    .ability = ABILITY_NORMALIZE,                                       \
    IDEAL_SPEEDSTER_SPECIAL,                                            \
    .moves = {MOVE_FAKE_OUT, MOVE_PLAY_ROUGH, MOVE_ASSIST, MOVE_CHARM}, \
    .gender = TRAINER_MON_FEMALE,                                       \
    }

#define WALLY_GARDEVOIR(rematch, tier)                                           \
    {                                                                            \
    REMATCH_MON(GARDEVOIR, tier, rematch),                                       \
    .ability = ABILITY_SYNCHRONIZE,                                              \
    IDEAL_ATTACKER_SPECIAL,                                                      \
    .moves = {MOVE_PSYCHIC, MOVE_MOONBLAST, MOVE_MYSTICAL_FIRE, MOVE_CALM_MIND}, \
    .gender = TRAINER_MON_FEMALE,                                                \
    }

// Extra for hacks
#define WALLY_VILEPLUME(rematch, tier)                                        \
    {                                                                         \
    REMATCH_MON(VILEPLUME, tier, rematch, ITEM_MIRACLE_SEED),                 \
    .ability = ABILITY_CHLOROPHYLL,                                           \
    .nature = NATURE_MODEST,                                                  \
    EV_SPREAD_SPA_SPE_SPD,                                                    \
    .moves = {MOVE_GIGA_DRAIN, MOVE_SLUDGE_BOMB, MOVE_MOONBLAST, MOVE_TOXIC}, \
    .gender = TRAINER_MON_MALE,                                               \
    }

#define WALLY_VICTREEBEL(rematch, tier)                                              \
    {                                                                                \
    REMATCH_MON(VICTREEBEL, tier, rematch, ITEM_MIRACLE_SEED),                       \
    .ability = ABILITY_NATURAL_CURE,                                                 \
    IDEAL_ATTACKER_PHYSICAL,                                                         \
    .moves = {MOVE_LEAF_BLADE, MOVE_POISON_JAB, MOVE_LEECH_LIFE, MOVE_SWORDS_DANCE}, \
    .gender = TRAINER_MON_MALE,                                                      \
    }

#define WALLY_KLEAVOR(rematch, tier)                                                \
    {                                                                               \
    REMATCH_MON(KLEAVOR, tier, rematch),                                            \
    .ability = ABILITY_SHARPNESS,                                                   \
    IDEAL_ATTACKER_PHYSICAL,                                                        \
    .moves = {MOVE_X_SCISSOR, MOVE_STONE_AXE, MOVE_NIGHT_SLASH, MOVE_SWORDS_DANCE}, \
    .gender = TRAINER_MON_MALE,                                                     \
    }

#define WALLY_SWALOT(rematch, tier)                                               \
    {                                                                             \
    REMATCH_MON(SWALOT, tier, rematch),                                           \
    .ability = ABILITY_LIQUID_OOZE,                                               \
    .nature = NATURE_MODEST,                                                      \
    EV_SPREAD_SPA_HP_SPE,                                                         \
    .moves = {MOVE_SLUDGE_BOMB, MOVE_GIGA_DRAIN, MOVE_ICE_BEAM, MOVE_BODY_PRESS}, \
    .gender = TRAINER_MON_MALE,                                                   \
    }

#define WALLY_SWOOBAT(rematch, tier)                                           \
    {                                                                          \
    REMATCH_MON(SWOOBAT, tier, rematch),                                       \
    .ability = ABILITY_SIMPLE,                                                 \
    IDEAL_SPEEDSTER_SPECIAL,                                                   \
    .moves = {MOVE_PSYCHIC, MOVE_AIR_SLASH, MOVE_SIGNAL_BEAM, MOVE_CALM_MIND}, \
    .gender = TRAINER_MON_MALE,                                                \
    }

#define WALLY_TALONFLAME(rematch, tier)                                             \
    {                                                                               \
    REMATCH_MON(TALONFLAME, tier, rematch),                                         \
    .ability = ABILITY_GALE_WINGS,                                                  \
    IDEAL_SPEEDSTER_PHYSICAL,                                                       \
    .moves = {MOVE_BLAZE_KICK, MOVE_DUAL_WINGBEAT, MOVE_STEEL_WING, MOVE_TAILWIND}, \
    .gender = TRAINER_MON_MALE,                                                     \
    }

#define WALLY_DUBWOOL(rematch, tier)                                                  \
    {                                                                                 \
    REMATCH_MON(DUBWOOL, tier, rematch),                                              \
    .ability = ABILITY_FLUFFY,                                                        \
    .nature = NATURE_IMPISH,                                                          \
    EV_SPREAD_ATK_DEF_HP,                                                             \
    .moves = {MOVE_BODY_SLAM, MOVE_BODY_PRESS, MOVE_ZEN_HEADBUTT, MOVE_COTTON_GUARD}, \
    .gender = TRAINER_MON_MALE,                                                       \
    }

#define WALLY_REMATCH(Rematch)                                             \
[DIFFICULTY_NORMAL][TRAINER_WALLY_VICTORY_ROAD_##Rematch] =                \
{                                                                          \
    WALLY_INFO,                                                            \
    .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE}, \
    .partySize = 6,                                                        \
    .party = (const struct TrainerMon[]) {                                 \
        WALLY_GARDEVOIR(Rematch, TIER3),                                   \
        WALLY_DELCATTY(Rematch, TIER3),                                    \
        WALLY_MAGNEZONE(Rematch, TIER3),                                   \
        WALLY_ALTARIA(Rematch, TIER2),                                     \
        WALLY_ROSERADE(Rematch, TIER2),                                    \
        REMATCH_RALPH(Rematch, ACE),                                       \
    },                                                                     \
}

WALLY_REMATCH(2),
WALLY_REMATCH(3),
WALLY_REMATCH(4),

#define LEADER_INFO(Trainer)                    \
    .trainerClass = TRAINER_CLASS_LEADER,       \
    .trainerPic = TRAINER_PIC_LEADER_##Trainer, \
    BOSS_AI_FLAGS

#define LEADER_REMATCH                                                             \
    .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE}, \
    .battleType = TRAINER_BATTLE_TYPE_DOUBLES,                                     \
    .partySize = 6

#define ROXANNE_INFO                 \
    LEADER_INFO(ROXANNE),            \
    .trainerName = _("Maribel"),     \
    .gender = TRAINER_GENDER_FEMALE, \
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE

[DIFFICULTY_NORMAL][TRAINER_ROXANNE_1] =
{
    ROXANNE_INFO,
    .items = {ITEM_POTION, ITEM_POTION, ITEM_NONE, ITEM_NONE},
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = CAP_GYM_1 - 3,
        .species = SPECIES_TOGEPI,
        .ability = ABILITY_SERENE_GRACE,
        IVS(12),
        .moves = {MOVE_DRAINING_KISS, MOVE_SWEET_KISS, MOVE_POUND, MOVE_GROWL},
        .gender = TRAINER_MON_FEMALE,
        },
        {
        .lvl = CAP_GYM_1 - 3,
        .species = SPECIES_CLEFFA,
        .ability = ABILITY_MAGIC_GUARD,
        IVS(12),
        .moves = {MOVE_DRAINING_KISS, MOVE_SWEET_KISS, MOVE_POUND, MOVE_COPYCAT},
        .gender = TRAINER_MON_FEMALE,
        },
        {
        .lvl = CAP_GYM_1,
        .species = SPECIES_SPRITZEE,
        .ability = ABILITY_HEALER,
        IVS(24),
        .moves = {MOVE_DRAINING_KISS, MOVE_SWEET_KISS, MOVE_ECHOED_VOICE, MOVE_SWEET_SCENT},
        .gender = TRAINER_MON_FEMALE,
        .heldItem = ITEM_ORAN_BERRY,
        .ball = ITEM_POKE_BALL,
        }
    },
},

#define ROXANNE_PROBOPASS(rematch, tier)                                              \
    {                                                                                 \
    REMATCH_MON(PROBOPASS, tier, rematch, ITEM_SITRUS_BERRY),                         \
    .ability = ABILITY_SAND_FORCE,                                                    \
    .nature = NATURE_IMPISH,                                                          \
    EV_SPREAD_SPA_DEF_SPD,                                                            \
    .moves = {MOVE_POWER_GEM, MOVE_FLASH_CANNON, MOVE_BODY_PRESS, MOVE_IRON_DEFENSE}, \
    .gender = TRAINER_MON_FEMALE,                                                     \
    }

#define ROXANNE_ARMALDO(rematch, tier)                                              \
    {                                                                               \
    REMATCH_MON(ARMALDO, tier, rematch, ITEM_QUICK_CLAW),                           \
    .ability = ABILITY_BATTLE_ARMOR,                                                \
    .nature = NATURE_ADAMANT,                                                       \
    EV_SPREAD_ATK_DEF_HP,                                                           \
    .moves = {MOVE_ROCK_SLIDE, MOVE_X_SCISSOR, MOVE_CRUSH_CLAW, MOVE_SWORDS_DANCE}, \
    .gender = TRAINER_MON_MALE,                                                     \
    }

#define ROXANNE_CRADILY(rematch, tier)                                          \
    {                                                                           \
    REMATCH_MON(CRADILY, tier, rematch, ITEM_BIG_ROOT),                         \
    .ability = ABILITY_STORM_DRAIN,                                             \
    .nature = NATURE_CALM,                                                      \
    EV_SPREAD_SPA_SPD_DEF,                                                      \
    .moves = {MOVE_GIGA_DRAIN, MOVE_ANCIENT_POWER, MOVE_INGRAIN, MOVE_AMNESIA}, \
    .gender = TRAINER_MON_FEMALE,                                               \
    }

#define ROXANNE_RELICANTH(rematch, tier)                                            \
    {                                                                               \
    REMATCH_MON(RELICANTH, tier, rematch),                                          \
    .ability = ABILITY_ROCK_HEAD,                                                   \
    .nature = NATURE_IMPISH,                                                        \
    EV_SPREAD_ATK_DEF_HP,                                                           \
    .moves = {MOVE_HEAD_SMASH, MOVE_AQUA_TAIL, MOVE_BODY_PRESS, MOVE_IRON_DEFENSE}, \
    .gender = TRAINER_MON_FEMALE,                                                   \
    }

#define ROXANNE_AGGRON(rematch, tier)                                                  \
    {                                                                                  \
    REMATCH_MON(AGGRON, tier, rematch),                                                \
    .ability = ABILITY_ROCK_HEAD,                                                      \
    .nature = NATURE_IMPISH,                                                           \
    EV_SPREAD_ATK_DEF_HP,                                                              \
    .moves = {MOVE_HEAD_SMASH, MOVE_BODY_PRESS, MOVE_IRON_DEFENSE, MOVE_STEALTH_ROCK}, \
    .gender = TRAINER_MON_FEMALE,                                                      \
    }

#define ROXANNE_CORSOLA(rematch, tier)                                    \
    {                                                                     \
    REMATCH_MON(CORSOLA, tier, rematch),                                  \
    .ability = ABILITY_REGENERATOR,                                       \
    .nature = NATURE_CALM,                                                \
    EV_SPREAD_SPA_SPD_HP,                                                 \
    .moves = {MOVE_POWER_GEM, MOVE_SCALD, MOVE_LIFE_DEW, MOVE_SANDSTORM}, \
    .gender = TRAINER_MON_FEMALE,                                         \
    }

// Extra for hacks
// Sand Veil/replace Double Edge with Body Press if paired with Sand Stream
#define ROXANNE_GOLEM(rematch, tier)                                                       \
    {                                                                                      \
    REMATCH_MON(GOLEM, tier, rematch),                                                     \
    .ability = ABILITY_ROCK_HEAD,                                                          \
    .nature = NATURE_IMPISH,                                                               \
    EV_SPREAD_ATK_DEF_HP,                                                                  \
    .moves = {MOVE_ROCK_SLIDE, MOVE_HIGH_HORSEPOWER, MOVE_DOUBLE_EDGE, MOVE_STEALTH_ROCK}, \
    .gender = TRAINER_MON_FEMALE,                                                          \
    }

#define ROXANNE_GOLEM_ALOLA
#define ROXANNE_OMASTAR
#define ROXANNE_KABUTOPS
#define ROXANNE_AERODACTYL
#define ROXANNE_SUDOWOODO

#define ROXANNE_TYRANITAR(rematch, tier)                                              \
    {                                                                                 \
    REMATCH_MON(TYRANITAR, tier, rematch),                                            \
    .ability = ABILITY_SAND_STREAM,                                                   \
    .nature = NATURE_ADAMANT,                                                         \
    EV_SPREAD_ATK_DEF_HP,                                                             \
    .moves = {MOVE_ROCK_SLIDE, MOVE_CRUNCH, MOVE_HIGH_HORSEPOWER, MOVE_DRAGON_DANCE}, \
    .gender = TRAINER_MON_FEMALE,                                                     \
    }

#define ROXANNE_RAMPARDOS(rematch, tier)                                             \
    {                                                                                \
    REMATCH_MON(RAMPARDOS, tier, rematch, ITEM_QUICK_CLAW),                          \
    .ability = ABILITY_ROCK_HEAD,                                                    \
    IDEAL_ATTACKER_PHYSICAL,                                                         \
    .moves = {MOVE_HEAD_SMASH, MOVE_ZEN_HEADBUTT, MOVE_IRON_HEAD, MOVE_BRICK_BREAK}, \
    .gender = TRAINER_MON_FEMALE,                                                    \
    }

#define ROXANNE_BASTIODON

#define ROXANNE_GIGALITH(rematch, tier)                                            \
    {                                                                              \
    REMATCH_MON(GIGALITH, tier, rematch),                                          \
    .ability = ABILITY_SAND_STREAM,                                                \
    .nature = NATURE_ADAMANT,                                                      \
    EV_SPREAD_ATK_SPD_HP,                                                          \
    .moves = {MOVE_ROCK_SLIDE, MOVE_IRON_HEAD, MOVE_SANDSTORM, MOVE_STEALTH_ROCK}, \
    .gender = TRAINER_MON_FEMALE,                                                  \
    }

// ROXANNE_CARRACOSTA: https://github.com/fdeblasio/pokeemerald-expansion/blob/frogs/src/data/trainers.h#L446

#define ROXANNE_ARCHEOPS(rematch, tier)                                            \
    {                                                                              \
    REMATCH_MON(ARCHEOPS, tier, rematch, ITEM_SHELL_BELL),                         \
    .ability = ABILITY_EARLY_BIRD,                                                 \
    IDEAL_ATTACKER_PHYSICAL,                                                       \
    .moves = {MOVE_ROCK_SLIDE, MOVE_DUAL_WINGBEAT, MOVE_CRUNCH, MOVE_DRAGON_CLAW}, \
    .gender = TRAINER_MON_FEMALE,                                                  \
    }

#define ROXANNE_BARBARACLE(rematch, tier)                                               \
    {                                                                                   \
    REMATCH_MON(BARBARACLE, tier, rematch, tier == ACE ? ITEM_BARBARACITE : ITEM_NONE), \
    .ability = ABILITY_TOUGH_CLAWS,                                                     \
    .nature = NATURE_IMPISH,                                                            \
    EV_SPREAD_ATK_DEF_HP,                                                               \
    .moves = {MOVE_ROCK_SLIDE, MOVE_LIQUIDATION, MOVE_DRAIN_PUNCH, MOVE_SHELL_SMASH},   \
    .gender = TRAINER_MON_FEMALE,                                                       \
    }

#define ROXANNE_TYRANTRUM(rematch, tier)                                                 \
    {                                                                                    \
    REMATCH_MON(TYRANTRUM, tier, rematch, ITEM_ROCKY_HELMET),                            \
    .ability = ABILITY_ROCK_HEAD,                                                        \
    .nature = NATURE_ADAMANT,                                                            \
    EV_SPREAD_ATK_DEF_HP,                                                                \
    .moves = {MOVE_HEAD_SMASH, MOVE_DRAGON_CLAW, MOVE_PSYCHIC_FANGS, MOVE_DRAGON_DANCE}, \
    .gender = TRAINER_MON_FEMALE,                                                        \
    }

#define ROXANNE_AURORUS
#define ROXANNE_CARBINK
#define ROXANNE_LYCANROC_MIDDAY
#define ROXANNE_LYCANROC_MIDNIGHT
#define ROXANNE_LYCANROC_DUSK
#define ROXANNE_MINIOR
#define ROXANNE_COALOSSAL

#define ROXANNE_STONJOURNER(rematch, tier)                                      \
    {                                                                           \
    REMATCH_MON(STONJOURNER, tier, rematch),                                    \
    .ability = ABILITY_POWER_SPOT,                                              \
    .nature = NATURE_IMPISH,                                                    \
    EV_SPREAD_ATK_DEF_HP,                                                       \
    .moves = {MOVE_ROCK_SLIDE, MOVE_BODY_PRESS, MOVE_CURSE, MOVE_STEALTH_ROCK}, \
    .gender = TRAINER_MON_FEMALE,                                               \
    }

#define ROXANNE_GARGANACL(rematch, tier)                                          \
    {                                                                             \
    REMATCH_MON(GARGANACL, tier, rematch),                                        \
    .ability = ABILITY_PURIFYING_SALT,                                            \
    .nature = NATURE_IMPISH,                                                      \
    EV_SPREAD_ATK_DEF_HP,                                                         \
    .moves = {MOVE_ROCK_SLIDE, MOVE_SALT_CURE, MOVE_BODY_PRESS, MOVE_WIDE_GUARD}, \
    .gender = TRAINER_MON_FEMALE,                                                 \
    }

#define ROXANNE_KLAWF

#define ROXANNE_GLIMMORA(rematch, tier)                                             \
    {                                                                               \
    REMATCH_MON(GLIMMORA, tier, rematch),                                           \
    .ability = ABILITY_TOXIC_DEBRIS,                                                \
    IDEAL_ATTACKER_SPECIAL,                                                         \
    .moves = {MOVE_POWER_GEM, MOVE_VENOSHOCK, MOVE_MORTAL_SPIN, MOVE_STEALTH_ROCK}, \
    .gender = TRAINER_MON_FEMALE,                                                   \
    }

#define ROXANNE_REMATCH(Rematch)                 \
[DIFFICULTY_NORMAL][TRAINER_ROXANNE_##Rematch] = \
{                                                \
    ROXANNE_INFO,                                \
    LEADER_REMATCH,                              \
    .party = (const struct TrainerMon[]) {       \
        ROXANNE_CORSOLA(Rematch, TIER3),         \
        ROXANNE_AGGRON(Rematch, TIER3),          \
        ROXANNE_RELICANTH(Rematch, TIER3),       \
        ROXANNE_CRADILY(Rematch, TIER2),         \
        ROXANNE_ARMALDO(Rematch, TIER2),         \
        ROXANNE_PROBOPASS(Rematch, ACE),         \
    },                                           \
}

ROXANNE_REMATCH(2),
ROXANNE_REMATCH(3),
ROXANNE_REMATCH(4),

#define BRAWLY_INFO           \
    LEADER_INFO(BRAWLY),      \
    .trainerName = _("Adam"), \
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE

[DIFFICULTY_NORMAL][TRAINER_BRAWLY_1] =
{
    BRAWLY_INFO,
    .items = {ITEM_SUPER_POTION, ITEM_SUPER_POTION, ITEM_NONE, ITEM_NONE},
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = CAP_GYM_2 - 2,
        .species = SPECIES_LITWICK,
        .ability = ABILITY_FLAME_BODY,
        IVS(12),
        .moves = {MOVE_HEX, MOVE_INCINERATE, MOVE_SMOG, MOVE_CONFUSE_RAY},
        .gender = TRAINER_MON_MALE,
        },
        {
        .lvl = CAP_GYM_2 - 2,
        .species = SPECIES_SANDYGAST,
        .ability = ABILITY_WATER_COMPACTION,
        IVS(12),
        .moves = {MOVE_HEX, MOVE_MUD_SHOT, MOVE_MEGA_DRAIN, MOVE_SAND_TOMB},
        .gender = TRAINER_MON_MALE,
        },
        {
        .lvl = CAP_GYM_2,
        .species = SPECIES_GASTLY,
        .ability = ABILITY_LEVITATE,
        IVS(24),
        .moves = {MOVE_HEX, MOVE_LICK, MOVE_HYPNOSIS, MOVE_CONFUSE_RAY},
        .gender = TRAINER_MON_MALE,
        .heldItem = ITEM_SITRUS_BERRY,
        .ball = ITEM_POKE_BALL,
        }
    },
},

#define BRAWLY_HARIYAMA(rematch, tier)                                         \
    {                                                                          \
    REMATCH_MON(HARIYAMA, tier, rematch, ITEM_SITRUS_BERRY),                   \
    .ability = ABILITY_THICK_FAT,                                              \
    .nature = NATURE_ADAMANT,                                                  \
    EV_SPREAD_ATK_HP_SPE,                                                      \
    .moves = {MOVE_BULK_UP, MOVE_DRAIN_PUNCH, MOVE_BELLY_DRUM, MOVE_FAKE_OUT}, \
    .gender = TRAINER_MON_MALE,                                                \
    }

#define BRAWLY_MEDICHAM(rematch, tier)                                            \
    {                                                                             \
    REMATCH_MON(MEDICHAM, tier, rematch, ITEM_MUSCLE_BAND),                       \
    .ability = ABILITY_PURE_POWER,                                                \
    IDEAL_ATTACKER_PHYSICAL,                                                      \
    .moves = {MOVE_BULK_UP, MOVE_HIGH_JUMP_KICK, MOVE_ZEN_HEADBUTT, MOVE_DETECT}, \
    .gender = TRAINER_MON_FEMALE,                                                 \
    }

#define BRAWLY_MACHAMP(rematch, tier)                                         \
    {                                                                         \
    REMATCH_MON(MACHAMP, tier, rematch, ITEM_BLACK_BELT),                     \
    .ability = ABILITY_NO_GUARD,                                              \
    IDEAL_ATTACKER_PHYSICAL,                                                  \
    .moves = {MOVE_BULK_UP, MOVE_CROSS_CHOP, MOVE_KNOCK_OFF, MOVE_DUAL_CHOP}, \
    .gender = TRAINER_MON_MALE,                                               \
    }

#define BRAWLY_BRELOOM(rematch, tier)                                             \
    {                                                                             \
    REMATCH_MON(BRELOOM, tier, rematch),                                          \
    .ability = ABILITY_TECHNICIAN,                                                \
    IDEAL_ATTACKER_PHYSICAL,                                                      \
    .moves = {MOVE_BULK_UP, MOVE_DRAIN_PUNCH, MOVE_BULLET_SEED, MOVE_MACH_PUNCH}, \
    .gender = TRAINER_MON_MALE,                                                   \
    }

#define BRAWLY_BLAZIKEN(rematch, tier)                                             \
    {                                                                              \
    REMATCH_MON(BLAZIKEN, tier, rematch),                                          \
    .ability = ABILITY_BLAZE,                                                      \
    IDEAL_ATTACKER_PHYSICAL,                                                       \
    .moves = {MOVE_BULK_UP, MOVE_SKY_UPPERCUT, MOVE_BLAZE_KICK, MOVE_MIRROR_MOVE}, \
    .gender = TRAINER_MON_MALE,                                                    \
    }

#define BRAWLY_GALLADE(rematch, tier)                                             \
    {                                                                             \
    REMATCH_MON(GALLADE, tier, rematch),                                          \
    .ability = ABILITY_JUSTIFIED,                                                 \
    IDEAL_ATTACKER_PHYSICAL,                                                      \
    .moves = {MOVE_BULK_UP, MOVE_DRAIN_PUNCH, MOVE_PSYCHO_CUT, MOVE_NIGHT_SLASH}, \
    .gender = TRAINER_MON_MALE,                                                   \
    }

// Extra for hacks
#define BRAWLY_ANNIHILAPE(rematch, tier)                                       \
    {                                                                          \
    REMATCH_MON(ANNIHILAPE, tier, rematch),                                    \
    .ability = ABILITY_DEFIANT,                                                \
    IDEAL_ATTACKER_PHYSICAL,                                                   \
    .moves = {MOVE_BULK_UP, MOVE_DRAIN_PUNCH, MOVE_RAGE_FIST, MOVE_ROCK_TOMB}, \
    .gender = TRAINER_MON_MALE,                                                \
    }

#define BRAWLY_SIRFETCHD(rematch, tier)                                                \
    {                                                                                  \
    REMATCH_MON(SIRFETCHD, tier, rematch),                                             \
    .ability = ABILITY_SCRAPPY,                                                        \
    IDEAL_ATTACKER_PHYSICAL,                                                           \
    .moves = {MOVE_SACRED_SWORD, MOVE_LEAF_BLADE, MOVE_POISON_JAB, MOVE_SWORDS_DANCE}, \
    .gender = TRAINER_MON_MALE,                                                        \
    }

#define BRAWLY_HITMONLEE
#define BRAWLY_HITMONCHAN
#define BRAWLY_HITMONTOP

#define BRAWLY_TAUROS_PALDEA(rematch, tier)                                     \
    {                                                                           \
    REMATCH_MON(TAUROS_PALDEA_COMBAT, tier, rematch),                           \
    .ability = ABILITY_INTIMIDATE,                                              \
    IDEAL_ATTACKER_PHYSICAL,                                                    \
    .moves = {MOVE_BULK_UP, MOVE_RAGING_BULL, MOVE_IRON_HEAD, MOVE_ROCK_SLIDE}, \
    .gender = TRAINER_MON_MALE,                                                 \
    }

#define BRAWLY_TAUROS_BLAZE
#define BRAWLY_TAUROS_AQUA
#define BRAWLY_SNEASLER

// ITEM_LUCARIONITE or ITEM_LUCARIONITE_Z if ACE
#define BRAWLY_LUCARIO(rematch, tier)                                                  \
    {                                                                                  \
    REMATCH_MON(LUCARIO, tier, rematch),                                               \
    .ability = ABILITY_INNER_FOCUS,                                                    \
    IDEAL_ATTACKER_SPECIAL,                                                            \
    .moves = {MOVE_AURA_SPHERE, MOVE_FLASH_CANNON, MOVE_SHADOW_BALL, MOVE_NASTY_PLOT}, \
    .gender = TRAINER_MON_MALE,                                                        \
    }

#define BRAWLY_CONKELDURR
#define BRAWLY_THROH
#define BRAWLY_SAWK

#define BRAWLY_MIENSHAO(rematch, tier)                                        \
    {                                                                         \
    REMATCH_MON(MIENSHAO, tier, rematch),                                     \
    .ability = ABILITY_REGENERATOR,                                           \
    IDEAL_ATTACKER_PHYSICAL,                                                  \
    .moves = {MOVE_BULK_UP, MOVE_HIGH_JUMP_KICK, MOVE_U_TURN, MOVE_FAKE_OUT}, \
    .gender = TRAINER_MON_MALE,                                               \
    }

#define BRAWLY_PANGORO(rematch, tier)                                               \
    {                                                                               \
    REMATCH_MON(PANGORO, tier, rematch),                                            \
    .ability = ABILITY_IRON_FIST,                                                   \
    IDEAL_ATTACKER_PHYSICAL,                                                        \
    .moves = {MOVE_BULK_UP, MOVE_DRAIN_PUNCH, MOVE_THROAT_CHOP, MOVE_BULLET_PUNCH}, \
    .gender = TRAINER_MON_MALE,                                                     \
    }

#define BRAWLY_HAWLUCHA(rematch, tier)                                                 \
    {                                                                                  \
    REMATCH_MON(HAWLUCHA, tier, rematch, tier == ACE ? ITEM_HAWLUCHANITE : ITEM_NONE), \
    .ability = ABILITY_LIMBER,                                                         \
    IDEAL_SPEEDSTER_PHYSICAL,                                                          \
    .moves = {MOVE_BULK_UP, MOVE_FLYING_PRESS, MOVE_ACROBATICS, MOVE_LUNGE},           \
    .gender = TRAINER_MON_MALE,                                                        \
    }

#define BRAWLY_CRABOMINABLE(rematch, tier)                                              \
    {                                                                                   \
    REMATCH_MON(CRABOMINABLE, tier, rematch, ITEM_ASSAULT_VEST),                        \
    .ability = ABILITY_IRON_FIST,                                                       \
    .nature = NATURE_ADAMANT,                                                           \
    EV_SPREAD_ATK_HP_SPD,                                                               \
    .moves = {MOVE_DRAIN_PUNCH, MOVE_ICE_HAMMER, MOVE_CRABHAMMER, MOVE_POWER_UP_PUNCH}, \
    .gender = TRAINER_MON_MALE,                                                         \
    }

#define BRAWLY_PASSIMIAN(rematch, tier)                                         \
    {                                                                           \
    REMATCH_MON(PASSIMIAN, tier, rematch),                                      \
    .ability = ABILITY_DEFIANT,                                                 \
    IDEAL_ATTACKER_PHYSICAL,                                                    \
    .moves = {MOVE_BULK_UP, MOVE_DRAIN_PUNCH, MOVE_ACROBATICS, MOVE_KNOCK_OFF}, \
    .gender = TRAINER_MON_MALE,                                                 \
    }

#define BRAWLY_GRAPPLOCT(rematch, tier)                                      \
    {                                                                        \
    REMATCH_MON(GRAPPLOCT, tier, rematch, ITEM_SITRUS_BERRY),                \
    .ability = ABILITY_TECHNICIAN,                                           \
    IDEAL_ATTACKER_PHYSICAL,                                                 \
    .moves = {MOVE_BULK_UP, MOVE_STORM_THROW, MOVE_AQUA_JET, MOVE_OCTOLOCK}, \
    .gender = TRAINER_MON_MALE,                                              \
    }

#define BRAWLY_FALINKS(rematch, tier)                                                \
    {                                                                                \
    REMATCH_MON(FALINKS, tier, rematch, tier == ACE ? ITEM_FALINKSITE : ITEM_NONE),  \
    .ability = ABILITY_DEFIANT,                                                      \
    IDEAL_ATTACKER_PHYSICAL,                                                         \
    .moves = {MOVE_BODY_PRESS, MOVE_IRON_HEAD, MOVE_SPIKY_SHIELD, MOVE_NO_RETREAT},  \
    }

#define BRAWLY_REMATCH(Rematch)                 \
[DIFFICULTY_NORMAL][TRAINER_BRAWLY_##Rematch] = \
{                                               \
    BRAWLY_INFO,                                \
    LEADER_REMATCH,                             \
    .party = (const struct TrainerMon[]) {      \
        BRAWLY_GALLADE(Rematch, TIER3),         \
        BRAWLY_BLAZIKEN(Rematch, TIER3),        \
        BRAWLY_BRELOOM(Rematch, TIER3),         \
        BRAWLY_MACHAMP(Rematch, TIER2),         \
        BRAWLY_MEDICHAM(Rematch, TIER2),        \
        BRAWLY_HARIYAMA(Rematch, ACE),          \
    },                                          \
}

BRAWLY_REMATCH(2),
BRAWLY_REMATCH(3),
BRAWLY_REMATCH(4),

#define WATTSON_INFO             \
    LEADER_INFO(WATTSON),        \
    .trainerName = _("Linda"), \
    .gender = TRAINER_GENDER_FEMALE, \
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE

[DIFFICULTY_NORMAL][TRAINER_WATTSON_1] =
{
    WATTSON_INFO,
    .items = {ITEM_SUPER_POTION, ITEM_SUPER_POTION, ITEM_NONE, ITEM_NONE},
    .partySize = 4,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = CAP_GYM_3 - 4,
        .species = SPECIES_MAGNEMITE,
        .ability = ABILITY_MAGNET_PULL,
        IVS(24),
        .moves = {MOVE_SHOCK_WAVE, MOVE_SONIC_BOOM, MOVE_MAGNET_BOMB, MOVE_THUNDER_WAVE},
        .gender = TRAINER_MON_NONE,
        },
        {
        .lvl = CAP_GYM_3 - 2,
        .species = SPECIES_MINUN,
        .ability = ABILITY_MINUS,
        IVS(24),
        .moves = {MOVE_SHOCK_WAVE, MOVE_SWIFT, MOVE_SKILL_SWAP, MOVE_NUZZLE},
        .gender = TRAINER_MON_MALE,
        },
        {
        .lvl = CAP_GYM_3 - 2,
        .species = SPECIES_PLUSLE,
        .ability = ABILITY_PLUS,
        IVS(26),
        .moves = {MOVE_SHOCK_WAVE, MOVE_SWIFT, MOVE_SKILL_SWAP, MOVE_THUNDER_WAVE},
        .gender = TRAINER_MON_FEMALE,
        },
        {
        .lvl = CAP_GYM_3,
        .species = SPECIES_ELECTRIKE,
        .ability = ABILITY_STATIC,
        IVS(30),
        .moves = {MOVE_SHOCK_WAVE, MOVE_QUICK_ATTACK, MOVE_BITE, MOVE_THUNDER_WAVE},
        .gender = TRAINER_MON_MALE,
        .heldItem = ITEM_SITRUS_BERRY,
        .ball = ITEM_POKE_BALL,
        }
    },
},

#define WATTSON_MANECTRIC(rematch, tier)                                          \
    {                                                                             \
    REMATCH_MON(MANECTRIC, tier, rematch, ITEM_SITRUS_BERRY),                     \
    .ability = ABILITY_MINUS,                                                     \
    IDEAL_ATTACKER_SPECIAL,                                                       \
    .moves = {MOVE_THUNDERBOLT, MOVE_FLAMETHROWER, MOVE_SIGNAL_BEAM, MOVE_SNARL}, \
    .gender = TRAINER_MON_MALE,                                                   \
    }

#define WATTSON_PLUSLE(rematch, tier)                                            \
    {                                                                            \
    REMATCH_MON(PLUSLE, tier, rematch, ITEM_MAGNET),                             \
    .ability = ABILITY_PLUS,                                                     \
    .nature = NATURE_TIMID,                                                      \
    EV_SPREAD_SPA_SPE_SPD,                                                       \
    .moves = {MOVE_THUNDERBOLT, MOVE_HELPING_HAND, MOVE_CHARM, MOVE_NASTY_PLOT}, \
    .gender = TRAINER_MON_FEMALE,                                                \
    }

#define WATTSON_MINUN(rematch, tier)                                                  \
    {                                                                                 \
    REMATCH_MON(MINUN, tier, rematch, ITEM_MAGNET),                                   \
    .ability = ABILITY_MINUS,                                                         \
    .nature = NATURE_TIMID,                                                           \
    EV_SPREAD_SPA_SPE_SPD,                                                            \
    .moves = {MOVE_THUNDERBOLT, MOVE_THUNDER_WAVE, MOVE_FAKE_TEARS, MOVE_NASTY_PLOT}, \
    .gender = TRAINER_MON_MALE,                                                       \
    }

#define WATTSON_MAGNEZONE(rematch, tier)                                                 \
    {                                                                                    \
    REMATCH_MON(MAGNEZONE, tier, rematch),                                               \
    .ability = ABILITY_MAGNET_PULL,                                                      \
    .nature = NATURE_MODEST,                                                             \
    EV_SPREAD_SPA_DEF_SPD,                                                               \
    .moves = {MOVE_THUNDERBOLT, MOVE_FLASH_CANNON, MOVE_BODY_PRESS, MOVE_MAGNETIC_FLUX}, \
    }

#define WATTSON_LANTURN(rematch, tier)                                                  \
    {                                                                                   \
    REMATCH_MON(LANTURN, tier, rematch),                                                \
    .ability = ABILITY_VOLT_ABSORB,                                                     \
    .nature = NATURE_MODEST,                                                            \
    EV_SPREAD_SPA_HP_SPD,                                                               \
    .moves = {MOVE_THUNDER, MOVE_HYDRO_PUMP, MOVE_ELECTRIC_TERRAIN, MOVE_RAIN_DANCE},   \
    .gender = TRAINER_MON_MALE,                                                         \
    }

#define WATTSON_ELECTRODE(rematch, tier)                                            \
    {                                                                               \
    REMATCH_MON(ELECTRODE, tier, rematch),                                          \
    .ability = ABILITY_STATIC,                                                      \
    IDEAL_SPEEDSTER_SPECIAL,                                                        \
    .moves = {MOVE_DISCHARGE, MOVE_EERIE_IMPULSE, MOVE_LIGHT_SCREEN, MOVE_SCREECH}, \
    }

// Extra for hacks
// ITEM_RAICHUNITE_X or ITEM_RAICHUNITE_Y if ACE
#define WATTSON_RAICHU(rematch, tier)                                           \
    {                                                                           \
    REMATCH_MON(RAICHU, tier, rematch),                                         \
    .ability = ABILITY_STATIC,                                                  \
    IDEAL_SPEEDSTER_SPECIAL,                                                    \
    .moves = {MOVE_THUNDERBOLT, MOVE_SURF, MOVE_THUNDER_WAVE, MOVE_NASTY_PLOT}, \
    .gender = TRAINER_MON_MALE,                                                 \
    }

#define WATTSON_RAICHU_ALOLA(rematch, tier)                                   \
    {                                                                         \
    REMATCH_MON(RAICHU_ALOLA, tier, rematch, ITEM_ELECTRIC_SEED),             \
    .ability = ABILITY_SURGE_SURFER,                                          \
    IDEAL_SPEEDSTER_SPECIAL,                                                  \
    .moves = {MOVE_RISING_VOLTAGE, MOVE_PSYCHIC, MOVE_SURF, MOVE_NASTY_PLOT}, \
    .gender = TRAINER_MON_MALE,                                               \
    }

#define WATTSON_ELECTRODE_HISUI

#define WATTSON_ELECTABUZZ(rematch, tier)                                                       \
    {                                                                                           \
    REMATCH_MON(ELECTABUZZ, tier, rematch, ITEM_EVIOLITE),                                      \
    .ability = ABILITY_STATIC,                                                                  \
    IDEAL_ATTACKER_SPECIAL,                                                                     \
    .moves = {MOVE_THUNDERBOLT, MOVE_DAZZLING_GLEAM, MOVE_FLASH_CANNON, MOVE_ELECTRIC_TERRAIN}, \
    .gender = TRAINER_MON_MALE,                                                                 \
    }

#define WATTSON_ELECTIVIRE(rematch, tier)                                                    \
    {                                                                                        \
    REMATCH_MON(ELECTIVIRE, tier, rematch, ITEM_MAGNET),                                     \
    .ability = ABILITY_MOTOR_DRIVE,                                                          \
    IDEAL_ATTACKER_PHYSICAL,                                                                 \
    .moves = {MOVE_SUPERCELL_SLAM, MOVE_ICE_PUNCH, MOVE_DRAIN_PUNCH, MOVE_ELECTRIC_TERRAIN}, \
    .gender = TRAINER_MON_MALE,                                                              \
    }

#define WATTSON_JOLTEON
#define WATTSON_AMPHAROS

#define WATTSON_LUXRAY(rematch, tier)                                                       \
    {                                                                                       \
    REMATCH_MON(LUXRAY, tier, rematch, ITEM_ELECTRIC_SEED),                                 \
    .ability = ABILITY_INTIMIDATE,                                                          \
    IDEAL_ATTACKER_PHYSICAL,                                                                \
    .moves = {MOVE_SUPERCELL_SLAM, MOVE_CRUNCH, MOVE_PSYCHIC_FANGS, MOVE_ELECTRIC_TERRAIN}, \
    .gender = TRAINER_MON_MALE,                                                             \
    }

#define WATTSON_PACHIRISU

#define WATTSON_ROTOM(rematch, tier)                                                       \
    {                                                                                      \
    REMATCH_MON(ROTOM, tier, rematch),                                                     \
    .ability = ABILITY_LEVITATE,                                                           \
    IDEAL_ATTACKER_SPECIAL,                                                                \
    .moves = {MOVE_PARABOLIC_CHARGE, MOVE_SHADOW_BALL, MOVE_HYPER_VOICE, MOVE_NASTY_PLOT}, \
    .gender = TRAINER_MON_NONE,                                                            \
    }

#define WATTSON_ROTOM_HEAT
#define WATTSON_ROTOM_WASH
#define WATTSON_ROTOM_FROST
#define WATTSON_ROTOM_FAN
#define WATTSON_ROTOM_MOW
#define WATTSON_ZEBSTRIKA
#define WATTSON_EMOLGA

#define WATTSON_EELEKTROSS(rematch, tier)                                                 \
    {                                                                                     \
    REMATCH_MON(EELEKTROSS, tier, rematch, tier == ACE ? ITEM_EELEKTROSSITE : ITEM_NONE), \
    .ability = ABILITY_LEVITATE,                                                          \
    .nature = NATURE_ADAMANT,                                                             \
    EV_SPREAD_SPA_SPE_DEF,                                                                \
    .moves = {MOVE_SUPERCELL_SLAM, MOVE_DRAIN_PUNCH, MOVE_LIQUIDATION, MOVE_COIL},        \
    }

#define WATTSON_HELIOLISK(rematch, tier)                                                     \
    {                                                                                        \
    REMATCH_MON(HELIOLISK, tier, rematch, ITEM_BIG_ROOT),                                    \
    .ability = ABILITY_DRY_SKIN,                                                             \
    .nature = NATURE_MODEST,                                                                 \
    EV_SPREAD_ATK_SPE_SPD,                                                                   \
    .moves = {MOVE_PARABOLIC_CHARGE, MOVE_HYPER_VOICE, MOVE_WEATHER_BALL, MOVE_EARTH_POWER}, \
    .gender = TRAINER_MON_MALE,                                                              \
    }

#define WATTSON_DEDENNE
#define WATTSON_ORICORIO
#define WATTSON_TOGEDEMARU

#define WATTSON_BOLTUND(rematch, tier)                                            \
    {                                                                             \
    REMATCH_MON(BOLTUND, tier, rematch),                                          \
    .ability = ABILITY_STRONG_JAW,                                                \
    IDEAL_SPEEDSTER_PHYSICAL,                                                     \
    .moves = {MOVE_THUNDER_FANG, MOVE_ICE_FANG, MOVE_PSYCHIC_FANGS, MOVE_CRUNCH}, \
    .gender = TRAINER_MON_MALE,                                                   \
    }

#define WATTSON_TOXTRICITY(rematch, tier)                                    \
    {                                                                        \
    REMATCH_MON(TOXTRICITY, tier, rematch, ITEM_THROAT_SPRAY),               \
    .ability = ABILITY_PUNK_ROCK,                                            \
    IDEAL_ATTACKER_SPECIAL,                                                  \
    .moves = {MOVE_OVERDRIVE, MOVE_SLUDGE_BOMB, MOVE_BOOMBURST, MOVE_SNARL}, \
    .gender = TRAINER_MON_MALE,                                              \
    }

#define WATTSON_PINCURCHIN(rematch, tier)                                                 \
    {                                                                                     \
    REMATCH_MON(PINCURCHIN, tier, rematch, ITEM_TERRAIN_EXTENDER),                        \
    .ability = ABILITY_ELECTRIC_SURGE,                                                    \
    .nature = NATURE_IMPISH,                                                              \
    EV_SPREAD_DEF_SPD_HP,                                                                 \
    .moves = {MOVE_SUPERCELL_SLAM, MOVE_LIQUIDATION, MOVE_SPIKES, MOVE_ELECTRIC_TERRAIN}, \
    .gender = TRAINER_MON_MALE,                                                           \
    }

#define WATTSON_MORPEKO

#define WATTSON_PAWMOT(rematch, tier)                                                 \
    {                                                                                 \
    REMATCH_MON(PAWMOT, tier, rematch, ITEM_PUNCHING_GLOVE),                          \
    .ability = ABILITY_IRON_FIST,                                                     \
    IDEAL_ATTACKER_PHYSICAL,                                                          \
    .moves = {MOVE_THUNDER_PUNCH, MOVE_DRAIN_PUNCH, MOVE_ICE_PUNCH, MOVE_MACH_PUNCH}, \
    .gender = TRAINER_MON_MALE,                                                       \
    }

#define WATTSON_BELLIBOLT(rematch, tier)                                                  \
    {                                                                                     \
    REMATCH_MON(BELLIBOLT, tier, rematch, ITEM_MAGNET),                                   \
    .ability = ABILITY_ELECTROMORPHOSIS,                                                  \
    .nature = NATURE_MODEST,                                                              \
    EV_SPREAD_SPA_HP_SPD,                                                                 \
    .moves = {MOVE_PARABOLIC_CHARGE, MOVE_SURF, MOVE_EARTH_POWER, MOVE_ELECTRIC_TERRAIN}, \
    .gender = TRAINER_MON_MALE,                                                           \
    }

#define WATTSON_KILOWATTREL_INFO(rematch, tier, item) \
    REMATCH_MON(KILOWATTREL, tier, rematch, item),    \
    .ability = ABILITY_WIND_POWER,                    \
    IDEAL_SPEEDSTER_SPECIAL,                          \
    .gender = TRAINER_MON_MALE

#define WATTSON_KILOWATTREL(rematch, tier)                                         \
    {                                                                              \
    WATTSON_KILOWATTREL_INFO(rematch, tier, ITEM_MAGNET),                          \
    .moves = {MOVE_THUNDERBOLT, MOVE_AIR_SLASH, MOVE_WEATHER_BALL, MOVE_TAILWIND}, \
    }

#define WATTSON_KILOWATTREL_RAIN(rematch, tier)                                  \
    {                                                                            \
    WATTSON_KILOWATTREL_INFO(rematch, tier, ITEM_DAMP_ROCK),                     \
    .moves = {MOVE_THUNDER, MOVE_HURRICANE, MOVE_WEATHER_BALL, MOVE_RAIN_DANCE}, \
    }

#define WATTSON_REMATCH(Rematch)                 \
[DIFFICULTY_NORMAL][TRAINER_WATTSON_##Rematch] = \
{                                                \
    WATTSON_INFO,                                \
    LEADER_REMATCH,                              \
    .party = (const struct TrainerMon[]) {       \
        WATTSON_ELECTRODE(Rematch, TIER3),       \
        WATTSON_LANTURN(Rematch, TIER3),         \
        WATTSON_MAGNEZONE(Rematch, TIER3),       \
        WATTSON_MINUN(Rematch, TIER2),           \
        WATTSON_PLUSLE(Rematch, TIER2),          \
        WATTSON_MANECTRIC(Rematch, ACE),         \
    },                                           \
}

WATTSON_REMATCH(2),
WATTSON_REMATCH(3),
WATTSON_REMATCH(4),

#define FLANNERY_INFO             \
    LEADER_INFO(FLANNERY),        \
    .trainerName = _("Helene"), \
    .gender = TRAINER_GENDER_FEMALE, \
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE

[DIFFICULTY_NORMAL][TRAINER_FLANNERY_1] =
{
    FLANNERY_INFO,
    .items = {ITEM_HYPER_POTION, ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE},
    .partySize = 4,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = CAP_GYM_4 - 4,
        .species = SPECIES_MASQUERAIN,
        .ability = ABILITY_INTIMIDATE,
        IVS(24),
        .moves = {MOVE_SIGNAL_BEAM, MOVE_AIR_CUTTER, MOVE_OMINOUS_WIND, MOVE_STICKY_WEB},
        .gender = TRAINER_MON_FEMALE,
        },
        {
        .lvl = CAP_GYM_4 - 2,
        .species = SPECIES_DWEBBLE,
        .ability = ABILITY_SHELL_ARMOR,
        IVS(24),
        .moves = {MOVE_SIGNAL_BEAM, MOVE_ROCK_SLIDE, MOVE_FEINT_ATTACK, MOVE_WITHDRAW},
        .gender = TRAINER_MON_FEMALE,
        },
        {
        .lvl = CAP_GYM_4 - 2,
        .species = SPECIES_BEAUTIFLY,
        .ability = ABILITY_SWARM,
        IVS(30),
        .moves = {MOVE_SIGNAL_BEAM, MOVE_AIR_CUTTER, MOVE_MORNING_SUN, MOVE_STUN_SPORE},
        .gender = TRAINER_MON_FEMALE,
        },
        {
        .lvl = CAP_GYM_4,
        .species = SPECIES_RIBOMBEE,
        .ability = ABILITY_SHIELD_DUST,
        IVS(30),
        .moves = {MOVE_SIGNAL_BEAM, MOVE_DRAINING_KISS, MOVE_STUN_SPORE, MOVE_SWEET_SCENT},
        .gender = TRAINER_MON_FEMALE,
        .heldItem = ITEM_WHITE_HERB,
        .ball = ITEM_POKE_BALL,
        }
    },
},

#define FLANNERY_TORKOAL(rematch, tier)                                                                                \
    {                                                                                                                  \
    REMATCH_MON(TORKOAL, tier, rematch, ITEM_WHITE_HERB),                                                              \
    .ability = ABILITY_DROUGHT,                                                                                        \
    .nature = NATURE_MODEST,                                                                                           \
    EV_SPREAD_SPA_DEF_HP,                                                                                              \
    .moves = {tier <= TIER2 ? MOVE_OVERHEAT : MOVE_FLAMETHROWER, MOVE_IRON_DEFENSE, MOVE_SHELL_SMASH, MOVE_SUNNY_DAY}, \
    .gender = TRAINER_MON_FEMALE,                                                                                      \
    }

#define FLANNERY_CAMERUPT(rematch, tier)                                                                          \
    {                                                                                                             \
    REMATCH_MON(CAMERUPT, tier, rematch, ITEM_WHITE_HERB),                                                        \
    .ability = ABILITY_MAGMA_ARMOR,                                                                               \
    IDEAL_ATTACKER_SPECIAL,                                                                                       \
    .moves = {tier <= TIER2 ? MOVE_OVERHEAT : MOVE_FLAMETHROWER, MOVE_EARTH_POWER, MOVE_AMNESIA, MOVE_SUNNY_DAY}, \
    .gender = TRAINER_MON_FEMALE,                                                                                 \
    }

#define FLANNERY_BLAZIKEN(rematch, tier)                                                                                  \
    {                                                                                                                     \
    REMATCH_MON(BLAZIKEN, tier, rematch, ITEM_WHITE_HERB),                                                                \
    .ability = ABILITY_BLAZE,                                                                                             \
    IDEAL_ATTACKER_SPECIAL,                                                                                               \
    .moves = {tier <= TIER2 ? MOVE_OVERHEAT : MOVE_FLAMETHROWER, MOVE_AURA_SPHERE, MOVE_SCORCHING_SANDS, MOVE_SUNNY_DAY}, \
    .gender = TRAINER_MON_FEMALE,                                                                                         \
    }

#define FLANNERY_CASTFORM(rematch, tier)                                                                              \
    {                                                                                                                 \
    REMATCH_MON(CASTFORM, tier, rematch, ITEM_WHITE_HERB),                                                            \
    .ability = ABILITY_FORECAST,                                                                                      \
    IDEAL_ATTACKER_SPECIAL,                                                                                           \
    .moves = {tier <= TIER2 ? MOVE_OVERHEAT : MOVE_FLAMETHROWER, MOVE_SOLAR_BEAM, MOVE_WEATHER_BALL, MOVE_SUNNY_DAY}, \
    .gender = TRAINER_MON_FEMALE,                                                                                     \
    }

#define FLANNERY_MAGCARGO(rematch, tier)                                                                            \
    {                                                                                                               \
    REMATCH_MON(MAGCARGO, tier, rematch, ITEM_WHITE_HERB),                                                          \
    .ability = ABILITY_FLAME_BODY,                                                                                  \
    .nature = NATURE_MODEST,                                                                                        \
    EV_SPREAD_SPA_DEF_HP,                                                                                           \
    .moves = {tier <= TIER2 ? MOVE_OVERHEAT : MOVE_FLAMETHROWER, MOVE_POWER_GEM, MOVE_SHELL_SMASH, MOVE_SUNNY_DAY}, \
    .gender = TRAINER_MON_FEMALE,                                                                                   \
    }

#define FLANNERY_NINETALES(rematch, tier)                                                                           \
    {                                                                                                               \
    REMATCH_MON(NINETALES, tier, rematch, ITEM_WHITE_HERB),                                                         \
    .ability = ABILITY_DROUGHT,                                                                                     \
    IDEAL_SPEEDSTER_SPECIAL,                                                                                        \
    .moves = {tier <= TIER2 ? MOVE_OVERHEAT : MOVE_FLAMETHROWER, MOVE_SOLAR_BEAM, MOVE_NASTY_PLOT, MOVE_SUNNY_DAY}, \
    .gender = TRAINER_MON_FEMALE,                                                                                   \
    }

// Extra for hacks
#define FLANNERY_ARCANINE(rematch, tier)                                        \
    {                                                                           \
    REMATCH_MON(ARCANINE, tier, rematch),                                       \
    .ability = ABILITY_FLASH_FIRE,                                              \
    IDEAL_ATTACKER_PHYSICAL,                                                    \
    .moves = {MOVE_TEMPER_FLARE, MOVE_CRUNCH, MOVE_PLAY_ROUGH, MOVE_SUNNY_DAY}, \
    .gender = TRAINER_MON_FEMALE,                                               \
    }

#define FLANNERY_ARCANINE_HISUI

#define FLANNERY_RAPIDASH(rematch, tier)                                            \
    {                                                                               \
    REMATCH_MON(RAPIDASH, tier, rematch, ITEM_HEAT_ROCK),                           \
    .ability = ABILITY_FLASH_FIRE,                                                  \
    IDEAL_SPEEDSTER_PHYSICAL,                                                       \
    .moves = {MOVE_BLAZE_KICK, MOVE_SMART_STRIKE, MOVE_POISON_JAB, MOVE_SUNNY_DAY}, \
    .gender = TRAINER_MON_FEMALE,                                                   \
    }

// Can replace Bonemerang with Double-Edge
#define FLANNERY_MAROWAK(rematch, tier)                                             \
    {                                                                               \
    REMATCH_MON(MAROWAK_ALOLA, tier, rematch),                                      \
    .ability = ABILITY_ROCK_HEAD,                                                   \
    .nature = NATURE_ADAMANT,                                                       \
    EV_SPREAD_ATK_DEF_HP,                                                           \
    .moves = {MOVE_FLARE_BLITZ, MOVE_SHADOW_BONE, MOVE_BONEMERANG, MOVE_SUNNY_DAY}, \
    .gender = TRAINER_MON_FEMALE,                                                   \
    }

#define FLANNERY_MAGMORTAR

#define FLANNERY_FLAREON(rematch, tier)                                                  \
    {                                                                                    \
    REMATCH_MON(FLAREON, tier, rematch),                                                 \
    .ability = ABILITY_FLASH_FIRE,                                                       \
    .nature = NATURE_ADAMANT,                                                            \
    EV_SPREAD_ATK_SPE_SPD,                                                               \
    .moves = {MOVE_TEMPER_FLARE, MOVE_WILL_O_WISP, MOVE_BABY_DOLL_EYES, MOVE_SUNNY_DAY}, \
    .gender = TRAINER_MON_FEMALE,                                                        \
    }

#define FLANNERY_SIMISEAR
#define FLANNERY_DARMANITAN

#define FLANNERY_HEATMOR(rematch, tier)                                              \
    {                                                                                \
    REMATCH_MON(HEATMOR, tier, rematch),                                             \
    .ability = ABILITY_FLASH_FIRE,                                                   \
    IDEAL_ATTACKER_PHYSICAL,                                                         \
    .moves = {MOVE_FIRE_LASH, MOVE_DRAIN_PUNCH, MOVE_THUNDER_PUNCH, MOVE_SUNNY_DAY}, \
    .gender = TRAINER_MON_FEMALE,                                                    \
    }

/* Replace with Winona's due to type change
#define FLANNERY_TALONFLAME(rematch, tier)                                                                            \
    {                                                                                                                 \
    REMATCH_MON(TALONFLAME, tier, rematch),                                                                           \
    .ability = ABILITY_FLAME_BODY,                                                                                    \
    IDEAL_SPEEDSTER_PHYSICAL,                                                                                         \
    .moves = {MOVE_BLAZE_KICK, tier <= TIER2 ? MOVE_DUAL_WINGBEAT : MOVE_ACROBATICS, MOVE_STEEL_WING, MOVE_TAILWIND}, \
    .gender = TRAINER_MON_FEMALE,                                                                                     \
    }
*/

#define FLANNERY_PYROAR(rematch, tier)                                                 \
    {                                                                                  \
    REMATCH_MON(PYROAR, tier, rematch, tier == ACE ? ITEM_PYROARITE : ITEM_WIDE_LENS), \
    .ability = ABILITY_COMPETITIVE,                                                    \
    IDEAL_ATTACKER_SPECIAL,                                                            \
    .moves = {MOVE_FIRE_BLAST, MOVE_HYPER_VOICE, MOVE_DARK_PULSE, MOVE_SUNNY_DAY},     \
    .gender = TRAINER_MON_FEMALE,                                                      \
    }

#define FLANNERY_ORICORIO
#define FLANNERY_TURTONATOR
#define FLANNERY_CENTISKORCH
#define FLANNERY_ARMAROUGE
#define FLANNERY_CERULEDGE

#define HELENE_RIBOMBEE(rematch, tier)                                                 \
    {                                                                                  \
    REMATCH_MON(RIBOMBEE, tier, rematch, ITEM_SITRUS_BERRY),                           \
    .ability = ABILITY_SHIELD_DUST,                                                    \
    IDEAL_SPEEDSTER_SPECIAL,                                                           \
    .moves = {MOVE_POLLEN_PUFF, MOVE_DAZZLING_GLEAM, MOVE_PSYCHIC, MOVE_QUIVER_DANCE}, \
    .gender = TRAINER_MON_FEMALE,                                                      \
    }

#define HELENE_BEAUTIFLY(rematch, tier)                                            \
    {                                                                              \
    REMATCH_MON(BEAUTIFLY, tier, rematch, ITEM_SILVER_POWDER),                     \
    .ability = ABILITY_SWARM,                                                      \
    IDEAL_ATTACKER_SPECIAL,                                                        \
    .moves = {MOVE_BUG_BUZZ, MOVE_AIR_SLASH, MOVE_ENERGY_BALL, MOVE_QUIVER_DANCE}, \
    .gender = TRAINER_MON_FEMALE,                                                  \
    }

#define HELENE_CRUSTLE(rematch, tier)                                               \
    {                                                                               \
    REMATCH_MON(CRUSTLE, tier, rematch, ITEM_QUICK_CLAW),                           \
    .ability = ABILITY_SHELL_ARMOR,                                                 \
    .nature = NATURE_IMPISH,                                                        \
    EV_SPREAD_ATK_DEF_HP,                                                           \
    .moves = {MOVE_X_SCISSOR, MOVE_ROCK_SLIDE, MOVE_BODY_PRESS, MOVE_IRON_DEFENSE}, \
    .gender = TRAINER_MON_FEMALE,                                                   \
    }

#define HELENE_MASQUERAIN(rematch, tier)                                    \
    {                                                                       \
    REMATCH_MON(MASQUERAIN, tier, rematch),                                 \
    .ability = ABILITY_INTIMIDATE,                                          \
    IDEAL_ATTACKER_SPECIAL,                                                 \
    .moves = {MOVE_BUG_BUZZ, MOVE_AIR_SLASH, MOVE_SURF, MOVE_QUIVER_DANCE}, \
    .gender = TRAINER_MON_FEMALE,                                           \
    }

#define HELENE_HERACROSS(rematch, tier)                                          \
    {                                                                            \
    REMATCH_MON(HERACROSS, tier, rematch),                                       \
    .ability = ABILITY_MOXIE,                                                    \
    IDEAL_ATTACKER_PHYSICAL,                                                     \
    .moves = {MOVE_LUNGE, MOVE_DRAIN_PUNCH, MOVE_ROCK_SLIDE, MOVE_SWORDS_DANCE}, \
    .gender = TRAINER_MON_FEMALE,                                                \
    }

#define HELENE_PINSIR(rematch, tier)                                             \
    {                                                                            \
    REMATCH_MON(PINSIR, tier, rematch),                                          \
    .ability = ABILITY_MOXIE,                                                    \
    IDEAL_ATTACKER_PHYSICAL,                                                     \
    .moves = {MOVE_LUNGE, MOVE_ROCK_SLIDE, MOVE_BRICK_BREAK, MOVE_SWORDS_DANCE}, \
    .gender = TRAINER_MON_FEMALE,                                                \
    }


#define FLANNERY_REMATCH(Rematch)                 \
[DIFFICULTY_NORMAL][TRAINER_FLANNERY_##Rematch] = \
{                                                 \
    FLANNERY_INFO,                                \
    LEADER_REMATCH,                               \
    .party = (const struct TrainerMon[]) {        \
        HELENE_PINSIR(Rematch, TIER3),            \
        HELENE_HERACROSS(Rematch, TIER3),         \
        HELENE_MASQUERAIN(Rematch, TIER3),        \
        HELENE_CRUSTLE(Rematch, TIER2),           \
        HELENE_BEAUTIFLY(Rematch, TIER2),         \
        HELENE_RIBOMBEE(Rematch, ACE),            \
    },                                            \
}

FLANNERY_REMATCH(2),
FLANNERY_REMATCH(3),
FLANNERY_REMATCH(4),

#define NORMAN_INFO             \
    LEADER_INFO(ERIC),        \
    .trainerName = _("Eric"), \
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE

[DIFFICULTY_NORMAL][TRAINER_NORMAN_1] =
{
    NORMAN_INFO,
    .items = {ITEM_HYPER_POTION, ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE},
    .partySize = 4,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = CAP_GYM_5 - 4,
        .species = SPECIES_LINOONE,
        .ability = ABILITY_QUICK_FEET,
        IVS(24),
        .moves = {MOVE_FACADE, MOVE_SLASH, MOVE_PLAY_ROUGH, MOVE_HONE_CLAWS},
        .gender = TRAINER_MON_MALE,
        },
        {
        .lvl = CAP_GYM_5 - 2,
        .species = SPECIES_ZANGOOSE,
        .ability = ABILITY_POISON_HEAL,
        IVS(24),
        .moves = {MOVE_FACADE, MOVE_CRUSH_CLAW, MOVE_NIGHT_SLASH, MOVE_HONE_CLAWS},
        .gender = TRAINER_MON_MALE,
        },
        {
        .lvl = CAP_GYM_5 - 2,
        .species = SPECIES_SPINDA,
        .ability = ABILITY_OWN_TEMPO,
        .nature = NATURE_QUIRKY,
        IVS(24),
        .moves = {MOVE_FACADE, MOVE_TEETER_DANCE, MOVE_FEINT_ATTACK, MOVE_DIZZY_PUNCH},
        .gender = TRAINER_MON_MALE,
        },
        {
        .lvl = CAP_GYM_5,
        .species = SPECIES_KOMALA,
        .ability = ABILITY_COMATOSE,
        IVS(30),
        .moves = {MOVE_FACADE, MOVE_SUCKER_PUNCH, MOVE_YAWN, MOVE_RAPID_SPIN},
        .gender = TRAINER_MON_MALE,
        .heldItem = ITEM_SITRUS_BERRY,
        .ball = ITEM_POKE_BALL,
        }
    },
},

#define NORMAN_SLAKING(rematch, tier)                                                  \
    {                                                                                  \
    REMATCH_MON(SLAKING, tier, rematch, ITEM_SITRUS_BERRY),                            \
    .ability = ABILITY_TRUANT,                                                         \
    IDEAL_ATTACKER_PHYSICAL,                                                           \
    .moves = {MOVE_GIGA_IMPACT, MOVE_HAMMER_ARM, MOVE_THROAT_CHOP, MOVE_SUCKER_PUNCH}, \
    .gender = TRAINER_MON_MALE,                                                        \
    }

#define NORMAN_SPINDA(rematch, tier)                                           \
    {                                                                          \
    REMATCH_MON(SPINDA, tier, rematch, ITEM_LIECHI_BERRY),                     \
    .ability = ABILITY_OWN_TEMPO,                                              \
    IDEAL_SPEEDSTER_PHYSICAL,                                                  \
    .moves = {MOVE_THRASH, MOVE_TEETER_DANCE, MOVE_HYPNOSIS, MOVE_SKILL_SWAP}, \
    .gender = TRAINER_MON_MALE,                                                \
    }

#define NORMAN_ZANGOOSE(rematch, tier)                                                                        \
    {                                                                                                         \
    REMATCH_MON(ZANGOOSE, tier, rematch, ITEM_TOXIC_ORB),                                                     \
    .ability = tier <= TIER2 ? ABILITY_POISON_HEAL : ABILITY_SHARPNESS,                                       \
    IDEAL_ATTACKER_PHYSICAL,                                                                                  \
    .moves = {tier <= TIER2 ? MOVE_FACADE : MOVE_SLASH, MOVE_X_SCISSOR, MOVE_NIGHT_SLASH, MOVE_SWORDS_DANCE}, \
    .gender = TRAINER_MON_MALE,                                                                               \
    }

#define NORMAN_LINOONE(rematch, tier)                                          \
    {                                                                          \
    REMATCH_MON(LINOONE, tier, rematch),                                       \
    .ability = ABILITY_QUICK_FEET,                                             \
    IDEAL_SPEEDSTER_PHYSICAL,                                                  \
    .moves = {MOVE_SLASH, MOVE_PLAY_ROUGH, MOVE_PIN_MISSILE, MOVE_BELLY_DRUM}, \
    .gender = TRAINER_MON_MALE,                                                \
    }

#define NORMAN_EXPLOUD(rematch, tier)                                                     \
    {                                                                                     \
    REMATCH_MON(EXPLOUD, tier, rematch),                                                  \
    .ability = ABILITY_PUNK_ROCK,                                                         \
    IDEAL_ATTACKER_SPECIAL,                                                               \
    .moves = {MOVE_HYPER_VOICE, MOVE_DISARMING_VOICE, MOVE_SHADOW_BALL, MOVE_SUPERSONIC}, \
    .gender = TRAINER_MON_MALE,                                                           \
    }

#define NORMAN_KECLEON(rematch, tier)                                          \
    {                                                                          \
    REMATCH_MON(KECLEON, tier, rematch),                                       \
    .ability = ABILITY_COLOR_CHANGE,                                           \
    .nature = NATURE_ADAMANT,                                                  \
    EV_SPREAD_ATK_SPD_HP,                                                      \
    .moves = {MOVE_FACADE, MOVE_SHADOW_CLAW, MOVE_SUCKER_PUNCH, MOVE_DISABLE}, \
    .gender = TRAINER_MON_MALE,                                                \
    }

// Extra for hacks
#define NORMAN_PIDGEOT
#define NORMAN_RATICATE
#define NORMAN_FEAROW
#define NORMAN_WIGGLYTUFF

#define NORMAN_PERSIAN(rematch, tier)                                 \
    {                                                                 \
    REMATCH_MON(PERSIAN, tier, rematch, ITEM_LIECHI_BERRY),           \
    .ability = ABILITY_TECHNICIAN,                                    \
    IDEAL_SPEEDSTER_PHYSICAL,                                         \
    .moves = {MOVE_COVET, MOVE_BITE, MOVE_AERIAL_ACE, MOVE_FAKE_OUT}, \
    .gender = TRAINER_MON_MALE,                                       \
    }

#define NORMAN_FARFETCHD
#define NORMAN_DODRIO
#define NORMAN_LICKILICKY
#define NORMAN_BLISSEY
#define NORMAN_KANGASKHAN
#define NORMAN_TAUROS
#define NORMAN_DITTO

#define NORMAN_PORYGON_Z(rematch, tier)                                           \
    {                                                                             \
    REMATCH_MON(PORYGON_Z, tier, rematch),                                        \
    .ability = ABILITY_ADAPTABILITY,                                              \
    IDEAL_ATTACKER_SPECIAL,                                                       \
    .moves = {MOVE_HYPER_VOICE, MOVE_THUNDERBOLT, MOVE_PSYCHIC, MOVE_NASTY_PLOT}, \
    .gender = TRAINER_MON_NONE,                                                   \
    }

#define NORMAN_SNORLAX(rematch, tier)                                        \
    {                                                                        \
    REMATCH_MON(SNORLAX, tier, rematch, ITEM_LEFTOVERS),                     \
    .ability = ABILITY_THICK_FAT,                                            \
    .nature = NATURE_ADAMANT,                                                \
    EV_SPREAD_ATK_HP_SPD,                                                    \
    .moves = {MOVE_BODY_SLAM, MOVE_CRUNCH, MOVE_SLACK_OFF, MOVE_BELLY_DRUM}, \
    .gender = TRAINER_MON_MALE,                                              \
    }

#define NORMAN_FURRET
#define NORMAN_NOCTOWL
#define NORMAN_AMBIPOM

#define NORMAN_FARIGIRAF(rematch, tier) \
    {                                                                                  \
    REMATCH_MON(FARIGIRAF, tier, rematch),                                             \
    .ability = ABILITY_ARMOR_TAIL,                                                     \
    IDEAL_ATTACKER_SPECIAL,                                                            \
    .moves = {MOVE_HYPER_VOICE, MOVE_TWIN_BEAM, MOVE_DAZZLING_GLEAM, MOVE_NASTY_PLOT}, \
    .gender = TRAINER_MON_MALE,                                                        \
    }

#define NORMAN_DUDUNSPARCE
#define NORMAN_URSALUNA
#define NORMAN_WYRDEER
#define NORMAN_SMEARGLE
#define NORMAN_MILTANK
#define NORMAN_SWELLOW

#define NORMAN_DELCATTY(rematch, tier)                                        \
    {                                                                         \
    REMATCH_MON(DELCATTY, tier, rematch, ITEM_SILK_SCARF),                    \
    .ability = ABILITY_NORMALIZE,                                             \
    IDEAL_ATTACKER_SPECIAL,                                                   \
    .moves = {MOVE_HYPER_VOICE, MOVE_BLIZZARD, MOVE_ASSIST, MOVE_NASTY_PLOT}, \
    .gender = TRAINER_MON_FEMALE,                                             \
    }

#define NORMAN_CASTFORM

#define NORMAN_BIBAREL(rematch, tier)                                              \
    {                                                                              \
    REMATCH_MON(BIBAREL, tier, rematch),                                           \
    .ability = ABILITY_MOODY,                                                      \
    IDEAL_ATTACKER_PHYSICAL,                                                       \
    .moves = {MOVE_BODY_SLAM, MOVE_AQUA_TAIL, MOVE_SUPER_FANG, MOVE_SWORDS_DANCE}, \
    .gender = TRAINER_MON_MALE,                                                    \
    }

#define NORMAN_LOPUNNY

#define NORMAN_PURUGLY(rematch, tier)                                             \
    {                                                                             \
    REMATCH_MON(PURUGLY, tier, rematch, ITEM_ASSAULT_VEST),                       \
    .ability = ABILITY_THICK_FAT,                                                 \
    IDEAL_SPEEDSTER_PHYSICAL,                                                     \
    .moves = {MOVE_BODY_SLAM, MOVE_PLAY_ROUGH, MOVE_FEINT_ATTACK, MOVE_FAKE_OUT}, \
    .gender = TRAINER_MON_FEMALE,                                                 \
    }

#define NORMAN_CHATOT

#define NORMAN_WATCHOG(rematch, tier)                                           \
    {                                                                           \
    REMATCH_MON(WATCHOG, tier, rematch),                                        \
    .ability = ABILITY_ANALYTIC,                                                \
    IDEAL_ATTACKER_PHYSICAL,                                                    \
    .moves = {MOVE_HYPER_FANG, MOVE_SUPER_FANG, MOVE_CRUNCH, MOVE_CONFUSE_RAY}, \
    .gender = TRAINER_MON_MALE,                                                 \
    }

#define NORMAN_STOUTLAND(rematch, tier)                                 \
    {                                                                   \
    REMATCH_MON(STOUTLAND, tier, rematch, ITEM_SILK_SCARF),             \
    .ability = ABILITY_SCRAPPY,                                         \
    IDEAL_ATTACKER_PHYSICAL,                                            \
    .moves = {MOVE_BODY_SLAM, MOVE_CRUNCH, MOVE_PLAY_ROUGH, MOVE_HOWL}, \
    .gender = TRAINER_MON_MALE,                                         \
    }

#define NORMAN_UNFEZANT
#define NORMAN_AUDINO
#define NORMAN_ZOROARK
#define NORMAN_CINCCINO
#define NORMAN_SAWSBUCK
#define NORMAN_BOUFFALANT
#define NORMAN_BRAVIARY
#define NORMAN_DIGGERSBY
#define NORMAN_FURFROU

#define NORMAN_GUMSHOOS(rematch, tier)                                            \
    {                                                                             \
    REMATCH_MON(GUMSHOOS, tier, rematch),                                         \
    .ability = ABILITY_STRONG_JAW,                                                \
    IDEAL_ATTACKER_PHYSICAL,                                                      \
    .moves = {MOVE_HYPER_FANG, MOVE_PSYCHIC_FANGS, MOVE_CRUNCH, MOVE_SCARY_FACE}, \
    .gender = TRAINER_MON_MALE,                                                   \
    }

#define NORMAN_BEWEAR
#define NORMAN_ORANGURU

#define NORMAN_KOMALA(rematch, tier) \
    {                                \
    REMATCH_MON(KOMALA, tier, rematch),                                             \
    .ability = ABILITY_COMATOSE,                                                    \
    IDEAL_ATTACKER_PHYSICAL,                                                        \
    .moves = {MOVE_BODY_SLAM, MOVE_PLAY_ROUGH, MOVE_RAPID_SPIN, MOVE_SWORDS_DANCE}, \
    .gender = TRAINER_MON_MALE,                                                     \
    }

#define NORMAN_GREEDENT(rematch, tier)                                                                           \
    {                                                                                                            \
    REMATCH_MON(GREEDENT, tier, rematch, ITEM_LIECHI_BERRY),                                                     \
    .ability = ABILITY_CHEEK_POUCH,                                                                              \
    .nature = NATURE_ADAMANT,                                                                                    \
    EV_SPREAD_ATK_HP_DEF,                                                                                        \
    .moves = {MOVE_BODY_SLAM, MOVE_BODY_PRESS, MOVE_SEED_BOMB, tier <= TIER2 ? MOVE_STUFF_CHEEKS : MOVE_CRUNCH}, \
    .gender = TRAINER_MON_MALE,                                                                                  \
    }

#define NORMAN_DUBWOOL
#define NORMAN_OINKOLOGNE
#define NORMAN_MAUSHOLD

#define NORMAN_REMATCH(Rematch)                 \
[DIFFICULTY_NORMAL][TRAINER_NORMAN_##Rematch] = \
{                                               \
    NORMAN_INFO,                                \
    LEADER_REMATCH,                             \
    .party = (const struct TrainerMon[]) {      \
        NORMAN_LINOONE(Rematch, TIER3),         \
        NORMAN_FARIGIRAF(Rematch, TIER3),       \
        NORMAN_PORYGON_Z(Rematch, TIER3),       \
        NORMAN_ZANGOOSE(Rematch, TIER2),        \
        NORMAN_SPINDA(Rematch, TIER2),          \
        NORMAN_KOMALA(Rematch, ACE),            \
    },                                          \
}

NORMAN_REMATCH(2),
NORMAN_REMATCH(3),
NORMAN_REMATCH(4),

#define WINONA_INFO             \
    LEADER_INFO(WINONA),        \
    .trainerName = _("Yunda"), \
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE

[DIFFICULTY_NORMAL][TRAINER_WINONA_1] =
{
    WINONA_INFO,
    .items = {ITEM_HYPER_POTION, ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE},
    .partySize = 5,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = CAP_GYM_6 - 3,
        .species = SPECIES_MASQUERAIN,
        .ability = ABILITY_INTIMIDATE,
        IVS(25),
        .moves = {MOVE_AERIAL_ACE, MOVE_SILVER_WIND, MOVE_SCARY_FACE, MOVE_STUN_SPORE},
        .gender = TRAINER_MON_FEMALE,
        },
        {
        .lvl = CAP_GYM_6 - 3,
        .species = SPECIES_TROPIUS,
        .ability = ABILITY_CHLOROPHYLL,
        IVS(25),
        .moves = {MOVE_AERIAL_ACE, MOVE_LEAF_TORNADO, MOVE_STOMP, MOVE_SWEET_SCENT},
        .gender = TRAINER_MON_FEMALE,
        },
        {
        .lvl = CAP_GYM_6 - 2,
        .species = SPECIES_PELIPPER,
        .ability = ABILITY_DRIZZLE,
        IVS(25),
        .moves = {MOVE_AERIAL_ACE, MOVE_WATER_PULSE, MOVE_SUPERSONIC, MOVE_TAILWIND},
        .gender = TRAINER_MON_FEMALE,
        },
        {
        .lvl = CAP_GYM_6 - 2,
        .species = SPECIES_SWELLOW,
        .ability = ABILITY_SCRAPPY,
        IVS(26),
        .moves = {MOVE_AERIAL_ACE, MOVE_QUICK_ATTACK, MOVE_QUICK_GUARD, MOVE_AGILITY},
        .gender = TRAINER_MON_FEMALE,
        },
        {
        .lvl = CAP_GYM_6,
        .species = SPECIES_ALTARIA,
        .ability = ABILITY_NATURAL_CURE,
        IVS(30),
        .moves = {MOVE_AERIAL_ACE, MOVE_DRAGON_BREATH, MOVE_COTTON_GUARD, MOVE_DRAGON_DANCE},
        .gender = TRAINER_MON_FEMALE,
        .heldItem = ITEM_SITRUS_BERRY,
        .ball = ITEM_POKE_BALL,
        }
    },
},

#define WINONA_ALTARIA(rematch, tier)                                                \
    {                                                                                \
    REMATCH_MON(ALTARIA, tier, rematch, ITEM_SITRUS_BERRY),                          \
    .ability = ABILITY_NATURAL_CURE,                                                 \
    .nature = NATURE_MODEST,                                                         \
    EV_SPREAD_SPA_SPE_SPD,                                                           \
    .moves = {MOVE_AIR_SLASH, MOVE_DRAGON_PULSE, MOVE_MOONBLAST, MOVE_COTTON_GUARD}, \
    .gender = TRAINER_MON_FEMALE,                                                    \
    }

#define WINONA_SWELLOW(rematch, tier)                                           \
    {                                                                           \
    REMATCH_MON(SWELLOW, tier, rematch, ITEM_SHARP_BEAK),                       \
    .ability = ABILITY_SCRAPPY,                                                 \
    IDEAL_SPEEDSTER_PHYSICAL,                                                   \
    .moves = {MOVE_BRAVE_BIRD, MOVE_ENDEAVOR, MOVE_REVERSAL, MOVE_DOUBLE_TEAM}, \
    .gender = TRAINER_MON_FEMALE,                                               \
    }

#define WINONA_PELIPPER(rematch, tier)                                     \
    {                                                                      \
    REMATCH_MON(PELIPPER, tier, rematch, ITEM_DAMP_ROCK),                  \
    .ability = ABILITY_DRIZZLE,                                            \
    .nature = NATURE_MODEST,                                               \
    EV_SPREAD_SPA_SPE_DEF,                                                 \
    .moves = {MOVE_HURRICANE, MOVE_HYDRO_PUMP, MOVE_TAILWIND, MOVE_ROOST}, \
    .gender = TRAINER_MON_FEMALE,                                          \
    }

#define WINONA_TROPIUS(rematch, tier)                                            \
    {                                                                            \
    REMATCH_MON(TROPIUS, tier, rematch),                                         \
    .ability = ABILITY_CHLOROPHYLL,                                              \
    .nature = NATURE_MODEST,                                                     \
    EV_SPREAD_SPA_HP_SPE,                                                        \
    .moves = {MOVE_AIR_SLASH, MOVE_ENERGY_BALL, MOVE_BODY_SLAM, MOVE_SYNTHESIS}, \
    .gender = TRAINER_MON_FEMALE,                                                \
    }

#define WINONA_MASQUERAIN(rematch, tier)                                          \
    {                                                                             \
    REMATCH_MON(MASQUERAIN, tier, rematch),                                       \
    .ability = ABILITY_INTIMIDATE,                                                \
    .nature = NATURE_MODEST,                                                      \
    EV_SPREAD_SPA_SPE_SPD,                                                        \
    .moves = {MOVE_AIR_SLASH, MOVE_BUG_BUZZ, MOVE_GIGA_DRAIN, MOVE_QUIVER_DANCE}, \
    .gender = TRAINER_MON_FEMALE,                                                 \
    }

#define WINONA_NINJASK(rematch, tier)                                                \
    {                                                                                \
    REMATCH_MON(NINJASK, tier, rematch),                                             \
    .ability = ABILITY_SPEED_BOOST,                                                  \
    IDEAL_SPEEDSTER_PHYSICAL,                                                        \
    .moves = {MOVE_ACROBATICS, MOVE_LEECH_LIFE, MOVE_BATON_PASS, MOVE_SWORDS_DANCE}, \
    .gender = TRAINER_MON_FEMALE,                                                    \
    }

// Extra for hacks
#define WINONA_DODRIO(rematch, tier)                                               \
    {                                                                              \
    REMATCH_MON(DODRIO, tier, rematch, ITEM_SHARP_BEAK),                           \
    .ability = ABILITY_EARLY_BIRD,                                                 \
    IDEAL_ATTACKER_PHYSICAL,                                                       \
    .moves = {MOVE_DRILL_PECK, MOVE_BODY_SLAM, MOVE_JUMP_KICK, MOVE_SWORDS_DANCE}, \
    .gender = TRAINER_MON_FEMALE,                                                  \
    }

#define WINONA_XATU(rematch, tier)                                            \
    {                                                                         \
    REMATCH_MON(XATU, tier, rematch),                                         \
    .ability = ABILITY_EARLY_BIRD,                                            \
    IDEAL_ATTACKER_SPECIAL,                                                   \
    .moves = {MOVE_AIR_SLASH, MOVE_PSYCHIC, MOVE_DAZZLING_GLEAM, MOVE_ROOST}, \
    .gender = TRAINER_MON_FEMALE,                                             \
    }

#define WINONA_STARAPTOR(rematch, tier)                                               \
    {                                                                                 \
    REMATCH_MON(STARAPTOR, tier, rematch, tier == ACE ? ITEM_STARAPTITE : ITEM_NONE), \
    .ability = ABILITY_INTIMIDATE,                                                    \
    IDEAL_ATTACKER_PHYSICAL,                                                          \
    .moves = {MOVE_DUAL_WINGBEAT, MOVE_SLASH, MOVE_CLOSE_COMBAT, MOVE_AGILITY},       \
    .gender = TRAINER_MON_FEMALE,                                                     \
    }

#define WINONA_ROTOM(rematch, tier)                                                       \
    {                                                                                     \
    REMATCH_MON(ROTOM_FAN, tier, rematch),                                                \
    .ability = ABILITY_WIND_POWER,                                                        \
    IDEAL_ATTACKER_SPECIAL,                                                               \
    .moves = {MOVE_AIR_SLASH, MOVE_PARABOLIC_CHARGE, MOVE_SHADOW_BALL, MOVE_DOUBLE_TEAM}, \
    }

#define WINONA_TALONFLAME(rematch, tier)                                                                              \
    {                                                                                                                 \
    REMATCH_MON(TALONFLAME, tier, rematch),                                                                           \
    .ability = ABILITY_GALE_WINGS,                                                                                    \
    IDEAL_SPEEDSTER_PHYSICAL,                                                                                         \
    .moves = {tier <= TIER2 ? MOVE_DUAL_WINGBEAT : MOVE_ACROBATICS, MOVE_BLAZE_KICK, MOVE_STEEL_WING, MOVE_TAILWIND}, \
    .gender = TRAINER_MON_FEMALE,                                                                                     \
    }

#define WINONA_TOUCANNON(Rematch, Tier)                                               \
    {                                                                                 \
    REMATCH_MON(TOUCANNON, Tier, Rematch, ITEM_SHARP_BEAK),                           \
    .ability = ABILITY_SKILL_LINK,                                                    \
    IDEAL_ATTACKER_PHYSICAL,                                                          \
    .moves = {MOVE_BEAK_BLAST, MOVE_BULLET_SEED, MOVE_ROCK_BLAST, MOVE_SWORDS_DANCE}, \
    .gender = TRAINER_MON_FEMALE,                                                     \
    }

// Can replace Tailwind with Flamethrower
#define WINONA_NOIVERN(rematch, tier)                                        \
    {                                                                        \
    REMATCH_MON(NOIVERN, tier, rematch),                                     \
    .ability = ABILITY_INFILTRATOR,                                          \
    IDEAL_SPEEDSTER_SPECIAL,                                                 \
    .moves = {MOVE_AIR_SLASH, MOVE_DRAGON_PULSE, MOVE_TAILWIND, MOVE_ROOST}, \
    .gender = TRAINER_MON_FEMALE,                                            \
    }

#define WINONA_CORVIKNIGHT(rematch, tier)                                           \
    {                                                                               \
    REMATCH_MON(CORVIKNIGHT, tier, rematch, ITEM_SITRUS_BERRY),                     \
    .ability = ABILITY_MIRROR_ARMOR,                                                \
    .nature = NATURE_IMPISH,                                                        \
    EV_SPREAD_ATK_DEF_HP,                                                           \
    .moves = {MOVE_DRILL_PECK, MOVE_IRON_HEAD, MOVE_BODY_PRESS, MOVE_IRON_DEFENSE}, \
    .gender = TRAINER_MON_FEMALE,                                                   \
    }

#define WINONA_CRAMORANT(rematch, tier)                                 \
    {                                                                   \
    REMATCH_MON(CRAMORANT, tier, rematch, ITEM_SHARP_BEAK),             \
    IDEAL_ATTACKER_SPECIAL,                                             \
    .moves = {MOVE_AIR_SLASH, MOVE_SURF, MOVE_ICE_BEAM, MOVE_TAILWIND}, \
    .gender = TRAINER_MON_FEMALE,                                       \
    }

// Can replace Rocky Payload/Hone Claws with Big Pecks/Roost
#define WINONA_BOMBIRDIER(rematch, tier)                                            \
    {                                                                               \
    REMATCH_MON(BOMBIRDIER, tier, rematch, ITEM_SHARP_BEAK),                        \
    .ability = ABILITY_ROCKY_PAYLOAD,                                               \
    IDEAL_ATTACKER_PHYSICAL,                                                        \
    .moves = {MOVE_DRILL_PECK, MOVE_THROAT_CHOP, MOVE_ROCK_SLIDE, MOVE_HONE_CLAWS}, \
    .gender = TRAINER_MON_FEMALE,                                                   \
    }

#define WINONA_SQUAWKABILLY

// Can replace Liquidation with Throat Chop
#define WINONA_FLAMIGO(rematch, tier)                                              \
    {                                                                              \
    REMATCH_MON(FLAMIGO, tier, rematch, ITEM_FLYING_GEM),                          \
    .ability = ABILITY_SCRAPPY,                                                    \
    IDEAL_ATTACKER_PHYSICAL,                                                       \
    .moves = {MOVE_ACROBATICS, MOVE_HIGH_JUMP_KICK, MOVE_LIQUIDATION, MOVE_ROOST}, \
    .gender = TRAINER_MON_FEMALE,                                                  \
    }

#define WINONA_REMATCH(Rematch)                 \
[DIFFICULTY_NORMAL][TRAINER_WINONA_##Rematch] = \
{                                               \
    WINONA_INFO,                                \
    LEADER_REMATCH,                             \
    .party = (const struct TrainerMon[]) {      \
        WINONA_NINJASK(Rematch, TIER3),         \
        WINONA_MASQUERAIN(Rematch, TIER3),      \
        WINONA_TROPIUS(Rematch, TIER3),         \
        WINONA_PELIPPER(Rematch, TIER2),        \
        WINONA_SWELLOW(Rematch, TIER2),         \
        WINONA_ALTARIA(Rematch, ACE),           \
    },                                          \
}

WINONA_REMATCH(2),
WINONA_REMATCH(3),
WINONA_REMATCH(4),

#define TATE_AND_LIZA_INFO                                   \
    LEADER_INFO(TATE_AND_LIZA), \
    .trainerName = _("Ivanna"),                           \
    .gender = TRAINER_GENDER_FEMALE, \
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE

[DIFFICULTY_NORMAL][TRAINER_TATE_AND_LIZA_1] =
{
    TATE_AND_LIZA_INFO,
    .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
    .items = {ITEM_HYPER_POTION, ITEM_HYPER_POTION, ITEM_HYPER_POTION, ITEM_HYPER_POTION},
    .partySize = 4,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = CAP_GYM_7 - 2,
        .species = SPECIES_CLAYDOL,
        .ability = ABILITY_LEVITATE,
        IVS(30),
        .moves = {MOVE_PSYCHIC, MOVE_EARTH_POWER, MOVE_COSMIC_POWER, MOVE_LIGHT_SCREEN},
        .gender = TRAINER_MON_NONE,
        },
        {
        .lvl = CAP_GYM_7 - 2,
        .species = SPECIES_GRUMPIG,
        .ability = ABILITY_THICK_FAT,
        IVS(30),
        .moves = {MOVE_PSYCHIC, MOVE_POWER_GEM, MOVE_CONFUSE_RAY, MOVE_MAGIC_COAT},
        .gender = TRAINER_MON_MALE,
        },
        {
        .lvl = CAP_GYM_7,
        .species = SPECIES_LUNATONE,
        .ability = ABILITY_LEVITATE,
        IVS(30),
        .moves = {MOVE_PSYCHIC, MOVE_MOONBLAST, MOVE_POWER_GEM, MOVE_ICY_WIND},
        .heldItem = ITEM_SITRUS_BERRY,
        .gender = TRAINER_MON_NONE,
        .ball = ITEM_POKE_BALL,
        },
        {
        .lvl = CAP_GYM_7,
        .species = SPECIES_SOLROCK,
        .ability = ABILITY_LEVITATE,
        IVS(30),
        .moves = {MOVE_PSYCHIC, MOVE_ROCK_SLIDE, MOVE_FLARE_BLITZ, MOVE_MORNING_SUN},
        .heldItem = ITEM_SITRUS_BERRY,
        .gender = TRAINER_MON_NONE,
        .ball = ITEM_POKE_BALL,
        }
    },
},

#define TATE_SOLROCK(rematch, tier)                                                    \
    {                                                                                  \
    REMATCH_MON(SOLROCK, tier, rematch, ITEM_SITRUS_BERRY),                            \
    .ability = ABILITY_LEVITATE,                                                       \
    .nature = NATURE_ADAMANT,                                                          \
    EV_SPREAD_ATK_DEF_HP,                                                              \
    .moves = {MOVE_ZEN_HEADBUTT, MOVE_ROCK_SLIDE, MOVE_FLARE_BLITZ, MOVE_MORNING_SUN}, \
    }

#define LIZA_LUNATONE(rematch, tier)                                           \
    {                                                                          \
    REMATCH_MON(LUNATONE, tier, rematch, ITEM_SITRUS_BERRY),                   \
    .ability = ABILITY_LEVITATE,                                               \
    .nature = NATURE_MODEST,                                                   \
    EV_SPREAD_SPA_SPD_HP,                                                      \
    .moves = {MOVE_PSYCHIC, MOVE_MOONBLAST, MOVE_ICY_WIND, MOVE_COSMIC_POWER}, \
    }

#define TATE_GRUMPIG(rematch, tier)                                                \
    {                                                                              \
    REMATCH_MON(GRUMPIG, tier, rematch),                                           \
    .ability = ABILITY_THICK_FAT,                                                  \
    .nature = NATURE_CALM,                                                         \
    EV_SPREAD_SPA_SPD_HP,                                                          \
    .moves = {MOVE_PSYCHIC, MOVE_POWER_GEM, MOVE_DAZZLING_GLEAM, MOVE_MAGIC_COAT}, \
    .gender = TRAINER_MON_MALE,                                                    \
    }

#define LIZA_CLAYDOL(rematch, tier)                                                 \
    {                                                                               \
    REMATCH_MON(CLAYDOL, tier, rematch),                                            \
    .ability = ABILITY_LEVITATE,                                                    \
    .nature = NATURE_CALM,                                                          \
    EV_SPREAD_DEF_SPD_HP,                                                           \
    .moves = {MOVE_PSYCHIC, MOVE_EARTH_POWER, MOVE_POWER_SPLIT, MOVE_COSMIC_POWER}, \
    }

#define TATE_CHIMECHO(rematch, tier)                                                 \
    {                                                                                \
    REMATCH_MON(CHIMECHO, tier, rematch, tier == ACE ? ITEM_CHIMECHITE : ITEM_NONE), \
    .ability = ABILITY_LEVITATE,                                                     \
    .nature = NATURE_MODEST,                                                         \
    EV_SPREAD_SPA_SPD_HP,                                                            \
    .moves = {MOVE_PSYCHIC, MOVE_HEAL_PULSE, MOVE_LIGHT_SCREEN, MOVE_HEAL_BELL},     \
    .gender = TRAINER_MON_MALE,                                                      \
    }

#define LIZA_GARDEVOIR(rematch, tier)                                                 \
    {                                                                                 \
    REMATCH_MON(GARDEVOIR, tier, rematch),                                            \
    .ability = ABILITY_SYNCHRONIZE,                                                   \
    .nature = NATURE_MODEST,                                                          \
    EV_SPREAD_SPA_SPE_SPD,                                                            \
    .moves = {MOVE_PSYCHIC, MOVE_DAZZLING_GLEAM, MOVE_MYSTICAL_FIRE, MOVE_CALM_MIND}, \
    .gender = TRAINER_MON_FEMALE,                                                     \
    }

// Extra for hacks
// Can replace Shadow Ball with Recover
#define TATE_ALAKAZAM(rematch, tier)                                                \
    {                                                                               \
    REMATCH_MON(ALAKAZAM, tier, rematch, ITEM_TWISTED_SPOON),                       \
    .ability = ABILITY_MAGIC_GUARD,                                                 \
    IDEAL_ATTACKER_SPECIAL,                                                         \
    .moves = {MOVE_PSYCHIC, MOVE_DAZZLING_GLEAM, MOVE_SHADOW_BALL, MOVE_CALM_MIND}, \
    .gender = TRAINER_MON_MALE,                                                     \
    }

#define LIZA_RAPIDASH(rematch, tier)                                                        \
    {                                                                                       \
    REMATCH_MON(RAPIDASH_GALAR, tier, rematch, ITEM_SITRUS_BERRY),                          \
    .ability = ABILITY_PASTEL_VEIL,                                                         \
    IDEAL_SPEEDSTER_PHYSICAL,                                                               \
    .moves = {MOVE_ZEN_HEADBUTT, MOVE_PLAY_ROUGH, MOVE_HIGH_HORSEPOWER, MOVE_SWORDS_DANCE}, \
    .gender = TRAINER_MON_FEMALE,                                                           \
    }

#define TATE_LIZA_SLOWBRO
#define TATE_LIZA_SLOWKING
#define TATE_LIZA_HYPNO
#define TATE_MR_MIME

#define TATE_MR_RIME(rematch, tier)                                               \
    {                                                                             \
    REMATCH_MON(MR_RIME, tier, rematch),                                          \
    .ability = ABILITY_SCREEN_CLEANER,                                            \
    .nature = NATURE_MODEST,                                                      \
    EV_SPREAD_SPA_SPE_SPD,                                                        \
    .moves = {MOVE_EXPANDING_FORCE, MOVE_ICE_BEAM, MOVE_CALM_MIND, MOVE_REFLECT}, \
    .gender = TRAINER_MON_MALE,                                                   \
    }

// Can replace Morning Sun with Calm Mind
#define LIZA_ESPEON(rematch, tier)                                                   \
    {                                                                                \
    REMATCH_MON(ESPEON, tier, rematch),                                              \
    .ability = ABILITY_MAGIC_BOUNCE,                                                 \
    IDEAL_ATTACKER_SPECIAL,                                                          \
    .moves = {MOVE_PSYCHIC, MOVE_POWER_GEM, MOVE_MORNING_SUN, MOVE_PSYCHIC_TERRAIN}, \
    .gender = TRAINER_MON_FEMALE,                                                    \
    }

#define TATE_LIZA_XATU
#define TATE_LIZA_UNOWN
#define TATE_LIZA_WOBBUFFET
#define TATE_GALLADE
#define TATE_LIZA_MUSHARNA
#define TATE_LIZA_SWOOBAT
#define TATE_LIZA_SIGILYPH
#define LIZA_GOTHITELLE
#define TATE_REUNICLUS
#define TATE_LIZA_BEHEEYEM

#define TATE_BRAVIARY(rematch, tier)                                                 \
    {                                                                                \
    REMATCH_MON(BRAVIARY_HISUI, tier, rematch),                                      \
    .ability = ABILITY_TINTED_LENS,                                                  \
    IDEAL_ATTACKER_SPECIAL,                                                          \
    .moves = {MOVE_ESPER_WING, MOVE_AIR_SLASH, MOVE_DAZZLING_GLEAM, MOVE_CALM_MIND}, \
    .gender = TRAINER_MON_MALE,                                                      \
    }

#define TATE_MEOWSTIC(rematch, tier)                                                    \
    {                                                                                   \
    REMATCH_MON(MEOWSTIC_M, tier, rematch, ITEM_SITRUS_BERRY),                          \
    .ability = ABILITY_PRANKSTER,                                                       \
    IDEAL_SPEEDSTER_SPECIAL,                                                            \
    .moves = {MOVE_PSYCHIC, MOVE_PSYCHIC_TERRAIN, MOVE_TEARFUL_LOOK, MOVE_DOUBLE_TEAM}, \
    .gender = TRAINER_MON_MALE,                                                         \
    }

#define LIZA_MEOWSTIC(rematch, tier)                                             \
    {                                                                            \
    REMATCH_MON(MEOWSTIC_F, tier, rematch, ITEM_SITRUS_BERRY),                   \
    .ability = ABILITY_COMPETITIVE,                                              \
    IDEAL_ATTACKER_SPECIAL,                                                      \
    .moves = {MOVE_PSYCHIC, MOVE_SHADOW_BALL, MOVE_SIGNAL_BEAM, MOVE_CALM_MIND}, \
    .gender = TRAINER_MON_FEMALE,                                                \
    }

#define TATE_LIZA_ORICORIO

#define LIZA_HATTERENE(rematch, tier)                                            \
    {                                                                            \
    REMATCH_MON(HATTERENE, tier, rematch, ITEM_SITRUS_BERRY),                    \
    .ability = ABILITY_MAGIC_BOUNCE,                                             \
    .nature = NATURE_MODEST,                                                     \
    EV_SPREAD_SPA_SPD_HP,                                                        \
    .moves = {MOVE_PSYCHIC, MOVE_DAZZLING_GLEAM, MOVE_LIFE_DEW, MOVE_CALM_MIND}, \
    .gender = TRAINER_MON_FEMALE,                                                \
    }

#define TATE_INDEEDEE(rematch, tier)                                                      \
    {                                                                                     \
    REMATCH_MON(INDEEDEE_M, tier, rematch, ITEM_PSYCHIC_SEED),                            \
    .ability = ABILITY_PSYCHIC_SURGE,                                                     \
    .nature = NATURE_MODEST,                                                              \
    EV_SPREAD_SPA_SPE_SPD,                                                                \
    .moves = {MOVE_EXPANDING_FORCE, MOVE_HYPER_VOICE, MOVE_CALM_MIND, MOVE_HELPING_HAND}, \
    .gender = TRAINER_MON_MALE,                                                           \
    }

#define LIZA_INDEEDEE(rematch, tier)                                                      \
    {                                                                                     \
    REMATCH_MON(INDEEDEE_F, tier, rematch, ITEM_PSYCHIC_SEED),                            \
    .ability = ABILITY_PSYCHIC_SURGE,                                                     \
    .nature = NATURE_CALM,                                                                \
    EV_SPREAD_SPA_SPD_HP,                                                                 \
    .moves = {MOVE_EXPANDING_FORCE, MOVE_HYPER_VOICE, MOVE_CALM_MIND, MOVE_HELPING_HAND}, \
    .gender = TRAINER_MON_FEMALE,                                                         \
    }

#define LIZA_ESPATHRA(rematch, tier)                                                     \
    {                                                                                    \
    REMATCH_MON(ESPATHRA, tier, rematch),                                                \
    .ability = ABILITY_OPPORTUNIST,                                                      \
    IDEAL_SPEEDSTER_SPECIAL,                                                             \
    .moves = {MOVE_LUMINA_CRASH, MOVE_DAZZLING_GLEAM, MOVE_SHADOW_BALL, MOVE_CALM_MIND}, \
    .gender = TRAINER_MON_FEMALE,                                                        \
    }

#define TATE_AND_LIZA_REMATCH(Rematch)                 \
[DIFFICULTY_NORMAL][TRAINER_TATE_AND_LIZA_##Rematch] = \
{                                                      \
    TATE_AND_LIZA_INFO,                                \
    LEADER_REMATCH,                                    \
    .party = (const struct TrainerMon[]) {             \
        LIZA_GARDEVOIR(Rematch, TIER3),                \
        TATE_CHIMECHO(Rematch, TIER3),                 \
        LIZA_CLAYDOL(Rematch, TIER2),                  \
        TATE_GRUMPIG(Rematch, TIER2),                  \
        LIZA_LUNATONE(Rematch, ACE),                   \
        TATE_SOLROCK(Rematch, ACE),                    \
    },                                                 \
}

TATE_AND_LIZA_REMATCH(2),
TATE_AND_LIZA_REMATCH(3),
TATE_AND_LIZA_REMATCH(4),

#define JUAN_INFO             \
    LEADER_INFO(JUAN),        \
    .trainerName = _("Pat"), \
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE

[DIFFICULTY_NORMAL][TRAINER_JUAN_1] =
{
    JUAN_INFO,
    .items = {ITEM_HYPER_POTION, ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE},
    .partySize = 5,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = CAP_GYM_8 - 3,
        .species = SPECIES_CASTFORM,
        .ability = ABILITY_FORECAST,
        IVS(24),
        .moves = {MOVE_WATER_PULSE, MOVE_WEATHER_BALL, MOVE_ICE_BEAM, MOVE_RAIN_DANCE},
        .gender = TRAINER_MON_MALE,
        },
        {
        .lvl = CAP_GYM_8 - 3,
        .species = SPECIES_HUNTAIL,
        .ability = ABILITY_SWIFT_SWIM,
        IVS(24),
        .moves = {MOVE_WATER_PULSE, MOVE_CRUNCH, MOVE_ICE_FANG, MOVE_RAIN_DANCE},
        .gender = TRAINER_MON_MALE,
        },
        {
        .lvl = CAP_GYM_8 - 2,
        .species = SPECIES_CRAWDAUNT,
        .ability = ABILITY_SHELL_ARMOR,
        IVS(24),
        .moves = {MOVE_WATER_PULSE, MOVE_NIGHT_SLASH, MOVE_PROTECT, MOVE_SWORDS_DANCE},
        .gender = TRAINER_MON_MALE,
        },
        {
        .lvl = CAP_GYM_8 - 2,
        .species = SPECIES_LUVDISC,
        .ability = ABILITY_SWIFT_SWIM,
        IVS(24),
        .moves = {MOVE_WATER_PULSE, MOVE_DRAINING_KISS, MOVE_BABY_DOLL_EYES, MOVE_AQUA_RING},
        .gender = TRAINER_MON_FEMALE,
        },
        {
        .lvl = CAP_GYM_8,
        .species = SPECIES_WHISCASH,
        .ability = ABILITY_OBLIVIOUS,
        IVS(30),
        .moves = {MOVE_WATER_PULSE, MOVE_EARTHQUAKE, MOVE_AMNESIA, MOVE_DRAGON_DANCE},
        .gender = TRAINER_MON_MALE,
        .heldItem = ITEM_SITRUS_BERRY,
        .ball = ITEM_POKE_BALL,
        }
    },
},

#define JUAN_WHISCASH(rematch, tier)                                                  \
    {                                                                                 \
    REMATCH_MON(WHISCASH, tier, rematch, ITEM_SITRUS_BERRY),                          \
    .ability = ABILITY_OBLIVIOUS,                                                     \
    .nature = NATURE_ADAMANT,                                                         \
    EV_SPREAD_ATK_HP_SPE,                                                             \
    .moves = {MOVE_AQUA_TAIL, MOVE_EARTHQUAKE, MOVE_ZEN_HEADBUTT, MOVE_DRAGON_DANCE}, \
    .gender = TRAINER_MON_MALE,                                                       \
    }

#define JUAN_LUVDISC(rematch, tier)                                                       \
    {                                                                                     \
    REMATCH_MON(LUVDISC, tier, rematch, ITEM_DAMP_ROCK),                                  \
    .ability = ABILITY_SWIFT_SWIM,                                                        \
    IDEAL_SPEEDSTER_SPECIAL,                                                              \
    .moves = {MOVE_HYDRO_PUMP, MOVE_DRAINING_KISS, MOVE_BABY_DOLL_EYES, MOVE_RAIN_DANCE}, \
    .gender = TRAINER_MON_FEMALE,                                                         \
    }

#define JUAN_CRAWDAUNT(rematch, tier)                                          \
    {                                                                          \
    REMATCH_MON(CRAWDAUNT, tier, rematch, ITEM_MYSTIC_WATER),                  \
    .ability = ABILITY_SHELL_ARMOR,                                            \
    IDEAL_ATTACKER_PHYSICAL,                                                   \
    .moves = {MOVE_CRABHAMMER, MOVE_CRUNCH, MOVE_ENDEAVOR, MOVE_SWORDS_DANCE}, \
    .gender = TRAINER_MON_MALE,                                                \
    }

#define JUAN_HUNTAIL(rematch, tier)                                     \
    {                                                                   \
    REMATCH_MON(HUNTAIL, tier, rematch),                                \
    .ability = ABILITY_SWIFT_SWIM,                                      \
    .nature = NATURE_ADAMANT,                                           \
    EV_SPREAD_ATK_DEF_SPE,                                              \
    .moves = {MOVE_AQUA_TAIL, MOVE_CRUNCH, MOVE_BATON_PASS, MOVE_COIL}, \
    .gender = TRAINER_MON_MALE,                                         \
    }

#define JUAN_CASTFORM(rematch, tier)                                             \
    {                                                                            \
    REMATCH_MON(CASTFORM, tier, rematch),                                        \
    .ability = ABILITY_FORECAST,                                                 \
    IDEAL_ATTACKER_SPECIAL,                                                      \
    .moves = {MOVE_WEATHER_BALL, MOVE_THUNDER, MOVE_HURRICANE, MOVE_RAIN_DANCE}, \
    .gender = TRAINER_MON_MALE,                                                  \
    }

#define JUAN_SWAMPERT(rematch, tier)                                              \
    {                                                                             \
    REMATCH_MON(SWAMPERT, tier, rematch),                                         \
    .ability = ABILITY_SWIFT_SWIM,                                                \
    .nature = NATURE_ADAMANT,                                                     \
    EV_SPREAD_ATK_HP_SPE,                                                         \
    .moves = {MOVE_AQUA_TAIL, MOVE_EARTHQUAKE, MOVE_HAMMER_ARM, MOVE_ROCK_SLIDE}, \
    .gender = TRAINER_MON_MALE,                                                   \
    }

// Extra for hacks
// Poison
// Hoenn Dex: Crobat, Swalot, Muk, Weezing, Weezing-G, Seviper
// Hoenn Dex secondary: Dustox, Tentacruel, Vileplume, Roserade
#define JUAN_ARBOK

// Can replace Sheer Force/Drill Run with Poison Point/High Horsepower
#define JUAN_NIDOQUEEN(rematch, tier)                                           \
    {                                                                           \
    REMATCH_MON(NIDOQUEEN, tier, rematch, ITEM_POISON_BARB),                    \
    .ability = ABILITY_SHEER_FORCE,                                             \
    IDEAL_ATTACKER_PHYSICAL,                                                    \
    .moves = {MOVE_POISON_JAB, MOVE_DRILL_RUN, MOVE_CRUNCH, MOVE_TOXIC_SPIKES}, \
    .gender = TRAINER_MON_FEMALE,                                               \
    }

// Can replace Sheer Force/Drill Run/Throat Chop/Iron Tail with Poison Point/High Horsepower/Megahorn/Toxic
#define JUAN_NIDOKING(rematch, tier)                                              \
    {                                                                             \
    REMATCH_MON(NIDOKING, tier, rematch, ITEM_POISON_BARB),                       \
    .ability = ABILITY_SHEER_FORCE,                                               \
    IDEAL_ATTACKER_PHYSICAL,                                                      \
    .moves = {MOVE_POISON_JAB, MOVE_DRILL_RUN, MOVE_THROAT_CHOP, MOVE_IRON_TAIL}, \
    .gender = TRAINER_MON_MALE,                                                   \
    }

#define JUAN_CROBAT(rematch, tier)                                                \
    {                                                                             \
    REMATCH_MON(CROBAT, tier, rematch, ITEM_FLYING_GEM),                          \
    .ability = ABILITY_INNER_FOCUS,                                               \
    IDEAL_SPEEDSTER_PHYSICAL,                                                     \
    .moves = {MOVE_POISON_JAB, MOVE_ACROBATICS, MOVE_LEECH_LIFE, MOVE_IRON_TAIL}, \
    .gender = TRAINER_MON_MALE,                                                   \
    }

#define JUAN_SLOWBRO_GALAR
#define JUAN_SLOWKING_GALAR

#define JUAN_MUK(rematch, tier)                                               \
    {                                                                         \
    REMATCH_MON(MUK, tier, rematch, ITEM_BLACK_SLUDGE),                       \
    .ability = ABILITY_POISON_TOUCH,                                          \
    IDEAL_ATTACKER_PHYSICAL,                                                  \
    .moves = {MOVE_POISON_JAB, MOVE_DRAIN_PUNCH, MOVE_ICE_PUNCH, MOVE_LUNGE}, \
    .gender = TRAINER_MON_MALE,                                               \
    }

#define JUAN_MUK_ALOLA
#define JUAN_WEEZING

#define JUAN_WEEZING_GALAR(rematch, tier)                                        \
    {                                                                            \
    REMATCH_MON(WEEZING_GALAR, tier, rematch, ITEM_BLACK_SLUDGE),                \
    .ability = ABILITY_LEVITATE,                                                 \
    .nature = NATURE_MODEST,                                                     \
    EV_SPREAD_SPA_DEF_HP,                                                        \
    .moves = {MOVE_SLUDGE_BOMB, MOVE_STRANGE_STEAM, MOVE_HEAT_WAVE, MOVE_TOXIC}, \
    .gender = TRAINER_MON_MALE,                                                  \
    }

#define JUAN_CLODSIRE

// Can replace Assault Vest/Acid Spray with Black Sludge/Shadow Ball
#define JUAN_SWALOT(rematch, tier)                                                \
    {                                                                             \
    REMATCH_MON(SWALOT, tier, rematch, ITEM_ASSAULT_VEST),                        \
    .ability = ABILITY_LIQUID_OOZE,                                               \
    .nature = NATURE_MODEST,                                                      \
    EV_SPREAD_SPA_HP_SPE,                                                         \
    .moves = {MOVE_SLUDGE_BOMB, MOVE_GIGA_DRAIN, MOVE_ICE_BEAM, MOVE_ACID_SPRAY}, \
    .gender = TRAINER_MON_MALE,                                                   \
    }

// Can replace Aqua Tail with Psychic Fangs
#define JUAN_SEVIPER(rematch, tier)                                    \
    {                                                                  \
    REMATCH_MON(SEVIPER, tier, rematch),                               \
    .ability = ABILITY_SHED_SKIN,                                      \
    IDEAL_ATTACKER_PHYSICAL,                                           \
    .moves = {MOVE_GUNK_SHOT, MOVE_CRUNCH, MOVE_AQUA_TAIL, MOVE_COIL}, \
    .gender = TRAINER_MON_MALE,                                        \
    }

// Can replace Aftermath with Stench if the Ace
#define JUAN_SKUNTANK(rematch, tier)                                             \
    {                                                                            \
    REMATCH_MON(SKUNTANK, tier, rematch, ITEM_BLACK_SLUDGE),                     \
    .ability = ABILITY_AFTERMATH,                                                \
    .nature = NATURE_ADAMANT,                                                    \
    EV_SPREAD_ATK_HP_SPE,                                                        \
    .moves = {MOVE_POISON_JAB, MOVE_CRUNCH, MOVE_PLAY_ROUGH, MOVE_SUCKER_PUNCH}, \
    .gender = TRAINER_MON_MALE,                                                  \
    }

#define JUAN_DRAPION(rematch, tier)                                                   \
    {                                                                                 \
    REMATCH_MON(DRAPION, tier, rematch),                                              \
    .ability = ABILITY_SNIPER,                                                        \
    .nature = NATURE_ADAMANT,                                                         \
    EV_SPREAD_ATK_DEF_HP,                                                             \
    .moves = {MOVE_CROSS_POISON, MOVE_NIGHT_SLASH, MOVE_FELL_STINGER, MOVE_ICE_FANG}, \
    .gender = TRAINER_MON_MALE,                                                       \
    }

#define JUAN_TOXICROAK(rematch, tier)                                            \
    {                                                                            \
    REMATCH_MON(TOXICROAK, tier, rematch, ITEM_BLACK_SLUDGE),                    \
    .ability = ABILITY_POISON_TOUCH,                                             \
    IDEAL_ATTACKER_PHYSICAL,                                                     \
    .moves = {MOVE_POISON_JAB, MOVE_DRAIN_PUNCH, MOVE_TOXIC, MOVE_SWORDS_DANCE}, \
    .gender = TRAINER_MON_MALE,                                                  \
    }

#define JUAN_GARDBODOR
// ITEM_DRAGALGITE if ACE
#define JUAN_DRAGALGE
#define JUAN_TOXAPEX
#define JUAN_SALAZZLE
#define JUAN_GRAFAIAI

#define JUAN_REMATCH(Rematch)                 \
[DIFFICULTY_NORMAL][TRAINER_JUAN_##Rematch] = \
{                                             \
    JUAN_INFO,                                \
    LEADER_REMATCH,                           \
    .party = (const struct TrainerMon[]) {    \
        JUAN_SWAMPERT(Rematch, TIER3),        \
        JUAN_CASTFORM(Rematch, TIER3),        \
        JUAN_HUNTAIL(Rematch, TIER3),         \
        JUAN_CRAWDAUNT(Rematch, TIER2),       \
        JUAN_LUVDISC(Rematch, TIER2),         \
        JUAN_WHISCASH(Rematch, ACE),          \
    },                                        \
}

JUAN_REMATCH(2),
JUAN_REMATCH(3),
JUAN_REMATCH(4),

#define ELITE_FOUR_INFO(Trainer, MugshotColor)                             \
    .trainerClass = TRAINER_CLASS_ELITE_FOUR,                              \
    .trainerPic = TRAINER_PIC_ELITE_FOUR_##Trainer,                        \
    .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE}, \
    .mugshotColor = MUGSHOT_TYPE_##MugshotColor,                           \
    BOSS_AI_FLAGS

#define SIDNEY_BALL ITEM_DUSK_BALL
#define PHOEBE_BALL ITEM_DUSK_BALL
#define GLACIA_BALL ITEM_PREMIER_BALL
#define DRAKE_BALL  ITEM_HEAVY_BALL

#define SIDNEY_ACE_LEVEL 63
#define PHOEBE_ACE_LEVEL 64
#define GLACIA_ACE_LEVEL 65
#define DRAKE_ACE_LEVEL  66
#define ELITE_FOUR_REMATCH_ACE_LEVEL 90

#define E4_ACE   0
#define E4_TIER2 1
#define E4_TIER3 2

#define ELITE_FOUR_MON(Species, Tier, Rematch, Trainer, ...)                      \
    .lvl = (Rematch ? ELITE_FOUR_REMATCH_ACE_LEVEL : Trainer##_ACE_LEVEL) - Tier, \
    .species = SPECIES_##Species,                                                 \
    PERFECT_IVS,                                                                  \
    .heldItem = Tier <= E4_TIER2 ? DEFAULT(ITEM_NONE, __VA_ARGS__) : ITEM_NONE,   \
    .ball = Tier == ACE ? ITEM_POKE_BALL : Trainer##_BALL

#define SIDNEY_INFO                \
    ELITE_FOUR_INFO(SIDNEY, DARK), \
    .trainerName = _("Thuy"),    \
    .gender = TRAINER_GENDER_FEMALE, \
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR

// Also ITEM_ABSOLITE_Z
#define SIDNEY_ABSOL(Rematch, Tier)                                                            \
    {                                                                                          \
    ELITE_FOUR_MON(ABSOL, Tier, Rematch, SIDNEY, Rematch ? ITEM_SITRUS_BERRY : ITEM_ABSOLITE), \
    .ability = ABILITY_SHARPNESS,                                                              \
    IDEAL_ATTACKER_PHYSICAL,                                                                   \
    .moves = {MOVE_NIGHT_SLASH, MOVE_PSYCHO_CUT, MOVE_AERIAL_ACE, MOVE_SWORDS_DANCE},          \
    .gender = TRAINER_MON_MALE,                                                                \
    }

#define SIDNEY_CACTURNE(Rematch, Tier)                                                \
    {                                                                                 \
    ELITE_FOUR_MON(CACTURNE, Tier, Rematch, SIDNEY),                                  \
    .ability = ABILITY_WATER_ABSORB,                                                  \
    IDEAL_ATTACKER_SPECIAL,                                                           \
    .moves = {MOVE_DARK_PULSE, MOVE_ENERGY_BALL, MOVE_LEECH_SEED, MOVE_SPIKY_SHIELD}, \
    .gender = TRAINER_MON_MALE,                                                       \
    }

#define SIDNEY_CRAWDAUNT(Rematch, Tier)                                         \
    {                                                                           \
    ELITE_FOUR_MON(CRAWDAUNT, Tier, Rematch, SIDNEY),                           \
    .ability = ABILITY_HYPER_CUTTER,                                            \
    IDEAL_ATTACKER_PHYSICAL,                                                    \
    .moves = {MOVE_CRUNCH, MOVE_CRABHAMMER, MOVE_KNOCK_OFF, MOVE_SWORDS_DANCE}, \
    .gender = TRAINER_MON_MALE,                                                 \
    }

#define SIDNEY_SHIFTRY(Rematch, Tier)                                          \
    {                                                                          \
    ELITE_FOUR_MON(SHIFTRY, Tier, Rematch, SIDNEY),                            \
    .ability = ABILITY_WIND_RIDER,                                             \
    IDEAL_ATTACKER_PHYSICAL,                                                   \
    .moves = {MOVE_NIGHT_SLASH, MOVE_LEAF_BLADE, MOVE_FAKE_OUT, MOVE_ROLLOUT}, \
    .gender = TRAINER_MON_MALE,                                                \
    }

#define SIDNEY_MIGHTYENA(Rematch, Tier)                                         \
    {                                                                           \
    ELITE_FOUR_MON(MIGHTYENA, Tier, Rematch, SIDNEY),                           \
    .ability = ABILITY_INTIMIDATE,                                              \
    IDEAL_ATTACKER_PHYSICAL,                                                    \
    .moves = {MOVE_CRUNCH, MOVE_PLAY_ROUGH, MOVE_FIRE_FANG, MOVE_THUNDER_FANG}, \
    .gender = TRAINER_MON_MALE,                                                 \
    }

#define SIDNEY_SHARPEDO(Rematch, Tier)                                         \
    {                                                                          \
    ELITE_FOUR_MON(SHARPEDO, Tier, Rematch, SIDNEY),                           \
    .ability = ABILITY_ROUGH_SKIN,                                             \
    IDEAL_ATTACKER_PHYSICAL,                                                   \
    .moves = {MOVE_CRUNCH, MOVE_LIQUIDATION, MOVE_POISON_FANG, MOVE_ICE_FANG}, \
    .gender = TRAINER_MON_MALE,                                                \
    }

// Extra for hacks
#define SIDNEY_RATICATE

#define SIDNEY_PERSIAN(Rematch, Tier)                                              \
    {                                                                              \
    ELITE_FOUR_MON(PERSIAN_ALOLA, Tier, Rematch, SIDNEY),                          \
    .ability = ABILITY_FUR_COAT,                                                   \
    .nature = NATURE_MODEST,                                                       \
    EV_SPREAD_SPA_SPE_DEF,                                                         \
    .moves = {MOVE_DARK_PULSE, MOVE_POWER_GEM, MOVE_THUNDERBOLT, MOVE_NASTY_PLOT}, \
    .gender = TRAINER_MON_MALE,                                                    \
    }

// Can replace Confuse Ray/Mean Look with Moonlight/Baby-Doll Eyes
#define SIDNEY_UMBREON(Rematch, Tier)                                        \
    {                                                                        \
    ELITE_FOUR_MON(UMBREON, Tier, Rematch, SIDNEY),                          \
    .ability = ABILITY_SYNCHRONIZE,                                          \
    .nature = NATURE_CALM,                                                   \
    EV_SPREAD_SPD_DEF_HP,                                                    \
    .moves = {MOVE_FOUL_PLAY, MOVE_TOXIC, MOVE_CONFUSE_RAY, MOVE_MEAN_LOOK}, \
    .gender = TRAINER_MON_MALE,                                              \
    }

#define SIDNEY_HONCHKROW(Rematch, Tier)                                       \
    {                                                                         \
    ELITE_FOUR_MON(HONCHKROW, Tier, Rematch, SIDNEY, ITEM_SCOPE_LENS),        \
    .ability = ABILITY_SUPER_LUCK,                                            \
    IDEAL_ATTACKER_PHYSICAL,                                                  \
    .moves = {MOVE_NIGHT_SLASH, MOVE_ACROBATICS, MOVE_U_TURN, MOVE_TAILWIND}, \
    .gender = TRAINER_MON_MALE,                                               \
    }

#define SIDNEY_OVERQWIL

#define SIDNEY_WEAVILE(Rematch, Tier)                                                  \
    {                                                                                  \
    ELITE_FOUR_MON(WEAVILE, Tier, Rematch, SIDNEY),                                    \
    .ability = ABILITY_PRESSURE,                                                       \
    IDEAL_SPEEDSTER_PHYSICAL,                                                          \
    .moves = {MOVE_NIGHT_SLASH, MOVE_ICICLE_CRASH, MOVE_ICE_SHARD, MOVE_SWORDS_DANCE}, \
    .gender = TRAINER_MON_MALE,                                                        \
    }

#define SIDNEY_HOUNDOOM(Rematch, Tier)                                                \
    {                                                                                 \
    ELITE_FOUR_MON(HOUNDOOM, Tier, Rematch, SIDNEY),                                  \
    .ability = ABILITY_FLASH_FIRE,                                                    \
    IDEAL_ATTACKER_SPECIAL,                                                           \
    .moves = {MOVE_DARK_PULSE, MOVE_FLAMETHROWER, MOVE_SLUDGE_BOMB, MOVE_NASTY_PLOT}, \
    .gender = TRAINER_MON_MALE,                                                       \
    }

#define SIDNEY_OBSTAGOON
#define SIDNEY_SABLEYE

#define SIDNEY_LIEPARD(Rematch, Tier)                                              \
    {                                                                              \
    ELITE_FOUR_MON(LIEPARD, Tier, Rematch, SIDNEY, ITEM_LIECHI_BERRY),             \
    .ability = ABILITY_UNBURDEN,                                                   \
    IDEAL_SPEEDSTER_PHYSICAL,                                                      \
    .moves = {MOVE_NIGHT_SLASH, MOVE_PSYCHO_CUT, MOVE_SEED_BOMB, MOVE_PLAY_ROUGH}, \
    .gender = TRAINER_MON_FEMALE,                                                  \
    }

// ITEM_SCRAFTINITE if ACE
#define SIDNEY_SCRAFTY

#define SIDNEY_ZOROARK(Rematch, Tier)                                             \
    {                                                                             \
    ELITE_FOUR_MON(ZOROARK, Tier, Rematch, SIDNEY),                               \
    .ability = ABILITY_ILLUSION,                                                  \
    IDEAL_ATTACKER_SPECIAL,                                                       \
    .moves = {MOVE_NIGHT_DAZE, MOVE_PSYCHIC, MOVE_FLAMETHROWER, MOVE_NASTY_PLOT}, \
    .gender = TRAINER_MON_MALE,                                                   \
    }

// Can replace Supreme Overlord with Sharpness
#define SIDNEY_KINGAMBIT(Rematch, Tier)                                                  \
    {                                                                                    \
    ELITE_FOUR_MON(KINGAMBIT, Tier, Rematch, SIDNEY),                                    \
    .ability = ABILITY_SUPREME_OVERLORD,                                                 \
    IDEAL_ATTACKER_PHYSICAL,                                                             \
    .moves = {MOVE_KOWTOW_CLEAVE, MOVE_IRON_HEAD, MOVE_SUCKER_PUNCH, MOVE_SWORDS_DANCE}, \
    .gender = TRAINER_MON_MALE,                                                          \
    }

#define SIDNEY_ZOROARK(Rematch, Tier)                                             \
    {                                                                             \
    ELITE_FOUR_MON(ZOROARK, Tier, Rematch, SIDNEY),                               \
    .ability = ABILITY_ILLUSION,                                                  \
    IDEAL_ATTACKER_SPECIAL,                                                       \
    .moves = {MOVE_NIGHT_DAZE, MOVE_PSYCHIC, MOVE_FLAMETHROWER, MOVE_NASTY_PLOT}, \
    .gender = TRAINER_MON_MALE,                                                   \
    }

#define SIDNEY_MANDIBUZZ(Rematch, Tier)                                  \
    {                                                                    \
    ELITE_FOUR_MON(MANDIBUZZ, Tier, Rematch, SIDNEY, ITEM_SITRUS_BERRY), \
    .ability = ABILITY_OVERCOAT,                                         \
    .nature = NATURE_IMPISH,                                             \
    EV_SPREAD_SPE_DEF_HP,                                                \
    .moves = {MOVE_FOUL_PLAY, MOVE_ACROBATICS, MOVE_TOXIC, MOVE_ROOST},  \
    .gender = TRAINER_MON_FEMALE,                                        \
    }

#define SIDNEY_HYDREIGON

#define SIDNEY_MALAMAR(Rematch, Tier)                                                          \
    {                                                                                          \
    ELITE_FOUR_MON(MALAMAR, Tier, Rematch, SIDNEY, Tier == ACE ? ITEM_MALAMARITE : ITEM_NONE), \
    .ability = ABILITY_CONTRARY,                                                               \
    IDEAL_ATTACKER_PHYSICAL,                                                                   \
    .moves = {MOVE_THROAT_CHOP, MOVE_ZEN_HEADBUTT, MOVE_SUPERPOWER, MOVE_TOPSY_TURVY},         \
    .gender = TRAINER_MON_FEMALE,                                                              \
    }

#define SIDNEY_THIEVUL

#define SIDNEY_GRIMMSNARL(Rematch, Tier)                                             \
    {                                                                                \
    ELITE_FOUR_MON(GRIMMSNARL, Tier, Rematch, SIDNEY),                               \
    .ability = ABILITY_PRANKSTER,                                                    \
    IDEAL_ATTACKER_PHYSICAL,                                                         \
    .moves = {MOVE_FALSE_SURRENDER, MOVE_PLAY_ROUGH, MOVE_LEECH_LIFE, MOVE_BULK_UP}, \
    .gender = TRAINER_MON_MALE,                                                      \
    }

#define SIDNEY_MABOSSTIFF(Rematch, Tier)                                    \
    {                                                                       \
    ELITE_FOUR_MON(MABOSSTIFF, Tier, Rematch, SIDNEY),                      \
    .ability = ABILITY_INTIMIDATE,                                          \
    IDEAL_ATTACKER_PHYSICAL,                                                \
    .moves = {MOVE_CRUNCH, MOVE_PLAY_ROUGH, MOVE_OUTRAGE, MOVE_HONE_CLAWS}, \
    .gender = TRAINER_MON_MALE,                                             \
    }

[DIFFICULTY_NORMAL][TRAINER_SIDNEY] =
{
    SIDNEY_INFO,
    .partySize = 5,
    .party = (const struct TrainerMon[]) {
        SIDNEY_MIGHTYENA(FALSE, E4_TIER3),
        SIDNEY_SHIFTRY(FALSE, E4_TIER3),
        SIDNEY_CRAWDAUNT(FALSE, E4_TIER2),
        SIDNEY_CACTURNE(FALSE, E4_TIER2),
        SIDNEY_ABSOL(FALSE, E4_ACE),
    },
},

[DIFFICULTY_NORMAL][TRAINER_SIDNEY_REMATCH] =
{
    SIDNEY_INFO,
    .partySize = 6,
    .party = (const struct TrainerMon[]) {
        SIDNEY_SHARPEDO(TRUE, E4_TIER3),
        SIDNEY_MIGHTYENA(TRUE, E4_TIER3),
        SIDNEY_SHIFTRY(TRUE, E4_TIER3),
        SIDNEY_CRAWDAUNT(TRUE, E4_TIER2),
        SIDNEY_CACTURNE(TRUE, E4_TIER2),
        SIDNEY_ABSOL(TRUE, E4_ACE),
    },
},

#define PHOEBE_INFO                 \
    ELITE_FOUR_INFO(PHOEBE, GHOST), \
    .trainerName = _("Brian"),      \
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR

#define PHOEBE_DUSKNOIR(Rematch, Tier)                                              \
    {                                                                               \
    ELITE_FOUR_MON(DUSKNOIR, Tier, Rematch, PHOEBE, ITEM_SITRUS_BERRY),             \
    .ability = ABILITY_IRON_FIST,                                                   \
    .nature = NATURE_ADAMANT,                                                       \
    EV_SPREAD_ATK_SPD_HP,                                                           \
    .moves = {MOVE_SHADOW_PUNCH, MOVE_EARTHQUAKE, MOVE_FIRE_PUNCH, MOVE_ICE_PUNCH}, \
    .gender = TRAINER_MON_FEMALE,                                                   \
    }

#define PHOEBE_BANETTE(Rematch, Tier)                                                  \
    {                                                                                  \
    ELITE_FOUR_MON(BANETTE, Tier, Rematch, PHOEBE),                                    \
    .ability = ABILITY_CURSED_BODY,                                                    \
    IDEAL_ATTACKER_PHYSICAL,                                                           \
    .moves = {MOVE_SHADOW_CLAW, MOVE_BODY_SLAM, MOVE_SHADOW_SNEAK, MOVE_SWORDS_DANCE}, \
    .gender = TRAINER_MON_FEMALE,                                                      \
    }

#define PHOEBE_SABLEYE(Rematch, Tier)                                             \
    {                                                                             \
    ELITE_FOUR_MON(SABLEYE, Tier, Rematch, PHOEBE),                               \
    .ability = ABILITY_PRANKSTER,                                                 \
    .nature = NATURE_IMPISH,                                                      \
    EV_SPREAD_DEF_HP_SPD,                                                         \
    .moves = {MOVE_FOUL_PLAY, MOVE_CONFUSE_RAY, MOVE_WILL_O_WISP, MOVE_FAKE_OUT}, \
    .gender = TRAINER_MON_FEMALE,                                                 \
    }

#define PHOEBE_SHEDINJA(Rematch, Tier)                                         \
    {                                                                          \
    ELITE_FOUR_MON(SHEDINJA, Tier, Rematch, PHOEBE),                           \
    .ability = ABILITY_WONDER_GUARD,                                           \
    IDEAL_ATTACKER_PHYSICAL,                                                   \
    .moves = {MOVE_SHADOW_CLAW, MOVE_LEECH_LIFE, MOVE_HEAL_BLOCK, MOVE_SPITE}, \
    .gender = TRAINER_MON_NONE,                                                \
    }

#define PHOEBE_DUSCLOPS(Rematch, Tier)                                         \
    {                                                                          \
    ELITE_FOUR_MON(DUSCLOPS, Tier, Rematch, PHOEBE),                           \
    .ability = ABILITY_PRESSURE,                                               \
    .nature = NATURE_CALM,                                                     \
    EV_SPREAD_SPD_HP_DEF,                                                      \
    .moves = {MOVE_HEX, MOVE_CONFUSE_RAY, MOVE_NIGHT_SHADE, MOVE_WILL_O_WISP}, \
    .gender = TRAINER_MON_MALE,                                                \
    }

#define PHOEBE_CURSOLA(Rematch, Tier)                                           \
    {                                                                           \
    ELITE_FOUR_MON(CURSOLA, Tier, Rematch, PHOEBE),                             \
    .ability = ABILITY_PERISH_BODY,                                             \
    .nature = NATURE_MODEST,                                                    \
    EV_SPREAD_SPA_SPD_DEF,                                                      \
    .moves = {MOVE_SHADOW_BALL, MOVE_POWER_GEM, MOVE_SPITE, MOVE_STRENGTH_SAP}, \
    .gender = TRAINER_MON_FEMALE,                                               \
    }

// Extra for hacks
#define PHOEBE_GENGAR(Rematch, Tier)                                                    \
    {                                                                                   \
    ELITE_FOUR_MON(GENGAR, Tier, Rematch, PHOEBE),                                      \
    .ability = ABILITY_CURSED_BODY,                                                     \
    IDEAL_ATTACKER_SPECIAL,                                                             \
    .moves = {MOVE_SHADOW_BALL, MOVE_GIGA_DRAIN, MOVE_DAZZLING_GLEAM, MOVE_NASTY_PLOT}, \
    .gender = TRAINER_MON_FEMALE,                                                       \
    }

#define PHOEBE_MISMAGIUS(Rematch, Tier)                                                \
    {                                                                                  \
    ELITE_FOUR_MON(MISMAGIUS, Tier, Rematch, PHOEBE, ITEM_SPELL_TAG),                  \
    .nature = NATURE_MODEST,                                                           \
    EV_SPREAD_SPA_SPE_SPD,                                                             \
    .moves = {MOVE_SHADOW_BALL, MOVE_POWER_GEM, MOVE_MYSTICAL_FIRE, MOVE_PERISH_SONG}, \
    .gender = TRAINER_MON_FEMALE,                                                      \
    }

#define PHOEBE_DRIFBLIM

#define PHOEBE_SPIRITOMB(Rematch, Tier)                                        \
    {                                                                          \
    ELITE_FOUR_MON(SPIRITOMB, Tier, Rematch, PHOEBE),                          \
    .ability = ABILITY_PRESSURE,                                               \
    .nature = NATURE_CALM,                                                     \
    EV_SPREAD_SPD_DEF_HP,                                                      \
    .moves = {MOVE_SHADOW_BALL, MOVE_FOUL_PLAY, MOVE_CURSE, MOVE_CONFUSE_RAY}, \
    .gender = TRAINER_MON_FEMALE,                                              \
    }

#define PHOEBE_COFAGRIGUS

// Can replace Infiltrator with Flame Body
#define PHOEBE_CHANDELURE(Rematch, Tier)                                                            \
    {                                                                                               \
    ELITE_FOUR_MON(CHANDELURE, Tier, Rematch, PHOEBE, Tier == ACE ? ITEM_CHANDELURITE : ITEM_NONE), \
    .ability = ABILITY_INFILTRATOR,                                                                 \
    IDEAL_ATTACKER_SPECIAL,                                                                         \
    .moves = {MOVE_SHADOW_BALL, MOVE_FLAMETHROWER, MOVE_ENERGY_BALL, MOVE_CALM_MIND},               \
    .gender = TRAINER_MON_FEMALE,                                                                   \
    }

#define PHOEBE_TREVENANT(Rematch, Tier)                                             \
    {                                                                               \
    ELITE_FOUR_MON(TREVENANT, Tier, Rematch, PHOEBE),                               \
    .ability = ABILITY_NATURAL_CURE,                                                \
    IDEAL_ATTACKER_PHYSICAL,                                                        \
    .moves = {MOVE_SHADOW_CLAW, MOVE_HORN_LEECH, MOVE_ROCK_SLIDE, MOVE_LEECH_SEED}, \
    .gender = TRAINER_MON_FEMALE,                                                   \
    }

#define PHOEBE_GOURGEIST(Rematch, Tier)                                             \
    {                                                                               \
    ELITE_FOUR_MON(GOURGEIST, Tier, Rematch, PHOEBE, ITEM_SITRUS_BERRY),            \
    .ability = ABILITY_INSOMNIA,                                                    \
    .nature = NATURE_IMPISH,                                                        \
    EV_SPREAD_ATK_DEF_HP,                                                           \
    .moves = {MOVE_SHADOW_CLAW, MOVE_SEED_BOMB, MOVE_BODY_PRESS, MOVE_WILL_O_WISP}, \
    .gender = TRAINER_MON_FEMALE,                                                   \
    }

#define PHOEBE_ORICORIO

#define PHOEBE_PALOSSAND(Rematch, Tier)                                            \
    {                                                                              \
    ELITE_FOUR_MON(PALOSSAND, Tier, Rematch, PHOEBE),                              \
    .ability = ABILITY_WATER_COMPACTION,                                           \
    .nature = NATURE_BOLD,                                                         \
    EV_SPREAD_SPA_DEF_HP,                                                          \
    .moves = {MOVE_SHADOW_BALL, MOVE_EARTH_POWER, MOVE_GIGA_DRAIN, MOVE_SHORE_UP}, \
    .gender = TRAINER_MON_FEMALE,                                                  \
    }

#define PHOEBE_MIMIKYU(Rematch, Tier)                                                 \
    {                                                                                 \
    ELITE_FOUR_MON(MIMIKYU, Tier, Rematch, PHOEBE),                                   \
    .ability = ABILITY_DISGUISE,                                                      \
    IDEAL_ATTACKER_PHYSICAL,                                                          \
    .moves = {MOVE_SHADOW_CLAW, MOVE_PLAY_ROUGH, MOVE_LEECH_LIFE, MOVE_SWORDS_DANCE}, \
    .gender = TRAINER_MON_FEMALE,                                                     \
    }

#define PHOEBE_DHELMISE(Rematch, Tier)                                                \
    {                                                                                 \
    ELITE_FOUR_MON(DHELMISE, Tier, Rematch, PHOEBE),                                  \
    .ability = ABILITY_STEELWORKER,                                                   \
    IDEAL_ATTACKER_PHYSICAL,                                                          \
    .moves = {MOVE_SHADOW_CLAW, MOVE_POWER_WHIP, MOVE_ANCHOR_SHOT, MOVE_LIQUIDATION}, \
    .gender = TRAINER_MON_NONE,                                                       \
    }

#define PHOEBE_POLTEAGEIST

#define PHOEBE_HOUNDSTONE(Rematch, Tier)                                             \
    {                                                                                \
    ELITE_FOUR_MON(HOUNDSTONE, Tier, Rematch, PHOEBE),                               \
    .ability = ABILITY_FLUFFY,                                                       \
    .nature = NATURE_ADAMANT,                                                        \
    EV_SPREAD_ATK_DEF_SPE,                                                           \
    .moves = {MOVE_LAST_RESPECTS, MOVE_BODY_PRESS, MOVE_PLAY_ROUGH, MOVE_ROCK_TOMB}, \
    .gender = TRAINER_MON_FEMALE,                                                    \
    }

[DIFFICULTY_NORMAL][TRAINER_PHOEBE] =
{
    PHOEBE_INFO,
    .partySize = 5,
    .party = (const struct TrainerMon[]) {
        PHOEBE_DUSCLOPS(FALSE, E4_TIER3),
        PHOEBE_SHEDINJA(FALSE, E4_TIER3),
        PHOEBE_SABLEYE(FALSE, E4_TIER2),
        PHOEBE_BANETTE(FALSE, E4_TIER2),
        PHOEBE_DUSKNOIR(FALSE, E4_ACE),
    },
},

[DIFFICULTY_NORMAL][TRAINER_PHOEBE_REMATCH] =
{
    PHOEBE_INFO,
    .partySize = 6,
    .party = (const struct TrainerMon[]) {
        PHOEBE_DUSCLOPS(TRUE, E4_TIER3),
        PHOEBE_CURSOLA(TRUE, E4_TIER3),
        PHOEBE_SHEDINJA(TRUE, E4_TIER3),
        PHOEBE_SABLEYE(TRUE, E4_TIER2),
        PHOEBE_BANETTE(TRUE, E4_TIER2),
        PHOEBE_DUSKNOIR(TRUE, E4_ACE),
    },
},

#define GLACIA_INFO               \
    ELITE_FOUR_INFO(GLACIA, ICE), \
    .trainerName = _("Kimberly"),   \
    .gender = TRAINER_GENDER_FEMALE, \
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR

#define GLACIA_WALREIN(Rematch, Tier)                                      \
    {                                                                      \
    ELITE_FOUR_MON(WALREIN, Tier, Rematch, GLACIA, ITEM_SITRUS_BERRY),     \
    .ability = ABILITY_THICK_FAT,                                          \
    .nature = NATURE_MODEST,                                               \
    EV_SPREAD_SPA_HP_SPE,                                                  \
    .moves = {MOVE_BLIZZARD, MOVE_SURF, MOVE_SIGNAL_BEAM, MOVE_SNOWSCAPE}, \
    .gender = TRAINER_MON_FEMALE,                                          \
    }

#define GLACIA_FROSLASS(Rematch, Tier)                                                           \
    {                                                                                            \
    ELITE_FOUR_MON(FROSLASS, Tier, Rematch, GLACIA, Tier == ACE ? ITEM_FROSLASSITE : ITEM_NONE), \
    .ability = ABILITY_SNOW_CLOAK,                                                               \
    IDEAL_SPEEDSTER_SPECIAL,                                                                     \
    .moves = {MOVE_BLIZZARD, MOVE_SHADOW_BALL, MOVE_DRAINING_KISS, MOVE_SNOWSCAPE},              \
    .gender = TRAINER_MON_FEMALE,                                                                \
    }

#define GLACIA_GLALIE(Rematch, Tier)                                                \
    {                                                                               \
    ELITE_FOUR_MON(GLALIE, Tier, Rematch, GLACIA),                                  \
    .ability = ABILITY_ICE_BODY,                                                    \
    IDEAL_ATTACKER_SPECIAL,                                                         \
    .moves = {MOVE_FREEZE_DRY, MOVE_WEATHER_BALL, MOVE_DARK_PULSE, MOVE_SNOWSCAPE}, \
    .gender = TRAINER_MON_MALE,                                                     \
    }

#define GLACIA_CASTFORM(Rematch, Tier)                                            \
    {                                                                             \
    ELITE_FOUR_MON(CASTFORM, Tier, Rematch, GLACIA),                              \
    .ability = ABILITY_FORECAST,                                                  \
    IDEAL_ATTACKER_SPECIAL,                                                       \
    .moves = {MOVE_BLIZZARD, MOVE_WEATHER_BALL, MOVE_HYDRO_PUMP, MOVE_SNOWSCAPE}, \
    .gender = TRAINER_MON_FEMALE,                                                 \
    }

#define GLACIA_SEALEO(Rematch, Tier)                                           \
    {                                                                          \
    ELITE_FOUR_MON(SEALEO, Tier, Rematch, GLACIA),                             \
    .ability = ABILITY_ICE_BODY,                                               \
    .nature = NATURE_ADAMANT,                                                  \
    EV_SPREAD_ATK_HP_SPE,                                                      \
    .moves = {MOVE_ICE_BALL, MOVE_ROLLOUT, MOVE_DEFENSE_CURL, MOVE_SNOWSCAPE}, \
    .gender = TRAINER_MON_MALE,                                                \
    }

#define GLACIA_NINETALES(Rematch, Tier)                                          \
    {                                                                            \
    ELITE_FOUR_MON(NINETALES_ALOLA, Tier, Rematch, GLACIA, ITEM_ICY_ROCK),       \
    .ability = ABILITY_SNOW_WARNING,                                             \
    .nature = NATURE_TIMID,                                                      \
    EV_SPREAD_SPE_SPD_HP,                                                        \
    .moves = {MOVE_BLIZZARD, MOVE_MOONBLAST, MOVE_AURORA_VEIL, MOVE_NASTY_PLOT}, \
    .gender = TRAINER_MON_FEMALE,                                                \
    }

// Extra for hacks
#define GLACIA_SANDSLASH
#define GLACIA_JYNX

#define GLACIA_GLACEON(Rematch, Tier)                                             \
    {                                                                             \
    ELITE_FOUR_MON(GLACEON, Tier, Rematch, GLACIA),                               \
    .ability = ABILITY_ICE_BODY,                                                  \
    IDEAL_ATTACKER_SPECIAL,                                                       \
    .moves = {MOVE_ICE_BEAM, MOVE_SHADOW_BALL, MOVE_CALM_MIND, MOVE_AURORA_VEIL}, \
    .gender = TRAINER_MON_FEMALE,                                                 \
    }

// Can replace Thick Fat/Trailblaze with Snow Cloak/Ice Shard
#define GLACIA_MAMOSWINE(Rematch, Tier)                                             \
    {                                                                               \
    ELITE_FOUR_MON(MAMOSWINE, Tier, Rematch, GLACIA, ITEM_SITRUS_BERRY),            \
    .ability = ABILITY_THICK_FAT,                                                   \
    IDEAL_ATTACKER_PHYSICAL,                                                        \
    .moves = {MOVE_ICICLE_CRASH, MOVE_EARTHQUAKE, MOVE_TRAILBLAZE, MOVE_SNOWSCAPE}, \
    .gender = TRAINER_MON_FEMALE,                                                   \
    }

#define GLACIA_DELIBIRD
#define GLACIA_DARMANITAN

#define GLACIA_VANILLUXE(Rematch, Tier)                                              \
    {                                                                                \
    ELITE_FOUR_MON(VANILLUXE, Tier, Rematch, GLACIA),                                \
    .ability = ABILITY_SNOW_WARNING,                                                 \
    IDEAL_ATTACKER_SPECIAL,                                                          \
    .moves = {MOVE_BLIZZARD, MOVE_FLASH_CANNON, MOVE_HYPER_VOICE, MOVE_SIGNAL_BEAM}, \
    .gender = TRAINER_MON_FEMALE,                                                    \
    }

// Can replace Slush Rush with Snow Cloak
#define GLACIA_BEARTIC(Rematch, Tier)                                             \
    {                                                                             \
    ELITE_FOUR_MON(BEARTIC, Tier, Rematch, GLACIA),                               \
    .ability = ABILITY_SLUSH_RUSH,                                                \
    IDEAL_ATTACKER_PHYSICAL,                                                      \
    .moves = {MOVE_ICICLE_CRASH, MOVE_PLAY_ROUGH, MOVE_AQUA_JET, MOVE_SNOWSCAPE}, \
    .gender = TRAINER_MON_FEMALE,                                                 \
    }

#define GLACIA_CRYOGONAL
#define GLACIA_AVALUGG
#define GLACIA_AVALUGG_HISUI

#define GLACIA_FROSMOTH(Rematch, Tier)                                           \
    {                                                                            \
    ELITE_FOUR_MON(FROSMOTH, Tier, Rematch, GLACIA),                             \
    .ability = ABILITY_ICE_SCALES,                                               \
    .nature = NATURE_MODEST,                                                     \
    EV_SPREAD_SPA_SPD_SPE,                                                       \
    .moves = {MOVE_ICE_BEAM, MOVE_BUG_BUZZ, MOVE_GIGA_DRAIN, MOVE_QUIVER_DANCE}, \
    .gender = TRAINER_MON_FEMALE,                                                \
    }

#define GLACIA_EISCUE(Rematch, Tier)                                                   \
    {                                                                                  \
    ELITE_FOUR_MON(EISCUE, Tier, Rematch, GLACIA),                                     \
    .ability = ABILITY_ICE_FACE,                                                       \
    IDEAL_ATTACKER_PHYSICAL,                                                           \
    .moves = {MOVE_ICICLE_CRASH, MOVE_LIQUIDATION, MOVE_ZEN_HEADBUTT, MOVE_SNOWSCAPE}, \
    .gender = TRAINER_MON_FEMALE,                                                      \
    }

#define GLACIA_CETITAN(Rematch, Tier)                                                \
    {                                                                                \
    ELITE_FOUR_MON(CETITAN, Tier, Rematch, GLACIA, ITEM_LEFTOVERS),                  \
    .ability = ABILITY_SLUSH_RUSH,                                                   \
    IDEAL_ATTACKER_PHYSICAL,                                                         \
    .moves = {MOVE_ICICLE_CRASH, MOVE_PLAY_ROUGH, MOVE_EARTHQUAKE, MOVE_BELLY_DRUM}, \
    .gender = TRAINER_MON_FEMALE,                                                    \
    }

[DIFFICULTY_NORMAL][TRAINER_GLACIA] =
{
    GLACIA_INFO,
    .partySize = 5,
    .party = (const struct TrainerMon[]) {
        GLACIA_SEALEO(FALSE, E4_TIER3),
        GLACIA_CASTFORM(FALSE, E4_TIER3),
        GLACIA_GLALIE(FALSE, E4_TIER2),
        GLACIA_FROSLASS(FALSE, E4_TIER2),
        GLACIA_WALREIN(FALSE, E4_ACE),
    },
},

[DIFFICULTY_NORMAL][TRAINER_GLACIA_REMATCH] =
{
    GLACIA_INFO,
    .partySize = 6,
    .party = (const struct TrainerMon[]) {
        GLACIA_SEALEO(TRUE, E4_TIER3),
        GLACIA_NINETALES(TRUE, E4_TIER2),
        GLACIA_CASTFORM(TRUE, E4_TIER3),
        GLACIA_GLALIE(TRUE, E4_TIER3),
        GLACIA_FROSLASS(TRUE, E4_TIER2),
        GLACIA_WALREIN(TRUE, E4_ACE),
    },
},

#define DRAKE_INFO                  \
    ELITE_FOUR_INFO(DRAKE, DRAGON), \
    .trainerName = _("Rafael III"),      \
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR

#define DRAKE_SALAMENCE(Rematch, Tier)                                                   \
    {                                                                                    \
    ELITE_FOUR_MON(SALAMENCE, Tier, Rematch, DRAKE, ITEM_SALAMENCITE),                   \
    .ability = ABILITY_INTIMIDATE,                                                       \
    IDEAL_ATTACKER_PHYSICAL,                                                             \
    .moves = {MOVE_DRAGON_CLAW, MOVE_DUAL_WINGBEAT, MOVE_ROCK_SLIDE, MOVE_DRAGON_DANCE}, \
    .gender = TRAINER_MON_MALE,                                                          \
    }

#define DRAKE_FLYGON(Rematch, Tier)                                                   \
    {                                                                                 \
    ELITE_FOUR_MON(FLYGON, Tier, Rematch, DRAKE),                                     \
    .ability = ABILITY_LEVITATE,                                                      \
    IDEAL_ATTACKER_PHYSICAL,                                                          \
    .moves = {MOVE_DRAGON_CLAW, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_DRAGON_DANCE}, \
    .gender = TRAINER_MON_MALE,                                                       \
    }

#define DRAKE_ALTARIA(Rematch, Tier)                                                 \
    {                                                                                \
    ELITE_FOUR_MON(ALTARIA, Tier, Rematch, DRAKE),                                   \
    .ability = ABILITY_FLUFFY,                                                       \
    .nature = NATURE_MODEST,                                                         \
    EV_SPREAD_SPA_DEF_HP,                                                            \
    .moves = {MOVE_DRAGON_PULSE, MOVE_AIR_SLASH, MOVE_MOONBLAST, MOVE_COTTON_GUARD}, \
    .gender = TRAINER_MON_MALE,                                                      \
    }

#define DRAKE_KINGDRA(Rematch, Tier)                                      \
    {                                                                     \
    ELITE_FOUR_MON(KINGDRA, Tier, Rematch, DRAKE),                        \
    .ability = ABILITY_SNIPER,                                            \
    IDEAL_ATTACKER_SPECIAL,                                               \
    .moves = {MOVE_DRAGON_PULSE, MOVE_SURF, MOVE_SMOKESCREEN, MOVE_YAWN}, \
    .gender = TRAINER_MON_MALE,                                           \
    }

#define DRAKE_SHELGON(Rematch, Tier)                                                \
    {                                                                               \
    ELITE_FOUR_MON(SHELGON, Tier, Rematch, DRAKE),                                  \
    .ability = ABILITY_ROCK_HEAD,                                                   \
    .nature = NATURE_IMPISH,                                                        \
    EV_SPREAD_ATK_DEF_HP,                                                           \
    .moves = {MOVE_DRAGON_CLAW, MOVE_ZEN_HEADBUTT, MOVE_DOUBLE_EDGE, MOVE_PROTECT}, \
    .gender = TRAINER_MON_FEMALE,                                                   \
    }

#define DRAKE_DRAGALGE(Rematch, Tier)                                                    \
    {                                                                                    \
    ELITE_FOUR_MON(DRAGALGE, Tier, Rematch, DRAKE),                                      \
    .ability = ABILITY_ADAPTABILITY,                                                     \
    .nature = NATURE_CALM,                                                               \
    EV_SPREAD_SPA_SPD_HP,                                                                \
    .moves = {MOVE_DRAGON_PULSE, MOVE_SLUDGE_BOMB, MOVE_DRAGON_TAIL, MOVE_TOXIC_SPIKES}, \
    .gender = TRAINER_MON_MALE,                                                          \
    }

// Extra for hacks
#define DRAKE_DRAGONITE(Rematch, Tier)                                                  \
    {                                                                                   \
    ELITE_FOUR_MON(DRAGONITE, Tier, Rematch, DRAKE, ITEM_DRAGONINITE),                  \
    .ability = ABILITY_MULTISCALE,                                                      \
    IDEAL_ATTACKER_PHYSICAL,                                                            \
    .moves = {MOVE_DRAGON_CLAW, MOVE_DUAL_WINGBEAT, MOVE_IRON_HEAD, MOVE_DRAGON_DANCE}, \
    .gender = TRAINER_MON_MALE,                                                         \
    }

// Also ITEM_GARCHOMPITE_Z
#define DRAKE_GARCHOMP(Rematch, Tier)                                                \
    {                                                                                \
    ELITE_FOUR_MON(GARCHOMP, Tier, Rematch, DRAKE, ITEM_GARCHOMPITE),                \
    .ability = ABILITY_ROUGH_SKIN,                                                   \
    IDEAL_ATTACKER_PHYSICAL,                                                         \
    .moves = {MOVE_DRAGON_CLAW, MOVE_EARTHQUAKE, MOVE_IRON_HEAD, MOVE_SWORDS_DANCE}, \
    .gender = TRAINER_MON_MALE,                                                      \
    }

// Can replace Earthquake/Dragon Dance with Crunch/Swords Dance
#define DRAKE_HAXORUS(Rematch, Tier)                                                 \
    {                                                                                \
    ELITE_FOUR_MON(HAXORUS, Tier, Rematch, DRAKE),                                   \
    .ability = ABILITY_MOLD_BREAKER,                                                 \
    IDEAL_ATTACKER_PHYSICAL,                                                         \
    .moves = {MOVE_DRAGON_CLAW, MOVE_IRON_HEAD, MOVE_EARTHQUAKE, MOVE_DRAGON_DANCE}, \
    .gender = TRAINER_MON_MALE,                                                      \
    }

// Can replace Sheer Force/Crunch/Fire Punch with Rock Head/Head Smash/Hone Claws
#define DRAKE_DRUDDIGON(Rematch, Tier)                                         \
    {                                                                          \
    ELITE_FOUR_MON(DRUDDIGON, Tier, Rematch, DRAKE),                           \
    .ability = ABILITY_SHEER_FORCE,                                            \
    IDEAL_ATTACKER_PHYSICAL,                                                   \
    .moves = {MOVE_DRAGON_CLAW, MOVE_IRON_HEAD, MOVE_CRUNCH, MOVE_FIRE_PUNCH}, \
    .gender = TRAINER_MON_MALE,                                                \
    }

#define DRAKE_GOODRA(Rematch, Tier)                                               \
    {                                                                             \
    ELITE_FOUR_MON(GOODRA, Tier, Rematch, DRAKE, ITEM_ASSAULT_VEST),              \
    .ability = ABILITY_GOOEY,                                                     \
    .nature = NATURE_CALM,                                                        \
    EV_SPREAD_SPA_SPD_HP,                                                         \
    .moves = {MOVE_DRAGON_PULSE, MOVE_SLUDGE_BOMB, MOVE_SURF, MOVE_FLAMETHROWER}, \
    .gender = TRAINER_MON_MALE,                                                   \
    }

// Can replace Sap Sipper/Hyper Voice with Berserk/Calm Mind
#define DRAKE_DRAMPA(Rematch, Tier)                                                          \
    {                                                                                        \
    ELITE_FOUR_MON(DRAMPA, Tier, Rematch, DRAKE, Tier == ACE ? ITEM_DRAMPANITE : ITEM_NONE), \
    .ability = ABILITY_SAP_SIPPER,                                                           \
    IDEAL_ATTACKER_SPECIAL,                                                                  \
    .moves = {MOVE_DRAGON_PULSE, MOVE_HYPER_VOICE, MOVE_ENERGY_BALL, MOVE_FLAMETHROWER},     \
    .gender = TRAINER_MON_MALE,                                                              \
    }

#define DRAKE_KOMMO_O
#define DRAKE_DRAGAPULT

// Can replace U-turn with Body Slam
#define DRAKE_CYCLIZAR(Rematch, Tier)                                          \
    {                                                                          \
    ELITE_FOUR_MON(CYCLIZAR, Tier, Rematch, DRAKE),                            \
    .ability = ABILITY_REGENERATOR,                                            \
    IDEAL_SPEEDSTER_PHYSICAL,                                                  \
    .moves = {MOVE_DRAGON_CLAW, MOVE_U_TURN, MOVE_SHIFT_GEAR, MOVE_SHED_TAIL}, \
    .gender = TRAINER_MON_MALE,                                                \
    }

#define DRAKE_TATSUGIRI(Rematch, Tier)                                       \
    {                                                                        \
    ELITE_FOUR_MON(TATSUGIRI_DROOPY, Tier, Rematch, DRAKE),                  \
    /*ELITE_FOUR_MON(TATSUGIRI_CURLY, Tier, Rematch, DRAKE),                       */\
    /*ELITE_FOUR_MON(TATSUGIRI_STRETCHY, Tier, Rematch, DRAKE),                    */\
    .ability = ABILITY_STORM_DRAIN,                                          \
    IDEAL_ATTACKER_SPECIAL,                                                  \
    .moves = {MOVE_DRAGON_PULSE, MOVE_SURF, MOVE_ICY_WIND, MOVE_NASTY_PLOT}, \
    .gender = TRAINER_MON_MALE,                                              \
    }

#define DRAKE_BAXCALIBUR

[DIFFICULTY_NORMAL][TRAINER_DRAKE] =
{
    DRAKE_INFO,
    .partySize = 5,
    .party = (const struct TrainerMon[]) {
        DRAKE_SHELGON(FALSE, E4_TIER3),
        DRAKE_KINGDRA(FALSE, E4_TIER3),
        DRAKE_ALTARIA(FALSE, E4_TIER2),
        DRAKE_FLYGON(FALSE, E4_TIER2),
        DRAKE_SALAMENCE(FALSE, E4_ACE),
    },
},

[DIFFICULTY_NORMAL][TRAINER_DRAKE_REMATCH] =
{
    DRAKE_INFO,
    .partySize = 6,
    .party = (const struct TrainerMon[]) {
        DRAKE_SHELGON(TRUE, E4_TIER3),
        DRAKE_DRAGALGE(TRUE, E4_TIER3),
        DRAKE_KINGDRA(TRUE, E4_TIER3),
        DRAKE_ALTARIA(TRUE, E4_TIER2),
        DRAKE_FLYGON(TRUE, E4_TIER2),
        DRAKE_SALAMENCE(TRUE, E4_ACE),
    },
},

#define WALLACE_STEVEN_MON(Level, Species, ...) \
    .lvl = Level,                               \
    .species = SPECIES_##Species,               \
    PERFECT_IVS,                                \
    .heldItem = DEFAULT(ITEM_NONE, __VA_ARGS__) \

#define WALLACE_MILOTIC(Level)                                          \
    {                                                                   \
    WALLACE_STEVEN_MON(Level, MILOTIC, ITEM_SITRUS_BERRY),              \
    .ability = ABILITY_MARVEL_SCALE,                                    \
    .nature = NATURE_MODEST,                                            \
    EV_SPREAD_SPA_SPD_SPE,                                              \
    .moves = {MOVE_HYDRO_PUMP, MOVE_ICE_BEAM, MOVE_COIL, MOVE_RECOVER}, \
    .gender = TRAINER_MON_FEMALE,                                       \
    .ball = ITEM_POKE_BALL,                                             \
    }

#define WALLACE_WAILORD(Level)                                                \
    {                                                                         \
    WALLACE_STEVEN_MON(Level, WAILORD, ITEM_LEFTOVERS),                       \
    .ability = ABILITY_OBLIVIOUS,                                             \
    .nature = NATURE_MODEST,                                                  \
    EV_SPREAD_SPA_HP_SPE,                                                     \
    .moves = {MOVE_WATER_SPOUT, MOVE_ICE_BEAM, MOVE_AQUA_RING, MOVE_AMNESIA}, \
    .gender = TRAINER_MON_MALE,                                               \
    .ball = ITEM_DIVE_BALL,                                                   \
    }

#define WALLACE_LUDICOLO(Level)                                              \
    {                                                                        \
    WALLACE_STEVEN_MON(Level, LUDICOLO),                                     \
    .ability = ABILITY_SWIFT_SWIM,                                           \
    IDEAL_ATTACKER_SPECIAL,                                                  \
    .moves = {MOVE_SURF, MOVE_GIGA_DRAIN, MOVE_LEECH_SEED, MOVE_RAIN_DANCE}, \
    .gender = TRAINER_MON_MALE,                                              \
    .ball = ITEM_ULTRA_BALL,                                                 \
    }

#define WALLACE_RELICANTH(Level)                                      \
    {                                                                 \
    WALLACE_STEVEN_MON(Level, RELICANTH, ITEM_CHESTO_BERRY),          \
    .ability = ABILITY_SWIFT_SWIM,                                    \
    .nature = NATURE_IMPISH,                                          \
    EV_SPREAD_ATK_DEF_HP,                                             \
    .moves = {MOVE_AQUA_TAIL, MOVE_ROCK_SLIDE, MOVE_YAWN, MOVE_REST}, \
    .gender = TRAINER_MON_MALE,                                       \
    .ball = ITEM_DIVE_BALL,                                           \
    .isShiny = TRUE,                                                  \
    }

#define WALLACE_GOREBYSS(Level)                                               \
    {                                                                         \
    WALLACE_STEVEN_MON(Level, GOREBYSS),                                      \
    .ability = ABILITY_SWIFT_SWIM,                                            \
    .nature = NATURE_MODEST,                                                  \
    EV_SPREAD_SPA_SPE_DEF,                                                    \
    .moves = {MOVE_SURF, MOVE_PSYCHIC, MOVE_DRAINING_KISS, MOVE_SHELL_SMASH}, \
    .gender = TRAINER_MON_FEMALE,                                             \
    .ball = ITEM_DIVE_BALL,                                                   \
    }

#define WALLACE_PELIPPER(Level)                                            \
    {                                                                      \
    WALLACE_STEVEN_MON(Level, PELIPPER, ITEM_DAMP_ROCK),                   \
    .ability = ABILITY_DRIZZLE,                                            \
    .nature = NATURE_MODEST,                                               \
    EV_SPREAD_SPA_DEF_SPE,                                                 \
    .moves = {MOVE_HYDRO_PUMP, MOVE_HURRICANE, MOVE_ROOST, MOVE_TAILWIND}, \
    .gender = TRAINER_MON_MALE,                                            \
    .ball = ITEM_ULTRA_BALL,                                               \
    }

// Extra for hacks
#define WALLACE_AZUMARILL(Level)                                                \
    {                                                                           \
    WALLACE_STEVEN_MON(Level, AZUMARILL, ITEM_LEFTOVERS),                       \
    .ability = ABILITY_HUGE_POWER,                                              \
    .nature = NATURE_MODEST,                                                    \
    EV_SPREAD_SPA_DEF_SPE,                                                      \
    .moves = {MOVE_PLAY_ROUGH, MOVE_AQUA_TAIL, MOVE_BULLDOZE, MOVE_BELLY_DRUM}, \
    .gender = TRAINER_MON_MALE,                                                 \
    .ball = ITEM_DIVE_BALL,                                                     \
    }

// Fairy
// Can replace Calm Mind/Moonlight with Misty Terrain/Life Dew
// ITEM_CLEFABLITE if ACE
#define WALLACE_CLEFABLE(Level)                                                   \
    {                                                                             \
    WALLACE_STEVEN_MON(Level, CLEFABLE),                                          \
    .ability = ABILITY_MAGIC_GUARD,                                               \
    .nature = NATURE_MODEST,                                                      \
    EV_SPREAD_SPA_HP_SPE,                                                         \
    .moves = {MOVE_MOONBLAST, MOVE_FLAMETHROWER, MOVE_CALM_MIND, MOVE_MOONLIGHT}, \
    .gender = TRAINER_MON_FEMALE,                                                 \
    .ball = ITEM_MOON_BALL,                                                       \
    }

#define WALLACE_SYLVEON(Level)                                                          \
    {                                                                                   \
    WALLACE_STEVEN_MON(Level, SYLVEON),                                                 \
    .ability = ABILITY_PIXILATE,                                                        \
    .nature = NATURE_MODEST,                                                            \
    EV_SPREAD_SPA_SPD_SPE,                                                              \
    .moves = {MOVE_HYPER_VOICE, MOVE_STORED_POWER, MOVE_CALM_MIND, MOVE_MISTY_TERRAIN}, \
    .gender = TRAINER_MON_FEMALE,                                                       \
    .ball = ITEM_ULTRA_BALL,                                                            \
    }

// EVs can be SpA/HP/Spe
// Aura Sphere/Sitrus Berry can by replaced by Life Dew/Leftovers
#define WALLACE_TOGEKISS(Level)                                                        \
    {                                                                                  \
    WALLACE_STEVEN_MON(Level, TOGEKISS), ITEM_SITRUS_BERRY,                            \
    .ability = ABILITY_SERENE_GRACE,                                                   \
    IDEAL_ATTACKER_SPECIAL,                                                            \
    .moves = {MOVE_DAZZLING_GLEAM, MOVE_AIR_SLASH, MOVE_AURA_SPHERE, MOVE_NASTY_PLOT}, \
    .gender = TRAINER_MON_MALE,                                                        \
    .ball = ITEM_ULTRA_BALL,                                                           \
    }

#define WALLACE_GRANBULL(Level)                                                  \
    {                                                                            \
    WALLACE_STEVEN_MON(Level, GRANBULL),                                         \
    .ability = ABILITY_STRONG_JAW,                                               \
    IDEAL_ATTACKER_PHYSICAL,                                                     \
    .moves = {MOVE_PLAY_ROUGH, MOVE_CRUNCH, MOVE_FIRE_FANG, MOVE_PSYCHIC_FANGS}, \
    .gender = TRAINER_MON_MALE,                                                  \
    .ball = ITEM_ULTRA_BALL,                                                     \
    }

#define WALLACE_FLORGES

#define WALLACE_AROMATISSE(Level)                                                   \
    {                                                                               \
    WALLACE_STEVEN_MON(Level, AROMATISSE, ITEM_TERRAIN_EXTENDER),                   \
    .ability = ABILITY_AROMA_VEIL,                                                  \
    .nature = NATURE_MODEST,                                                        \
    EV_SPREAD_SPA_HP_SPD,                                                           \
    .moves = {MOVE_MOONBLAST, MOVE_REFLECT, MOVE_AROMATHERAPY, MOVE_MISTY_TERRAIN}, \
    .gender = TRAINER_MON_FEMALE,                                                   \
    .ball = ITEM_HEAL_BALL,                                                         \
    }

#define WALLACE_SLURPUFF(Level)                                                               \
    {                                                                                         \
    WALLACE_STEVEN_MON(Level, SLURPUFF, ITEM_TERRAIN_EXTENDER),                               \
    .ability = ABILITY_SWEET_VEIL,                                                            \
    IDEAL_ATTACKER_SPECIAL,                                                                   \
    .moves = {MOVE_DAZZLING_GLEAM, MOVE_LIGHT_SCREEN, MOVE_COTTON_GUARD, MOVE_MISTY_TERRAIN}, \
    .gender = TRAINER_MON_MALE,                                                               \
    .ball = ITEM_ULTRA_BALL,                                                                  \
    }

#define WALLACE_COMFEY(Level)                                                       \
    {                                                                               \
    WALLACE_STEVEN_MON(Level, COMFEY, ITEM_BIG_ROOT),                               \
    .ability = ABILITY_TRIAGE,                                                      \
    .nature = NATURE_CALM,                                                          \
    EV_SPREAD_SPA_SPD_SPE,                                                          \
    .moves = {MOVE_DRAINING_KISS, MOVE_GIGA_DRAIN, MOVE_SYNTHESIS, MOVE_CALM_MIND}, \
    .gender = TRAINER_MON_FEMALE,                                                   \
    .ball = ITEM_HEAL_BALL,                                                         \
    }

#define WALLACE_ALCREMIE

#define WALLACE_DACHSBUN(Level)                                                 \
    {                                                                           \
    WALLACE_STEVEN_MON(Level, DACHSBUN),                                        \
    .ability = ABILITY_WELL_BAKED_BODY,                                         \
    .nature = NATURE_IMPISH,                                                    \
    EV_SPREAD_ATK_DEF_HP,                                                       \
    .moves = {MOVE_PLAY_ROUGH, MOVE_BODY_PRESS, MOVE_WORK_UP, MOVE_BATON_PASS}, \
    .gender = TRAINER_MON_FEMALE,                                               \
    .ball = ITEM_ULTRA_BALL,                                                    \
    }

#define WALLACE_TINKATON(Level)                                                          \
    {                                                                                    \
    WALLACE_STEVEN_MON(Level, TINKATON, ITEM_SITRUS_BERRY),                              \
    .ability = ABILITY_STEELWORKER,                                                      \
    .nature = NATURE_ADAMANT,                                                            \
    EV_SPREAD_ATK_SPE_SPD,                                                               \
    .moves = {MOVE_PLAY_ROUGH, MOVE_GIGATON_HAMMER, MOVE_ROCK_SLIDE, MOVE_SWORDS_DANCE}, \
    .gender = TRAINER_MON_FEMALE,                                                        \
    .ball = ITEM_POKE_BALL,                                                              \
    }

#define WALLACE_BATTLE(Trainer, AceLevel)                                                  \
[DIFFICULTY_NORMAL][TRAINER_##Trainer] =                                                   \
{                                                                                          \
    .trainerName = _("Frank"),                                                             \
    .trainerClass = TRAINER_CLASS_CHAMPION,                                                \
    .trainerPic = TRAINER_PIC_CHAMPION_WALLACE,                                            \
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,                                        \
    .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE}, \
    .mugshotColor = MUGSHOT_TYPE_WATER,                                                    \
    BOSS_AI_FLAGS,                                                                         \
    .partySize = 6,                                                                        \
    .party = (const struct TrainerMon[]) {                                                 \
        WALLACE_PELIPPER(AceLevel - 2),                                                    \
        WALLACE_GOREBYSS(AceLevel - 2),                                                    \
        WALLACE_RELICANTH(AceLevel - 2),                                                   \
        WALLACE_LUDICOLO(AceLevel - 2),                                                    \
        WALLACE_WAILORD(AceLevel - 1),                                                     \
        WALLACE_MILOTIC(AceLevel),                                                         \
    },                                                                                     \
}

WALLACE_BATTLE(WALLACE, CAP_CHAMPION),
WALLACE_BATTLE(WALLACE_REMATCH, 90),

// Combine these three with the ones in include/data.h (for battle_partners)
#define STEVEN_METAGROSS_2(Level)                                                        \
    {                                                                                    \
    WALLACE_STEVEN_MON(Level, METAGROSS, ITEM_METAGROSSITE),                             \
    .ability = ABILITY_CLEAR_BODY,                                                       \
    .nature = NATURE_ADAMANT,                                                            \
    EV_SPREAD_ATK_DEF_HP,                                                                \
    .moves = {MOVE_METEOR_MASH, MOVE_PSYCHIC_FANGS, MOVE_EARTHQUAKE, MOVE_BULLET_PUNCH}, \
    .gender = TRAINER_MON_NONE,                                                          \
    .ball = ITEM_POKE_BALL,                                                              \
    }

#define STEVEN_AGGRON_2(Level)                                                      \
    {                                                                               \
    WALLACE_STEVEN_MON(Level, AGGRON, ITEM_SHUCA_BERRY),                            \
    .ability = ABILITY_STURDY,                                                      \
    .nature = NATURE_IMPISH,                                                        \
    EV_SPREAD_ATK_DEF_HP,                                                           \
    .moves = {MOVE_IRON_HEAD, MOVE_ROCK_SLIDE, MOVE_BODY_PRESS, MOVE_IRON_DEFENSE}, \
    .gender = TRAINER_MON_MALE,                                                     \
    .ball = ITEM_HEAVY_BALL,                                                        \
    }

#define STEVEN_MAWILE_2(Level)                                                  \
    {                                                                           \
    WALLACE_STEVEN_MON(Level, MAWILE, ITEM_LIFE_ORB),                           \
    .ability = ABILITY_SHEER_FORCE,                                             \
    .nature = NATURE_ADAMANT,                                                   \
    EV_SPREAD_ATK_SPE_DEF,                                                      \
    .moves = {MOVE_IRON_HEAD, MOVE_PLAY_ROUGH, MOVE_CRUNCH, MOVE_SWORDS_DANCE}, \
    .gender = TRAINER_MON_FEMALE,                                               \
    .ball = ITEM_ULTRA_BALL,                                                    \
    }

#define STEVEN_JIRACHI(Level)                                                     \
    {                                                                             \
    WALLACE_STEVEN_MON(Level, JIRACHI, ITEM_KINGS_ROCK),                          \
    .ability = ABILITY_SERENE_GRACE,                                              \
    .nature = NATURE_MODEST,                                                      \
    EV_SPREAD_SPA_SPE_SPD,                                                        \
    .moves = {MOVE_DOOM_DESIRE, MOVE_FLASH_CANNON, MOVE_PSYCHIC, MOVE_CALM_MIND}, \
    .gender = TRAINER_MON_NONE,                                                   \
    .ball = ITEM_CHERISH_BALL,                                                    \
    .nickname = COMPOUND_STRING("Devon"),                                         \
    }

#define STEVEN_CLAYDOL(Level)                                                        \
    {                                                                                \
    WALLACE_STEVEN_MON(Level, CLAYDOL),                                              \
    .ability = ABILITY_LEVITATE,                                                     \
    .nature = NATURE_CALM,                                                           \
    EV_SPREAD_DEF_SPD_SPA,                                                           \
    .moves = {MOVE_REFLECT, MOVE_LIGHT_SCREEN, MOVE_ANCIENT_POWER, MOVE_EARTHQUAKE}, \
    .gender = TRAINER_MON_NONE,                                                      \
    .ball = ITEM_HEAVY_BALL,                                                         \
    }

// ITEM_SKARMORITE if ACE
#define STEVEN_SKARMORY(Level)                                                 \
    {                                                                          \
    WALLACE_STEVEN_MON(Level, SKARMORY, ITEM_GANLON_BERRY),                    \
    .ability = ABILITY_STURDY,                                                 \
    .nature = NATURE_IMPISH,                                                   \
    EV_SPREAD_ATK_DEF_HP,                                                      \
    .moves = {MOVE_STEEL_WING, MOVE_DRILL_PECK, MOVE_BODY_PRESS, MOVE_SPIKES}, \
    .gender = TRAINER_MON_MALE,                                                \
    .ball = ITEM_LUXURY_BALL,                                                  \
    }

// Extra for hacks
#define STEVEN_PERRSERKER(Level)                                                 \
    {                                                                            \
    WALLACE_STEVEN_MON(Level, PERRSERKER, ITEM_METAL_COAT),                      \
    .ability = ABILITY_STEELY_SPIRIT,                                            \
    .nature = NATURE_ADAMANT,                                                    \
    EV_SPREAD_ATK_DEF_HP,                                                        \
    .moves = {MOVE_IRON_HEAD, MOVE_SEED_BOMB, MOVE_FAKE_OUT, MOVE_SWORDS_DANCE}, \
    .gender = TRAINER_MON_MALE,                                                  \
    .ball = ITEM_ULTRA_BALL,                                                     \
    }

#define STEVEN_STEELIX
#define STEVEN_BRONZONG

// Impish/Atk/Def/Spe
// Supercell Slam->Iron Defense
#define STEVEN_KLINKLANG(Level)                                                        \
    {                                                                                  \
    WALLACE_STEVEN_MON(Level, KLINKLANG, ITEM_GANLON_BERRY),                           \
    .ability = ABILITY_CLEAR_BODY,                                                     \
    .nature = NATURE_ADAMANT,                                                          \
    EV_SPREAD_ATK_SPE_DEF,                                                             \
    .moves = {MOVE_GEAR_GRIND, MOVE_SUPERCELL_SLAM, MOVE_BODY_PRESS, MOVE_SHIFT_GEAR}, \
    .gender = TRAINER_MON_NONE,                                                        \
    .ball = ITEM_TIMER_BALL,                                                           \
    }

#define STEVEN_AEGISLASH(Level)                                                        \
    {                                                                                  \
    WALLACE_STEVEN_MON(Level, AEGISLASH, ITEM_LEFTOVERS),                              \
    .ability = ABILITY_STANCE_CHANGE,                                                  \
    .nature = NATURE_ADAMANT,                                                          \
    EV_SPREAD_ATK_DEF_HP,                                                              \
    .moves = {MOVE_IRON_HEAD, MOVE_SHADOW_CLAW, MOVE_KINGS_SHIELD, MOVE_SWORDS_DANCE}, \
    .gender = TRAINER_MON_MALE,                                                        \
    .ball = ITEM_LUXURY_BALL,                                                          \
    }

#define STEVEN_GOODRA
#define STEVEN_KLEFKI

// Curse can be replaced by Supercell Slam
#define STEVEN_COPPERAJAH(Level)                                             \
    {                                                                        \
    WALLACE_STEVEN_MON(Level, COPPERAJAH),                                   \
    .ability = ABILITY_SHEER_FORCE,                                          \
    .nature = NATURE_ADAMANT,                                                \
    EV_SPREAD_ATK_HP_SPE,                                                    \
    .moves = {MOVE_IRON_HEAD, MOVE_PLAY_ROUGH, MOVE_EARTHQUAKE, MOVE_CURSE}, \
    .gender = TRAINER_MON_MALE,                                              \
    .ball = ITEM_HEAVY_BALL,                                                 \
    }

#define STEVEN_ARCHALUDON(Level)                                                         \
    {                                                                                    \
    WALLACE_STEVEN_MON(Level, ARCHALUDON, ITEM_ASSAULT_VEST),                            \
    .ability = ABILITY_STAMINA,                                                          \
    .nature = NATURE_BOLD,                                                               \
    EV_SPREAD_SPA_DEF_SPE,                                                               \
    .moves = {MOVE_DRAGON_PULSE, MOVE_FLASH_CANNON, MOVE_ELECTRO_SHOT, MOVE_BODY_PRESS}, \
    .gender = TRAINER_MON_MALE,                                                          \
    .ball = ITEM_HEAVY_BALL,                                                             \
    }

#define STEVEN_REVAVROOM

#define STEVEN_ORTHWORM(Level)                                                     \
    {                                                                              \
    WALLACE_STEVEN_MON(Level, ORTHWORM),                                           \
    .ability = ABILITY_EARTH_EATER,                                                \
    .nature = NATURE_IMPISH,                                                       \
    EV_SPREAD_DEF_HP_SPE,                                                          \
    .moves = {MOVE_IRON_HEAD, MOVE_BODY_PRESS, MOVE_IRON_DEFENSE, MOVE_SHED_TAIL}, \
    .gender = TRAINER_MON_MALE,                                                    \
    .ball = ITEM_CHERISH_BALL,                                                     \
    }

#define STEVEN_GHOLDENGO

[DIFFICULTY_NORMAL][TRAINER_STEVEN] =
{
    STEVEN_INFO,
    .trainerPic = TRAINER_PIC_STEVEN,
    .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE},
    BOSS_AI_FLAGS,
    .partySize = 6,
    .party = (const struct TrainerMon[]) {
        STEVEN_SKARMORY(88),
        STEVEN_COPPERAJAH(88),
        STEVEN_JIRACHI(88),
        {
        STEVEN_MAWILE(89),
        .heldItem = ITEM_LIFE_ORB,
        },
        {
        STEVEN_AGGRON(89),
        .heldItem = ITEM_SHUCA_BERRY,
        },
        {
        STEVEN_METAGROSS(90),
        .moves = {MOVE_METEOR_MASH, MOVE_PSYCHIC_FANGS, MOVE_EARTHQUAKE, MOVE_BULLET_PUNCH},
        .heldItem = ITEM_METAGROSSITE,
        }
    },
},

// Grass
// Terrain Extender and Grassy Terrain can be swapped out
#define JUAN_VILEPLUME(rematch, tier)                                                  \
    {                                                                                  \
    REMATCH_MON(VILEPLUME, tier, rematch, ITEM_TERRAIN_EXTENDER),                      \
    .ability = ABILITY_CHLOROPHYLL,                                                    \
    IDEAL_ATTACKER_SPECIAL,                                                            \
    .moves = {MOVE_GIGA_DRAIN, MOVE_SLUDGE_BOMB, MOVE_MOONBLAST, MOVE_GRASSY_TERRAIN}, \
    .gender = TRAINER_MON_MALE,                                                        \
    }

//Heat Rock, Solar Beam, and Sunny Day can be swapped out
#define JUAN_BELLOSSOM(rematch, tier)                                              \
    {                                                                              \
    REMATCH_MON(BELLOSSOM, tier, rematch, ITEM_HEAT_ROCK),                         \
    .ability = ABILITY_CHLOROPHYLL,                                                \
    .nature = NATURE_CALM,                                                         \
    EV_SPREAD_SPA_SPE_SPD,                                                         \
    .moves = {MOVE_SOLAR_BEAM, MOVE_MOONBLAST, MOVE_SUNNY_DAY, MOVE_QUIVER_DANCE}, \
    .gender = TRAINER_MON_FEMALE,                                                  \
    }

// ITEM_VICTREEBELITE if ACE
#define JUAN_VICTREEBEL
#define JUAN_EXEGGUTOR
#define JUAN_EXEGGUTOR_ALOLA
#define JUAN_TANGROWTH
#define JUAN_LEAFEON
#define JUAN_JUMPLUFF
#define JUAN_SUNFLORA

//Grassy Seed can be swapped out
//Leaf Blade can be replaced with Solar Blade on a sun team
//Chlorophyll can be replaced with Wind Rider
#define JUAN_SHIFTRY(rematch, tier)                                                   \
    {                                                                                 \
    REMATCH_MON(SHIFTRY, tier, rematch, ITEM_GRASSY_SEED),                            \
    .ability = ABILITY_CHLOROPHYLL,                                                   \
    IDEAL_ATTACKER_PHYSICAL,                                                          \
    .moves = {MOVE_LEAF_BLADE, MOVE_NIGHT_SLASH, MOVE_ROCK_SLIDE, MOVE_SWORDS_DANCE}, \
    .gender = TRAINER_MON_MALE,                                                       \
    }

#define JUAN_BRELOOM(rematch, tier)                                           \
    {                                                                         \
    /*ELITE_FOUR_MON(BRELOOM, Tier, Rematch, GLACIA, ITEM_LOADED_DICE),*/       \
    REMATCH_MON(BRELOOM, tier, rematch, ITEM_LOADED_DICE),                    \
    .ability = ABILITY_TECHNICIAN,                                            \
    IDEAL_ATTACKER_PHYSICAL,                                                  \
    .moves = {MOVE_BULLET_SEED, MOVE_ARM_THRUST, MOVE_ROCK_TOMB, MOVE_SPORE}, \
    .gender = TRAINER_MON_MALE,                                               \
    }

//Grassy Terrain can be replaced with with Toxic Spikes or Weather Ball
//Dazzling Gleam can be replaced with Weather Ball
#define JUAN_ROSERADE(rematch, tier)                                                        \
    {                                                                                       \
    /*ELITE_FOUR_MON(ROSERADE, Tier, Rematch, GLACIA),*/                                      \
    REMATCH_MON(ROSERADE, tier, rematch),                                                   \
    .ability = ABILITY_NATURAL_CURE,                                                        \
    IDEAL_ATTACKER_SPECIAL,                                                                 \
    .moves = {MOVE_GIGA_DRAIN, MOVE_SLUDGE_BOMB, MOVE_DAZZLING_GLEAM, MOVE_GRASSY_TERRAIN}, \
    .gender = TRAINER_MON_FEMALE,                                                           \
    }

#define JUAN_CACTURNE // https://github.com/fdeblasio/pokeemerald-expansion/blob/cats/src/data/trainers.h#L1994

#define JUAN_TROPIUS(rematch, tier)                                                \
    {                                                                              \
    /*ELITE_FOUR_MON(TROPIUS, Tier, Rematch, GLACIA),*/                              \
    REMATCH_MON(TROPIUS, tier, rematch),                                           \
    .ability = ABILITY_CHLOROPHYLL,                                                \
    .nature = NATURE_MODEST,                                                       \
    EV_SPREAD_SPA_HP_SPD,                                                          \
    .moves = {MOVE_GIGA_DRAIN, MOVE_AIR_SLASH, MOVE_DRAGON_PULSE, MOVE_SYNTHESIS}, \
    .gender = TRAINER_MON_MALE,                                                    \
    }

#define JUAN_CHERRIM
#define JUAN_CARNIVINE
#define JUAN_ABOMASNOW
#define JUAN_SIMISAGE
#define JUAN_WHIMSICOTT
#define JUAN_LILLIGANT_HISUI
#define JUAN_LILLIGANT
#define JUAN_MARACTUS // https://github.com/fdeblasio/pokeemerald-expansion/blob/cats/src/data/trainers.h#L1983
#define JUAN_AMOONGUSS
#define JUAN_FERRORTHORN
#define JUAN_GOGOAT
#define JUAN_LURANTIS
#define JUAN_SHIINOTIC
#define JUAN_TSAREENA
#define JUAN_ELDEGOSS
#define JUAN_FLAPPLE
#define JUAN_APPLETUN
#define JUAN_HYDRAPPLE
#define JUAN_ARBOLIVA
#define JUAN_BRAMBLEGHAST
#define JUAN_SCOVILLAIN // https://github.com/fdeblasio/pokeemerald-expansion/blob/cats/src/data/trainers.h#L1972
#define JUAN_SINISTCHA

#define REMATCH_2_LEVEL_1 35
#define REMATCH_2_LEVEL_2 REMATCH_2_LEVEL_1 - 1
#define REMATCH_2_LEVEL_3 REMATCH_2_LEVEL_1 - 2
#define REMATCH_2_LEVEL_4 REMATCH_2_LEVEL_1 - 3
#define REMATCH_2_LEVEL_5 REMATCH_2_LEVEL_1 - 4
#define REMATCH_2_LEVEL_6 REMATCH_2_LEVEL_1 - 5

#define REMATCH_3_LEVEL_1 45
#define REMATCH_3_LEVEL_2 REMATCH_3_LEVEL_1 - 1
#define REMATCH_3_LEVEL_3 REMATCH_3_LEVEL_1 - 2
#define REMATCH_3_LEVEL_4 REMATCH_3_LEVEL_1 - 3
#define REMATCH_3_LEVEL_5 REMATCH_3_LEVEL_1 - 4
#define REMATCH_3_LEVEL_6 REMATCH_3_LEVEL_1 - 5

#define REMATCH_4_LEVEL_1 52
#define REMATCH_4_LEVEL_2 REMATCH_4_LEVEL_1 - 1
#define REMATCH_4_LEVEL_3 REMATCH_4_LEVEL_1 - 2
#define REMATCH_4_LEVEL_4 REMATCH_4_LEVEL_1 - 3
#define REMATCH_4_LEVEL_5 REMATCH_4_LEVEL_1 - 4
#define REMATCH_4_LEVEL_6 REMATCH_4_LEVEL_1 - 5

#define REMATCH_5_LEVEL_1 59
#define REMATCH_5_MINI_BOSS REMATCH_5_LEVEL_1 + 1
#define REMATCH_5_LEVEL_2 REMATCH_5_LEVEL_1 - 1
#define REMATCH_5_LEVEL_3 REMATCH_5_LEVEL_1 - 2
#define REMATCH_5_LEVEL_4 REMATCH_5_LEVEL_1 - 3
#define REMATCH_5_LEVEL_5 REMATCH_5_LEVEL_1 - 4
#define REMATCH_5_LEVEL_6 REMATCH_5_LEVEL_1 - 5

#define GABBY_AND_TY_INFO                                        \
    .trainerName = _("Gabby & Ty"),                              \
    TRAINER_CONDENSED(INTERVIEWER),                              \
    .battleType = TRAINER_BATTLE_TYPE_DOUBLES,                   \
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY, \
    .partySize = 2

#define GABBY_WHISMUR(Level) \
    .lvl = Level,            \
    .species = Level < REMATCH_2_LEVEL_6 ? SPECIES_WHISMUR : (Level < ENDGAME_REMATCH_2_LEVEL ? SPECIES_LOUDRED : SPECIES_EXPLOUD), \
    .ability = 2        ,    \
    .gender = TRAINER_MON_FEMALE

#define TY_MAGNEMITE(Level) \
    .lvl = Level,           \
    .species = Level < REMATCH_2_LEVEL_6 ? SPECIES_MAGNEMITE : (Level < ENDGAME_REMATCH_2_LEVEL ? SPECIES_MAGNETON : SPECIES_MAGNEZONE), \
    .ability = ABILITY_ANALYTIC

[DIFFICULTY_NORMAL][TRAINER_GABBY_AND_TY_1] =
{
    GABBY_AND_TY_INFO,
    .party = (const struct TrainerMon[]) {
        {
        TY_MAGNEMITE(24),
        IVS(6),
        },
        {
        GABBY_WHISMUR(24),
        IVS(6),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_GABBY_AND_TY_2] =
{
    GABBY_AND_TY_INFO,
    .party = (const struct TrainerMon[]) {
        {
        TY_MAGNEMITE(REMATCH_2_LEVEL_1),
        IVS(12),
        },
        {
        GABBY_WHISMUR(REMATCH_2_LEVEL_1),
        IVS(12),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_GABBY_AND_TY_3] =
{
    GABBY_AND_TY_INFO,
    .party = (const struct TrainerMon[]) {
        {
        TY_MAGNEMITE(REMATCH_3_LEVEL_1),
        IVS(18),
        },
        {
        GABBY_WHISMUR(REMATCH_3_LEVEL_1),
        IVS(18),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_GABBY_AND_TY_4] =
{
    GABBY_AND_TY_INFO,
    .party = (const struct TrainerMon[]) {
        {
        TY_MAGNEMITE(REMATCH_4_LEVEL_1),
        IVS(24),
        },
        {
        GABBY_WHISMUR(REMATCH_4_LEVEL_1),
        IVS(24),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_GABBY_AND_TY_5] =
{
    GABBY_AND_TY_INFO,
    .party = (const struct TrainerMon[]) {
        {
        TY_MAGNEMITE(REMATCH_5_LEVEL_1),
        IVS(30),
        },
        {
        GABBY_WHISMUR(REMATCH_5_LEVEL_1),
        IVS(30),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_GABBY_AND_TY_6] =
{
    GABBY_AND_TY_INFO,
    .party = (const struct TrainerMon[]) {
        {
        TY_MAGNEMITE(ENDGAME_REMATCH_2_LEVEL),
        IVS(30),
        .moves = {MOVE_THUNDERBOLT, MOVE_FLASH_CANNON, MOVE_METAL_SOUND, MOVE_BARRIER},
        },
        {
        GABBY_WHISMUR(ENDGAME_REMATCH_2_LEVEL),
        IVS(30),
        .moves = {MOVE_HYPER_VOICE, MOVE_DISARMING_VOICE, MOVE_CRUNCH, MOVE_THUNDER_FANG},
        }
    },
},

// Team Magma
#define MAGMA_GRUNT_M_INFO                           \
    .trainerClass = TRAINER_CLASS_TEAM_MAGMA,        \
    .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,         \
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MAGMA, \
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE

#define MAGMA_GRUNT_F_INFO                           \
    .trainerClass = TRAINER_CLASS_TEAM_MAGMA,        \
    .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,         \
    .gender = TRAINER_GENDER_FEMALE,                 \
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MAGMA, \
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE

#define SPACE_CENTER_GRUNT_LEVEL CAP_SPACE_CENTER - 6

#define LANDON_BATTLE(Location, Level)                                                   \
[DIFFICULTY_NORMAL][TRAINER_LANDON_##Location] =                                         \
{                                                                                        \
    .trainerName = _("Landon"),                                                          \
    MAGMA_GRUNT_M_INFO,                                                                  \
    .partySize = 1,                                                                      \
    .party = (const struct TrainerMon[]) {                                               \
        {                                                                                \
        .lvl = Level,                                                                    \
        .species = Level < SPACE_CENTER_GRUNT_LEVEL ? SPECIES_SLUGMA : SPECIES_MAGCARGO, \
        .ability = ABILITY_MAGMA_ARMOR,                                                  \
        .gender = TRAINER_MON_MALE,                                                      \
        }                                                                                \
    },                                                                                   \
}

#define GINNY_BATTLE(Location, Level)                                                        \
[DIFFICULTY_NORMAL][TRAINER_GINNY_##Location] =                                              \
{                                                                                            \
    .trainerName = _("Ginny"),                                                               \
    MAGMA_GRUNT_F_INFO,                                                                      \
    .partySize = 1,                                                                          \
    .party = (const struct TrainerMon[]) {                                                   \
        {                                                                                    \
        .lvl = Level,                                                                        \
        .species = Level < SPACE_CENTER_GRUNT_LEVEL ? SPECIES_SANDSHREW : SPECIES_SANDSLASH, \
        .ability = ABILITY_SAND_VEIL,                                                        \
        .gender = TRAINER_MON_FEMALE,                                                        \
        }                                                                                    \
    },                                                                                       \
}

#define TERRANCE_BATTLE(Location, Level)                                              \
[DIFFICULTY_NORMAL][TRAINER_TERRANCE_##Location] =                                    \
{                                                                                     \
    .trainerName = _("Terrance"),                                                     \
    MAGMA_GRUNT_M_INFO,                                                               \
    .partySize = 1,                                                                   \
    .party = (const struct TrainerMon[]) {                                            \
        {                                                                             \
        .lvl = Level,                                                                 \
        .species = SPECIES_TERRANCE_ACE + (Level < SPACE_CENTER_GRUNT_LEVEL ? 0 : 1), \
        .ability = ABILITY_LEVITATE,                                                  \
        IVS(6),                                                                       \
        .gender = TRAINER_MON_NONE,                                                   \
        }                                                                             \
    },                                                                                \
}

#define JORDAN_BATTLE(Location, Level)                                              \
[DIFFICULTY_NORMAL][TRAINER_JORDAN_##Location] =                                    \
{                                                                                   \
    .trainerName = _("Jordan"),                                                     \
    MAGMA_GRUNT_F_INFO,                                                             \
    .partySize = 1,                                                                 \
    .party = (const struct TrainerMon[]) {                                          \
        {                                                                           \
        .lvl = Level,                                                               \
        .species = SPECIES_JORDAN_ACE + (Level < SPACE_CENTER_GRUNT_LEVEL ? 0 : 1), \
        .ability = ABILITY_ROCK_HEAD,                                               \
        .gender = TRAINER_MON_FEMALE,                                               \
        }                                                                           \
    },                                                                              \
}

#define GAETANO_BATTLE(Location, Level)                                                 \
[DIFFICULTY_NORMAL][TRAINER_GAETANO_##Location] =                                       \
{                                                                                       \
    .trainerName = _("Gaetano"),                                                        \
    MAGMA_GRUNT_M_INFO,                                                                 \
    .partySize = 1,                                                                     \
    .party = (const struct TrainerMon[]) {                                              \
        {                                                                               \
        .lvl = Level,                                                                   \
        .species = Level < SPACE_CENTER_GRUNT_LEVEL ? SPECIES_PHANPY : SPECIES_DONPHAN, \
        .ability = 0,                                                                   \
        .gender = TRAINER_MON_MALE,                                                     \
        }                                                                               \
    },                                                                                  \
}

#define WALKER_BATTLE(Location, Level)           \
[DIFFICULTY_NORMAL][TRAINER_WALKER_##Location] = \
{                                                \
    .trainerName = _("Walker"),                  \
    MAGMA_GRUNT_M_INFO,                          \
    .partySize = 1,                              \
    .party = (const struct TrainerMon[]) {       \
        {                                        \
        .lvl = Level,                            \
        .species = SPECIES_TORKOAL,              \
        .ability = ABILITY_DROUGHT,              \
        .gender = TRAINER_MON_MALE,              \
        }                                        \
    },                                           \
}

// Team Aqua
#define AQUA_GRUNT_M_INFO                           \
    .trainerClass = TRAINER_CLASS_TEAM_AQUA,        \
    .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,         \
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA, \
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE

#define AQUA_GRUNT_F_INFO                           \
    .trainerClass = TRAINER_CLASS_TEAM_AQUA,        \
    .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,         \
    .gender = TRAINER_GENDER_FEMALE,                \
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA, \
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE

#define CASPIAN_INFO             \
    .trainerName = _("Caspian"), \
    AQUA_GRUNT_M_INFO

#define CASPIAN_CARVANHA(Level, Move1, Move3, Move4)                 \
    {                                                                \
    .lvl = Level,                                                    \
    .species = SPECIES_CARVANHA,                                     \
    .ability = ABILITY_ROUGH_SKIN,                                   \
    .moves = {MOVE_##Move1, MOVE_THIEF, MOVE_##Move3, MOVE_##Move4}, \
    .gender = TRAINER_MON_MALE,                                      \
    }

#define CASPIAN_CLAMPERL(Level)     \
    {                               \
    .lvl = Level,                   \
    .species = SPECIES_CLAMPERL,    \
    .ability = ABILITY_SHELL_ARMOR, \
    .gender = TRAINER_MON_MALE,     \
    }

#define WEATHER_INSTITUTE_AQUA_LEVEL CAP_WEATHER - 4
#define AQUA_HIDEOUT_LEVEL CAP_AQUA_HIDEOUT - 4
#define SEAFLOOR_CAVERN_LEVEL CAP_SEAFLOOR_CAVERN - 3

#define MARINA_BATTLE(Location, Level)                                                \
[DIFFICULTY_NORMAL][TRAINER_MARINA_##Location] =                                      \
{                                                                                     \
    .trainerName = _("Marina"),                                                       \
    AQUA_GRUNT_F_INFO,                                                                \
    .partySize = 2,                                                                   \
    .party = (const struct TrainerMon[]) {                                            \
        {                                                                             \
        .lvl = Level,                                                                 \
        .species = Level < SEAFLOOR_CAVERN_LEVEL ? SPECIES_DUCKLETT : SPECIES_SWANNA, \
        .ability = ABILITY_HYDRATION,                                                 \
        .gender = TRAINER_MON_FEMALE,                                                 \
        },                                                                            \
        {                                                                             \
        .lvl = Level,                                                                 \
        .species = SPECIES_MARINA_ACE + (Level < WEATHER_INSTITUTE_AQUA_LEVEL ? 0 : 1), \
        .ability = 0,                                                                 \
        .gender = TRAINER_MON_FEMALE,                                                 \
        }                                                                             \
    },                                                                                \
}

#define MALIK_BATTLE(Location, Level)                                                      \
[DIFFICULTY_NORMAL][TRAINER_MALIK_##Location] =                                            \
{                                                                                          \
    .trainerName = _("Malik"),                                                             \
    AQUA_GRUNT_M_INFO,                                                                     \
    .partySize = 2,                                                                        \
    .party = (const struct TrainerMon[]) {                                                 \
        {                                                                                  \
        .lvl = Level,                                                                      \
        .species = Level < SEAFLOOR_CAVERN_LEVEL ? SPECIES_CHINCHOU : SPECIES_LANTURN,     \
        .ability = ABILITY_WATER_ABSORB,                                                   \
        .gender = TRAINER_MON_MALE,                                                        \
        },                                                                                 \
        {                                                                                  \
        .lvl = Level,                                                                      \
        .species = SPECIES_MALIK_ACE + (Level < SEAFLOOR_CAVERN_LEVEL ? 0 : 1),            \
        .ability = ABILITY_OBLIVIOUS,                                                      \
        .gender = TRAINER_MON_MALE,                                                        \
        }                                                                                  \
    },                                                                                     \
}

#define BERYL_BATTLE(Location, Level)                                                 \
[DIFFICULTY_NORMAL][TRAINER_BERYL_##Location] =                                       \
{                                                                                     \
    .trainerName = _("Beryl"),                                                        \
    AQUA_GRUNT_M_INFO,                                                                \
    .partySize = 2,                                                                   \
    .party = (const struct TrainerMon[]) {                                            \
        {                                                                             \
        .lvl = Level,                                                                 \
        .species = Level < SEAFLOOR_CAVERN_LEVEL ? SPECIES_PSYDUCK : SPECIES_GOLDUCK, \
        .ability = ABILITY_DAMP,                                                      \
        .gender = TRAINER_MON_MALE,                                                   \
        },                                                                            \
        {                                                                             \
        .lvl = Level,                                                                 \
        .species = Level < AQUA_HIDEOUT_LEVEL ? SPECIES_HORSEA : (Level < SEAFLOOR_CAVERN_LEVEL ? SPECIES_SEADRA : SPECIES_KINGDRA), \
        .ability = ABILITY_SWIFT_SWIM,                                                \
        .gender = TRAINER_MON_MALE,                                                   \
        }                                                                             \
    },                                                                                \
}

#define NERISSA_BATTLE(Location, Level)                                                \
[DIFFICULTY_NORMAL][TRAINER_NERISSA_##Location] =                                      \
{                                                                                      \
    .trainerName = _("Nerissa"),                                                       \
    AQUA_GRUNT_F_INFO,                                                                 \
    .partySize = 2,                                                                    \
    .party = (const struct TrainerMon[]) {                                             \
        {                                                                              \
        .lvl = Level,                                                                  \
        .species = Level < SEAFLOOR_CAVERN_LEVEL ? SPECIES_LOMBRE : SPECIES_LUDICOLO,  \
        .ability = ABILITY_SWIFT_SWIM,                                                 \
        .gender = TRAINER_MON_FEMALE,                                                  \
        },                                                                             \
        {                                                                              \
        .lvl = Level,                                                                  \
        .species = Level < SEAFLOOR_CAVERN_LEVEL ? SPECIES_MARILL : SPECIES_AZUMARILL, \
        .ability = ABILITY_HUGE_POWER,                                                 \
        .gender = TRAINER_MON_FEMALE,                                                  \
        }                                                                              \
    },                                                                                 \
}

// Team admins and leaders
#define TABITHA_BATTLE(Location, AceLevel, IVs)                                          \
[DIFFICULTY_NORMAL][TRAINER_TABITHA_##Location] =                                        \
{                                                                                        \
    .trainerName = _("Cam"),                                                             \
    .trainerClass = TRAINER_CLASS_MAGMA_ADMIN,                                           \
    .trainerPic = TRAINER_PIC_MAGMA_ADMIN_M,                                             \
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MAGMA,                                     \
    BOSS_AI_FLAGS,                                                                       \
    .partySize = 3,                                                                      \
    .multiTeamSize = MULTI_TEAM_SIZE_HALF,                                               \
    .party = (const struct TrainerMon[]) {                                               \
        {                                                                                \
        .lvl = (AceLevel - 2),                                                           \
        .species = SPECIES_ORICORIO_BAILE,                                               \
        .ability = ABILITY_DANCER,                                                       \
        IVS(IVs),                                                                        \
        .gender = TRAINER_MON_FEMALE,                                                    \
        },                                                                               \
        {                                                                                \
        .lvl = (AceLevel - 2),                                                           \
        .species = AceLevel < REMATCH_3_LEVEL_6 ? SPECIES_SIZZLIPEDE : SPECIES_CENTISKORCH,\
        .ability = ABILITY_FLASH_FIRE,                                                   \
        IVS(IVs),                                                                        \
        .gender = TRAINER_MON_MALE,                                                      \
        },                                                                               \
        {                                                                                \
        .lvl = AceLevel,                                                                 \
        .species = AceLevel < REMATCH_3_LEVEL_6 ? SPECIES_VULPIX : SPECIES_NINETALES,    \
        .ability = ABILITY_FLASH_FIRE,                                                   \
        IVS(IVs),                                                                        \
        .gender = TRAINER_MON_FEMALE,                                                    \
        }                                                                                \
    },                                                                                   \
}

#define COURTNEY_BATTLE(Location, AceLevel, IVs)                                      \
[DIFFICULTY_NORMAL][TRAINER_COURTNEY_##Location] =                                    \
{                                                                                     \
    .trainerName = _("Kate"),                                                         \
    .trainerClass = TRAINER_CLASS_MAGMA_ADMIN,                                        \
    .trainerPic = TRAINER_PIC_MAGMA_ADMIN_F,                                          \
    .gender = TRAINER_GENDER_FEMALE,                                                  \
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MAGMA,                                  \
    BOSS_AI_FLAGS,                                                                    \
    .partySize = 3,                                                                   \
    .party = (const struct TrainerMon[]) {                                            \
        {                                                                             \
        .lvl = (AceLevel - 2),                                                        \
        .species = AceLevel < REMATCH_3_LEVEL_6 ? SPECIES_SILICOBRA : SPECIES_SANDACONDA, \
        .ability = 0,                                                                 \
        IVS(IVs),                                                                     \
        .gender = TRAINER_MON_FEMALE,                                                 \
        },                                                                            \
        {                                                                             \
        .lvl = (AceLevel - 2),                                                        \
        .species = AceLevel < REMATCH_3_LEVEL_6 ? SPECIES_FLETCHINDER : SPECIES_TALONFLAME,   \
        .ability = ABILITY_FLAME_BODY,                                                  \
        IVS(IVs),                                                                     \
        .gender = TRAINER_MON_FEMALE,                                                   \
        },                                                                            \
        {                                                                             \
        .lvl = AceLevel,                                                              \
        .species = AceLevel < REMATCH_3_LEVEL_6 ? SPECIES_HOUNDOUR : SPECIES_HOUNDOOM,\
        .ability = ABILITY_FLASH_FIRE,                                                \
        IVS(IVs),                                                                     \
        .gender = TRAINER_MON_MALE,                                                   \
        }                                                                             \
    },                                                                                \
}

#define SHELLY_BATTLE(Location, AceLevel, IVs)                                       \
[DIFFICULTY_NORMAL][TRAINER_SHELLY_##Location] =                                     \
{                                                                                    \
    .trainerName = _("Helen"),                                                       \
    .trainerClass = TRAINER_CLASS_AQUA_ADMIN,                                        \
    .trainerPic = TRAINER_PIC_AQUA_ADMIN_F,                                          \
    .gender = TRAINER_GENDER_FEMALE,                                                 \
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,                                  \
    BOSS_AI_FLAGS,                                                                   \
    .partySize = 3,                                                                  \
    .party = (const struct TrainerMon[]) {                                           \
        {                                                                            \
        .lvl = (AceLevel - 2),                                                       \
        .species = AceLevel < REMATCH_3_LEVEL_6 ? SPECIES_STARYU : SPECIES_STARMIE,  \
        .ability = ABILITY_ILLUMINATE,                                               \
        IVS(IVs),                                                                    \
        .gender = TRAINER_MON_NONE,                                                  \
        },                                                                           \
        {                                                                            \
        .lvl = (AceLevel - 2),                                                       \
        .species = AceLevel < REMATCH_3_LEVEL_6 ? SPECIES_GOLDEEN : SPECIES_SEAKING, \
        .ability = ABILITY_SWIFT_SWIM,                                               \
        IVS(IVs),                                                                    \
        .gender = TRAINER_MON_FEMALE,                                                \
        },                                                                           \
        {                                                                            \
        .lvl = AceLevel,                                                             \
        .species = SPECIES_GOREBYSS,                                                 \
        .ability = ABILITY_SWIFT_SWIM,                                               \
        IVS(IVs),                                                                    \
        .gender = TRAINER_MON_FEMALE,                                                \
        }                                                                            \
    },                                                                               \
}

#define MATT_BATTLE(Location, AceLevel, IVs)        \
[DIFFICULTY_NORMAL][TRAINER_MATT_##Location] =      \
{                                                   \
    .trainerName = _("Oleg"),                       \
    .trainerClass = TRAINER_CLASS_AQUA_ADMIN,       \
    .trainerPic = TRAINER_PIC_AQUA_ADMIN_M,         \
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA, \
    BOSS_AI_FLAGS,                                  \
    .partySize = 3,                                 \
    .party = (const struct TrainerMon[]) {          \
        {                                           \
        .lvl = (AceLevel - 2),                      \
        .species = SPECIES_GYARADOS,                \
        .ability = ABILITY_INTIMIDATE,              \
        IVS(IVs),                                   \
        .gender = TRAINER_MON_MALE,                 \
        },                                          \
        {                                           \
        .lvl = (AceLevel - 2),                      \
        .species = SPECIES_CRAWDAUNT,               \
        .ability = ABILITY_SHELL_ARMOR,             \
        IVS(IVs),                                   \
        .gender = TRAINER_MON_MALE,                 \
        },                                          \
        {                                           \
        .lvl = AceLevel,                            \
        .species = SPECIES_HUNTAIL,                 \
        .ability = ABILITY_SWIFT_SWIM,              \
        IVS(IVs),                                   \
        .gender = TRAINER_MON_MALE,                 \
        }                                           \
    },                                              \
}

#define TEAM_LEADER_SUPPORTING_MON(Level) \
    .lvl = Level,                         \
    IVS(18)

#define MAXIE_INFO                                   \
    .trainerName = _("Maxie"),                       \
    .trainerClass = TRAINER_CLASS_MAGMA_LEADER,      \
    .trainerPic = TRAINER_PIC_MAGMA_LEADER_MAXIE,    \
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MAGMA, \
    .multiTeamSize = MULTI_TEAM_SIZE_HALF,           \
    BOSS_AI_FLAGS

#define MAXIE_SUPPORTING_SPACE_CENTER_LEVEL CAP_SPACE_CENTER - 1

#define HUMPHREY(Level)                                       \
    .lvl = Level,                                             \
    .species = Level < 33 ? SPECIES_NUMEL : SPECIES_CAMERUPT, \
    .ability = 1,                                             \
    .nature = NATURE_MODEST,                                  \
    PERFECT_IVS,                                              \
    .gender = TRAINER_MON_MALE,                               \
    .ball = ITEM_POKE_BALL,                                   \
    .nickname = COMPOUND_STRING("Humphrey")

#define MAXIE_RHYHORN(Level)           \
    {                                  \
    TEAM_LEADER_SUPPORTING_MON(Level), \
    .species = Level < 42 ? SPECIES_RHYHORN : (Level < MAXIE_SUPPORTING_SPACE_CENTER_LEVEL ? SPECIES_RHYDON : SPECIES_RHYPERIOR), \
    .ability = 1,                      \
    .gender = TRAINER_MON_MALE,        \
    }

#define MAXIE_BALTOY(Level)                                   \
    {                                                         \
    TEAM_LEADER_SUPPORTING_MON(Level),                        \
    .species = Level < 36 ? SPECIES_BALTOY : SPECIES_CLAYDOL, \
    .ability = ABILITY_LEVITATE,                              \
    .gender = TRAINER_MON_NONE,                               \
    }

#define MAXIE_SANDSHREW(Level)                                                    \
    {                                                                             \
    TEAM_LEADER_SUPPORTING_MON(Level),                                            \
    .species = Level < REMATCH_3_LEVEL_6 ? SPECIES_SANDSHREW : SPECIES_SANDSLASH, \
    .ability = ABILITY_SAND_VEIL,                                                 \
    .gender = TRAINER_MON_MALE,                                                   \
    }

// Extra for hacks
#define MAXIE_DIGLETT
#define MAXIE_DIGLETT_ALOLA
#define MAXIE_CUBONE

#define MAXIE_GLIGAR(Level)                                                  \
    {                                                                        \
    TEAM_LEADER_SUPPORTING_MON(Level),                                       \
    .species = Level < REMATCH_3_LEVEL_6 ? SPECIES_GLIGAR : SPECIES_GLISCOR, \
    .ability = ABILITY_SAND_VEIL,                                            \
    .gender = TRAINER_MON_MALE,                                              \
    .heldItem = ITEM_POISON_BARB,                                            \
    }

#define MAXIE_PHANPY

#define MAXIE_TRAPINCH(Level)          \
    {                                  \
    TEAM_LEADER_SUPPORTING_MON(Level), \
    .species = Level < 35 ? SPECIES_TRAPINCH : (Level < MAXIE_SUPPORTING_SPACE_CENTER_LEVEL ? SPECIES_VIBRAVA : SPECIES_FLYGON), \
    .ability = 1,                      \
    .gender = TRAINER_MON_MALE,        \
    }

#define MAXIE_HIPPOPOTAS

// ITEM_EXCADRITE if ACE
#define MAXIE_DRILBUR(Level)                                     \
    {                                                            \
    TEAM_LEADER_SUPPORTING_MON(Level),                           \
    .species = Level < 36 ? SPECIES_DRILBUR : SPECIES_EXCADRILL, \
    .ability = ABILITY_SAND_FORCE,                               \
    .gender = TRAINER_MON_MALE,                                  \
    }

#define MAXIE_SANDILE(Level)           \
    {                                  \
    TEAM_LEADER_SUPPORTING_MON(Level), \
    .species = Level < REMATCH_3_LEVEL_6 ? SPECIES_SANDILE : (Level < MAXIE_SUPPORTING_SPACE_CENTER_LEVEL ? SPECIES_KROKOROK : SPECIES_KROOKODILE), \
    .ability = ABILITY_INTIMIDATE,     \
    .gender = TRAINER_MON_MALE,        \
    }

#define MAXIE_YAMASK_GALAR
#define MAXIE_STUNFISK
#define MAXIE_STUNFISK_ALOLA

// ITEM_GOLURKITE if ACE
#define MAXIE_GOLETT(Level)                                  \
    {                                                        \
    TEAM_LEADER_SUPPORTING_MON(Level),                       \
    .species = Level < 43 ? SPECIES_GOLETT : SPECIES_GOLURK, \
    .ability = ABILITY_IRON_FIST,                            \
    .gender = TRAINER_MON_NONE,                              \
    }

#define MAXIE_MUDBRAY
#define MAXIE_SILICOBRA
#define MAXIE_TOEDSCOOL

#define ARCHIE_INFO                                 \
    .trainerName = _("Archie"),                     \
    .trainerClass = TRAINER_CLASS_AQUA_LEADER,      \
    .trainerPic = TRAINER_PIC_AQUA_LEADER_ARCHIE,   \
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA, \
    BOSS_AI_FLAGS

#define FINNEAS(Level)                                    \
    .lvl = Level,                                         \
    .species = SPECIES_ARCHIE_ACE - (Level < 30 ? 1 : 0), \
    .ability = ABILITY_ROUGH_SKIN,                        \
    .nature = NATURE_ADAMANT,                             \
    PERFECT_IVS,                                          \
    .gender = TRAINER_MON_MALE,                           \
    .ball = ITEM_POKE_BALL,                               \
    .nickname = COMPOUND_STRING("Finneas")

#define ARCHIE_WAILMER(Level)                                  \
    {                                                          \
    TEAM_LEADER_SUPPORTING_MON(Level),                         \
    .species = Level < 40 ? SPECIES_WAILMER : SPECIES_WAILORD, \
    .ability = ABILITY_OBLIVIOUS,                              \
    .gender = TRAINER_MON_MALE,                                \
    }

#define ARCHIE_TENTACOOL(Level)                                     \
    {                                                               \
    TEAM_LEADER_SUPPORTING_MON(Level),                              \
    .species = Level < 30 ? SPECIES_TENTACOOL : SPECIES_TENTACRUEL, \
    .ability = ABILITY_CLEAR_BODY,                                  \
    .gender = TRAINER_MON_MALE,                                     \
    }

// Extra for hacks
#define ARCHIE_PSYDUCK
#define ARCHIE_POLIWAG
#define ARCHIE_POLIWAG_2
#define ARCHIE_SLOWPOKE
#define ARCHIE_SLOWPOKE_2
#define ARCHIE_SEEL
#define ARCHIE_SHELLDER
#define ARCHIE_KRABBY
#define ARCHIE_HORSEA
#define ARCHIE_GOLDEEN
// ITEM_STARMINITE if ACE
#define ARCHIE_STARYU
#define ARCHIE_MAGIKARP
#define ARCHIE_LAPRAS
#define ARCHIE_CHINCHOU
#define ARCHIE_AZURILL
#define ARCHIE_WOOPER
#define ARCHIE_QWILFISH
#define ARCHIE_CORSOLA
#define ARCHIE_REMORAID
#define ARCHIE_MANTYKE
#define ARCHIE_LOTAD
#define ARCHIE_WINGULL
#define ARCHIE_BARBOACH
#define ARCHIE_CORPHISH
#define ARCHIE_FEEBAS
#define ARCHIE_CASTFORM
#define ARCHIE_CLAMPERL
#define ARCHIE_CLAMPERL_2
#define ARCHIE_RELICANTH
#define ARCHIE_LUVDISC
#define ARCHIE_BUIZEL
#define ARCHIE_SHELLOS_EAST
#define ARCHIE_SHELLOS_WEST
#define ARCHIE_FINNEON
#define ARCHIE_PANPOUR

#define ARCHIE_TYMPOLE(Level)                                     \
    {                                                             \
    TEAM_LEADER_SUPPORTING_MON(Level),                            \
    .species = Level < 36 ? SPECIES_TYMPOLE : SPECIES_SEISMITOAD, \
    .ability = ABILITY_SWIFT_SWIM,                                \
    .gender = TRAINER_MON_MALE,                                   \
    }

#define ARCHIE_BASCULIN_RED
#define ARCHIE_BASCULIN_BLUE
#define ARCHIE_BASCULIN_WHITE_MALE
#define ARCHIE_BASCULIN_WHITE_FEMALE
#define ARCHIE_TIRTOUGA
#define ARCHIE_DUCKLETT
#define ARCHIE_FRILLISH
#define ARCHIE_ALOMOMOLA
#define ARCHIE_CLAUNCHER
#define ARCHIE_WISHIWASHI
#define ARCHIE_DEWPIDER
#define ARCHIE_PYUKUMUKU
#define ARCHIE_BRUXISH
#define ARCHIE_CHEWTLE

#define ARCHIE_ARROKUDA(Level)                                      \
    {                                                               \
    TEAM_LEADER_SUPPORTING_MON(Level),                              \
    .species = Level < 26 ? SPECIES_ARROKUDA : SPECIES_BARRASKEWDA, \
    .ability = ABILITY_SWIFT_SWIM,                                  \
    .gender = TRAINER_MON_MALE,                                     \
    }

#define ARCHIE_DRACOVISH
#define ARCHIE_ARCTOVISH
#define ARCHIE_WIGLETT
#define ARCHIE_FINIZEN
#define ARCHIE_VELUZA
#define ARCHIE_DONDOZO


// Route 102
#define CALVIN_INFO             \
    .trainerName = _("Calvin"), \
    YOUNGSTER_INFO,             \
    MINI_BOSS_AI_FLAGS

#define LINUS(Level)                                             \
    .lvl = Level,                                                \
    .species = Level < 20 ? SPECIES_ZIGZAGOON : SPECIES_LINOONE, \
    .ability = ABILITY_GLUTTONY,                                 \
    .nature = NATURE_JOLLY,                                      \
    .gender = TRAINER_MON_MALE,                                  \
    .nickname = COMPOUND_STRING("Linus")

#define CALVIN_TAILLOW(Level, IVs)                                            \
    {                                                                         \
    .lvl = Level,                                                             \
    .species = Level < REMATCH_3_LEVEL_6 ? SPECIES_TAILLOW : SPECIES_SWELLOW, \
    .ability = ABILITY_GUTS,                                                  \
    IVS(IVs),                                                                 \
    .gender = TRAINER_MON_MALE,                                               \
    }

#define CALVIN_MIGHTYENA(Level, IVs) \
    {                                \
    .lvl = Level,                    \
    .species = SPECIES_MIGHTYENA,    \
    .ability = ABILITY_INTIMIDATE,   \
    IVS(IVs),                        \
    .gender = TRAINER_MON_MALE,      \
    }

// Extra for hacks
#define CALVIN_LICKITUNG(Level, IVs)                                               \
    {                                                                              \
    .lvl = Level,                                                                  \
    .species = Level < REMATCH_5_LEVEL_6 ? SPECIES_LICKITUNG : SPECIES_LICKILICKY, \
    .ability = ABILITY_OWN_TEMPO,                                                  \
    IVS(IVs),                                                                      \
    .gender = TRAINER_MON_MALE,                                                    \
    }

[DIFFICULTY_NORMAL][TRAINER_CALVIN_1] =
{
    CALVIN_INFO,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        LINUS(5),
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_CALVIN_2] =
{
    CALVIN_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        CALVIN_TAILLOW(REMATCH_2_LEVEL_2, 2),
        {
        LINUS(REMATCH_2_LEVEL_1),
        IVS(2),
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_CALVIN_3] =
{
    CALVIN_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        CALVIN_TAILLOW(REMATCH_3_LEVEL_2, 3),
        {
        LINUS(REMATCH_3_LEVEL_1),
        IVS(3),
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_CALVIN_4] =
{
    CALVIN_INFO,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        CALVIN_MIGHTYENA(REMATCH_4_LEVEL_2, 4),
        CALVIN_TAILLOW(REMATCH_4_LEVEL_2, 4),
        {
        LINUS(REMATCH_4_LEVEL_1),
        IVS(4),
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_CALVIN_5] =
{
    CALVIN_INFO,
    .partySize = 4,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = REMATCH_5_LEVEL_2,
        .species = SPECIES_FLYGON,
        IVS(5),
        .gender = TRAINER_MON_MALE,
        },
        CALVIN_MIGHTYENA(REMATCH_5_LEVEL_2, 5),
        CALVIN_TAILLOW(REMATCH_5_LEVEL_2, 5),
        {
        LINUS(REMATCH_5_MINI_BOSS),
        EV_SPREAD_ATK_SPE_HP,
        PERFECT_IVS,
        .moves = {MOVE_BODY_SLAM, MOVE_PLAY_ROUGH, MOVE_PIN_MISSILE, MOVE_HONE_CLAWS},
        .heldItem = ITEM_FIGY_BERRY,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_RICK] =
{
    .trainerName = _("Rick"),
    BUG_CATCHER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 4,
        .species = SPECIES_WURMPLE,
        },
        {
        .lvl = 4,
        .species = SPECIES_WURMPLE,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_ALLEN] =
{
    .trainerName = _("Allen"),
    YOUNGSTER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 4,
        .species = SPECIES_POOCHYENA,
        },
        {
        .lvl = 4,
        .species = SPECIES_TAILLOW,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_TIANA] =
{
    .trainerName = _("Tiana"),
    LASS_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 4,
        .species = SPECIES_ZIGZAGOON,
        },
        {
        .lvl = 4,
        .species = SPECIES_SHROOMISH,
        },
    },
},

// Route 104 (south)
#define WINSTON_INFO             \
    .trainerName = _("Winston"), \
    RICH_BOY_INFO,               \
    MINI_BOSS_AI_FLAGS

#define MR_ZIG(Level)                                            \
    RICH_BOY_MON(Level),                                         \
    .species = Level < 20 ? SPECIES_ZIGZAGOON : SPECIES_LINOONE, \
    .ability = ABILITY_QUICK_FEET,                               \
    .gender = TRAINER_MON_MALE,                                  \
    .nickname = COMPOUND_STRING("Mr. Zig")

#define MR_PIG(Level)                                                        \
    RICH_BOY_MON(Level),                                                     \
    .species = Level < REMATCH_3_LEVEL_6 ? SPECIES_SPOINK : SPECIES_GRUMPIG, \
    .ability = ABILITY_THICK_FAT,                                            \
    .gender = TRAINER_MON_MALE,                                              \
    .nickname = COMPOUND_STRING("Mr. Pig")

#define MR_DIG(Level)             \
    RICH_BOY_MON(Level),          \
    .species = Level < REMATCH_4_LEVEL_6 ? SPECIES_TRAPINCH : (Level < REMATCH_5_LEVEL_6 ? SPECIES_VIBRAVA : SPECIES_FLYGON), \
    .gender = TRAINER_MON_MALE,   \
    .nickname = COMPOUND_STRING("Mr. Dig")

#define MR_GIG(Level)                                                             \
    RICH_BOY_MON(Level),                                                          \
    .species = Level < REMATCH_5_LEVEL_6 ? SPECIES_GIRAFARIG : SPECIES_FARIGIRAF, \
    .ability = ABILITY_SAP_SIPPER,                                                \
    .gender = TRAINER_MON_MALE,                                                   \
    .nickname = COMPOUND_STRING("Mr. Gig")

// Extra for hacks
#define WINSTON_LITLEO

[DIFFICULTY_NORMAL][TRAINER_WINSTON_1] =
{
    WINSTON_INFO,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        MR_ZIG(8),
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_WINSTON_2] =
{
    WINSTON_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        MR_PIG(REMATCH_2_LEVEL_2),
        },
        {
        MR_ZIG(REMATCH_2_LEVEL_1),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_WINSTON_3] =
{
    WINSTON_INFO,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        MR_DIG(REMATCH_3_LEVEL_2),
        },
        {
        MR_PIG(REMATCH_3_LEVEL_2),
        },
        {
        MR_ZIG(REMATCH_3_LEVEL_1),
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_WINSTON_4] =
{
    WINSTON_INFO,
    .partySize = 4,
    .party = (const struct TrainerMon[]) {
        {
        MR_GIG(REMATCH_4_LEVEL_2),
        },
        {
        MR_DIG(REMATCH_4_LEVEL_2),
        },
        {
        MR_PIG(REMATCH_4_LEVEL_2),
        },
        {
        MR_ZIG(REMATCH_4_LEVEL_1),
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_WINSTON_5] =
{
    WINSTON_INFO,
    .partySize = 4,
    .party = (const struct TrainerMon[]) {
        {
        MR_GIG(REMATCH_5_LEVEL_2),
        IVS(24),
        .moves = {MOVE_TWIN_BEAM, MOVE_ENERGY_BALL, MOVE_SHADOW_BALL, MOVE_NASTY_PLOT},
        },
        {
        MR_DIG(REMATCH_5_LEVEL_2),
        IVS(24),
        .moves = {MOVE_DIG, MOVE_DRAGON_CLAW, MOVE_CRUNCH, MOVE_DRAGON_DANCE},
        },
        {
        MR_PIG(REMATCH_5_LEVEL_2),
        IVS(24),
        .moves = {MOVE_PSYCHIC, MOVE_POWER_GEM, MOVE_DAZZLING_GLEAM, MOVE_FLASH_CANNON},
        },
        {
        MR_ZIG(REMATCH_5_MINI_BOSS),
        PERFECT_IVS,
        .moves = {MOVE_BODY_SLAM, MOVE_PLAY_ROUGH, MOVE_SEED_BOMB, MOVE_HONE_CLAWS},
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_BILLY] =
{
    .trainerName = _("Billy"),
    YOUNGSTER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 6,
        .species = SPECIES_ZIGZAGOON,
        },
        {
        .lvl = 6,
        .species = SPECIES_NINCADA,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_DARIAN] =
{
    .trainerName = _("Darian"),
    FISHERMAN_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 9,
        .species = SPECIES_DARIAN,
        },
    },
},

// Petalburg Woods
[DIFFICULTY_NORMAL][TRAINER_LYLE] =
{
    .trainerName = _("Lyle"),
    BUG_CATCHER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 6,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 3,
        .species = SPECIES_WURMPLE,
        },
        {
        .lvl = 3,
        .species = SPECIES_WURMPLE,
        },
        {
        .lvl = 3,
        .species = SPECIES_WURMPLE,
        },
        {
        .lvl = 3,
        .species = SPECIES_WURMPLE,
        },
        {
        .lvl = 3,
        .species = SPECIES_WURMPLE,
        },
        {
        .lvl = 3,
        .species = SPECIES_WURMPLE,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_CASPIAN_PETALBURG_WOODS] =
{
    CASPIAN_INFO,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        CASPIAN_CARVANHA(8, AQUA_JET, RAGE, LEER),
    },
},

#define JAMES_INFO             \
    .trainerName = _("James"), \
    BUG_CATCHER_INFO,          \
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE

#define JAMES_NINCADA(Level, IVs)                              \
    {                                                          \
    .lvl = Level,                                              \
    .species = Level < 20 ? SPECIES_NINCADA : SPECIES_NINJASK, \
    .ability = 0,                                              \
    IVS(IVs),                                                  \
    .gender = TRAINER_MON_MALE,                                \
    }

#define JAMES_SHEDINJA(Level, IVs)   \
    {                                \
    .lvl = Level,                    \
    .species = SPECIES_SHEDINJA,     \
    .ability = ABILITY_WONDER_GUARD, \
    IVS(IVs),                        \
    .gender = TRAINER_MON_NONE,      \
    }

#define JAMES_DUSTOX(Level, IVs)    \
    {                               \
    .lvl = Level,                   \
    .species = SPECIES_DUSTOX,      \
    .ability = ABILITY_SHIELD_DUST, \
    IVS(IVs),                       \
    .gender = TRAINER_MON_MALE,     \
    }

#define JAMES_SURSKIT(Level, IVs)                                                \
    {                                                                            \
    .lvl = Level,                                                                \
    .species = Level < REMATCH_5_LEVEL_6 ? SPECIES_SURSKIT : SPECIES_MASQUERAIN, \
    .ability = 0,                                                                \
    IVS(IVs),                                                                    \
    .gender = TRAINER_MON_FEMALE,                                                \
    }

// Extra for hacks
#define JAMES_SPINARAK
#define JAMES_LEDYBA

[DIFFICULTY_NORMAL][TRAINER_JAMES_1] =
{
    JAMES_INFO,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        JAMES_NINCADA(8, 0),
    },
},

[DIFFICULTY_NORMAL][TRAINER_JAMES_2] =
{
    JAMES_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        JAMES_SHEDINJA(REMATCH_2_LEVEL_2, 2),
        JAMES_NINCADA(REMATCH_2_LEVEL_2, 2),
    },
},

[DIFFICULTY_NORMAL][TRAINER_JAMES_3] =
{
    JAMES_INFO,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        JAMES_DUSTOX(REMATCH_3_LEVEL_3, 3),
        JAMES_SHEDINJA(REMATCH_3_LEVEL_3, 3),
        JAMES_NINCADA(REMATCH_3_LEVEL_3, 3),
    },
},

[DIFFICULTY_NORMAL][TRAINER_JAMES_4] =
{
    JAMES_INFO,
    .partySize = 4,
    .party = (const struct TrainerMon[]) {
        JAMES_SURSKIT(REMATCH_4_LEVEL_4, 4),
        JAMES_DUSTOX(REMATCH_4_LEVEL_4, 4),
        JAMES_SHEDINJA(REMATCH_4_LEVEL_4, 4),
        JAMES_NINCADA(REMATCH_4_LEVEL_4, 4),
    },
},

[DIFFICULTY_NORMAL][TRAINER_JAMES_5] =
{
    JAMES_INFO,
    .partySize = 5,
    .party = (const struct TrainerMon[]) {
        JAMES_SURSKIT(REMATCH_5_LEVEL_5, 5),
        {
        .lvl = REMATCH_5_LEVEL_5,
        .species = SPECIES_BEAUTIFLY,
        IVS(5),
        .gender = TRAINER_MON_FEMALE,
        },
        JAMES_DUSTOX(REMATCH_5_LEVEL_5, 5),
        JAMES_SHEDINJA(REMATCH_5_LEVEL_5, 5),
        JAMES_NINCADA(REMATCH_5_LEVEL_5, 5),
    },
},

// Route 104 (north)
#define CINDY_INFO             \
    .trainerName = _("Cindy"), \
    LADY_INFO,                 \
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE

#define CINDY_ZIGZAGOON(Level)                                   \
    RICH_MON(Level),                                             \
    .species = Level < 20 ? SPECIES_ZIGZAGOON : SPECIES_LINOONE, \
    .ability = ABILITY_QUICK_FEET,                               \
    .gender = TRAINER_MON_FEMALE

// Extra for hacks
#define CINDY_LITLEO

[DIFFICULTY_NORMAL][TRAINER_CINDY_1] =
{
    CINDY_INFO,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        CINDY_ZIGZAGOON(8),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_CINDY_2] =
{
    CINDY_INFO,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        CINDY_ZIGZAGOON(REMATCH_2_LEVEL_1),
        IVS(2),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_CINDY_3] =
{
    CINDY_INFO,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        CINDY_ZIGZAGOON(REMATCH_3_LEVEL_1),
        IVS(3),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_CINDY_4] =
{
    CINDY_INFO,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        CINDY_ZIGZAGOON(REMATCH_4_LEVEL_1),
        IVS(4),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_CINDY_5] =
{
    CINDY_INFO,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        CINDY_ZIGZAGOON(REMATCH_5_LEVEL_1),
        IVS(5),
        .moves = {MOVE_HEADBUTT, MOVE_PLAY_ROUGH, MOVE_PIN_MISSILE, MOVE_BESTOW},
        }
    },
},

#define HALEY_INFO             \
    .trainerName = _("Haley"), \
    LASS_INFO,                 \
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE

#define HALEY_SHROOMISH(Level)                                   \
    .lvl = Level,                                                \
    .species = Level < 23 ? SPECIES_SHROOMISH : SPECIES_BRELOOM, \
    .ability = ABILITY_EFFECT_SPORE,                             \
    .gender = TRAINER_MON_FEMALE

#define HALEY_LOTAD(Level)                                                                                   \
    .lvl = Level,                                                                                            \
    .species = Level < 14 ? SPECIES_LOTAD : (Level < REMATCH_5_LEVEL_6 ? SPECIES_LOMBRE : SPECIES_LUDICOLO), \
    .ability = ABILITY_SWIFT_SWIM,                                                                           \
    .gender = TRAINER_MON_FEMALE

#define HALEY_TAILLOW(Level)                                                  \
    .lvl = Level,                                                             \
    .species = Level < REMATCH_4_LEVEL_6 ? SPECIES_TAILLOW : SPECIES_SWELLOW, \
    .gender = TRAINER_MON_FEMALE

// Extra for hacks
#define HALEY_COTTONEE

[DIFFICULTY_NORMAL][TRAINER_HALEY_1] =
{
    HALEY_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        HALEY_LOTAD(7),
        },
        {
        HALEY_SHROOMISH(7),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_HALEY_2] =
{
    HALEY_INFO,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        HALEY_TAILLOW(REMATCH_2_LEVEL_3),
        IVS(2),
        },
        {
        HALEY_LOTAD(REMATCH_2_LEVEL_3),
        IVS(2),
        },
        {
        HALEY_SHROOMISH(REMATCH_2_LEVEL_3),
        IVS(2),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_HALEY_3] =
{
    HALEY_INFO,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        HALEY_TAILLOW(REMATCH_3_LEVEL_3),
        IVS(3),
        },
        {
        HALEY_LOTAD(REMATCH_3_LEVEL_3),
        IVS(3),
        },
        {
        HALEY_SHROOMISH(REMATCH_3_LEVEL_3),
        IVS(3),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_HALEY_4] =
{
    HALEY_INFO,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        HALEY_TAILLOW(REMATCH_4_LEVEL_3),
        IVS(4),
        },
        {
        HALEY_LOTAD(REMATCH_4_LEVEL_3),
        IVS(4),
        },
        {
        HALEY_SHROOMISH(REMATCH_4_LEVEL_3),
        IVS(4),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_HALEY_5] =
{
    HALEY_INFO,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        HALEY_TAILLOW(REMATCH_5_LEVEL_3),
        IVS(5),
        },
        {
        HALEY_LOTAD(REMATCH_5_LEVEL_3),
        IVS(5),
        },
        {
        HALEY_SHROOMISH(REMATCH_5_LEVEL_3),
        IVS(5),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_GINA_AND_MIA] =
{
    .trainerName = _("Gina & Mia"),
    TWINS_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 7,
        .species = SPECIES_SEEDOT,
        },
        {
        .lvl = 7,
        .species = SPECIES_LOTAD,
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_IVAN] =
{
    .trainerName = _("Ivan"),
    FISHERMAN_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 6,
        .species = SPECIES_AZURILL,
        },
        {
        .lvl = 6,
        .species = SPECIES_LOTAD,
        },
        {
        .lvl = 6,
        .species = SPECIES_DUCKLETT,
        }
    },
},

// Route 116
[DIFFICULTY_NORMAL][TRAINER_JOSE] =
{
    .trainerName = _("José"),
    BUG_CATCHER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 8,
        .species = SPECIES_WURMPLE,
        IVS(6),
        },
        {
        .lvl = 8,
        .species = SPECIES_NINCADA,
        IVS(6),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_JOEY] =
{
    .trainerName = _("Joey"),
    YOUNGSTER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 9,
        .species = SPECIES_MACHOP,
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_JANICE] =
{
    .trainerName = _("Janice"),
    LASS_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 9,
        .species = SPECIES_AZURILL,
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_CLARK] =
{
    .trainerName = _("Clark"),
    HIKER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 9,
        .species = SPECIES_GEODUDE,
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_DEVAN] =
{
    .trainerName = _("Devan"),
    HIKER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 8,
        .species = SPECIES_GEODUDE,
        },
        {
        .lvl = 8,
        .species = SPECIES_GEODUDE,
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_JOHNSON] =
{
    .trainerName = _("Johnson"),
    YOUNGSTER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 8,
        .species = SPECIES_SHROOMISH,
        },
        {
        .lvl = 8,
        .species = SPECIES_SEEDOT,
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_DAWSON] =
{
    .trainerName = _("Dawson"),
    RICH_BOY_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        RICH_BOY_MON(8),
        .species = SPECIES_ABRA,
        },
        {
        RICH_BOY_MON(8),
        .species = SPECIES_EARLY_BEAST_2,
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_SARAH] =
{
    .trainerName = _("Sarah"),
    LADY_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        RICH_MON(8),
        .species = SPECIES_LOTAD,
        },
        {
        RICH_MON(8),
        .species = SPECIES_EARLY_BEAST_1,
        }
    },
},

#define JERRY_INFO             \
    .trainerName = _("Jerry"), \
    SCHOOLKID_M_INFO,          \
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE

#define JERRY_RALTS(Level)                                                                   \
    .lvl = Level,                                                                            \
    .species = Level < 20 ? SPECIES_RALTS : (Level < 30 ? SPECIES_KIRLIA : SPECIES_GALLADE), \
    .ability = 1,                                                                            \
    .gender = TRAINER_MON_MALE

#define JERRY_MEDITITE(Level)                                   \
    .lvl = Level,                                               \
    .species = Level < 37 ? SPECIES_MEDITITE: SPECIES_MEDICHAM, \
    .gender = TRAINER_MON_MALE

#define JERRY_SHUPPET(Level)                                                 \
    .lvl = Level,                                                            \
    .species = Level < REMATCH_4_LEVEL_6 ? SPECIES_SHUPPET: SPECIES_BANETTE, \
    .ability = ABILITY_INSOMNIA,                                             \
    .gender = TRAINER_MON_MALE

// Extra for hacks
#define JERRY_PAWNIARD(Level) \
    .lvl = Level,             \
    .species = Level < 35 ? SPECIES_PAWNIARD : (Level < REMATCH_5_LEVEL_6 ? SPECIES_BISHARP : SPECIES_KINGAMBIT), \
    .ability = 1,             \
    .gender = TRAINER_MON_MALE

[DIFFICULTY_NORMAL][TRAINER_JERRY_1] =
{
    JERRY_INFO,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        JERRY_RALTS(10),
        IVS(1),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_JERRY_2] =
{
    JERRY_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        JERRY_MEDITITE(REMATCH_2_LEVEL_2),
        IVS(2),
        },
        {
        JERRY_RALTS(REMATCH_2_LEVEL_2),
        IVS(2),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_JERRY_3] =
{
    JERRY_INFO,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        JERRY_SHUPPET(REMATCH_3_LEVEL_3),
        IVS(3),
        },
        {
        JERRY_MEDITITE(REMATCH_3_LEVEL_3),
        IVS(3),
        },
        {
        JERRY_RALTS(REMATCH_3_LEVEL_3),
        IVS(3),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_JERRY_4] =
{
    JERRY_INFO,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        JERRY_SHUPPET(REMATCH_4_LEVEL_3),
        IVS(4),
        },
        {
        JERRY_MEDITITE(REMATCH_4_LEVEL_3),
        IVS(4),
        },
        {
        JERRY_RALTS(REMATCH_4_LEVEL_3),
        IVS(4),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_JERRY_5] =
{
    JERRY_INFO,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        JERRY_SHUPPET(REMATCH_5_LEVEL_3),
        IVS(5),
        },
        {
        JERRY_MEDITITE(REMATCH_5_LEVEL_3),
        IVS(5),
        },
        {
        JERRY_RALTS(REMATCH_5_LEVEL_3),
        IVS(6),
        }
    },
},

#define KAREN_INFO             \
    .trainerName = _("Karen"), \
    SCHOOLKID_F_INFO,          \
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE

#define KAREN_SHROOMISH(Level)                                   \
    .lvl = Level,                                                \
    .species = Level < 23 ? SPECIES_SHROOMISH : SPECIES_BRELOOM, \
    .ability = ABILITY_POISON_HEAL,                              \
    .gender = TRAINER_MON_FEMALE

#define KAREN_WHISMUR(Level)                                                                    \
    .lvl = Level,                                                                               \
    .species = Level < 20 ? SPECIES_WHISMUR : (Level < 40 ? SPECIES_LOUDRED : SPECIES_EXPLOUD), \
    .ability = ABILITY_SOUNDPROOF,                                                              \
    .gender = TRAINER_MON_FEMALE

#define KAREN_SKITTY(Level)                                                   \
    .lvl = Level,                                                             \
    .species = Level < REMATCH_4_LEVEL_6 ? SPECIES_SKITTY : SPECIES_DELCATTY, \
    .ability = ABILITY_NORMALIZE,                                             \
    .gender = TRAINER_MON_FEMALE

// Extra for hacks
#define KAREN_SEEL

[DIFFICULTY_NORMAL][TRAINER_KAREN_1] =
{
    KAREN_INFO,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        KAREN_SHROOMISH(10),
        IVS(1),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_KAREN_2] =
{
    KAREN_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        KAREN_WHISMUR(REMATCH_2_LEVEL_2),
        IVS(2),
        },
        {
        KAREN_SHROOMISH(REMATCH_2_LEVEL_2),
        IVS(2),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_KAREN_3] =
{
    KAREN_INFO,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        KAREN_SKITTY(REMATCH_3_LEVEL_3),
        IVS(3),
        },
        {
        KAREN_WHISMUR(REMATCH_3_LEVEL_3),
        IVS(3),
        },
        {
        KAREN_SHROOMISH(REMATCH_3_LEVEL_3),
        IVS(3),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_KAREN_4] =
{
    KAREN_INFO,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        KAREN_SKITTY(REMATCH_4_LEVEL_3),
        IVS(4),
        },
        {
        KAREN_WHISMUR(REMATCH_4_LEVEL_3),
        IVS(4),
        },
        {
        KAREN_SHROOMISH(REMATCH_4_LEVEL_3),
        IVS(4),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_KAREN_5] =
{
    KAREN_INFO,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        KAREN_SKITTY(REMATCH_5_LEVEL_3),
        IVS(5),
        },
        {
        KAREN_WHISMUR(REMATCH_5_LEVEL_3),
        IVS(5),
        },
        {
        KAREN_SHROOMISH(REMATCH_5_LEVEL_3),
        IVS(5),
        }
    },
},

// Rustboro Gym
[DIFFICULTY_NORMAL][TRAINER_JOSH] =
{
    .trainerName = _("Josh"),
    YOUNGSTER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 11,
        .species = SPECIES_SNUBBULL,
        IVS(12),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_TOMMY] =
{
    .trainerName = _("Tommy"),
    SCHOOLKID_M_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 9,
        .species = SPECIES_AZURILL,
        IVS(13),
        },
        {
        .lvl = 9,
        .species = SPECIES_SWIRLIX,
        IVS(14),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_MARCIA] =
{
    .trainerName = _("Marcia"),
    LASS_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 9,
        .species = SPECIES_IGGLYBUFF,
        IVS(14),
        },
        {
        .lvl = 9,
        .species = SPECIES_FIDOUGH,
        IVS(15),
        }
    },
},

// Rusturf Tunnel
[DIFFICULTY_NORMAL][TRAINER_CASPIAN_RUSTURF_TUNNEL] =
{
    CASPIAN_INFO,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        CASPIAN_CARVANHA(13, AQUA_JET, RAGE, SCARY_FACE),
    },
},

// Route 106 (land)
[DIFFICULTY_NORMAL][TRAINER_NED] =
{
    .trainerName = _("Ned"),
    FISHERMAN_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 14,
        .species = SPECIES_TENTACOOL,
        IVS(1),
        }
    },
},

#define ELLIOT_INFO             \
    .trainerName = _("Elliot"), \
    FISHERMAN_INFO,             \
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT

#define ELLIOT_WAILMER(Level)                                  \
    .lvl = Level,                                              \
    .species = Level < 40 ? SPECIES_WAILMER : SPECIES_WAILORD, \
    .ability = ABILITY_OBLIVIOUS,                              \
    .gender = TRAINER_MON_MALE

#define ELLIOT_TENTACOOL(Level)                                     \
    .lvl = Level,                                                   \
    .species = Level < 30 ? SPECIES_TENTACOOL : SPECIES_TENTACRUEL, \
    .ability = ABILITY_CLEAR_BODY,                                  \
    .gender = TRAINER_MON_MALE

#define ELLIOT_MAGIKARP(Level)                                   \
    .lvl = Level,                                                \
    .species = Level < 20 ? SPECIES_MAGIKARP : SPECIES_GYARADOS, \
    .gender = TRAINER_MON_MALE

#define ELLIOT_CARVANHA(Level)                                                  \
    .lvl = Level,                                                               \
    .species = Level < REMATCH_3_LEVEL_6 ? SPECIES_CARVANHA : SPECIES_SHARPEDO, \
    .gender = TRAINER_MON_MALE

#define ELLIOT_BARBOACH(Level)                                                  \
    .lvl = Level,                                                               \
    .species = Level < REMATCH_3_LEVEL_6 ? SPECIES_BARBOACH : SPECIES_WHISCASH, \
    .ability = ABILITY_OBLIVIOUS,                                               \
    .gender = TRAINER_MON_MALE

// Extra for hacks
#define ELLIOT_REMORAID

[DIFFICULTY_NORMAL][TRAINER_ELLIOT_1] =
{
    ELLIOT_INFO,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        ELLIOT_MAGIKARP(13),
        },
        {
        ELLIOT_TENTACOOL(13),
        },
        {
        ELLIOT_WAILMER(13),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_ELLIOT_2] =
{
    ELLIOT_INFO,
    .partySize = 5,
    .party = (const struct TrainerMon[]) {
        {
        ELLIOT_BARBOACH(REMATCH_2_LEVEL_5),
        IVS(2),
        },
        {
        ELLIOT_CARVANHA(REMATCH_2_LEVEL_5),
        IVS(2),
        },
        {
        ELLIOT_MAGIKARP(REMATCH_2_LEVEL_5),
        IVS(2),
        },
        {
        ELLIOT_TENTACOOL(REMATCH_2_LEVEL_5),
        IVS(2),
        },
        {
        ELLIOT_WAILMER(REMATCH_2_LEVEL_5),
        IVS(2),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_ELLIOT_3] =
{
    ELLIOT_INFO,
    .partySize = 5,
    .party = (const struct TrainerMon[]) {
        {
        ELLIOT_BARBOACH(REMATCH_3_LEVEL_5),
        IVS(3),
        },
        {
        ELLIOT_CARVANHA(REMATCH_3_LEVEL_5),
        IVS(3),
        },
        {
        ELLIOT_MAGIKARP(REMATCH_3_LEVEL_5),
        IVS(3),
        },
        {
        ELLIOT_TENTACOOL(REMATCH_3_LEVEL_5),
        IVS(3),
        },
        {
        ELLIOT_WAILMER(REMATCH_3_LEVEL_5),
        IVS(3),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_ELLIOT_4] =
{
    ELLIOT_INFO,
    .partySize = 5,
    .party = (const struct TrainerMon[]) {
        {
        ELLIOT_BARBOACH(REMATCH_4_LEVEL_5),
        IVS(4),
        },
        {
        ELLIOT_CARVANHA(REMATCH_4_LEVEL_5),
        IVS(4),
        },
        {
        ELLIOT_MAGIKARP(REMATCH_4_LEVEL_5),
        IVS(4),
        },
        {
        ELLIOT_TENTACOOL(REMATCH_4_LEVEL_5),
        IVS(4),
        },
        {
        ELLIOT_WAILMER(REMATCH_4_LEVEL_5),
        IVS(4),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_ELLIOT_5] =
{
    ELLIOT_INFO,
    .partySize = 5,
    .party = (const struct TrainerMon[]) {
        {
        ELLIOT_BARBOACH(REMATCH_5_LEVEL_5),
        IVS(5),
        },
        {
        ELLIOT_CARVANHA(REMATCH_5_LEVEL_5),
        IVS(5),
        },
        {
        ELLIOT_MAGIKARP(REMATCH_5_LEVEL_5),
        IVS(5),
        },
        {
        ELLIOT_TENTACOOL(REMATCH_5_LEVEL_5),
        IVS(5),
        },
        {
        ELLIOT_WAILMER(REMATCH_5_LEVEL_5),
        IVS(5),
        }
    },
},

// Dewford Gym
[DIFFICULTY_NORMAL][TRAINER_LAURA] =
{
    .trainerName = _("Amelia"),
    HEX_MANIAC_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 15,
        .species = SPECIES_ORICORIO_SENSU,
        IVS(18),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_LILITH] =
{
    .trainerName = _("Gracie"),
    HEX_MANIAC_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 15,
        .species = SPECIES_LITWICK,
        IVS(18),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_BRENDEN] =
{
    .trainerName = _("Brenden"),
    SAILOR_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 13,
        .species = SPECIES_DHELMISE,
        IVS(15),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_TAKAO] =
{
    .trainerName = _("Jalen"),
    PSYCHIC_M_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 15,
        .species = SPECIES_GOLETT,
        IVS(12),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_CRISTIAN] =
{
    .trainerName = _("Derek"),
    PSYCHIC_M_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 15,
        .species = SPECIES_DUSKULL,
        IVS(24),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_JOCELYN] =
{
    .trainerName = _("Amanda"),
    HEX_MANIAC_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 15,
        .species = SPECIES_SABLEYE,
        IVS(15),
        }
    },
},

// Route 109 (land)
[DIFFICULTY_NORMAL][TRAINER_HUEY] =
{
    .trainerName = _("Huey"),
    SAILOR_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 16,
        .species = SPECIES_WINGULL,
        IVS(1),
        },
        {
        .lvl = 16,
        .species = SPECIES_MACHOP,
        IVS(1),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_EDMOND] =
{
    .trainerName = _("Edmond"),
    SAILOR_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 17,
        .species = SPECIES_BARBOACH,
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_HAILEY] =
{
    .trainerName = _("Hailey"),
    TUBER_F_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 17,
        .species = SPECIES_AZURILL,
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_CHANDLER] =
{
    .trainerName = _("Chandler"),
    TUBER_M_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 16,
        .species = SPECIES_TENTACOOL,
        },
        {
        .lvl = 16,
        .species = SPECIES_TENTACOOL,
        }
    },
},

#define LOLA_INFO             \
    .trainerName = _("Lola"), \
    TUBER_F_INFO,             \
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE

#define LOLA_MARILL(Level)                                                     \
    .lvl = Level,                                                              \
    .species = Level < REMATCH_2_LEVEL_6 ? SPECIES_MARILL : SPECIES_AZUMARILL, \
    .ability = ABILITY_THICK_FAT,                                              \
    .gender = TRAINER_MON_FEMALE

#define LOLA_WAILMER(Level)        \
    .ability = ABILITY_WATER_VEIL, \
    .gender = TRAINER_MON_FEMALE

[DIFFICULTY_NORMAL][TRAINER_LOLA_1] =
{
    LOLA_INFO,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        LOLA_MARILL(18),
        IVS(1),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_LOLA_2] =
{
    LOLA_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        LOLA_WAILMER(REMATCH_2_LEVEL_2),
        IVS(2),
        },
        {
        LOLA_MARILL(REMATCH_2_LEVEL_2),
        IVS(2),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_LOLA_3] =
{
    LOLA_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        LOLA_WAILMER(REMATCH_3_LEVEL_2),
        IVS(3),
        },
        {
        LOLA_MARILL(REMATCH_3_LEVEL_2),
        IVS(3),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_LOLA_4] =
{
    LOLA_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        LOLA_WAILMER(REMATCH_4_LEVEL_2),
        IVS(4),
        },
        {
        LOLA_MARILL(REMATCH_4_LEVEL_2),
        IVS(4),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_LOLA_5] =
{
    LOLA_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        LOLA_WAILMER(REMATCH_5_LEVEL_2),
        IVS(5),
        },
        {
        LOLA_MARILL(REMATCH_5_LEVEL_2),
        IVS(5),
        }
    },
},

#define RICKY_INFO             \
    .trainerName = _("Ricky"), \
    TUBER_M_INFO,              \
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE

#define RICKY_ZIGZAGOON(Level)                                               \
    .lvl = Level,                                                            \
    .species = Level < 20 ? SPECIES_ZIGZAGOON : SPECIES_LINOONE,             \
    .ability = ABILITY_GLUTTONY,                                             \
    .moves = {MOVE_SURF, MOVE_HEADBUTT, MOVE_PIN_MISSILE, MOVE_SAND_ATTACK}, \
    .gender = TRAINER_MON_MALE

#define RICKY_LOMBRE(Level, Move2, Move3)                                     \
    .lvl = Level,                                                             \
    .species = Level < REMATCH_3_LEVEL_6 ? SPECIES_LOMBRE : SPECIES_LUDICOLO, \
    .ability = ABILITY_SWIFT_SWIM,                                            \
    .moves = {MOVE_SURF, MOVE_##Move2, MOVE_##Move3, MOVE_FAKE_OUT},          \
    .gender = TRAINER_MON_MALE

[DIFFICULTY_NORMAL][TRAINER_RICKY_1] =
{
    RICKY_INFO,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        RICKY_ZIGZAGOON(18),
        IVS(1),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_RICKY_2] =
{
    RICKY_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        RICKY_LOMBRE(REMATCH_2_LEVEL_2, MEGA_DRAIN, TEETER_DANCE),
        IVS(2),
        },
        {
        RICKY_ZIGZAGOON(REMATCH_2_LEVEL_2),
        IVS(2),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_RICKY_3] =
{
    RICKY_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        RICKY_LOMBRE(REMATCH_3_LEVEL_2, GIGA_DRAIN, NATURE_POWER),
        IVS(3),
        },
        {
        RICKY_ZIGZAGOON(REMATCH_3_LEVEL_2),
        IVS(3),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_RICKY_4] =
{
    RICKY_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        RICKY_LOMBRE(REMATCH_4_LEVEL_2, GIGA_DRAIN, NATURE_POWER),
        IVS(4),
        },
        {
        RICKY_ZIGZAGOON(REMATCH_4_LEVEL_2),
        IVS(4),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_RICKY_5] =
{
    RICKY_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        RICKY_LOMBRE(REMATCH_5_LEVEL_2, GIGA_DRAIN, NATURE_POWER),
        IVS(5),
        },
        {
        RICKY_ZIGZAGOON(REMATCH_5_LEVEL_2),
        IVS(5),
        }
    },
},

// Seashore House
[DIFFICULTY_NORMAL][TRAINER_SIMON] =
{
    .trainerName = _("Simon"),
    TUBER_M_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 16,
        .species = SPECIES_MARILL,
        },
        {
        .lvl = 16,
        .species = SPECIES_MARILL,
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_JOHANNA] =
{
    .trainerName = _("Johanna"),
    BEAUTY_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 17,
        .species = SPECIES_GOLDEEN,
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_DWAYNE] =
{
    .trainerName = _("Dwayne"),
    SAILOR_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 15,
        .species = SPECIES_WINGULL,
        },
        {
        .lvl = 15,
        .species = SPECIES_MACHOP,
        },
        {
        .lvl = 15,
        .species = SPECIES_TENTACOOL,
        }
    },
},

// Oceanic Museum
MALIK_BATTLE(MUSEUM, CAP_MUSEUM - 2),
MARINA_BATTLE(MUSEUM, CAP_MUSEUM - 2),

[DIFFICULTY_NORMAL][TRAINER_ARCHIE_MUSEUM] =
{
    ARCHIE_INFO,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        ARCHIE_TENTACOOL(CAP_MUSEUM - 2),
        ARCHIE_WAILMER(CAP_MUSEUM - 2),
        {
        FINNEAS(CAP_MUSEUM),
        .moves = {MOVE_AQUA_JET, MOVE_BITE, MOVE_POISON_FANG, MOVE_FOCUS_ENERGY},
        }
    },
},

// Route 110
#define ISABEL_INFO                    \
    .trainerName = _("Isabel"),        \
    POKE_FAN_F_INFO,                   \
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE, \
    .partySize = 2

#define ISABEL_MINUN(Level)   \
    POKE_FAN_MON(Level),      \
    .species = SPECIES_MINUN, \
    .gender = TRAINER_MON_FEMALE

#define ISABEL_PLUSLE(Level)   \
    POKE_FAN_MON(Level),       \
    .species = SPECIES_PLUSLE, \
    .gender = TRAINER_MON_FEMALE

[DIFFICULTY_NORMAL][TRAINER_ISABEL_1] =
{
    ISABEL_INFO,
    .party = (const struct TrainerMon[]) {
        {
        ISABEL_PLUSLE(17),
        },
        {
        ISABEL_MINUN(17),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_ISABEL_2] =
{
    ISABEL_INFO,
    .party = (const struct TrainerMon[]) {
        {
        ISABEL_PLUSLE(REMATCH_2_LEVEL_2),
        IVS(2),
        },
        {
        ISABEL_MINUN(REMATCH_2_LEVEL_2),
        IVS(2),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_ISABEL_3] =
{
    ISABEL_INFO,
    .party = (const struct TrainerMon[]) {
        {
        ISABEL_PLUSLE(REMATCH_3_LEVEL_2),
        IVS(3),
        },
        {
        ISABEL_MINUN(REMATCH_3_LEVEL_2),
        IVS(3),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_ISABEL_4] =
{
    ISABEL_INFO,
    .party = (const struct TrainerMon[]) {
        {
        ISABEL_PLUSLE(REMATCH_4_LEVEL_2),
        IVS(4),
        },
        {
        ISABEL_MINUN(REMATCH_4_LEVEL_2),
        IVS(4),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_ISABEL_5] =
{
    ISABEL_INFO,
    .party = (const struct TrainerMon[]) {
        {
        ISABEL_PLUSLE(REMATCH_5_LEVEL_2),
        IVS(5),
        },
        {
        ISABEL_MINUN(REMATCH_5_LEVEL_2),
        IVS(5),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_KALEB] =
{
    .trainerName = _("Kaleb"),
    POKE_FAN_M_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        POKE_FAN_MON(17),
        .species = SPECIES_MINUN,
        .gender = TRAINER_MON_MALE,
        },
        {
        POKE_FAN_MON(17),
        .species = SPECIES_PLUSLE,
        .gender = TRAINER_MON_MALE,
        }
    },
},

// Trick House 1
[DIFFICULTY_NORMAL][TRAINER_SALLY] =
{
    .trainerName = _("Sally"),
    LASS_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 18,
        .species = SPECIES_ODDISH,
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_ROBIN] =
{
    .trainerName = _("Robin"),
    LASS_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 16,
        .species = SPECIES_SKITTY,
        },
        {
        .lvl = 16,
        .species = SPECIES_SHROOMISH,
        },
        {
        .lvl = 16,
        .species = SPECIES_MARILL,
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_EDDIE] =
{
    .trainerName = _("Eddie"),
    YOUNGSTER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 17,
        .species = SPECIES_POOCHYENA,
        },
        {
        .lvl = 17,
        .species = SPECIES_ZIGZAGOON,
        }
    },
},

// Route 103
[DIFFICULTY_NORMAL][TRAINER_DAISY] =
{
    .trainerName = _("Daisy"),
    AROMA_LADY_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 17,
        .species = SPECIES_SHROOMISH,
        },
        {
        .lvl = 17,
        .species = SPECIES_ROSELIA,
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_MARCOS] =
{
    .trainerName = _("Marcos"),
    GUITARIST_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 18,
        .species = SPECIES_VOLTORB,
        IVS(12),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_RHETT] =
{
    .trainerName = _("Rhett"),
    BLACK_BELT_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 18,
        .species = SPECIES_MAKUHITA,
        IVS(12),
        }
    },
},

#define AMY_AND_LIV_INFO               \
    .trainerName = _("Amy & Liv"),     \
    TWINS_INFO,                        \
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE, \
    .partySize = 2

#define AMY_MINUN(Level)      \
    .lvl = Level,             \
    .species = SPECIES_MINUN, \
    .gender = TRAINER_MON_FEMALE

#define LIV_PLUSLE(Level)      \
    .lvl = Level,              \
    .species = SPECIES_PLUSLE, \
    .gender = TRAINER_MON_FEMALE

[DIFFICULTY_NORMAL][TRAINER_AMY_AND_LIV_1] =
{
    AMY_AND_LIV_INFO,
    .party = (const struct TrainerMon[]) {
        {
        LIV_PLUSLE(17),
        },
        {
        AMY_MINUN(17),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_AMY_AND_LIV_2] =
{
    AMY_AND_LIV_INFO,
    .party = (const struct TrainerMon[]) {
        {
        LIV_PLUSLE(REMATCH_2_LEVEL_2),
        IVS(2),
        },
        {
        AMY_MINUN(REMATCH_2_LEVEL_2),
        IVS(2),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_AMY_AND_LIV_3] =
{
    AMY_AND_LIV_INFO,
    .party = (const struct TrainerMon[]) {
        {
        LIV_PLUSLE(REMATCH_3_LEVEL_2),
        IVS(3),
        },
        {
        AMY_MINUN(REMATCH_3_LEVEL_2),
        IVS(3),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_AMY_AND_LIV_4] =
{
    AMY_AND_LIV_INFO,
    .party = (const struct TrainerMon[]) {
        {
        LIV_PLUSLE(REMATCH_4_LEVEL_2),
        IVS(4),
        .moves = {MOVE_SHOCK_WAVE, MOVE_CHARGE, MOVE_FAKE_TEARS, MOVE_HELPING_HAND},
        },
        {
        AMY_MINUN(REMATCH_4_LEVEL_2),
        IVS(4),
        .moves = {MOVE_SHOCK_WAVE, MOVE_CHARGE, MOVE_CHARM, MOVE_HELPING_HAND},
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_AMY_AND_LIV_5] =
{
    AMY_AND_LIV_INFO,
    .party = (const struct TrainerMon[]) {
        {
        LIV_PLUSLE(REMATCH_5_LEVEL_2),
        IVS(5),
        .moves = {MOVE_THUNDERBOLT, MOVE_CHARGE, MOVE_FAKE_TEARS, MOVE_HELPING_HAND},
        },
        {
        AMY_MINUN(REMATCH_5_LEVEL_2),
        IVS(5),
        .moves = {MOVE_THUNDERBOLT, MOVE_CHARGE, MOVE_CHARM, MOVE_HELPING_HAND},
        }
    },
},

#define MIGUEL_INFO                    \
    .trainerName = _("Miguel"),        \
    POKE_FAN_M_INFO,                   \
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE, \
    .partySize = 1

#define MIGUEL_SKITTY(Level)                                                  \
    POKE_FAN_MON(Level),                                                      \
    .species = Level < REMATCH_2_LEVEL_6 ? SPECIES_SKITTY : SPECIES_DELCATTY, \
    .ability = ABILITY_CUTE_CHARM,                                            \
    .gender = TRAINER_MON_FEMALE

#define MIGUEL_IGGLYBUFF(Level)                                               \
    POKE_FAN_MON(Level),                                                      \
    .species = Level < REMATCH_3_LEVEL_6 ? SPECIES_IGGLYBUFF : (Level < REMATCH_4_LEVEL_6 ? SPECIES_JIGGLYPUFF : SPECIES_WIGGLYTUFF), \
    .ability = ABILITY_CUTE_CHARM,                                            \
    .gender = TRAINER_MON_MALE

#define MIGUEL_CASTFORM(Level)   \
    POKE_FAN_MON(Level),         \
    .species = SPECIES_CASTFORM, \
    .gender = TRAINER_MON_MALE

[DIFFICULTY_NORMAL][TRAINER_MIGUEL_1] =
{
    MIGUEL_INFO,
    .party = (const struct TrainerMon[]) {
        {
        MIGUEL_SKITTY(18),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_MIGUEL_2] =
{
    MIGUEL_INFO,
    .party = (const struct TrainerMon[]) {
        {
        MIGUEL_IGGLYBUFF(REMATCH_2_LEVEL_2),
        },
        {
        MIGUEL_SKITTY(REMATCH_2_LEVEL_2),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_MIGUEL_3] =
{
    MIGUEL_INFO,
    .party = (const struct TrainerMon[]) {
        {
        MIGUEL_CASTFORM(REMATCH_3_LEVEL_3),
        },
        {
        MIGUEL_IGGLYBUFF(REMATCH_3_LEVEL_3),
        },
        {
        MIGUEL_SKITTY(REMATCH_3_LEVEL_3),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_MIGUEL_4] =
{
    MIGUEL_INFO,
    .party = (const struct TrainerMon[]) {
        {
        MIGUEL_CASTFORM(REMATCH_4_LEVEL_3),
        },
        {
        MIGUEL_IGGLYBUFF(REMATCH_4_LEVEL_3),
        },
        {
        MIGUEL_SKITTY(REMATCH_4_LEVEL_3),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_MIGUEL_5] =
{
    MIGUEL_INFO,
    .party = (const struct TrainerMon[]) {
        {
        MIGUEL_CASTFORM(REMATCH_5_LEVEL_3),
        },
        {
        MIGUEL_IGGLYBUFF(REMATCH_5_LEVEL_3),
        },
        {
        MIGUEL_SKITTY(REMATCH_5_LEVEL_3),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_ANDREW] =
{
    .trainerName = _("Andrew"),
    FISHERMAN_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 16,
        .species = SPECIES_MAGIKARP,
        },
        {
        .lvl = 16,
        .species = SPECIES_TENTACOOL,
        },
        {
        .lvl = 16,
        .species = SPECIES_MAGIKARP,
        }
    },
},

// Route 110
[DIFFICULTY_NORMAL][TRAINER_TIMMY] =
{
    .trainerName = _("Timmy"),
    YOUNGSTER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 17,
        .species = SPECIES_ARON,
        },
        {
        .lvl = 17,
        .species = SPECIES_ELECTRIKE,
        }
    },
},

#define EDWIN_INFO                     \
    .trainerName = _("Edwin"),         \
    COLLECTOR_INFO,                    \
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE

#define EDWIN_NUZLEAF(Level)                                                  \
    .lvl = Level,                                                             \
    .species = Level < REMATCH_5_LEVEL_6 ? SPECIES_NUZLEAF : SPECIES_SHIFTRY, \
    .ability = ABILITY_CHLOROPHYLL,                                           \
    .gender = TRAINER_MON_MALE

#define EDWIN_LOMBRE(Level)                                                   \
    .lvl = Level,                                                             \
    .species = Level < REMATCH_5_LEVEL_6 ? SPECIES_LOMBRE : SPECIES_LUDICOLO, \
    .ability = ABILITY_SWIFT_SWIM,                                            \
    .gender = TRAINER_MON_MALE

#define EDWIN_ZANGOOSE(Level)       \
    .lvl = Level,                   \
    .species = SPECIES_ZANGOOSE,    \
    .ability = ABILITY_POISON_HEAL, \
    .gender = TRAINER_MON_MALE

#define EDWIN_SEVIPER(Level)    \
    .lvl = Level,               \
    .species = SPECIES_SEVIPER, \
    .gender = TRAINER_MON_MALE

#define EDWIN_MAWILE(Level)          \
    .lvl = Level,                    \
    .species = SPECIES_MAWILE,       \
    .ability = ABILITY_HYPER_CUTTER, \
    .gender = TRAINER_MON_MALE

#define EDWIN_SABLEYE(Level)    \
    .lvl = Level,               \
    .species = SPECIES_SABLEYE, \
    .gender = TRAINER_MON_MALE

[DIFFICULTY_NORMAL][TRAINER_EDWIN_1] =
{
    EDWIN_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        EDWIN_LOMBRE(18),
        },
        {
        EDWIN_NUZLEAF(18),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_EDWIN_2] =
{
    EDWIN_INFO,
    .partySize = 4,
    .party = (const struct TrainerMon[]) {
        {
        EDWIN_SEVIPER(REMATCH_2_LEVEL_4),
        },
        {
        EDWIN_ZANGOOSE(REMATCH_2_LEVEL_4),
        },
        {
        EDWIN_LOMBRE(REMATCH_2_LEVEL_4),
        },
        {
        EDWIN_NUZLEAF(REMATCH_2_LEVEL_4),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_EDWIN_3] =
{
    EDWIN_INFO,
    .partySize = 6,
    .party = (const struct TrainerMon[]) {
        {
        EDWIN_SABLEYE(REMATCH_3_LEVEL_6),
        },
        {
        EDWIN_MAWILE(REMATCH_3_LEVEL_6),
        },
        {
        EDWIN_SEVIPER(REMATCH_3_LEVEL_6),
        },
        {
        EDWIN_ZANGOOSE(REMATCH_3_LEVEL_6),
        },
        {
        EDWIN_LOMBRE(REMATCH_3_LEVEL_6),
        },
        {
        EDWIN_NUZLEAF(REMATCH_3_LEVEL_6),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_EDWIN_4] =
{
    EDWIN_INFO,
    .partySize = 6,
    .party = (const struct TrainerMon[]) {
        {
        EDWIN_SABLEYE(REMATCH_4_LEVEL_6),
        },
        {
        EDWIN_MAWILE(REMATCH_4_LEVEL_6),
        },
        {
        EDWIN_SEVIPER(REMATCH_4_LEVEL_6),
        },
        {
        EDWIN_ZANGOOSE(REMATCH_4_LEVEL_6),
        },
        {
        EDWIN_LOMBRE(REMATCH_4_LEVEL_6),
        },
        {
        EDWIN_NUZLEAF(REMATCH_4_LEVEL_6),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_EDWIN_5] =
{
    EDWIN_INFO,
    .partySize = 6,
    .party = (const struct TrainerMon[]) {
        {
        EDWIN_SABLEYE(REMATCH_5_LEVEL_6),
        },
        {
        EDWIN_MAWILE(REMATCH_5_LEVEL_6),
        },
        {
        EDWIN_SEVIPER(REMATCH_5_LEVEL_6),
        },
        {
        EDWIN_ZANGOOSE(REMATCH_5_LEVEL_6),
        },
        {
        EDWIN_LOMBRE(REMATCH_5_LEVEL_6),
        },
        {
        EDWIN_NUZLEAF(REMATCH_5_LEVEL_6),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_JOSEPH] =
{
    .trainerName = _("Joseph"),
    GUITARIST_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 18,
        .species = SPECIES_ELECTRIKE,
        },
        {
        .lvl = 18,
        .species = SPECIES_VOLTORB,
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_EDWARD] =
{
    .trainerName = _("Edward"),
    PSYCHIC_M_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 19,
        .species = SPECIES_KADABRA,
        .moves = {MOVE_PSYBEAM, MOVE_HIDDEN_POWER, MOVE_NONE, MOVE_NONE}
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_ALYSSA] =
{
    .trainerName = _("Alyssa"),
    TRIATHLETE_F_CYCLING_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        TRIATHLETE_MON(19, 0),
        .species = SPECIES_KLINK,
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_DALE] =
{
    .trainerName = _("Dale"),
    FISHERMAN_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 4,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 16,
        .species = SPECIES_TENTACOOL,
        },
        {
        .lvl = 16,
        .species = SPECIES_WAILMER,
        },
        {
        .lvl = 16,
        .species = SPECIES_TENTACOOL,
        },
        {
        .lvl = 16,
        .species = SPECIES_WAILMER,
        }
    },
},

// Route 117
#define DYLAN_INFO             \
    .trainerName = _("Dylan"), \
    TRIATHLETE_M_RUNNING_INFO, \
    MINI_BOSS_AI_FLAGS

#define DYLAN_DODUO(Level, IV)                              \
    TRIATHLETE_MON(Level, IV),                              \
    .species = Level < 31 ? SPECIES_DODUO : SPECIES_DODRIO, \
    .ability = ABILITY_TANGLED_FEET,                        \
    .gender = TRAINER_MON_MALE

// Extra for hacks
#define DYLAN_GROWLITHE

[DIFFICULTY_NORMAL][TRAINER_DYLAN_1] =
{
    DYLAN_INFO,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        DYLAN_DODUO(21, 1),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_DYLAN_2] =
{
    DYLAN_INFO,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        DYLAN_DODUO(REMATCH_2_LEVEL_1, 2),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_DYLAN_3] =
{
    DYLAN_INFO,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        DYLAN_DODUO(REMATCH_3_LEVEL_1, 3),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_DYLAN_4] =
{
    DYLAN_INFO,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        DYLAN_DODUO(REMATCH_4_LEVEL_1, 4),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_DYLAN_5] =
{
    DYLAN_INFO,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        TRIATHLETE_MON(REMATCH_5_LEVEL_2, 5),
        .species = SPECIES_ELECTRODE,
        },
        {
        TRIATHLETE_MON(REMATCH_5_LEVEL_2, 5),
        .species = SPECIES_SHARPEDO,
        },
        {
        DYLAN_DODUO(REMATCH_5_MINI_BOSS, 5),
        .moves = {MOVE_THRASH, MOVE_DRILL_PECK, MOVE_DRILL_RUN, MOVE_SWORDS_DANCE},
        }
    },
},

#define MARIA_INFO             \
    .trainerName = _("Maria"), \
    TRIATHLETE_F_RUNNING_INFO, \
    MINI_BOSS_AI_FLAGS

#define MARIA_DODUO(Level, IV)                              \
    TRIATHLETE_MON(Level, IV),                              \
    .species = Level < 31 ? SPECIES_DODUO : SPECIES_DODRIO, \
    .ability = ABILITY_EARLY_BIRD,                          \
    .gender = TRAINER_MON_FEMALE

[DIFFICULTY_NORMAL][TRAINER_MARIA_1] =
{
    MARIA_INFO,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        MARIA_DODUO(21, 1),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_MARIA_2] =
{
    MARIA_INFO,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        MARIA_DODUO(REMATCH_2_LEVEL_1, 2),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_MARIA_3] =
{
    MARIA_INFO,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        MARIA_DODUO(REMATCH_3_LEVEL_1, 3),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_MARIA_4] =
{
    MARIA_INFO,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        MARIA_DODUO(REMATCH_4_LEVEL_1, 4),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_MARIA_5] =
{
    MARIA_INFO,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        TRIATHLETE_MON(REMATCH_5_LEVEL_2, 5),
        .species = SPECIES_RAICHU,
        },
        {
        TRIATHLETE_MON(REMATCH_5_LEVEL_2, 5),
        .species = SPECIES_STARMIE,
        },
        {
        MARIA_DODUO(REMATCH_5_MINI_BOSS, 5),
        .moves = {MOVE_BODY_SLAM, MOVE_DRILL_PECK, MOVE_DRILL_RUN, MOVE_REST},
        }
    },
},

#define ISAAC_BATTLE(Match, Level)                                                                  \
[DIFFICULTY_NORMAL][TRAINER_ISAAC_##Match] =                                                        \
{                                                                                                   \
    .trainerName = _("Isaac"),                                                                      \
    POKEMON_BREEDER_M_INFO,                                                                         \
    MINI_BOSS_AI_FLAGS,                                                                             \
    .party = (const struct TrainerMon[]) {                                                          \
        {                                                                                           \
        POKEMON_BREEDER_MON(Level),                                                                 \
        .species = Level < 20 ? SPECIES_WHISMUR : (Level < 40 ? SPECIES_LOUDRED : SPECIES_EXPLOUD), \
        .ability = 2,                                                                               \
        .gender = TRAINER_MON_MALE                                                                  \
        },                                                                                          \
        {                                                                                           \
        POKEMON_BREEDER_MON(Level),                                                                 \
        .species = Level < 20 ? SPECIES_ZIGZAGOON : SPECIES_LINOONE,                                \
        .ability = ABILITY_QUICK_FEET,                                                              \
        .gender = TRAINER_MON_MALE                                                                  \
        },                                                                                          \
        {                                                                                           \
        POKEMON_BREEDER_MON(Level),                                                                 \
        .species = Level < 24 ? SPECIES_MAKUHITA : SPECIES_HARIYAMA,                                \
        .ability = ABILITY_SHEER_FORCE,                                                             \
        .gender = TRAINER_MON_MALE                                                                  \
        },                                                                                          \
        {                                                                                           \
        POKEMON_BREEDER_MON(Level),                                                                 \
        .species = Level < 18 ? SPECIES_POOCHYENA : SPECIES_MIGHTYENA,                              \
        .ability = ABILITY_STRONG_JAW,                                                              \
        .gender = TRAINER_MON_MALE                                                                  \
        },                                                                                          \
        {                                                                                           \
        POKEMON_BREEDER_MON(Level),                                                                 \
        .species = Level < 22 ? SPECIES_TAILLOW : SPECIES_SWELLOW,                                  \
        .ability = ABILITY_SCRAPPY,                                                                 \
        .gender = TRAINER_MON_MALE                                                                  \
        },                                                                                          \
        {                                                                                           \
        POKEMON_BREEDER_MON(Level),                                                                 \
        .species = Level < 32 ? SPECIES_ARON : (Level < 42 ? SPECIES_LAIRON : SPECIES_AGGRON),      \
        .ability = ABILITY_ROCK_HEAD,                                                               \
        .gender = TRAINER_MON_MALE                                                                  \
        },                                                                                          \
    },                                                                                              \
}

ISAAC_BATTLE(1, 16),
ISAAC_BATTLE(2, REMATCH_2_LEVEL_3),
ISAAC_BATTLE(3, REMATCH_3_LEVEL_3),
ISAAC_BATTLE(4, REMATCH_4_LEVEL_3),
ISAAC_BATTLE(5, REMATCH_5_LEVEL_3),

#define LYDIA_BATTLE(Match, Level)                                                             \
[DIFFICULTY_NORMAL][TRAINER_LYDIA_##Match] =                                                   \
{                                                                                              \
    .trainerName = _("Lydia"),                                                                 \
    POKEMON_BREEDER_F_INFO,                                                                    \
    MINI_BOSS_AI_FLAGS,                                                                        \
    .party = (const struct TrainerMon[]) {                                                     \
        {                                                                                      \
        POKEMON_BREEDER_MON(Level),                                                            \
        .species = Level < 25 ? SPECIES_WINGULL : SPECIES_PELIPPER,                            \
        .ability = ABILITY_RAIN_DISH,                                                          \
        .gender = TRAINER_MON_FEMALE                                                           \
        },                                                                                     \
        {                                                                                      \
        POKEMON_BREEDER_MON(Level),                                                            \
        .species = Level < 23 ? SPECIES_SHROOMISH : SPECIES_BRELOOM,                           \
        .ability = 2,                                                                          \
        .gender = TRAINER_MON_FEMALE                                                           \
        },                                                                                     \
        {                                                                                      \
        POKEMON_BREEDER_MON(Level),                                                            \
        .species = Level < REMATCH_2_LEVEL_6 ? SPECIES_AZURILL : (Level < REMATCH_3_LEVEL_6 ? SPECIES_MARILL : SPECIES_AZUMARILL), \
        .ability = ABILITY_SAP_SIPPER,                                                         \
        .gender = TRAINER_MON_FEMALE                                                           \
        },                                                                                     \
        {                                                                                      \
        POKEMON_BREEDER_MON(Level),                                                            \
        .species = Level < REMATCH_2_LEVEL_6 ? SPECIES_BUDEW : (Level < REMATCH_3_LEVEL_6 ? SPECIES_ROSELIA : SPECIES_ROSERADE), \
        .ability = 2,                                                                          \
        .gender = TRAINER_MON_FEMALE                                                           \
        },                                                                                     \
        {                                                                                      \
        POKEMON_BREEDER_MON(Level),                                                            \
        .species = Level < REMATCH_2_LEVEL_6 ? SPECIES_SKITTY : SPECIES_DELCATTY,              \
        .ability = ABILITY_WONDER_SKIN,                                                        \
        .gender = TRAINER_MON_FEMALE                                                           \
        },                                                                                     \
        {                                                                                      \
        POKEMON_BREEDER_MON(Level),                                                            \
        .species = Level < 33 ? SPECIES_GOLDEEN : SPECIES_SEAKING,                             \
        .ability = ABILITY_LIGHTNING_ROD,                                                      \
        .gender = TRAINER_MON_FEMALE                                                           \
        },                                                                                     \
    },                                                                                         \
}

LYDIA_BATTLE(1, 16),
LYDIA_BATTLE(2, REMATCH_2_LEVEL_3),
LYDIA_BATTLE(3, REMATCH_3_LEVEL_3),
LYDIA_BATTLE(4, REMATCH_4_LEVEL_3),
LYDIA_BATTLE(5, REMATCH_5_LEVEL_3),

#define ANNA_AND_MEG_INFO           \
    .trainerName = _("Anna & Meg"), \
    TEAMMATES_INFO,                 \
    MINI_BOSS_AI_FLAGS,             \
    .partySize = 2

#define ANNA_MAKUHITA(Level)                                     \
    .lvl = Level,                                                \
    .species = Level < 24 ? SPECIES_MAKUHITA : SPECIES_HARIYAMA, \
    .ability = ABILITY_THICK_FAT,                                \
    .gender = TRAINER_MON_FEMALE

#define MEG_ZIGZAGOON(Level)                                     \
    .lvl = Level,                                                \
    .species = Level < 20 ? SPECIES_ZIGZAGOON : SPECIES_LINOONE, \
    .ability = ABILITY_PICKUP,                                   \
    .gender = TRAINER_MON_FEMALE

[DIFFICULTY_NORMAL][TRAINER_ANNA_AND_MEG_1] =
{
    ANNA_AND_MEG_INFO,
    .party = (const struct TrainerMon[]) {
        {
        MEG_ZIGZAGOON(19),
        .moves = {MOVE_HEADBUTT, MOVE_BABY_DOLL_EYES, MOVE_SAND_ATTACK, MOVE_ODOR_SLEUTH},
        },
        {
        ANNA_MAKUHITA(21),
        .moves = {MOVE_ARM_THRUST, MOVE_FOCUS_ENERGY, MOVE_FAKE_OUT, MOVE_WHIRLWIND},
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_ANNA_AND_MEG_2] =
{
    ANNA_AND_MEG_INFO,
    .party = (const struct TrainerMon[]) {
        {
        MEG_ZIGZAGOON(REMATCH_2_LEVEL_3),
        IVS(2),
        .moves = {MOVE_SLASH, MOVE_TAIL_WHIP, MOVE_HONE_CLAWS, MOVE_ODOR_SLEUTH},
        },
        {
        ANNA_MAKUHITA(REMATCH_2_LEVEL_1),
        IVS(2),
        .moves = {MOVE_VITAL_THROW, MOVE_BULK_UP, MOVE_SMELLING_SALTS, MOVE_DETECT},
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_ANNA_AND_MEG_3] =
{
    ANNA_AND_MEG_INFO,
    .party = (const struct TrainerMon[]) {
        {
        MEG_ZIGZAGOON(REMATCH_3_LEVEL_3),
        IVS(3),
        .moves = {MOVE_SLASH, MOVE_TAIL_WHIP, MOVE_HONE_CLAWS, MOVE_ODOR_SLEUTH},
        },
        {
        ANNA_MAKUHITA(REMATCH_3_LEVEL_1),
        IVS(3),
        .moves = {MOVE_WAKE_UP_SLAP, MOVE_BELLY_DRUM, MOVE_FAKE_OUT, MOVE_DETECT},
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_ANNA_AND_MEG_4] =
{
    ANNA_AND_MEG_INFO,
    .party = (const struct TrainerMon[]) {
        {
        MEG_ZIGZAGOON(REMATCH_4_LEVEL_3),
        IVS(4),
        .moves = {MOVE_SLASH, MOVE_TAIL_WHIP, MOVE_HONE_CLAWS, MOVE_ODOR_SLEUTH},
        },
        {
        ANNA_MAKUHITA(REMATCH_4_LEVEL_1),
        IVS(4),
        .moves = {MOVE_WAKE_UP_SLAP, MOVE_BELLY_DRUM, MOVE_FAKE_OUT, MOVE_DETECT},
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_ANNA_AND_MEG_5] =
{
    ANNA_AND_MEG_INFO,
    .party = (const struct TrainerMon[]) {
        {
        MEG_ZIGZAGOON(REMATCH_5_LEVEL_3),
        IVS(5),
        .moves = {MOVE_SLASH, MOVE_TAIL_WHIP, MOVE_HONE_CLAWS, MOVE_ODOR_SLEUTH},
        },
        {
        ANNA_MAKUHITA(REMATCH_5_LEVEL_1),
        IVS(5),
        .moves = {MOVE_WAKE_UP_SLAP, MOVE_BELLY_DRUM, MOVE_FAKE_OUT, MOVE_DETECT},
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_DEREK] =
{
    .trainerName = _("Cristian"),
    BUG_MANIAC_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 19,
        .species = SPECIES_DUSTOX,
        IVS(18),
        },
        {
        .lvl = 19,
        .species = SPECIES_BEAUTIFLY,
        IVS(18),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_BRANDI] =
{
    .trainerName = _("Brandi"),
    PSYCHIC_F_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 20,
        .species = SPECIES_PSYDUCK,
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_MELINA] =
{
    .trainerName = _("Melina"),
    TRIATHLETE_F_RUNNING_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        TRIATHLETE_MON(20, 0),
        .species = SPECIES_IGGLYBUFF,
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_AISHA] =
{
    .trainerName = _("Aisha"),
    BATTLE_GIRL_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 20,
        .species = SPECIES_MEDITITE,
        }
    },
},

// Rusturf Tunnel
[DIFFICULTY_NORMAL][TRAINER_MIKE] =
{
    .trainerName = _("Mike"),
    HIKER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 19,
        .species = SPECIES_WHISMUR,
        },
        {
        .lvl = 19,
        .species = SPECIES_WHISMUR,
        },
        {
        .lvl = 19,
        .species = SPECIES_WHISMUR,
        }
    },
},

// Mauville Gym
#define MAUVILLE_GYM_TRAINER_INFO(Class) \
    Class##_INFO,                        \
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,   \
    .partySize = 2

#define MAUVILLE_GYM_MON(Species, Move2, Move3, Move4)                    \
    {                                                                     \
    .lvl = CAP_GYM_3 - 3,                                                 \
    .species = SPECIES_##Species,                                         \
    IVS(12),                                                              \
    .moves = {MOVE_SHOCK_WAVE, MOVE_##Move2, MOVE_##Move3, MOVE_##Move4}, \
    }

[DIFFICULTY_NORMAL][TRAINER_VIVIAN] =
{
    .trainerName = _("Vivian"),
    MAUVILLE_GYM_TRAINER_INFO(BEAUTY),
    .party = (const struct TrainerMon[]) {
        MAUVILLE_GYM_MON(MINUN, SWIFT, NUZZLE, ENCORE),
        MAUVILLE_GYM_MON(PLUSLE, SWIFT, NUZZLE, SKILL_SWAP)
    },
},

[DIFFICULTY_NORMAL][TRAINER_KIRK] =
{
    .trainerName = _("Kirk"),
    MAUVILLE_GYM_TRAINER_INFO(HIKER),
    .party = (const struct TrainerMon[]) {
        MAUVILLE_GYM_MON(ELECTRIKE, QUICK_ATTACK, THUNDER_WAVE, LEER),
        MAUVILLE_GYM_MON(VOLTORB, CHARGE, SCREECH, ROLLOUT)
    },
},

[DIFFICULTY_NORMAL][TRAINER_BEN] =
{
    .trainerName = _("Ben"),
    MAUVILLE_GYM_TRAINER_INFO(HIKER),
    .party = (const struct TrainerMon[]) {
        MAUVILLE_GYM_MON(PICHU, NASTY_PLOT, NUZZLE, SWEET_KISS),
        MAUVILLE_GYM_MON(ELECTRIKE, QUICK_ATTACK, THUNDER_WAVE, HOWL)
    },
},

[DIFFICULTY_NORMAL][TRAINER_ANGELO] =
{
    .trainerName = _("Angelo"),
    MAUVILLE_GYM_TRAINER_INFO(HIKER),
    .party = (const struct TrainerMon[]) {
        MAUVILLE_GYM_MON(CHINCHOU, BUBBLE_BEAM, THUNDER_WAVE, CONFUSE_RAY),
        MAUVILLE_GYM_MON(MAGNEMITE, MAGNET_BOMB, THUNDER_WAVE, SUPERSONIC)
    },
},

[DIFFICULTY_NORMAL][TRAINER_SHAWN] =
{
    .trainerName = _("Shawn"),
    MAUVILLE_GYM_TRAINER_INFO(HIKER),
    .party = (const struct TrainerMon[]) {
        MAUVILLE_GYM_MON(MAGNEMITE, MAGNET_BOMB, THUNDER_WAVE, SUPERSONIC),
        MAUVILLE_GYM_MON(ELECTRIKE, THUNDER_WAVE, QUICK_ATTACK, LEER)
    },
},

// Route 118 (west)
#define ROSE_INFO             \
    .trainerName = _("Rose"), \
    AROMA_LADY_INFO,          \
    MINI_BOSS_AI_FLAGS

#define ROSE_ROSELIA(Level)                                                    \
    .lvl = Level,                                                              \
    .species = Level < REMATCH_2_LEVEL_6 ? SPECIES_ROSELIA : SPECIES_ROSERADE, \
    .ability = ABILITY_POISON_POINT,                                           \
    .gender = TRAINER_MON_FEMALE

#define ROSE_ODDISH(Level)                                                                                                   \
    .lvl = Level,                                                                                                            \
    .species = Level < REMATCH_2_LEVEL_6 ? SPECIES_ODDISH : (Level < REMATCH_4_LEVEL_6 ? SPECIES_GLOOM : SPECIES_BELLOSSOM), \
    .gender = TRAINER_MON_FEMALE

#define ROSE_SHROOMISH(Level)                                    \
    .lvl = Level,                                                \
    .species = Level < 23 ? SPECIES_SHROOMISH : SPECIES_BRELOOM, \
    .ability = ABILITY_POISON_HEAL,                              \
    .gender = TRAINER_MON_FEMALE

// Extra for hacks
#define ROSE_SUNKERN

[DIFFICULTY_NORMAL][TRAINER_ROSE_1] =
{
    ROSE_INFO,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        ROSE_SHROOMISH(21),
        },
        {
        ROSE_ODDISH(21),
        },
        {
        ROSE_ROSELIA(21),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_ROSE_2] =
{
    ROSE_INFO,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        ROSE_SHROOMISH(REMATCH_2_LEVEL_3),
        IVS(2),
        },
        {
        ROSE_ODDISH(REMATCH_2_LEVEL_3),
        IVS(2),
        },
        {
        ROSE_ROSELIA(REMATCH_2_LEVEL_3),
        IVS(2),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_ROSE_3] =
{
    ROSE_INFO,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        ROSE_SHROOMISH(REMATCH_3_LEVEL_3),
        IVS(3),
        },
        {
        ROSE_ODDISH(REMATCH_3_LEVEL_3),
        IVS(3),
        },
        {
        ROSE_ROSELIA(REMATCH_3_LEVEL_3),
        IVS(3),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_ROSE_4] =
{
    ROSE_INFO,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        ROSE_SHROOMISH(REMATCH_4_LEVEL_3),
        IVS(4),
        },
        {
        ROSE_ODDISH(REMATCH_4_LEVEL_3),
        IVS(4),
        },
        {
        ROSE_ROSELIA(REMATCH_4_LEVEL_3),
        IVS(4),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_ROSE_5] =
{
    ROSE_INFO,
    .partySize = 4,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = REMATCH_5_LEVEL_4,
        .species = SPECIES_TROPIUS,
        .gender = TRAINER_MON_FEMALE,
        IVS(5),
        },
        {
        ROSE_SHROOMISH(REMATCH_5_LEVEL_4),
        IVS(5),
        },
        {
        ROSE_ODDISH(REMATCH_5_LEVEL_4),
        IVS(5),
        },
        {
        ROSE_ROSELIA(REMATCH_5_LEVEL_4),
        IVS(5),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_DEANDRE] =
{
    .trainerName = _("Deandre"),
    YOUNGSTER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 20,
        .species = SPECIES_ZIGZAGOON,
        },
        {
        .lvl = 20,
        .species = SPECIES_ARON,
        },
        {
        .lvl = 20,
        .species = SPECIES_ELECTRIKE,
        }
    },
},

#define DALTON_INFO                   \
    .trainerName = _("Dalton"),       \
    GUITARIST_INFO,                   \
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE

#define DALTON_VOLTORB(Level)                                    \
    .lvl = Level,                                                \
    .species = Level < 30 ? SPECIES_VOLTORB : SPECIES_ELECTRODE, \
    .ability = ABILITY_SOUNDPROOF,                               \
    .gender = TRAINER_MON_NONE

#define DALTON_WHISMUR(Level)                                                                                  \
    .lvl = Level,                                                                                              \
    .species = Level < REMATCH_2_LEVEL_6 ? SPECIES_WHISMUR : (Level < 40 ? SPECIES_LOUDRED : SPECIES_EXPLOUD), \
    .ability = ABILITY_SOUNDPROOF,                                                                             \
    .gender = TRAINER_MON_MALE

#define DALTON_MAGNEMITE(Level) \
    .lvl = Level,               \
    .species = Level < REMATCH_3_LEVEL_6 ? SPECIES_MAGNEMITE : (Level < REMATCH_5_LEVEL_6 ? SPECIES_MAGNETON : SPECIES_MAGNEZONE), \
    .ability = ABILITY_STURDY,  \
    .gender = TRAINER_MON_NONE

// Extra for hacks
#define DALTON_CHATOT(Level)     \
    .lvl = Level,                \
    .species = SPECIES_CHATOT,   \
    .ability = ABILITY_KEEN_EYE, \
    .gender = TRAINER_MON_MALE

#define DALTON_TOXEL

[DIFFICULTY_NORMAL][TRAINER_DALTON_1] =
{
    DALTON_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        DALTON_WHISMUR(21),
        },
        {
        DALTON_VOLTORB(21),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_DALTON_2] =
{
    DALTON_INFO,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        DALTON_MAGNEMITE(REMATCH_2_LEVEL_3),
        IVS(2),
        },
        {
        DALTON_WHISMUR(REMATCH_2_LEVEL_3),
        IVS(2),
        },
        {
        DALTON_VOLTORB(REMATCH_2_LEVEL_3),
        IVS(2),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_DALTON_3] =
{
    DALTON_INFO,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        DALTON_MAGNEMITE(REMATCH_3_LEVEL_3),
        IVS(3),
        },
        {
        DALTON_WHISMUR(REMATCH_3_LEVEL_3),
        IVS(3),
        },
        {
        DALTON_VOLTORB(REMATCH_3_LEVEL_3),
        IVS(3),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_DALTON_4] =
{
    DALTON_INFO,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        DALTON_MAGNEMITE(REMATCH_4_LEVEL_3),
        IVS(4),
        },
        {
        DALTON_WHISMUR(REMATCH_4_LEVEL_3),
        IVS(4),
        },
        {
        DALTON_VOLTORB(REMATCH_4_LEVEL_3),
        IVS(4),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_DALTON_5] =
{
    DALTON_INFO,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        DALTON_MAGNEMITE(REMATCH_5_LEVEL_3),
        IVS(5),
        },
        {
        DALTON_WHISMUR(REMATCH_5_LEVEL_3),
        IVS(5),
        },
        {
        DALTON_VOLTORB(REMATCH_5_LEVEL_3),
        IVS(5),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_WADE] =
{
    .trainerName = _("Wade"),
    FISHERMAN_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 22,
        .species = SPECIES_TENTACOOL,
        }
    },
},

// Cycling Road
[DIFFICULTY_NORMAL][TRAINER_JACLYN] =
{
    .trainerName = _("Jaclyn"),
    PSYCHIC_F_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 22,
        .species = SPECIES_KADABRA,
        .moves = {MOVE_PSYBEAM, MOVE_HIDDEN_POWER, MOVE_NONE, MOVE_NONE}
        }
    },
},

#define ABIGAIL_INFO             \
    .trainerName = _("Abigail"), \
    TRIATHLETE_F_CYCLING_INFO,   \
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE

#define ABIGAIL_MAGNEMITE(Level, IV)                                                                                \
    TRIATHLETE_MON(Level, IV),                                                                                      \
    .species = Level < 30 ? SPECIES_MAGNEMITE : (Level < REMATCH_3_LEVEL_6 ? SPECIES_MAGNETON : SPECIES_MAGNEZONE), \
    .ability = ABILITY_STURDY

#define ABIGAIL_PLUSLE(Level, IV) \
    TRIATHLETE_MON(Level, IV),    \
    .species = SPECIES_PLUSLE,    \
    .gender = TRAINER_MON_FEMALE

#define ABIGAIL_ELECTRIKE(Level, IV)                                              \
    TRIATHLETE_MON(Level, IV),                                                    \
    .species = Level < REMATCH_4_LEVEL_6 ? SPECIES_ELECTRIKE : SPECIES_MANECTRIC, \
    .ability = ABILITY_LIGHTNING_ROD,                                             \
    .gender = TRAINER_MON_FEMALE

[DIFFICULTY_NORMAL][TRAINER_ABIGAIL_1] =
{
    ABIGAIL_INFO,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        ABIGAIL_MAGNEMITE(22, 1),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_ABIGAIL_2] =
{
    ABIGAIL_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        ABIGAIL_PLUSLE(REMATCH_2_LEVEL_2, 2),
        },
        {
        ABIGAIL_MAGNEMITE(REMATCH_2_LEVEL_2, 2),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_ABIGAIL_3] =
{
    ABIGAIL_INFO,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        ABIGAIL_ELECTRIKE(REMATCH_3_LEVEL_3, 3),
        },
        {
        ABIGAIL_PLUSLE(REMATCH_3_LEVEL_3, 3),
        },
        {
        ABIGAIL_MAGNEMITE(REMATCH_3_LEVEL_3, 3),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_ABIGAIL_4] =
{
    ABIGAIL_INFO,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        ABIGAIL_ELECTRIKE(REMATCH_4_LEVEL_3, 4),
        },
        {
        ABIGAIL_PLUSLE(REMATCH_4_LEVEL_3, 4),
        },
        {
        ABIGAIL_MAGNEMITE(REMATCH_4_LEVEL_3, 4),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_ABIGAIL_5] =
{
    ABIGAIL_INFO,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        ABIGAIL_ELECTRIKE(REMATCH_5_LEVEL_3, 5),
        },
        {
        ABIGAIL_PLUSLE(REMATCH_5_LEVEL_3, 5),
        },
        {
        ABIGAIL_MAGNEMITE(REMATCH_5_LEVEL_3, 5),
        }
    },
},

#define BENJAMIN_INFO             \
    .trainerName = _("Benjamin"), \
    TRIATHLETE_M_CYCLING_INFO,    \
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE

#define BENJAMIN_MAGNEMITE(Level, IV) \
    TRIATHLETE_MON(Level, IV),        \
    .species = Level < 30 ? SPECIES_MAGNEMITE : (Level < REMATCH_3_LEVEL_6 ? SPECIES_MAGNETON : SPECIES_MAGNEZONE), \
    .ability = ABILITY_STURDY,        \
    .gender = TRAINER_MON_NONE

#define BENJAMIN_MINUN(Level, IV) \
    TRIATHLETE_MON(Level, IV),    \
    .species = SPECIES_MINUN,     \
    .gender = TRAINER_MON_MALE

#define BENJAMIN_VOLTORB(Level, IV)                                             \
    TRIATHLETE_MON(Level, IV),                                                  \
    .species = Level < REMATCH_4_LEVEL_6 ? SPECIES_VOLTORB : SPECIES_ELECTRODE, \
    .ability = ABILITY_SOUNDPROOF,                                              \
    .gender = TRAINER_MON_NONE

// Extra for hacks
#define BENJAMIN_KLINK(Level, IV)                                                             \
    TRIATHLETE_MON(Level, IV),                                                                \
    .species = Level < 32 ? SPECIES_KLINK : (Level < 42 ? SPECIES_KLANG : SPECIES_KLINKLANG), \
    .ability = ABILITY_STURDY,                                                                \
    .gender = TRAINER_MON_NONE

[DIFFICULTY_NORMAL][TRAINER_BENJAMIN_1] =
{
    BENJAMIN_INFO,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        BENJAMIN_MAGNEMITE(22, 1),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_BENJAMIN_2] =
{
    BENJAMIN_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        BENJAMIN_MINUN(REMATCH_2_LEVEL_2, 2),
        },
        {
        BENJAMIN_MAGNEMITE(REMATCH_2_LEVEL_2, 2),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_BENJAMIN_3] =
{
    BENJAMIN_INFO,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        BENJAMIN_VOLTORB(REMATCH_3_LEVEL_3, 3),
        },
        {
        BENJAMIN_MINUN(REMATCH_3_LEVEL_3, 3),
        },
        {
        BENJAMIN_MAGNEMITE(REMATCH_3_LEVEL_3, 3),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_BENJAMIN_4] =
{
    BENJAMIN_INFO,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        BENJAMIN_VOLTORB(REMATCH_4_LEVEL_3, 4),
        },
        {
        BENJAMIN_MINUN(REMATCH_4_LEVEL_3, 4),
        },
        {
        BENJAMIN_MAGNEMITE(REMATCH_4_LEVEL_3, 4),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_BENJAMIN_5] =
{
    BENJAMIN_INFO,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        BENJAMIN_VOLTORB(REMATCH_5_LEVEL_3, 5),
        },
        {
        BENJAMIN_MINUN(REMATCH_5_LEVEL_3, 5),
        },
        {
        BENJAMIN_MAGNEMITE(REMATCH_5_LEVEL_3, 5),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_ANTHONY] =
{
    .trainerName = _("Anthony"),
    TRIATHLETE_M_CYCLING_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        TRIATHLETE_MON(21, 0),
        .species = SPECIES_MAGNEMITE,
        },
        {
        TRIATHLETE_MON(21, 0),
        .species = SPECIES_ELEKID,
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_JASMINE] =
{
    .trainerName = _("Jasmine"),
    TRIATHLETE_F_CYCLING_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        TRIATHLETE_MON(20, 0),
        .species = SPECIES_MAGNEMITE,
        },
        {
        TRIATHLETE_MON(20, 0),
        .species = SPECIES_PICHU,
        },
        {
        TRIATHLETE_MON(20, 0),
        .species = SPECIES_ORICORIO_POM_POM,
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_JACOB] =
{
    .trainerName = _("Jacob"),
    TRIATHLETE_M_CYCLING_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        TRIATHLETE_MON(20, 0),
        .species = SPECIES_VOLTORB,
        },
        {
        TRIATHLETE_MON(20, 0),
        .species = SPECIES_TADBULB,
        },
        {
        TRIATHLETE_MON(20, 0),
        .species = SPECIES_WATTREL,
        }
    },
},

// Trick House 2
[DIFFICULTY_NORMAL][TRAINER_TED] =
{
    .trainerName = _("Ted"),
    SCHOOLKID_M_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 23,
        .species = SPECIES_KADABRA,
        IVS(1),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_PAUL] =
{
    .trainerName = _("Paul"),
    SCHOOLKID_M_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 21,
        .species = SPECIES_NUMEL,
        IVS(1),
        },
        {
        .lvl = 21,
        .species = SPECIES_ODDISH,
        IVS(1),
        },
        {
        .lvl = 21,
        .species = SPECIES_WINGULL,
        IVS(1),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_GEORGIA] =
{
    .trainerName = _("Georgia"),
    SCHOOLKID_F_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 22,
        .species = SPECIES_SHROOMISH,
        IVS(1),
        },
        {
        .lvl = 22,
        .species = SPECIES_BEAUTIFLY,
        IVS(1),
        }
    },
},

// Route 111 (south)
[DIFFICULTY_NORMAL][TRAINER_TYRON] =
{
    .trainerName = _("Tyron"),
    CAMPER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 24,
        .species = SPECIES_SANDSHREW,
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_LILY] =
{
    .trainerName = _("Lily"),
    AROMA_LADY_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 24,
        .species = SPECIES_ROSELIA,
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_BIANCA] =
{
    .trainerName = _("Bianca"),
    PICNICKER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 24,
        .species = SPECIES_SHROOMISH,
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_HAYDEN] =
{
    .trainerName = _("Hayden"),
    KINDLER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 24,
        .species = SPECIES_NUMEL,
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_VICTOR] =
{
    .trainerName = _("Victor"),
    .trainerClass = TRAINER_CLASS_WINSTRATE,
    .trainerPic = TRAINER_PIC_POKE_FAN_M,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_TWINS,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        POKE_FAN_MON(23),
        .species = SPECIES_TAILLOW,
        EV_SPREAD_ATK_SPE_HP,
        IVS(3),
        .gender = TRAINER_MON_MALE,
        },
        {
        POKE_FAN_MON(23),
        .species = SPECIES_ZIGZAGOON,
        EV_SPREAD_ATK_SPE_HP,
        IVS(3),
        .gender = TRAINER_MON_MALE,
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_VICTORIA] =
{
    .trainerName = _("Victoria"),
    .trainerClass = TRAINER_CLASS_WINSTRATE,
    .trainerPic = TRAINER_PIC_POKE_FAN_F,
    .gender = TRAINER_GENDER_FEMALE,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_TWINS,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        POKE_FAN_MON(24),
        .species = SPECIES_ROSELIA,
        .ability = ABILITY_POISON_POINT,
        EV_SPREAD_SPA_SPE_HP,
        IVS(6),
        .gender = TRAINER_MON_FEMALE,
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_VIVI] =
{
    .trainerName = _("Vivi"),
    .trainerClass = TRAINER_CLASS_WINSTRATE,
    .trainerPic = TRAINER_PIC_LASS,
    .gender = TRAINER_GENDER_FEMALE,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 22,
        .species = SPECIES_NUMEL,
        EV_SPREAD_SPA_SPE_HP,
        IVS(12),
        .gender = TRAINER_MON_FEMALE,
        },
        {
        .lvl = 22,
        .species = SPECIES_SHROOMISH,
        EV_SPREAD_ATK_SPE_HP,
        IVS(12),
        .gender = TRAINER_MON_FEMALE,
        },
        {
        .lvl = 22,
        .species = SPECIES_GOLDEEN,
        EV_SPREAD_ATK_SPE_HP,
        IVS(12),
        .gender = TRAINER_MON_FEMALE,
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_VICKY] =
{
    .trainerName = _("Vicky"),
    .trainerClass = TRAINER_CLASS_WINSTRATE,
    .trainerPic = TRAINER_PIC_EXPERT_F,
    .gender = TRAINER_GENDER_FEMALE,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 25,
        .species = SPECIES_MEDITITE,
        EV_SPREAD_ATK_SPE_HP,
        IVS(24),
        .moves = {MOVE_FORCE_PALM, MOVE_MEDITATE, MOVE_PSYBEAM, MOVE_DETECT},
        .gender = TRAINER_MON_FEMALE,
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_IRENE] =
{
    .trainerName = _("Irene"),
    PICNICKER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 23,
        .species = SPECIES_NUMEL,
        },
        {
        .lvl = 23,
        .species = SPECIES_MARILL,
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_TRAVIS] =
{
    .trainerName = _("Travis"),
    CAMPER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 24,
        .species = SPECIES_SANDSHREW,
        }
    },
},

// Route 112
[DIFFICULTY_NORMAL][TRAINER_LARRY] =
{
    .trainerName = _("Larry"),
    CAMPER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 25,
        .species = SPECIES_NUZLEAF,
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_CAROL] =
{
    .trainerName = _("Carol"),
    PICNICKER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 24,
        .species = SPECIES_TAILLOW,
        },
        {
        .lvl = 24,
        .species = SPECIES_LOMBRE,
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_BRICE] =
{
    .trainerName = _("Brice"),
    HIKER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 24,
        .species = SPECIES_NUMEL,
        },
        {
        .lvl = 24,
        .species = SPECIES_MACHOP,
        }
    },
},

#define TRENT_INFO             \
    .trainerName = _("Trent"), \
    HIKER_INFO,                \
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE

#define TRENT_ACE_GEODUDE(Level)  \
    .lvl = Level,                 \
    .species = Level < REMATCH_2_LEVEL_6 ? SPECIES_GEODUDE : (Level < REMATCH_4_LEVEL_6 ? SPECIES_GRAVELER : SPECIES_GOLEM), \
    .ability = ABILITY_ROCK_HEAD, \
    .gender = TRAINER_MON_MALE

#define TRENT_GENERIC_GEODUDE(Level) \
    .lvl = Level,                    \
    .species = Level < REMATCH_3_LEVEL_6 ? SPECIES_GEODUDE : (Level < REMATCH_5_LEVEL_6 ? SPECIES_GRAVELER : SPECIES_GOLEM)

#define TRENT_GEODUDE_2(Level)    \
    TRENT_GENERIC_GEODUDE(Level), \
    .ability = ABILITY_STURDY,    \
    .gender = TRAINER_MON_FEMALE

#define TRENT_GEODUDE_3(Level)    \
    TRENT_GENERIC_GEODUDE(Level), \
    .ability = ABILITY_SAND_VEIL, \
    .gender = TRAINER_MON_MALE

#define TRENT_GEODUDE_4(Level)    \
    TRENT_GENERIC_GEODUDE(Level), \
    .ability = ABILITY_SAND_VEIL, \
    .gender = TRAINER_MON_MALE,   \
    .isShiny = TRUE

#define TRENT_GEODUDE_5(Level)    \
    TRENT_GENERIC_GEODUDE(Level), \
    .ability = ABILITY_ROCK_HEAD,  \
    .gender = TRAINER_MON_FEMALE

#define TRENT_GEODUDE_6(Level)    \
    TRENT_GENERIC_GEODUDE(Level), \
    .ability = ABILITY_STURDY,    \
    .gender = TRAINER_MON_MALE

[DIFFICULTY_NORMAL][TRAINER_TRENT_1] =
{
    TRENT_INFO,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        TRENT_GEODUDE_3(23),
        },
        {
        TRENT_GEODUDE_2(23),
        },
        {
        TRENT_ACE_GEODUDE(24),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_TRENT_2] =
{
    TRENT_INFO,
    .partySize = 4,
    .party = (const struct TrainerMon[]) {
        {
        TRENT_GEODUDE_4(REMATCH_2_LEVEL_4),
        IVS(2),
        },
        {
        TRENT_GEODUDE_3(REMATCH_2_LEVEL_4),
        IVS(2),
        },
        {
        TRENT_GEODUDE_2(REMATCH_2_LEVEL_4),
        IVS(2),
        },
        {
        TRENT_ACE_GEODUDE(REMATCH_2_LEVEL_3),
        IVS(1),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_TRENT_3] =
{
    TRENT_INFO,
    .partySize = 4,
    .party = (const struct TrainerMon[]) {
        {
        TRENT_GEODUDE_4(REMATCH_3_LEVEL_4),
        IVS(3),
        },
        {
        TRENT_GEODUDE_3(REMATCH_3_LEVEL_4),
        IVS(3),
        },
        {
        TRENT_GEODUDE_2(REMATCH_3_LEVEL_4),
        IVS(3),
        },
        {
        TRENT_ACE_GEODUDE(REMATCH_3_LEVEL_3),
        IVS(3),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_TRENT_4] =
{
    TRENT_INFO,
    .partySize = 5,
    .party = (const struct TrainerMon[]) {
        {
        TRENT_GEODUDE_5(REMATCH_4_LEVEL_5),
        IVS(4),
        },
        {
        TRENT_GEODUDE_4(REMATCH_4_LEVEL_5),
        IVS(4),
        },
        {
        TRENT_GEODUDE_3(REMATCH_4_LEVEL_5),
        IVS(4),
        },
        {
        TRENT_GEODUDE_2(REMATCH_4_LEVEL_5),
        IVS(4),
        },
        {
        TRENT_ACE_GEODUDE(REMATCH_4_LEVEL_4),
        IVS(4),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_TRENT_5] =
{
    TRENT_INFO,
    .partySize = 6,
    .party = (const struct TrainerMon[]) {
        {
        TRENT_GEODUDE_6(REMATCH_5_LEVEL_6),
        IVS(5),
        },
        {
        TRENT_GEODUDE_5(REMATCH_5_LEVEL_6),
        IVS(5),
        },
        {
        TRENT_GEODUDE_4(REMATCH_5_LEVEL_6),
        IVS(5),
        },
        {
        TRENT_GEODUDE_3(REMATCH_5_LEVEL_6),
        IVS(5),
        },
        {
        TRENT_GEODUDE_2(REMATCH_5_LEVEL_6),
        IVS(5),
        },
        {
        TRENT_ACE_GEODUDE(REMATCH_5_LEVEL_5),
        IVS(5),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_BRYANT] =
{
    .trainerName = _("Bryant"),
    KINDLER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 24,
        .species = SPECIES_NUMEL,
        },
        {
        .lvl = 24,
        .species = SPECIES_SLUGMA,
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_SHAYLA] =
{
    .trainerName = _("Shayla"),
    AROMA_LADY_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 24,
        .species = SPECIES_SHROOMISH,
        },
        {
        .lvl = 24,
        .species = SPECIES_ROSELIA,
        }
    },
},

// Route 111 (north)
#define WILTON_INFO                                                \
    .trainerName = _("Wilton"),                                    \
    ACE_TRAINER_M_INFO,                                            \
    .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE}, \
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY

#define WILTON_MAKUHITA(Level)                                                  \
    .lvl = Level,                                                               \
    .species = Level < REMATCH_2_LEVEL_6 ? SPECIES_MAKUHITA : SPECIES_HARIYAMA, \
    .ability = ABILITY_THICK_FAT,                                               \
    .gender = TRAINER_MON_MALE

#define WILTON_WAILMER(Level)                                  \
    .lvl = Level,                                              \
    .species = Level < 40 ? SPECIES_WAILMER : SPECIES_WAILORD, \
    .ability = ABILITY_OBLIVIOUS,                              \
    .gender = TRAINER_MON_MALE

#define WILTON_ELECTRIKE(Level)                                                   \
    .lvl = Level,                                                                 \
    .species = Level < REMATCH_2_LEVEL_6 ? SPECIES_ELECTRIKE : SPECIES_MANECTRIC, \
    .ability = ABILITY_STATIC,                                                    \
    .gender = TRAINER_MON_MALE

// Extra for hacks
#define WILTON_AXEW(Level)                                                                   \
    .lvl = Level,                                                                            \
    .species = Level < 35 ? SPECIES_AXEW : (Level < 45 ? SPECIES_FRAXURE : SPECIES_HAXORUS), \
    .ability = ABILITY_MOLD_BREAKER,                                                         \
    .gender = TRAINER_MON_MALE

#define WILTON_FLETCHLING

[DIFFICULTY_NORMAL][TRAINER_WILTON_1] =
{
    WILTON_INFO,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        WILTON_ELECTRIKE(24),
        IVS(12),
        },
        {
        WILTON_WAILMER(24),
        IVS(12),
        },
        {
        WILTON_MAKUHITA(24),
        IVS(12),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_WILTON_2] =
{
    WILTON_INFO,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        WILTON_ELECTRIKE(REMATCH_2_LEVEL_3),
        IVS(13),
        },
        {
        WILTON_WAILMER(REMATCH_2_LEVEL_3),
        IVS(13),
        },
        {
        WILTON_MAKUHITA(REMATCH_2_LEVEL_3),
        IVS(13),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_WILTON_3] =
{
    WILTON_INFO,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        WILTON_ELECTRIKE(REMATCH_3_LEVEL_3),
        IVS(14),
        },
        {
        WILTON_WAILMER(REMATCH_3_LEVEL_3),
        IVS(14),
        },
        {
        WILTON_MAKUHITA(REMATCH_3_LEVEL_3),
        IVS(14),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_WILTON_4] =
{
    WILTON_INFO,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        WILTON_ELECTRIKE(REMATCH_4_LEVEL_3),
        IVS(15),
        },
        {
        WILTON_WAILMER(REMATCH_4_LEVEL_3),
        IVS(15),
        },
        {
        WILTON_MAKUHITA(REMATCH_4_LEVEL_3),
        IVS(15),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_WILTON_5] =
{
    WILTON_INFO,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        WILTON_ELECTRIKE(REMATCH_5_LEVEL_3),
        IVS(17),
        },
        {
        WILTON_WAILMER(REMATCH_5_LEVEL_3),
        IVS(17),
        },
        {
        WILTON_MAKUHITA(REMATCH_5_LEVEL_3),
        IVS(17),
        }
    },
},

#define BROOKE_INFO                                                \
    .trainerName = _("Brooke"),                                    \
    ACE_TRAINER_F_INFO,                                            \
    .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE}, \
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY

#define BROOKE_ROSELIA(Level)                                                  \
    .lvl = Level,                                                              \
    .species = Level < REMATCH_3_LEVEL_6 ? SPECIES_ROSELIA : SPECIES_ROSERADE, \
    .ability = ABILITY_POISON_POINT,                                           \
    .gender = TRAINER_MON_FEMALE

#define BROOKE_NUMEL(Level)                                   \
    .lvl = Level,                                             \
    .species = Level < 33 ? SPECIES_NUMEL : SPECIES_CAMERUPT, \
    .ability = ABILITY_OBLIVIOUS,                             \
    .gender = TRAINER_MON_FEMALE

#define BROOKE_WINGULL(Level)                                                  \
    .lvl = Level,                                                              \
    .species = Level < REMATCH_2_LEVEL_6 ? SPECIES_WINGULL : SPECIES_PELIPPER, \
    .ability = ABILITY_KEEN_EYE,                                               \
    .gender = TRAINER_MON_FEMALE

// Extra for hacks
#define BROOKE_LAPRAS
#define BROOKE_GLAMEOW

[DIFFICULTY_NORMAL][TRAINER_BROOKE_1] =
{
    BROOKE_INFO,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        BROOKE_WINGULL(24),
        IVS(12),
        },
        {
        BROOKE_NUMEL(24),
        IVS(12),
        },
        {
        BROOKE_ROSELIA(24),
        IVS(12),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_BROOKE_2] =
{
    BROOKE_INFO,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        BROOKE_WINGULL(REMATCH_2_LEVEL_3),
        IVS(13),
        },
        {
        BROOKE_NUMEL(REMATCH_2_LEVEL_3),
        IVS(13),
        },
        {
        BROOKE_ROSELIA(REMATCH_2_LEVEL_3),
        IVS(13),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_BROOKE_3] =
{
    BROOKE_INFO,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        BROOKE_WINGULL(REMATCH_3_LEVEL_3),
        IVS(14),
        },
        {
        BROOKE_NUMEL(REMATCH_3_LEVEL_3),
        IVS(14),
        },
        {
        BROOKE_ROSELIA(REMATCH_3_LEVEL_3),
        IVS(14),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_BROOKE_4] =
{
    BROOKE_INFO,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        BROOKE_WINGULL(REMATCH_4_LEVEL_3),
        IVS(15),
        },
        {
        BROOKE_NUMEL(REMATCH_4_LEVEL_3),
        IVS(15),
        },
        {
        BROOKE_ROSELIA(REMATCH_4_LEVEL_3),
        IVS(15),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_BROOKE_5] =
{
    BROOKE_INFO,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        BROOKE_WINGULL(REMATCH_5_LEVEL_3),
        IVS(17),
        },
        {
        BROOKE_NUMEL(REMATCH_5_LEVEL_3),
        IVS(17),
        },
        {
        BROOKE_ROSELIA(REMATCH_5_LEVEL_3),
        IVS(17),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_DAISUKE] =
{
    .trainerName = _("Daisuke"),
    BLACK_BELT_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 25,
        .species = SPECIES_MACHOP,
        IVS(12),
        }
    },
},

// Route 113
[DIFFICULTY_NORMAL][TRAINER_JAYLEN] =
{
    .trainerName = _("Jaylen"),
    YOUNGSTER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 25,
        .species = SPECIES_TRAPINCH,
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_LAWRENCE] =
{
    .trainerName = _("Lawrence"),
    CAMPER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 24,
        .species = SPECIES_BALTOY,
        },
        {
        .lvl = 24,
        .species = SPECIES_SANDSHREW,
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_LUNG] =
{
    .trainerName = _("Lung"),
    NINJA_BOY_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 24,
        .species = SPECIES_KOFFING,
        },
        {
        .lvl = 24,
        .species = SPECIES_NINJASK,
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_WYATT] =
{
    .trainerName = _("Wyatt"),
    POKE_MANIAC_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 24,
        .species = SPECIES_RHYHORN,
        },
        {
        .lvl = 24,
        .species = SPECIES_ARON,
        }
    },
},

#define MADELINE_INFO             \
    .trainerName = _("Madeline"), \
    PARASOL_LADY_INFO,            \
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE

#define MADELINE_NUMEL(Level)                                 \
    .lvl = Level,                                             \
    .species = Level < 33 ? SPECIES_MADELINE : (SPECIES_MADELINE + 1), \
    .ability = ABILITY_SIMPLE,                                \
    .gender = TRAINER_MON_FEMALE,                             \
    .moves = {MOVE_LAVA_PLUME, Level < REMATCH_2_LEVEL_6 ? MOVE_BULLDOZE : MOVE_EARTH_POWER, MOVE_AMNESIA, MOVE_SUNNY_DAY}

#define MADELINE_ROSELIA(Level)                                                \
    .lvl = Level,                                                              \
    .species = Level < REMATCH_5_LEVEL_6 ? SPECIES_ROSELIA : SPECIES_ROSERADE, \
    .ability = ABILITY_POISON_POINT,                                           \
    .gender = TRAINER_MON_FEMALE,                                              \
    .moves = {MOVE_GIGA_DRAIN, MOVE_LEECH_SEED, MOVE_GROWTH, MOVE_SUNNY_DAY}

// Extra for hacks
#define MADELINE_STARYU
#define MADELINE_SPHEAL

[DIFFICULTY_NORMAL][TRAINER_MADELINE_1] =
{
    MADELINE_INFO,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        MADELINE_NUMEL(25),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_MADELINE_2] =
{
    MADELINE_INFO,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        MADELINE_NUMEL(REMATCH_2_LEVEL_1),
        IVS(1),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_MADELINE_3] =
{
    MADELINE_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        MADELINE_ROSELIA(REMATCH_3_LEVEL_2),
        IVS(3),
        },
        {
        MADELINE_NUMEL(REMATCH_3_LEVEL_2),
        IVS(3),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_MADELINE_4] =
{
    MADELINE_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        MADELINE_ROSELIA(REMATCH_4_LEVEL_2),
        IVS(3),
        },
        {
        MADELINE_NUMEL(REMATCH_4_LEVEL_2),
        IVS(3),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_MADELINE_5] =
{
    MADELINE_INFO,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = REMATCH_5_LEVEL_3,
        .species = SPECIES_SOLROCK,
        IVS(5),
        .moves = {MOVE_ROCK_SLIDE, MOVE_SOLAR_BEAM, MOVE_MORNING_SUN, MOVE_SUNNY_DAY}
        },
        {
        MADELINE_ROSELIA(REMATCH_5_LEVEL_3),
        IVS(4),
        },
        {
        MADELINE_NUMEL(REMATCH_5_LEVEL_3),
        IVS(4),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_TORI_AND_TIA] =
{
    .trainerName = _("Tori & Tia"),
    TWINS_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 24,
        .species = SPECIES_SPINDA,
        .ability = ABILITY_TANGLED_FEET,
        .nature = NATURE_ADAMANT,
        .gender = TRAINER_MON_MALE,
        },
        {
        .lvl = 24,
        .species = SPECIES_SPINDA,
        .ability = ABILITY_OWN_TEMPO,
        .nature = NATURE_MODEST,
        .gender = TRAINER_MON_FEMALE,
        }
    },
},

#define LAO_INFO             \
    .trainerName = _("Lao"), \
    NINJA_BOY_INFO,          \
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE

#define LAO_KOFFING(Level)                                     \
    .lvl = Level,                                              \
    .species = Level < 35 ? SPECIES_KOFFING : SPECIES_WEEZING, \
    .ability = ABILITY_NEUTRALIZING_GAS,                       \
    .gender = TRAINER_MON_MALE,                                \
    .moves = {Level < 32 ? MOVE_SLUDGE : MOVE_SLUDGE_BOMB, MOVE_SMOKESCREEN, MOVE_POISON_GAS, MOVE_ASSURANCE}

#define LAO_NINJASK(Level)      \
    .lvl = Level,               \
    .species = SPECIES_NINJASK, \
    .gender = TRAINER_MON_MALE, \
    .moves = {MOVE_AERIAL_ACE, MOVE_BATON_PASS, MOVE_AGILITY, MOVE_DOUBLE_TEAM}

#define LAO_SHEDINJA(Level)      \
    .lvl = Level,                \
    .species = SPECIES_SHEDINJA, \
    .moves = {Level < 29 ? MOVE_SHADOW_CLAW : MOVE_SHADOW_SNEAK, MOVE_DIG, MOVE_CONFUSE_RAY, MOVE_MUD_SLAP}

#define LAO_TORKOAL(Level)          \
    .lvl = Level,                   \
    .species = SPECIES_TORKOAL,     \
    .ability = ABILITY_WHITE_SMOKE, \
    .gender = TRAINER_MON_MALE,     \
    .moves = {Level < 28 ? MOVE_FLAME_WHEEL : (Level < 40 ? MOVE_LAVA_PLUME : MOVE_FLAMETHROWER), MOVE_SMOKESCREEN, MOVE_RAPID_SPIN, MOVE_SMOG}

[DIFFICULTY_NORMAL][TRAINER_LAO_1] =
{
    LAO_INFO,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        LAO_TORKOAL(23),
        },
        {
        .lvl = 23,
        .species = SPECIES_NINCADA,
        .moves = {MOVE_DIG, MOVE_MUD_SLAP, MOVE_SCRATCH, MOVE_SAND_ATTACK},
        .gender = TRAINER_MON_MALE,
        },
        {
        LAO_KOFFING(23),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_LAO_2] =
{
    LAO_INFO,
    .partySize = 4,
    .party = (const struct TrainerMon[]) {
        {
        LAO_TORKOAL(REMATCH_2_LEVEL_4),
        },
        {
        LAO_SHEDINJA(REMATCH_2_LEVEL_4),
        },
        {
        LAO_NINJASK(REMATCH_2_LEVEL_4),
        },
        {
        LAO_KOFFING(REMATCH_2_LEVEL_4),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_LAO_3] =
{
    LAO_INFO,
    .partySize = 4,
    .party = (const struct TrainerMon[]) {
        {
        LAO_TORKOAL(REMATCH_3_LEVEL_4),
        IVS(3),
        },
        {
        LAO_SHEDINJA(REMATCH_3_LEVEL_4),
        IVS(3),
        },
        {
        LAO_NINJASK(REMATCH_3_LEVEL_4),
        IVS(3),
        },
        {
        LAO_KOFFING(REMATCH_3_LEVEL_4),
        IVS(3),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_LAO_4] =
{
    LAO_INFO,
    .partySize = 4,
    .party = (const struct TrainerMon[]) {
        {
        LAO_TORKOAL(REMATCH_4_LEVEL_4),
        IVS(3),
        },
        {
        LAO_SHEDINJA(REMATCH_4_LEVEL_4),
        IVS(3),
        },
        {
        LAO_NINJASK(REMATCH_4_LEVEL_4),
        IVS(3),
        },
        {
        LAO_KOFFING(REMATCH_4_LEVEL_4),
        IVS(3),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_LAO_5] =
{
    LAO_INFO,
    .partySize = 4,
    .party = (const struct TrainerMon[]) {
        {
        LAO_TORKOAL(REMATCH_5_LEVEL_4),
        IVS(4),
        },
        {
        LAO_SHEDINJA(REMATCH_5_LEVEL_4),
        IVS(4),
        },
        {
        LAO_NINJASK(REMATCH_5_LEVEL_4),
        IVS(4),
        },
        {
        LAO_KOFFING(REMATCH_5_LEVEL_4),
        IVS(4),
        .heldItem = ITEM_SMOKE_BALL,
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_DILLON] =
{
    .trainerName = _("Dillon"),
    YOUNGSTER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 25,
        .species = SPECIES_ARON,
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_SOPHIE] =
{
    .trainerName = _("Sophie"),
    PICNICKER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 24,
        .species = SPECIES_AZUMARILL,
        },
        {
        .lvl = 24,
        .species = SPECIES_LOMBRE,
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_COBY] =
{
    .trainerName = _("Coby"),
    BIRD_KEEPER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 24,
        .species = SPECIES_SWELLOW,
        },
        {
        .lvl = 24,
        .species = SPECIES_SKARMORY,
        }
    },
},

// Route 114
[DIFFICULTY_NORMAL][TRAINER_NOLAN] =
{
    .trainerName = _("Nolan"),
    FISHERMAN_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 25,
        .species = SPECIES_GYARADOS,
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_CHARLOTTE] =
{
    .trainerName = _("Charlotte"),
    PICNICKER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 25,
        .species = SPECIES_NUZLEAF,
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_KAI] =
{
    .trainerName = _("Kai"),
    FISHERMAN_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 25,
        .species = SPECIES_BARBOACH,
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_CLAUDE] =
{
    .trainerName = _("Claude"),
    FISHERMAN_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 23,
        .species = SPECIES_CORPHISH,
        },
        {
        .lvl = 23,
        .species = SPECIES_GOLDEEN,
        },
        {
        .lvl = 23,
        .species = SPECIES_BARBOACH,
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_NANCY] =
{
    .trainerName = _("Nancy"),
    PICNICKER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 24,
        .species = SPECIES_MARILL,
        },
        {
        .lvl = 24,
        .species = SPECIES_LOMBRE,
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_TYRA_AND_IVY] =
{
    .trainerName = _("Tyra & Ivy"),
    TEAMMATES_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 23,
        .species = SPECIES_ROSELIA,
        .moves = {MOVE_MAGICAL_LEAF, MOVE_STUN_SPORE, MOVE_GROWTH, MOVE_LEECH_SEED}
        },
        {
        .lvl = 25,
        .species = SPECIES_GEODUDE,
        .moves = {MOVE_SMACK_DOWN, MOVE_BULLDOZE, MOVE_DEFENSE_CURL, MOVE_ROLLOUT}
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_SHANE] =
{
    .trainerName = _("Shane"),
    CAMPER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 24,
        .species = SPECIES_VOLBEAT,
        },
        {
        .lvl = 24,
        .species = SPECIES_NUZLEAF,
        }
    },
},

#define STEVE_INFO             \
    .trainerName = _("Steve"), \
    POKE_MANIAC_INFO,          \
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE

#define STEVE_ARON(Level)                                                                  \
    .lvl = Level,                                                                          \
    .species = Level < 32 ? SPECIES_ARON : (Level < 42 ? SPECIES_LAIRON : SPECIES_AGGRON), \
    .ability = ABILITY_STURDY,                                                             \
    .gender = TRAINER_MON_MALE

#define STEVE_RHYHORN(Level)                                                                                    \
    .lvl = Level,                                                                                               \
    .species = Level < max(42, REMATCH_4_LEVEL_6) ? SPECIES_RHYHORN : (Level < REMATCH_5_LEVEL_6 ? SPECIES_RHYDON : SPECIES_RHYPERIOR), \
    .ability = 1,                                                                                               \
    .gender = TRAINER_MON_MALE

// Extra for hacks
#define STEVE_SLOWPOKE
#define STEVE_MAREEP

[DIFFICULTY_NORMAL][TRAINER_STEVE_1] =
{
    STEVE_INFO,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        STEVE_ARON(25),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_STEVE_2] =
{
    STEVE_INFO,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        STEVE_ARON(REMATCH_2_LEVEL_1),
        IVS(1),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_STEVE_3] =
{
    STEVE_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        STEVE_RHYHORN(REMATCH_3_LEVEL_2),
        IVS(3),
        },
        {
        STEVE_ARON(REMATCH_3_LEVEL_2),
        IVS(3),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_STEVE_4] =
{
    STEVE_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        STEVE_RHYHORN(REMATCH_4_LEVEL_2),
        IVS(3),
        },
        {
        STEVE_ARON(REMATCH_4_LEVEL_2),
        IVS(3),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_STEVE_5] =
{
    STEVE_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        STEVE_RHYHORN(REMATCH_5_LEVEL_2),
        IVS(4),
        },
        {
        STEVE_ARON(REMATCH_5_LEVEL_2),
        IVS(4),
        }
    },
},

#define BERNIE_INFO             \
    .trainerName = _("Bernie"), \
    KINDLER_INFO,               \
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE

#define BERNIE_WINGULL(Level)                                                  \
    .lvl = Level,                                                              \
    .species = Level < REMATCH_2_LEVEL_6 ? SPECIES_WINGULL : SPECIES_PELIPPER, \
    .ability = ABILITY_KEEN_EYE,                                               \
    .gender = TRAINER_MON_MALE

#define BERNIE_SLUGMA(Level)                                   \
    .lvl = Level,                                              \
    .species = Level < 32 ? SPECIES_SLUGMA : SPECIES_MAGCARGO, \
    .ability = ABILITY_FLAME_BODY,                             \
    .gender = TRAINER_MON_MALE

#define BERNIE_NUMEL(Level)                                                  \
    .lvl = Level,                                                            \
    .species = Level < REMATCH_3_LEVEL_6 ? SPECIES_NUMEL : SPECIES_CAMERUPT, \
    .ability = ABILITY_OWN_TEMPO,                                            \
    .gender = TRAINER_MON_MALE

[DIFFICULTY_NORMAL][TRAINER_BERNIE_1] =
{
    BERNIE_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        BERNIE_SLUGMA(24),
        },
        {
        BERNIE_WINGULL(24),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_BERNIE_2] =
{
    BERNIE_INFO,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        BERNIE_NUMEL(REMATCH_2_LEVEL_3),
        IVS(1),
        },
        {
        BERNIE_SLUGMA(REMATCH_2_LEVEL_3),
        IVS(1),
        },
        {
        BERNIE_WINGULL(REMATCH_2_LEVEL_3),
        IVS(1),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_BERNIE_3] =
{
    BERNIE_INFO,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        BERNIE_NUMEL(REMATCH_3_LEVEL_3),
        IVS(3),
        },
        {
        BERNIE_SLUGMA(REMATCH_3_LEVEL_3),
        IVS(3),
        },
        {
        BERNIE_WINGULL(REMATCH_3_LEVEL_3),
        IVS(3),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_BERNIE_4] =
{
    BERNIE_INFO,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        BERNIE_NUMEL(REMATCH_4_LEVEL_3),
        IVS(3),
        },
        {
        BERNIE_SLUGMA(REMATCH_4_LEVEL_3),
        IVS(3),
        },
        {
        BERNIE_WINGULL(REMATCH_4_LEVEL_3),
        IVS(3),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_BERNIE_5] =
{
    BERNIE_INFO,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        BERNIE_NUMEL(REMATCH_5_LEVEL_3),
        IVS(4),
        },
        {
        BERNIE_SLUGMA(REMATCH_5_LEVEL_3),
        IVS(4),
        },
        {
        BERNIE_WINGULL(REMATCH_5_LEVEL_3),
        IVS(4),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_LUCAS] =
{
    .trainerName = _("Lucas"),
    HIKER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 24,
        .species = SPECIES_GEODUDE,
        },
        {
        .lvl = 24,
        .species = SPECIES_NUMEL,
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_ANGELINA] =
{
    .trainerName = _("Angelina"),
    PICNICKER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 24,
        .species = SPECIES_LOMBRE,
        },
        {
        .lvl = 24,
        .species = SPECIES_MARILL,
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_LENNY] =
{
    .trainerName = _("Lenny"),
    HIKER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 24,
        .species = SPECIES_GEODUDE,
        },
        {
        .lvl = 24,
        .species = SPECIES_MACHOP,
        }
    },
},

// Meteor Falls
COURTNEY_BATTLE(METEOR_FALLS, CAP_METEOR_FALLS, 3),

// Route 115 (south)
#define NOB_INFO             \
    .trainerName = _("Nob"), \
    BLACK_BELT_INFO,         \
    MINI_BOSS_AI_FLAGS

#define NOB_MACHOP(Level)        \
    {                            \
    .lvl = Level,                \
    .species = Level < REMATCH_2_LEVEL_6 ? SPECIES_MACHOP : (Level < REMATCH_3_LEVEL_6 ? SPECIES_MACHOKE : SPECIES_MACHAMP), \
    .nature = NATURE_ADAMANT,    \
    .ability = ABILITY_NO_GUARD, \
    PERFECT_IVS,                 \
    .gender = TRAINER_MON_MALE,  \
    .heldItem = ITEM_BLACK_BELT  \
    }

#define NOB_BRELOOM(Level)          \
    .lvl = Level,                   \
    .species = SPECIES_BRELOOM,     \
    .nature = NATURE_ADAMANT,       \
    .ability = ABILITY_POISON_HEAL, \
    .gender = TRAINER_MON_MALE

#define NOB_HERACROSS(Level)      \
    .lvl = Level,                 \
    .species = SPECIES_HERACROSS, \
    .nature = NATURE_ADAMANT,     \
    .ability = ABILITY_GUTS,      \
    .gender = TRAINER_MON_MALE

// Extra for hacks
#define NOB_MANKEY(Level)            \
    .lvl = Level,                    \
    .species = Level < REMATCH_2_LEVEL_6 ? SPECIES_MANKEY : (Level < REMATCH_5_LEVEL_6 ? SPECIES_PRIMEAPE : SPECIES_ANNIHILAPE), \
    .nature = NATURE_ADAMANT,        \
    .ability = ABILITY_VITAL_SPIRIT, \
    .gender = TRAINER_MON_MALE

#define NOB_HITMONLEE

[DIFFICULTY_NORMAL][TRAINER_NOB_1] =
{
    NOB_INFO,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        NOB_MACHOP(27),
    },
},

[DIFFICULTY_NORMAL][TRAINER_NOB_2] =
{
    NOB_INFO,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        NOB_MACHOP(REMATCH_2_LEVEL_1),
    },
},

[DIFFICULTY_NORMAL][TRAINER_NOB_3] =
{
    NOB_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        NOB_BRELOOM(REMATCH_3_LEVEL_2),
        IVS(14),
        },
        NOB_MACHOP(REMATCH_3_LEVEL_1),
    },
},

[DIFFICULTY_NORMAL][TRAINER_NOB_4] =
{
    NOB_INFO,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        NOB_HERACROSS(REMATCH_4_LEVEL_2),
        IVS(15),
        },
        {
        NOB_BRELOOM(REMATCH_4_LEVEL_2),
        IVS(15),
        },
        NOB_MACHOP(REMATCH_4_LEVEL_1),
    },
},

[DIFFICULTY_NORMAL][TRAINER_NOB_5] =
{
    NOB_INFO,
    .partySize = 4,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = REMATCH_5_LEVEL_2,
        .species = SPECIES_HARIYAMA,
        IVS(17),
        },
        {
        NOB_HERACROSS(REMATCH_5_LEVEL_2),
        IVS(17),
        },
        {
        NOB_BRELOOM(REMATCH_5_LEVEL_2),
        IVS(17),
        },
        NOB_MACHOP(REMATCH_5_MINI_BOSS),
    },
},

[DIFFICULTY_NORMAL][TRAINER_HECTOR] =
{
    .trainerName = _("Hector"),
    COLLECTOR_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 25,
        .species = SPECIES_LUNATONE,
        },
        {
        .lvl = 25,
        .species = SPECIES_SOLROCK,
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_MARLENE] =
{
    .trainerName = _("Marlene"),
    PSYCHIC_F_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 25,
        .species = SPECIES_BALTOY,
        },
        {
        .lvl = 25,
        .species = SPECIES_SPOINK,
        }
    },
},

#define CYNDY_INFO             \
    .trainerName = _("Cyndy"), \
    BATTLE_GIRL_INFO,          \
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE

#define CYNDY_MEDITITE(Level)                                                   \
    .lvl = Level,                                                               \
    .species = Level < REMATCH_4_LEVEL_6 ? SPECIES_MEDITITE : SPECIES_MEDICHAM, \
    .nature = NATURE_ADAMANT,                                                   \
    .gender = TRAINER_MON_FEMALE

#define CYNDY_MAKUHITA(Level)                                                   \
    .lvl = Level,                                                               \
    .species = Level < REMATCH_2_LEVEL_6 ? SPECIES_MAKUHITA : SPECIES_HARIYAMA, \
    .nature = NATURE_ADAMANT,                                                   \
    .ability = ABILITY_GUTS,                                                    \
    .gender = TRAINER_MON_FEMALE

// Extra for hacks
#define CYNDY_HITMONCHAN

[DIFFICULTY_NORMAL][TRAINER_CYNDY_1] =
{
    CYNDY_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        CYNDY_MEDITITE(25),
        IVS(12),
        },
        {
        CYNDY_MAKUHITA(25),
        IVS(12),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_CYNDY_2] =
{
    CYNDY_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        CYNDY_MEDITITE(REMATCH_2_LEVEL_2),
        IVS(13),
        },
        {
        CYNDY_MAKUHITA(REMATCH_2_LEVEL_2),
        IVS(13),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_CYNDY_3] =
{
    CYNDY_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        CYNDY_MEDITITE(REMATCH_3_LEVEL_2),
        IVS(14),
        },
        {
        CYNDY_MAKUHITA(REMATCH_3_LEVEL_2),
        IVS(14),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_CYNDY_4] =
{
    CYNDY_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        CYNDY_MEDITITE(REMATCH_4_LEVEL_2),
        IVS(15),
        },
        {
        CYNDY_MAKUHITA(REMATCH_4_LEVEL_2),
        IVS(15),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_CYNDY_5] =
{
    CYNDY_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        CYNDY_MEDITITE(REMATCH_5_LEVEL_2),
        IVS(17),
        },
        {
        CYNDY_MAKUHITA(REMATCH_5_LEVEL_2),
        IVS(17),
        }
    },
},

// Mt. Chimney (Magma)
GINNY_BATTLE(MT_CHIMNEY, CAP_MT_CHIMNEY - 3),
LANDON_BATTLE(MT_CHIMNEY, CAP_MT_CHIMNEY - 3),
TABITHA_BATTLE(MT_CHIMNEY, CAP_MT_CHIMNEY - 1, 6),

[DIFFICULTY_NORMAL][TRAINER_MAXIE_MT_CHIMNEY] =
{
    MAXIE_INFO,
    .items = {ITEM_SUPER_POTION, ITEM_SUPER_POTION, ITEM_NONE, ITEM_NONE},
    .partySize = 4,
    .party = (const struct TrainerMon[]) {
        MAXIE_TRAPINCH(CAP_MT_CHIMNEY - 2),
        MAXIE_GOLETT(CAP_MT_CHIMNEY - 1),
        MAXIE_RHYHORN(CAP_MT_CHIMNEY - 1),
        {
        HUMPHREY(CAP_MT_CHIMNEY),
        }
    },
},

// Jagged Pass
[DIFFICULTY_NORMAL][TRAINER_ERIC] =
{
    .trainerName = _("Ricard"),
    HIKER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 26,
        .species = SPECIES_MACHOP,
        },
        {
        .lvl = 26,
        .species = SPECIES_BALTOY,
        }
    },
},

TERRANCE_BATTLE(JAGGED_PASS, 27),

#define DIANA_INFO             \
    .trainerName = _("Diana"), \
    PICNICKER_INFO,            \
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE

#define DIANA_SWABLU(Level)                                   \
    .lvl = Level,                                             \
    .species = Level < 35 ? SPECIES_SWABLU : SPECIES_ALTARIA, \
    .ability = ABILITY_FLUFFY,                                \
    .gender = TRAINER_MON_FEMALE

#define DIANA_ODDISH(Level) \
    .lvl = Level,           \
    .species = Level < REMATCH_2_LEVEL_6 ? SPECIES_ODDISH : (Level < REMATCH_3_LEVEL_6 ? SPECIES_GLOOM : SPECIES_VILEPLUME), \
    .gender = TRAINER_MON_FEMALE

#define DIANA_SHROOMISH(Level)                                                  \
    .lvl = Level,                                                               \
    .species = Level < REMATCH_2_LEVEL_6 ? SPECIES_SHROOMISH : SPECIES_BRELOOM, \
    .ability = ABILITY_POISON_HEAL,                                             \
    .gender = TRAINER_MON_FEMALE

[DIFFICULTY_NORMAL][TRAINER_DIANA_1] =
{
    DIANA_INFO,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        DIANA_SHROOMISH(25),
        },
        {
        DIANA_ODDISH(25),
        },
        {
        DIANA_SWABLU(25),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_DIANA_2] =
{
    DIANA_INFO,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        DIANA_SHROOMISH(REMATCH_2_LEVEL_3),
        IVS(2),
        },
        {
        DIANA_ODDISH(REMATCH_2_LEVEL_3),
        IVS(2),
        },
        {
        DIANA_SWABLU(REMATCH_2_LEVEL_3),
        IVS(2),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_DIANA_3] =
{
    DIANA_INFO,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        DIANA_SHROOMISH(REMATCH_3_LEVEL_3),
        IVS(3),
        },
        {
        DIANA_ODDISH(REMATCH_3_LEVEL_3),
        IVS(3),
        },
        {
        DIANA_SWABLU(REMATCH_3_LEVEL_3),
        IVS(3),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_DIANA_4] =
{
    DIANA_INFO,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        DIANA_SHROOMISH(REMATCH_4_LEVEL_3),
        IVS(4),
        },
        {
        DIANA_ODDISH(REMATCH_4_LEVEL_3),
        IVS(4),
        },
        {
        DIANA_SWABLU(REMATCH_4_LEVEL_3),
        IVS(4),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_DIANA_5] =
{
    DIANA_INFO,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        DIANA_SHROOMISH(REMATCH_5_LEVEL_3),
        IVS(5),
        },
        {
        DIANA_ODDISH(REMATCH_5_LEVEL_3),
        IVS(5),
        },
        {
        DIANA_SWABLU(REMATCH_5_LEVEL_3),
        IVS(5),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_AUTUMN] =
{
    .trainerName = _("Autumn"),
    PICNICKER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 27,
        .species = SPECIES_SHROOMISH,
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_JULIO] =
{
    .trainerName = _("Julio"),
    TRIATHLETE_M_CYCLING_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        TRIATHLETE_MON(27, 0),
        .species = SPECIES_CYCLIZAR,
        }
    },
},

#define ETHAN_INFO             \
    .trainerName = _("Ethan"), \
    CAMPER_INFO,               \
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE

#define ETHAN_TAILLOW(Level)                                                  \
    .lvl = Level,                                                             \
    .species = Level < REMATCH_2_LEVEL_6 ? SPECIES_TAILLOW : SPECIES_SWELLOW, \
    .gender = TRAINER_MON_MALE

#define ETHAN_GULPIN(Level)                                                 \
    .lvl = Level,                                                           \
    .species = Level < REMATCH_2_LEVEL_6 ? SPECIES_GULPIN : SPECIES_SWALOT, \
    .ability = ABILITY_LIQUID_OOZE,                                         \
    .gender = TRAINER_MON_MALE

#define ETHAN_LINOONE(Level)    \
    .lvl = Level,               \
    .species = SPECIES_LINOONE, \
    .ability = ABILITY_PICKUP,  \
    .gender = TRAINER_MON_MALE

#define ETHAN_GOLBAT(Level)                                                 \
    .lvl = Level,                                                           \
    .species = Level < REMATCH_5_LEVEL_6 ? SPECIES_GOLBAT : SPECIES_CROBAT, \
    .gender = TRAINER_MON_MALE

#define ETHAN_SANDSLASH(Level)    \
    .lvl = Level,                 \
    .species = SPECIES_SANDSLASH, \
    .gender = TRAINER_MON_MALE

// Extra for hacks
#define ETHAN_STUNKY

[DIFFICULTY_NORMAL][TRAINER_ETHAN_1] =
{
    ETHAN_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        ETHAN_GULPIN(26),
        },
        {
        ETHAN_TAILLOW(26),
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_ETHAN_2] =
{
    ETHAN_INFO,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        ETHAN_LINOONE(REMATCH_2_LEVEL_3),
        IVS(2),
        },
        {
        ETHAN_GULPIN(REMATCH_2_LEVEL_3),
        IVS(2),
        },
        {
        ETHAN_TAILLOW(REMATCH_2_LEVEL_3),
        IVS(2),
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_ETHAN_3] =
{
    ETHAN_INFO,
    .partySize = 4,
    .party = (const struct TrainerMon[]) {
        {
        ETHAN_GOLBAT(REMATCH_3_LEVEL_4),
        IVS(3),
        },
        {
        ETHAN_LINOONE(REMATCH_3_LEVEL_4),
        IVS(3),
        },
        {
        ETHAN_GULPIN(REMATCH_3_LEVEL_4),
        IVS(3),
        },
        {
        ETHAN_TAILLOW(REMATCH_3_LEVEL_4),
        IVS(3),
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_ETHAN_4] =
{
    ETHAN_INFO,
    .partySize = 5,
    .party = (const struct TrainerMon[]) {
        {
        ETHAN_SANDSLASH(REMATCH_4_LEVEL_5),
        IVS(4),
        },
        {
        ETHAN_GOLBAT(REMATCH_4_LEVEL_5),
        IVS(4),
        },
        {
        ETHAN_LINOONE(REMATCH_4_LEVEL_5),
        IVS(4),
        },
        {
        ETHAN_GULPIN(REMATCH_4_LEVEL_5),
        IVS(4),
        },
        {
        ETHAN_TAILLOW(REMATCH_4_LEVEL_5),
        IVS(4),
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_ETHAN_5] =
{
    ETHAN_INFO,
    .partySize = 5,
    .party = (const struct TrainerMon[]) {
        {
        ETHAN_SANDSLASH(REMATCH_5_LEVEL_5),
        IVS(5),
        },
        {
        ETHAN_GOLBAT(REMATCH_5_LEVEL_5),
        IVS(5),
        },
        {
        ETHAN_LINOONE(REMATCH_5_LEVEL_5),
        IVS(5),
        },
        {
        ETHAN_GULPIN(REMATCH_5_LEVEL_5),
        IVS(5),
        },
        {
        ETHAN_TAILLOW(REMATCH_5_LEVEL_5),
        IVS(5),
        },
    },
},

// Lavaridge Gym
[DIFFICULTY_NORMAL][TRAINER_JEFF] =
{
    .trainerName = _("Jeff"),
    BUG_CATCHER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 27,
        .species = SPECIES_ILLUMISE,
        IVS(12),
        },
        {
        .lvl = 27,
        .species = SPECIES_VOLBEAT,
        IVS(12),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_JACE] =
{
    .trainerName = _("Jace"),
    BUG_CATCHER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 28,
        .species = SPECIES_DUSTOX,
        IVS(12),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_ELI] =
{
    .trainerName = _("Eli"),
    BUG_MANIAC_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 28,
        .species = SPECIES_ANORITH,
        IVS(12),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_COLE] =
{
    .trainerName = _("Cole"),
    BUG_CATCHER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 28,
        .species = SPECIES_NINJASK,
        IVS(12),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_GERALD] =
{
    .trainerName = _("Gerald"),
    BUG_MANIAC_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 28,
        .species = SPECIES_SHEDINJA,
        IVS(12),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_AXLE] =
{
    .trainerName = _("Axle"),
    BUG_CATCHER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 28,
        .species = SPECIES_CENTISKORCH,
        IVS(12),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_KEEGAN] =
{
    .trainerName = _("Keegan"),
    BUG_CATCHER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 28,
        .species = SPECIES_PINSIR,
        IVS(14),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_DANIELLE] =
{
    .trainerName = _("Danielle"),
    PICNICKER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 28,
        .species = SPECIES_HERACROSS,
        IVS(12),
        }
    },
},

// Mt. Chimney
[DIFFICULTY_NORMAL][TRAINER_SHIRLEY] =
{
    .trainerName = _("Shirley"),
    BEAUTY_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 28,
        .species = SPECIES_NUMEL,
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_SHEILA] =
{
    .trainerName = _("Sheila"),
    BEAUTY_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 28,
        .species = SPECIES_SHROOMISH,
        }
    },
},

#define SHELBY_INFO             \
    .trainerName = _("Shelby"), \
    EXPERT_F_INFO,              \
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY

#define SHELBY_MEDITITE(Level)                                   \
    .lvl = Level,                                                \
    .species = Level < 37 ? SPECIES_MEDITITE : SPECIES_MEDICHAM, \
    .gender = TRAINER_MON_FEMALE

#define SHELBY_MAKUHITA(Level)                                                  \
    .lvl = Level,                                                               \
    .species = Level < REMATCH_2_LEVEL_6 ? SPECIES_MAKUHITA : SPECIES_HARIYAMA, \
    .ability = ABILITY_GUTS,                                                    \
    .gender = TRAINER_MON_FEMALE

// Extra for hacks
#define SHELBY_RIOLU

[DIFFICULTY_NORMAL][TRAINER_SHELBY_1] =
{
    SHELBY_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        SHELBY_MAKUHITA(27),
        IVS(24),
        },
        {
        SHELBY_MEDITITE(27),
        IVS(24),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_SHELBY_2] =
{
    SHELBY_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        SHELBY_MAKUHITA(REMATCH_2_LEVEL_2),
        IVS(25),
        },
        {
        SHELBY_MEDITITE(REMATCH_2_LEVEL_2),
        IVS(25),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_SHELBY_3] =
{
    SHELBY_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        SHELBY_MAKUHITA(REMATCH_3_LEVEL_2),
        IVS(26),
        },
        {
        SHELBY_MEDITITE(REMATCH_3_LEVEL_2),
        IVS(26),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_SHELBY_4] =
{
    SHELBY_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        SHELBY_MAKUHITA(REMATCH_4_LEVEL_2),
        IVS(27),
        },
        {
        SHELBY_MEDITITE(REMATCH_4_LEVEL_2),
        IVS(27),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_SHELBY_5] =
{
    SHELBY_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        SHELBY_MAKUHITA(REMATCH_5_LEVEL_2),
        IVS(29),
        },
        {
        SHELBY_MEDITITE(REMATCH_5_LEVEL_2),
        IVS(29),
        }
    },
},

#define SAWYER_INFO             \
    .trainerName = _("Sawyer"), \
    HIKER_INFO,                 \
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY

#define SAWYER_GEODUDE(Level)  \
    .lvl = Level,              \
    .species = Level < REMATCH_2_LEVEL_6 ? SPECIES_GEODUDE : (Level < REMATCH_3_LEVEL_6 ? SPECIES_GRAVELER : SPECIES_GOLEM), \
    .ability = ABILITY_STURDY, \
    .gender = TRAINER_MON_MALE

#define SAWYER_NUMEL(Level)                                                  \
    .lvl = Level,                                                            \
    .species = Level < REMATCH_3_LEVEL_6 ? SPECIES_NUMEL : SPECIES_CAMERUPT, \
    .ability = 0,                                                            \
    .gender = TRAINER_MON_MALE

#define SAWYER_MACHOKE(Level)                                                 \
    .lvl = Level,                                                             \
    .species = Level < REMATCH_5_LEVEL_6 ? SPECIES_MACHOKE : SPECIES_MACHAMP, \
    .ability = ABILITY_GUTS,                                                  \
    .gender = TRAINER_MON_MALE

[DIFFICULTY_NORMAL][TRAINER_SAWYER_1] =
{
    SAWYER_INFO,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        SAWYER_GEODUDE(28),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_SAWYER_2] =
{
    SAWYER_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        SAWYER_NUMEL(REMATCH_2_LEVEL_2),
        IVS(2),
        },
        {
        SAWYER_GEODUDE(REMATCH_2_LEVEL_2),
        IVS(2),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_SAWYER_3] =
{
    SAWYER_INFO,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        SAWYER_MACHOKE(REMATCH_3_LEVEL_3),
        IVS(3),
        },
        {
        SAWYER_NUMEL(REMATCH_3_LEVEL_3),
        IVS(3),
        },
        {
        SAWYER_GEODUDE(REMATCH_3_LEVEL_3),
        IVS(3),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_SAWYER_4] =
{
    SAWYER_INFO,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        SAWYER_MACHOKE(REMATCH_4_LEVEL_3),
        IVS(4),
        },
        {
        SAWYER_NUMEL(REMATCH_4_LEVEL_3),
        IVS(4),
        },
        {
        SAWYER_GEODUDE(REMATCH_4_LEVEL_3),
        IVS(4),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_SAWYER_5] =
{
    SAWYER_INFO,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        SAWYER_MACHOKE(REMATCH_5_LEVEL_3),
        IVS(5),
        },
        {
        SAWYER_NUMEL(REMATCH_5_LEVEL_3),
        IVS(5),
        },
        {
        SAWYER_GEODUDE(REMATCH_5_LEVEL_3),
        IVS(5),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_MELISSA] =
{
    .trainerName = _("Melissa"),
    BEAUTY_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 28,
        .species = SPECIES_MARILL,
        }
    },
},

// Route 111 (desert)
[DIFFICULTY_NORMAL][TRAINER_HEIDI] =
{
    .trainerName = _("Heidi"),
    PICNICKER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 29,
        .species = SPECIES_SANDSHREW,
        },
        {
        .lvl = 29,
        .species = SPECIES_BALTOY,
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_BEAU] =
{
    .trainerName = _("Beau"),
    CAMPER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 28,
        .species = SPECIES_BALTOY,
        },
        {
        .lvl = 28,
        .species = SPECIES_SANDSHREW,
        },
        {
        .lvl = 28,
        .species = SPECIES_BALTOY,
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_DREW] =
{
    .trainerName = _("Drew"),
    CAMPER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 30,
        .species = SPECIES_TRAPINCH,
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_BECKY] =
{
    .trainerName = _("Becky"),
    PICNICKER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 29,
        .species = SPECIES_SANDSHREW,
        },
        {
        .lvl = 29,
        .species = SPECIES_MARILL,
        }
    },
},

#define DUSTY_INFO             \
    .trainerName = _("Dusty"), \
    RUIN_MANIAC_INFO,          \
    MINI_BOSS_AI_FLAGS

#define DUSTY_SANDSLASH(Level)    \
    .lvl = Level,                 \
    .species = SPECIES_SANDSLASH, \
    IVS(10),                      \
    .gender = TRAINER_MON_MALE

#define DUSTY_BALTOY(Level)                                   \
    .lvl = Level,                                             \
    .species = Level < 36 ? SPECIES_BALTOY : SPECIES_CLAYDOL, \
    IVS(10)

// Extra for hacks
#define DUSTY_AERODACTYL
#define DUSTY_TYRUNT
#define DUSTY_AMAURA

[DIFFICULTY_NORMAL][TRAINER_DUSTY_1] =
{
    DUSTY_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        DUSTY_BALTOY(30),
        },
        {
        DUSTY_SANDSLASH(30),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_DUSTY_2] =
{
    DUSTY_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        DUSTY_BALTOY(REMATCH_2_LEVEL_1),
        },
        {
        DUSTY_SANDSLASH(REMATCH_2_LEVEL_1),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_DUSTY_3] =
{
    DUSTY_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        DUSTY_BALTOY(REMATCH_3_LEVEL_1),
        },
        {
        DUSTY_SANDSLASH(REMATCH_3_LEVEL_1),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_DUSTY_4] =
{
    DUSTY_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        DUSTY_BALTOY(REMATCH_4_LEVEL_1),
        },
        {
        DUSTY_SANDSLASH(REMATCH_4_LEVEL_1),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_DUSTY_5] =
{
    DUSTY_INFO,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = REMATCH_5_LEVEL_2,
        .species = SPECIES_RELICANTH,
        .gender = TRAINER_MON_MALE,
        },
        {
        DUSTY_BALTOY(REMATCH_5_MINI_BOSS),
        },
        {
        DUSTY_SANDSLASH(REMATCH_5_MINI_BOSS),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_CELIA] =
{
    .trainerName = _("Celia"),
    PICNICKER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 29,
        .species = SPECIES_AZUMARILL,
        },
        {
        .lvl = 29,
        .species = SPECIES_LOMBRE,
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_BRYAN] =
{
    .trainerName = _("Bryan"),
    RUIN_MANIAC_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 29,
        .species = SPECIES_TRAPINCH,
        },
        {
        .lvl = 29,
        .species = SPECIES_GOLETT,
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_BRANDEN] =
{
    .trainerName = _("Branden"),
    CAMPER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 28,
        .species = SPECIES_TAILLOW,
        },
        {
        .lvl = 28,
        .species = SPECIES_NUZLEAF,
        },
        {
        .lvl = 28,
        .species = SPECIES_BRANDEN,
        }
    },
},

// Trick House 3
[DIFFICULTY_NORMAL][TRAINER_JUSTIN] =
{
    .trainerName = _("Justin"),
    CAMPER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 30,
        .species = SPECIES_KECLEON,
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_MARTHA] =
{
    .trainerName = _("Martha"),
    PICNICKER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 29,
        .species = SPECIES_SKITTY,
        },
        {
        .lvl = 29,
        .species = SPECIES_SWABLU,
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_ALAN] =
{
    .trainerName = _("Alan"),
    HIKER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 28,
        .species = SPECIES_RHYHORN,
        },
        {
        .lvl = 28,
        .species = SPECIES_NOSEPASS,
        },
        {
        .lvl = 28,
        .species = SPECIES_GRAVELER,
        }
    },
},

// Petalburg Gym
#define PETALBURG_GYM_TRAINER(Trainer, Name, Gender, Item, Species, HeldItem, Move1, Move2, Move3, Move4) \
[DIFFICULTY_NORMAL][TRAINER_##Trainer] =                                                                  \
{                                                                                                         \
    .trainerName = _(Name),                                                                               \
    ACE_TRAINER_##Gender##_INFO,                                                                          \
    .items = {ITEM_##Item, ITEM_NONE, ITEM_NONE, ITEM_NONE},                                              \
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_FORCE_SETUP_FIRST_TURN, \
    .partySize = 1,                                                                                       \
    .party = (const struct TrainerMon[]) {                                                                \
        {                                                                                                 \
        .lvl = 31,                                                                                        \
        .species = SPECIES_##Species,                                                                     \
        PERFECT_IVS,                                                                                      \
        .heldItem = ITEM_##HeldItem,                                                                      \
        .moves = {MOVE_##Move1, MOVE_##Move2, MOVE_##Move3, MOVE_##Move4}                                 \
        }                                                                                                 \
    },                                                                                                    \
}

PETALBURG_GYM_TRAINER(RANDALL, "Randall", M, X_SPEED,      SWELLOW,    SALAC_BERRY,  QUICK_ATTACK, AGILITY,     WING_ATTACK,  NONE),
PETALBURG_GYM_TRAINER(MARY,    "Mary",    F, X_ACCURACY,   DELCATTY,   MICLE_BERRY,  SWIFT,        SHOCK_WAVE,  FEINT_ATTACK, DISARMING_VOICE),
PETALBURG_GYM_TRAINER(PARKER,  "Parker",  M, HYPER_POTION, SPINDA,     PERSIM_BERRY, TEETER_DANCE, DIZZY_PUNCH, PSYBEAM,      NONE),
PETALBURG_GYM_TRAINER(ALEXIA,  "Alexia",  F, X_DEFENSE,    WIGGLYTUFF, GANLON_BERRY, DEFENSE_CURL, FACADE,      BODY_PRESS,   NONE),
PETALBURG_GYM_TRAINER(GEORGE,  "George",  M, HYPER_POTION, VIGOROTH,   SITRUS_BERRY, SLACK_OFF,    DRAIN_PUNCH, ENDURE,       NONE),
PETALBURG_GYM_TRAINER(JODY,    "Jody",    F, X_ATTACK,     RUFFLET,    LIECHI_BERRY, SWORDS_DANCE, CRUSH_CLAW,  NONE,         NONE),
PETALBURG_GYM_TRAINER(BERKE,   "Berke",   M, DIRE_HIT,     FARFETCHD,  LEEK,         SLASH,        NONE,        NONE,         NONE),

// Route 103 (water)
[DIFFICULTY_NORMAL][TRAINER_ISABELLE] =
{
    .trainerName = _("Isabelle"),
    SWIMMER_F_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 32,
        .species = SPECIES_AZUMARILL,
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_PETE] =
{
    .trainerName = _("Pete"),
    SWIMMER_M_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 32,
        .species = SPECIES_TENTACRUEL,
        }
    },
},

// Route 115 (north)
[DIFFICULTY_NORMAL][TRAINER_JAIDEN] =
{
    .trainerName = _("Jaiden"),
    NINJA_BOY_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 31,
        .species = SPECIES_NINJASK,
        },
        {
        .lvl = 31,
        .species = SPECIES_GULPIN,
        }
    },
},

#define TIMOTHY_INFO             \
    .trainerName = _("Timothy"), \
    EXPERT_M_INFO,               \
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY

#define TIMOTHY_HARIYAMA(Level)  \
    .lvl = Level,                \
    .species = SPECIES_HARIYAMA, \
    .ability = ABILITY_GUTS,     \
    .gender = TRAINER_MON_MALE

// Extra for hacks
#define TIMOTHY_TIMBURR

#define TIMOTHY_HAWLUCHA(Level)  \
    .lvl = Level,                \
    .species = SPECIES_HAWLUCHA, \
    .ability = ABILITY_LIMBER,   \
    .gender = TRAINER_MON_MALE

[DIFFICULTY_NORMAL][TRAINER_TIMOTHY_1] =
{
    TIMOTHY_INFO,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        TIMOTHY_HARIYAMA(32),
        IVS(24),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_TIMOTHY_2] =
{
    TIMOTHY_INFO,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        TIMOTHY_HARIYAMA(REMATCH_2_LEVEL_1),
        IVS(25),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_TIMOTHY_3] =
{
    TIMOTHY_INFO,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        TIMOTHY_HARIYAMA(REMATCH_3_LEVEL_1),
        IVS(26),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_TIMOTHY_4] =
{
    TIMOTHY_INFO,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        TIMOTHY_HARIYAMA(REMATCH_4_LEVEL_1),
        IVS(27),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_TIMOTHY_5] =
{
    TIMOTHY_INFO,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        TIMOTHY_HARIYAMA(REMATCH_5_LEVEL_1),
        IVS(29),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_KYRA] =
{
    .trainerName = _("Kyra"),
    TRIATHLETE_F_RUNNING_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        TRIATHLETE_MON(31, 0),
        .species = SPECIES_JIGGLYPUFF,
        },
        {
        TRIATHLETE_MON(31, 0),
        .species = SPECIES_DODUO,
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_KOICHI] =
{
    .trainerName = _("Koichi"),
    BLACK_BELT_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 31,
        .species = SPECIES_KOICHI,
        IVS(12),
        },
        {
        .lvl = 31,
        .species = SPECIES_KOICHI,
        IVS(18),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_HELENE] =
{
    .trainerName = _("Helena"),
    BATTLE_GIRL_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 31,
        .species = SPECIES_MAKUHITA,
        },
        {
        .lvl = 31,
        .species = SPECIES_MEDITITE,
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_ALIX] =
{
    .trainerName = _("Alix"),
    PSYCHIC_F_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 31,
        .species = SPECIES_KADABRA,
        },
        {
        .lvl = 31,
        .species = SPECIES_KIRLIA,
        }
    },
},

// Route 105
[DIFFICULTY_NORMAL][TRAINER_IMANI] =
{
    .trainerName = _("Imani"),
    SWIMMER_F_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 32,
        .species = SPECIES_AZUMARILL,
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_DOMINIK] =
{
    .trainerName = _("Dominik"),
    SWIMMER_M_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 32,
        .species = SPECIES_TENTACRUEL,
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_FOSTER] =
{
    .trainerName = _("Foster"),
    RUIN_MANIAC_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 31,
        .species = SPECIES_SANDYGAST,
        IVS(12),
        },
        {
        .lvl = 31,
        .species = SPECIES_SILICOBRA,
        IVS(12),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_BEVERLY] =
{
    .trainerName = _("Beverly"),
    SWIMMER_F_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 31,
        .species = SPECIES_PELIPPER,
        },
        {
        .lvl = 31,
        .species = SPECIES_WAILMER,
        }
    },
},

#define ANDRES_INFO             \
    .trainerName = _("Andres"), \
    RUIN_MANIAC_INFO,           \
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE

#define ANDRES_SANDSHREW(Level)                                                   \
    .lvl = Level,                                                                 \
    .species = Level < REMATCH_2_LEVEL_2 ? SPECIES_SANDSHREW : SPECIES_SANDSLASH, \
    .gender = TRAINER_MON_MALE

#define ANDRES_BALTOY(Level) \
    .lvl = Level,            \
    .species = Level < 36 ? SPECIES_BALTOY : SPECIES_CLAYDOL

#define ANDRES_NOSEPASS(Level)                                                   \
    .lvl = Level,                                                                \
    .species = Level < REMATCH_5_LEVEL_6 ? SPECIES_NOSEPASS : SPECIES_PROBOPASS, \
    .ability = ABILITY_MAGNET_PULL,                                              \
    .gender = TRAINER_MON_MALE

[DIFFICULTY_NORMAL][TRAINER_ANDRES_1] =
{
    ANDRES_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        ANDRES_BALTOY(31),
        IVS(6),
        },
        {
        ANDRES_SANDSHREW(31),
        IVS(6),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_ANDRES_2] =
{
    ANDRES_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        ANDRES_BALTOY(REMATCH_2_LEVEL_2),
        IVS(1),
        },
        {
        ANDRES_SANDSHREW(REMATCH_2_LEVEL_2),
        IVS(1),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_ANDRES_3] =
{
    ANDRES_INFO,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        ANDRES_NOSEPASS(REMATCH_3_LEVEL_3),
        IVS(3),
        },
        {
        ANDRES_BALTOY(REMATCH_3_LEVEL_3),
        IVS(3),
        },
        {
        ANDRES_SANDSHREW(REMATCH_3_LEVEL_3),
        IVS(3),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_ANDRES_4] =
{
    ANDRES_INFO,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        ANDRES_NOSEPASS(REMATCH_4_LEVEL_3),
        IVS(4),
        },
        {
        ANDRES_BALTOY(REMATCH_4_LEVEL_3),
        IVS(4),
        },
        {
        ANDRES_SANDSHREW(REMATCH_4_LEVEL_3),
        IVS(4),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_ANDRES_5] =
{
    ANDRES_INFO,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        ANDRES_NOSEPASS(REMATCH_5_LEVEL_3),
        IVS(5),
        },
        {
        ANDRES_BALTOY(REMATCH_5_LEVEL_3),
        IVS(5),
        },
        {
        ANDRES_SANDSHREW(REMATCH_5_LEVEL_3),
        IVS(5),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_JOSUE] =
{
    .trainerName = _("Josue"),
    BIRD_KEEPER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 31,
        .species = SPECIES_SWELLOW,
        IVS(6),
        },
        {
        .lvl = 31,
        .species = SPECIES_PELIPPER,
        IVS(6),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_LUIS] =
{
    .trainerName = _("Luis"),
    SWIMMER_M_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 32,
        .species = SPECIES_CARVANHA,
        }
    },
},

// Route 106 (water)
[DIFFICULTY_NORMAL][TRAINER_DOUGLAS] =
{
    .trainerName = _("Douglas"),
    SWIMMER_M_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 31,
        .species = SPECIES_STARYU,
        IVS(1),
        },
        {
        .lvl = 31,
        .species = SPECIES_HORSEA,
        IVS(1),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_KYLA] =
{
    .trainerName = _("Kyla"),
    SWIMMER_F_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 31,
        .species = SPECIES_GOLDEEN,
        },
        {
        .lvl = 31,
        .species = SPECIES_WAILMER,
        }
    },
},

// Route 107
[DIFFICULTY_NORMAL][TRAINER_DENISE] =
{
    .trainerName = _("Denise"),
    SWIMMER_F_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 31,
        .species = SPECIES_WINGULL,
        },
        {
        .lvl = 31,
        .species = SPECIES_GOLDEEN,
        }
    },
},

#define TONY_INFO             \
    .trainerName = _("Tony"), \
    SWIMMER_M_INFO,           \
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE

#define TONY_CARVANHA(Level)                                                    \
    .lvl = Level,                                                               \
    .species = Level < REMATCH_2_LEVEL_1 ? SPECIES_CARVANHA : SPECIES_SHARPEDO, \
    .gender = TRAINER_MON_MALE

#define TONY_STARYU(Level)                                                   \
    .lvl = Level,                                                            \
    .species = Level < REMATCH_4_LEVEL_6 ? SPECIES_STARYU : SPECIES_STARMIE, \
    .ability = ABILITY_ILLUMINATE

// Extra for hacks
#define TONY_FRILLISH

[DIFFICULTY_NORMAL][TRAINER_TONY_1] =
{
    TONY_INFO,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        TONY_CARVANHA(32),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_TONY_2] =
{
    TONY_INFO,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        TONY_CARVANHA(REMATCH_2_LEVEL_1),
        IVS(1),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_TONY_3] =
{
    TONY_INFO,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        TONY_STARYU(REMATCH_3_LEVEL_2),
        IVS(3),
        },
        {
        TONY_CARVANHA(REMATCH_3_LEVEL_2),
        IVS(3),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_TONY_4] =
{
    TONY_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        TONY_STARYU(REMATCH_4_LEVEL_2),
        IVS(4),
        },
        {
        TONY_CARVANHA(REMATCH_4_LEVEL_2),
        IVS(4),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_TONY_5] =
{
    TONY_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        TONY_STARYU(REMATCH_5_LEVEL_2),
        IVS(5),
        },
        {
        TONY_CARVANHA(REMATCH_5_LEVEL_2),
        IVS(5),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_LISA_AND_RAY] =
{
    .trainerName = _("Lisa & Ray"),
    SIS_AND_BRO_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 32,
        .species = SPECIES_GOLDEEN,
        },
        {
        .lvl = 30,
        .species = SPECIES_TENTACOOL,
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_DARRIN] =
{
    .trainerName = _("Darrin"),
    SWIMMER_M_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 30,
        .species = SPECIES_TENTACOOL,
        IVS(1),
        },
        {
        .lvl = 30,
        .species = SPECIES_WINGULL,
        IVS(1),
        },
        {
        .lvl = 30,
        .species = SPECIES_TENTACOOL,
        IVS(1),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_BETH] =
{
    .trainerName = _("Beth"),
    SWIMMER_F_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 32,
        .species = SPECIES_GOLDEEN,
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_CAMRON] =
{
    .trainerName = _("Camron"),
    TRIATHLETE_M_SWIMMING_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        TRIATHLETE_MON(32, 0),
        .species = SPECIES_STARYU,
        }
    },
},

// Route 108
[DIFFICULTY_NORMAL][TRAINER_MISSY] =
{
    .trainerName = _("Missy"),
    SWIMMER_F_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 32,
        .species = SPECIES_GOLDEEN,
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_MATTHEW] =
{
    .trainerName = _("Matthew"),
    SWIMMER_M_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 32,
        .species = SPECIES_CARVANHA,
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_TARA] =
{
    .trainerName = _("Tara"),
    SWIMMER_F_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 31,
        .species = SPECIES_HORSEA,
        },
        {
        .lvl = 31,
        .species = SPECIES_WAILMER,
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_CAROLINA] =
{
    .trainerName = _("Carolina"),
    ACE_TRAINER_F_INFO,
    .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 30,
        .species = SPECIES_SEVIPER,
        IVS(6),
        },
        {
        .lvl = 30,
        .species = SPECIES_SWELLOW,
        IVS(6),
        },
        {
        .lvl = 30,
        .species = SPECIES_MANECTRIC,
        IVS(6),
        }
    },
},

#define CORY_INFO             \
    .trainerName = _("Cory"), \
    SAILOR_INFO,              \
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE

#define CORY_TENTACOOL(Level)                                                      \
    .lvl = Level,                                                                  \
    .species = Level < REMATCH_2_LEVEL_3 ? SPECIES_TENTACOOL : SPECIES_TENTACRUEL, \
    .ability = ABILITY_CLEAR_BODY,                                                 \
    .gender = TRAINER_MON_MALE

#define CORY_MACHOKE(Level)                                                   \
    .lvl = Level,                                                             \
    .species = Level < REMATCH_5_LEVEL_6 ? SPECIES_MACHOKE : SPECIES_MACHAMP, \
    .ability = ABILITY_GUTS,                                                  \
    .gender = TRAINER_MON_MALE

#define CORY_PELIPPER(Level)     \
    .lvl = Level,                \
    .species = SPECIES_PELIPPER, \
    .ability = ABILITY_KEEN_EYE, \
    .gender = TRAINER_MON_MALE

[DIFFICULTY_NORMAL][TRAINER_CORY_1] =
{
    CORY_INFO,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        CORY_PELIPPER(30),
        },
        {
        CORY_MACHOKE(30),
        },
        {
        CORY_TENTACOOL(30),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_CORY_2] =
{
    CORY_INFO,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        CORY_PELIPPER(REMATCH_2_LEVEL_3),
        IVS(1),
        },
        {
        CORY_MACHOKE(REMATCH_2_LEVEL_3),
        IVS(1),
        },
        {
        CORY_TENTACOOL(REMATCH_2_LEVEL_3),
        IVS(1),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_CORY_3] =
{
    CORY_INFO,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        CORY_PELIPPER(REMATCH_3_LEVEL_3),
        IVS(3),
        },
        {
        CORY_MACHOKE(REMATCH_3_LEVEL_3),
        IVS(3),
        },
        {
        CORY_TENTACOOL(REMATCH_3_LEVEL_3),
        IVS(3),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_CORY_4] =
{
    CORY_INFO,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        CORY_PELIPPER(REMATCH_4_LEVEL_3),
        IVS(4),
        },
        {
        CORY_MACHOKE(REMATCH_4_LEVEL_3),
        IVS(4),
        },
        {
        CORY_TENTACOOL(REMATCH_4_LEVEL_3),
        IVS(4),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_CORY_5] =
{
    CORY_INFO,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        CORY_PELIPPER(REMATCH_5_LEVEL_3),
        IVS(5),
        },
        {
        CORY_MACHOKE(REMATCH_5_LEVEL_3),
        IVS(5),
        },
        {
        CORY_TENTACOOL(REMATCH_5_LEVEL_3),
        IVS(5),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_JEROME] =
{
    .trainerName = _("Jerome"),
    SWIMMER_M_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 32,
        .species = SPECIES_TENTACRUEL,
        }
    },
},

// Abandoned Ship
#define THALIA_INFO             \
    .trainerName = _("Thalia"), \
    BEAUTY_INFO,                \
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE

#define THALIA_HORSEA(Level)   \
    .lvl = Level,              \
    .species = Level < REMATCH_2_LEVEL_2 ? SPECIES_HORSEA : (Level < REMATCH_4_LEVEL_6 ? SPECIES_SEADRA : SPECIES_KINGDRA), \
    .ability = ABILITY_SNIPER, \
    .gender = TRAINER_MON_FEMALE

#define THALIA_WAILMER(Level)                                  \
    .lvl = Level,                                              \
    .species = Level < 40 ? SPECIES_WAILMER : SPECIES_WAILORD, \
    .ability = ABILITY_WATER_VEIL,                             \
    .gender = TRAINER_MON_FEMALE

#define THALIA_LUVDISC(Level)    \
    .lvl = Level,                \
    .species = SPECIES_LUVDISC,  \
    .gender = TRAINER_MON_FEMALE

[DIFFICULTY_NORMAL][TRAINER_THALIA_1] =
{
    THALIA_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        THALIA_WAILMER(31),
        },
        {
        THALIA_HORSEA(31),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_THALIA_2] =
{
    THALIA_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        THALIA_WAILMER(REMATCH_2_LEVEL_2),
        IVS(1),
        },
        {
        THALIA_HORSEA(REMATCH_2_LEVEL_2),
        IVS(1),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_THALIA_3] =
{
    THALIA_INFO,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        THALIA_LUVDISC(REMATCH_3_LEVEL_3),
        IVS(3),
        },
        {
        THALIA_WAILMER(REMATCH_3_LEVEL_3),
        IVS(3),
        },
        {
        THALIA_HORSEA(REMATCH_3_LEVEL_3),
        IVS(3),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_THALIA_4] =
{
    THALIA_INFO,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        THALIA_LUVDISC(REMATCH_4_LEVEL_3),
        IVS(4),
        },
        {
        THALIA_WAILMER(REMATCH_4_LEVEL_3),
        IVS(4),
        },
        {
        THALIA_HORSEA(REMATCH_4_LEVEL_3),
        IVS(4),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_THALIA_5] =
{
    THALIA_INFO,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        THALIA_LUVDISC(REMATCH_5_LEVEL_3),
        IVS(5),
        },
        {
        THALIA_WAILMER(REMATCH_5_LEVEL_3),
        IVS(5),
        },
        {
        THALIA_HORSEA(REMATCH_5_LEVEL_3),
        IVS(5),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_DEMETRIUS] =
{
    .trainerName = _("Demetrius"),
    YOUNGSTER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 31,
        .species = SPECIES_LINOONE,
        },
        {
        .lvl = 31,
        .species = SPECIES_MANECTRIC,
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_DUNCAN] =
{
    .trainerName = _("Duncan"),
    SAILOR_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 31,
        .species = SPECIES_SPHEAL,
        },
        {
        .lvl = 31,
        .species = SPECIES_MACHOKE,
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_CHARLIE] =
{
    .trainerName = _("Charlie"),
    TUBER_M_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 32,
        .species = SPECIES_WAILMER,
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_GARRISON] =
{
    .trainerName = _("Garrison"),
    RUIN_MANIAC_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 32,
        .species = SPECIES_SANDSLASH,
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_JANI] =
{
    .trainerName = _("Jani"),
    TUBER_F_INFO,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 32,
        .species = SPECIES_AZUMARILL,
        }
    },
},

#define KIRA_AND_DAN_INFO           \
    .trainerName = _("Kira & Dan"), \
    YOUNG_COUPLE_INFO,              \
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE

#define KIRA_ILLUMISE(Level)     \
    .lvl = Level,                \
    .species = SPECIES_ILLUMISE, \
    .ability = ABILITY_ILLUMINATE

#define DAN_VOLBEAT(Level)      \
    .lvl = Level,               \
    .species = SPECIES_VOLBEAT, \
    .ability = ABILITY_SWARM

[DIFFICULTY_NORMAL][TRAINER_KIRA_AND_DAN_1] =
{
    KIRA_AND_DAN_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        DAN_VOLBEAT(31),
        },
        {
        KIRA_ILLUMISE(31),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_KIRA_AND_DAN_2] =
{
    KIRA_AND_DAN_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        DAN_VOLBEAT(REMATCH_2_LEVEL_2),
        IVS(1),
        },
        {
        KIRA_ILLUMISE(REMATCH_2_LEVEL_2),
        IVS(1),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_KIRA_AND_DAN_3] =
{
    KIRA_AND_DAN_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        DAN_VOLBEAT(REMATCH_3_LEVEL_2),
        IVS(3),
        },
        {
        KIRA_ILLUMISE(REMATCH_3_LEVEL_2),
        IVS(3),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_KIRA_AND_DAN_4] =
{
    KIRA_AND_DAN_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        DAN_VOLBEAT(REMATCH_4_LEVEL_2),
        IVS(4),
        },
        {
        KIRA_ILLUMISE(REMATCH_4_LEVEL_2),
        IVS(4),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_KIRA_AND_DAN_5] =
{
    KIRA_AND_DAN_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        DAN_VOLBEAT(REMATCH_5_LEVEL_2),
        IVS(5),
        },
        {
        KIRA_ILLUMISE(REMATCH_5_LEVEL_2),
        IVS(5),
        }
    },
},

// Route 109 (water)
[DIFFICULTY_NORMAL][TRAINER_AUSTINA] =
{
    .trainerName = _("Austina"),
    TUBER_F_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 32,
        .species = SPECIES_AZUMARILL,
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_GWEN] =
{
    .trainerName = _("Gwen"),
    TUBER_F_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 32,
        .species = SPECIES_SPHEAL,
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_DAVID] =
{
    .trainerName = _("David"),
    SWIMMER_M_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 31,
        .species = SPECIES_TENTACOOL,
        },
        {
        .lvl = 31,
        .species = SPECIES_CARVANHA,
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_ALICE] =
{
    .trainerName = _("Alice"),
    SWIMMER_F_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 30,
        .species = SPECIES_STARYU,
        },
        {
        .lvl = 30,
        .species = SPECIES_WINGULL,
        },
        {
        .lvl = 30,
        .species = SPECIES_GOLDEEN,
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_CARTER] =
{
    .trainerName = _("Carter"),
    FISHERMAN_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 31,
        .species = SPECIES_WAILMER,
        IVS(1),
        },
        {
        .lvl = 31,
        .species = SPECIES_TENTACRUEL,
        IVS(1),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_ELIJAH] =
{
    .trainerName = _("Elijah"),
    BIRD_KEEPER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 31,
        .species = SPECIES_PELIPPER,
        },
        {
        .lvl = 31,
        .species = SPECIES_SKARMORY,
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_MEL_AND_PAUL] =
{
    .trainerName = _("Mel & Paul"),
    YOUNG_COUPLE_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 31,
        .species = SPECIES_DUSTOX,
        .moves = {MOVE_SILVER_WIND, MOVE_VENOSHOCK, MOVE_TOXIC, MOVE_PROTECT}
        },
        {
        .lvl = 31,
        .species = SPECIES_BEAUTIFLY,
        .moves = {MOVE_LEECH_LIFE, MOVE_AIR_CUTTER, MOVE_ATTRACT, MOVE_STUN_SPORE}
        }
    },
},

// Trick House 4
[DIFFICULTY_NORMAL][TRAINER_YUJI] =
{
    .trainerName = _("Yuji"),
    BLACK_BELT_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 31,
        .species = SPECIES_MAKUHITA,
        IVS(12),
        },
        {
        .lvl = 31,
        .species = SPECIES_MACHOKE,
        IVS(12),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_CORA] =
{
    .trainerName = _("Cora"),
    BATTLE_GIRL_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 32,
        .species = SPECIES_MEDITITE,
        IVS(12),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_PAULA] =
{
    .trainerName = _("Paula"),
    BATTLE_GIRL_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 32,
        .species = SPECIES_BRELOOM,
        IVS(12),
        }
    },
},

// Route 118 (east)
[DIFFICULTY_NORMAL][TRAINER_BARNY] =
{
    .trainerName = _("Barny"),
    FISHERMAN_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 33,
        .species = SPECIES_TENTACOOL,
        },
        {
        .lvl = 33,
        .species = SPECIES_CARVANHA,
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_CHESTER] =
{
    .trainerName = _("Chester"),
    BIRD_KEEPER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 33,
        .species = SPECIES_GOLDUCK,
        },
        {
        .lvl = 33,
        .species = SPECIES_SWELLOW,
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_PERRY] =
{
    .trainerName = _("Perry"),
    BIRD_KEEPER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 34,
        .species = SPECIES_PELIPPER,
        }
    },
},

// Route 123 (west)
[DIFFICULTY_NORMAL][TRAINER_DAVIS] =
{
    .trainerName = _("Davis"),
    BUG_CATCHER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 34,
        .species = SPECIES_PINSIR,
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_JAZMYN] =
{
    .trainerName = _("Jazmyn"),
    .trainerClass = TRAINER_CLASS_COOL_TRAINER,
    .trainerPic = TRAINER_PIC_ACE_TRAINER_F,
    .gender = TRAINER_GENDER_FEMALE,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
    .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 34,
        .species = SPECIES_ABSOL,
        },
        {
        .lvl = 34,
        .species = SPECIES_TROPIUS,
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_VIOLET] =
{
    .trainerName = _("Violet"),
    AROMA_LADY_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 33,
        .species = SPECIES_ROSELIA,
        },
        {
        .lvl = 33,
        .species = SPECIES_GLOOM,
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_MIU_AND_YUKI] =
{
    .trainerName = _("Miu & Yuki"),
    TWINS_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 33,
        .species = SPECIES_BEAUTIFLY,
        },
        {
        .lvl = 33,
        .species = SPECIES_DUSTOX,
        }
    },
},

// Route 119 (south)
[DIFFICULTY_NORMAL][TRAINER_KENT] =
{
    .trainerName = _("Kent"),
    BUG_CATCHER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 34,
        .species = SPECIES_NINJASK,
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_DONALD] =
{
    .trainerName = _("Donald"),
    BUG_MANIAC_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_ACE_POKEMON,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 32,
        .species = SPECIES_WURMPLE,
        IVS(12),
        },
        {
        .lvl = 32,
        .species = SPECIES_SILCOON,
        IVS(12),
        },
        {
        .lvl = 32,
        .species = SPECIES_BEAUTIFLY,
        IVS(12),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_GREG] =
{
    .trainerName = _("Greg"),
    BUG_CATCHER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 33,
        .species = SPECIES_ILLUMISE,
        },
        {
        .lvl = 33,
        .species = SPECIES_VOLBEAT,
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_TAYLOR] =
{
    .trainerName = _("Taylor"),
    BUG_MANIAC_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_ACE_POKEMON,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 32,
        .species = SPECIES_WURMPLE,
        IVS(12),
        },
        {
        .lvl = 32,
        .species = SPECIES_CASCOON,
        IVS(12),
        },
        {
        .lvl = 32,
        .species = SPECIES_DUSTOX,
        IVS(12),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_DOUG] =
{
    .trainerName = _("Doug"),
    BUG_CATCHER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 33,
        .species = SPECIES_SHEDINJA,
        },
        {
        .lvl = 33,
        .species = SPECIES_NINJASK,
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_BRENT] =
{
    .trainerName = _("Brent"),
    BUG_MANIAC_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 34,
        .species = SPECIES_MASQUERAIN,
        IVS(12),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_CHRIS] =
{
    .trainerName = _("Chris"),
    FISHERMAN_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 4,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 31,
        .species = SPECIES_GYARADOS,
        },
        {
        .lvl = 31,
        .species = SPECIES_TENTACOOL,
        },
        {
        .lvl = 31,
        .species = SPECIES_FEEBAS,
        },
        {
        .lvl = 31,
        .species = SPECIES_CARVANHA,
        }
    },
},

#define CATHERINE_INFO             \
    .trainerName = _("Catherine"), \
    POKEMON_RANGER_F_INFO,         \
    MINI_BOSS_AI_FLAGS

#define CATHERINE_ROSELIA(Level)                                               \
    .lvl = Level,                                                              \
    .species = Level < REMATCH_3_LEVEL_6 ? SPECIES_ROSELIA : SPECIES_ROSERADE, \
    .ability = ABILITY_NATURAL_CURE,                                           \
    IVS(10),                                                                   \
    .gender = TRAINER_MON_FEMALE

#define CATHERINE_GLOOM(Level)                                                \
    .lvl = Level,                                                             \
    .species = Level < REMATCH_3_LEVEL_6 ? SPECIES_GLOOM : SPECIES_BELLOSSOM, \
    IVS(10),                                                                  \
    .gender = TRAINER_MON_FEMALE

// Extra for hacks
#define CATHERINE_PICHU
#define CATHERINE_DRILBUR

[DIFFICULTY_NORMAL][TRAINER_CATHERINE_1] =
{
    CATHERINE_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        CATHERINE_GLOOM(34),
        },
        {
        CATHERINE_ROSELIA(34),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_CATHERINE_2] =
{
    CATHERINE_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        CATHERINE_GLOOM(REMATCH_2_LEVEL_1),
        },
        {
        CATHERINE_ROSELIA(REMATCH_2_LEVEL_1),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_CATHERINE_3] =
{
    CATHERINE_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        CATHERINE_GLOOM(REMATCH_3_LEVEL_1),
        },
        {
        CATHERINE_ROSELIA(REMATCH_3_LEVEL_1),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_CATHERINE_4] =
{
    CATHERINE_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        CATHERINE_GLOOM(REMATCH_4_LEVEL_1),
        },
        {
        CATHERINE_ROSELIA(REMATCH_4_LEVEL_1),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_CATHERINE_5] =
{
    CATHERINE_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        CATHERINE_GLOOM(REMATCH_5_MINI_BOSS),
        },
        {
        CATHERINE_ROSELIA(REMATCH_5_MINI_BOSS),
        }
    },
},

#define JACKSON_INFO             \
    .trainerName = _("Jackson"), \
    POKEMON_RANGER_M_INFO,       \
    MINI_BOSS_AI_FLAGS

#define JACKSON_BRELOOM(Level)      \
    .lvl = Level,                   \
    .species = SPECIES_BRELOOM,     \
    .ability = ABILITY_POISON_HEAL, \
    IVS(10),                        \
    .gender = TRAINER_MON_MALE

#define JACKSON_TREECKO(Level) \
    .lvl = Level,              \
    .species = Level < REMATCH_2_LEVEL_1 ? SPECIES_TREECKO : (Level < REMATCH_4_LEVEL_6 ? SPECIES_GROVYLE : SPECIES_SCEPTILE), \
    IVS(10),                   \
    .gender = TRAINER_MON_MALE

#define JACKSON_KECLEON(Level)  \
    .lvl = Level,               \
    .species = SPECIES_KECLEON, \
    IVS(10),                    \
    .gender = TRAINER_MON_MALE

// Extra for hacks
#define JACKSON_SLAKOTH
#define JACKSON_PIDOVE

[DIFFICULTY_NORMAL][TRAINER_JACKSON_1] =
{
    JACKSON_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        JACKSON_TREECKO(34),
        },
        {
        JACKSON_BRELOOM(34),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_JACKSON_2] =
{
    JACKSON_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        JACKSON_TREECKO(REMATCH_2_LEVEL_1),
        },
        {
        JACKSON_BRELOOM(REMATCH_2_LEVEL_1),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_JACKSON_3] =
{
    JACKSON_INFO,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        JACKSON_KECLEON(REMATCH_3_LEVEL_2),
        },
        {
        JACKSON_TREECKO(REMATCH_3_LEVEL_1),
        },
        {
        JACKSON_BRELOOM(REMATCH_3_LEVEL_1),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_JACKSON_4] =
{
    JACKSON_INFO,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        JACKSON_KECLEON(REMATCH_4_LEVEL_2),
        },
        {
        JACKSON_TREECKO(REMATCH_4_LEVEL_1),
        },
        {
        JACKSON_BRELOOM(REMATCH_4_LEVEL_1),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_JACKSON_5] =
{
    JACKSON_INFO,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        JACKSON_KECLEON(REMATCH_5_LEVEL_2),
        },
        {
        JACKSON_TREECKO(REMATCH_5_MINI_BOSS),
        },
        {
        JACKSON_BRELOOM(REMATCH_5_MINI_BOSS),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_RACHEL] =
{
    .trainerName = _("Rachel"),
    PARASOL_LADY_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 34,
        .species = SPECIES_GOLDEEN,
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_PHIL] =
{
    .trainerName = _("Phil"),
    BIRD_KEEPER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 34,
        .species = SPECIES_SWELLOW,
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_TAKASHI] =
{
    .trainerName = _("Takashi"),
    NINJA_BOY_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 33,
        .species = SPECIES_NINJASK,
        },
        {
        .lvl = 33,
        .species = SPECIES_KOFFING,
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_DAYTON] =
{
    .trainerName = _("Dayton"),
    KINDLER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 33,
        .species = SPECIES_SLUGMA,
        },
        {
        .lvl = 33,
        .species = SPECIES_NUMEL,
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_HUGH] =
{
    .trainerName = _("Hugh"),
    BIRD_KEEPER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 33,
        .species = SPECIES_WINGULL,
        },
        {
        .lvl = 33,
        .species = SPECIES_ESPATHRA,
        }
    },
},

// Weather Institute
NERISSA_BATTLE(WEATHER_INSTITUTE, WEATHER_INSTITUTE_AQUA_LEVEL),
BERYL_BATTLE(WEATHER_INSTITUTE, WEATHER_INSTITUTE_AQUA_LEVEL),
MALIK_BATTLE(WEATHER_INSTITUTE, WEATHER_INSTITUTE_AQUA_LEVEL),
MARINA_BATTLE(WEATHER_INSTITUTE, WEATHER_INSTITUTE_AQUA_LEVEL),

[DIFFICULTY_NORMAL][TRAINER_CASPIAN_WEATHER_INSTITUTE] =
{
    CASPIAN_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        CASPIAN_CLAMPERL(WEATHER_INSTITUTE_AQUA_LEVEL),
        CASPIAN_CARVANHA(WEATHER_INSTITUTE_AQUA_LEVEL, AQUA_JET, POISON_FANG, ICE_FANG),
    },
},

SHELLY_BATTLE(WEATHER_INSTITUTE, CAP_WEATHER, 6),

// Route 119 (north)
[DIFFICULTY_NORMAL][TRAINER_FABIAN] =
{
    .trainerName = _("Fabian"),
    GUITARIST_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 39,
        .species = SPECIES_MANECTRIC,
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_YASU] =
{
    .trainerName = _("Yasu"),
    NINJA_BOY_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 39,
        .species = SPECIES_NINJASK,
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_HIDEO] =
{
    .trainerName = _("Hideo"),
    NINJA_BOY_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 38,
        .species = SPECIES_KOFFING,
        .moves = {MOVE_SLUDGE_BOMB, MOVE_ASSURANCE, MOVE_TOXIC, MOVE_SMOKESCREEN}
        },
        {
        .lvl = 38,
        .species = SPECIES_KOFFING,
        .moves = {MOVE_SLUDGE_BOMB, MOVE_ASSURANCE, MOVE_TOXIC, MOVE_SMOKESCREEN}
        }
    },
},

// Route 120 (north)
[DIFFICULTY_NORMAL][TRAINER_CLARISSA] =
{
    .trainerName = _("Clarissa"),
    PARASOL_LADY_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 39,
        .species = SPECIES_ROSELIA,
        },
        {
        .lvl = 39,
        .species = SPECIES_WAILMER,
        }
    },
},

#define ROBERT_INFO             \
    .trainerName = _("Robert"), \
    BIRD_KEEPER_INFO,           \
    MINI_BOSS_AI_FLAGS

#define ROBERT_SWABLU(Level)                                                 \
    .lvl = Level,                                                            \
    .species = Level < REMATCH_3_LEVEL_2 ? SPECIES_SWABLU : SPECIES_ALTARIA, \
    .ability = ABILITY_NATURAL_CURE,                                         \
    .gender = TRAINER_MON_MALE

#define ROBERT_NATU(Level)                                              \
    .lvl = Level,                                                       \
    .species = Level < REMATCH_3_LEVEL_2 ? SPECIES_NATU : SPECIES_XATU, \
    .ability = ABILITY_EARLY_BIRD,                                      \
    .gender = TRAINER_MON_MALE

// Extra for hacks
#define ROBERT_SPEAROW(Level)                                                \
    .lvl = Level,                                                            \
    .species = Level < REMATCH_3_LEVEL_2 ? SPECIES_SPEAROW : SPECIES_FEAROW, \
    .ability = ABILITY_KEEN_EYE,                                             \
    .gender = TRAINER_MON_MALE

#define ROBERT_STARLY

[DIFFICULTY_NORMAL][TRAINER_ROBERT_1] =
{
    ROBERT_INFO,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        ROBERT_SWABLU(40),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_ROBERT_2] =
{
    ROBERT_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        ROBERT_NATU(40),
        IVS(2),
        },
        {
        ROBERT_SWABLU(40),
        IVS(2),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_ROBERT_3] =
{
    ROBERT_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        ROBERT_NATU(REMATCH_3_LEVEL_2),
        IVS(3),
        },
        {
        ROBERT_SWABLU(REMATCH_3_LEVEL_2),
        IVS(3),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_ROBERT_4] =
{
    ROBERT_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        ROBERT_NATU(REMATCH_4_LEVEL_2),
        IVS(4),
        },
        {
        ROBERT_SWABLU(REMATCH_4_LEVEL_2),
        IVS(4),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_ROBERT_5] =
{
    ROBERT_INFO,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = REMATCH_5_LEVEL_3,
        .species = SPECIES_SWELLOW,
        IVS(5),
        },
        {
        ROBERT_NATU(REMATCH_5_LEVEL_3),
        IVS(5),
        },
        {
        ROBERT_SWABLU(REMATCH_5_MINI_BOSS),
        IVS(5),
        }
    },
},

// Fortree Gym
[DIFFICULTY_NORMAL][TRAINER_HUMBERTO] =
{
    .trainerName = _("Humberto"),
    BIRD_KEEPER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 40,
        .species = SPECIES_SKARMORY,
        IVS(30),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_JARED] =
{
    .trainerName = _("Jared"),
    BIRD_KEEPER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 38,
        .species = SPECIES_DODRIO,
        IVS(12),
        },
        {
        .lvl = 38,
        .species = SPECIES_SKARMORY,
        IVS(12),
        },
        {
        .lvl = 38,
        .species = SPECIES_SWELLOW,
        IVS(12),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_ASHLEY] =
{
    .trainerName = _("Ashley"),
    PICNICKER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 38,
        .species = SPECIES_MASQUERAIN,
        IVS(12),
        },
        {
        .lvl = 38,
        .species = SPECIES_SWABLU,
        IVS(12),
        },
        {
        .lvl = 38,
        .species = SPECIES_BEAUTIFLY,
        IVS(12),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_FLINT] =
{
    .trainerName = _("Flint"),
    CAMPER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 39,
        .species = SPECIES_NINJASK,
        IVS(18),
        },
        {
        .lvl = 39,
        .species = SPECIES_GOLBAT,
        IVS(18),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_EDWARDO] =
{
    .trainerName = _("Edwardo"),
    BIRD_KEEPER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 39,
        .species = SPECIES_DODRIO,
        IVS(18),
        },
        {
        .lvl = 39,
        .species = SPECIES_PELIPPER,
        IVS(18),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_DARIUS] =
{
    .trainerName = _("Darius"),
    BIRD_KEEPER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 40,
        .species = SPECIES_XATU,
        IVS(24),
        }
    },
},

// Route 120 (south)
[DIFFICULTY_NORMAL][TRAINER_COLIN] =
{
    .trainerName = _("Colin"),
    BIRD_KEEPER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 40,
        .species = SPECIES_PELIPPER,
        .moves = {MOVE_FLY, MOVE_AIR_SLASH, MOVE_BRINE, MOVE_TAILWIND}
        },
        {
        .lvl = 40,
        .species = SPECIES_XATU,
        .moves = {MOVE_FLY, MOVE_AIR_SLASH, MOVE_PSYCHIC, MOVE_OMINOUS_WIND}
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_LEONEL] =
{
    .trainerName = _("Leonel"),
    ACE_TRAINER_M_INFO,
    .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 41,
        .species = SPECIES_MANECTRIC,
        IVS(12),
        .moves = {MOVE_THUNDER, MOVE_QUICK_ATTACK, MOVE_THUNDER_WAVE, MOVE_ROAR}
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_ANGELICA] =
{
    .trainerName = _("Angelica"),
    PARASOL_LADY_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 41,
        .species = SPECIES_CASTFORM_NORMAL,
        IVS(6),
        .moves = {MOVE_RAIN_DANCE, MOVE_WEATHER_BALL, MOVE_THUNDER, MOVE_WATER_PULSE}
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_RILEY] =
{
    .trainerName = _("Riley"),
    NINJA_BOY_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 40,
        .species = SPECIES_NINJASK,
        .moves = {MOVE_BUG_BITE, MOVE_FURY_SWIPES, MOVE_MIND_READER, MOVE_DIG}
        },
        {
        .lvl = 40,
        .species = SPECIES_KOFFING,
        .moves = {MOVE_TACKLE, MOVE_SELF_DESTRUCT, MOVE_SLUDGE, MOVE_SMOKESCREEN}
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_CALLIE] =
{
    .trainerName = _("Callie"),
    BATTLE_GIRL_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 40,
        .species = SPECIES_MEDITITE,
        },
        {
        .lvl = 40,
        .species = SPECIES_MAKUHITA,
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_JENNIFER] =
{
    .trainerName = _("Jennifer"),
    ACE_TRAINER_F_INFO,
    .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 41,
        .species = SPECIES_SABLEYE,
        IVS(24),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_JENNA] =
{
    .trainerName = _("Jenna"),
    POKEMON_RANGER_F_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_FORCE_SETUP_FIRST_TURN,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 39,
        .species = SPECIES_SHROOMISH,
        IVS(6),
        },
        {
        .lvl = 39,
        .species = SPECIES_LOMBRE,
        IVS(6),
        },
        {
        .lvl = 39,
        .species = SPECIES_NUZLEAF,
        IVS(6),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_LORENZO] =
{
    .trainerName = _("Lorenzo"),
    POKEMON_RANGER_M_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 39,
        .species = SPECIES_SHROOMISH,
        IVS(6),
        },
        {
        .lvl = 39,
        .species = SPECIES_NUZLEAF,
        IVS(6),
        },
        {
        .lvl = 39,
        .species = SPECIES_LOMBRE,
        IVS(6),
        }
    },
},

#define JEFFREY_INFO             \
    .trainerName = _("Jeffrey"), \
    BUG_MANIAC_INFO,             \
    MINI_BOSS_AI_FLAGS

#define JEFFREY_MASQUERAIN(Level)  \
    .lvl = Level,                  \
    .species = SPECIES_MASQUERAIN, \
    IVS(10),                       \
    .gender = TRAINER_MON_MALE

#define JEFFREY_PINSIR(Level)        \
    .lvl = Level,                    \
    .species = SPECIES_PINSIR,       \
    .ability = ABILITY_HYPER_CUTTER, \
    IVS(10),                         \
    .gender = TRAINER_MON_MALE

#define JEFFREY_HERACROSS(Level)  \
    .lvl = Level,                 \
    .species = SPECIES_HERACROSS, \
    .ability = ABILITY_SWARM,     \
    IVS(10),                      \
    .gender = TRAINER_MON_MALE

#define JEFFREY_DUSTOX(Level)  \
    .lvl = Level,              \
    .species = SPECIES_DUSTOX, \
    IVS(10),                   \
    .gender = TRAINER_MON_MALE

#define JEFFREY_BEAUTIFLY(Level)  \
    .lvl = Level,                 \
    .species = SPECIES_BEAUTIFLY, \
    IVS(10),                      \
    .gender = TRAINER_MON_FEMALE

// Extra for hacks
#define JEFFREY_KRICKETOT
#define JEFFREY_COMBEE

[DIFFICULTY_NORMAL][TRAINER_JEFFREY_1] =
{
    JEFFREY_INFO,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        JEFFREY_HERACROSS(40),
        },
        {
        JEFFREY_PINSIR(40),
        },
        {
        JEFFREY_MASQUERAIN(40),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_JEFFREY_2] =
{
    JEFFREY_INFO,
    .partySize = 5,
    .party = (const struct TrainerMon[]) {
        {
        JEFFREY_BEAUTIFLY(42),
        },
        {
        JEFFREY_DUSTOX(42),
        },
        {
        JEFFREY_HERACROSS(42),
        },
        {
        JEFFREY_PINSIR(42),
        },
        {
        JEFFREY_MASQUERAIN(42),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_JEFFREY_3] =
{
    JEFFREY_INFO,
    .partySize = 5,
    .party = (const struct TrainerMon[]) {
        {
        JEFFREY_BEAUTIFLY(45),
        },
        {
        JEFFREY_DUSTOX(45),
        },
        {
        JEFFREY_HERACROSS(45),
        },
        {
        JEFFREY_PINSIR(45),
        },
        {
        JEFFREY_MASQUERAIN(45),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_JEFFREY_4] =
{
    JEFFREY_INFO,
    .partySize = 5,
    .party = (const struct TrainerMon[]) {
        {
        JEFFREY_BEAUTIFLY(REMATCH_4_LEVEL_2),
        },
        {
        JEFFREY_DUSTOX(REMATCH_4_LEVEL_2),
        },
        {
        JEFFREY_HERACROSS(REMATCH_4_LEVEL_2),
        },
        {
        JEFFREY_PINSIR(REMATCH_4_LEVEL_2),
        },
        {
        JEFFREY_MASQUERAIN(REMATCH_4_LEVEL_1),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_JEFFREY_5] =
{
    JEFFREY_INFO,
    .partySize = 5,
    .party = (const struct TrainerMon[]) {
        {
        JEFFREY_BEAUTIFLY(REMATCH_5_LEVEL_2),
        },
        {
        JEFFREY_DUSTOX(REMATCH_5_LEVEL_2),
        },
        {
        JEFFREY_HERACROSS(REMATCH_5_LEVEL_2),
        },
        {
        JEFFREY_PINSIR(REMATCH_5_LEVEL_2),
        },
        {
        JEFFREY_MASQUERAIN(REMATCH_5_MINI_BOSS),
        .heldItem = ITEM_SILVER_POWDER
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_KEIGO] =
{
    .trainerName = _("Keigo"),
    NINJA_BOY_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 40,
        .species = SPECIES_KOFFING,
        .moves = {MOVE_POISON_GAS, MOVE_SELF_DESTRUCT, MOVE_SLUDGE, MOVE_SMOKESCREEN}
        },
        {
        .lvl = 40,
        .species = SPECIES_NINJASK,
        .moves = {MOVE_SAND_ATTACK, MOVE_DOUBLE_TEAM, MOVE_FURY_CUTTER, MOVE_SWORDS_DANCE}
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_CHIP] =
{
    .trainerName = _("Chip"),
    RUIN_MANIAC_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 39,
        .species = SPECIES_BALTOY,
        IVS(6),
        },
        {
        .lvl = 39,
        .species = SPECIES_NOSEPASS,
        IVS(6),
        },
        {
        .lvl = 39,
        .species = SPECIES_CRUSTLE,
        IVS(6),
        }
    },
},

// Route 121
[DIFFICULTY_NORMAL][TRAINER_CALE] =
{
    .trainerName = _("Cale"),
    BUG_MANIAC_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 41,
        .species = SPECIES_DUSTOX,
        },
        {
        .lvl = 41,
        .species = SPECIES_BEAUTIFLY,
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_TAMMY] =
{
    .trainerName = _("Tammy"),
    HEX_MANIAC_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 41,
        .species = SPECIES_DUSKULL,
        },
        {
        .lvl = 41,
        .species = SPECIES_SHUPPET,
        }
    },
},

#define JESSICA_INFO             \
    .trainerName = _("Jessica"), \
    BEAUTY_INFO,                 \
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE

#define JESSICA_SEVIPER(Level)  \
    .lvl = Level,               \
    .species = SPECIES_SEVIPER, \
    IVS(10),                    \
    .gender = TRAINER_MON_FEMALE

#define JESSICA_KECLEON(Level)  \
    .lvl = Level,               \
    .species = SPECIES_KECLEON, \
    IVS(10),                    \
    .gender = TRAINER_MON_FEMALE

// Extra for hacks
#define JESSICA_SANDILE

[DIFFICULTY_NORMAL][TRAINER_JESSICA_1] =
{
    JESSICA_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        JESSICA_KECLEON(41),
        },
        {
        JESSICA_SEVIPER(41),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_JESSICA_2] =
{
    JESSICA_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        JESSICA_KECLEON(43),
        },
        {
        JESSICA_SEVIPER(43),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_JESSICA_3] =
{
    JESSICA_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        JESSICA_KECLEON(45),
        },
        {
        JESSICA_SEVIPER(45),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_JESSICA_4] =
{
    JESSICA_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        JESSICA_KECLEON(REMATCH_4_LEVEL_2),
        },
        {
        JESSICA_SEVIPER(REMATCH_4_LEVEL_2),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_JESSICA_5] =
{
    JESSICA_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        JESSICA_KECLEON(REMATCH_5_LEVEL_2),
        },
        {
        JESSICA_SEVIPER(REMATCH_5_LEVEL_2),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_KATE_AND_JOY] =
{
    .trainerName = _("Kate & Joy"),
    TEAMMATES_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 40,
        .species = SPECIES_SPINDA,
        .moves = {MOVE_DIZZY_PUNCH, MOVE_HYPNOSIS, MOVE_PSYBEAM, MOVE_SKILL_SWAP}
        },
        {
        .lvl = 42,
        .species = SPECIES_SLAKING,
        .moves = {MOVE_FOCUS_PUNCH, MOVE_YAWN, MOVE_SLACK_OFF, MOVE_FEINT_ATTACK}
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_PAT] =
{
    .trainerName = _("Juan"),
    POKEMON_BREEDER_F_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = (const struct TrainerMon[]) {
        {
        POKEMON_BREEDER_MON(37),
        .species = SPECIES_MANECTRIC,
        .ability = ABILITY_STATIC,
        },
        {
        POKEMON_BREEDER_MON(37),
        .species = SPECIES_SHARPEDO,
        .ability = ABILITY_SPEED_BOOST,
        },
        {
        POKEMON_BREEDER_MON(37),
        .species = SPECIES_BELLOSSOM,
        .ability = ABILITY_CHLOROPHYLL,
        },
        {
        POKEMON_BREEDER_MON(37),
        .species = SPECIES_GRUMPIG,
        .ability = ABILITY_THICK_FAT,
        },
        {
        POKEMON_BREEDER_MON(37),
        .species = SPECIES_SANDSLASH,
        .ability = ABILITY_SAND_RUSH,
        },
        {
        POKEMON_BREEDER_MON(37),
        .species = SPECIES_SWALOT,
        .ability = ABILITY_LIQUID_OOZE,
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_MYLES] =
{
    .trainerName = _("Myles"),
    POKEMON_BREEDER_M_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = (const struct TrainerMon[]) {
        {
        POKEMON_BREEDER_MON(37),
        .species = SPECIES_HOUNDOOM,
        .ability = ABILITY_UNNERVE,
        },
        {
        POKEMON_BREEDER_MON(37),
        .species = SPECIES_CAMERUPT,
        .ability = ABILITY_ANGER_POINT,
        },
        {
        POKEMON_BREEDER_MON(37),
        .species = SPECIES_VILEPLUME,
        .ability = ABILITY_EFFECT_SPORE,
        },
        {
        POKEMON_BREEDER_MON(37),
        .species = SPECIES_ABSOL,
        .ability = ABILITY_SHARPNESS,
        },
        {
        POKEMON_BREEDER_MON(37),
        .species = SPECIES_MUK,
        .ability = ABILITY_POISON_TOUCH,
        },
        {
        POKEMON_BREEDER_MON(37),
        .species = SPECIES_TROPIUS,
        .ability = ABILITY_HARVEST,
        }
    },
},

#define WALTER_INFO             \
    .trainerName = _("Walter"), \
    GENTLEMAN_INFO,             \
    MINI_BOSS_AI_FLAGS

#define WALTER_MANECTRIC(Level)       \
    RICH_MON(Level),                  \
    .species = SPECIES_MANECTRIC,     \
    .ability = ABILITY_LIGHTNING_ROD, \
    IVS(10),                          \
    .gender = TRAINER_MON_MALE

#define WALTER_GOLDUCK(Level)      \
    RICH_MON(Level),               \
    .species = SPECIES_GOLDUCK,    \
    .ability = ABILITY_CLOUD_NINE, \
    IVS(10),                       \
    .gender = TRAINER_MON_MALE

#define WALTER_LINOONE(Level)   \
    RICH_MON(Level),            \
    .species = SPECIES_LINOONE, \
    .ability = ABILITY_PICKUP,  \
    IVS(10),                    \
    .gender = TRAINER_MON_MALE

// Extra for hacks
#define WALTER_LILLIPUP

[DIFFICULTY_NORMAL][TRAINER_WALTER_1] =
{
    WALTER_INFO,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        WALTER_MANECTRIC(42),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_WALTER_2] =
{
    WALTER_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        WALTER_GOLDUCK(44),
        },
        {
        WALTER_MANECTRIC(44),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_WALTER_3] =
{
    WALTER_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        WALTER_GOLDUCK(46),
        },
        {
        WALTER_MANECTRIC(46),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_WALTER_4] =
{
    WALTER_INFO,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        WALTER_LINOONE(REMATCH_4_LEVEL_2),
        },
        {
        WALTER_GOLDUCK(REMATCH_4_LEVEL_2),
        },
        {
        WALTER_MANECTRIC(REMATCH_4_LEVEL_1),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_WALTER_5] =
{
    WALTER_INFO,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        WALTER_LINOONE(REMATCH_5_LEVEL_2),
        .moves = {MOVE_HEADBUTT, MOVE_PLAY_ROUGH, MOVE_PIN_MISSILE, MOVE_BELLY_DRUM}
        },
        {
        WALTER_GOLDUCK(REMATCH_5_LEVEL_2),
        .moves = {MOVE_HYDRO_PUMP, MOVE_PSYCHIC, MOVE_POWER_GEM, MOVE_AMNESIA}
        },
        {
        WALTER_MANECTRIC(REMATCH_5_MINI_BOSS),
        .moves = {MOVE_DISCHARGE, MOVE_SNARL, MOVE_CHARGE, MOVE_ROAR}
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_VANESSA] =
{
    .trainerName = _("Vanessa"),
    POKE_FAN_F_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        POKE_FAN_MON(42),
        .species = SPECIES_RAICHU,
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_MARCEL] =
{
    .trainerName = _("Marcel"),
    ACE_TRAINER_M_INFO,
    .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 41,
        .species = SPECIES_MANECTRIC,
        IVS(12),
        },
        {
        .lvl = 41,
        .species = SPECIES_SHIFTRY,
        IVS(12),
        }
    },
},

#define CRISTIN_INFO                                               \
    .trainerName = _("Cristin"),                                   \
    ACE_TRAINER_F_INFO,                                            \
    .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE}, \
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY

#define CRISTIN_VIGOROTH(Level)                                                \
    .lvl = Level,                                                              \
    .species = Level < REMATCH_4_LEVEL_6 ? SPECIES_VIGOROTH : SPECIES_SLAKING, \
    .gender = TRAINER_MON_FEMALE

#define CRISTIN_LOUDRED(Level)                                                \
    .lvl = Level,                                                             \
    .species = Level < REMATCH_5_LEVEL_6 ? SPECIES_LOUDRED : SPECIES_EXPLOUD, \
    .ability = ABILITY_SOUNDPROOF,                                            \
    .gender = TRAINER_MON_FEMALE

#define CRISTIN_SPINDA(Level)     \
    .lvl = Level,                 \
    .species = SPECIES_SPINDA,    \
    .ability = ABILITY_OWN_TEMPO, \
    .gender = TRAINER_MON_FEMALE

[DIFFICULTY_NORMAL][TRAINER_CRISTIN_1] =
{
    CRISTIN_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        CRISTIN_LOUDRED(41),
        IVS(12),
        },
        {
        CRISTIN_VIGOROTH(41),
        IVS(12),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_CRISTIN_2] =
{
    CRISTIN_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        CRISTIN_LOUDRED(43),
        IVS(13),
        },
        {
        CRISTIN_VIGOROTH(43),
        IVS(13),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_CRISTIN_3] =
{
    CRISTIN_INFO,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        CRISTIN_SPINDA(44),
        IVS(14),
        },
        {
        CRISTIN_LOUDRED(44),
        IVS(14),
        },
        {
        CRISTIN_VIGOROTH(44),
        IVS(14),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_CRISTIN_4] =
{
    CRISTIN_INFO,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        CRISTIN_SPINDA(REMATCH_4_LEVEL_3),
        IVS(15),
        },
        {
        CRISTIN_LOUDRED(REMATCH_4_LEVEL_3),
        IVS(15),
        },
        {
        CRISTIN_VIGOROTH(REMATCH_4_LEVEL_3),
        IVS(15),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_CRISTIN_5] =
{
    CRISTIN_INFO,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        CRISTIN_SPINDA(REMATCH_5_LEVEL_3),
        IVS(17),
        },
        {
        CRISTIN_LOUDRED(REMATCH_5_LEVEL_3),
        IVS(17),
        },
        {
        CRISTIN_VIGOROTH(REMATCH_5_LEVEL_3),
        IVS(17),
        }
    },
},

// Mt. Pyre
[DIFFICULTY_NORMAL][TRAINER_MARK] =
{
    .trainerName = _("Mark"),
    POKE_MANIAC_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 43,
        .species = SPECIES_RHYHORN,
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_LEAH] =
{
    .trainerName = _("Leah"),
    HEX_MANIAC_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 43,
        .species = SPECIES_SPOINK,
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_ZANDER] =
{
    .trainerName = _("Zander"),
    BLACK_BELT_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 43,
        .species = SPECIES_HARIYAMA,
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_DEZ_AND_LUKE] =
{
    .trainerName = _("Dez & Luke"),
    YOUNG_COUPLE_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 42,
        .species = SPECIES_DELCATTY,
        },
        {
        .lvl = 42,
        .species = SPECIES_MANECTRIC,
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_KAYLA] =
{
    .trainerName = _("Kayla"),
    PSYCHIC_F_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 41,
        .species = SPECIES_WOBBUFFET,
        },
        {
        .lvl = 41,
        .species = SPECIES_NATU,
        },
        {
        .lvl = 41,
        .species = SPECIES_KADABRA,
        }
    },
},

#define GABRIELLE_BATTLE(Match, Level)                                                                              \
[DIFFICULTY_NORMAL][TRAINER_GABRIELLE_##Match] =                                                                    \
{                                                                                                                   \
    .trainerName = _("Gabrielle"),                                                                                  \
    POKEMON_BREEDER_F_INFO,                                                                                         \
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,                                                                              \
    .party = (const struct TrainerMon[]) {                                                                          \
        {                                                                                                           \
        POKEMON_BREEDER_MON(Level),                                                                                 \
        .species = Level < 40 ? SPECIES_SHUPPET : SPECIES_BANETTE,                                                  \
        .ability = ABILITY_CURSED_BODY,                                                                             \
        .gender = TRAINER_MON_FEMALE                                                                                \
        },                                                                                                          \
        {                                                                                                           \
        POKEMON_BREEDER_MON(Level),                                                                                 \
        .species = Level < 42 ? SPECIES_RHYHORN : (Level < REMATCH_4_LEVEL_6 ? SPECIES_RHYDON : SPECIES_RHYPERIOR), \
        .ability = ABILITY_RECKLESS,                                                                                \
        .gender = TRAINER_MON_FEMALE                                                                                \
        },                                                                                                          \
        {                                                                                                           \
        POKEMON_BREEDER_MON(Level),                                                                                 \
        .species = SPECIES_CORSOLA,                                                                                 \
        .ability = ABILITY_REGENERATOR,                                                                             \
        .gender = TRAINER_MON_FEMALE                                                                                \
        },                                                                                                          \
        {                                                                                                           \
        POKEMON_BREEDER_MON(Level),                                                                                 \
        .species = Level < 40 ? SPECIES_LOTAD : (Level < 42 ? SPECIES_LOMBRE : SPECIES_LUDICOLO),                   \
        .ability = ABILITY_OWN_TEMPO,                                                                               \
        .gender = TRAINER_MON_FEMALE                                                                                \
        },                                                                                                          \
        {                                                                                                           \
        POKEMON_BREEDER_MON(Level),                                                                                 \
        .species = Level < 40 ? SPECIES_SEEDOT : (Level < 42 ? SPECIES_NUZLEAF : SPECIES_SHIFTRY),                  \
        .ability = ABILITY_PICKPOCKET,                                                                              \
        .gender = TRAINER_MON_FEMALE                                                                                \
        },                                                                                                          \
        {                                                                                                           \
        POKEMON_BREEDER_MON(Level),                                                                                 \
        .species = Level < 40 ? SPECIES_IGGLYBUFF : (Level < 42 ? SPECIES_JIGGLYPUFF : SPECIES_WIGGLYTUFF),         \
        .ability = ABILITY_COMPETITIVE,                                                                             \
        .gender = TRAINER_MON_FEMALE                                                                                \
        },                                                                                                          \
    },                                                                                                              \
}

GABRIELLE_BATTLE(1, 38),
GABRIELLE_BATTLE(2, 40),
GABRIELLE_BATTLE(3, 42),
GABRIELLE_BATTLE(4, REMATCH_4_LEVEL_6),
GABRIELLE_BATTLE(5, REMATCH_5_LEVEL_6),

[DIFFICULTY_NORMAL][TRAINER_WILLIAM] =
{
    .trainerName = _("William"),
    PSYCHIC_M_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 41,
        .species = SPECIES_BALTOY,
        },
        {
        .lvl = 41,
        .species = SPECIES_SPOINK,
        },
        {
        .lvl = 41,
        .species = SPECIES_KIRLIA,
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_TASHA] =
{
    .trainerName = _("Tasha"),
    HEX_MANIAC_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 43,
        .species = SPECIES_SHUPPET,
        IVS(6),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_ATSUSHI] =
{
    .trainerName = _("Atsushi"),
    BLACK_BELT_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 43,
        .species = SPECIES_HARIYAMA,
        IVS(12),
        }
    },
},

#define VALERIE_INFO             \
    .trainerName = _("Valerie"), \
    HEX_MANIAC_INFO,             \
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE

#define VALERIE_SABLEYE(Level)  \
    .lvl = Level,               \
    .species = SPECIES_SABLEYE, \
    .gender = TRAINER_MON_FEMALE

#define VALERIE_SHUPPET(Level)                                 \
    .lvl = Level,                                              \
    .species = Level < 45 ? SPECIES_SHUPPET : SPECIES_BANETTE, \
    .ability = ABILITY_INSOMNIA,                               \
    .gender = TRAINER_MON_FEMALE

#define VALERIE_DUSKULL(Level)                                                                                   \
    .lvl = Level,                                                                                                \
    .species = Level < 45 ? SPECIES_DUSKULL : (Level < REMATCH_5_LEVEL_6 ? SPECIES_DUSCLOPS : SPECIES_DUSKNOIR), \
    .ability = 0,                                                                                                \
    .gender = TRAINER_MON_FEMALE

// Extra for hacks
#define VALERIE_MISDREAVUS

[DIFFICULTY_NORMAL][TRAINER_VALERIE_1] =
{
    VALERIE_INFO,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        VALERIE_SABLEYE(43),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_VALERIE_2] =
{
    VALERIE_INFO,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        VALERIE_DUSKULL(44),
        IVS(2),
        },
        {
        VALERIE_SHUPPET(44),
        IVS(2),
        },
        {
        VALERIE_SABLEYE(44),
        IVS(2),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_VALERIE_3] =
{
    VALERIE_INFO,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        VALERIE_DUSKULL(45),
        IVS(3),
        },
        {
        VALERIE_SHUPPET(45),
        IVS(3),
        },
        {
        VALERIE_SABLEYE(45),
        IVS(3),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_VALERIE_4] =
{
    VALERIE_INFO,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        VALERIE_DUSKULL(REMATCH_4_LEVEL_3),
        IVS(4),
        },
        {
        VALERIE_SHUPPET(REMATCH_4_LEVEL_3),
        IVS(4),
        },
        {
        VALERIE_SABLEYE(REMATCH_4_LEVEL_3),
        IVS(4),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_VALERIE_5] =
{
    VALERIE_INFO,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        VALERIE_DUSKULL(REMATCH_5_LEVEL_3),
        IVS(5),
        },
        {
        VALERIE_SHUPPET(REMATCH_5_LEVEL_3),
        IVS(5),
        },
        {
        VALERIE_SABLEYE(REMATCH_5_LEVEL_3),
        IVS(5),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_CEDRIC] =
{
    .trainerName = _("Cedric"),
    PSYCHIC_M_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 43,
        .species = SPECIES_WOBBUFFET,
        .moves = {MOVE_DESTINY_BOND, MOVE_SAFEGUARD, MOVE_COUNTER, MOVE_MIRROR_COAT}
        }
    },
},

NERISSA_BATTLE(MT_PYRE, 42),
BERYL_BATTLE(MT_PYRE, 42),
MALIK_BATTLE(MT_PYRE, 42),
MARINA_BATTLE(MT_PYRE, 42),

// Route 123 (east)
#define CAMERON_INFO             \
    .trainerName = _("Cameron"), \
    PSYCHIC_M_INFO,              \
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE

#define CAMERON_SOLROCK(Level) \
    .lvl = Level,              \
    .species = SPECIES_SOLROCK

#define CAMERON_KADABRA(Level)                                  \
    .lvl = Level,                                               \
    .species = Level < 46 ? SPECIES_KADABRA : SPECIES_ALAKAZAM, \
    .ability = ABILITY_SYNCHRONIZE,                             \
    .gender = TRAINER_MON_MALE

// Extra for hacks
#define CAMERON_EXEGGCUTE

[DIFFICULTY_NORMAL][TRAINER_CAMERON_1] =
{
    CAMERON_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        CAMERON_KADABRA(44),
        },
        {
        CAMERON_SOLROCK(44),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_CAMERON_2] =
{
    CAMERON_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        CAMERON_KADABRA(46),
        IVS(2),
        },
        {
        CAMERON_SOLROCK(46),
        IVS(2),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_CAMERON_3] =
{
    CAMERON_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        CAMERON_KADABRA(48),
        IVS(3),
        },
        {
        CAMERON_SOLROCK(48),
        IVS(3),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_CAMERON_4] =
{
    CAMERON_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        CAMERON_KADABRA(REMATCH_4_LEVEL_2),
        IVS(4),
        },
        {
        CAMERON_SOLROCK(REMATCH_4_LEVEL_2),
        IVS(4),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_CAMERON_5] =
{
    CAMERON_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        CAMERON_KADABRA(REMATCH_5_LEVEL_2),
        IVS(5),
        },
        {
        CAMERON_SOLROCK(REMATCH_5_LEVEL_2),
        IVS(5),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_JONAS] =
{
    .trainerName = _("Jonas"),
    NINJA_BOY_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 45,
        .species = SPECIES_KOFFING,
        .moves = {MOVE_TOXIC, MOVE_THUNDER, MOVE_SELF_DESTRUCT, MOVE_SLUDGE_BOMB}
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_KAYLEY] =
{
    .trainerName = _("Kayley"),
    PARASOL_LADY_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 45,
        .species = SPECIES_CASTFORM_NORMAL,
        .moves = {MOVE_SUNNY_DAY, MOVE_WEATHER_BALL, MOVE_FLAMETHROWER, MOVE_SOLAR_BEAM}
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_KINDRA] =
{
    .trainerName = _("Kindra"),
    HEX_MANIAC_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 44,
        .species = SPECIES_DUSKULL,
        },
        {
        .lvl = 44,
        .species = SPECIES_SHUPPET,
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_ED] =
{
    .trainerName = _("Ed"),
    COLLECTOR_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 44,
        .species = SPECIES_ZANGOOSE,
        },
        {
        .lvl = 44,
        .species = SPECIES_SEVIPER,
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_WENDY] =
{
    .trainerName = _("Wendy"),
    ACE_TRAINER_F_INFO,
    .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_FORCE_SETUP_FIRST_TURN,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 43,
        .species = SPECIES_MAWILE,
        IVS(12),
        },
        {
        .lvl = 43,
        .species = SPECIES_ROSELIA,
        IVS(12),
        },
        {
        .lvl = 43,
        .species = SPECIES_PELIPPER,
        IVS(12),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_BRAXTON] =
{
    .trainerName = _("Braxton"),
    ACE_TRAINER_M_INFO,
    .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .partySize = 5,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 41,
        .species = SPECIES_SWELLOW,
        IVS(12),
        .moves = {MOVE_AERIAL_ACE, MOVE_QUICK_ATTACK, MOVE_FOCUS_ENERGY, MOVE_ENDEAVOR}
        },
        {
        .lvl = 41,
        .species = SPECIES_VIBRAVA,
        IVS(12),
        .moves = {MOVE_BULLDOZE, MOVE_CRUNCH, MOVE_ROCK_SLIDE, MOVE_SAND_TOMB}
        },
        {
        .lvl = 41,
        .species = SPECIES_WAILMER,
        IVS(12),
        .moves = {MOVE_ROLLOUT, MOVE_WHIRLPOOL, MOVE_DIVE, MOVE_WATER_PULSE}
        },
        {
        .lvl = 41,
        .species = SPECIES_MAGNETON,
        IVS(12),
        .moves = {MOVE_THUNDERBOLT, MOVE_SUPERSONIC, MOVE_THUNDER_WAVE, MOVE_MIRROR_SHOT}
        },
        {
        .lvl = 41,
        .species = SPECIES_SHIFTRY,
        IVS(12),
        .moves = {MOVE_LEAF_BLADE, MOVE_FEINT_ATTACK, MOVE_DOUBLE_TEAM, MOVE_SUCKER_PUNCH}
        }
    },
},

#define FERNANDO_INFO             \
    .trainerName = _("Fernando"), \
    GUITARIST_INFO,               \
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE

#define FERNANDO_LOUDRED(Level)                                \
    .lvl = Level,                                              \
    .species = Level < 45 ? SPECIES_LOUDRED : SPECIES_EXPLOUD, \
    .ability = ABILITY_PUNK_ROCK,                              \
    .gender = TRAINER_MON_MALE

#define FERNANDO_MANECTRIC(Level)     \
    .lvl = Level,                     \
    .species = SPECIES_MANECTRIC,     \
    .ability = ABILITY_LIGHTNING_ROD, \
    .gender = TRAINER_MON_MALE

#define FERNANDO_ELECTRODE(Level) \
    .lvl = Level,                 \
    .species = SPECIES_ELECTRODE, \
    .ability = ABILITY_SOUNDPROOF

[DIFFICULTY_NORMAL][TRAINER_FERNANDO_1] =
{
    FERNANDO_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        FERNANDO_MANECTRIC(44),
        },
        {
        FERNANDO_LOUDRED(44),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_FERNANDO_2] =
{
    FERNANDO_INFO,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        FERNANDO_ELECTRODE(45),
        IVS(2),
        },
        {
        FERNANDO_MANECTRIC(45),
        IVS(2),
        },
        {
        FERNANDO_LOUDRED(45),
        IVS(2),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_FERNANDO_3] =
{
    FERNANDO_INFO,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        FERNANDO_ELECTRODE(47),
        IVS(3),
        },
        {
        FERNANDO_MANECTRIC(47),
        IVS(3),
        },
        {
        FERNANDO_LOUDRED(47),
        IVS(3),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_FERNANDO_4] =
{
    FERNANDO_INFO,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        FERNANDO_ELECTRODE(REMATCH_4_LEVEL_3),
        IVS(4),
        },
        {
        FERNANDO_MANECTRIC(REMATCH_4_LEVEL_3),
        IVS(4),
        },
        {
        FERNANDO_LOUDRED(REMATCH_4_LEVEL_3),
        IVS(4),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_FERNANDO_5] =
{
    FERNANDO_INFO,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        FERNANDO_ELECTRODE(REMATCH_5_LEVEL_3),
        IVS(5),
        },
        {
        FERNANDO_MANECTRIC(REMATCH_5_LEVEL_3),
        IVS(5),
        },
        {
        FERNANDO_LOUDRED(REMATCH_5_LEVEL_3),
        IVS(5),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_ALBERTO] =
{
    .trainerName = _("Alberto"),
    BIRD_KEEPER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 44,
        .species = SPECIES_PELIPPER,
        },
        {
        .lvl = 44,
        .species = SPECIES_XATU,
        }
    },
},

#define JACKI_INFO             \
    .trainerName = _("Jacki"), \
    PSYCHIC_F_INFO,            \
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE

#define JACKI_LUNATONE(Level) \
    .lvl = Level,             \
    .species = SPECIES_LUNATONE

#define JACKI_KADABRA(Level)                                    \
    .lvl = Level,                                               \
    .species = Level < 46 ? SPECIES_KADABRA : SPECIES_ALAKAZAM, \
    .ability = ABILITY_INNER_FOCUS,                             \
    .gender = TRAINER_MON_FEMALE

[DIFFICULTY_NORMAL][TRAINER_JACKI_1] =
{
    JACKI_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        JACKI_KADABRA(44),
        },
        {
        JACKI_LUNATONE(44),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_JACKI_2] =
{
    JACKI_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        JACKI_KADABRA(39),
        IVS(2),
        },
        {
        JACKI_LUNATONE(39),
        IVS(2),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_JACKI_3] =
{
    JACKI_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        JACKI_KADABRA(41),
        IVS(3),
        },
        {
        JACKI_LUNATONE(41),
        IVS(3),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_JACKI_4] =
{
    JACKI_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        JACKI_KADABRA(REMATCH_4_LEVEL_2),
        IVS(4),
        },
        {
        JACKI_LUNATONE(REMATCH_4_LEVEL_2),
        IVS(4),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_JACKI_5] =
{
    JACKI_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        JACKI_KADABRA(REMATCH_5_LEVEL_2),
        IVS(5),
        },
        {
        JACKI_LUNATONE(REMATCH_5_LEVEL_2),
        IVS(5),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_FREDRICK] =
{
    .trainerName = _("Fredrick"),
    EXPERT_M_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 44,
        .species = SPECIES_HARIYAMA,
        IVS(12),
        },
        {
        .lvl = 44,
        .species = SPECIES_MACHOKE,
        IVS(12),
        }
    },
},

#define MAGMA_HIDEOUT_LEVEL CAP_MAGMA_HIDEOUT - 3

// Magma Hideout
#define MAGMA_HIDEOUT_GRUNT(Number, Gender, Species)        \
[DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_##Number] = \
{                                                           \
    .trainerName = _("Grunt"),                              \
    MAGMA_GRUNT_##Gender##_INFO,                            \
    .partySize = 1,                                         \
    .party = (const struct TrainerMon[]) {                  \
        {                                                   \
        .lvl = MAGMA_HIDEOUT_LEVEL,                         \
        .species = SPECIES_##Species,                       \
        }                                                   \
    },                                                      \
}

MAGMA_HIDEOUT_GRUNT(1, M, NUMEL),
MAGMA_HIDEOUT_GRUNT(2, M, GEODUDE),
MAGMA_HIDEOUT_GRUNT(3, F, VULPIX),
MAGMA_HIDEOUT_GRUNT(4, M, BALTOY),
MAGMA_HIDEOUT_GRUNT(5, M, RHYHORN),
MAGMA_HIDEOUT_GRUNT(6, F, VULPIX),
MAGMA_HIDEOUT_GRUNT(7, M, SANDSHREW),
MAGMA_HIDEOUT_GRUNT(8, M, NUMEL),
MAGMA_HIDEOUT_GRUNT(9, M, HOUNDOUR),
MAGMA_HIDEOUT_GRUNT(10, M, PHANPY),

WALKER_BATTLE(MAGMA_HIDEOUT, MAGMA_HIDEOUT_LEVEL),
GAETANO_BATTLE(MAGMA_HIDEOUT, MAGMA_HIDEOUT_LEVEL),
JORDAN_BATTLE(MAGMA_HIDEOUT, MAGMA_HIDEOUT_LEVEL),
TERRANCE_BATTLE(MAGMA_HIDEOUT, MAGMA_HIDEOUT_LEVEL),
GINNY_BATTLE(MAGMA_HIDEOUT, MAGMA_HIDEOUT_LEVEL),
LANDON_BATTLE(MAGMA_HIDEOUT, MAGMA_HIDEOUT_LEVEL),
TABITHA_BATTLE(MAGMA_HIDEOUT, CAP_MAGMA_HIDEOUT - 1, 9),

[DIFFICULTY_NORMAL][TRAINER_MAXIE_MAGMA_HIDEOUT] =
{
    MAXIE_INFO,
    .items = {ITEM_HYPER_POTION, ITEM_SUPER_POTION, ITEM_NONE, ITEM_NONE},
    .partySize = 4,
    .party = (const struct TrainerMon[]) {
        MAXIE_TRAPINCH(CAP_MAGMA_HIDEOUT - 2),
        MAXIE_GOLETT(CAP_MAGMA_HIDEOUT - 1),
        MAXIE_RHYHORN(CAP_MAGMA_HIDEOUT - 1),
        {
        HUMPHREY(CAP_MAGMA_HIDEOUT),
        }
    },
},

// Aqua Hideout
#define AQUA_HIDEOUT_GRUNT(Number, Gender, Species1, Species2) \
[DIFFICULTY_NORMAL][TRAINER_GRUNT_AQUA_HIDEOUT_##Number] =     \
{                                                              \
    .trainerName = _("Grunt"),                                 \
    AQUA_GRUNT_##Gender##_INFO,                                \
    .partySize = 2,                                            \
    .party = (const struct TrainerMon[]) {                     \
        {                                                      \
        .lvl = AQUA_HIDEOUT_LEVEL,                             \
        .species = SPECIES_##Species2,                         \
        },                                                     \
        {                                                      \
        .lvl = AQUA_HIDEOUT_LEVEL,                             \
        .species = SPECIES_##Species1,                         \
        }                                                      \
    },                                                         \
}

AQUA_HIDEOUT_GRUNT(1, M, LOTAD, MAGIKARP),
AQUA_HIDEOUT_GRUNT(2, F, CORSOLA, LUVDISC),
AQUA_HIDEOUT_GRUNT(3, M, WINGULL, CHINCHOU),

NERISSA_BATTLE(AQUA_HIDEOUT, AQUA_HIDEOUT_LEVEL),
BERYL_BATTLE(AQUA_HIDEOUT, AQUA_HIDEOUT_LEVEL),

[DIFFICULTY_NORMAL][TRAINER_CASPIAN_AQUA_HIDEOUT] =
{
    CASPIAN_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        CASPIAN_CLAMPERL(AQUA_HIDEOUT_LEVEL),
        CASPIAN_CARVANHA(AQUA_HIDEOUT_LEVEL, LIQUIDATION, POISON_FANG, ICE_FANG),
    },
},

MALIK_BATTLE(AQUA_HIDEOUT, AQUA_HIDEOUT_LEVEL),
MARINA_BATTLE(AQUA_HIDEOUT, AQUA_HIDEOUT_LEVEL),
MATT_BATTLE(AQUA_HIDEOUT, CAP_AQUA_HIDEOUT, 6),

// Route 124
[DIFFICULTY_NORMAL][TRAINER_GRACE] =
{
    .trainerName = _("Grace"),
    SWIMMER_F_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 46,
        .species = SPECIES_AZUMARILL,
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_DECLAN] =
{
    .trainerName = _("Declan"),
    SWIMMER_M_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 46,
        .species = SPECIES_GYARADOS,
        }
    },
},

#define LILA_AND_ROY_INFO           \
    .trainerName = _("Lila & Roy"), \
    SIS_AND_BRO_INFO,               \
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE

#define LILA_CHINCHOU(Level)                                    \
    .lvl = Level,                                               \
    .species = Level < 47 ? SPECIES_CHINCHOU : SPECIES_LANTURN, \
    .ability = ABILITY_VOLT_ABSORB,                             \
    .gender = TRAINER_MON_FEMALE

#define ROY_HORSEA(Level)                                                                                    \
    .lvl = Level,                                                                                            \
    .species = Level < 45 ? SPECIES_HORSEA : (Level < REMATCH_5_LEVEL_6 ? SPECIES_SEADRA : SPECIES_KINGDRA), \
    .ability = ABILITY_SWIFT_SWIM,                                                                           \
    .gender = TRAINER_MON_MALE

[DIFFICULTY_NORMAL][TRAINER_LILA_AND_ROY_1] =
{
    LILA_AND_ROY_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        LILA_CHINCHOU(46),
        },
        {
        ROY_HORSEA(44),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_LILA_AND_ROY_2] =
{
    LILA_AND_ROY_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        LILA_CHINCHOU(47),
        },
        {
        ROY_HORSEA(45),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_LILA_AND_ROY_3] =
{
    LILA_AND_ROY_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        LILA_CHINCHOU(48),
        },
        {
        ROY_HORSEA(46),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_LILA_AND_ROY_4] =
{
    LILA_AND_ROY_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        LILA_CHINCHOU(REMATCH_4_LEVEL_1),
        },
        {
        ROY_HORSEA(REMATCH_4_LEVEL_3),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_LILA_AND_ROY_5] =
{
    LILA_AND_ROY_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        LILA_CHINCHOU(REMATCH_5_LEVEL_1),
        },
        {
        ROY_HORSEA(REMATCH_5_LEVEL_3),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_SPENCER] =
{
    .trainerName = _("Spencer"),
    SWIMMER_M_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 45,
        .species = SPECIES_TENTACRUEL,
        },
        {
        .lvl = 45,
        .species = SPECIES_PELIPPER,
        }
    },
},

#define JENNY_INFO             \
    .trainerName = _("Jenny"), \
    SWIMMER_F_INFO,            \
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE

#define JENNY_WAILMER(Level)                                   \
    .lvl = Level,                                              \
    .species = Level < 47 ? SPECIES_WAILMER : SPECIES_WAILORD, \
    .ability = ABILITY_WATER_VEIL,                             \
    .gender = TRAINER_MON_FEMALE

#define JENNY_STARYU(Level)                                   \
    .lvl = Level,                                             \
    .species = Level < 47 ? SPECIES_STARYU : SPECIES_STARMIE, \
    .ability = ABILITY_ILLUMINATE,                            \
    .gender = TRAINER_MON_NONE

#define JENNY_LUVDISC(Level)       \
    .lvl = Level,                  \
    .species = SPECIES_LUVDISC,    \
    .ability = ABILITY_SWIFT_SWIM, \
    .gender = TRAINER_MON_FEMALE

// Extra for hacks
#define JENNY_ALOMOMOLA(Level)    \
    .lvl = Level,                 \
    .species = SPECIES_ALOMOMOLA, \
    .ability = ABILITY_HYDRATION, \
    .gender = TRAINER_MON_FEMALE

[DIFFICULTY_NORMAL][TRAINER_JENNY_1] =
{
    JENNY_INFO,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        JENNY_WAILMER(46),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_JENNY_2] =
{
    JENNY_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        JENNY_STARYU(46),
        },
        {
        JENNY_WAILMER(46),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_JENNY_3] =
{
    JENNY_INFO,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        JENNY_LUVDISC(47),
        },
        {
        JENNY_STARYU(47),
        },
        {
        JENNY_WAILMER(47),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_JENNY_4] =
{
    JENNY_INFO,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        JENNY_LUVDISC(REMATCH_4_LEVEL_3),
        },
        {
        JENNY_STARYU(REMATCH_4_LEVEL_3),
        },
        {
        JENNY_WAILMER(REMATCH_4_LEVEL_3),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_JENNY_5] =
{
    JENNY_INFO,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        JENNY_LUVDISC(REMATCH_5_LEVEL_3),
        },
        {
        JENNY_STARYU(REMATCH_5_LEVEL_3),
        },
        {
        JENNY_WAILMER(REMATCH_5_LEVEL_3),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_CHAD] =
{
    .trainerName = _("Chad"),
    SWIMMER_M_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 45,
        .species = SPECIES_TENTACRUEL,
        },
        {
        .lvl = 45,
        .species = SPECIES_WAILMER,
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_ISABELLA] =
{
    .trainerName = _("Isabella"),
    TRIATHLETE_F_SWIMMING_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        TRIATHLETE_MON(46, 0),
        .species = SPECIES_STARMIE,
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_ROLAND] =
{
    .trainerName = _("Roland"),
    SWIMMER_M_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 46,
        .species = SPECIES_SHARPEDO,
        }
    },
},

// Route 125
#define ERNEST_INFO             \
    .trainerName = _("Ernest"), \
    SAILOR_INFO,                \
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE

#define ERNEST_MACHOKE(Level)                                  \
    .lvl = Level,                                              \
    .species = Level < 45 ? SPECIES_MACHOKE : SPECIES_MACHAMP, \
    .ability = ABILITY_GUTS,                                   \
    .gender = TRAINER_MON_MALE

#define ERNEST_WAILMER(Level)                                  \
    .lvl = Level,                                              \
    .species = Level < 45 ? SPECIES_WAILMER : SPECIES_WAILORD, \
    .ability = ABILITY_WATER_VEIL,                             \
    .gender = TRAINER_MON_MALE

#define ERNEST_PELIPPER(Level)   \
    .lvl = Level,                \
    .species = SPECIES_PELIPPER, \
    .ability = ABILITY_KEEN_EYE, \
    .gender = TRAINER_MON_MALE

#define ERNEST_TENTACRUEL(Level)   \
    .lvl = Level,                  \
    .species = SPECIES_TENTACRUEL, \
    .ability = ABILITY_CLEAR_BODY, \
    .gender = TRAINER_MON_MALE

[DIFFICULTY_NORMAL][TRAINER_ERNEST_1] =
{
    ERNEST_INFO,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        ERNEST_PELIPPER(44),
        },
        {
        ERNEST_WAILMER(44),
        },
        {
        ERNEST_MACHOKE(44),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_ERNEST_2] =
{
    ERNEST_INFO,
    .partySize = 4,
    .party = (const struct TrainerMon[]) {
        {
        ERNEST_TENTACRUEL(44),
        IVS(2),
        },
        {
        ERNEST_PELIPPER(44),
        IVS(2),
        },
        {
        ERNEST_WAILMER(44),
        IVS(2),
        },
        {
        ERNEST_MACHOKE(44),
        IVS(2),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_ERNEST_3] =
{
    ERNEST_INFO,
    .partySize = 4,
    .party = (const struct TrainerMon[]) {
        {
        ERNEST_TENTACRUEL(45),
        IVS(3),
        },
        {
        ERNEST_PELIPPER(45),
        IVS(3),
        },
        {
        ERNEST_WAILMER(45),
        IVS(3),
        },
        {
        ERNEST_MACHOKE(45),
        IVS(3),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_ERNEST_4] =
{
    ERNEST_INFO,
    .partySize = 4,
    .party = (const struct TrainerMon[]) {
        {
        ERNEST_TENTACRUEL(REMATCH_4_LEVEL_4),
        IVS(4),
        },
        {
        ERNEST_PELIPPER(REMATCH_4_LEVEL_4),
        IVS(4),
        },
        {
        ERNEST_WAILMER(REMATCH_4_LEVEL_4),
        IVS(4),
        },
        {
        ERNEST_MACHOKE(REMATCH_4_LEVEL_4),
        IVS(4),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_ERNEST_5] =
{
    ERNEST_INFO,
    .partySize = 4,
    .party = (const struct TrainerMon[]) {
        {
        ERNEST_TENTACRUEL(REMATCH_5_LEVEL_4),
        IVS(5),
        },
        {
        ERNEST_PELIPPER(REMATCH_5_LEVEL_4),
        IVS(5),
        },
        {
        ERNEST_WAILMER(REMATCH_5_LEVEL_4),
        IVS(5),
        },
        {
        ERNEST_MACHOKE(REMATCH_5_LEVEL_4),
        IVS(5),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_NOLEN] =
{
    .trainerName = _("Nolen"),
    SWIMMER_M_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 46,
        .species = SPECIES_TENTACRUEL,
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_SHARON] =
{
    .trainerName = _("Sharon"),
    SWIMMER_F_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 46,
        .species = SPECIES_SEAKING,
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_TANYA] =
{
    .trainerName = _("Tanya"),
    SWIMMER_F_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 46,
        .species = SPECIES_LUVDISC,
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_PRESLEY] =
{
    .trainerName = _("Presley"),
    BIRD_KEEPER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 45,
        .species = SPECIES_TROPIUS,
        },
        {
        .lvl = 45,
        .species = SPECIES_XATU,
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_AURON] =
{
    .trainerName = _("Auron"),
    EXPERT_M_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 45,
        .species = SPECIES_MANECTRIC,
        },
        {
        .lvl = 45,
        .species = SPECIES_MACHAMP,
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_STAN] =
{
    .trainerName = _("Stan"),
    SWIMMER_M_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 46,
        .species = SPECIES_SEADRA,
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_KIM_AND_IRIS] =
{
    .trainerName = _("May & Iris"),
    TEAMMATES_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 44,
        .species = SPECIES_CAMERUPT,
        .moves = {MOVE_FLAMETHROWER, MOVE_BULLDOZE, MOVE_REST, MOVE_CURSE}
        },
        {
        .lvl = 46,
        .species = SPECIES_ALTARIA,
        .moves = {MOVE_DRAGON_PULSE, MOVE_AERIAL_ACE, MOVE_SAFEGUARD, MOVE_COTTON_GUARD}
        }
    },
},

// Mossdeep Gym
#define MOSSDEEP_GYM_LEVEL 46

#define MOSSDEEP_GYM_TRAINER(Trainer, Name, Class, Species) \
[DIFFICULTY_NORMAL][TRAINER_##Trainer] =                    \
{                                                           \
    .trainerName = _(Name),                                 \
    Class##_INFO,                                           \
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,                      \
    .partySize = 1,                                         \
    .party = (const struct TrainerMon[]) {                  \
        {                                                   \
        .lvl = MOSSDEEP_GYM_LEVEL,                          \
        .species = SPECIES_##Species,                       \
        IVS(12),                                            \
        }                                                   \
    },                                                      \
}

MOSSDEEP_GYM_TRAINER(PRESTON,  "Preston",  DRAGON_TAMER, GALLADE),
MOSSDEEP_GYM_TRAINER(MAURA,    "Maura",    PSYCHIC_F,    ALAKAZAM),
MOSSDEEP_GYM_TRAINER(SAMANTHA, "Samantha", PSYCHIC_F,    XATU),
MOSSDEEP_GYM_TRAINER(BLAKE,    "Blake",    DRAGON_TAMER, CLAYDOL),
MOSSDEEP_GYM_TRAINER(MACEY,    "Macey",    PSYCHIC_F,    STARMIE),
MOSSDEEP_GYM_TRAINER(CLIFFORD, "Clifford", GENTLEMAN,    FARIGIRAF),
MOSSDEEP_GYM_TRAINER(KATHLEEN, "Kathleen", PSYCHIC_F,    CHIMECHO),
MOSSDEEP_GYM_TRAINER(NICHOLAS, "Nicholas", DRAGON_TAMER, WOBBUFFET),
MOSSDEEP_GYM_TRAINER(NATE,     "Nate",     GENTLEMAN,    GRUMPIG),
MOSSDEEP_GYM_TRAINER(VIRGIL,   "Virgil",   DRAGON_TAMER, GOLDUCK),
MOSSDEEP_GYM_TRAINER(SYLVIA,   "Sylvia",   HEX_MANIAC,   MEDICHAM),
MOSSDEEP_GYM_TRAINER(HANNAH,   "Hannah",   PSYCHIC_F,    GARDEVOIR),

// Trick House 6
[DIFFICULTY_NORMAL][TRAINER_SOPHIA] =
{
    .trainerName = _("Sophia"),
    POKEMON_RANGER_F_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 46,
        .species = SPECIES_ALTARIA,
        IVS(6),
        },
        {
        .lvl = 46,
        .species = SPECIES_ROSELIA,
        IVS(6),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_SEBASTIAN] =
{
    .trainerName = _("Sebastian"),
    POKEMON_RANGER_M_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 47,
        .species = SPECIES_CACTURNE,
        IVS(6),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_BENNY] =
{
    .trainerName = _("Benny"),
    BIRD_KEEPER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 45,
        .species = SPECIES_SWELLOW,
        },
        {
        .lvl = 45,
        .species = SPECIES_PELIPPER,
        },
        {
        .lvl = 45,
        .species = SPECIES_XATU,
        }
    },
},

// Space Center
JORDAN_BATTLE(SPACE_CENTER, SPACE_CENTER_GRUNT_LEVEL),
WALKER_BATTLE(SPACE_CENTER, SPACE_CENTER_GRUNT_LEVEL),
GAETANO_BATTLE(SPACE_CENTER, SPACE_CENTER_GRUNT_LEVEL),
TERRANCE_BATTLE(SPACE_CENTER, SPACE_CENTER_GRUNT_LEVEL),
GINNY_BATTLE(SPACE_CENTER, SPACE_CENTER_GRUNT_LEVEL),
LANDON_BATTLE(SPACE_CENTER, SPACE_CENTER_GRUNT_LEVEL),
COURTNEY_BATTLE(SPACE_CENTER, CAP_SPACE_CENTER - 1, 12),
TABITHA_BATTLE(SPACE_CENTER, CAP_SPACE_CENTER - 1, 12),

[DIFFICULTY_NORMAL][TRAINER_MAXIE_SPACE_CENTER] =
{
    MAXIE_INFO,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        MAXIE_GOLETT(MAXIE_SUPPORTING_SPACE_CENTER_LEVEL),
        MAXIE_RHYHORN(MAXIE_SUPPORTING_SPACE_CENTER_LEVEL),
        {
        HUMPHREY(CAP_SPACE_CENTER),
        .heldItem = ITEM_CAMERUPTITE,
        }
    },
},

// Route 127
[DIFFICULTY_NORMAL][TRAINER_AIDAN] =
{
    .trainerName = _("Aidan"),
    BIRD_KEEPER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 49,
        .species = SPECIES_SWELLOW,
        },
        {
        .lvl = 49,
        .species = SPECIES_SKARMORY,
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_ATHENA] =
{
    .trainerName = _("Athena"),
    ACE_TRAINER_F_INFO,
    .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 49,
        .species = SPECIES_MANECTRIC,
        IVS(12),
        },
        {
        .lvl = 49,
        .species = SPECIES_LINOONE,
        IVS(12),
        .moves = {MOVE_SURF, MOVE_THIEF, MOVE_NONE, MOVE_NONE}
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_JONAH] =
{
    .trainerName = _("Jonah"),
    FISHERMAN_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 48,
        .species = SPECIES_WAILORD,
        },
        {
        .lvl = 48,
        .species = SPECIES_TENTACRUEL,
        },
        {
        .lvl = 48,
        .species = SPECIES_SHARPEDO,
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_ROGER] =
{
    .trainerName = _("Roger"),
    FISHERMAN_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 48,
        .species = SPECIES_GYARADOS,
        },
        {
        .lvl = 48,
        .species = SPECIES_LUVDISC,
        },
        {
        .lvl = 48,
        .species = SPECIES_GYARADOS,
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_HENRY] =
{
    .trainerName = _("Henry"),
    FISHERMAN_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 49,
        .species = SPECIES_SHARPEDO,
        },
        {
        .lvl = 49,
        .species = SPECIES_TENTACRUEL,
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_CAMDEN] =
{
    .trainerName = _("Camden"),
    TRIATHLETE_M_SWIMMING_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        TRIATHLETE_MON(49, 0),
        .species = SPECIES_LANTURN,
        },
        {
        TRIATHLETE_MON(49, 0),
        .species = SPECIES_STARMIE,
        }
    },
},

#define KOJI_INFO             \
    .trainerName = _("Koji"), \
    BLACK_BELT_INFO,          \
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE

#define KOJI_MEDICHAM(Level)     \
    .lvl = Level,                \
    .species = SPECIES_MEDICHAM, \
    .gender = TRAINER_MON_MALE

#define KOJI_MACHOKE(Level)                                    \
    .lvl = Level,                                              \
    .species = Level < 52 ? SPECIES_MACHOKE : SPECIES_MACHAMP, \
    .ability = ABILITY_GUTS,                                   \
    .gender = TRAINER_MON_MALE

#define KOJI_MAKUHITA(Level)                                     \
    .lvl = Level,                                                \
    .species = Level < 53 ? SPECIES_MAKUHITA : SPECIES_HARIYAMA, \
    .ability = ABILITY_GUTS,                                     \
    .gender = TRAINER_MON_MALE

[DIFFICULTY_NORMAL][TRAINER_KOJI_1] =
{
    KOJI_INFO,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        KOJI_MEDICHAM(50),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_KOJI_2] =
{
    KOJI_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        KOJI_MACHOKE(51),
        IVS(1),
        },
        {
        KOJI_MEDICHAM(51),
        IVS(1),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_KOJI_3] =
{
    KOJI_INFO,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        KOJI_MAKUHITA(52),
        IVS(2),
        },
        {
        KOJI_MACHOKE(52),
        IVS(2),
        },
        {
        KOJI_MEDICHAM(52),
        IVS(2),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_KOJI_4] =
{
    KOJI_INFO,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        KOJI_MAKUHITA(53),
        IVS(4),
        },
        {
        KOJI_MACHOKE(53),
        IVS(4),
        },
        {
        KOJI_MEDICHAM(53),
        IVS(4),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_KOJI_5] =
{
    KOJI_INFO,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        KOJI_MAKUHITA(REMATCH_5_LEVEL_3),
        IVS(5),
        },
        {
        KOJI_MACHOKE(REMATCH_5_LEVEL_3),
        IVS(5),
        },
        {
        KOJI_MEDICHAM(REMATCH_5_LEVEL_3),
        IVS(5),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_DONNY] =
{
    .trainerName = _("Donny"),
    TRIATHLETE_F_SWIMMING_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        TRIATHLETE_MON(49, 0),
        .species = SPECIES_PELIPPER,
        },
        {
        TRIATHLETE_MON(49, 0),
        .species = SPECIES_STARMIE,
        }
    },
},

// Route 126
[DIFFICULTY_NORMAL][TRAINER_LEONARDO] =
{
    .trainerName = _("Leonardo"),
    SWIMMER_M_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 50,
        .species = SPECIES_SHARPEDO,
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_ISOBEL] =
{
    .trainerName = _("Isobel"),
    TRIATHLETE_F_SWIMMING_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        TRIATHLETE_MON(50, 0),
        .species = SPECIES_STARMIE,
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_DEAN] =
{
    .trainerName = _("Dean"),
    SWIMMER_M_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 48,
        .species = SPECIES_TENTACRUEL,
        },
        {
        .lvl = 48,
        .species = SPECIES_PELIPPER,
        },
        {
        .lvl = 48,
        .species = SPECIES_SHARPEDO,
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_NIKKI] =
{
    .trainerName = _("Nikki"),
    SWIMMER_F_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 49,
        .species = SPECIES_AZUMARILL,
        },
        {
        .lvl = 49,
        .species = SPECIES_SEALEO,
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_BARRY] =
{
    .trainerName = _("Barry"),
    SWIMMER_M_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 50,
        .species = SPECIES_GYARADOS,
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_SIENNA] =
{
    .trainerName = _("Sienna"),
    SWIMMER_F_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 49,
        .species = SPECIES_CORSOLA,
        },
        {
        .lvl = 49,
        .species = SPECIES_LUVDISC,
        }
    },
},

#define PABLO_INFO              \
    .trainerName = _("Pablo"),  \
    TRIATHLETE_M_SWIMMING_INFO, \
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE

#define PABLO_STARYU(Level, IV)                               \
    TRIATHLETE_MON(Level, IV),                                \
    .species = Level < 50 ? SPECIES_STARYU : SPECIES_STARMIE, \
    .ability = ABILITY_ILLUMINATE

#define PABLO_CORPHISH(Level, IV)                                 \
    TRIATHLETE_MON(Level, IV),                                    \
    .species = Level < 50 ? SPECIES_CORPHISH : SPECIES_CRAWDAUNT, \
    .ability = ABILITY_SHELL_ARMOR,                               \
    .gender = TRAINER_MON_MALE

#define PABLO_PELIPPER(Level, IV) \
    TRIATHLETE_MON(Level, IV),    \
    .species = SPECIES_PELIPPER,  \
    .ability = ABILITY_KEEN_EYE,  \
    .gender = TRAINER_MON_MALE

[DIFFICULTY_NORMAL][TRAINER_PABLO_1] =
{
    PABLO_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        PABLO_CORPHISH(49, 0),
        },
        {
        PABLO_STARYU(49, 0),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_PABLO_2] =
{
    PABLO_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        PABLO_CORPHISH(50, 2),
        },
        {
        PABLO_STARYU(50, 2),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_PABLO_3] =
{
    PABLO_INFO,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        PABLO_PELIPPER(51, 3),
        },
        {
        PABLO_CORPHISH(51, 3),
        },
        {
        PABLO_STARYU(51, 3),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_PABLO_4] =
{
    PABLO_INFO,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        PABLO_PELIPPER(52, 4),
        },
        {
        PABLO_CORPHISH(52, 4),
        },
        {
        PABLO_STARYU(52, 4),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_PABLO_5] =
{
    PABLO_INFO,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        PABLO_PELIPPER(REMATCH_5_LEVEL_3, 5),
        },
        {
        PABLO_CORPHISH(REMATCH_5_LEVEL_3, 5),
        },
        {
        PABLO_STARYU(REMATCH_5_LEVEL_3, 5),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_BRENDA] =
{
    .trainerName = _("Brenda"),
    SWIMMER_F_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 50,
        .species = SPECIES_SEAKING,
        }
    },
},

// Route 128
[DIFFICULTY_NORMAL][TRAINER_RUBEN] =
{
    .trainerName = _("Ruben"),
    ACE_TRAINER_M_INFO,
    .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 49,
        .species = SPECIES_SHIFTRY,
        IVS(12),
        },
        {
        .lvl = 49,
        .species = SPECIES_PROBOPASS,
        IVS(12),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_ALEXA] =
{
    .trainerName = _("Alexa"),
    ACE_TRAINER_F_INFO,
    .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 49,
        .species = SPECIES_BELLOSSOM,
        IVS(12),
        },
        {
        .lvl = 49,
        .species = SPECIES_AZUMARILL,
        IVS(12),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_WAYNE] =
{
    .trainerName = _("Wayne"),
    FISHERMAN_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 48,
        .species = SPECIES_LANTURN,
        },
        {
        .lvl = 48,
        .species = SPECIES_TENTACRUEL,
        },
        {
        .lvl = 48,
        .species = SPECIES_WAILORD,
        }
    },
},

#define ISAIAH_BATTLE(Match, Level)                                 \
[DIFFICULTY_NORMAL][TRAINER_ISAIAH_##Match] =                       \
{                                                                   \
    .trainerName = _("Isaiah"),                                     \
    TRIATHLETE_M_SWIMMING_INFO,                                     \
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,                              \
    .partySize = 1,                                                 \
    .party = (const struct TrainerMon[]) {                          \
        {                                                           \
        TRIATHLETE_MON(Level, Match),                               \
        .species = Level < 51 ? SPECIES_CHINCHOU : SPECIES_LANTURN, \
        .ability = ABILITY_VOLT_ABSORB,                             \
        .gender = TRAINER_MON_MALE,                                 \
        }                                                           \
    }                                                               \
}

// Extra for hacks
#define ISAIAH_BUIZEL

ISAIAH_BATTLE(1, 50),
ISAIAH_BATTLE(2, 51),
ISAIAH_BATTLE(3, 52),
ISAIAH_BATTLE(4, 53),
ISAIAH_BATTLE(5, REMATCH_5_LEVEL_1),

#define KATELYN_BATTLE(Match, Level)                              \
[DIFFICULTY_NORMAL][TRAINER_KATELYN_##Match] =                    \
{                                                                 \
    .trainerName = _("Katelyn"),                                  \
    TRIATHLETE_F_SWIMMING_INFO,                                   \
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,                            \
    .partySize = 1,                                               \
    .party = (const struct TrainerMon[]) {                        \
        {                                                         \
        TRIATHLETE_MON(Level, Match),                             \
        .species = Level < 51 ? SPECIES_STARYU : SPECIES_STARMIE, \
        .ability = ABILITY_ILLUMINATE,                            \
        }                                                         \
    }                                                             \
}

KATELYN_BATTLE(1, 50),
KATELYN_BATTLE(2, 51),
KATELYN_BATTLE(3, 52),
KATELYN_BATTLE(4, 53),
KATELYN_BATTLE(5, REMATCH_5_LEVEL_1),

[DIFFICULTY_NORMAL][TRAINER_CARLEE] =
{
    .trainerName = _("Carlee"),
    SWIMMER_F_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 50,
        .species = SPECIES_SEAKING,
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_HARRISON] =
{
    .trainerName = _("Harrison"),
    SWIMMER_M_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 50,
        .species = SPECIES_TENTACRUEL,
        }
    },
},

// Seafloor Cavern
NERISSA_BATTLE(SEAFLOOR_CAVERN, SEAFLOOR_CAVERN_LEVEL),
BERYL_BATTLE(SEAFLOOR_CAVERN, SEAFLOOR_CAVERN_LEVEL),
MALIK_BATTLE(SEAFLOOR_CAVERN, SEAFLOOR_CAVERN_LEVEL),
MARINA_BATTLE(SEAFLOOR_CAVERN, SEAFLOOR_CAVERN_LEVEL),
MATT_BATTLE(SEAFLOOR_CAVERN, CAP_SEAFLOOR_CAVERN - 1, 12),
SHELLY_BATTLE(SEAFLOOR_CAVERN, CAP_SEAFLOOR_CAVERN - 1, 12),

[DIFFICULTY_NORMAL][TRAINER_ARCHIE_SEAFLOOR_CAVERN] =
{
    ARCHIE_INFO,
    .items = {ITEM_HYPER_POTION, ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE},
    .partySize = 4,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = CAP_SEAFLOOR_CAVERN - 2,
        .species = SPECIES_BARRASKEWDA,
        .ability = ABILITY_SWIFT_SWIM,
        IVS(18),
        .gender = TRAINER_MON_MALE,
        },
        ARCHIE_TENTACOOL(CAP_SEAFLOOR_CAVERN - 2),
        ARCHIE_WAILMER(CAP_SEAFLOOR_CAVERN - 1),
        {
        FINNEAS(CAP_SEAFLOOR_CAVERN),
        .moves = {MOVE_LIQUIDATION, MOVE_CRUNCH, MOVE_ICE_FANG, MOVE_POISON_FANG},
        .heldItem = ITEM_SHARPEDONITE,
        }
    },
},

// Route 129
[DIFFICULTY_NORMAL][TRAINER_REED] =
{
    .trainerName = _("Reed"),
    SWIMMER_M_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 52,
        .species = SPECIES_SEALEO,
        },
        {
        .lvl = 52,
        .species = SPECIES_SHARPEDO,
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_CHASE] =
{
    .trainerName = _("Chase"),
    TRIATHLETE_M_SWIMMING_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        TRIATHLETE_MON(52, 0),
        .species = SPECIES_STARMIE,
        },
        {
        TRIATHLETE_MON(52, 0),
        .species = SPECIES_PELIPPER,
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_ALLISON] =
{
    .trainerName = _("Allison"),
    TRIATHLETE_F_SWIMMING_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        TRIATHLETE_MON(52, 0),
        .species = SPECIES_PELIPPER,
        },
        {
        TRIATHLETE_MON(52, 0),
        .species = SPECIES_STARMIE,
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_CLARENCE] =
{
    .trainerName = _("Clarence"),
    SWIMMER_M_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 53,
        .species = SPECIES_SHARPEDO,
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_TISHA] =
{
    .trainerName = _("Tisha"),
    SWIMMER_F_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 53,
        .species = SPECIES_LANTURN,
        }
    },
},

// Route 130
[DIFFICULTY_NORMAL][TRAINER_RODNEY] =
{
    .trainerName = _("Rodney"),
    SWIMMER_M_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 53,
        .species = SPECIES_GYARADOS,
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_KATIE] =
{
    .trainerName = _("Katie"),
    SWIMMER_F_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 52,
        .species = SPECIES_SEAKING,
        },
        {
        .lvl = 52,
        .species = SPECIES_SEALEO,
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_SANTIAGO] =
{
    .trainerName = _("Santiago"),
    SWIMMER_M_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 52,
        .species = SPECIES_TENTACRUEL,
        },
        {
        .lvl = 52,
        .species = SPECIES_WAILORD,
        }
    },
},

// Route 131
[DIFFICULTY_NORMAL][TRAINER_KEVIN] =
{
    .trainerName = _("Kevin"),
    SWIMMER_M_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 53,
        .species = SPECIES_SEALEO,
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_TALIA] =
{
    .trainerName = _("Talia"),
    TRIATHLETE_F_SWIMMING_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        TRIATHLETE_MON(53, 0),
        .species = SPECIES_STARMIE,
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_RICHARD] =
{
    .trainerName = _("Richard"),
    SWIMMER_M_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 53,
        .species = SPECIES_PELIPPER,
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_KARA] =
{
    .trainerName = _("Kara"),
    SWIMMER_F_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 53,
        .species = SPECIES_SEAKING,
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_HERMAN] =
{
    .trainerName = _("Herman"),
    SWIMMER_M_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 52,
        .species = SPECIES_PELIPPER,
        },
        {
        .lvl = 52,
        .species = SPECIES_TENTACRUEL,
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_SUSIE] =
{
    .trainerName = _("Susie"),
    SWIMMER_F_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 53,
        .species = SPECIES_LUVDISC,
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_RELI_AND_IAN] =
{
    .trainerName = _("Reli & Ian"),
    SIS_AND_BRO_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 53,
        .species = SPECIES_AZUMARILL,
        },
        {
        .lvl = 51,
        .species = SPECIES_PELIPPER,
        }
    },
},

// Route 132
[DIFFICULTY_NORMAL][TRAINER_GILBERT] =
{
    .trainerName = _("Gilbert"),
    SWIMMER_M_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 54,
        .species = SPECIES_SHARPEDO,
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_DANA] =
{
    .trainerName = _("Dana"),
    SWIMMER_F_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 54,
        .species = SPECIES_AZUMARILL,
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_RONALD] =
{
    .trainerName = _("Ronald"),
    FISHERMAN_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 6,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 49,
        .species = SPECIES_GYARADOS,
        },
        {
        .lvl = 49,
        .species = SPECIES_GYARADOS,
        },
        {
        .lvl = 49,
        .species = SPECIES_GYARADOS,
        },
        {
        .lvl = 49,
        .species = SPECIES_GYARADOS,
        },
        {
        .lvl = 49,
        .species = SPECIES_GYARADOS,
        },
        {
        .lvl = 49,
        .species = SPECIES_GYARADOS,
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_KIYO] =
{
    .trainerName = _("Kiyo"),
    BLACK_BELT_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 54,
        .species = SPECIES_HARIYAMA,
        IVS(12),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_PAXTON] =
{
    .trainerName = _("Paxton"),
    EXPERT_M_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 53,
        .species = SPECIES_SWELLOW,
        },
        {
        .lvl = 53,
        .species = SPECIES_BRELOOM,
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_DARCY] =
{
    .trainerName = _("Darcy"),
    ACE_TRAINER_F_INFO,
    .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 53,
        .species = SPECIES_PELIPPER,
        },
        {
        .lvl = 53,
        .species = SPECIES_CAMERUPT,
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_MAKAYLA] =
{
    .trainerName = _("Makayla"),
    EXPERT_F_INFO,
    .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 53,
        .species = SPECIES_ROSELIA,
        },
        {
        .lvl = 53,
        .species = SPECIES_MEDICHAM,
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_JONATHAN] =
{
    .trainerName = _("Jonathan"),
    ACE_TRAINER_M_INFO,
    .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_FORCE_SETUP_FIRST_TURN,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 53,
        .species = SPECIES_KECLEON,
        },
        {
        .lvl = 53,
        .species = SPECIES_EXPLOUD,
        }
    },
},

// Route 133
[DIFFICULTY_NORMAL][TRAINER_LINDA] =
{
    .trainerName = _("Colleen"),
    SWIMMER_F_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 53,
        .species = SPECIES_CORSOLA,
        },
        {
        .lvl = 53,
        .species = SPECIES_SEADRA,
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_BECK] =
{
    .trainerName = _("Beck"),
    BIRD_KEEPER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 54,
        .species = SPECIES_SIRFETCHD,
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_CONOR] =
{
    .trainerName = _("Conor"),
    EXPERT_M_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 53,
        .species = SPECIES_LANTURN,
        },
        {
        .lvl = 53,
        .species = SPECIES_HARIYAMA,
        IVS(24),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_MOLLIE] =
{
    .trainerName = _("Mollie"),
    EXPERT_F_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 53,
        .species = SPECIES_WHISCASH,
        },
        {
        .lvl = 53,
        .species = SPECIES_MEDICHAM,
        IVS(24),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_WARREN] =
{
    .trainerName = _("Warren"),
    ACE_TRAINER_M_INFO,
    .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 53,
        .species = SPECIES_GOLEM,
        IVS(12),
        },
        {
        .lvl = 53,
        .species = SPECIES_LUDICOLO,
        IVS(12),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_DEBRA] =
{
    .trainerName = _("Debra"),
    SWIMMER_F_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 54,
        .species = SPECIES_SEAKING,
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_FRANKLIN] =
{
    .trainerName = _("Franklin"),
    SWIMMER_M_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 54,
        .species = SPECIES_SEALEO,
        }
    },
},

// Route 134
[DIFFICULTY_NORMAL][TRAINER_LAUREL] =
{
    .trainerName = _("Laurel"),
    SWIMMER_F_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 53,
        .species = SPECIES_LAUREL,
        },
        {
        .lvl = 53,
        .species = SPECIES_LAUREL,
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_JACK] =
{
    .trainerName = _("Jack"),
    SWIMMER_M_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 54,
        .species = SPECIES_GYARADOS,
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_HITOSHI] =
{
    .trainerName = _("Hitoshi"),
    BLACK_BELT_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 53,
        .species = SPECIES_HARIYAMA,
        IVS(6),
        },
        {
        .lvl = 53,
        .species = SPECIES_MACHOKE,
        IVS(24),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_REYNA] =
{
    .trainerName = _("Reyna"),
    BATTLE_GIRL_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 53,
        .species = SPECIES_MEDICHAM,
        IVS(6),
        },
        {
        .lvl = 53,
        .species = SPECIES_HARIYAMA,
        IVS(24),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_HUDSON] =
{
    .trainerName = _("Hudson"),
    SAILOR_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 54,
        .species = SPECIES_WAILORD,
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_AARON] =
{
    .trainerName = _("Aaron"),
    DRAGON_TAMER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 54,
        .species = SPECIES_SHELGON,
        PERFECT_IVS,
        .moves = {MOVE_DRAGON_CLAW, MOVE_ZEN_HEADBUTT, MOVE_CRUNCH, MOVE_SCARY_FACE}
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_MARLEY] =
{
    .trainerName = _("Marley"),
    ACE_TRAINER_F_INFO,
    .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 54,
        .species = SPECIES_MANECTRIC,
        PERFECT_IVS,
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_ALEX] =
{
    .trainerName = _("Alex"),
    BIRD_KEEPER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 53,
        .species = SPECIES_XATU,
        IVS(18),
        },
        {
        .lvl = 53,
        .species = SPECIES_SWELLOW,
        IVS(18),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_KELVIN] =
{
    .trainerName = _("Kelvin"),
    SAILOR_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 53,
        .species = SPECIES_MACHOKE,
        IVS(18),
        },
        {
        .lvl = 53,
        .species = SPECIES_SEALEO,
        IVS(18),
        }
    },
},

// Sootopolis Gym
[DIFFICULTY_NORMAL][TRAINER_CONNIE] =
{
    .trainerName = _("Connie"),
    BEAUTY_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 55,
        .species = SPECIES_SEAKING,
        IVS(12),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_ANDREA] =
{
    .trainerName = _("Andrea"),
    LASS_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 55,
        .species = SPECIES_LUVDISC,
        IVS(12),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_DAPHNE] =
{
    .trainerName = _("Daphne"),
    LADY_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        RICH_MON(54),
        .species = SPECIES_CORSOLA,
        IVS(12),
        },
        {
        RICH_MON(54),
        .species = SPECIES_LUVDISC,
        IVS(12),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_ANNIKA] =
{
    .trainerName = _("Annika"),
    POKE_FAN_F_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        POKE_FAN_MON(54),
        .species = SPECIES_MAGIKARP,
        IVS(12),
        .moves = {MOVE_HYDRO_PUMP, MOVE_BOUNCE, MOVE_FLAIL, MOVE_TACKLE}
        },
        {
        POKE_FAN_MON(54),
        .species = SPECIES_FEEBAS,
        IVS(12),
        .moves = {MOVE_WATER_PULSE, MOVE_FLAIL, MOVE_RETURN, MOVE_ATTRACT}
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_TIFFANY] =
{
    .trainerName = _("Tiffany"),
    BEAUTY_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 54,
        .species = SPECIES_TENTACRUEL,
        IVS(12),
        },
        {
        .lvl = 54,
        .species = SPECIES_SHARPEDO,
        IVS(12),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_CRISSY] =
{
    .trainerName = _("Crissy"),
    LASS_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 54,
        .species = SPECIES_LANTURN,
        IVS(12),
        },
        {
        .lvl = 54,
        .species = SPECIES_WAILORD,
        IVS(12),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_BETHANY] =
{
    .trainerName = _("Bethany"),
    POKE_FAN_F_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_ACE_POKEMON,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        POKE_FAN_MON(53),
        .species = SPECIES_AZURILL,
        IVS(12),
        },
        {
        POKE_FAN_MON(53),
        .species = SPECIES_MARILL,
        IVS(12),
        },
        {
        POKE_FAN_MON(53),
        .species = SPECIES_AZUMARILL,
        IVS(12),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_OLIVIA] =
{
    .trainerName = _("Olivia"),
    BEAUTY_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 53,
        .species = SPECIES_CLAMPERL,
        IVS(12),
        .moves = {MOVE_WATER_PULSE, MOVE_WHIRLPOOL, MOVE_RAIN_DANCE, MOVE_IRON_DEFENSE}
        },
        {
        .lvl = 53,
        .species = SPECIES_CRAWDAUNT,
        IVS(12),
        .moves = {MOVE_WATER_PULSE, MOVE_NIGHT_SLASH, MOVE_PROTECT, MOVE_TAUNT}
        },
        {
        .lvl = 53,
        .species = SPECIES_LUDICOLO,
        IVS(12),
        .moves = {MOVE_WATER_PULSE, MOVE_GIGA_DRAIN, MOVE_NATURE_POWER, MOVE_TEETER_DANCE}
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_BRIANNA] =
{
    .trainerName = _("Brianna"),
    LADY_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        RICH_MON(55),
        .species = SPECIES_MARSHTOMP,
        IVS(18),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_BRIDGET] =
{
    .trainerName = _("Bridget"),
    BEAUTY_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 55,
        .species = SPECIES_AZUMARILL,
        IVS(18),
        }
    },
},

// Trick House 7
[DIFFICULTY_NORMAL][TRAINER_JOSHUA] =
{
    .trainerName = _("Joshua"),
    PSYCHIC_M_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 55,
        .species = SPECIES_ALAKAZAM,
        },
        {
        .lvl = 55,
        .species = SPECIES_SOLROCK,
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_PATRICIA] =
{
    .trainerName = _("Patricia"),
    HEX_MANIAC_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 55,
        .species = SPECIES_BANETTE,
        },
        {
        .lvl = 55,
        .species = SPECIES_DUSCLOPS,
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_MARIELA] =
{
    .trainerName = _("Mariela"),
    PSYCHIC_F_INFO,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 56,
        .species = SPECIES_CHIMECHO,
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_EVERETT] =
{
    .trainerName = _("Everett"),
    GENTLEMAN_INFO,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 56,
        .species = SPECIES_WOBBUFFET,
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_ALEXIS] =
{
    .trainerName = _("Alexis"),
    PSYCHIC_F_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 55,
        .species = SPECIES_GARDEVOIR,
        },
        {
        .lvl = 55,
        .species = SPECIES_XATU,
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_ALVARO] =
{
    .trainerName = _("Alvaro"),
    PSYCHIC_M_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 55,
        .species = SPECIES_LUNATONE,
        },
        {
        .lvl = 55,
        .species = SPECIES_ALAKAZAM,
        }
    },
},

// Meteor Falls (Waterfall)
#define JOHN_AND_JAY_INFO                                                               \
    .trainerName = _("John & Jay"),                                                     \
    OLD_COUPLE_INFO,                                                                    \
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY, \
    .partySize = 2

#define JOHN_HARIYAMA(Level)                                                   \
    .lvl = Level,                                                              \
    .species = SPECIES_HARIYAMA,                                               \
    .ability = ABILITY_THICK_FAT,                                              \
    PERFECT_IVS,                                                               \
    .moves = {MOVE_CLOSE_COMBAT, MOVE_ROCK_SLIDE, MOVE_REST, MOVE_BELLY_DRUM}, \
    .gender = TRAINER_MON_MALE

#define JAY_MEDICHAM(Level)                                                             \
    .lvl = Level,                                                                       \
    .species = SPECIES_MEDICHAM,                                                        \
    PERFECT_IVS,                                                                        \
    .moves = {MOVE_ZEN_HEADBUTT, MOVE_HIGH_JUMP_KICK, MOVE_FIRE_PUNCH, MOVE_ICE_PUNCH}, \
    .gender = TRAINER_MON_FEMALE

[DIFFICULTY_NORMAL][TRAINER_JOHN_AND_JAY_1] =
{
    JOHN_AND_JAY_INFO,
    .party = (const struct TrainerMon[]) {
        {
        JAY_MEDICHAM(56),
        },
        {
        JOHN_HARIYAMA(56),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_JOHN_AND_JAY_2] =
{
    JOHN_AND_JAY_INFO,
    .party = (const struct TrainerMon[]) {
        {
        JAY_MEDICHAM(REMATCH_5_MINI_BOSS),
        },
        {
        JOHN_HARIYAMA(REMATCH_5_MINI_BOSS),
        }
    },
},

#define NICOLAS_INFO             \
    .trainerName = _("Nicolas"), \
    DRAGON_TAMER_INFO,           \
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE

#define NICOLAS_ALTARIA(Level)       \
    .lvl = Level,                    \
    .species = SPECIES_ALTARIA,      \
    .ability = ABILITY_NATURAL_CURE, \
    IVS(18),                         \
    .gender = TRAINER_MON_MALE

#define NICOLAS_BAGON(Level)                                                                                     \
    .lvl = Level,                                                                                                \
    .species = Level < 56 ? SPECIES_BAGON : (Level < REMATCH_5_MINI_BOSS ? SPECIES_SHELGON : SPECIES_SALAMENCE), \
    .ability = ABILITY_INTIMIDATE,                                                                               \
    IVS(18),                                                                                                     \
    .gender = TRAINER_MON_MALE

#define NICOLAS_FLYGON(Level)    \
    .lvl = Level,                \
    .species = SPECIES_FLYGON,   \
    .ability = ABILITY_LEVITATE, \
    IVS(18),                     \
    .gender = TRAINER_MON_MALE

// Extra for hacks
#define NICOLAS_DRUDDIGON(Level)    \
    .lvl = Level,                   \
    .species = SPECIES_DRUDDIGON,   \
    .ability = ABILITY_SHEER_FORCE, \
    IVS(18),                        \
    .gender = TRAINER_MON_MALE

#define NICOLAS_NOIVERN

[DIFFICULTY_NORMAL][TRAINER_NICOLAS_1] =
{
    NICOLAS_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        NICOLAS_BAGON(55),
        },
        {
        NICOLAS_ALTARIA(55),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_NICOLAS_2] =
{
    NICOLAS_INFO,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        NICOLAS_FLYGON(REMATCH_5_LEVEL_1),
        },
        {
        NICOLAS_BAGON(REMATCH_5_MINI_BOSS),
        },
        {
        NICOLAS_ALTARIA(REMATCH_5_MINI_BOSS),
        .heldItem = ITEM_DRAGON_FANG
        }
    },
},

// Victory Road
[DIFFICULTY_NORMAL][TRAINER_ALBERT] =
{
    .trainerName = _("Albert"),
    ACE_TRAINER_M_INFO,
    .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 56,
        .species = SPECIES_MAGNETON,
        IVS(12),
        },
        {
        .lvl = 56,
        .species = SPECIES_MUK,
        IVS(12),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_HOPE] =
{
    .trainerName = _("Hope"),
    ACE_TRAINER_F_INFO,
    .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 57,
        .species = SPECIES_ROSERADE,
        IVS(12),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_SHANNON] =
{
    .trainerName = _("Shannon"),
    ACE_TRAINER_F_INFO,
    .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 57,
        .species = SPECIES_CLAYDOL,
        IVS(12),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_SAMUEL] =
{
    .trainerName = _("Samuel"),
    ACE_TRAINER_M_INFO,
    .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 55,
        .species = SPECIES_SWELLOW,
        IVS(12),
        },
        {
        .lvl = 55,
        .species = SPECIES_MAWILE,
        IVS(12),
        },
        {
        .lvl = 55,
        .species = SPECIES_ALAKAZAM,
        IVS(12),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_JULIE] =
{
    .trainerName = _("Julie"),
    ACE_TRAINER_F_INFO,
    .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 55,
        .species = SPECIES_SANDSLASH,
        IVS(12),
        },
        {
        .lvl = 55,
        .species = SPECIES_NINETALES,
        IVS(12),
        },
        {
        .lvl = 55,
        .species = SPECIES_TROPIUS,
        IVS(12),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_OWEN] =
{
    .trainerName = _("Owen"),
    ACE_TRAINER_M_INFO,
    .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 55,
        .species = SPECIES_KECLEON,
        IVS(12),
        },
        {
        .lvl = 55,
        .species = SPECIES_GOLEM,
        IVS(12),
        },
        {
        .lvl = 55,
        .species = SPECIES_WAILORD,
        IVS(12),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_DIANNE] =
{
    .trainerName = _("Dianne"),
    ACE_TRAINER_F_INFO,
    .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 56,
        .species = SPECIES_CLAYDOL,
        .moves = {MOVE_SKILL_SWAP, MOVE_ZEN_HEADBUTT, MOVE_EARTHQUAKE, MOVE_COSMIC_POWER}
        },
        {
        .lvl = 56,
        .species = SPECIES_LANTURN,
        .moves = {MOVE_THUNDERBOLT, MOVE_BUBBLE_BEAM, MOVE_SIGNAL_BEAM, MOVE_THUNDER_WAVE}
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_FELIX] =
{
    .trainerName = _("Felix"),
    ACE_TRAINER_M_INFO,
    .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 56,
        .species = SPECIES_MEDICHAM,
        .moves = {MOVE_ZEN_HEADBUTT, MOVE_HIGH_JUMP_KICK, MOVE_THUNDER_PUNCH, MOVE_FIRE_PUNCH}
        },
        {
        .lvl = 56,
        .species = SPECIES_CLAYDOL,
        .moves = {MOVE_SKILL_SWAP, MOVE_EARTH_POWER, MOVE_PSYCHIC, MOVE_COSMIC_POWER}
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_CAROLINE] =
{
    .trainerName = _("Caroline"),
    ACE_TRAINER_F_INFO,
    .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 56,
        .species = SPECIES_SKARMORY,
        IVS(12),
        },
        {
        .lvl = 56,
        .species = SPECIES_SABLEYE,
        IVS(12),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_EDGAR] =
{
    .trainerName = _("Edgar"),
    ACE_TRAINER_M_INFO,
    .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 56,
        .species = SPECIES_CACTURNE,
        IVS(12),
        },
        {
        .lvl = 56,
        .species = SPECIES_PELIPPER,
        IVS(12),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_MICHELLE] =
{
    .trainerName = _("Michelle"),
    ACE_TRAINER_F_INFO,
    .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 55,
        .species = SPECIES_TORKOAL,
        IVS(12),
        },
        {
        .lvl = 55,
        .species = SPECIES_MEDICHAM,
        IVS(12),
        },
        {
        .lvl = 55,
        .species = SPECIES_LUDICOLO,
        IVS(12),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_MITCHELL] =
{
    .trainerName = _("Mitchell"),
    ACE_TRAINER_M_INFO,
    .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 56,
        .species = SPECIES_LUNATONE,
        .moves = {MOVE_EXPLOSION, MOVE_REFLECT, MOVE_LIGHT_SCREEN, MOVE_PSYCHIC}
        },
        {
        .lvl = 56,
        .species = SPECIES_SOLROCK,
        .moves = {MOVE_EXPLOSION, MOVE_REFLECT, MOVE_LIGHT_SCREEN, MOVE_SHADOW_BALL}
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_HALLE] =
{
    .trainerName = _("Halle"),
    ACE_TRAINER_F_INFO,
    .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 56,
        .species = SPECIES_SABLEYE,
        },
        {
        .lvl = 56,
        .species = SPECIES_ABSOL,
        }
    },
},

#define VITO_SWELLOW
#define VITO_DARMANITAN

[DIFFICULTY_NORMAL][TRAINER_VITO] =
{
    .trainerName = _("Vito"),
    .trainerClass = TRAINER_CLASS_WINSTRATE,
    .trainerPic = TRAINER_PIC_ACE_TRAINER_M,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
    .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    MINI_BOSS_AI_FLAGS,
    .partySize = 5,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 55,
        .species = SPECIES_SWALOT,
        EV_SPREAD_ATK_SPE_HP,
        IVS(12),
        .moves = {MOVE_SLUDGE_WAVE, MOVE_GIGA_DRAIN, MOVE_ICE_BEAM, MOVE_SHADOW_BALL}
        },
        {
        .lvl = 55,
        .species = SPECIES_DODRIO,
        EV_SPREAD_ATK_SPE_HP,
        IVS(12),
        .moves = {MOVE_DRILL_PECK, MOVE_BODY_SLAM, MOVE_JUMP_KICK, MOVE_ACUPRESSURE}
        },
        {
        .lvl = 55,
        .species = SPECIES_ALAKAZAM,
        EV_SPREAD_SPA_SPE_HP,
        IVS(12),
        .moves = {MOVE_PSYCHIC, MOVE_DAZZLING_GLEAM, MOVE_SHADOW_BALL, MOVE_CALM_MIND}
        },
        {
        .lvl = 55,
        .species = SPECIES_ELECTRODE,
        EV_SPREAD_SPA_SPE_HP,
        IVS(12),
        .moves = {MOVE_DISCHARGE, MOVE_SIGNAL_BEAM, MOVE_FOUL_PLAY, MOVE_EERIE_IMPULSE}
        },
        {
        .lvl = 55,
        .species = SPECIES_SHIFTRY,
        EV_SPREAD_ATK_SPE_HP,
        IVS(12),
        .moves = {MOVE_LEAF_BLADE, MOVE_NIGHT_SLASH, MOVE_ROCK_SLIDE, MOVE_SWORDS_DANCE}
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_KATELYNN] =
{
    .trainerName = _("Katelynn"),
    ACE_TRAINER_F_INFO,
    .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 56,
        .species = SPECIES_GARDEVOIR,
        IVS(12),
        .moves = {MOVE_SKILL_SWAP, MOVE_PSYCHIC, MOVE_THUNDERBOLT, MOVE_CALM_MIND}
        },
        {
        .lvl = 56,
        .species = SPECIES_SLAKING,
        IVS(12),
        .moves = {MOVE_EARTHQUAKE, MOVE_SHADOW_CLAW, MOVE_AERIAL_ACE, MOVE_BRICK_BREAK}
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_QUINCY] =
{
    .trainerName = _("Quincy"),
    ACE_TRAINER_M_INFO,
    .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 56,
        .species = SPECIES_SLAKING,
        IVS(12),
        .moves = {MOVE_ATTRACT, MOVE_MEGA_KICK, MOVE_HAMMER_ARM, MOVE_THROAT_CHOP}
        },
        {
        .lvl = 56,
        .species = SPECIES_DUSCLOPS,
        IVS(12),
        .moves = {MOVE_SKILL_SWAP, MOVE_PROTECT, MOVE_WILL_O_WISP, MOVE_TOXIC}
        }
    },
},

// Trick House 8
[DIFFICULTY_NORMAL][TRAINER_KEIRA] =
{
    .trainerName = _("Keira"),
    ACE_TRAINER_F_INFO,
    .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_FORCE_SETUP_FIRST_TURN,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = POSTGAME_LEVEL - 1,
        .species = SPECIES_AGGRON,
        IVS(12),
        },
        {
        .lvl = POSTGAME_LEVEL - 1,
        .species = SPECIES_MANECTRIC,
        IVS(12),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_VINCENT] =
{
    .trainerName = _("Vincent"),
    ACE_TRAINER_M_INFO,
    .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = POSTGAME_LEVEL - 2,
        .species = SPECIES_SABLEYE,
        IVS(12),
        },
        {
        .lvl = POSTGAME_LEVEL - 2,
        .species = SPECIES_MEDICHAM,
        IVS(12),
        },
        {
        .lvl = POSTGAME_LEVEL - 2,
        .species = SPECIES_SHARPEDO,
        IVS(12),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_LEROY] =
{
    .trainerName = _("Leroy"),
    ACE_TRAINER_M_INFO,
    .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = POSTGAME_LEVEL - 1,
        .species = SPECIES_MAWILE,
        IVS(12),
        },
        {
        .lvl = POSTGAME_LEVEL - 1,
        .species = SPECIES_STARMIE,
        IVS(12),
        }
    },
},

// S.S. Tidal
[DIFFICULTY_NORMAL][TRAINER_LEA_AND_JED] =
{
    .trainerName = _("Lea & Jed"),
    YOUNG_COUPLE_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = POSTGAME_LEVEL - 1,
        .species = SPECIES_LUVDISC,
        },
        {
        .lvl = POSTGAME_LEVEL - 1,
        .species = SPECIES_LUVDISC,
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_GARRET] =
{
    .trainerName = _("Garret"),
    RICH_BOY_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        RICH_BOY_MON(POSTGAME_LEVEL),
        .species = SPECIES_AZUMARILL,
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_MICAH] =
{
    .trainerName = _("Micah"),
    GENTLEMAN_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = POSTGAME_LEVEL - 1,
        .species = SPECIES_PERSIAN,
        },
        {
        .lvl = POSTGAME_LEVEL - 1,
        .species = SPECIES_MANECTRIC,
        }
    },
},

#define COLTON_MON(Species)                                               \
    {                                                                     \
    POKE_FAN_MON(POSTGAME_LEVEL - 5),                                     \
    .species = SPECIES_##Species,                                         \
    .moves = {MOVE_ASSIST, MOVE_CHARM, MOVE_FEINT_ATTACK, MOVE_HEAL_BELL} \
    }

[DIFFICULTY_NORMAL][TRAINER_COLTON] =
{
    .trainerName = _("Colton"),
    POKE_FAN_M_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_ACE_POKEMON,
    .partySize = 6,
    .party = (const struct TrainerMon[]) {
        COLTON_MON(SKITTY),
        COLTON_MON(SKITTY),
        COLTON_MON(SKITTY),
        COLTON_MON(SKITTY),
        COLTON_MON(SKITTY),
        COLTON_MON(DELCATTY),
    },
},

[DIFFICULTY_NORMAL][TRAINER_NAOMI] =
{
    .trainerName = _("Naomi"),
    LADY_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        RICH_MON(POSTGAME_LEVEL),
        .species = SPECIES_ROSERADE,
        IVS(12),
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_THOMAS] =
{
    .trainerName = _("Thomas"),
    GENTLEMAN_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = POSTGAME_LEVEL,
        .species = SPECIES_ZANGOOSE,
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_PHILLIP] =
{
    .trainerName = _("Phillip"),
    SAILOR_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = POSTGAME_LEVEL - 1,
        .species = SPECIES_TENTACRUEL,
        },
        {
        .lvl = POSTGAME_LEVEL - 1,
        .species = SPECIES_MACHAMP,
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_LEONARD] =
{
    .trainerName = _("Leonard"),
    SAILOR_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = POSTGAME_LEVEL - 2,
        .species = SPECIES_QUAGSIRE,
        },
        {
        .lvl = POSTGAME_LEVEL - 2,
        .species = SPECIES_PELIPPER,
        },
        {
        .lvl = POSTGAME_LEVEL - 2,
        .species = SPECIES_EMPOLEON,
        }
    },
},

// Frontier Brains
#define FRONTIER_BRAIN_INFO(Class, Name)        \
    .trainerClass = TRAINER_CLASS_##Class,      \
    .trainerPic = TRAINER_PIC_##Class##_##Name, \
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY

#define FRONTIER_BRAIN_MON(Level, Species) \
    {                                      \
    .lvl = 50,                             \
    .species = SPECIES_##Species,          \
    PERFECT_IVS,                           \
    }

[DIFFICULTY_NORMAL][TRAINER_ANABEL] =
{
    .trainerName = _("Anabel"),
    FRONTIER_BRAIN_INFO(SALON_MAIDEN, ANABEL),
    .gender = TRAINER_GENDER_FEMALE,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        FRONTIER_BRAIN_MON(50, SNORLAX),
    },
},

[DIFFICULTY_NORMAL][TRAINER_TUCKER] =
{
    .trainerName = _("Tucker"),
    FRONTIER_BRAIN_INFO(DOME_ACE, TUCKER),
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        FRONTIER_BRAIN_MON(50, SWAMPERT),
    },
},

[DIFFICULTY_NORMAL][TRAINER_SPENSER] =
{
    .trainerName = _("Spenser"),
    FRONTIER_BRAIN_INFO(PALACE_MAVEN, SPENSER),
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
    .partySize = 4,
    .party = (const struct TrainerMon[]) {
        FRONTIER_BRAIN_MON(5, AZURILL),
        FRONTIER_BRAIN_MON(5, UNOWN),
        FRONTIER_BRAIN_MON(40, DUSCLOPS),
        FRONTIER_BRAIN_MON(POSTGAME_LEVEL, KYOGRE),
    },
},

[DIFFICULTY_NORMAL][TRAINER_GRETA] =
{
    .trainerName = _("Greta"),
    FRONTIER_BRAIN_INFO(ARENA_TYCOON, GRETA),
    .gender = TRAINER_GENDER_FEMALE,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .partySize = 4,
    .party = (const struct TrainerMon[]) {
        FRONTIER_BRAIN_MON(50, HERACROSS),
        FRONTIER_BRAIN_MON(50, MIENSHAO),
        FRONTIER_BRAIN_MON(50, BRELOOM),
        FRONTIER_BRAIN_MON(50, MEDICHAM),
    },
},

[DIFFICULTY_NORMAL][TRAINER_NOLAND] =
{
    .trainerName = _("Noland"),
    FRONTIER_BRAIN_INFO(FACTORY_HEAD, NOLAND),
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        FRONTIER_BRAIN_MON(50, PINSIR),
    },
},

[DIFFICULTY_NORMAL][TRAINER_LUCY] =
{
    .trainerName = _("Lucy"),
    FRONTIER_BRAIN_INFO(PIKE_QUEEN, LUCY),
    .gender = TRAINER_GENDER_FEMALE,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        FRONTIER_BRAIN_MON(60, SEVIPER),
    },
},

[DIFFICULTY_NORMAL][TRAINER_BRANDON] =
{
    .trainerName = _("Brandon"),
    FRONTIER_BRAIN_INFO(PYRAMID_KING, BRANDON),
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
    .partySize = 6,
    .party = (const struct TrainerMon[]) {
        FRONTIER_BRAIN_MON(50, REGIDRAGO),
        FRONTIER_BRAIN_MON(50, REGIELEKI),
        FRONTIER_BRAIN_MON(50, REGIROCK),
        FRONTIER_BRAIN_MON(50, REGICE),
        FRONTIER_BRAIN_MON(50, REGISTEEL),
        FRONTIER_BRAIN_MON(POSTGAME_LEVEL, REGIGIGAS),
    },
},

// Battle Frontier new
[DIFFICULTY_NORMAL][TRAINER_BRENDAN_POSTGAME] =
{
    BRENDAN_INFO,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 5,
        .species = SPECIES_NONE,
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_MAY_POSTGAME] =
{
    MAY_INFO,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 5,
        .species = SPECIES_NONE,
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_MAXIE_POSTGAME] =
{
    MAXIE_INFO,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 5,
        .species = SPECIES_NONE,
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_ARCHIE_POSTGAME] =
{
    ARCHIE_INFO,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 5,
        .species = SPECIES_NONE,
        }
    },
},

// Other
[DIFFICULTY_NORMAL][TRAINER_RED] =
{
    .trainerName = _("Red"),
    .trainerClass = TRAINER_CLASS_RIVAL,
    .trainerPic = TRAINER_PIC_RED,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 5,
        .species = SPECIES_CHARMANDER,
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_LEAF] =
{
    .trainerName = _("Leaf"),
    .trainerClass = TRAINER_CLASS_RIVAL,
    .trainerPic = TRAINER_PIC_LEAF,
    .gender = TRAINER_GENDER_FEMALE,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 5,
        .species = SPECIES_BULBASAUR,
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_BRENDAN_PLACEHOLDER] =
{
    .trainerName = _("Brendan"),
    .trainerClass = TRAINER_CLASS_RS_PROTAG,
    .trainerPic = TRAINER_PIC_RS_BRENDAN,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 5,
        .species = SPECIES_GROUDON,
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_MAY_PLACEHOLDER] =
{
    .trainerName = _("May"),
    .trainerClass = TRAINER_CLASS_RS_PROTAG,
    .trainerPic = TRAINER_PIC_RS_MAY,
    .gender = TRAINER_GENDER_FEMALE,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 5,
        .species = SPECIES_KYOGRE,
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_DUDLEY] =
{
    .trainerName = _("Dudley"),
    SWIMMER_M_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 33,
        .species = SPECIES_TENTACOOL,
        },
        {
        .lvl = 33,
        .species = SPECIES_WINGULL,
        },
        {
        .lvl = 33,
        .species = SPECIES_TENTACRUEL,
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_KAYLEE] =
{
    .trainerName = _("Kaylee"),
    SWIMMER_F_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 34,
        .species = SPECIES_LANTURN,
        },
        {
        .lvl = 34,
        .species = SPECIES_PELIPPER,
        }
    },
},

[DIFFICULTY_NORMAL][TRAINER_TERRY] =
{
    .trainerName = _("Terry"),
    PSYCHIC_F_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 37,
        .species = SPECIES_GIRAFARIG,
        }
    },
},

#define UNUSED_TRAINER(Num)                       \
[DIFFICULTY_NORMAL][TRAINER_UNUSED_##Num] =       \
{                                                 \
    .trainerName = _("Unused"),                   \
    .trainerClass = TRAINER_CLASS_PKMN_TRAINER_2, \
    .trainerPic = TRAINER_PIC_RS_BRENDAN,         \
    .partySize = 1,                               \
    .party = (const struct TrainerMon[]) {        \
        {                                         \
        .lvl = 1,                                 \
        .species = SPECIES_NONE,                  \
        }                                         \
    },                                            \
}

UNUSED_TRAINER(1),
UNUSED_TRAINER(2),
UNUSED_TRAINER(3),
UNUSED_TRAINER(4),
UNUSED_TRAINER(5),
UNUSED_TRAINER(6),
UNUSED_TRAINER(7),
UNUSED_TRAINER(8),
UNUSED_TRAINER(9),
UNUSED_TRAINER(10),
UNUSED_TRAINER(11),
UNUSED_TRAINER(12),
UNUSED_TRAINER(13),
UNUSED_TRAINER(14),
UNUSED_TRAINER(15),

#else
[DIFFICULTY_NORMAL][TRAINER_NONE] =
{
    .trainerName = _("PH"),
    .trainerClass = TRAINER_CLASS_PKMN_TRAINER_1,
    .trainerPic = TRAINER_PIC_HIKER_FRLG,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
    .partySize = 0,
    .party = (const struct TrainerMon[])
    {
    },
},

#define RIVAL_OAKS_LAB         0
#define RIVAL_ROUTE_22_EARLY   1
#define RIVAL_CERULEAN         2
#define RIVAL_SS_ANNE          3
#define RIVAL_POKEMON_TOWER    4
#define RIVAL_SILPH            5
#define RIVAL_ROUTE_22_LATE    6
#define RIVAL_CHAMPION         7
#define RIVAL_CHAMPION_REMATCH 8

#define RIVAL_OAKS_LAB_STARTER_LEVEL          5
#define RIVAL_ROUTE_22_EARLY_STARTER_LEVEL    7
#define RIVAL_CERULEAN_STARTER_LEVEL         18
#define RIVAL_SS_ANNE_STARTER_LEVEL          20
#define RIVAL_POKEMON_TOWER_STARTER_LEVEL    25
#define RIVAL_SILPH_STARTER_LEVEL            40
#define RIVAL_ROUTE_22_LATE_STARTER_LEVEL    53
#define RIVAL_CHAMPION_STARTER_LEVEL         63
#define RIVAL_CHAMPION_REMATCH_STARTER_LEVEL 75

// Important trainers
#define RIVAL_INFO                                  \
    .trainerName = _("Terry"),                      \
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE, \
    BOSS_AI_FLAGS

#define RIVAL_EARLY_INFO \
    RIVAL_INFO,          \
    TRAINER_CLASS_PIC(RIVAL_EARLY_FRLG)

#define RIVAL_LATE_INFO \
    RIVAL_INFO,          \
    TRAINER_CLASS_PIC(RIVAL_LATE_FRLG)

#define CHAMPION_INFO                                                                      \
    RIVAL_INFO,                                                                            \
    .trainerClass = TRAINER_CLASS_CHAMPION_FRLG,                                           \
    .trainerPic = TRAINER_PIC_CHAMPION_RIVAL_FRLG,                                         \
    .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE}, \
    .mugshotColor = MUGSHOT_COLOR_YELLOW,                                                  \
    .partySize = 6

// Figure out moves. Check each fight if the custom moves match up with what the level up moves would be in vanilla
#define RIVAL_STARTER(Location, Type)                                                        \
    {                                                                                               \
    .lvl = Location##_STARTER_LEVEL,                                                                \
    .species = Type##_STARTER_FRLG + (Location < RIVAL_CERULEAN ? 0 : (Location < RIVAL_SILPH ? 1 : 2)), \
    .nature = NATURE_MODEST,                                                                        \
    PERFECT_IVS,                                                                                    \
    .heldItem = Location < RIVAL_CHAMPION ? ITEM_NONE : (TYPE_##Type == TYPE_GRASS ? ITEM_VENUSAURITE : (TYPE_##Type == TYPE_FIRE ? ITEM_CHARIZARDITE_Y : ITEM_BLASTOISINITE)), \
    }

#define RIVAL_BATTLES(Type)                                                    \
[DIFFICULTY_NORMAL][TRAINER_RIVAL_OAKS_LAB_##Type] =                           \
{                                                                              \
    RIVAL_EARLY_INFO,                                                          \
    .partySize = 1,                                                            \
    .party = (const struct TrainerMon[]) {                                     \
        RIVAL_STARTER(RIVAL_OAKS_LAB, Type),                                   \
    },                                                                         \
}

RIVAL_BATTLES(GRASS),
RIVAL_BATTLES(FIRE),
RIVAL_BATTLES(WATER),

[DIFFICULTY_NORMAL][TRAINER_RIVAL_ROUTE_22_EARLY_GRASS] =
{
    RIVAL_EARLY_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 9,
        .species = SPECIES_PIDGEY,
        IVS(6),
        },
        {
        .lvl = 9,
        .species = SPECIES_BULBASAUR,
        IVS(6),
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_RIVAL_ROUTE_22_EARLY_FIRE] =
{
    RIVAL_EARLY_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 9,
        .species = SPECIES_PIDGEY,
        IVS(6),
        },
        {
        .lvl = 9,
        .species = SPECIES_CHARMANDER,
        IVS(6),
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_RIVAL_ROUTE_22_EARLY_WATER] =
{
    RIVAL_EARLY_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 9,
        .species = SPECIES_PIDGEY,
        IVS(6),
        },
        {
        .lvl = 9,
        .species = SPECIES_SQUIRTLE,
        IVS(6),
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_RIVAL_CERULEAN_GRASS] =
{
    RIVAL_EARLY_INFO,
    .partySize = 4,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 17,
        .species = SPECIES_PIDGEOTTO,
        IVS(6),
        },
        {
        .lvl = 16,
        .species = SPECIES_ABRA,
        IVS(6),
        },
        {
        .lvl = 15,
        .species = SPECIES_RATTATA,
        IVS(6),
        },
        {
        .lvl = 18,
        .species = SPECIES_BULBASAUR,
        IVS(12),
        .moves = {MOVE_SLEEP_POWDER, MOVE_POISON_POWDER, MOVE_VINE_WHIP, MOVE_LEECH_SEED},
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_RIVAL_CERULEAN_FIRE] =
{
    RIVAL_EARLY_INFO,
    .partySize = 4,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 17,
        .species = SPECIES_PIDGEOTTO,
        IVS(6),
        },
        {
        .lvl = 16,
        .species = SPECIES_ABRA,
        IVS(6),
        },
        {
        .lvl = 15,
        .species = SPECIES_RATTATA,
        IVS(6),
        },
        {
        .lvl = 18,
        .species = SPECIES_CHARMANDER,
        IVS(12),
        .moves = {MOVE_METAL_CLAW, MOVE_EMBER, MOVE_GROWL, MOVE_SCRATCH},
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_RIVAL_CERULEAN_WATER] =
{
    RIVAL_EARLY_INFO,
    .partySize = 4,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 17,
        .species = SPECIES_PIDGEOTTO,
        IVS(6),
        },
        {
        .lvl = 16,
        .species = SPECIES_ABRA,
        IVS(6),
        },
        {
        .lvl = 15,
        .species = SPECIES_RATTATA,
        IVS(6),
        },
        {
        .lvl = 18,
        .species = SPECIES_SQUIRTLE,
        IVS(12),
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_RIVAL_SS_ANNE_GRASS] =
{
    RIVAL_LATE_INFO,
    .partySize = 4,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 19,
        .species = SPECIES_PIDGEOTTO,
        IVS(6),
        },
        {
        .lvl = 16,
        .species = SPECIES_RATICATE,
        IVS(6),
        },
        {
        .lvl = 18,
        .species = SPECIES_KADABRA,
        IVS(6),
        },
        {
        .lvl = 20,
        .species = SPECIES_IVYSAUR,
        IVS(12),
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_RIVAL_SS_ANNE_FIRE] =
{
    RIVAL_LATE_INFO,
    .partySize = 4,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 19,
        .species = SPECIES_PIDGEOTTO,
        IVS(6),
        },
        {
        .lvl = 16,
        .species = SPECIES_RATICATE,
        IVS(6),
        },
        {
        .lvl = 18,
        .species = SPECIES_KADABRA,
        IVS(6),
        },
        {
        .lvl = 20,
        .species = SPECIES_CHARMELEON,
        IVS(12),
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_RIVAL_SS_ANNE_WATER] =
{
    RIVAL_LATE_INFO,
    .partySize = 4,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 19,
        .species = SPECIES_PIDGEOTTO,
        IVS(6),
        },
        {
        .lvl = 16,
        .species = SPECIES_RATICATE,
        IVS(6),
        },
        {
        .lvl = 18,
        .species = SPECIES_KADABRA,
        IVS(6),
        },
        {
        .lvl = 20,
        .species = SPECIES_WARTORTLE,
        IVS(12),
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_RIVAL_POKEMON_TOWER_GRASS] =
{
    RIVAL_LATE_INFO,
    .partySize = 5,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 25,
        .species = SPECIES_PIDGEOTTO,
        IVS(12),
        },
        {
        .lvl = 23,
        .species = SPECIES_GYARADOS,
        IVS(12),
        },
        {
        .lvl = 22,
        .species = SPECIES_GROWLITHE,
        IVS(12),
        },
        {
        .lvl = 20,
        .species = SPECIES_KADABRA,
        IVS(12),
        },
        {
        .lvl = 25,
        .species = SPECIES_IVYSAUR,
        IVS(12),
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_RIVAL_POKEMON_TOWER_FIRE] =
{
    RIVAL_LATE_INFO,
    .partySize = 5,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 25,
        .species = SPECIES_PIDGEOTTO,
        IVS(12),
        },
        {
        .lvl = 23,
        .species = SPECIES_EXEGGCUTE,
        IVS(12),
        },
        {
        .lvl = 22,
        .species = SPECIES_GYARADOS,
        IVS(12),
        },
        {
        .lvl = 20,
        .species = SPECIES_KADABRA,
        IVS(12),
        },
        {
        .lvl = 25,
        .species = SPECIES_CHARMELEON,
        IVS(12),
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_RIVAL_POKEMON_TOWER_WATER] =
{
    RIVAL_LATE_INFO,
    .partySize = 5,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 25,
        .species = SPECIES_PIDGEOTTO,
        IVS(12),
        },
        {
        .lvl = 23,
        .species = SPECIES_GROWLITHE,
        IVS(12),
        },
        {
        .lvl = 22,
        .species = SPECIES_EXEGGCUTE,
        IVS(12),
        },
        {
        .lvl = 20,
        .species = SPECIES_KADABRA,
        IVS(12),
        },
        {
        .lvl = 25,
        .species = SPECIES_WARTORTLE,
        IVS(12),
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_RIVAL_SILPH_GRASS] =
{
    RIVAL_LATE_INFO,
    .partySize = 5,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 37,
        .species = SPECIES_PIDGEOT,
        IVS(12),
        },
        {
        .lvl = 38,
        .species = SPECIES_GYARADOS,
        IVS(12),
        },
        {
        .lvl = 35,
        .species = SPECIES_GROWLITHE,
        IVS(12),
        },
        {
        .lvl = 35,
        .species = SPECIES_ALAKAZAM,
        IVS(12),
        },
        {
        .lvl = 40,
        .species = SPECIES_VENUSAUR,
        IVS(18),
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_RIVAL_SILPH_FIRE] =
{
    RIVAL_LATE_INFO,
    .partySize = 5,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 37,
        .species = SPECIES_PIDGEOT,
        IVS(12),
        },
        {
        .lvl = 38,
        .species = SPECIES_EXEGGCUTE,
        IVS(12),
        },
        {
        .lvl = 35,
        .species = SPECIES_GYARADOS,
        IVS(12),
        },
        {
        .lvl = 35,
        .species = SPECIES_ALAKAZAM,
        IVS(12),
        },
        {
        .lvl = 40,
        .species = SPECIES_CHARIZARD,
        IVS(18),
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_RIVAL_SILPH_WATER] =
{
    RIVAL_LATE_INFO,
    .partySize = 5,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 37,
        .species = SPECIES_PIDGEOT,
        IVS(12),
        },
        {
        .lvl = 38,
        .species = SPECIES_GROWLITHE,
        IVS(12),
        },
        {
        .lvl = 35,
        .species = SPECIES_EXEGGCUTE,
        IVS(12),
        },
        {
        .lvl = 35,
        .species = SPECIES_ALAKAZAM,
        IVS(12),
        },
        {
        .lvl = 40,
        .species = SPECIES_BLASTOISE,
        IVS(18),
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_RIVAL_ROUTE_22_LATE_GRASS] =
{
    RIVAL_LATE_INFO,
    .partySize = 6,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 47,
        .species = SPECIES_PIDGEOT,
        IVS(18),
        .moves = {MOVE_FEATHER_DANCE, MOVE_WING_ATTACK, MOVE_GUST, MOVE_QUICK_ATTACK},
        },
        {
        .lvl = 45,
        .species = SPECIES_RHYHORN,
        IVS(18),
        .moves = {MOVE_TAKE_DOWN, MOVE_HORN_DRILL, MOVE_ROCK_BLAST, MOVE_FURY_ATTACK},
        },
        {
        .lvl = 45,
        .species = SPECIES_GYARADOS,
        IVS(18),
        .moves = {MOVE_HYDRO_PUMP, MOVE_TWISTER, MOVE_LEER, MOVE_RAIN_DANCE},
        },
        {
        .lvl = 45,
        .species = SPECIES_GROWLITHE,
        IVS(18),
        .moves = {MOVE_FLAME_WHEEL, MOVE_TAKE_DOWN, MOVE_LEER, MOVE_AGILITY},
        },
        {
        .lvl = 47,
        .species = SPECIES_ALAKAZAM,
        IVS(18),
        .moves = {MOVE_PSYCHIC, MOVE_CALM_MIND, MOVE_FUTURE_SIGHT, MOVE_DISABLE},
        },
        {
        .lvl = 53,
        .species = SPECIES_VENUSAUR,
        IVS(30),
        .moves = {MOVE_RAZOR_LEAF, MOVE_SWEET_SCENT, MOVE_GROWTH, MOVE_SYNTHESIS},
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_RIVAL_ROUTE_22_LATE_FIRE] =
{
    RIVAL_LATE_INFO,
    .partySize = 6,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 47,
        .species = SPECIES_PIDGEOT,
        IVS(18),
        .moves = {MOVE_FEATHER_DANCE, MOVE_WING_ATTACK, MOVE_GUST, MOVE_QUICK_ATTACK},
        },
        {
        .lvl = 45,
        .species = SPECIES_RHYHORN,
        IVS(18),
        .moves = {MOVE_TAKE_DOWN, MOVE_HORN_DRILL, MOVE_ROCK_BLAST, MOVE_FURY_ATTACK},
        },
        {
        .lvl = 45,
        .species = SPECIES_EXEGGCUTE,
        IVS(18),
        .moves = {MOVE_SOLAR_BEAM, MOVE_SLEEP_POWDER, MOVE_POISON_POWDER, MOVE_STUN_SPORE},
        },
        {
        .lvl = 45,
        .species = SPECIES_GYARADOS,
        IVS(18),
        .moves = {MOVE_HYDRO_PUMP, MOVE_TWISTER, MOVE_LEER, MOVE_RAIN_DANCE},
        },
        {
        .lvl = 47,
        .species = SPECIES_ALAKAZAM,
        IVS(18),
        .moves = {MOVE_PSYCHIC, MOVE_CALM_MIND, MOVE_FUTURE_SIGHT, MOVE_DISABLE},
        },
        {
        .lvl = 53,
        .species = SPECIES_CHARIZARD,
        IVS(30),
        .moves = {MOVE_FLAMETHROWER, MOVE_WING_ATTACK, MOVE_SLASH, MOVE_SCARY_FACE},
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_RIVAL_ROUTE_22_LATE_WATER] =
{
    RIVAL_LATE_INFO,
    .partySize = 6,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 47,
        .species = SPECIES_PIDGEOT,
        IVS(18),
        .moves = {MOVE_FEATHER_DANCE, MOVE_WING_ATTACK, MOVE_GUST, MOVE_QUICK_ATTACK},
        },
        {
        .lvl = 45,
        .species = SPECIES_RHYHORN,
        IVS(18),
        .moves = {MOVE_TAKE_DOWN, MOVE_HORN_DRILL, MOVE_ROCK_BLAST, MOVE_FURY_ATTACK},
        },
        {
        .lvl = 45,
        .species = SPECIES_GROWLITHE,
        IVS(18),
        .moves = {MOVE_FLAME_WHEEL, MOVE_TAKE_DOWN, MOVE_LEER, MOVE_AGILITY},
        },
        {
        .lvl = 45,
        .species = SPECIES_EXEGGCUTE,
        IVS(18),
        .moves = {MOVE_SOLAR_BEAM, MOVE_SLEEP_POWDER, MOVE_POISON_POWDER, MOVE_STUN_SPORE},
        },
        {
        .lvl = 47,
        .species = SPECIES_ALAKAZAM,
        IVS(18),
        .moves = {MOVE_PSYCHIC, MOVE_CALM_MIND, MOVE_FUTURE_SIGHT, MOVE_DISABLE},
        },
        {
        .lvl = 53,
        .species = SPECIES_BLASTOISE,
        IVS(30),
        .moves = {MOVE_WATER_GUN, MOVE_RAIN_DANCE, MOVE_BITE, MOVE_RAPID_SPIN},
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_CHAMPION_FIRST_GRASS] =
{
    CHAMPION_INFO,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 59,
        .species = SPECIES_PIDGEOT,
        PERFECT_IVS,
        .moves = {MOVE_AERIAL_ACE, MOVE_FEATHER_DANCE, MOVE_SAND_ATTACK, MOVE_WHIRLWIND},
        },
        {
        .lvl = 57,
        .species = SPECIES_ALAKAZAM,
        PERFECT_IVS,
        .moves = {MOVE_PSYCHIC, MOVE_FUTURE_SIGHT, MOVE_RECOVER, MOVE_REFLECT},
        },
        {
        .lvl = 59,
        .species = SPECIES_RHYDON,
        PERFECT_IVS,
        .moves = {MOVE_TAKE_DOWN, MOVE_EARTHQUAKE, MOVE_ROCK_TOMB, MOVE_SCARY_FACE},
        },
        {
        .lvl = 59,
        .species = SPECIES_GYARADOS,
        PERFECT_IVS,
        .moves = {MOVE_HYDRO_PUMP, MOVE_DRAGON_RAGE, MOVE_BITE, MOVE_THRASH},
        },
        {
        .lvl = 61,
        .species = SPECIES_ARCANINE,
        PERFECT_IVS,
        .moves = {MOVE_EXTREME_SPEED, MOVE_FLAMETHROWER, MOVE_ROAR, MOVE_BITE},
        },
        {
        .lvl = 63,
        .species = SPECIES_VENUSAUR,
        PERFECT_IVS,
        .moves = {MOVE_SOLAR_BEAM, MOVE_SYNTHESIS, MOVE_SUNNY_DAY, MOVE_GROWTH},
        .heldItem = ITEM_SITRUS_BERRY,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_CHAMPION_FIRST_FIRE] =
{
    CHAMPION_INFO,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 59,
        .species = SPECIES_PIDGEOT,
        PERFECT_IVS,
        .moves = {MOVE_AERIAL_ACE, MOVE_FEATHER_DANCE, MOVE_SAND_ATTACK, MOVE_WHIRLWIND},
        },
        {
        .lvl = 57,
        .species = SPECIES_ALAKAZAM,
        PERFECT_IVS,
        .moves = {MOVE_PSYCHIC, MOVE_FUTURE_SIGHT, MOVE_RECOVER, MOVE_REFLECT},
        },
        {
        .lvl = 59,
        .species = SPECIES_RHYDON,
        PERFECT_IVS,
        .moves = {MOVE_TAKE_DOWN, MOVE_EARTHQUAKE, MOVE_ROCK_TOMB, MOVE_SCARY_FACE},
        },
        {
        .lvl = 59,
        .species = SPECIES_EXEGGUTOR,
        PERFECT_IVS,
        .moves = {MOVE_GIGA_DRAIN, MOVE_EGG_BOMB, MOVE_SLEEP_POWDER, MOVE_LIGHT_SCREEN},
        },
        {
        .lvl = 61,
        .species = SPECIES_GYARADOS,
        PERFECT_IVS,
        .moves = {MOVE_HYDRO_PUMP, MOVE_DRAGON_RAGE, MOVE_BITE, MOVE_THRASH},
        },
        {
        .lvl = 63,
        .species = SPECIES_CHARIZARD,
        PERFECT_IVS,
        .moves = {MOVE_FIRE_BLAST, MOVE_AERIAL_ACE, MOVE_SLASH, MOVE_FIRE_SPIN},
        .heldItem = ITEM_SITRUS_BERRY,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_CHAMPION_FIRST_WATER] =
{
    CHAMPION_INFO,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 59,
        .species = SPECIES_PIDGEOT,
        PERFECT_IVS,
        .moves = {MOVE_AERIAL_ACE, MOVE_FEATHER_DANCE, MOVE_SAND_ATTACK, MOVE_WHIRLWIND},
        },
        {
        .lvl = 57,
        .species = SPECIES_ALAKAZAM,
        PERFECT_IVS,
        .moves = {MOVE_PSYCHIC, MOVE_FUTURE_SIGHT, MOVE_RECOVER, MOVE_REFLECT},
        },
        {
        .lvl = 59,
        .species = SPECIES_RHYDON,
        PERFECT_IVS,
        .moves = {MOVE_TAKE_DOWN, MOVE_EARTHQUAKE, MOVE_ROCK_TOMB, MOVE_SCARY_FACE},
        },
        {
        .lvl = 59,
        .species = SPECIES_ARCANINE,
        PERFECT_IVS,
        .moves = {MOVE_EXTREME_SPEED, MOVE_FLAMETHROWER, MOVE_ROAR, MOVE_BITE},
        },
        {
        .lvl = 61,
        .species = SPECIES_EXEGGUTOR,
        PERFECT_IVS,
        .moves = {MOVE_GIGA_DRAIN, MOVE_EGG_BOMB, MOVE_SLEEP_POWDER, MOVE_LIGHT_SCREEN},
        },
        {
        .lvl = 63,
        .species = SPECIES_BLASTOISE,
        PERFECT_IVS,
        .moves = {MOVE_HYDRO_PUMP, MOVE_RAIN_DANCE, MOVE_SKULL_BASH, MOVE_BITE},
        .heldItem = ITEM_SITRUS_BERRY,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_CHAMPION_REMATCH_GRASS] =
{
    CHAMPION_INFO,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 72,
        .species = SPECIES_HERACROSS,
        PERFECT_IVS,
        .moves = {MOVE_MEGAHORN, MOVE_EARTHQUAKE, MOVE_COUNTER, MOVE_ROCK_TOMB},
        },
        {
        .lvl = 73,
        .species = SPECIES_ALAKAZAM,
        PERFECT_IVS,
        .moves = {MOVE_PSYCHIC, MOVE_SHADOW_BALL, MOVE_CALM_MIND, MOVE_REFLECT},
        },
        {
        .lvl = 72,
        .species = SPECIES_TYRANITAR,
        PERFECT_IVS,
        .moves = {MOVE_CRUNCH, MOVE_EARTHQUAKE, MOVE_THUNDERBOLT, MOVE_AERIAL_ACE},
        },
        {
        .lvl = 73,
        .species = SPECIES_GYARADOS,
        PERFECT_IVS,
        .moves = {MOVE_HYDRO_PUMP, MOVE_DRAGON_DANCE, MOVE_EARTHQUAKE, MOVE_HYPER_BEAM},
        },
        {
        .lvl = 73,
        .species = SPECIES_ARCANINE,
        PERFECT_IVS,
        .moves = {MOVE_EXTREME_SPEED, MOVE_OVERHEAT, MOVE_AERIAL_ACE, MOVE_IRON_TAIL},
        },
        {
        .lvl = 75,
        .species = SPECIES_VENUSAUR,
        PERFECT_IVS,
        .moves = {MOVE_SOLAR_BEAM, MOVE_SLUDGE_BOMB, MOVE_EARTHQUAKE, MOVE_SUNNY_DAY},
        .heldItem = ITEM_SITRUS_BERRY,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_CHAMPION_REMATCH_FIRE] =
{
    CHAMPION_INFO,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 72,
        .species = SPECIES_HERACROSS,
        PERFECT_IVS,
        .moves = {MOVE_MEGAHORN, MOVE_EARTHQUAKE, MOVE_COUNTER, MOVE_ROCK_TOMB},
        },
        {
        .lvl = 73,
        .species = SPECIES_ALAKAZAM,
        PERFECT_IVS,
        .moves = {MOVE_PSYCHIC, MOVE_SHADOW_BALL, MOVE_CALM_MIND, MOVE_REFLECT},
        },
        {
        .lvl = 72,
        .species = SPECIES_TYRANITAR,
        PERFECT_IVS,
        .moves = {MOVE_CRUNCH, MOVE_EARTHQUAKE, MOVE_THUNDERBOLT, MOVE_AERIAL_ACE},
        },
        {
        .lvl = 73,
        .species = SPECIES_EXEGGUTOR,
        PERFECT_IVS,
        .moves = {MOVE_GIGA_DRAIN, MOVE_PSYCHIC, MOVE_SLEEP_POWDER, MOVE_LIGHT_SCREEN},
        },
        {
        .lvl = 73,
        .species = SPECIES_GYARADOS,
        PERFECT_IVS,
        .moves = {MOVE_HYDRO_PUMP, MOVE_DRAGON_DANCE, MOVE_EARTHQUAKE, MOVE_HYPER_BEAM},
        },
        {
        .lvl = 75,
        .species = SPECIES_CHARIZARD,
        PERFECT_IVS,
        .moves = {MOVE_FIRE_BLAST, MOVE_DRAGON_CLAW, MOVE_AERIAL_ACE, MOVE_EARTHQUAKE},
        .heldItem = ITEM_SITRUS_BERRY,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_CHAMPION_REMATCH_WATER] =
{
    CHAMPION_INFO,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 72,
        .species = SPECIES_HERACROSS,
        PERFECT_IVS,
        .moves = {MOVE_MEGAHORN, MOVE_EARTHQUAKE, MOVE_COUNTER, MOVE_ROCK_TOMB},
        },
        {
        .lvl = 73,
        .species = SPECIES_ALAKAZAM,
        PERFECT_IVS,
        .moves = {MOVE_PSYCHIC, MOVE_SHADOW_BALL, MOVE_CALM_MIND, MOVE_REFLECT},
        },
        {
        .lvl = 72,
        .species = SPECIES_TYRANITAR,
        PERFECT_IVS,
        .moves = {MOVE_CRUNCH, MOVE_EARTHQUAKE, MOVE_THUNDERBOLT, MOVE_AERIAL_ACE},
        },
        {
        .lvl = 73,
        .species = SPECIES_ARCANINE,
        PERFECT_IVS,
        .moves = {MOVE_EXTREME_SPEED, MOVE_OVERHEAT, MOVE_AERIAL_ACE, MOVE_IRON_TAIL},
        },
        {
        .lvl = 73,
        .species = SPECIES_EXEGGUTOR,
        PERFECT_IVS,
        .moves = {MOVE_GIGA_DRAIN, MOVE_PSYCHIC, MOVE_SLEEP_POWDER, MOVE_LIGHT_SCREEN},
        },
        {
        .lvl = 75,
        .species = SPECIES_BLASTOISE,
        PERFECT_IVS,
        .moves = {MOVE_HYDRO_PUMP, MOVE_ICE_BEAM, MOVE_EARTHQUAKE, MOVE_RAIN_DANCE},
        .heldItem = ITEM_SITRUS_BERRY,
        },
    },
},

#define LEADER_INFO(Trainer)                           \
    .trainerClass = TRAINER_CLASS_LEADER_FRLG,         \
    .trainerPic = TRAINER_PIC_LEADER_##Trainer##_FRLG, \
    BOSS_AI_FLAGS

#define LEADER_REMATCH                                                             \
    .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE}, \
    .partySize = 6

#define BROCK_INFO             \
    LEADER_INFO(BROCK),        \
    .trainerName = _("Brock"), \
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE

[DIFFICULTY_NORMAL][TRAINER_LEADER_BROCK] =
{
    BROCK_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 12,
        .species = SPECIES_GEODUDE,
        .moves = {MOVE_TACKLE, MOVE_DEFENSE_CURL, MOVE_NONE, MOVE_NONE},
        },
        {
        .lvl = 14,
        .species = SPECIES_ONIX,
        .moves = {MOVE_TACKLE, MOVE_BIND, MOVE_ROCK_TOMB, MOVE_NONE},
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_LEADER_BROCK_2] =
{
    BROCK_INFO,
    LEADER_REMATCH,
},

[DIFFICULTY_NORMAL][TRAINER_LEADER_MISTY] =
{
    .trainerName = _("Misty"),
    .trainerClass = TRAINER_CLASS_LEADER_FRLG,
    .trainerPic = TRAINER_PIC_LEADER_MISTY_FRLG,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .items = {ITEM_SUPER_POTION},
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 18,
        .species = SPECIES_STARYU,
        .moves = {MOVE_TACKLE, MOVE_HARDEN, MOVE_RECOVER, MOVE_WATER_PULSE},
        },
        {
        .lvl = 21,
        .species = SPECIES_STARMIE,
        .moves = {MOVE_SWIFT, MOVE_RECOVER, MOVE_RAPID_SPIN, MOVE_WATER_PULSE},
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_LEADER_MISTY_2] =
{
    BROCK_INFO,
    LEADER_REMATCH,
},

[DIFFICULTY_NORMAL][TRAINER_LEADER_LT_SURGE] =
{
    .trainerName = _("Lt. Surge"),
    .trainerClass = TRAINER_CLASS_LEADER_FRLG,
    .trainerPic = TRAINER_PIC_LEADER_LT_SURGE_FRLG,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
    .items = {ITEM_SUPER_POTION, ITEM_FULL_HEAL},
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .partySize = 3,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 21,
        .species = SPECIES_VOLTORB,
        .moves = {MOVE_SONIC_BOOM, MOVE_TACKLE, MOVE_SCREECH, MOVE_SHOCK_WAVE},
        },
        {
        .lvl = 18,
        .species = SPECIES_PIKACHU,
        .moves = {MOVE_QUICK_ATTACK, MOVE_THUNDER_WAVE, MOVE_DOUBLE_TEAM, MOVE_SHOCK_WAVE},
        },
        {
        .lvl = 24,
        .species = SPECIES_RAICHU,
        .moves = {MOVE_QUICK_ATTACK, MOVE_THUNDER_WAVE, MOVE_DOUBLE_TEAM, MOVE_SHOCK_WAVE},
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_LEADER_LT_SURGE_2] =
{
    BROCK_INFO,
    LEADER_REMATCH,
},

[DIFFICULTY_NORMAL][TRAINER_LEADER_ERIKA] =
{
    .trainerName = _("Erika"),
    .trainerClass = TRAINER_CLASS_LEADER_FRLG,
    .trainerPic = TRAINER_PIC_LEADER_ERIKA_FRLG,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .items = {ITEM_HYPER_POTION, ITEM_FULL_HEAL},
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .partySize = 3,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 29,
        .species = SPECIES_VICTREEBEL,
        .moves = {MOVE_STUN_SPORE, MOVE_ACID, MOVE_POISON_POWDER, MOVE_GIGA_DRAIN},
        },
        {
        .lvl = 24,
        .species = SPECIES_TANGELA,
        .moves = {MOVE_POISON_POWDER, MOVE_CONSTRICT, MOVE_INGRAIN, MOVE_GIGA_DRAIN},
        },
        {
        .lvl = 29,
        .species = SPECIES_VILEPLUME,
        .moves = {MOVE_SLEEP_POWDER, MOVE_ACID, MOVE_STUN_SPORE, MOVE_GIGA_DRAIN},
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_LEADER_ERIKA_2] =
{
    BROCK_INFO,
    LEADER_REMATCH,
},

[DIFFICULTY_NORMAL][TRAINER_LEADER_KOGA] =
{
    .trainerName = _("Koga"),
    .trainerClass = TRAINER_CLASS_LEADER_FRLG,
    .trainerPic = TRAINER_PIC_LEADER_KOGA_FRLG,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
    .items = {ITEM_HYPER_POTION, ITEM_HYPER_POTION, ITEM_FULL_HEAL},
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .partySize = 4,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 37,
        .species = SPECIES_KOFFING,
        .moves = {MOVE_SELF_DESTRUCT, MOVE_SLUDGE, MOVE_SMOKESCREEN, MOVE_TOXIC},
        },
        {
        .lvl = 39,
        .species = SPECIES_MUK,
        .moves = {MOVE_MINIMIZE, MOVE_SLUDGE, MOVE_ACID_ARMOR, MOVE_TOXIC},
        },
        {
        .lvl = 37,
        .species = SPECIES_KOFFING,
        .moves = {MOVE_SELF_DESTRUCT, MOVE_SLUDGE, MOVE_SMOKESCREEN, MOVE_TOXIC},
        },
        {
        .lvl = 43,
        .species = SPECIES_WEEZING,
        .moves = {MOVE_TACKLE, MOVE_SLUDGE, MOVE_SMOKESCREEN, MOVE_TOXIC},
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_LEADER_KOGA_2] =
{
    BROCK_INFO,
    LEADER_REMATCH,
},

[DIFFICULTY_NORMAL][TRAINER_LEADER_SABRINA] =
{
    .trainerName = _("Sabrina"),
    .trainerClass = TRAINER_CLASS_LEADER_FRLG,
    .trainerPic = TRAINER_PIC_LEADER_SABRINA_FRLG,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .items = {ITEM_HYPER_POTION, ITEM_HYPER_POTION, ITEM_FULL_HEAL},
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .partySize = 4,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 38,
        .species = SPECIES_KADABRA,
        .moves = {MOVE_PSYBEAM, MOVE_REFLECT, MOVE_FUTURE_SIGHT, MOVE_CALM_MIND},
        },
        {
        .lvl = 37,
        .species = SPECIES_MR_MIME,
        .moves = {MOVE_BARRIER, MOVE_PSYBEAM, MOVE_BATON_PASS, MOVE_CALM_MIND},
        },
        {
        .lvl = 38,
        .species = SPECIES_VENOMOTH,
        .moves = {MOVE_PSYBEAM, MOVE_GUST, MOVE_LEECH_LIFE, MOVE_SUPERSONIC},
        },
        {
        .lvl = 43,
        .species = SPECIES_ALAKAZAM,
        .moves = {MOVE_PSYCHIC, MOVE_RECOVER, MOVE_FUTURE_SIGHT, MOVE_CALM_MIND},
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_LEADER_SABRINA_2] =
{
    BROCK_INFO,
    LEADER_REMATCH,
},

[DIFFICULTY_NORMAL][TRAINER_LEADER_BLAINE] =
{
    .trainerName = _("Blaine"),
    .trainerClass = TRAINER_CLASS_LEADER_FRLG,
    .trainerPic = TRAINER_PIC_LEADER_BLAINE_FRLG,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
    .items = {ITEM_HYPER_POTION, ITEM_HYPER_POTION, ITEM_FULL_HEAL},
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .partySize = 4,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 42,
        .species = SPECIES_GROWLITHE,
        .moves = {MOVE_BITE, MOVE_ROAR, MOVE_TAKE_DOWN, MOVE_FIRE_BLAST},
        },
        {
        .lvl = 40,
        .species = SPECIES_PONYTA,
        .moves = {MOVE_STOMP, MOVE_BOUNCE, MOVE_FIRE_SPIN, MOVE_FIRE_BLAST},
        },
        {
        .lvl = 42,
        .species = SPECIES_RAPIDASH,
        .moves = {MOVE_STOMP, MOVE_BOUNCE, MOVE_FIRE_SPIN, MOVE_FIRE_BLAST},
        },
        {
        .lvl = 47,
        .species = SPECIES_ARCANINE,
        .moves = {MOVE_BITE, MOVE_ROAR, MOVE_TAKE_DOWN, MOVE_FIRE_BLAST},
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_LEADER_BLAINE_2] =
{
    BROCK_INFO,
    LEADER_REMATCH,
},

[DIFFICULTY_NORMAL][TRAINER_BOSS_GIOVANNI] =
{
    .trainerName = _("Giovanni"),
    .trainerClass = TRAINER_CLASS_BOSS_FRLG,
    .trainerPic = TRAINER_PIC_LEADER_GIOVANNI_FRLG,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 25,
        .species = SPECIES_ONIX,
        IVS(30),
        },
        {
        .lvl = 24,
        .species = SPECIES_RHYHORN,
        IVS(30),
        },
        {
        .lvl = 29,
        .species = SPECIES_KANGASKHAN,
        IVS(30),
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_BOSS_GIOVANNI_2] =
{
    .trainerName = _("Giovanni"),
    .trainerClass = TRAINER_CLASS_BOSS_FRLG,
    .trainerPic = TRAINER_PIC_LEADER_GIOVANNI_FRLG,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 4,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 37,
        .species = SPECIES_NIDORINO,
        IVS(30),
        },
        {
        .lvl = 35,
        .species = SPECIES_KANGASKHAN,
        IVS(30),
        },
        {
        .lvl = 37,
        .species = SPECIES_RHYHORN,
        IVS(30),
        },
        {
        .lvl = 41,
        .species = SPECIES_NIDOQUEEN,
        IVS(30),
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_LEADER_GIOVANNI] =
{
    .trainerName = _("Giovanni"),
    .trainerClass = TRAINER_CLASS_LEADER_FRLG,
    .trainerPic = TRAINER_PIC_LEADER_GIOVANNI_FRLG,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
    .items = {ITEM_HYPER_POTION, ITEM_HYPER_POTION, ITEM_FULL_HEAL},
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .partySize = 5,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 45,
        .species = SPECIES_RHYHORN,
        .moves = {MOVE_TAKE_DOWN, MOVE_ROCK_BLAST, MOVE_SCARY_FACE, MOVE_EARTHQUAKE},
        },
        {
        .lvl = 42,
        .species = SPECIES_DUGTRIO,
        .moves = {MOVE_SLASH, MOVE_SAND_TOMB, MOVE_MUD_SLAP, MOVE_EARTHQUAKE},
        },
        {
        .lvl = 44,
        .species = SPECIES_NIDOQUEEN,
        .moves = {MOVE_BODY_SLAM, MOVE_DOUBLE_KICK, MOVE_POISON_STING, MOVE_EARTHQUAKE},
        },
        {
        .lvl = 45,
        .species = SPECIES_NIDOKING,
        .moves = {MOVE_THRASH, MOVE_DOUBLE_KICK, MOVE_POISON_STING, MOVE_EARTHQUAKE},
        },
        {
        .lvl = 50,
        .species = SPECIES_RHYHORN,
        .moves = {MOVE_TAKE_DOWN, MOVE_ROCK_BLAST, MOVE_SCARY_FACE, MOVE_EARTHQUAKE},
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_LEADER_GIOVANNI_2] =
{
    BROCK_INFO,
    LEADER_REMATCH,
},

[DIFFICULTY_NORMAL][TRAINER_ELITE_FOUR_LORELEI] =
{
    .trainerName = _("Lorelei"),
    .trainerClass = TRAINER_CLASS_ELITE_FOUR_FRLG,
    .trainerPic = TRAINER_PIC_ELITE_FOUR_LORELEI_FRLG,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
    .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE},
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .mugshotColor = MUGSHOT_COLOR_PURPLE,
    .partySize = 5,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 52,
        .species = SPECIES_DEWGONG,
        IVS(30),
        .moves = {MOVE_ICE_BEAM, MOVE_SURF, MOVE_HAIL, MOVE_SAFEGUARD},
        },
        {
        .lvl = 51,
        .species = SPECIES_CLOYSTER,
        IVS(30),
        .moves = {MOVE_SPIKES, MOVE_PROTECT, MOVE_HAIL, MOVE_DIVE},
        },
        {
        .lvl = 52,
        .species = SPECIES_SLOWBRO,
        IVS(30),
        .moves = {MOVE_ICE_BEAM, MOVE_SURF, MOVE_AMNESIA, MOVE_YAWN},
        },
        {
        .lvl = 54,
        .species = SPECIES_JYNX,
        IVS(30),
        .moves = {MOVE_ICE_PUNCH, MOVE_DOUBLE_SLAP, MOVE_LOVELY_KISS, MOVE_ATTRACT},
        },
        {
        .lvl = 54,
        .species = SPECIES_LAPRAS,
        IVS(30),
        .moves = {MOVE_CONFUSE_RAY, MOVE_ICE_BEAM, MOVE_SURF, MOVE_BODY_SLAM},
        .heldItem = ITEM_SITRUS_BERRY,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_ELITE_FOUR_LORELEI_2] =
{
    .trainerName = _("Lorelei"),
    .trainerClass = TRAINER_CLASS_ELITE_FOUR_FRLG,
    .trainerPic = TRAINER_PIC_ELITE_FOUR_LORELEI_FRLG,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
    .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE},
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .mugshotColor = MUGSHOT_COLOR_PURPLE,
    .partySize = 5,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 64,
        .species = SPECIES_DEWGONG,
        PERFECT_IVS,
        .moves = {MOVE_ICE_BEAM, MOVE_SURF, MOVE_SIGNAL_BEAM, MOVE_DOUBLE_TEAM},
        },
        {
        .lvl = 63,
        .species = SPECIES_CLOYSTER,
        PERFECT_IVS,
        .moves = {MOVE_ICE_BEAM, MOVE_SURF, MOVE_SUPERSONIC, MOVE_RAIN_DANCE},
        },
        {
        .lvl = 63,
        .species = SPECIES_PILOSWINE,
        PERFECT_IVS,
        .moves = {MOVE_BLIZZARD, MOVE_EARTHQUAKE, MOVE_DOUBLE_EDGE, MOVE_ROCK_SLIDE},
        },
        {
        .lvl = 66,
        .species = SPECIES_JYNX,
        PERFECT_IVS,
        .moves = {MOVE_ICE_BEAM, MOVE_PSYCHIC, MOVE_LOVELY_KISS, MOVE_ATTRACT},
        },
        {
        .lvl = 66,
        .species = SPECIES_LAPRAS,
        PERFECT_IVS,
        .moves = {MOVE_ICE_BEAM, MOVE_SURF, MOVE_PSYCHIC, MOVE_THUNDER},
        .heldItem = ITEM_CHERI_BERRY,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_ELITE_FOUR_BRUNO] =
{
    .trainerName = _("Bruno"),
    .trainerClass = TRAINER_CLASS_ELITE_FOUR_FRLG,
    .trainerPic = TRAINER_PIC_ELITE_FOUR_BRUNO_FRLG,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
    .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE},
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .mugshotColor = MUGSHOT_COLOR_GREEN,
    .partySize = 5,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 51,
        .species = SPECIES_ONIX,
        IVS(30),
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_TOMB, MOVE_IRON_TAIL, MOVE_ROAR},
        },
        {
        .lvl = 53,
        .species = SPECIES_HITMONCHAN,
        IVS(30),
        .moves = {MOVE_SKY_UPPERCUT, MOVE_MACH_PUNCH, MOVE_ROCK_TOMB, MOVE_COUNTER},
        },
        {
        .lvl = 53,
        .species = SPECIES_HITMONLEE,
        IVS(30),
        .moves = {MOVE_MEGA_KICK, MOVE_FORESIGHT, MOVE_BRICK_BREAK, MOVE_FACADE},
        },
        {
        .lvl = 54,
        .species = SPECIES_ONIX,
        IVS(30),
        .moves = {MOVE_DOUBLE_EDGE, MOVE_EARTHQUAKE, MOVE_IRON_TAIL, MOVE_SAND_TOMB},
        },
        {
        .lvl = 56,
        .species = SPECIES_MACHAMP,
        IVS(30),
        .moves = {MOVE_CROSS_CHOP, MOVE_BULK_UP, MOVE_SCARY_FACE, MOVE_ROCK_TOMB},
        .heldItem = ITEM_SITRUS_BERRY,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_ELITE_FOUR_BRUNO_2] =
{
    .trainerName = _("Bruno"),
    .trainerClass = TRAINER_CLASS_ELITE_FOUR_FRLG,
    .trainerPic = TRAINER_PIC_ELITE_FOUR_BRUNO_FRLG,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
    .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE},
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .mugshotColor = MUGSHOT_COLOR_GREEN,
    .partySize = 5,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 65,
        .species = SPECIES_STEELIX,
        PERFECT_IVS,
        .moves = {MOVE_EARTHQUAKE, MOVE_IRON_TAIL, MOVE_CRUNCH, MOVE_ROCK_TOMB},
        },
        {
        .lvl = 65,
        .species = SPECIES_HITMONCHAN,
        PERFECT_IVS,
        .moves = {MOVE_SKY_UPPERCUT, MOVE_MACH_PUNCH, MOVE_ROCK_SLIDE, MOVE_COUNTER},
        },
        {
        .lvl = 65,
        .species = SPECIES_HITMONLEE,
        PERFECT_IVS,
        .moves = {MOVE_MEGA_KICK, MOVE_FORESIGHT, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE},
        },
        {
        .lvl = 66,
        .species = SPECIES_STEELIX,
        PERFECT_IVS,
        .moves = {MOVE_EARTHQUAKE, MOVE_IRON_TAIL, MOVE_CRUNCH, MOVE_DRAGON_BREATH},
        },
        {
        .lvl = 68,
        .species = SPECIES_MACHAMP,
        PERFECT_IVS,
        .moves = {MOVE_CROSS_CHOP, MOVE_EARTHQUAKE, MOVE_BRICK_BREAK, MOVE_ROCK_SLIDE},
        .heldItem = ITEM_PERSIM_BERRY,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_ELITE_FOUR_AGATHA] =
{
    .trainerName = _("Agatha"),
    .trainerClass = TRAINER_CLASS_ELITE_FOUR_FRLG,
    .trainerPic = TRAINER_PIC_ELITE_FOUR_AGATHA_FRLG,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
    .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE},
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .mugshotColor = MUGSHOT_COLOR_PINK,
    .partySize = 5,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 54,
        .species = SPECIES_GENGAR,
        IVS(30),
        .moves = {MOVE_SHADOW_PUNCH, MOVE_CONFUSE_RAY, MOVE_TOXIC, MOVE_DOUBLE_TEAM},
        },
        {
        .lvl = 54,
        .species = SPECIES_GOLBAT,
        IVS(30),
        .moves = {MOVE_CONFUSE_RAY, MOVE_POISON_FANG, MOVE_AIR_CUTTER, MOVE_BITE},
        },
        {
        .lvl = 53,
        .species = SPECIES_HAUNTER,
        IVS(30),
        .moves = {MOVE_HYPNOSIS, MOVE_DREAM_EATER, MOVE_CURSE, MOVE_MEAN_LOOK},
        },
        {
        .lvl = 56,
        .species = SPECIES_ARBOK,
        IVS(30),
        .moves = {MOVE_SLUDGE_BOMB, MOVE_SCREECH, MOVE_IRON_TAIL, MOVE_BITE},
        },
        {
        .lvl = 58,
        .species = SPECIES_GENGAR,
        IVS(30),
        .moves = {MOVE_SHADOW_BALL, MOVE_SLUDGE_BOMB, MOVE_HYPNOSIS, MOVE_NIGHTMARE},
        .heldItem = ITEM_SITRUS_BERRY,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_ELITE_FOUR_AGATHA_2] =
{
    .trainerName = _("Agatha"),
    .trainerClass = TRAINER_CLASS_ELITE_FOUR_FRLG,
    .trainerPic = TRAINER_PIC_ELITE_FOUR_AGATHA_FRLG,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
    .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE},
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .mugshotColor = MUGSHOT_COLOR_PINK,
    .partySize = 5,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 66,
        .species = SPECIES_GENGAR,
        PERFECT_IVS,
        .moves = {MOVE_SHADOW_BALL, MOVE_PSYCHIC, MOVE_CONFUSE_RAY, MOVE_HYPNOSIS},
        },
        {
        .lvl = 66,
        .species = SPECIES_CROBAT,
        PERFECT_IVS,
        .moves = {MOVE_SLUDGE_BOMB, MOVE_AIR_CUTTER, MOVE_SHADOW_BALL, MOVE_CONFUSE_RAY},
        },
        {
        .lvl = 65,
        .species = SPECIES_MISDREAVUS,
        PERFECT_IVS,
        .moves = {MOVE_SHADOW_BALL, MOVE_PSYCHIC, MOVE_THUNDERBOLT, MOVE_ATTRACT},
        },
        {
        .lvl = 68,
        .species = SPECIES_ARBOK,
        PERFECT_IVS,
        .moves = {MOVE_SLUDGE_BOMB, MOVE_EARTHQUAKE, MOVE_GIGA_DRAIN, MOVE_DOUBLE_TEAM},
        },
        {
        .lvl = 70,
        .species = SPECIES_GENGAR,
        PERFECT_IVS,
        .moves = {MOVE_SHADOW_BALL, MOVE_PSYCHIC, MOVE_THUNDERBOLT, MOVE_SLUDGE_BOMB},
        .heldItem = ITEM_CHESTO_BERRY,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_ELITE_FOUR_LANCE] =
{
    .trainerName = _("Lance"),
    .trainerClass = TRAINER_CLASS_ELITE_FOUR_FRLG,
    .trainerPic = TRAINER_PIC_ELITE_FOUR_LANCE_FRLG,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
    .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE},
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .mugshotColor = MUGSHOT_COLOR_BLUE,
    .partySize = 5,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 56,
        .species = SPECIES_GYARADOS,
        IVS(30),
        .moves = {MOVE_HYPER_BEAM, MOVE_DRAGON_RAGE, MOVE_TWISTER, MOVE_BITE},
        },
        {
        .lvl = 54,
        .species = SPECIES_DRAGONAIR,
        IVS(30),
        .moves = {MOVE_HYPER_BEAM, MOVE_SAFEGUARD, MOVE_DRAGON_RAGE, MOVE_OUTRAGE},
        },
        {
        .lvl = 54,
        .species = SPECIES_DRAGONAIR,
        IVS(30),
        .moves = {MOVE_HYPER_BEAM, MOVE_SAFEGUARD, MOVE_THUNDER_WAVE, MOVE_OUTRAGE},
        },
        {
        .lvl = 58,
        .species = SPECIES_AERODACTYL,
        IVS(30),
        .moves = {MOVE_HYPER_BEAM, MOVE_ANCIENT_POWER, MOVE_WING_ATTACK, MOVE_SCARY_FACE},
        },
        {
        .lvl = 60,
        .species = SPECIES_DRAGONITE,
        IVS(30),
        .moves = {MOVE_HYPER_BEAM, MOVE_SAFEGUARD, MOVE_OUTRAGE, MOVE_WING_ATTACK},
        .heldItem = ITEM_SITRUS_BERRY,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_ELITE_FOUR_LANCE_2] =
{
    .trainerName = _("Lance"),
    .trainerClass = TRAINER_CLASS_ELITE_FOUR_FRLG,
    .trainerPic = TRAINER_PIC_ELITE_FOUR_LANCE_FRLG,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
    .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE},
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .mugshotColor = MUGSHOT_COLOR_BLUE,
    .partySize = 5,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 68,
        .species = SPECIES_GYARADOS,
        PERFECT_IVS,
        .moves = {MOVE_HYPER_BEAM, MOVE_DRAGON_DANCE, MOVE_EARTHQUAKE, MOVE_THUNDER_WAVE},
        },
        {
        .lvl = 66,
        .species = SPECIES_DRAGONITE,
        PERFECT_IVS,
        .moves = {MOVE_HYPER_BEAM, MOVE_EARTHQUAKE, MOVE_DRAGON_CLAW, MOVE_FLAMETHROWER},
        },
        {
        .lvl = 66,
        .species = SPECIES_KINGDRA,
        PERFECT_IVS,
        .moves = {MOVE_HYPER_BEAM, MOVE_DRAGON_DANCE, MOVE_SURF, MOVE_ICE_BEAM},
        },
        {
        .lvl = 70,
        .species = SPECIES_AERODACTYL,
        PERFECT_IVS,
        .moves = {MOVE_HYPER_BEAM, MOVE_ANCIENT_POWER, MOVE_AERIAL_ACE, MOVE_EARTHQUAKE},
        },
        {
        .lvl = 72,
        .species = SPECIES_DRAGONITE,
        PERFECT_IVS,
        .moves = {MOVE_HYPER_BEAM, MOVE_OUTRAGE, MOVE_THUNDERBOLT, MOVE_ICE_BEAM},
        .heldItem = ITEM_PERSIM_BERRY,
        },
    },
},

//
[DIFFICULTY_NORMAL][TRAINER_YOUNGSTER_BEN] =
{
    .trainerName = _("Ben"),
    YOUNGSTER_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 11,
        .species = SPECIES_RATTATA,
        },
        {
        .lvl = 11,
        .species = SPECIES_EKANS,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_YOUNGSTER_CALVIN] =
{
    .trainerName = _("Calvin"),
    YOUNGSTER_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 14,
        .species = SPECIES_SPEAROW,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_YOUNGSTER_JOSH] =
{
    .trainerName = _("Josh"),
    YOUNGSTER_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 10,
        .species = SPECIES_RATTATA,
        },
        {
        .lvl = 10,
        .species = SPECIES_RATTATA,
        },
        {
        .lvl = 10,
        .species = SPECIES_ZUBAT,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_YOUNGSTER_TIMMY] =
{
    .trainerName = _("Timmy"),
    YOUNGSTER_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 14,
        .species = SPECIES_SANDSHREW,
        },
        {
        .lvl = 14,
        .species = SPECIES_EKANS,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_YOUNGSTER_JOEY] =
{
    .trainerName = _("Joey"),
    YOUNGSTER_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 15,
        .species = SPECIES_RATTATA,
        },
        {
        .lvl = 15,
        .species = SPECIES_SPEAROW,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_YOUNGSTER_DAN] =
{
    .trainerName = _("Dan"),
    YOUNGSTER_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 17,
        .species = SPECIES_SLOWPOKE,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_YOUNGSTER_CHAD] =
{
    .trainerName = _("Chad"),
    YOUNGSTER_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 14,
        .species = SPECIES_EKANS,
        },
        {
        .lvl = 14,
        .species = SPECIES_SANDSHREW,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_YOUNGSTER_TYLER] =
{
    .trainerName = _("Tyler"),
    YOUNGSTER_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 21,
        .species = SPECIES_NIDORAN_M,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_YOUNGSTER_EDDIE] =
{
    .trainerName = _("Eddie"),
    YOUNGSTER_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 21,
        .species = SPECIES_EKANS,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_YOUNGSTER_DILLON] =
{
    .trainerName = _("Dillon"),
    YOUNGSTER_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 19,
        .species = SPECIES_SANDSHREW,
        },
        {
        .lvl = 19,
        .species = SPECIES_ZUBAT,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_YOUNGSTER_YASU] =
{
    .trainerName = _("Yasu"),
    YOUNGSTER_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 17,
        .species = SPECIES_RATTATA,
        },
        {
        .lvl = 17,
        .species = SPECIES_RATTATA,
        },
        {
        .lvl = 17,
        .species = SPECIES_RATICATE,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_YOUNGSTER_DAVE] =
{
    .trainerName = _("Dave"),
    YOUNGSTER_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 18,
        .species = SPECIES_NIDORAN_M,
        },
        {
        .lvl = 18,
        .species = SPECIES_NIDORINO,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_YOUNGSTER_BEN_2] =
{
    .trainerName = _("Ben"),
    YOUNGSTER_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 17,
        .species = SPECIES_RATTATA,
        IVS(2),
        },
        {
        .lvl = 17,
        .species = SPECIES_EKANS,
        IVS(2),
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_BUG_CATCHER_RICK] =
{
    .trainerName = _("Rick"),
    BUG_CATCHER_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 6,
        .species = SPECIES_WEEDLE,
        },
        {
        .lvl = 6,
        .species = SPECIES_CATERPIE,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_BUG_CATCHER_DOUG] =
{
    .trainerName = _("Doug"),
    BUG_CATCHER_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 7,
        .species = SPECIES_WEEDLE,
        },
        {
        .lvl = 7,
        .species = SPECIES_KAKUNA,
        },
        {
        .lvl = 7,
        .species = SPECIES_WEEDLE,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_BUG_CATCHER_SAMMY] =
{
    .trainerName = _("Sammy"),
    BUG_CATCHER_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 9,
        .species = SPECIES_WEEDLE,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_BUG_CATCHER_COLTON] =
{
    .trainerName = _("Colton"),
    BUG_CATCHER_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 10,
        .species = SPECIES_CATERPIE,
        },
        {
        .lvl = 10,
        .species = SPECIES_WEEDLE,
        },
        {
        .lvl = 10,
        .species = SPECIES_CATERPIE,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_BUG_CATCHER_GREG] =
{
    .trainerName = _("Greg"),
    BUG_CATCHER_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 4,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 9,
        .species = SPECIES_WEEDLE,
        },
        {
        .lvl = 9,
        .species = SPECIES_KAKUNA,
        },
        {
        .lvl = 9,
        .species = SPECIES_CATERPIE,
        },
        {
        .lvl = 9,
        .species = SPECIES_METAPOD,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_BUG_CATCHER_JAMES] =
{
    .trainerName = _("James"),
    BUG_CATCHER_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 11,
        .species = SPECIES_CATERPIE,
        },
        {
        .lvl = 11,
        .species = SPECIES_METAPOD,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_BUG_CATCHER_KENT] =
{
    .trainerName = _("Kent"),
    BUG_CATCHER_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 11,
        .species = SPECIES_WEEDLE,
        },
        {
        .lvl = 11,
        .species = SPECIES_KAKUNA,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_BUG_CATCHER_ROBBY] =
{
    .trainerName = _("Robby"),
    BUG_CATCHER_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 10,
        .species = SPECIES_CATERPIE,
        },
        {
        .lvl = 10,
        .species = SPECIES_METAPOD,
        },
        {
        .lvl = 10,
        .species = SPECIES_CATERPIE,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_BUG_CATCHER_CALE] =
{
    .trainerName = _("Cale"),
    BUG_CATCHER_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 4,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 10,
        .species = SPECIES_CATERPIE,
        },
        {
        .lvl = 10,
        .species = SPECIES_WEEDLE,
        },
        {
        .lvl = 10,
        .species = SPECIES_METAPOD,
        },
        {
        .lvl = 10,
        .species = SPECIES_KAKUNA,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_BUG_CATCHER_KEIGO] =
{
    .trainerName = _("Keigo"),
    BUG_CATCHER_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 16,
        .species = SPECIES_WEEDLE,
        },
        {
        .lvl = 16,
        .species = SPECIES_CATERPIE,
        },
        {
        .lvl = 16,
        .species = SPECIES_WEEDLE,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_BUG_CATCHER_ELIJAH] =
{
    .trainerName = _("Elijah"),
    BUG_CATCHER_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 20,
        .species = SPECIES_BUTTERFREE,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_BUG_CATCHER_BRENT] =
{
    .trainerName = _("Brent"),
    BUG_CATCHER_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 19,
        .species = SPECIES_BEEDRILL,
        },
        {
        .lvl = 19,
        .species = SPECIES_BEEDRILL,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_BUG_CATCHER_CONNER] =
{
    .trainerName = _("Conner"),
    BUG_CATCHER_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 20,
        .species = SPECIES_CATERPIE,
        },
        {
        .lvl = 20,
        .species = SPECIES_WEEDLE,
        },
        {
        .lvl = 20,
        .species = SPECIES_VENONAT,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_LASS_JANICE] =
{
    .trainerName = _("Janice"),
    LASS_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 9,
        .species = SPECIES_PIDGEY,
        },
        {
        .lvl = 9,
        .species = SPECIES_PIDGEY,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_LASS_SALLY] =
{
    .trainerName = _("Sally"),
    LASS_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 10,
        .species = SPECIES_RATTATA,
        },
        {
        .lvl = 10,
        .species = SPECIES_NIDORAN_F,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_LASS_ROBIN] =
{
    .trainerName = _("Robin"),
    LASS_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 14,
        .species = SPECIES_JIGGLYPUFF,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_LASS_CRISSY] =
{
    .trainerName = _("Crissy"),
    LASS_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 31,
        .species = SPECIES_PARAS,
        },
        {
        .lvl = 31,
        .species = SPECIES_PARAS,
        },
        {
        .lvl = 31,
        .species = SPECIES_PARASECT,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_LASS_MIRIAM] =
{
    .trainerName = _("Miriam"),
    LASS_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 11,
        .species = SPECIES_ODDISH,
        },
        {
        .lvl = 11,
        .species = SPECIES_BELLSPROUT,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_LASS_IRIS] =
{
    .trainerName = _("Iris"),
    LASS_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 14,
        .species = SPECIES_CLEFAIRY,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_LASS_RELI] =
{
    .trainerName = _("Reli"),
    LASS_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 16,
        .species = SPECIES_NIDORAN_M,
        },
        {
        .lvl = 16,
        .species = SPECIES_NIDORAN_F,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_LASS_ALI] =
{
    .trainerName = _("Ali"),
    LASS_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 12,
        .species = SPECIES_PIDGEY,
        },
        {
        .lvl = 12,
        .species = SPECIES_ODDISH,
        },
        {
        .lvl = 12,
        .species = SPECIES_BELLSPROUT,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_LASS_HALEY] =
{
    .trainerName = _("Haley"),
    LASS_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 13,
        .species = SPECIES_ODDISH,
        },
        {
        .lvl = 13,
        .species = SPECIES_PIDGEY,
        },
        {
        .lvl = 13,
        .species = SPECIES_ODDISH,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_LASS_ANN] =
{
    .trainerName = _("Ann"),
    LASS_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 18,
        .species = SPECIES_PIDGEY,
        },
        {
        .lvl = 18,
        .species = SPECIES_NIDORAN_F,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_LASS_DAWN] =
{
    .trainerName = _("Dawn"),
    LASS_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 18,
        .species = SPECIES_RATTATA,
        },
        {
        .lvl = 18,
        .species = SPECIES_PIKACHU,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_LASS_PAIGE] =
{
    .trainerName = _("Paige"),
    LASS_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 23,
        .species = SPECIES_NIDORAN_F,
        },
        {
        .lvl = 23,
        .species = SPECIES_NIDORINA,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_LASS_ANDREA] =
{
    .trainerName = _("Andrea"),
    LASS_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 24,
        .species = SPECIES_MEOWTH,
        },
        {
        .lvl = 24,
        .species = SPECIES_MEOWTH,
        },
        {
        .lvl = 24,
        .species = SPECIES_MEOWTH,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_LASS_MEGAN] =
{
    .trainerName = _("Megan"),
    LASS_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 5,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 19,
        .species = SPECIES_PIDGEY,
        },
        {
        .lvl = 19,
        .species = SPECIES_RATTATA,
        },
        {
        .lvl = 19,
        .species = SPECIES_NIDORAN_M,
        },
        {
        .lvl = 19,
        .species = SPECIES_MEOWTH,
        },
        {
        .lvl = 19,
        .species = SPECIES_PIKACHU,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_LASS_JULIA] =
{
    .trainerName = _("Julia"),
    LASS_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 22,
        .species = SPECIES_CLEFAIRY,
        },
        {
        .lvl = 22,
        .species = SPECIES_CLEFAIRY,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_LASS_KAY] =
{
    .trainerName = _("Kay"),
    LASS_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 23,
        .species = SPECIES_BELLSPROUT,
        },
        {
        .lvl = 23,
        .species = SPECIES_WEEPINBELL,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_LASS_LISA] =
{
    .trainerName = _("Lisa"),
    LASS_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 23,
        .species = SPECIES_ODDISH,
        },
        {
        .lvl = 23,
        .species = SPECIES_GLOOM,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_SAILOR_EDMOND] =
{
    .trainerName = _("Edmond"),
    SAILOR_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 18,
        .species = SPECIES_MACHOP,
        },
        {
        .lvl = 18,
        .species = SPECIES_SHELLDER,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_SAILOR_TREVOR] =
{
    .trainerName = _("Trevor"),
    SAILOR_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 17,
        .species = SPECIES_MACHOP,
        },
        {
        .lvl = 17,
        .species = SPECIES_TENTACOOL,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_SAILOR_LEONARD] =
{
    .trainerName = _("Leonard"),
    SAILOR_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 21,
        .species = SPECIES_SHELLDER,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_SAILOR_DUNCAN] =
{
    .trainerName = _("Duncan"),
    SAILOR_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 17,
        .species = SPECIES_HORSEA,
        },
        {
        .lvl = 17,
        .species = SPECIES_SHELLDER,
        },
        {
        .lvl = 17,
        .species = SPECIES_TENTACOOL,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_SAILOR_HUEY] =
{
    .trainerName = _("Huey"),
    SAILOR_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 18,
        .species = SPECIES_TENTACOOL,
        },
        {
        .lvl = 18,
        .species = SPECIES_STARYU,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_SAILOR_DYLAN] =
{
    .trainerName = _("Dylan"),
    SAILOR_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 17,
        .species = SPECIES_HORSEA,
        },
        {
        .lvl = 17,
        .species = SPECIES_HORSEA,
        },
        {
        .lvl = 17,
        .species = SPECIES_HORSEA,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_SAILOR_PHILLIP] =
{
    .trainerName = _("Phillip"),
    SAILOR_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 20,
        .species = SPECIES_MACHOP,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_SAILOR_DWAYNE] =
{
    .trainerName = _("Dwayne"),
    SAILOR_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 21,
        .species = SPECIES_PIKACHU,
        },
        {
        .lvl = 21,
        .species = SPECIES_PIKACHU,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_CAMPER_LIAM] =
{
    .trainerName = _("Liam"),
    CAMPER_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 10,
        .species = SPECIES_GEODUDE,
        .moves = {MOVE_TACKLE, MOVE_DEFENSE_CURL, MOVE_NONE, MOVE_NONE},
        },
        {
        .lvl = 11,
        .species = SPECIES_SANDSHREW,
        .moves = {MOVE_SCRATCH, MOVE_DEFENSE_CURL, MOVE_SAND_ATTACK, MOVE_NONE},
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_CAMPER_SHANE] =
{
    .trainerName = _("Shane"),
    CAMPER_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 14,
        .species = SPECIES_RATTATA,
        },
        {
        .lvl = 14,
        .species = SPECIES_EKANS,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_CAMPER_ETHAN] =
{
    .trainerName = _("Ethan"),
    CAMPER_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 18,
        .species = SPECIES_MANKEY,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_CAMPER_RICKY] =
{
    .trainerName = _("Ricky"),
    CAMPER_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 20,
        .species = SPECIES_SQUIRTLE,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_CAMPER_JEFF] =
{
    .trainerName = _("Jeff"),
    CAMPER_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 16,
        .species = SPECIES_SPEAROW,
        },
        {
        .lvl = 16,
        .species = SPECIES_RATICATE,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_CAMPER_CHRIS] =
{
    .trainerName = _("Chris"),
    CAMPER_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 21,
        .species = SPECIES_GROWLITHE,
        },
        {
        .lvl = 21,
        .species = SPECIES_CHARMANDER,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_CAMPER_DREW] =
{
    .trainerName = _("Drew"),
    CAMPER_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 4,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 19,
        .species = SPECIES_RATTATA,
        },
        {
        .lvl = 19,
        .species = SPECIES_SANDSHREW,
        },
        {
        .lvl = 19,
        .species = SPECIES_EKANS,
        },
        {
        .lvl = 19,
        .species = SPECIES_SANDSHREW,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_PICNICKER_DIANA] =
{
    .trainerName = _("Diana"),
    PICNICKER_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 19,
        .species = SPECIES_GOLDEEN,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_PICNICKER_NANCY] =
{
    .trainerName = _("Nancy"),
    PICNICKER_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 16,
        .species = SPECIES_RATTATA,
        },
        {
        .lvl = 16,
        .species = SPECIES_PIKACHU,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_PICNICKER_ISABELLE] =
{
    .trainerName = _("Isabelle"),
    PICNICKER_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 16,
        .species = SPECIES_PIDGEY,
        },
        {
        .lvl = 16,
        .species = SPECIES_PIDGEY,
        },
        {
        .lvl = 16,
        .species = SPECIES_PIDGEY,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_PICNICKER_KELSEY] =
{
    .trainerName = _("Kelsey"),
    PICNICKER_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 15,
        .species = SPECIES_NIDORAN_M,
        },
        {
        .lvl = 15,
        .species = SPECIES_NIDORAN_F,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_PICNICKER_ALICIA] =
{
    .trainerName = _("Alicia"),
    PICNICKER_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 4,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 18,
        .species = SPECIES_ODDISH,
        },
        {
        .lvl = 18,
        .species = SPECIES_BELLSPROUT,
        },
        {
        .lvl = 18,
        .species = SPECIES_ODDISH,
        },
        {
        .lvl = 18,
        .species = SPECIES_BELLSPROUT,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_PICNICKER_CAITLIN] =
{
    .trainerName = _("Caitlin"),
    PICNICKER_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 23,
        .species = SPECIES_MEOWTH,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_PICNICKER_HEIDI] =
{
    .trainerName = _("Heidi"),
    PICNICKER_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 20,
        .species = SPECIES_PIKACHU,
        },
        {
        .lvl = 20,
        .species = SPECIES_CLEFAIRY,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_PICNICKER_CAROL] =
{
    .trainerName = _("Carol"),
    PICNICKER_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 21,
        .species = SPECIES_PIDGEY,
        },
        {
        .lvl = 21,
        .species = SPECIES_PIDGEOTTO,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_PICNICKER_SOFIA] =
{
    .trainerName = _("Sofia"),
    PICNICKER_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 21,
        .species = SPECIES_JIGGLYPUFF,
        },
        {
        .lvl = 21,
        .species = SPECIES_PIDGEY,
        },
        {
        .lvl = 21,
        .species = SPECIES_MEOWTH,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_PICNICKER_MARTHA] =
{
    .trainerName = _("Martha"),
    PICNICKER_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 22,
        .species = SPECIES_ODDISH,
        },
        {
        .lvl = 22,
        .species = SPECIES_BULBASAUR,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_PICNICKER_TINA] =
{
    .trainerName = _("Tina"),
    PICNICKER_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 24,
        .species = SPECIES_BULBASAUR,
        },
        {
        .lvl = 24,
        .species = SPECIES_IVYSAUR,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_PICNICKER_HANNAH] =
{
    .trainerName = _("Hannah"),
    PICNICKER_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 5,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 24,
        .species = SPECIES_PIDGEY,
        },
        {
        .lvl = 24,
        .species = SPECIES_MEOWTH,
        },
        {
        .lvl = 24,
        .species = SPECIES_RATTATA,
        },
        {
        .lvl = 24,
        .species = SPECIES_PIKACHU,
        },
        {
        .lvl = 24,
        .species = SPECIES_MEOWTH,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_POKEMANIAC_MARK] =
{
    .trainerName = _("Mark"),
    POKE_MANIAC_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 29,
        .species = SPECIES_RHYHORN,
        IVS(3),
        },
        {
        .lvl = 29,
        .species = SPECIES_LICKITUNG,
        IVS(3),
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_POKEMANIAC_HERMAN] =
{
    .trainerName = _("Herman"),
    POKE_MANIAC_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 20,
        .species = SPECIES_CUBONE,
        IVS(3),
        },
        {
        .lvl = 20,
        .species = SPECIES_SLOWPOKE,
        IVS(3),
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_POKEMANIAC_COOPER] =
{
    .trainerName = _("Cooper"),
    POKE_MANIAC_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 20,
        .species = SPECIES_SLOWPOKE,
        IVS(3),
        },
        {
        .lvl = 20,
        .species = SPECIES_SLOWPOKE,
        IVS(3),
        },
        {
        .lvl = 20,
        .species = SPECIES_SLOWPOKE,
        IVS(3),
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_POKEMANIAC_STEVE] =
{
    .trainerName = _("Steve"),
    POKE_MANIAC_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 22,
        .species = SPECIES_CHARMANDER,
        IVS(3),
        },
        {
        .lvl = 22,
        .species = SPECIES_CUBONE,
        IVS(3),
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_POKEMANIAC_WINSTON] =
{
    .trainerName = _("Winston"),
    POKE_MANIAC_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 25,
        .species = SPECIES_SLOWPOKE,
        IVS(3),
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_POKEMANIAC_DAWSON] =
{
    .trainerName = _("Dawson"),
    POKE_MANIAC_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 40,
        .species = SPECIES_CHARMELEON,
        IVS(3),
        },
        {
        .lvl = 40,
        .species = SPECIES_LAPRAS,
        IVS(3),
        },
        {
        .lvl = 40,
        .species = SPECIES_LICKITUNG,
        IVS(3),
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_POKEMANIAC_ASHTON] =
{
    .trainerName = _("Ashton"),
    POKE_MANIAC_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 23,
        .species = SPECIES_CUBONE,
        IVS(3),
        },
        {
        .lvl = 23,
        .species = SPECIES_SLOWPOKE,
        IVS(3),
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_SUPER_NERD_JOVAN] =
{
    .trainerName = _("Jovan"),
    SUPER_NERD_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 11,
        .species = SPECIES_MAGNEMITE,
        },
        {
        .lvl = 11,
        .species = SPECIES_VOLTORB,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_SUPER_NERD_MIGUEL] =
{
    .trainerName = _("Miguel"),
    SUPER_NERD_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 12,
        .species = SPECIES_GRIMER,
        },
        {
        .lvl = 12,
        .species = SPECIES_VOLTORB,
        },
        {
        .lvl = 12,
        .species = SPECIES_KOFFING,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_SUPER_NERD_AIDAN] =
{
    .trainerName = _("Aidan"),
    SUPER_NERD_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 4,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 20,
        .species = SPECIES_VOLTORB,
        .moves = {MOVE_SONIC_BOOM, MOVE_SCREECH, MOVE_TACKLE, MOVE_CHARGE},
        },
        {
        .lvl = 20,
        .species = SPECIES_KOFFING,
        .moves = {MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE, MOVE_POISON_GAS},
        },
        {
        .lvl = 20,
        .species = SPECIES_VOLTORB,
        .moves = {MOVE_SONIC_BOOM, MOVE_SCREECH, MOVE_TACKLE, MOVE_CHARGE},
        },
        {
        .lvl = 20,
        .species = SPECIES_MAGNEMITE,
        .moves = {MOVE_SONIC_BOOM, MOVE_SUPERSONIC, MOVE_THUNDER_SHOCK, MOVE_TACKLE},
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_SUPER_NERD_GLENN] =
{
    .trainerName = _("Glenn"),
    SUPER_NERD_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 22,
        .species = SPECIES_GRIMER,
        },
        {
        .lvl = 22,
        .species = SPECIES_MUK,
        },
        {
        .lvl = 22,
        .species = SPECIES_GRIMER,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_SUPER_NERD_LESLIE] =
{
    .trainerName = _("Leslie"),
    SUPER_NERD_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 26,
        .species = SPECIES_KOFFING,
        .moves = {MOVE_SLUDGE, MOVE_SMOKESCREEN, MOVE_SMOG, MOVE_SELF_DESTRUCT},
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_SUPER_NERD_ERIK] =
{
    .trainerName = _("Erik"),
    SUPER_NERD_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 36,
        .species = SPECIES_VULPIX,
        },
        {
        .lvl = 36,
        .species = SPECIES_VULPIX,
        },
        {
        .lvl = 36,
        .species = SPECIES_NINETALES,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_SUPER_NERD_AVERY] =
{
    .trainerName = _("Avery"),
    SUPER_NERD_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 4,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 34,
        .species = SPECIES_PONYTA,
        },
        {
        .lvl = 34,
        .species = SPECIES_CHARMANDER,
        },
        {
        .lvl = 34,
        .species = SPECIES_VULPIX,
        },
        {
        .lvl = 34,
        .species = SPECIES_GROWLITHE,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_SUPER_NERD_DEREK] =
{
    .trainerName = _("Derek"),
    SUPER_NERD_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 41,
        .species = SPECIES_RAPIDASH,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_SUPER_NERD_ZAC] =
{
    .trainerName = _("Zac"),
    SUPER_NERD_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 37,
        .species = SPECIES_GROWLITHE,
        },
        {
        .lvl = 37,
        .species = SPECIES_VULPIX,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_HIKER_MARCOS] =
{
    .trainerName = _("Marcos"),
    HIKER_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 10,
        .species = SPECIES_GEODUDE,
        },
        {
        .lvl = 10,
        .species = SPECIES_GEODUDE,
        },
        {
        .lvl = 10,
        .species = SPECIES_ONIX,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_HIKER_FRANKLIN] =
{
    .trainerName = _("Franklin"),
    HIKER_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 15,
        .species = SPECIES_MACHOP,
        },
        {
        .lvl = 15,
        .species = SPECIES_GEODUDE,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_HIKER_NOB] =
{
    .trainerName = _("Nob"),
    HIKER_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 4,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 13,
        .species = SPECIES_GEODUDE,
        },
        {
        .lvl = 13,
        .species = SPECIES_GEODUDE,
        },
        {
        .lvl = 13,
        .species = SPECIES_MACHOP,
        },
        {
        .lvl = 13,
        .species = SPECIES_GEODUDE,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_HIKER_WAYNE] =
{
    .trainerName = _("Wayne"),
    HIKER_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 17,
        .species = SPECIES_ONIX,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_HIKER_ALAN] =
{
    .trainerName = _("Alan"),
    HIKER_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 21,
        .species = SPECIES_GEODUDE,
        .moves = {MOVE_MAGNITUDE, MOVE_ROCK_THROW, MOVE_MUD_SPORT, MOVE_DEFENSE_CURL},
        },
        {
        .lvl = 21,
        .species = SPECIES_ONIX,
        .moves = {MOVE_HARDEN, MOVE_ROCK_THROW, MOVE_BIND, MOVE_SCREECH},
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_HIKER_BRICE] =
{
    .trainerName = _("Brice"),
    HIKER_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 20,
        .species = SPECIES_GEODUDE,
        },
        {
        .lvl = 20,
        .species = SPECIES_MACHOP,
        },
        {
        .lvl = 20,
        .species = SPECIES_GEODUDE,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_HIKER_CLARK] =
{
    .trainerName = _("Clark"),
    HIKER_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 21,
        .species = SPECIES_GEODUDE,
        .moves = {MOVE_MAGNITUDE, MOVE_ROCK_THROW, MOVE_MUD_SPORT, MOVE_DEFENSE_CURL},
        },
        {
        .lvl = 21,
        .species = SPECIES_ONIX,
        .moves = {MOVE_HARDEN, MOVE_ROCK_THROW, MOVE_BIND, MOVE_SCREECH},
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_HIKER_TRENT] =
{
    .trainerName = _("Trent"),
    HIKER_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 19,
        .species = SPECIES_ONIX,
        },
        {
        .lvl = 19,
        .species = SPECIES_GRAVELER,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_HIKER_DUDLEY] =
{
    .trainerName = _("Dudley"),
    HIKER_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 21,
        .species = SPECIES_GEODUDE,
        .moves = {MOVE_MAGNITUDE, MOVE_ROCK_THROW, MOVE_MUD_SPORT, MOVE_DEFENSE_CURL},
        },
        {
        .lvl = 21,
        .species = SPECIES_GEODUDE,
        .moves = {MOVE_MAGNITUDE, MOVE_ROCK_THROW, MOVE_MUD_SPORT, MOVE_DEFENSE_CURL},
        },
        {
        .lvl = 21,
        .species = SPECIES_GRAVELER,
        .moves = {MOVE_MAGNITUDE, MOVE_ROCK_THROW, MOVE_MUD_SPORT, MOVE_DEFENSE_CURL},
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_HIKER_ALLEN] =
{
    .trainerName = _("Allen"),
    HIKER_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 25,
        .species = SPECIES_GEODUDE,
        .moves = {MOVE_MAGNITUDE, MOVE_ROCK_THROW, MOVE_MUD_SPORT, MOVE_DEFENSE_CURL},
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_HIKER_ERIC] =
{
    .trainerName = _("Ricard"),
    HIKER_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 20,
        .species = SPECIES_MACHOP,
        },
        {
        .lvl = 20,
        .species = SPECIES_ONIX,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_HIKER_LENNY] =
{
    .trainerName = _("Lenny"),
    HIKER_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 4,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 19,
        .species = SPECIES_GEODUDE,
        },
        {
        .lvl = 19,
        .species = SPECIES_MACHOP,
        },
        {
        .lvl = 19,
        .species = SPECIES_GEODUDE,
        },
        {
        .lvl = 19,
        .species = SPECIES_GEODUDE,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_HIKER_OLIVER] =
{
    .trainerName = _("Oliver"),
    HIKER_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 20,
        .species = SPECIES_ONIX,
        },
        {
        .lvl = 20,
        .species = SPECIES_ONIX,
        },
        {
        .lvl = 20,
        .species = SPECIES_GEODUDE,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_HIKER_LUCAS] =
{
    .trainerName = _("Lucas"),
    HIKER_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 21,
        .species = SPECIES_GEODUDE,
        .moves = {MOVE_MAGNITUDE, MOVE_ROCK_THROW, MOVE_MUD_SPORT, MOVE_DEFENSE_CURL},
        },
        {
        .lvl = 21,
        .species = SPECIES_GRAVELER,
        .moves = {MOVE_MAGNITUDE, MOVE_ROCK_THROW, MOVE_MUD_SPORT, MOVE_DEFENSE_CURL},
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_BIKER_JARED] =
{
    .trainerName = _("Jared"),
    BIKER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 28,
        .species = SPECIES_KOFFING,
        .moves = {MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SMOG, MOVE_POISON_GAS},
        },
        {
        .lvl = 28,
        .species = SPECIES_KOFFING,
        .moves = {MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE},
        },
        {
        .lvl = 28,
        .species = SPECIES_KOFFING,
        .moves = {MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE},
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_BIKER_MALIK] =
{
    .trainerName = _("Malik"),
    BIKER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 29,
        .species = SPECIES_KOFFING,
        .moves = {MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE},
        },
        {
        .lvl = 29,
        .species = SPECIES_GRIMER,
        .moves = {MOVE_SCREECH, MOVE_MINIMIZE, MOVE_SLUDGE, MOVE_DISABLE},
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_BIKER_ERNEST] =
{
    .trainerName = _("Ernest"),
    BIKER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 5,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 25,
        .species = SPECIES_KOFFING,
        .moves = {MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE},
        },
        {
        .lvl = 25,
        .species = SPECIES_KOFFING,
        .moves = {MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE},
        },
        {
        .lvl = 25,
        .species = SPECIES_WEEZING,
        .moves = {MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE},
        },
        {
        .lvl = 25,
        .species = SPECIES_KOFFING,
        .moves = {MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE},
        },
        {
        .lvl = 25,
        .species = SPECIES_GRIMER,
        .moves = {MOVE_MINIMIZE, MOVE_SLUDGE, MOVE_DISABLE, MOVE_POUND},
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_BIKER_ALEX] =
{
    .trainerName = _("Alex"),
    BIKER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 28,
        .species = SPECIES_KOFFING,
        .moves = {MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE},
        },
        {
        .lvl = 28,
        .species = SPECIES_GRIMER,
        .moves = {MOVE_SCREECH, MOVE_MINIMIZE, MOVE_SLUDGE, MOVE_DISABLE},
        },
        {
        .lvl = 28,
        .species = SPECIES_WEEZING,
        .moves = {MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE},
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_BIKER_LAO] =
{
    .trainerName = _("Lao"),
    BIKER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 29,
        .species = SPECIES_GRIMER,
        .moves = {MOVE_SCREECH, MOVE_MINIMIZE, MOVE_SLUDGE, MOVE_DISABLE},
        },
        {
        .lvl = 29,
        .species = SPECIES_KOFFING,
        .moves = {MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE},
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_BIKER_HIDEO] =
{
    .trainerName = _("Hideo"),
    BIKER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 33,
        .species = SPECIES_WEEZING,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_BIKER_RUBEN] =
{
    .trainerName = _("Ruben"),
    BIKER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 28,
        .species = SPECIES_WEEZING,
        .moves = {MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE},
        },
        {
        .lvl = 28,
        .species = SPECIES_KOFFING,
        .moves = {MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE},
        },
        {
        .lvl = 28,
        .species = SPECIES_WEEZING,
        .moves = {MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE},
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_BIKER_BILLY] =
{
    .trainerName = _("Billy"),
    BIKER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 33,
        .species = SPECIES_MUK,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_BIKER_NIKOLAS] =
{
    .trainerName = _("Nikolas"),
    BIKER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 29,
        .species = SPECIES_VOLTORB,
        .moves = {MOVE_SPARK, MOVE_SONIC_BOOM, MOVE_SCREECH, MOVE_CHARGE},
        },
        {
        .lvl = 29,
        .species = SPECIES_VOLTORB,
        .moves = {MOVE_SPARK, MOVE_SONIC_BOOM, MOVE_SCREECH, MOVE_CHARGE},
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_BIKER_JAXON] =
{
    .trainerName = _("Jaxon"),
    BIKER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 29,
        .species = SPECIES_WEEZING,
        .moves = {MOVE_SLUDGE, MOVE_SMOKESCREEN, MOVE_SMOG, MOVE_TACKLE},
        },
        {
        .lvl = 29,
        .species = SPECIES_MUK,
        .moves = {MOVE_SCREECH, MOVE_MINIMIZE, MOVE_SLUDGE, MOVE_DISABLE},
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_BIKER_WILLIAM] =
{
    .trainerName = _("William"),
    BIKER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 5,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 25,
        .species = SPECIES_KOFFING,
        .moves = {MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE},
        },
        {
        .lvl = 25,
        .species = SPECIES_WEEZING,
        .moves = {MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE},
        },
        {
        .lvl = 25,
        .species = SPECIES_KOFFING,
        .moves = {MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE},
        },
        {
        .lvl = 25,
        .species = SPECIES_KOFFING,
        .moves = {MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE},
        },
        {
        .lvl = 25,
        .species = SPECIES_WEEZING,
        .moves = {MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SELF_DESTRUCT, MOVE_TACKLE},
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_BIKER_LUKAS] =
{
    .trainerName = _("Lukas"),
    BIKER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 4,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 26,
        .species = SPECIES_KOFFING,
        .moves = {MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE},
        },
        {
        .lvl = 26,
        .species = SPECIES_KOFFING,
        .moves = {MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE},
        },
        {
        .lvl = 26,
        .species = SPECIES_GRIMER,
        .moves = {MOVE_SCREECH, MOVE_MINIMIZE, MOVE_SLUDGE, MOVE_DISABLE},
        },
        {
        .lvl = 26,
        .species = SPECIES_KOFFING,
        .moves = {MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE},
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_BIKER_ISAAC] =
{
    .trainerName = _("Isaac"),
    BIKER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 28,
        .species = SPECIES_GRIMER,
        .moves = {MOVE_SCREECH, MOVE_MINIMIZE, MOVE_SLUDGE, MOVE_DISABLE},
        },
        {
        .lvl = 28,
        .species = SPECIES_GRIMER,
        .moves = {MOVE_SCREECH, MOVE_MINIMIZE, MOVE_SLUDGE, MOVE_DISABLE},
        },
        {
        .lvl = 28,
        .species = SPECIES_KOFFING,
        .moves = {MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE},
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_BIKER_GERALD] =
{
    .trainerName = _("Gerald"),
    BIKER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 29,
        .species = SPECIES_KOFFING,
        .moves = {MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE},
        },
        {
        .lvl = 29,
        .species = SPECIES_MUK,
        .moves = {MOVE_SCREECH, MOVE_MINIMIZE, MOVE_SLUDGE, MOVE_DISABLE},
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_BURGLAR_QUINN] =
{
    .trainerName = _("Quinn"),
    BURGLAR_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 36,
        .species = SPECIES_GROWLITHE,
        },
        {
        .lvl = 36,
        .species = SPECIES_VULPIX,
        },
        {
        .lvl = 36,
        .species = SPECIES_NINETALES,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_BURGLAR_RAMON] =
{
    .trainerName = _("Ramon"),
    BURGLAR_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 41,
        .species = SPECIES_PONYTA,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_BURGLAR_DUSTY] =
{
    .trainerName = _("Dusty"),
    BURGLAR_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 37,
        .species = SPECIES_VULPIX,
        },
        {
        .lvl = 37,
        .species = SPECIES_GROWLITHE,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_BURGLAR_ARNIE] =
{
    .trainerName = _("Arnie"),
    BURGLAR_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 34,
        .species = SPECIES_CHARMANDER,
        },
        {
        .lvl = 34,
        .species = SPECIES_CHARMELEON,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_BURGLAR_SIMON] =
{
    .trainerName = _("Simon"),
    BURGLAR_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 38,
        .species = SPECIES_NINETALES,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_BURGLAR_LEWIS] =
{
    .trainerName = _("Lewis"),
    BURGLAR_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 34,
        .species = SPECIES_GROWLITHE,
        },
        {
        .lvl = 34,
        .species = SPECIES_PONYTA,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_ENGINEER_BAILY] =
{
    .trainerName = _("Baily"),
    ENGINEER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 21,
        .species = SPECIES_VOLTORB,
        },
        {
        .lvl = 21,
        .species = SPECIES_MAGNEMITE,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_ENGINEER_BRAXTON] =
{
    .trainerName = _("Braxton"),
    ENGINEER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 21,
        .species = SPECIES_MAGNEMITE,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_ENGINEER_BERNIE] =
{
    .trainerName = _("Bernie"),
    ENGINEER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 18,
        .species = SPECIES_MAGNEMITE,
        },
        {
        .lvl = 18,
        .species = SPECIES_MAGNEMITE,
        },
        {
        .lvl = 18,
        .species = SPECIES_MAGNETON,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_FISHERMAN_DALE] =
{
    .trainerName = _("Dale"),
    FISHERMAN_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 17,
        .species = SPECIES_GOLDEEN,
        },
        {
        .lvl = 17,
        .species = SPECIES_TENTACOOL,
        },
        {
        .lvl = 17,
        .species = SPECIES_GOLDEEN,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_FISHERMAN_BARNY] =
{
    .trainerName = _("Barny"),
    FISHERMAN_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 17,
        .species = SPECIES_TENTACOOL,
        },
        {
        .lvl = 17,
        .species = SPECIES_STARYU,
        },
        {
        .lvl = 17,
        .species = SPECIES_SHELLDER,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_FISHERMAN_NED] =
{
    .trainerName = _("Ned"),
    FISHERMAN_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 22,
        .species = SPECIES_GOLDEEN,
        },
        {
        .lvl = 22,
        .species = SPECIES_POLIWAG,
        },
        {
        .lvl = 22,
        .species = SPECIES_GOLDEEN,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_FISHERMAN_CHIP] =
{
    .trainerName = _("Chip"),
    FISHERMAN_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 24,
        .species = SPECIES_TENTACOOL,
        },
        {
        .lvl = 24,
        .species = SPECIES_GOLDEEN,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_FISHERMAN_HANK] =
{
    .trainerName = _("Hank"),
    FISHERMAN_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 27,
        .species = SPECIES_GOLDEEN,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_FISHERMAN_ELLIOT] =
{
    .trainerName = _("Elliot"),
    FISHERMAN_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 4,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 21,
        .species = SPECIES_POLIWAG,
        },
        {
        .lvl = 21,
        .species = SPECIES_SHELLDER,
        },
        {
        .lvl = 21,
        .species = SPECIES_GOLDEEN,
        },
        {
        .lvl = 21,
        .species = SPECIES_HORSEA,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_FISHERMAN_RONALD] =
{
    .trainerName = _("Ronald"),
    FISHERMAN_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 4,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 28,
        .species = SPECIES_SEAKING,
        },
        {
        .lvl = 28,
        .species = SPECIES_GOLDEEN,
        },
        {
        .lvl = 28,
        .species = SPECIES_SEAKING,
        },
        {
        .lvl = 28,
        .species = SPECIES_SEAKING,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_FISHERMAN_CLAUDE] =
{
    .trainerName = _("Claude"),
    FISHERMAN_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 31,
        .species = SPECIES_SHELLDER,
        },
        {
        .lvl = 31,
        .species = SPECIES_CLOYSTER,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_FISHERMAN_WADE] =
{
    .trainerName = _("Wade"),
    FISHERMAN_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 6,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 27,
        .species = SPECIES_MAGIKARP,
        },
        {
        .lvl = 27,
        .species = SPECIES_MAGIKARP,
        },
        {
        .lvl = 27,
        .species = SPECIES_MAGIKARP,
        },
        {
        .lvl = 27,
        .species = SPECIES_MAGIKARP,
        },
        {
        .lvl = 27,
        .species = SPECIES_MAGIKARP,
        },
        {
        .lvl = 27,
        .species = SPECIES_MAGIKARP,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_FISHERMAN_NOLAN] =
{
    .trainerName = _("Nolan"),
    FISHERMAN_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 33,
        .species = SPECIES_SEAKING,
        },
        {
        .lvl = 33,
        .species = SPECIES_GOLDEEN,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_FISHERMAN_ANDREW] =
{
    .trainerName = _("Andrew"),
    FISHERMAN_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 24,
        .species = SPECIES_MAGIKARP,
        },
        {
        .lvl = 24,
        .species = SPECIES_MAGIKARP,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_SWIMMER_MALE_LUIS] =
{
    .trainerName = _("Luis"),
    .trainerClass = TRAINER_CLASS_SWIMMER_M_FRLG,
    .trainerPic = TRAINER_PIC_SWIMMER_M_FRLG,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 16,
        .species = SPECIES_HORSEA,
        },
        {
        .lvl = 16,
        .species = SPECIES_SHELLDER,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_SWIMMER_MALE_RICHARD] =
{
    .trainerName = _("Richard"),
    .trainerClass = TRAINER_CLASS_SWIMMER_M_FRLG,
    .trainerPic = TRAINER_PIC_SWIMMER_M_FRLG,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 30,
        .species = SPECIES_TENTACOOL,
        },
        {
        .lvl = 30,
        .species = SPECIES_SHELLDER,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_SWIMMER_MALE_REECE] =
{
    .trainerName = _("Reece"),
    .trainerClass = TRAINER_CLASS_SWIMMER_M_FRLG,
    .trainerPic = TRAINER_PIC_SWIMMER_M_FRLG,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 29,
        .species = SPECIES_GOLDEEN,
        },
        {
        .lvl = 29,
        .species = SPECIES_HORSEA,
        },
        {
        .lvl = 29,
        .species = SPECIES_STARYU,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_SWIMMER_MALE_MATTHEW] =
{
    .trainerName = _("Matthew"),
    .trainerClass = TRAINER_CLASS_SWIMMER_M_FRLG,
    .trainerPic = TRAINER_PIC_SWIMMER_M_FRLG,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 30,
        .species = SPECIES_POLIWAG,
        },
        {
        .lvl = 30,
        .species = SPECIES_POLIWHIRL,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_SWIMMER_MALE_DOUGLAS] =
{
    .trainerName = _("Douglas"),
    .trainerClass = TRAINER_CLASS_SWIMMER_M_FRLG,
    .trainerPic = TRAINER_PIC_SWIMMER_M_FRLG,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 4,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 27,
        .species = SPECIES_HORSEA,
        },
        {
        .lvl = 27,
        .species = SPECIES_TENTACOOL,
        },
        {
        .lvl = 27,
        .species = SPECIES_TENTACOOL,
        },
        {
        .lvl = 27,
        .species = SPECIES_GOLDEEN,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_SWIMMER_MALE_DAVID] =
{
    .trainerName = _("David"),
    .trainerClass = TRAINER_CLASS_SWIMMER_M_FRLG,
    .trainerPic = TRAINER_PIC_SWIMMER_M_FRLG,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 29,
        .species = SPECIES_GOLDEEN,
        },
        {
        .lvl = 29,
        .species = SPECIES_SHELLDER,
        },
        {
        .lvl = 29,
        .species = SPECIES_SEAKING,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_SWIMMER_MALE_TONY] =
{
    .trainerName = _("Tony"),
    .trainerClass = TRAINER_CLASS_SWIMMER_M_FRLG,
    .trainerPic = TRAINER_PIC_SWIMMER_M_FRLG,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 30,
        .species = SPECIES_HORSEA,
        },
        {
        .lvl = 30,
        .species = SPECIES_HORSEA,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_SWIMMER_MALE_AXLE] =
{
    .trainerName = _("Axle"),
    .trainerClass = TRAINER_CLASS_SWIMMER_M_FRLG,
    .trainerPic = TRAINER_PIC_SWIMMER_M_FRLG,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 5,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 27,
        .species = SPECIES_TENTACOOL,
        },
        {
        .lvl = 27,
        .species = SPECIES_TENTACOOL,
        },
        {
        .lvl = 27,
        .species = SPECIES_STARYU,
        },
        {
        .lvl = 27,
        .species = SPECIES_HORSEA,
        },
        {
        .lvl = 27,
        .species = SPECIES_TENTACRUEL,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_SWIMMER_MALE_BARRY] =
{
    .trainerName = _("Barry"),
    .trainerClass = TRAINER_CLASS_SWIMMER_M_FRLG,
    .trainerPic = TRAINER_PIC_SWIMMER_M_FRLG,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 31,
        .species = SPECIES_SHELLDER,
        },
        {
        .lvl = 31,
        .species = SPECIES_CLOYSTER,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_SWIMMER_MALE_DEAN] =
{
    .trainerName = _("Dean"),
    .trainerClass = TRAINER_CLASS_SWIMMER_M_FRLG,
    .trainerPic = TRAINER_PIC_SWIMMER_M_FRLG,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 35,
        .species = SPECIES_STARYU,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_SWIMMER_MALE_DARRIN] =
{
    .trainerName = _("Darrin"),
    .trainerClass = TRAINER_CLASS_SWIMMER_M_FRLG,
    .trainerPic = TRAINER_PIC_SWIMMER_M_FRLG,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 4,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 28,
        .species = SPECIES_HORSEA,
        },
        {
        .lvl = 28,
        .species = SPECIES_HORSEA,
        },
        {
        .lvl = 28,
        .species = SPECIES_SEADRA,
        },
        {
        .lvl = 28,
        .species = SPECIES_HORSEA,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_SWIMMER_MALE_SPENCER] =
{
    .trainerName = _("Spencer"),
    .trainerClass = TRAINER_CLASS_SWIMMER_M_FRLG,
    .trainerPic = TRAINER_PIC_SWIMMER_M_FRLG,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 33,
        .species = SPECIES_SEADRA,
        },
        {
        .lvl = 33,
        .species = SPECIES_TENTACRUEL,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_SWIMMER_MALE_JACK] =
{
    .trainerName = _("Jack"),
    .trainerClass = TRAINER_CLASS_SWIMMER_M_FRLG,
    .trainerPic = TRAINER_PIC_SWIMMER_M_FRLG,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 37,
        .species = SPECIES_STARMIE,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_SWIMMER_MALE_JEROME] =
{
    .trainerName = _("Jerome"),
    .trainerClass = TRAINER_CLASS_SWIMMER_M_FRLG,
    .trainerPic = TRAINER_PIC_SWIMMER_M_FRLG,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 33,
        .species = SPECIES_STARYU,
        },
        {
        .lvl = 33,
        .species = SPECIES_WARTORTLE,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_SWIMMER_MALE_ROLAND] =
{
    .trainerName = _("Roland"),
    .trainerClass = TRAINER_CLASS_SWIMMER_M_FRLG,
    .trainerPic = TRAINER_PIC_SWIMMER_M_FRLG,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 32,
        .species = SPECIES_POLIWHIRL,
        },
        {
        .lvl = 32,
        .species = SPECIES_TENTACOOL,
        },
        {
        .lvl = 32,
        .species = SPECIES_SEADRA,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_CUE_BALL_KOJI] =
{
    .trainerName = _("Koji"),
    CUE_BALL_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 28,
        .species = SPECIES_MACHOP,
        },
        {
        .lvl = 28,
        .species = SPECIES_MANKEY,
        },
        {
        .lvl = 28,
        .species = SPECIES_MACHOP,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_CUE_BALL_LUKE] =
{
    .trainerName = _("Luke"),
    CUE_BALL_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 29,
        .species = SPECIES_MANKEY,
        },
        {
        .lvl = 29,
        .species = SPECIES_MACHOP,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_CUE_BALL_CAMRON] =
{
    .trainerName = _("Camron"),
    CUE_BALL_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 29,
        .species = SPECIES_MANKEY,
        },
        {
        .lvl = 29,
        .species = SPECIES_MACHOP,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_CUE_BALL_RAUL] =
{
    .trainerName = _("Raul"),
    CUE_BALL_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 29,
        .species = SPECIES_MANKEY,
        },
        {
        .lvl = 29,
        .species = SPECIES_PRIMEAPE,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_CUE_BALL_ISAIAH] =
{
    .trainerName = _("Isaiah"),
    CUE_BALL_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 29,
        .species = SPECIES_MACHOP,
        },
        {
        .lvl = 29,
        .species = SPECIES_MACHAMP,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_CUE_BALL_ZEEK] =
{
    .trainerName = _("Zeek"),
    CUE_BALL_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 33,
        .species = SPECIES_MACHOKE,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_CUE_BALL_JAMAL] =
{
    .trainerName = _("Jamal"),
    CUE_BALL_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 4,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 26,
        .species = SPECIES_MANKEY,
        },
        {
        .lvl = 26,
        .species = SPECIES_MANKEY,
        },
        {
        .lvl = 26,
        .species = SPECIES_MACHAMP,
        },
        {
        .lvl = 26,
        .species = SPECIES_MACHOP,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_CUE_BALL_COREY] =
{
    .trainerName = _("Corey"),
    CUE_BALL_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 29,
        .species = SPECIES_PRIMEAPE,
        },
        {
        .lvl = 29,
        .species = SPECIES_MACHOKE,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_CUE_BALL_CHASE] =
{
    .trainerName = _("Chase"),
    CUE_BALL_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 31,
        .species = SPECIES_TENTACOOL,
        },
        {
        .lvl = 31,
        .species = SPECIES_TENTACOOL,
        },
        {
        .lvl = 31,
        .species = SPECIES_TENTACRUEL,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_GAMER_HUGO] =
{
    .trainerName = _("Hugo"),
    GAMBLER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 18,
        .species = SPECIES_POLIWAG,
        },
        {
        .lvl = 18,
        .species = SPECIES_HORSEA,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_GAMER_JASPER] =
{
    .trainerName = _("Jasper"),
    GAMBLER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 18,
        .species = SPECIES_BELLSPROUT,
        },
        {
        .lvl = 18,
        .species = SPECIES_ODDISH,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_GAMER_DIRK] =
{
    .trainerName = _("Dirk"),
    GAMBLER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 18,
        .species = SPECIES_VOLTORB,
        },
        {
        .lvl = 18,
        .species = SPECIES_MAGNEMITE,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_GAMER_DARIAN] =
{
    .trainerName = _("Darian"),
    GAMBLER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 18,
        .species = SPECIES_GROWLITHE,
        },
        {
        .lvl = 18,
        .species = SPECIES_VULPIX,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_GAMER_STAN] =
{
    .trainerName = _("Stan"),
    GAMBLER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 22,
        .species = SPECIES_POLIWAG,
        },
        {
        .lvl = 22,
        .species = SPECIES_POLIWAG,
        },
        {
        .lvl = 22,
        .species = SPECIES_POLIWHIRL,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_GAMER_RICH] =
{
    .trainerName = _("Rich"),
    GAMBLER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 24,
        .species = SPECIES_GROWLITHE,
        },
        {
        .lvl = 24,
        .species = SPECIES_VULPIX,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_BEAUTY_BRIDGET] =
{
    .trainerName = _("Bridget"),
    BEAUTY_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 4,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 21,
        .species = SPECIES_ODDISH,
        },
        {
        .lvl = 21,
        .species = SPECIES_BELLSPROUT,
        },
        {
        .lvl = 21,
        .species = SPECIES_ODDISH,
        },
        {
        .lvl = 21,
        .species = SPECIES_BELLSPROUT,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_BEAUTY_TAMIA] =
{
    .trainerName = _("Tamia"),
    BEAUTY_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 24,
        .species = SPECIES_BELLSPROUT,
        },
        {
        .lvl = 24,
        .species = SPECIES_BELLSPROUT,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_BEAUTY_LORI] =
{
    .trainerName = _("Lori"),
    BEAUTY_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 24,
        .species = SPECIES_EXEGGCUTE,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_BEAUTY_LOLA] =
{
    .trainerName = _("Lola"),
    BEAUTY_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 27,
        .species = SPECIES_RATTATA,
        },
        {
        .lvl = 27,
        .species = SPECIES_PIKACHU,
        },
        {
        .lvl = 27,
        .species = SPECIES_RATTATA,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_BEAUTY_SHEILA] =
{
    .trainerName = _("Sheila"),
    BEAUTY_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 29,
        .species = SPECIES_CLEFAIRY,
        },
        {
        .lvl = 29,
        .species = SPECIES_MEOWTH,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_SWIMMER_FEMALE_TIFFANY] =
{
    .trainerName = _("Tiffany"),
    .trainerClass = TRAINER_CLASS_SWIMMER_F_FRLG,
    .trainerPic = TRAINER_PIC_SWIMMER_F_FRLG,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 35,
        .species = SPECIES_SEAKING,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_SWIMMER_FEMALE_NORA] =
{
    .trainerName = _("Nora"),
    .trainerClass = TRAINER_CLASS_SWIMMER_F_FRLG,
    .trainerPic = TRAINER_PIC_SWIMMER_F_FRLG,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 30,
        .species = SPECIES_SHELLDER,
        },
        {
        .lvl = 30,
        .species = SPECIES_SHELLDER,
        },
        {
        .lvl = 30,
        .species = SPECIES_CLOYSTER,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_SWIMMER_FEMALE_MELISSA] =
{
    .trainerName = _("Melissa"),
    .trainerClass = TRAINER_CLASS_SWIMMER_F_FRLG,
    .trainerPic = TRAINER_PIC_SWIMMER_F_FRLG,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 31,
        .species = SPECIES_POLIWAG,
        },
        {
        .lvl = 31,
        .species = SPECIES_SEAKING,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_BEAUTY_GRACE] =
{
    .trainerName = _("Grace"),
    BEAUTY_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 29,
        .species = SPECIES_PIDGEOTTO,
        },
        {
        .lvl = 29,
        .species = SPECIES_WIGGLYTUFF,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_BEAUTY_OLIVIA] =
{
    .trainerName = _("Olivia"),
    BEAUTY_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 29,
        .species = SPECIES_BULBASAUR,
        },
        {
        .lvl = 29,
        .species = SPECIES_IVYSAUR,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_BEAUTY_LAUREN] =
{
    .trainerName = _("Lauren"),
    .trainerClass = TRAINER_CLASS_BEAUTY_FRLG,
    .trainerPic = TRAINER_PIC_SWIMMER_F_FRLG,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 33,
        .species = SPECIES_WEEPINBELL,
        },
        {
        .lvl = 33,
        .species = SPECIES_BELLSPROUT,
        },
        {
        .lvl = 33,
        .species = SPECIES_WEEPINBELL,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_SWIMMER_FEMALE_ANYA] =
{
    .trainerName = _("Anya"),
    .trainerClass = TRAINER_CLASS_SWIMMER_F_FRLG,
    .trainerPic = TRAINER_PIC_SWIMMER_F_FRLG,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 5,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 27,
        .species = SPECIES_POLIWAG,
        },
        {
        .lvl = 27,
        .species = SPECIES_GOLDEEN,
        },
        {
        .lvl = 27,
        .species = SPECIES_SEAKING,
        },
        {
        .lvl = 27,
        .species = SPECIES_GOLDEEN,
        },
        {
        .lvl = 27,
        .species = SPECIES_POLIWAG,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_SWIMMER_FEMALE_ALICE] =
{
    .trainerName = _("Alice"),
    .trainerClass = TRAINER_CLASS_SWIMMER_F_FRLG,
    .trainerPic = TRAINER_PIC_SWIMMER_F_FRLG,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 30,
        .species = SPECIES_GOLDEEN,
        },
        {
        .lvl = 30,
        .species = SPECIES_SEAKING,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_SWIMMER_FEMALE_CONNIE] =
{
    .trainerName = _("Connie"),
    .trainerClass = TRAINER_CLASS_SWIMMER_F_FRLG,
    .trainerPic = TRAINER_PIC_SWIMMER_F_FRLG,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 29,
        .species = SPECIES_STARYU,
        },
        {
        .lvl = 29,
        .species = SPECIES_STARYU,
        },
        {
        .lvl = 29,
        .species = SPECIES_STARYU,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_SWIMMER_FEMALE_SHIRLEY] =
{
    .trainerName = _("Shirley"),
    .trainerClass = TRAINER_CLASS_SWIMMER_F_FRLG,
    .trainerPic = TRAINER_PIC_SWIMMER_F_FRLG,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 30,
        .species = SPECIES_SEADRA,
        },
        {
        .lvl = 30,
        .species = SPECIES_HORSEA,
        },
        {
        .lvl = 30,
        .species = SPECIES_SEADRA,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_PSYCHIC_JOHAN] =
{
    .trainerName = _("Johan"),
    .trainerClass = TRAINER_CLASS_PSYCHIC_FRLG,
    .trainerPic = TRAINER_PIC_PSYCHIC_M_FRLG,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 4,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 31,
        .species = SPECIES_KADABRA,
        IVS(6),
        },
        {
        .lvl = 31,
        .species = SPECIES_SLOWPOKE,
        IVS(6),
        },
        {
        .lvl = 31,
        .species = SPECIES_MR_MIME,
        IVS(6),
        },
        {
        .lvl = 31,
        .species = SPECIES_KADABRA,
        IVS(6),
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_PSYCHIC_TYRON] =
{
    .trainerName = _("Tyron"),
    .trainerClass = TRAINER_CLASS_PSYCHIC_FRLG,
    .trainerPic = TRAINER_PIC_PSYCHIC_M_FRLG,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 34,
        .species = SPECIES_MR_MIME,
        IVS(6),
        },
        {
        .lvl = 34,
        .species = SPECIES_KADABRA,
        IVS(6),
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_PSYCHIC_CAMERON] =
{
    .trainerName = _("Cameron"),
    .trainerClass = TRAINER_CLASS_PSYCHIC_FRLG,
    .trainerPic = TRAINER_PIC_PSYCHIC_M_FRLG,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 33,
        .species = SPECIES_SLOWPOKE,
        IVS(6),
        },
        {
        .lvl = 33,
        .species = SPECIES_SLOWPOKE,
        IVS(6),
        },
        {
        .lvl = 33,
        .species = SPECIES_SLOWBRO,
        IVS(6),
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_PSYCHIC_PRESTON] =
{
    .trainerName = _("Preston"),
    .trainerClass = TRAINER_CLASS_PSYCHIC_FRLG,
    .trainerPic = TRAINER_PIC_PSYCHIC_M_FRLG,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 38,
        .species = SPECIES_SLOWBRO,
        IVS(6),
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_ROCKER_RANDALL] =
{
    .trainerName = _("Randall"),
    ROCKER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 20,
        .species = SPECIES_VOLTORB,
        },
        {
        .lvl = 20,
        .species = SPECIES_MAGNEMITE,
        },
        {
        .lvl = 20,
        .species = SPECIES_VOLTORB,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_ROCKER_LUCA] =
{
    .trainerName = _("Luca"),
    ROCKER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 29,
        .species = SPECIES_VOLTORB,
        },
        {
        .lvl = 29,
        .species = SPECIES_ELECTRODE,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_JUGGLER_DALTON] =
{
    .trainerName = _("Dalton"),
    JUGGLER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 29,
        .species = SPECIES_KADABRA,
        },
        {
        .lvl = 29,
        .species = SPECIES_MR_MIME,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_JUGGLER_NELSON] =
{
    .trainerName = _("Nelson"),
    JUGGLER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 4,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 41,
        .species = SPECIES_DROWZEE,
        },
        {
        .lvl = 41,
        .species = SPECIES_HYPNO,
        },
        {
        .lvl = 41,
        .species = SPECIES_KADABRA,
        },
        {
        .lvl = 41,
        .species = SPECIES_KADABRA,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_JUGGLER_KIRK] =
{
    .trainerName = _("Kirk"),
    JUGGLER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 4,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 31,
        .species = SPECIES_DROWZEE,
        },
        {
        .lvl = 31,
        .species = SPECIES_DROWZEE,
        },
        {
        .lvl = 31,
        .species = SPECIES_KADABRA,
        },
        {
        .lvl = 31,
        .species = SPECIES_DROWZEE,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_JUGGLER_SHAWN] =
{
    .trainerName = _("Shawn"),
    JUGGLER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 34,
        .species = SPECIES_DROWZEE,
        },
        {
        .lvl = 34,
        .species = SPECIES_HYPNO,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_JUGGLER_GREGORY] =
{
    .trainerName = _("Gregory"),
    JUGGLER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 48,
        .species = SPECIES_MR_MIME,
        .moves = {MOVE_PSYCHIC, MOVE_ROLE_PLAY, MOVE_DOUBLE_SLAP, MOVE_ENCORE},
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_JUGGLER_EDWARD] =
{
    .trainerName = _("Edward"),
    JUGGLER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 4,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 46,
        .species = SPECIES_VOLTORB,
        .moves = {MOVE_SWIFT, MOVE_LIGHT_SCREEN, MOVE_SPARK, MOVE_SONIC_BOOM},
        },
        {
        .lvl = 46,
        .species = SPECIES_VOLTORB,
        .moves = {MOVE_SWIFT, MOVE_LIGHT_SCREEN, MOVE_SPARK, MOVE_SONIC_BOOM},
        },
        {
        .lvl = 47,
        .species = SPECIES_ELECTRODE,
        .moves = {MOVE_SWIFT, MOVE_SPARK, MOVE_SELF_DESTRUCT, MOVE_SONIC_BOOM},
        },
        {
        .lvl = 48,
        .species = SPECIES_MR_MIME,
        .moves = {MOVE_PSYCHIC, MOVE_ROLE_PLAY, MOVE_REFLECT, MOVE_ENCORE},
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_JUGGLER_KAYDEN] =
{
    .trainerName = _("Kayden"),
    JUGGLER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 38,
        .species = SPECIES_HYPNO,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_JUGGLER_NATE] =
{
    .trainerName = _("Nate"),
    JUGGLER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 34,
        .species = SPECIES_DROWZEE,
        },
        {
        .lvl = 34,
        .species = SPECIES_KADABRA,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_TAMER_PHIL] =
{
    .trainerName = _("Phil"),
    TAMER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 34,
        .species = SPECIES_SANDSLASH,
        IVS(4),
        },
        {
        .lvl = 34,
        .species = SPECIES_ARBOK,
        IVS(4),
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_TAMER_EDGAR] =
{
    .trainerName = _("Edgar"),
    TAMER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 33,
        .species = SPECIES_ARBOK,
        IVS(4),
        },
        {
        .lvl = 33,
        .species = SPECIES_SANDSLASH,
        IVS(4),
        },
        {
        .lvl = 33,
        .species = SPECIES_ARBOK,
        IVS(4),
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_TAMER_JASON] =
{
    .trainerName = _("Jason"),
    TAMER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 43,
        .species = SPECIES_RHYHORN,
        IVS(4),
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_TAMER_COLE] =
{
    .trainerName = _("Cole"),
    TAMER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 39,
        .species = SPECIES_ARBOK,
        IVS(4),
        },
        {
        .lvl = 39,
        .species = SPECIES_TAUROS,
        IVS(4),
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_TAMER_VINCENT] =
{
    .trainerName = _("Vincent"),
    TAMER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 44,
        .species = SPECIES_PERSIAN,
        IVS(4),
        },
        {
        .lvl = 44,
        .species = SPECIES_GOLDUCK,
        IVS(4),
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_TAMER_JOHN] =
{
    .trainerName = _("John"),
    TAMER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 4,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 42,
        .species = SPECIES_RHYHORN,
        IVS(4),
        },
        {
        .lvl = 42,
        .species = SPECIES_PRIMEAPE,
        IVS(4),
        },
        {
        .lvl = 42,
        .species = SPECIES_ARBOK,
        IVS(4),
        },
        {
        .lvl = 42,
        .species = SPECIES_TAUROS,
        IVS(4),
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_BIRD_KEEPER_SEBASTIAN] =
{
    .trainerName = _("Sebastian"),
    BIRD_KEEPER_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 29,
        .species = SPECIES_PIDGEY,
        },
        {
        .lvl = 29,
        .species = SPECIES_PIDGEOTTO,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_BIRD_KEEPER_PERRY] =
{
    .trainerName = _("Perry"),
    BIRD_KEEPER_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 5,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 25,
        .species = SPECIES_SPEAROW,
        },
        {
        .lvl = 25,
        .species = SPECIES_PIDGEY,
        },
        {
        .lvl = 25,
        .species = SPECIES_PIDGEY,
        },
        {
        .lvl = 25,
        .species = SPECIES_SPEAROW,
        },
        {
        .lvl = 25,
        .species = SPECIES_SPEAROW,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_BIRD_KEEPER_ROBERT] =
{
    .trainerName = _("Robert"),
    BIRD_KEEPER_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 4,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 26,
        .species = SPECIES_PIDGEY,
        },
        {
        .lvl = 26,
        .species = SPECIES_PIDGEOTTO,
        },
        {
        .lvl = 26,
        .species = SPECIES_SPEAROW,
        },
        {
        .lvl = 26,
        .species = SPECIES_FEAROW,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_BIRD_KEEPER_DONALD] =
{
    .trainerName = _("Donald"),
    BIRD_KEEPER_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 33,
        .species = SPECIES_FARFETCHD,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_BIRD_KEEPER_BENNY] =
{
    .trainerName = _("Benny"),
    BIRD_KEEPER_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 29,
        .species = SPECIES_SPEAROW,
        },
        {
        .lvl = 29,
        .species = SPECIES_FEAROW,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_BIRD_KEEPER_EDWIN] =
{
    .trainerName = _("Edwin"),
    BIRD_KEEPER_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 4,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 26,
        .species = SPECIES_PIDGEOTTO,
        },
        {
        .lvl = 26,
        .species = SPECIES_FARFETCHD,
        },
        {
        .lvl = 26,
        .species = SPECIES_DODUO,
        },
        {
        .lvl = 26,
        .species = SPECIES_PIDGEY,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_BIRD_KEEPER_CHESTER] =
{
    .trainerName = _("Chester"),
    BIRD_KEEPER_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 28,
        .species = SPECIES_DODRIO,
        },
        {
        .lvl = 28,
        .species = SPECIES_DODUO,
        },
        {
        .lvl = 28,
        .species = SPECIES_DODUO,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_BIRD_KEEPER_WILTON] =
{
    .trainerName = _("Wilton"),
    BIRD_KEEPER_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 29,
        .species = SPECIES_SPEAROW,
        },
        {
        .lvl = 29,
        .species = SPECIES_FEAROW,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_BIRD_KEEPER_RAMIRO] =
{
    .trainerName = _("Ramiro"),
    BIRD_KEEPER_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 34,
        .species = SPECIES_DODRIO,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_BIRD_KEEPER_JACOB] =
{
    .trainerName = _("Jacob"),
    BIRD_KEEPER_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 4,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 26,
        .species = SPECIES_SPEAROW,
        },
        {
        .lvl = 26,
        .species = SPECIES_SPEAROW,
        },
        {
        .lvl = 26,
        .species = SPECIES_FEAROW,
        },
        {
        .lvl = 26,
        .species = SPECIES_SPEAROW,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_BIRD_KEEPER_ROGER] =
{
    .trainerName = _("Roger"),
    BIRD_KEEPER_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 30,
        .species = SPECIES_FEAROW,
        },
        {
        .lvl = 30,
        .species = SPECIES_FEAROW,
        },
        {
        .lvl = 30,
        .species = SPECIES_PIDGEOTTO,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_BIRD_KEEPER_REED] =
{
    .trainerName = _("Reed"),
    BIRD_KEEPER_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 4,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 39,
        .species = SPECIES_PIDGEOTTO,
        },
        {
        .lvl = 39,
        .species = SPECIES_PIDGEOTTO,
        },
        {
        .lvl = 39,
        .species = SPECIES_PIDGEY,
        },
        {
        .lvl = 39,
        .species = SPECIES_PIDGEOTTO,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_BIRD_KEEPER_KEITH] =
{
    .trainerName = _("Keith"),
    BIRD_KEEPER_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 39,
        .species = SPECIES_FARFETCHD,
        },
        {
        .lvl = 39,
        .species = SPECIES_FEAROW,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_BIRD_KEEPER_CARTER] =
{
    .trainerName = _("Carter"),
    BIRD_KEEPER_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 28,
        .species = SPECIES_PIDGEY,
        },
        {
        .lvl = 28,
        .species = SPECIES_DODUO,
        },
        {
        .lvl = 28,
        .species = SPECIES_PIDGEOTTO,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_BIRD_KEEPER_MITCH] =
{
    .trainerName = _("Mitch"),
    BIRD_KEEPER_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 4,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 26,
        .species = SPECIES_PIDGEY,
        },
        {
        .lvl = 26,
        .species = SPECIES_SPEAROW,
        },
        {
        .lvl = 26,
        .species = SPECIES_PIDGEY,
        },
        {
        .lvl = 26,
        .species = SPECIES_FEAROW,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_BIRD_KEEPER_BECK] =
{
    .trainerName = _("Beck"),
    BIRD_KEEPER_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 29,
        .species = SPECIES_PIDGEOTTO,
        },
        {
        .lvl = 29,
        .species = SPECIES_FEAROW,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_BIRD_KEEPER_MARLON] =
{
    .trainerName = _("Marlon"),
    BIRD_KEEPER_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 28,
        .species = SPECIES_SPEAROW,
        },
        {
        .lvl = 28,
        .species = SPECIES_DODUO,
        },
        {
        .lvl = 28,
        .species = SPECIES_FEAROW,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_BLACK_BELT_KOICHI] =
{
    .trainerName = _("Koichi"),
    BLACK_BELT_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 37,
        .species = SPECIES_HITMONLEE,
        IVS(12),
        .heldItem = ITEM_BLACK_BELT,
        },
        {
        .lvl = 37,
        .species = SPECIES_HITMONCHAN,
        IVS(12),
        .heldItem = ITEM_BLACK_BELT,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_BLACK_BELT_MIKE] =
{
    .trainerName = _("Mike"),
    BLACK_BELT_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 31,
        .species = SPECIES_MANKEY,
        IVS(12),
        .heldItem = ITEM_BLACK_BELT,
        },
        {
        .lvl = 31,
        .species = SPECIES_MANKEY,
        IVS(12),
        .heldItem = ITEM_BLACK_BELT,
        },
        {
        .lvl = 31,
        .species = SPECIES_PRIMEAPE,
        IVS(12),
        .heldItem = ITEM_BLACK_BELT,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_BLACK_BELT_HIDEKI] =
{
    .trainerName = _("Hideki"),
    BLACK_BELT_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 32,
        .species = SPECIES_MACHOP,
        IVS(12),
        .heldItem = ITEM_BLACK_BELT,
        },
        {
        .lvl = 32,
        .species = SPECIES_MACHOKE,
        IVS(12),
        .heldItem = ITEM_BLACK_BELT,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_BLACK_BELT_AARON] =
{
    .trainerName = _("Aaron"),
    BLACK_BELT_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 36,
        .species = SPECIES_PRIMEAPE,
        IVS(12),
        .heldItem = ITEM_BLACK_BELT,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_BLACK_BELT_HITOSHI] =
{
    .trainerName = _("Hitoshi"),
    BLACK_BELT_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 31,
        .species = SPECIES_MACHOP,
        IVS(12),
        .heldItem = ITEM_BLACK_BELT,
        },
        {
        .lvl = 31,
        .species = SPECIES_MANKEY,
        IVS(12),
        .heldItem = ITEM_BLACK_BELT,
        },
        {
        .lvl = 31,
        .species = SPECIES_PRIMEAPE,
        IVS(12),
        .heldItem = ITEM_BLACK_BELT,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_BLACK_BELT_ATSUSHI] =
{
    .trainerName = _("Atsushi"),
    BLACK_BELT_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 40,
        .species = SPECIES_MACHOP,
        IVS(12),
        .heldItem = ITEM_BLACK_BELT,
        },
        {
        .lvl = 40,
        .species = SPECIES_MACHOKE,
        IVS(12),
        .heldItem = ITEM_BLACK_BELT,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_BLACK_BELT_KIYO] =
{
    .trainerName = _("Kiyo"),
    BLACK_BELT_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 43,
        .species = SPECIES_MACHOKE,
        IVS(12),
        .heldItem = ITEM_BLACK_BELT,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_BLACK_BELT_TAKASHI] =
{
    .trainerName = _("Takashi"),
    BLACK_BELT_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 38,
        .species = SPECIES_MACHOKE,
        IVS(12),
        .heldItem = ITEM_BLACK_BELT,
        },
        {
        .lvl = 38,
        .species = SPECIES_MACHOP,
        IVS(12),
        .heldItem = ITEM_BLACK_BELT,
        },
        {
        .lvl = 38,
        .species = SPECIES_MACHOKE,
        IVS(12),
        .heldItem = ITEM_BLACK_BELT,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_BLACK_BELT_DAISUKE] =
{
    .trainerName = _("Daisuke"),
    BLACK_BELT_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 43,
        .species = SPECIES_MACHOKE,
        IVS(12),
        .heldItem = ITEM_BLACK_BELT,
        },
        {
        .lvl = 43,
        .species = SPECIES_MACHOP,
        IVS(12),
        .heldItem = ITEM_BLACK_BELT,
        },
        {
        .lvl = 43,
        .species = SPECIES_MACHOKE,
        IVS(12),
        .heldItem = ITEM_BLACK_BELT,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_SCIENTIST_TED] =
{
    .trainerName = _("Ted"),
    SCIENTIST_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 29,
        .species = SPECIES_ELECTRODE,
        },
        {
        .lvl = 29,
        .species = SPECIES_WEEZING,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_SCIENTIST_CONNOR] =
{
    .trainerName = _("Connor"),
    SCIENTIST_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 4,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 26,
        .species = SPECIES_GRIMER,
        .moves = {MOVE_SCREECH, MOVE_MINIMIZE, MOVE_SLUDGE, MOVE_DISABLE},
        },
        {
        .lvl = 26,
        .species = SPECIES_WEEZING,
        .moves = {MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE},
        },
        {
        .lvl = 26,
        .species = SPECIES_KOFFING,
        .moves = {MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SMOG, MOVE_SELF_DESTRUCT},
        },
        {
        .lvl = 26,
        .species = SPECIES_WEEZING,
        .moves = {MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE},
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_SCIENTIST_JERRY] =
{
    .trainerName = _("Jerry"),
    SCIENTIST_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 28,
        .species = SPECIES_MAGNEMITE,
        },
        {
        .lvl = 28,
        .species = SPECIES_VOLTORB,
        },
        {
        .lvl = 28,
        .species = SPECIES_MAGNETON,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_SCIENTIST_JOSE] =
{
    .trainerName = _("Jose"),
    SCIENTIST_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 29,
        .species = SPECIES_ELECTRODE,
        .moves = {MOVE_SPARK, MOVE_SONIC_BOOM, MOVE_SCREECH, MOVE_TACKLE},
        },
        {
        .lvl = 29,
        .species = SPECIES_WEEZING,
        .moves = {MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE},
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_SCIENTIST_RODNEY] =
{
    .trainerName = _("Rodney"),
    SCIENTIST_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 33,
        .species = SPECIES_ELECTRODE,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_SCIENTIST_BEAU] =
{
    .trainerName = _("Beau"),
    SCIENTIST_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 4,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 26,
        .species = SPECIES_MAGNETON,
        .moves = {MOVE_SPARK, MOVE_THUNDER_WAVE, MOVE_SONIC_BOOM, MOVE_SUPERSONIC},
        },
        {
        .lvl = 26,
        .species = SPECIES_KOFFING,
        .moves = {MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE},
        },
        {
        .lvl = 26,
        .species = SPECIES_WEEZING,
        .moves = {MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE},
        },
        {
        .lvl = 26,
        .species = SPECIES_MAGNEMITE,
        .moves = {MOVE_SPARK, MOVE_THUNDER_WAVE, MOVE_SONIC_BOOM, MOVE_SUPERSONIC},
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_SCIENTIST_TAYLOR] =
{
    .trainerName = _("Taylor"),
    SCIENTIST_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 5,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 25,
        .species = SPECIES_VOLTORB,
        .moves = {MOVE_SPARK, MOVE_SONIC_BOOM, MOVE_SCREECH, MOVE_TACKLE},
        },
        {
        .lvl = 25,
        .species = SPECIES_KOFFING,
        .moves = {MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE},
        },
        {
        .lvl = 25,
        .species = SPECIES_MAGNETON,
        .moves = {MOVE_THUNDER_WAVE, MOVE_SONIC_BOOM, MOVE_SUPERSONIC, MOVE_THUNDER_SHOCK},
        },
        {
        .lvl = 25,
        .species = SPECIES_MAGNEMITE,
        .moves = {MOVE_THUNDER_WAVE, MOVE_SONIC_BOOM, MOVE_SUPERSONIC, MOVE_THUNDER_SHOCK},
        },
        {
        .lvl = 25,
        .species = SPECIES_KOFFING,
        .moves = {MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SMOG, MOVE_SELF_DESTRUCT},
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_SCIENTIST_JOSHUA] =
{
    .trainerName = _("Joshua"),
    SCIENTIST_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 29,
        .species = SPECIES_ELECTRODE,
        },
        {
        .lvl = 29,
        .species = SPECIES_MUK,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_SCIENTIST_PARKER] =
{
    .trainerName = _("Parker"),
    SCIENTIST_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 29,
        .species = SPECIES_GRIMER,
        },
        {
        .lvl = 29,
        .species = SPECIES_ELECTRODE,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_SCIENTIST_ED] =
{
    .trainerName = _("Ed"),
    SCIENTIST_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 28,
        .species = SPECIES_VOLTORB,
        .moves = {MOVE_SPARK, MOVE_SONIC_BOOM, MOVE_SCREECH, MOVE_TACKLE},
        },
        {
        .lvl = 28,
        .species = SPECIES_KOFFING,
        .moves = {MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_TACKLE, MOVE_SMOG},
        },
        {
        .lvl = 28,
        .species = SPECIES_MAGNETON,
        .moves = {MOVE_SPARK, MOVE_THUNDER_WAVE, MOVE_SONIC_BOOM, MOVE_SUPERSONIC},
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_SCIENTIST_TRAVIS] =
{
    .trainerName = _("Travis"),
    SCIENTIST_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 29,
        .species = SPECIES_MAGNEMITE,
        },
        {
        .lvl = 29,
        .species = SPECIES_KOFFING,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_SCIENTIST_BRAYDON] =
{
    .trainerName = _("Braydon"),
    SCIENTIST_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 33,
        .species = SPECIES_MAGNEMITE,
        },
        {
        .lvl = 33,
        .species = SPECIES_MAGNETON,
        },
        {
        .lvl = 33,
        .species = SPECIES_VOLTORB,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_SCIENTIST_IVAN] =
{
    .trainerName = _("Ivan"),
    SCIENTIST_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 34,
        .species = SPECIES_MAGNEMITE,
        },
        {
        .lvl = 34,
        .species = SPECIES_ELECTRODE,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_TEAM_ROCKET_GRUNT] =
{
    .trainerName = _("Grunt"),
    .trainerClass = TRAINER_CLASS_TEAM_ROCKET_FRLG,
    .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M_FRLG,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 13,
        .species = SPECIES_RATTATA,
        },
        {
        .lvl = 13,
        .species = SPECIES_ZUBAT,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_TEAM_ROCKET_GRUNT_2] =
{
    .trainerName = _("Grunt"),
    .trainerClass = TRAINER_CLASS_TEAM_ROCKET_FRLG,
    .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M_FRLG,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 11,
        .species = SPECIES_SANDSHREW,
        },
        {
        .lvl = 11,
        .species = SPECIES_RATTATA,
        },
        {
        .lvl = 11,
        .species = SPECIES_ZUBAT,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_TEAM_ROCKET_GRUNT_3] =
{
    .trainerName = _("Grunt"),
    .trainerClass = TRAINER_CLASS_TEAM_ROCKET_FRLG,
    .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M_FRLG,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 11,
        .species = SPECIES_ZUBAT,
        },
        {
        .lvl = 11,
        .species = SPECIES_EKANS,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_TEAM_ROCKET_GRUNT_4] =
{
    .trainerName = _("Grunt"),
    .trainerClass = TRAINER_CLASS_TEAM_ROCKET_FRLG,
    .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M_FRLG,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 13,
        .species = SPECIES_RATTATA,
        },
        {
        .lvl = 13,
        .species = SPECIES_SANDSHREW,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_TEAM_ROCKET_GRUNT_5] =
{
    .trainerName = _("Grunt"),
    .trainerClass = TRAINER_CLASS_TEAM_ROCKET_FRLG,
    .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M_FRLG,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 17,
        .species = SPECIES_MACHOP,
        },
        {
        .lvl = 17,
        .species = SPECIES_DROWZEE,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_TEAM_ROCKET_GRUNT_6] =
{
    .trainerName = _("Grunt"),
    .trainerClass = TRAINER_CLASS_TEAM_ROCKET_FRLG,
    .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M_FRLG,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 15,
        .species = SPECIES_EKANS,
        },
        {
        .lvl = 15,
        .species = SPECIES_ZUBAT,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_TEAM_ROCKET_GRUNT_7] =
{
    .trainerName = _("Grunt"),
    .trainerClass = TRAINER_CLASS_TEAM_ROCKET_FRLG,
    .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M_FRLG,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 20,
        .species = SPECIES_RATICATE,
        },
        {
        .lvl = 20,
        .species = SPECIES_ZUBAT,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_TEAM_ROCKET_GRUNT_8] =
{
    .trainerName = _("Grunt"),
    .trainerClass = TRAINER_CLASS_TEAM_ROCKET_FRLG,
    .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M_FRLG,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 21,
        .species = SPECIES_DROWZEE,
        },
        {
        .lvl = 21,
        .species = SPECIES_MACHOP,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_TEAM_ROCKET_GRUNT_9] =
{
    .trainerName = _("Grunt"),
    .trainerClass = TRAINER_CLASS_TEAM_ROCKET_FRLG,
    .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M_FRLG,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 21,
        .species = SPECIES_RATICATE,
        },
        {
        .lvl = 21,
        .species = SPECIES_RATICATE,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_TEAM_ROCKET_GRUNT_10] =
{
    .trainerName = _("Grunt"),
    .trainerClass = TRAINER_CLASS_TEAM_ROCKET_FRLG,
    .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M_FRLG,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 20,
        .species = SPECIES_GRIMER,
        .moves = {MOVE_MINIMIZE, MOVE_SLUDGE, MOVE_DISABLE, MOVE_HARDEN},
        },
        {
        .lvl = 20,
        .species = SPECIES_KOFFING,
        .moves = {MOVE_SMOG, MOVE_TACKLE, MOVE_POISON_GAS, MOVE_NONE},
        },
        {
        .lvl = 20,
        .species = SPECIES_KOFFING,
        .moves = {MOVE_SMOG, MOVE_TACKLE, MOVE_POISON_GAS, MOVE_NONE},
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_TEAM_ROCKET_GRUNT_11] =
{
    .trainerName = _("Grunt"),
    .trainerClass = TRAINER_CLASS_TEAM_ROCKET_FRLG,
    .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M_FRLG,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 4,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 19,
        .species = SPECIES_RATTATA,
        },
        {
        .lvl = 19,
        .species = SPECIES_RATICATE,
        },
        {
        .lvl = 19,
        .species = SPECIES_RATICATE,
        },
        {
        .lvl = 19,
        .species = SPECIES_RATTATA,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_TEAM_ROCKET_GRUNT_12] =
{
    .trainerName = _("Grunt"),
    .trainerClass = TRAINER_CLASS_TEAM_ROCKET_FRLG,
    .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M_FRLG,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 22,
        .species = SPECIES_GRIMER,
        .moves = {MOVE_MINIMIZE, MOVE_SLUDGE, MOVE_DISABLE, MOVE_HARDEN},
        },
        {
        .lvl = 22,
        .species = SPECIES_KOFFING,
        .moves = {MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE, MOVE_POISON_GAS},
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_TEAM_ROCKET_GRUNT_13] =
{
    .trainerName = _("Grunt"),
    .trainerClass = TRAINER_CLASS_TEAM_ROCKET_FRLG,
    .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M_FRLG,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 5,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 17,
        .species = SPECIES_ZUBAT,
        .moves = {MOVE_BITE, MOVE_ASTONISH, MOVE_SUPERSONIC, MOVE_LEECH_LIFE},
        },
        {
        .lvl = 17,
        .species = SPECIES_KOFFING,
        .moves = {MOVE_SMOG, MOVE_TACKLE, MOVE_POISON_GAS, MOVE_NONE},
        },
        {
        .lvl = 17,
        .species = SPECIES_GRIMER,
        .moves = {MOVE_SLUDGE, MOVE_DISABLE, MOVE_HARDEN, MOVE_POUND},
        },
        {
        .lvl = 17,
        .species = SPECIES_ZUBAT,
        .moves = {MOVE_BITE, MOVE_ASTONISH, MOVE_SUPERSONIC, MOVE_LEECH_LIFE},
        },
        {
        .lvl = 17,
        .species = SPECIES_RATICATE,
        .moves = {MOVE_HYPER_FANG, MOVE_QUICK_ATTACK, MOVE_TAIL_WHIP, MOVE_TACKLE},
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_TEAM_ROCKET_GRUNT_14] =
{
    .trainerName = _("Grunt"),
    .trainerClass = TRAINER_CLASS_TEAM_ROCKET_FRLG,
    .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M_FRLG,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 20,
        .species = SPECIES_RATTATA,
        },
        {
        .lvl = 20,
        .species = SPECIES_RATICATE,
        },
        {
        .lvl = 20,
        .species = SPECIES_DROWZEE,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_TEAM_ROCKET_GRUNT_15] =
{
    .trainerName = _("Grunt"),
    .trainerClass = TRAINER_CLASS_TEAM_ROCKET_FRLG,
    .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M_FRLG,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 21,
        .species = SPECIES_MACHOP,
        },
        {
        .lvl = 21,
        .species = SPECIES_MACHOP,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_TEAM_ROCKET_GRUNT_16] =
{
    .trainerName = _("Grunt"),
    .trainerClass = TRAINER_CLASS_TEAM_ROCKET_FRLG,
    .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M_FRLG,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 23,
        .species = SPECIES_SANDSHREW,
        },
        {
        .lvl = 23,
        .species = SPECIES_EKANS,
        },
        {
        .lvl = 23,
        .species = SPECIES_SANDSLASH,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_TEAM_ROCKET_GRUNT_17] =
{
    .trainerName = _("Grunt"),
    .trainerClass = TRAINER_CLASS_TEAM_ROCKET_FRLG,
    .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M_FRLG,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 23,
        .species = SPECIES_EKANS,
        },
        {
        .lvl = 23,
        .species = SPECIES_SANDSHREW,
        },
        {
        .lvl = 23,
        .species = SPECIES_ARBOK,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_TEAM_ROCKET_GRUNT_18] =
{
    .trainerName = _("Grunt"),
    .trainerClass = TRAINER_CLASS_TEAM_ROCKET_FRLG,
    .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M_FRLG,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 21,
        .species = SPECIES_KOFFING,
        },
        {
        .lvl = 21,
        .species = SPECIES_ZUBAT,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_TEAM_ROCKET_GRUNT_19] =
{
    .trainerName = _("Grunt"),
    .trainerClass = TRAINER_CLASS_TEAM_ROCKET_FRLG,
    .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M_FRLG,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 25,
        .species = SPECIES_ZUBAT,
        },
        {
        .lvl = 25,
        .species = SPECIES_ZUBAT,
        },
        {
        .lvl = 25,
        .species = SPECIES_GOLBAT,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_TEAM_ROCKET_GRUNT_20] =
{
    .trainerName = _("Grunt"),
    .trainerClass = TRAINER_CLASS_TEAM_ROCKET_FRLG,
    .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M_FRLG,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 26,
        .species = SPECIES_KOFFING,
        },
        {
        .lvl = 26,
        .species = SPECIES_DROWZEE,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_TEAM_ROCKET_GRUNT_21] =
{
    .trainerName = _("Grunt"),
    .trainerClass = TRAINER_CLASS_TEAM_ROCKET_FRLG,
    .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M_FRLG,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 4,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 23,
        .species = SPECIES_ZUBAT,
        },
        {
        .lvl = 23,
        .species = SPECIES_RATTATA,
        },
        {
        .lvl = 23,
        .species = SPECIES_RATICATE,
        },
        {
        .lvl = 23,
        .species = SPECIES_ZUBAT,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_TEAM_ROCKET_GRUNT_22] =
{
    .trainerName = _("Grunt"),
    .trainerClass = TRAINER_CLASS_TEAM_ROCKET_FRLG,
    .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M_FRLG,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 26,
        .species = SPECIES_DROWZEE,
        },
        {
        .lvl = 26,
        .species = SPECIES_KOFFING,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_TEAM_ROCKET_GRUNT_23] =
{
    .trainerName = _("Grunt"),
    .trainerClass = TRAINER_CLASS_TEAM_ROCKET_FRLG,
    .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M_FRLG,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 29,
        .species = SPECIES_CUBONE,
        },
        {
        .lvl = 29,
        .species = SPECIES_ZUBAT,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_TEAM_ROCKET_GRUNT_24] =
{
    .trainerName = _("Grunt"),
    .trainerClass = TRAINER_CLASS_TEAM_ROCKET_FRLG,
    .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M_FRLG,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 5,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 25,
        .species = SPECIES_GOLBAT,
        },
        {
        .lvl = 25,
        .species = SPECIES_ZUBAT,
        },
        {
        .lvl = 25,
        .species = SPECIES_ZUBAT,
        },
        {
        .lvl = 25,
        .species = SPECIES_RATICATE,
        },
        {
        .lvl = 25,
        .species = SPECIES_ZUBAT,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_TEAM_ROCKET_GRUNT_25] =
{
    .trainerName = _("Grunt"),
    .trainerClass = TRAINER_CLASS_TEAM_ROCKET_FRLG,
    .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M_FRLG,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 28,
        .species = SPECIES_RATICATE,
        },
        {
        .lvl = 28,
        .species = SPECIES_HYPNO,
        },
        {
        .lvl = 28,
        .species = SPECIES_RATICATE,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_TEAM_ROCKET_GRUNT_26] =
{
    .trainerName = _("Grunt"),
    .trainerClass = TRAINER_CLASS_TEAM_ROCKET_FRLG,
    .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M_FRLG,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 29,
        .species = SPECIES_MACHOP,
        },
        {
        .lvl = 29,
        .species = SPECIES_DROWZEE,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_TEAM_ROCKET_GRUNT_27] =
{
    .trainerName = _("Grunt"),
    .trainerClass = TRAINER_CLASS_TEAM_ROCKET_FRLG,
    .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M_FRLG,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 28,
        .species = SPECIES_EKANS,
        },
        {
        .lvl = 28,
        .species = SPECIES_ZUBAT,
        },
        {
        .lvl = 28,
        .species = SPECIES_CUBONE,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_TEAM_ROCKET_GRUNT_28] =
{
    .trainerName = _("Grunt"),
    .trainerClass = TRAINER_CLASS_TEAM_ROCKET_FRLG,
    .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M_FRLG,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 33,
        .species = SPECIES_ARBOK,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_TEAM_ROCKET_GRUNT_29] =
{
    .trainerName = _("Grunt"),
    .trainerClass = TRAINER_CLASS_TEAM_ROCKET_FRLG,
    .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M_FRLG,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 33,
        .species = SPECIES_HYPNO,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_TEAM_ROCKET_GRUNT_30] =
{
    .trainerName = _("Grunt"),
    .trainerClass = TRAINER_CLASS_TEAM_ROCKET_FRLG,
    .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M_FRLG,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 29,
        .species = SPECIES_MACHOP,
        },
        {
        .lvl = 29,
        .species = SPECIES_MACHOKE,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_TEAM_ROCKET_GRUNT_31] =
{
    .trainerName = _("Grunt"),
    .trainerClass = TRAINER_CLASS_TEAM_ROCKET_FRLG,
    .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M_FRLG,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 28,
        .species = SPECIES_ZUBAT,
        },
        {
        .lvl = 28,
        .species = SPECIES_ZUBAT,
        },
        {
        .lvl = 28,
        .species = SPECIES_GOLBAT,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_TEAM_ROCKET_GRUNT_32] =
{
    .trainerName = _("Grunt"),
    .trainerClass = TRAINER_CLASS_TEAM_ROCKET_FRLG,
    .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M_FRLG,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 4,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 26,
        .species = SPECIES_RATICATE,
        .moves = {MOVE_SCARY_FACE, MOVE_HYPER_FANG, MOVE_QUICK_ATTACK, MOVE_TAIL_WHIP},
        },
        {
        .lvl = 26,
        .species = SPECIES_ARBOK,
        .moves = {MOVE_GLARE, MOVE_BITE, MOVE_POISON_STING, MOVE_LEER},
        },
        {
        .lvl = 26,
        .species = SPECIES_KOFFING,
        .moves = {MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE},
        },
        {
        .lvl = 26,
        .species = SPECIES_GOLBAT,
        .moves = {MOVE_WING_ATTACK, MOVE_BITE, MOVE_ASTONISH, MOVE_SUPERSONIC},
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_TEAM_ROCKET_GRUNT_33] =
{
    .trainerName = _("Grunt"),
    .trainerClass = TRAINER_CLASS_TEAM_ROCKET_FRLG,
    .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M_FRLG,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 29,
        .species = SPECIES_CUBONE,
        },
        {
        .lvl = 29,
        .species = SPECIES_CUBONE,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_TEAM_ROCKET_GRUNT_34] =
{
    .trainerName = _("Grunt"),
    .trainerClass = TRAINER_CLASS_TEAM_ROCKET_FRLG,
    .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M_FRLG,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 29,
        .species = SPECIES_SANDSHREW,
        },
        {
        .lvl = 29,
        .species = SPECIES_SANDSLASH,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_TEAM_ROCKET_GRUNT_35] =
{
    .trainerName = _("Grunt"),
    .trainerClass = TRAINER_CLASS_TEAM_ROCKET_FRLG,
    .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M_FRLG,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 4,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 26,
        .species = SPECIES_RATICATE,
        },
        {
        .lvl = 26,
        .species = SPECIES_ZUBAT,
        },
        {
        .lvl = 26,
        .species = SPECIES_GOLBAT,
        },
        {
        .lvl = 26,
        .species = SPECIES_RATTATA,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_TEAM_ROCKET_GRUNT_36] =
{
    .trainerName = _("Grunt"),
    .trainerClass = TRAINER_CLASS_TEAM_ROCKET_FRLG,
    .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M_FRLG,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 28,
        .species = SPECIES_WEEZING,
        },
        {
        .lvl = 28,
        .species = SPECIES_GOLBAT,
        },
        {
        .lvl = 28,
        .species = SPECIES_KOFFING,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_TEAM_ROCKET_GRUNT_37] =
{
    .trainerName = _("Grunt"),
    .trainerClass = TRAINER_CLASS_TEAM_ROCKET_FRLG,
    .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M_FRLG,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 28,
        .species = SPECIES_DROWZEE,
        },
        {
        .lvl = 28,
        .species = SPECIES_GRIMER,
        },
        {
        .lvl = 28,
        .species = SPECIES_MACHOP,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_TEAM_ROCKET_GRUNT_38] =
{
    .trainerName = _("Grunt"),
    .trainerClass = TRAINER_CLASS_TEAM_ROCKET_FRLG,
    .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M_FRLG,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 28,
        .species = SPECIES_GOLBAT,
        },
        {
        .lvl = 28,
        .species = SPECIES_DROWZEE,
        },
        {
        .lvl = 28,
        .species = SPECIES_HYPNO,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_TEAM_ROCKET_GRUNT_39] =
{
    .trainerName = _("Grunt"),
    .trainerClass = TRAINER_CLASS_TEAM_ROCKET_FRLG,
    .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M_FRLG,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 33,
        .species = SPECIES_MACHOKE,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_TEAM_ROCKET_GRUNT_40] =
{
    .trainerName = _("Grunt"),
    .trainerClass = TRAINER_CLASS_TEAM_ROCKET_FRLG,
    .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M_FRLG,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 5,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 25,
        .species = SPECIES_RATTATA,
        },
        {
        .lvl = 25,
        .species = SPECIES_RATTATA,
        },
        {
        .lvl = 25,
        .species = SPECIES_ZUBAT,
        },
        {
        .lvl = 25,
        .species = SPECIES_RATTATA,
        },
        {
        .lvl = 25,
        .species = SPECIES_EKANS,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_TEAM_ROCKET_GRUNT_41] =
{
    .trainerName = _("Grunt"),
    .trainerClass = TRAINER_CLASS_TEAM_ROCKET_FRLG,
    .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M_FRLG,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 32,
        .species = SPECIES_CUBONE,
        },
        {
        .lvl = 32,
        .species = SPECIES_DROWZEE,
        },
        {
        .lvl = 32,
        .species = SPECIES_MAROWAK,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_COOLTRAINER_SAMUEL] =
{
    .trainerName = _("Samuel"),
    .trainerClass = TRAINER_CLASS_COOLTRAINER_FRLG,
    .trainerPic = TRAINER_PIC_COOLTRAINER_M_FRLG,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
    .items = {ITEM_SUPER_POTION},
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .partySize = 5,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 37,
        .species = SPECIES_SANDSLASH,
        IVS(12),
        .moves = {MOVE_SLASH, MOVE_SWIFT, MOVE_SAND_ATTACK, MOVE_POISON_STING},
        },
        {
        .lvl = 37,
        .species = SPECIES_SANDSLASH,
        IVS(12),
        .moves = {MOVE_SLASH, MOVE_SWIFT, MOVE_SAND_ATTACK, MOVE_POISON_STING},
        },
        {
        .lvl = 38,
        .species = SPECIES_RHYHORN,
        IVS(12),
        .moves = {MOVE_TAKE_DOWN, MOVE_ROCK_BLAST, MOVE_FURY_ATTACK, MOVE_SCARY_FACE},
        },
        {
        .lvl = 39,
        .species = SPECIES_NIDORINO,
        IVS(12),
        .moves = {MOVE_FURY_ATTACK, MOVE_HORN_ATTACK, MOVE_POISON_STING, MOVE_DOUBLE_KICK},
        },
        {
        .lvl = 39,
        .species = SPECIES_NIDOKING,
        IVS(12),
        .moves = {MOVE_THRASH, MOVE_DOUBLE_KICK, MOVE_POISON_STING, MOVE_FOCUS_ENERGY},
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_COOLTRAINER_GEORGE] =
{
    .trainerName = _("George"),
    .trainerClass = TRAINER_CLASS_COOLTRAINER_FRLG,
    .trainerPic = TRAINER_PIC_COOLTRAINER_M_FRLG,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
    .items = {ITEM_HYPER_POTION},
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .partySize = 5,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 42,
        .species = SPECIES_EXEGGUTOR,
        IVS(12),
        .moves = {MOVE_EGG_BOMB, MOVE_CONFUSION, MOVE_STUN_SPORE, MOVE_SLEEP_POWDER},
        },
        {
        .lvl = 42,
        .species = SPECIES_SANDSLASH,
        IVS(12),
        .moves = {MOVE_FURY_SWIPES, MOVE_SWIFT, MOVE_POISON_STING, MOVE_SAND_ATTACK},
        },
        {
        .lvl = 42,
        .species = SPECIES_CLOYSTER,
        IVS(12),
        .moves = {MOVE_SPIKE_CANNON, MOVE_SPIKES, MOVE_AURORA_BEAM, MOVE_SUPERSONIC},
        },
        {
        .lvl = 42,
        .species = SPECIES_ELECTRODE,
        IVS(12),
        .moves = {MOVE_SPARK, MOVE_SONIC_BOOM, MOVE_SCREECH, MOVE_LIGHT_SCREEN},
        },
        {
        .lvl = 42,
        .species = SPECIES_ARCANINE,
        IVS(12),
        .moves = {MOVE_FLAME_WHEEL, MOVE_ROAR, MOVE_BITE, MOVE_TAKE_DOWN},
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_COOLTRAINER_COLBY] =
{
    .trainerName = _("Colby"),
    .trainerClass = TRAINER_CLASS_COOLTRAINER_FRLG,
    .trainerPic = TRAINER_PIC_COOLTRAINER_M_FRLG,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
    .items = {ITEM_HYPER_POTION},
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .partySize = 5,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 41,
        .species = SPECIES_KINGLER,
        IVS(12),
        .moves = {MOVE_GUILLOTINE, MOVE_STOMP, MOVE_MUD_SHOT, MOVE_BUBBLE},
        },
        {
        .lvl = 42,
        .species = SPECIES_POLIWHIRL,
        IVS(12),
        .moves = {MOVE_BODY_SLAM, MOVE_DOUBLE_SLAP, MOVE_WATER_GUN, MOVE_HYPNOSIS},
        },
        {
        .lvl = 42,
        .species = SPECIES_TENTACRUEL,
        IVS(12),
        .moves = {MOVE_BARRIER, MOVE_WRAP, MOVE_BUBBLE_BEAM, MOVE_ACID},
        },
        {
        .lvl = 42,
        .species = SPECIES_SEADRA,
        IVS(12),
        .moves = {MOVE_WATER_GUN, MOVE_SMOKESCREEN, MOVE_TWISTER, MOVE_LEER},
        },
        {
        .lvl = 43,
        .species = SPECIES_BLASTOISE,
        IVS(12),
        .moves = {MOVE_WATER_GUN, MOVE_BITE, MOVE_RAPID_SPIN, MOVE_RAIN_DANCE},
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_COOLTRAINER_PAUL] =
{
    .trainerName = _("Paul"),
    .trainerClass = TRAINER_CLASS_COOLTRAINER_FRLG,
    .trainerPic = TRAINER_PIC_COOLTRAINER_M_FRLG,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
    .items = {ITEM_FULL_RESTORE},
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .partySize = 5,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 42,
        .species = SPECIES_SLOWPOKE,
        IVS(12),
        .moves = {MOVE_HEADBUTT, MOVE_CONFUSION, MOVE_WATER_GUN, MOVE_DISABLE},
        },
        {
        .lvl = 42,
        .species = SPECIES_SHELLDER,
        IVS(12),
        .moves = {MOVE_AURORA_BEAM, MOVE_CLAMP, MOVE_SUPERSONIC, MOVE_LEER},
        },
        {
        .lvl = 42,
        .species = SPECIES_KINGLER,
        IVS(12),
        .moves = {MOVE_GUILLOTINE, MOVE_STOMP, MOVE_MUD_SHOT, MOVE_BUBBLE},
        },
        {
        .lvl = 42,
        .species = SPECIES_STARMIE,
        IVS(12),
        .moves = {MOVE_BUBBLE_BEAM, MOVE_SWIFT, MOVE_RECOVER, MOVE_RAPID_SPIN},
        },
        {
        .lvl = 42,
        .species = SPECIES_GOLDUCK,
        IVS(12),
        .moves = {MOVE_CONFUSION, MOVE_SCRATCH, MOVE_SCREECH, MOVE_DISABLE},
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_COOLTRAINER_ROLANDO] =
{
    .trainerName = _("Rolando"),
    .trainerClass = TRAINER_CLASS_COOLTRAINER_FRLG,
    .trainerPic = TRAINER_PIC_COOLTRAINER_M_FRLG,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
    .items = {ITEM_HYPER_POTION},
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .partySize = 5,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 42,
        .species = SPECIES_RATICATE,
        IVS(12),
        .moves = {MOVE_SUPER_FANG, MOVE_PURSUIT, MOVE_SCARY_FACE, MOVE_QUICK_ATTACK},
        },
        {
        .lvl = 42,
        .species = SPECIES_IVYSAUR,
        IVS(12),
        .moves = {MOVE_RAZOR_LEAF, MOVE_SLEEP_POWDER, MOVE_SWEET_SCENT, MOVE_SYNTHESIS},
        },
        {
        .lvl = 42,
        .species = SPECIES_WARTORTLE,
        IVS(12),
        .moves = {MOVE_WATER_GUN, MOVE_BITE, MOVE_RAPID_SPIN, MOVE_TAIL_WHIP},
        },
        {
        .lvl = 42,
        .species = SPECIES_CHARMELEON,
        IVS(12),
        .moves = {MOVE_FLAMETHROWER, MOVE_SLASH, MOVE_SMOKESCREEN, MOVE_SCARY_FACE},
        },
        {
        .lvl = 42,
        .species = SPECIES_CHARIZARD,
        IVS(12),
        .moves = {MOVE_FLAMETHROWER, MOVE_WING_ATTACK, MOVE_SMOKESCREEN, MOVE_SCARY_FACE},
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_COOLTRAINER_GILBERT] =
{
    .trainerName = _("Gilbert"),
    .trainerClass = TRAINER_CLASS_COOLTRAINER_FRLG,
    .trainerPic = TRAINER_PIC_COOLTRAINER_M_FRLG,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
    .items = {ITEM_HYPER_POTION},
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .partySize = 5,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 42,
        .species = SPECIES_PIDGEOTTO,
        IVS(12),
        .moves = {MOVE_WING_ATTACK, MOVE_FEATHER_DANCE, MOVE_WHIRLWIND, MOVE_QUICK_ATTACK},
        },
        {
        .lvl = 42,
        .species = SPECIES_FEAROW,
        IVS(12),
        .moves = {MOVE_DRILL_PECK, MOVE_MIRROR_MOVE, MOVE_PURSUIT, MOVE_LEER},
        },
        {
        .lvl = 42,
        .species = SPECIES_PERSIAN,
        IVS(12),
        .moves = {MOVE_PAY_DAY, MOVE_FAINT_ATTACK, MOVE_SCREECH, MOVE_BITE},
        },
        {
        .lvl = 42,
        .species = SPECIES_LICKITUNG,
        IVS(12),
        .moves = {MOVE_SLAM, MOVE_DISABLE, MOVE_WRAP, MOVE_SUPERSONIC},
        },
        {
        .lvl = 42,
        .species = SPECIES_TAUROS,
        IVS(12),
        .moves = {MOVE_HORN_ATTACK, MOVE_SCARY_FACE, MOVE_SWAGGER, MOVE_TAIL_WHIP},
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_COOLTRAINER_OWEN] =
{
    .trainerName = _("Owen"),
    .trainerClass = TRAINER_CLASS_COOLTRAINER_FRLG,
    .trainerPic = TRAINER_PIC_COOLTRAINER_M_FRLG,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
    .items = {ITEM_HYPER_POTION},
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .partySize = 5,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 42,
        .species = SPECIES_NIDORINO,
        IVS(12),
        .moves = {MOVE_SCRATCH, MOVE_POISON_STING, MOVE_DOUBLE_KICK, MOVE_BITE},
        },
        {
        .lvl = 42,
        .species = SPECIES_NIDORINA,
        IVS(12),
        .moves = {MOVE_HORN_ATTACK, MOVE_POISON_STING, MOVE_DOUBLE_KICK, MOVE_LEER},
        },
        {
        .lvl = 42,
        .species = SPECIES_RATICATE,
        IVS(12),
        .moves = {MOVE_SUPER_FANG, MOVE_PURSUIT, MOVE_SCARY_FACE, MOVE_QUICK_ATTACK},
        },
        {
        .lvl = 42,
        .species = SPECIES_SANDSLASH,
        IVS(12),
        .moves = {MOVE_FURY_SWIPES, MOVE_SWIFT, MOVE_SLASH, MOVE_POISON_STING},
        },
        {
        .lvl = 42,
        .species = SPECIES_RHYHORN,
        IVS(12),
        .moves = {MOVE_ROCK_BLAST, MOVE_SCARY_FACE, MOVE_STOMP, MOVE_TAIL_WHIP},
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_COOLTRAINER_BERKE] =
{
    .trainerName = _("Berke"),
    .trainerClass = TRAINER_CLASS_COOLTRAINER_FRLG,
    .trainerPic = TRAINER_PIC_COOLTRAINER_M_FRLG,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
    .items = {ITEM_FULL_RESTORE},
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .partySize = 5,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 42,
        .species = SPECIES_SEEL,
        IVS(12),
        .moves = {MOVE_TAKE_DOWN, MOVE_AURORA_BEAM, MOVE_ICY_WIND, MOVE_GROWL},
        },
        {
        .lvl = 42,
        .species = SPECIES_GRAVELER,
        IVS(12),
        .moves = {MOVE_ROCK_BLAST, MOVE_MAGNITUDE, MOVE_ROCK_THROW, MOVE_MUD_SPORT},
        },
        {
        .lvl = 42,
        .species = SPECIES_KINGLER,
        IVS(12),
        .moves = {MOVE_GUILLOTINE, MOVE_STOMP, MOVE_MUD_SHOT, MOVE_BUBBLE},
        },
        {
        .lvl = 42,
        .species = SPECIES_ONIX,
        IVS(12),
        .moves = {MOVE_SLAM, MOVE_SANDSTORM, MOVE_DRAGON_BREATH, MOVE_ROCK_THROW},
        },
        {
        .lvl = 42,
        .species = SPECIES_CLOYSTER,
        IVS(12),
        .moves = {MOVE_SPIKE_CANNON, MOVE_AURORA_BEAM, MOVE_SUPERSONIC, MOVE_PROTECT},
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_COOLTRAINER_YUJI] =
{
    .trainerName = _("Yuji"),
    .trainerClass = TRAINER_CLASS_COOLTRAINER_FRLG,
    .trainerPic = TRAINER_PIC_COOLTRAINER_M_FRLG,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
    .items = {ITEM_HYPER_POTION},
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .partySize = 5,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 38,
        .species = SPECIES_SANDSLASH,
        IVS(12),
        .moves = {MOVE_SLASH, MOVE_SWIFT, MOVE_SAND_ATTACK, MOVE_POISON_STING},
        },
        {
        .lvl = 38,
        .species = SPECIES_GRAVELER,
        IVS(12),
        .moves = {MOVE_ROCK_BLAST, MOVE_MAGNITUDE, MOVE_MUD_SPORT, MOVE_DEFENSE_CURL},
        },
        {
        .lvl = 38,
        .species = SPECIES_ONIX,
        IVS(12),
        .moves = {MOVE_DRAGON_BREATH, MOVE_SANDSTORM, MOVE_ROCK_THROW, MOVE_BIND},
        },
        {
        .lvl = 38,
        .species = SPECIES_GRAVELER,
        IVS(12),
        .moves = {MOVE_ROCK_BLAST, MOVE_MAGNITUDE, MOVE_ROLLOUT, MOVE_DEFENSE_CURL},
        },
        {
        .lvl = 38,
        .species = SPECIES_MAROWAK,
        IVS(12),
        .moves = {MOVE_BONEMERANG, MOVE_HEADBUTT, MOVE_LEER, MOVE_GROWL},
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_COOLTRAINER_WARREN] =
{
    .trainerName = _("Warren"),
    .trainerClass = TRAINER_CLASS_COOLTRAINER_FRLG,
    .trainerPic = TRAINER_PIC_COOLTRAINER_M_FRLG,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
    .items = {ITEM_HYPER_POTION},
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .partySize = 5,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 37,
        .species = SPECIES_MAROWAK,
        IVS(12),
        .moves = {MOVE_BONEMERANG, MOVE_HEADBUTT, MOVE_LEER, MOVE_GROWL},
        },
        {
        .lvl = 37,
        .species = SPECIES_MAROWAK,
        IVS(12),
        .moves = {MOVE_BONEMERANG, MOVE_HEADBUTT, MOVE_LEER, MOVE_GROWL},
        },
        {
        .lvl = 38,
        .species = SPECIES_RHYHORN,
        IVS(12),
        .moves = {MOVE_TAKE_DOWN, MOVE_ROCK_BLAST, MOVE_FURY_ATTACK, MOVE_SCARY_FACE},
        },
        {
        .lvl = 39,
        .species = SPECIES_NIDORINA,
        IVS(12),
        .moves = {MOVE_FURY_SWIPES, MOVE_BITE, MOVE_POISON_STING, MOVE_DOUBLE_KICK},
        },
        {
        .lvl = 39,
        .species = SPECIES_NIDOQUEEN,
        IVS(12),
        .moves = {MOVE_BODY_SLAM, MOVE_BITE, MOVE_POISON_STING, MOVE_DOUBLE_KICK},
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_COOLTRAINER_MARY] =
{
    .trainerName = _("Mary"),
    .trainerClass = TRAINER_CLASS_COOLTRAINER_FRLG,
    .trainerPic = TRAINER_PIC_COOLTRAINER_F_FRLG,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
    .items = {ITEM_SUPER_POTION},
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .partySize = 5,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 22,
        .species = SPECIES_BELLSPROUT,
        IVS(12),
        .moves = {MOVE_WRAP, MOVE_STUN_SPORE, MOVE_POISON_POWDER, MOVE_GROWTH},
        },
        {
        .lvl = 22,
        .species = SPECIES_ODDISH,
        IVS(12),
        .moves = {MOVE_POISON_POWDER, MOVE_STUN_SPORE, MOVE_ABSORB, MOVE_SWEET_SCENT},
        },
        {
        .lvl = 22,
        .species = SPECIES_WEEPINBELL,
        IVS(12),
        .moves = {MOVE_VINE_WHIP, MOVE_STUN_SPORE, MOVE_POISON_POWDER, MOVE_GROWTH},
        },
        {
        .lvl = 22,
        .species = SPECIES_GLOOM,
        IVS(12),
        .moves = {MOVE_ABSORB, MOVE_STUN_SPORE, MOVE_POISON_POWDER, MOVE_SWEET_SCENT},
        },
        {
        .lvl = 22,
        .species = SPECIES_IVYSAUR,
        IVS(12),
        .moves = {MOVE_RAZOR_LEAF, MOVE_SLEEP_POWDER, MOVE_VINE_WHIP, MOVE_LEECH_SEED},
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_COOLTRAINER_CAROLINE] =
{
    .trainerName = _("Caroline"),
    .trainerClass = TRAINER_CLASS_COOLTRAINER_FRLG,
    .trainerPic = TRAINER_PIC_COOLTRAINER_F_FRLG,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
    .items = {ITEM_HYPER_POTION},
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .partySize = 5,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 42,
        .species = SPECIES_BELLSPROUT,
        IVS(12),
        .moves = {MOVE_RAZOR_LEAF, MOVE_ACID, MOVE_STUN_SPORE, MOVE_POISON_POWDER},
        },
        {
        .lvl = 42,
        .species = SPECIES_WEEPINBELL,
        IVS(12),
        .moves = {MOVE_RAZOR_LEAF, MOVE_ACID, MOVE_SLEEP_POWDER, MOVE_POISON_POWDER},
        },
        {
        .lvl = 42,
        .species = SPECIES_VICTREEBEL,
        IVS(12),
        .moves = {MOVE_RAZOR_LEAF, MOVE_ACID, MOVE_STUN_SPORE, MOVE_SLEEP_POWDER},
        },
        {
        .lvl = 42,
        .species = SPECIES_PARAS,
        IVS(12),
        .moves = {MOVE_GROWTH, MOVE_SLASH, MOVE_LEECH_LIFE, MOVE_STUN_SPORE},
        },
        {
        .lvl = 42,
        .species = SPECIES_PARASECT,
        IVS(12),
        .moves = {MOVE_SPORE, MOVE_SLASH, MOVE_LEECH_LIFE, MOVE_POISON_POWDER},
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_COOLTRAINER_ALEXA] =
{
    .trainerName = _("Alexa"),
    .trainerClass = TRAINER_CLASS_COOLTRAINER_FRLG,
    .trainerPic = TRAINER_PIC_COOLTRAINER_F_FRLG,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
    .items = {ITEM_FULL_RESTORE},
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .partySize = 5,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 42,
        .species = SPECIES_CLEFAIRY,
        IVS(12),
        .moves = {MOVE_LIGHT_SCREEN, MOVE_COSMIC_POWER, MOVE_DOUBLE_SLAP, MOVE_ENCORE},
        },
        {
        .lvl = 42,
        .species = SPECIES_JIGGLYPUFF,
        IVS(12),
        .moves = {MOVE_SING, MOVE_BODY_SLAM, MOVE_ROLLOUT, MOVE_DISABLE},
        },
        {
        .lvl = 42,
        .species = SPECIES_PERSIAN,
        IVS(12),
        .moves = {MOVE_PAY_DAY, MOVE_FAINT_ATTACK, MOVE_BITE, MOVE_SCREECH},
        },
        {
        .lvl = 42,
        .species = SPECIES_DEWGONG,
        IVS(12),
        .moves = {MOVE_SHEER_COLD, MOVE_TAKE_DOWN, MOVE_REST, MOVE_AURORA_BEAM},
        },
        {
        .lvl = 42,
        .species = SPECIES_CHANSEY,
        IVS(12),
        .moves = {MOVE_SING, MOVE_EGG_BOMB, MOVE_SOFT_BOILED, MOVE_MINIMIZE},
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_COOLTRAINER_SHANNON] =
{
    .trainerName = _("Shannon"),
    .trainerClass = TRAINER_CLASS_COOLTRAINER_FRLG,
    .trainerPic = TRAINER_PIC_COOLTRAINER_F_FRLG,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
    .items = {ITEM_FULL_RESTORE},
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .partySize = 5,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 42,
        .species = SPECIES_BEEDRILL,
        IVS(12),
        .moves = {MOVE_PIN_MISSILE, MOVE_TWINEEDLE, MOVE_AGILITY, MOVE_PURSUIT},
        },
        {
        .lvl = 42,
        .species = SPECIES_BUTTERFREE,
        IVS(12),
        .moves = {MOVE_SAFEGUARD, MOVE_PSYBEAM, MOVE_GUST, MOVE_SUPERSONIC},
        },
        {
        .lvl = 42,
        .species = SPECIES_PARASECT,
        IVS(12),
        .moves = {MOVE_SPORE, MOVE_LEECH_LIFE, MOVE_SLASH, MOVE_GROWTH},
        },
        {
        .lvl = 42,
        .species = SPECIES_VENONAT,
        IVS(12),
        .moves = {MOVE_PSYBEAM, MOVE_STUN_SPORE, MOVE_LEECH_LIFE, MOVE_DISABLE},
        },
        {
        .lvl = 42,
        .species = SPECIES_VENOMOTH,
        IVS(12),
        .moves = {MOVE_PSYBEAM, MOVE_GUST, MOVE_SUPERSONIC, MOVE_LEECH_LIFE},
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_COOLTRAINER_NAOMI] =
{
    .trainerName = _("Naomi"),
    .trainerClass = TRAINER_CLASS_COOLTRAINER_FRLG,
    .trainerPic = TRAINER_PIC_COOLTRAINER_F_FRLG,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
    .items = {ITEM_HYPER_POTION},
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .partySize = 5,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 42,
        .species = SPECIES_PERSIAN,
        IVS(12),
        .moves = {MOVE_FURY_SWIPES, MOVE_SCREECH, MOVE_FAINT_ATTACK, MOVE_PAY_DAY},
        },
        {
        .lvl = 42,
        .species = SPECIES_PONYTA,
        IVS(12),
        .moves = {MOVE_AGILITY, MOVE_TAKE_DOWN, MOVE_FIRE_SPIN, MOVE_STOMP},
        },
        {
        .lvl = 42,
        .species = SPECIES_RAPIDASH,
        IVS(12),
        .moves = {MOVE_FURY_ATTACK, MOVE_FIRE_SPIN, MOVE_STOMP, MOVE_GROWL},
        },
        {
        .lvl = 42,
        .species = SPECIES_VULPIX,
        IVS(12),
        .moves = {MOVE_FLAMETHROWER, MOVE_CONFUSE_RAY, MOVE_QUICK_ATTACK, MOVE_IMPRISON},
        },
        {
        .lvl = 42,
        .species = SPECIES_NINETALES,
        IVS(12),
        .moves = {MOVE_SAFEGUARD, MOVE_WILL_O_WISP, MOVE_CONFUSE_RAY, MOVE_FIRE_SPIN},
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_COOLTRAINER_BROOKE] =
{
    .trainerName = _("Brooke"),
    .trainerClass = TRAINER_CLASS_COOLTRAINER_FRLG,
    .trainerPic = TRAINER_PIC_COOLTRAINER_F_FRLG,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
    .items = {ITEM_FULL_RESTORE},
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .partySize = 5,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 42,
        .species = SPECIES_TANGELA,
        IVS(12),
        .moves = {MOVE_SLAM, MOVE_BIND, MOVE_MEGA_DRAIN, MOVE_INGRAIN},
        },
        {
        .lvl = 42,
        .species = SPECIES_GLOOM,
        IVS(12),
        .moves = {MOVE_ACID, MOVE_MOONLIGHT, MOVE_SLEEP_POWDER, MOVE_STUN_SPORE},
        },
        {
        .lvl = 42,
        .species = SPECIES_VILEPLUME,
        IVS(12),
        .moves = {MOVE_MEGA_DRAIN, MOVE_ACID, MOVE_STUN_SPORE, MOVE_AROMATHERAPY},
        },
        {
        .lvl = 42,
        .species = SPECIES_IVYSAUR,
        IVS(12),
        .moves = {MOVE_RAZOR_LEAF, MOVE_SWEET_SCENT, MOVE_GROWL, MOVE_LEECH_SEED},
        },
        {
        .lvl = 42,
        .species = SPECIES_VENUSAUR,
        IVS(12),
        .moves = {MOVE_RAZOR_LEAF, MOVE_GROWTH, MOVE_SLEEP_POWDER, MOVE_POISON_POWDER},
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_COOLTRAINER_AUSTINA] =
{
    .trainerName = _("Austina"),
    .trainerClass = TRAINER_CLASS_COOLTRAINER_FRLG,
    .trainerPic = TRAINER_PIC_COOLTRAINER_F_FRLG,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
    .items = {ITEM_FULL_RESTORE},
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .partySize = 5,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 42,
        .species = SPECIES_RHYHORN,
        IVS(12),
        .moves = {MOVE_HORN_DRILL, MOVE_ROCK_BLAST, MOVE_SCARY_FACE, MOVE_STOMP},
        },
        {
        .lvl = 42,
        .species = SPECIES_NIDORINA,
        IVS(12),
        .moves = {MOVE_DOUBLE_KICK, MOVE_FURY_SWIPES, MOVE_BITE, MOVE_FLATTER},
        },
        {
        .lvl = 42,
        .species = SPECIES_NIDOQUEEN,
        IVS(12),
        .moves = {MOVE_BODY_SLAM, MOVE_DOUBLE_KICK, MOVE_BITE, MOVE_GROWL},
        },
        {
        .lvl = 42,
        .species = SPECIES_NIDORINO,
        IVS(12),
        .moves = {MOVE_HORN_ATTACK, MOVE_POISON_STING, MOVE_FOCUS_ENERGY, MOVE_LEER},
        },
        {
        .lvl = 42,
        .species = SPECIES_NIDOKING,
        IVS(12),
        .moves = {MOVE_THRASH, MOVE_DOUBLE_KICK, MOVE_POISON_STING, MOVE_PECK},
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_COOLTRAINER_JULIE] =
{
    .trainerName = _("Julie"),
    .trainerClass = TRAINER_CLASS_COOLTRAINER_FRLG,
    .trainerPic = TRAINER_PIC_COOLTRAINER_F_FRLG,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
    .items = {ITEM_HYPER_POTION},
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .partySize = 5,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 42,
        .species = SPECIES_PERSIAN,
        IVS(12),
        .moves = {MOVE_FURY_SWIPES, MOVE_BITE, MOVE_SCREECH, MOVE_FAINT_ATTACK},
        },
        {
        .lvl = 42,
        .species = SPECIES_NINETALES,
        IVS(12),
        .moves = {MOVE_FLAMETHROWER, MOVE_WILL_O_WISP, MOVE_CONFUSE_RAY, MOVE_GRUDGE},
        },
        {
        .lvl = 42,
        .species = SPECIES_RAPIDASH,
        IVS(12),
        .moves = {MOVE_FURY_ATTACK, MOVE_FIRE_SPIN, MOVE_TAKE_DOWN, MOVE_AGILITY},
        },
        {
        .lvl = 42,
        .species = SPECIES_PIKACHU,
        IVS(12),
        .moves = {MOVE_THUNDERBOLT, MOVE_THUNDER_WAVE, MOVE_DOUBLE_TEAM, MOVE_QUICK_ATTACK},
        },
        {
        .lvl = 42,
        .species = SPECIES_RAICHU,
        IVS(12),
        .moves = {MOVE_THUNDER, MOVE_THUNDER_WAVE, MOVE_SLAM, MOVE_DOUBLE_TEAM},
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_GENTLEMAN_THOMAS] =
{
    .trainerName = _("Thomas"),
    GENTLEMAN_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 18,
        .species = SPECIES_GROWLITHE,
        },
        {
        .lvl = 18,
        .species = SPECIES_GROWLITHE,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_GENTLEMAN_ARTHUR] =
{
    .trainerName = _("Arthur"),
    GENTLEMAN_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 19,
        .species = SPECIES_NIDORAN_M,
        },
        {
        .lvl = 19,
        .species = SPECIES_NIDORAN_F,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_GENTLEMAN_TUCKER] =
{
    .trainerName = _("Tucker"),
    GENTLEMAN_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 23,
        .species = SPECIES_PIKACHU,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_GENTLEMAN_NORTON] =
{
    .trainerName = _("Norton"),
    GENTLEMAN_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 48,
        .species = SPECIES_PERSIAN,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_GENTLEMAN_WALTER] =
{
    .trainerName = _("Walter"),
    GENTLEMAN_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 17,
        .species = SPECIES_GROWLITHE,
        },
        {
        .lvl = 17,
        .species = SPECIES_PONYTA,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_CHANNELER_PATRICIA] =
{
    .trainerName = _("Patricia"),
    CHANNELER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 22,
        .species = SPECIES_GASTLY,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_CHANNELER_CARLY] =
{
    .trainerName = _("Carly"),
    CHANNELER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 24,
        .species = SPECIES_GASTLY,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_CHANNELER_HOPE] =
{
    .trainerName = _("Hope"),
    CHANNELER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 23,
        .species = SPECIES_GASTLY,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_CHANNELER_PAULA] =
{
    .trainerName = _("Paula"),
    CHANNELER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 24,
        .species = SPECIES_GASTLY,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_CHANNELER_LAUREL] =
{
    .trainerName = _("Laurel"),
    CHANNELER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 23,
        .species = SPECIES_GASTLY,
        },
        {
        .lvl = 23,
        .species = SPECIES_GASTLY,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_CHANNELER_JODY] =
{
    .trainerName = _("Jody"),
    CHANNELER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 22,
        .species = SPECIES_GASTLY,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_CHANNELER_TAMMY] =
{
    .trainerName = _("Tammy"),
    CHANNELER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 23,
        .species = SPECIES_HAUNTER,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_CHANNELER_RUTH] =
{
    .trainerName = _("Ruth"),
    CHANNELER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 22,
        .species = SPECIES_GASTLY,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_CHANNELER_KARINA] =
{
    .trainerName = _("Karina"),
    CHANNELER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 24,
        .species = SPECIES_GASTLY,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_CHANNELER_JANAE] =
{
    .trainerName = _("Janae"),
    CHANNELER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 22,
        .species = SPECIES_GASTLY,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_CHANNELER_ANGELICA] =
{
    .trainerName = _("Angelica"),
    CHANNELER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 22,
        .species = SPECIES_GASTLY,
        },
        {
        .lvl = 22,
        .species = SPECIES_GASTLY,
        },
        {
        .lvl = 22,
        .species = SPECIES_GASTLY,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_CHANNELER_EMILIA] =
{
    .trainerName = _("Emilia"),
    CHANNELER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 24,
        .species = SPECIES_GASTLY,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_CHANNELER_JENNIFER] =
{
    .trainerName = _("Jennifer"),
    CHANNELER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 24,
        .species = SPECIES_GASTLY,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_CHANNELER_AMANDA] =
{
    .trainerName = _("Amanda"),
    CHANNELER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 34,
        .species = SPECIES_GASTLY,
        },
        {
        .lvl = 34,
        .species = SPECIES_HAUNTER,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_CHANNELER_STACY] =
{
    .trainerName = _("Stacy"),
    CHANNELER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 38,
        .species = SPECIES_HAUNTER,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_CHANNELER_TASHA] =
{
    .trainerName = _("Tasha"),
    CHANNELER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 33,
        .species = SPECIES_GASTLY,
        },
        {
        .lvl = 33,
        .species = SPECIES_GASTLY,
        },
        {
        .lvl = 33,
        .species = SPECIES_HAUNTER,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_HIKER_JEREMY] =
{
    .trainerName = _("Jeremy"),
    HIKER_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 20,
        .species = SPECIES_MACHOP,
        },
        {
        .lvl = 20,
        .species = SPECIES_ONIX,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_PICNICKER_ALMA] =
{
    .trainerName = _("Alma"),
    PICNICKER_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 28,
        .species = SPECIES_GOLDEEN,
        },
        {
        .lvl = 28,
        .species = SPECIES_POLIWAG,
        },
        {
        .lvl = 28,
        .species = SPECIES_HORSEA,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_PICNICKER_SUSIE] =
{
    .trainerName = _("Susie"),
    PICNICKER_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 5,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 24,
        .species = SPECIES_PIDGEY,
        },
        {
        .lvl = 24,
        .species = SPECIES_MEOWTH,
        },
        {
        .lvl = 24,
        .species = SPECIES_RATTATA,
        },
        {
        .lvl = 24,
        .species = SPECIES_PIKACHU,
        },
        {
        .lvl = 24,
        .species = SPECIES_MEOWTH,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_PICNICKER_VALERIE] =
{
    .trainerName = _("Valerie"),
    PICNICKER_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 30,
        .species = SPECIES_POLIWAG,
        },
        {
        .lvl = 30,
        .species = SPECIES_POLIWAG,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_PICNICKER_GWEN] =
{
    .trainerName = _("Gwen"),
    PICNICKER_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 4,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 27,
        .species = SPECIES_PIDGEY,
        },
        {
        .lvl = 27,
        .species = SPECIES_MEOWTH,
        },
        {
        .lvl = 27,
        .species = SPECIES_PIDGEY,
        },
        {
        .lvl = 27,
        .species = SPECIES_PIDGEOTTO,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_BIKER_VIRGIL] =
{
    .trainerName = _("Virgil"),
    BIKER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 28,
        .species = SPECIES_WEEZING,
        .moves = {MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE},
        },
        {
        .lvl = 28,
        .species = SPECIES_KOFFING,
        .moves = {MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE},
        },
        {
        .lvl = 28,
        .species = SPECIES_WEEZING,
        .moves = {MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE},
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_CAMPER_FLINT] =
{
    .trainerName = _("Flint"),
    CAMPER_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 14,
        .species = SPECIES_RATTATA,
        },
        {
        .lvl = 14,
        .species = SPECIES_EKANS,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_PICNICKER_MISSY] =
{
    .trainerName = _("Missy"),
    PICNICKER_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 31,
        .species = SPECIES_GOLDEEN,
        },
        {
        .lvl = 31,
        .species = SPECIES_SEAKING,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_PICNICKER_IRENE] =
{
    .trainerName = _("Irene"),
    PICNICKER_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 30,
        .species = SPECIES_TENTACOOL,
        },
        {
        .lvl = 30,
        .species = SPECIES_HORSEA,
        },
        {
        .lvl = 30,
        .species = SPECIES_SEEL,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_PICNICKER_DANA] =
{
    .trainerName = _("Dana"),
    PICNICKER_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 20,
        .species = SPECIES_MEOWTH,
        },
        {
        .lvl = 20,
        .species = SPECIES_ODDISH,
        },
        {
        .lvl = 20,
        .species = SPECIES_PIDGEY,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_PICNICKER_ARIANA] =
{
    .trainerName = _("Ariana"),
    PICNICKER_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 4,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 19,
        .species = SPECIES_PIDGEY,
        },
        {
        .lvl = 19,
        .species = SPECIES_RATTATA,
        },
        {
        .lvl = 19,
        .species = SPECIES_RATTATA,
        },
        {
        .lvl = 19,
        .species = SPECIES_BELLSPROUT,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_PICNICKER_LEAH] =
{
    .trainerName = _("Leah"),
    PICNICKER_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 22,
        .species = SPECIES_BELLSPROUT,
        },
        {
        .lvl = 22,
        .species = SPECIES_CLEFAIRY,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_CAMPER_JUSTIN] =
{
    .trainerName = _("Justin"),
    CAMPER_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 29,
        .species = SPECIES_NIDORAN_M,
        },
        {
        .lvl = 29,
        .species = SPECIES_NIDORINO,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_PICNICKER_YAZMIN] =
{
    .trainerName = _("Yazmin"),
    PICNICKER_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 29,
        .species = SPECIES_BELLSPROUT,
        },
        {
        .lvl = 29,
        .species = SPECIES_ODDISH,
        },
        {
        .lvl = 29,
        .species = SPECIES_TANGELA,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_PICNICKER_KINDRA] =
{
    .trainerName = _("Kindra"),
    PICNICKER_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 28,
        .species = SPECIES_GLOOM,
        },
        {
        .lvl = 28,
        .species = SPECIES_ODDISH,
        },
        {
        .lvl = 28,
        .species = SPECIES_ODDISH,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_PICNICKER_BECKY] =
{
    .trainerName = _("Becky"),
    PICNICKER_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 29,
        .species = SPECIES_PIKACHU,
        },
        {
        .lvl = 29,
        .species = SPECIES_RAICHU,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_PICNICKER_CELIA] =
{
    .trainerName = _("Celia"),
    PICNICKER_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 33,
        .species = SPECIES_CLEFAIRY,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_GENTLEMAN_BROOKS] =
{
    .trainerName = _("Brooks"),
    GENTLEMAN_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 23,
        .species = SPECIES_PIKACHU,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_GENTLEMAN_LAMAR] =
{
    .trainerName = _("Lamar"),
    GENTLEMAN_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 17,
        .species = SPECIES_GROWLITHE,
        },
        {
        .lvl = 17,
        .species = SPECIES_PONYTA,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_TWINS_ELI_ANNE] =
{
    .trainerName = _("Eli & Anne"),
    .trainerClass = TRAINER_CLASS_TWINS_FRLG,
    .trainerPic = TRAINER_PIC_TWINS_FRLG,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_TWINS,
    .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 22,
        .species = SPECIES_CLEFAIRY,
        },
        {
        .lvl = 22,
        .species = SPECIES_JIGGLYPUFF,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_COOL_COUPLE_RAY_TYRA] =
{
    .trainerName = _("Ray & Tyra"),
    COOL_COUPLE_INFO,
    .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 45,
        .species = SPECIES_NIDOQUEEN,
        IVS(12),
        .moves = {MOVE_SUPERPOWER, MOVE_BODY_SLAM, MOVE_DOUBLE_KICK, MOVE_POISON_STING},
        },
        {
        .lvl = 45,
        .species = SPECIES_NIDOKING,
        IVS(12),
        .moves = {MOVE_MEGAHORN, MOVE_THRASH, MOVE_DOUBLE_KICK, MOVE_POISON_STING},
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_YOUNG_COUPLE_GIA_JES] =
{
    .trainerName = _("Gia & Jes"),
    .trainerClass = TRAINER_CLASS_YOUNG_COUPLE_FRLG,
    .trainerPic = TRAINER_PIC_YOUNG_COUPLE_FRLG,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_GIRL,
    .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 24,
        .species = SPECIES_NIDORAN_M,
        },
        {
        .lvl = 24,
        .species = SPECIES_NIDORAN_F,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_TWINS_KIRI_JAN] =
{
    .trainerName = _("Kiri & Jan"),
    .trainerClass = TRAINER_CLASS_TWINS_FRLG,
    .trainerPic = TRAINER_PIC_TWINS_FRLG,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_TWINS,
    .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 29,
        .species = SPECIES_CHARMANDER,
        },
        {
        .lvl = 29,
        .species = SPECIES_SQUIRTLE,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_CRUSH_KIN_RON_MYA] =
{
    .trainerName = _("Ron & Mya"),
    CRUSH_KIN_INFO,
    .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 29,
        .species = SPECIES_HITMONCHAN,
        IVS(6),
        .heldItem = ITEM_BLACK_BELT,
        },
        {
        .lvl = 29,
        .species = SPECIES_HITMONLEE,
        IVS(6),
        .heldItem = ITEM_BLACK_BELT,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_YOUNG_COUPLE_LEA_JED] =
{
    .trainerName = _("Lea & Jed"),
    .trainerClass = TRAINER_CLASS_YOUNG_COUPLE_FRLG,
    .trainerPic = TRAINER_PIC_YOUNG_COUPLE_FRLG,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_GIRL,
    .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 29,
        .species = SPECIES_RAPIDASH,
        },
        {
        .lvl = 29,
        .species = SPECIES_NINETALES,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_SIS_AND_BRO_LIA_LUC] =
{
    .trainerName = _("Lia & Luc"),
    .trainerClass = TRAINER_CLASS_SIS_AND_BRO_FRLG,
    .trainerPic = TRAINER_PIC_SIS_AND_BRO_FRLG,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 30,
        .species = SPECIES_GOLDEEN,
        },
        {
        .lvl = 30,
        .species = SPECIES_SEAKING,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_SIS_AND_BRO_LIL_IAN] =
{
    .trainerName = _("Lil & Ian"),
    .trainerClass = TRAINER_CLASS_SIS_AND_BRO_FRLG,
    .trainerPic = TRAINER_PIC_SIS_AND_BRO_FRLG,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 33,
        .species = SPECIES_SEADRA,
        },
        {
        .lvl = 33,
        .species = SPECIES_STARMIE,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_YOUNGSTER_BEN_3] =
{
    .trainerName = _("Ben"),
    YOUNGSTER_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 28,
        .species = SPECIES_RATICATE,
        IVS(7),
        },
        {
        .lvl = 28,
        .species = SPECIES_EKANS,
        IVS(7),
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_YOUNGSTER_BEN_4] =
{
    .trainerName = _("Ben"),
    YOUNGSTER_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 48,
        .species = SPECIES_RATICATE,
        IVS(14),
        },
        {
        .lvl = 48,
        .species = SPECIES_ARBOK,
        IVS(14),
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_YOUNGSTER_CHAD_2] =
{
    .trainerName = _("Chad"),
    YOUNGSTER_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 20,
        .species = SPECIES_EKANS,
        IVS(2),
        },
        {
        .lvl = 20,
        .species = SPECIES_SANDSHREW,
        IVS(2),
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_LASS_RELI_2] =
{
    .trainerName = _("Reli"),
    LASS_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 20,
        .species = SPECIES_PIDGEY,
        IVS(2),
        },
        {
        .lvl = 20,
        .species = SPECIES_NIDORAN_F,
        IVS(2),
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_LASS_RELI_3] =
{
    .trainerName = _("Reli"),
    LASS_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 28,
        .species = SPECIES_PIDGEOTTO,
        IVS(7),
        },
        {
        .lvl = 28,
        .species = SPECIES_NIDORINA,
        IVS(7),
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_YOUNGSTER_TIMMY_2] =
{
    .trainerName = _("Timmy"),
    YOUNGSTER_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 19,
        .species = SPECIES_RATICATE,
        IVS(2),
        },
        {
        .lvl = 19,
        .species = SPECIES_EKANS,
        IVS(2),
        },
        {
        .lvl = 19,
        .species = SPECIES_ZUBAT,
        IVS(2),
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_YOUNGSTER_TIMMY_3] =
{
    .trainerName = _("Timmy"),
    YOUNGSTER_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 27,
        .species = SPECIES_RATICATE,
        IVS(7),
        },
        {
        .lvl = 27,
        .species = SPECIES_EKANS,
        IVS(7),
        },
        {
        .lvl = 27,
        .species = SPECIES_GOLBAT,
        IVS(7),
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_YOUNGSTER_TIMMY_4] =
{
    .trainerName = _("Timmy"),
    YOUNGSTER_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 52,
        .species = SPECIES_RATICATE,
        IVS(14),
        },
        {
        .lvl = 52,
        .species = SPECIES_ARBOK,
        IVS(14),
        },
        {
        .lvl = 52,
        .species = SPECIES_GOLBAT,
        IVS(14),
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_YOUNGSTER_CHAD_3] =
{
    .trainerName = _("Chad"),
    YOUNGSTER_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 28,
        .species = SPECIES_ARBOK,
        IVS(7),
        },
        {
        .lvl = 28,
        .species = SPECIES_SANDSHREW,
        IVS(7),
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_LASS_JANICE_2] =
{
    .trainerName = _("Janice"),
    LASS_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 20,
        .species = SPECIES_PIDGEOTTO,
        IVS(2),
        },
        {
        .lvl = 20,
        .species = SPECIES_PIDGEOTTO,
        IVS(2),
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_LASS_JANICE_3] =
{
    .trainerName = _("Janice"),
    LASS_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 28,
        .species = SPECIES_PIDGEOTTO,
        IVS(7),
        },
        {
        .lvl = 28,
        .species = SPECIES_PIDGEOTTO,
        IVS(7),
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_YOUNGSTER_CHAD_4] =
{
    .trainerName = _("Chad"),
    YOUNGSTER_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 48,
        .species = SPECIES_ARBOK,
        IVS(9),
        },
        {
        .lvl = 48,
        .species = SPECIES_SANDSLASH,
        IVS(9),
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_HIKER_FRANKLIN_2] =
{
    .trainerName = _("Franklin"),
    HIKER_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 25,
        .species = SPECIES_MACHOKE,
        IVS(4),
        },
        {
        .lvl = 25,
        .species = SPECIES_GRAVELER,
        IVS(4),
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_PKMN_PROF_PROF_OAK] =
{
    .trainerName = _("Prof. Oak"),
    .trainerClass = TRAINER_CLASS_PKMN_PROF_FRLG,
    .trainerPic = TRAINER_PIC_PROFESSOR_OAK_FRLG,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 5,
        .species = SPECIES_EKANS,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_TEAM_ROCKET_GRUNT_42] =
{
    .trainerName = _("Grunt"),
    .trainerClass = TRAINER_CLASS_TEAM_ROCKET_FRLG,
    .trainerPic = TRAINER_PIC_ROCKET_GRUNT_F_FRLG,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 49,
        .species = SPECIES_HOUNDOUR,
        },
        {
        .lvl = 49,
        .species = SPECIES_HOUNDOUR,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_PSYCHIC_JACLYN] =
{
    .trainerName = _("Jaclyn"),
    .trainerClass = TRAINER_CLASS_PSYCHIC_FRLG,
    .trainerPic = TRAINER_PIC_PSYCHIC_F_FRLG,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 48,
        .species = SPECIES_NATU,
        IVS(12),
        .moves = {MOVE_NIGHT_SHADE, MOVE_CONFUSE_RAY, MOVE_FUTURE_SIGHT, MOVE_WISH},
        },
        {
        .lvl = 48,
        .species = SPECIES_SLOWBRO,
        IVS(12),
        .moves = {MOVE_PSYCHIC, MOVE_HEADBUTT, MOVE_AMNESIA, MOVE_YAWN},
        },
        {
        .lvl = 49,
        .species = SPECIES_KADABRA,
        IVS(12),
        .moves = {MOVE_PSYCHIC, MOVE_FUTURE_SIGHT, MOVE_RECOVER, MOVE_REFLECT},
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_CRUSH_GIRL_SHARON] =
{
    .trainerName = _("Sharon"),
    .trainerClass = TRAINER_CLASS_CRUSH_GIRL_FRLG,
    .trainerPic = TRAINER_PIC_CRUSH_GIRL_FRLG,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 37,
        .species = SPECIES_MANKEY,
        IVS(6),
        .heldItem = ITEM_BLACK_BELT,
        },
        {
        .lvl = 37,
        .species = SPECIES_PRIMEAPE,
        IVS(6),
        .heldItem = ITEM_BLACK_BELT,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_TUBER_AMIRA] =
{
    .trainerName = _("Amira"),
    .trainerClass = TRAINER_CLASS_TUBER_FRLG,
    .trainerPic = TRAINER_PIC_TUBER_F_FRLG,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_GIRL,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 34,
        .species = SPECIES_POLIWAG,
        },
        {
        .lvl = 35,
        .species = SPECIES_POLIWHIRL,
        },
        {
        .lvl = 34,
        .species = SPECIES_POLIWAG,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_PKMN_BREEDER_ALIZE] =
{
    .trainerName = _("Alize"),
    .trainerClass = TRAINER_CLASS_PKMN_BREEDER_FRLG,
    .trainerPic = TRAINER_PIC_POKEMON_BREEDER_FRLG,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 48,
        .species = SPECIES_PIKACHU,
        IVS(3),
        },
        {
        .lvl = 48,
        .species = SPECIES_CLEFAIRY,
        IVS(3),
        },
        {
        .lvl = 48,
        .species = SPECIES_MARILL,
        IVS(3),
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_PKMN_RANGER_NICOLAS] =
{
    .trainerName = _("Nicolas"),
    .trainerClass = TRAINER_CLASS_PKMN_RANGER_FRLG,
    .trainerPic = TRAINER_PIC_POKEMON_RANGER_M_FRLG,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
    .items = {ITEM_FULL_RESTORE},
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 51,
        .species = SPECIES_WEEPINBELL,
        IVS(12),
        .moves = {MOVE_RAZOR_LEAF, MOVE_ACID, MOVE_SWEET_SCENT, MOVE_WRAP},
        },
        {
        .lvl = 51,
        .species = SPECIES_VICTREEBEL,
        IVS(12),
        .moves = {MOVE_RAZOR_LEAF, MOVE_ACID, MOVE_SLEEP_POWDER, MOVE_STUN_SPORE},
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_PKMN_RANGER_MADELINE] =
{
    .trainerName = _("Madeline"),
    .trainerClass = TRAINER_CLASS_PKMN_RANGER_FRLG,
    .trainerPic = TRAINER_PIC_POKEMON_RANGER_F_FRLG,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
    .items = {ITEM_FULL_RESTORE},
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 51,
        .species = SPECIES_GLOOM,
        IVS(12),
        .moves = {MOVE_PETAL_DANCE, MOVE_ACID, MOVE_SWEET_SCENT, MOVE_POISON_POWDER},
        },
        {
        .lvl = 51,
        .species = SPECIES_VILEPLUME,
        IVS(12),
        .moves = {MOVE_PETAL_DANCE, MOVE_MOONLIGHT, MOVE_ACID, MOVE_STUN_SPORE},
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_AROMA_LADY_NIKKI] =
{
    .trainerName = _("Nikki"),
    .trainerClass = TRAINER_CLASS_AROMA_LADY_FRLG,
    .trainerPic = TRAINER_PIC_AROMA_LADY_FRLG,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 37,
        .species = SPECIES_BELLSPROUT,
        },
        {
        .lvl = 37,
        .species = SPECIES_WEEPINBELL,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_RUIN_MANIAC_STANLY] =
{
    .trainerName = _("Stanly"),
    RUIN_MANIAC_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 48,
        .species = SPECIES_GRAVELER,
        },
        {
        .lvl = 48,
        .species = SPECIES_ONIX,
        },
        {
        .lvl = 48,
        .species = SPECIES_GRAVELER,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_LADY_JACKI] =
{
    .trainerName = _("Jacki"),
    .trainerClass = TRAINER_CLASS_LADY_FRLG,
    .trainerPic = TRAINER_PIC_LADY_FRLG,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .items = {ITEM_FULL_RESTORE},
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 48,
        .species = SPECIES_HOPPIP,
        .heldItem = ITEM_STARDUST,
        },
        {
        .lvl = 50,
        .species = SPECIES_SKIPLOOM,
        .heldItem = ITEM_STARDUST,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_PAINTER_DAISY] =
{
    .trainerName = _("Daisy"),
    PAINTER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 50,
        .species = SPECIES_SMEARGLE,
        IVS(6),
        .moves = {MOVE_DYNAMIC_PUNCH, MOVE_DIZZY_PUNCH, MOVE_FOCUS_PUNCH, MOVE_MEGA_PUNCH},
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_BIKER_GOON] =
{
    .trainerName = _("Goon"),
    BIKER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 37,
        .species = SPECIES_KOFFING,
        .moves = {MOVE_HAZE, MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_TACKLE},
        },
        {
        .lvl = 37,
        .species = SPECIES_GRIMER,
        .moves = {MOVE_ACID_ARMOR, MOVE_SCREECH, MOVE_MINIMIZE, MOVE_SLUDGE},
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_BIKER_GOON_2] =
{
    .trainerName = _("Goon"),
    BIKER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 38,
        .species = SPECIES_KOFFING,
        .moves = {MOVE_HAZE, MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_TACKLE},
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_BIKER_GOON_3] =
{
    .trainerName = _("Goon"),
    BIKER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 38,
        .species = SPECIES_GRIMER,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_BUG_CATCHER_ANTHONY] =
{
    .trainerName = _("Anthony"),
    BUG_CATCHER_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 7,
        .species = SPECIES_CATERPIE,
        },
        {
        .lvl = 8,
        .species = SPECIES_CATERPIE,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_BUG_CATCHER_CHARLIE] =
{
    .trainerName = _("Charlie"),
    BUG_CATCHER_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 7,
        .species = SPECIES_METAPOD,
        },
        {
        .lvl = 7,
        .species = SPECIES_CATERPIE,
        },
        {
        .lvl = 7,
        .species = SPECIES_METAPOD,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_TWINS_ELI_ANNE_2] =
{
    .trainerName = _("Eli & Anne"),
    .trainerClass = TRAINER_CLASS_TWINS_FRLG,
    .trainerPic = TRAINER_PIC_TWINS_FRLG,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_TWINS,
    .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 28,
        .species = SPECIES_CLEFAIRY,
        IVS(7),
        },
        {
        .lvl = 28,
        .species = SPECIES_JIGGLYPUFF,
        IVS(7),
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_YOUNGSTER_JOHNSON] =
{
    .trainerName = _("Johnson"),
    YOUNGSTER_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 33,
        .species = SPECIES_EKANS,
        },
        {
        .lvl = 33,
        .species = SPECIES_EKANS,
        },
        {
        .lvl = 34,
        .species = SPECIES_RATICATE,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_BIKER_RICARDO] =
{
    .trainerName = _("Ricardo"),
    BIKER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 22,
        .species = SPECIES_KOFFING,
        .moves = {MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE, MOVE_POISON_GAS},
        },
        {
        .lvl = 22,
        .species = SPECIES_KOFFING,
        .moves = {MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE, MOVE_POISON_GAS},
        },
        {
        .lvl = 23,
        .species = SPECIES_GRIMER,
        .moves = {MOVE_MINIMIZE, MOVE_SLUDGE, MOVE_DISABLE, MOVE_POUND},
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_BIKER_JAREN] =
{
    .trainerName = _("Jaren"),
    BIKER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 24,
        .species = SPECIES_GRIMER,
        },
        {
        .lvl = 24,
        .species = SPECIES_GRIMER,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_TEAM_ROCKET_GRUNT_43] =
{
    .trainerName = _("Grunt"),
    .trainerClass = TRAINER_CLASS_TEAM_ROCKET_FRLG,
    .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M_FRLG,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 37,
        .species = SPECIES_CUBONE,
        },
        {
        .lvl = 37,
        .species = SPECIES_MAROWAK,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_TEAM_ROCKET_GRUNT_44] =
{
    .trainerName = _("Grunt"),
    .trainerClass = TRAINER_CLASS_TEAM_ROCKET_FRLG,
    .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M_FRLG,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 4,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 35,
        .species = SPECIES_RATTATA,
        },
        {
        .lvl = 35,
        .species = SPECIES_RATICATE,
        },
        {
        .lvl = 35,
        .species = SPECIES_SANDSHREW,
        },
        {
        .lvl = 35,
        .species = SPECIES_SANDSLASH,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_TEAM_ROCKET_GRUNT_45] =
{
    .trainerName = _("Grunt"),
    .trainerClass = TRAINER_CLASS_TEAM_ROCKET_FRLG,
    .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M_FRLG,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 38,
        .species = SPECIES_ZUBAT,
        },
        {
        .lvl = 38,
        .species = SPECIES_ZUBAT,
        },
        {
        .lvl = 38,
        .species = SPECIES_GOLBAT,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_TEAM_ROCKET_GRUNT_46] =
{
    .trainerName = _("Grunt"),
    .trainerClass = TRAINER_CLASS_TEAM_ROCKET_FRLG,
    .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M_FRLG,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 48,
        .species = SPECIES_MUK,
        },
        {
        .lvl = 48,
        .species = SPECIES_GOLBAT,
        },
        {
        .lvl = 48,
        .species = SPECIES_RATICATE,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_TEAM_ROCKET_GRUNT_47] =
{
    .trainerName = _("Grunt"),
    .trainerClass = TRAINER_CLASS_TEAM_ROCKET_FRLG,
    .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M_FRLG,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 48,
        .species = SPECIES_MACHOP,
        },
        {
        .lvl = 48,
        .species = SPECIES_MACHOP,
        },
        {
        .lvl = 48,
        .species = SPECIES_MACHOKE,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_TEAM_ROCKET_GRUNT_48] =
{
    .trainerName = _("Grunt"),
    .trainerClass = TRAINER_CLASS_TEAM_ROCKET_FRLG,
    .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M_FRLG,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 49,
        .species = SPECIES_HYPNO,
        },
        {
        .lvl = 49,
        .species = SPECIES_HYPNO,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_TEAM_ROCKET_ADMIN] =
{
    .trainerName = _("Admin"),
    .trainerClass = TRAINER_CLASS_TEAM_ROCKET_FRLG,
    .trainerPic = TRAINER_PIC_ROCKET_GRUNT_F_FRLG,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
    .items = {ITEM_HYPER_POTION},
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .partySize = 3,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 52,
        .species = SPECIES_MUK,
        IVS(18),
        .moves = {MOVE_SLUDGE_BOMB, MOVE_SCREECH, MOVE_MINIMIZE, MOVE_ROCK_TOMB},
        },
        {
        .lvl = 53,
        .species = SPECIES_ARBOK,
        IVS(18),
        .moves = {MOVE_SLUDGE_BOMB, MOVE_BITE, MOVE_EARTHQUAKE, MOVE_IRON_TAIL},
        },
        {
        .lvl = 54,
        .species = SPECIES_VILEPLUME,
        IVS(18),
        .moves = {MOVE_SLUDGE_BOMB, MOVE_GIGA_DRAIN, MOVE_SLEEP_POWDER, MOVE_STUN_SPORE},
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_TEAM_ROCKET_ADMIN_2] =
{
    .trainerName = _("Admin"),
    .trainerClass = TRAINER_CLASS_TEAM_ROCKET_FRLG,
    .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M_FRLG,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
    .items = {ITEM_HYPER_POTION},
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .partySize = 3,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 53,
        .species = SPECIES_GOLBAT,
        IVS(24),
        .moves = {MOVE_CONFUSE_RAY, MOVE_SLUDGE_BOMB, MOVE_AIR_CUTTER, MOVE_SHADOW_BALL},
        },
        {
        .lvl = 54,
        .species = SPECIES_WEEZING,
        IVS(24),
        .moves = {MOVE_SLUDGE_BOMB, MOVE_THUNDERBOLT, MOVE_EXPLOSION, MOVE_SHADOW_BALL},
        },
        {
        .lvl = 55,
        .species = SPECIES_HOUNDOOM,
        IVS(24),
        .moves = {MOVE_FLAMETHROWER, MOVE_CRUNCH, MOVE_IRON_TAIL, MOVE_SHADOW_BALL},
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_SCIENTIST_GIDEON] =
{
    .trainerName = _("Gideon"),
    SCIENTIST_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 5,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 46,
        .species = SPECIES_VOLTORB,
        .moves = {MOVE_SWIFT, MOVE_SCREECH, MOVE_SPARK, MOVE_SONIC_BOOM},
        },
        {
        .lvl = 46,
        .species = SPECIES_ELECTRODE,
        .moves = {MOVE_SPARK, MOVE_SONIC_BOOM, MOVE_SCREECH, MOVE_CHARGE},
        },
        {
        .lvl = 46,
        .species = SPECIES_MAGNEMITE,
        .moves = {MOVE_SCREECH, MOVE_SWIFT, MOVE_SPARK, MOVE_THUNDER_WAVE},
        },
        {
        .lvl = 46,
        .species = SPECIES_MAGNETON,
        .moves = {MOVE_TRI_ATTACK, MOVE_SPARK, MOVE_THUNDER_WAVE, MOVE_SONIC_BOOM},
        },
        {
        .lvl = 46,
        .species = SPECIES_PORYGON,
        .moves = {MOVE_TRI_ATTACK, MOVE_CONVERSION, MOVE_RECOVER, MOVE_PSYBEAM},
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_SWIMMER_FEMALE_AMARA] =
{
    .trainerName = _("Amara"),
    .trainerClass = TRAINER_CLASS_SWIMMER_F_FRLG,
    .trainerPic = TRAINER_PIC_SWIMMER_F_FRLG,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 36,
        .species = SPECIES_SEEL,
        },
        {
        .lvl = 36,
        .species = SPECIES_SEEL,
        },
        {
        .lvl = 36,
        .species = SPECIES_DEWGONG,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_SWIMMER_FEMALE_MARIA] =
{
    .trainerName = _("Maria"),
    .trainerClass = TRAINER_CLASS_SWIMMER_F_FRLG,
    .trainerPic = TRAINER_PIC_SWIMMER_F_FRLG,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 37,
        .species = SPECIES_SEADRA,
        },
        {
        .lvl = 37,
        .species = SPECIES_SEADRA,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_SWIMMER_FEMALE_ABIGAIL] =
{
    .trainerName = _("Abigail"),
    .trainerClass = TRAINER_CLASS_SWIMMER_F_FRLG,
    .trainerPic = TRAINER_PIC_SWIMMER_F_FRLG,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 35,
        .species = SPECIES_PSYDUCK,
        },
        {
        .lvl = 36,
        .species = SPECIES_PSYDUCK,
        },
        {
        .lvl = 37,
        .species = SPECIES_GOLDUCK,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_SWIMMER_MALE_FINN] =
{
    .trainerName = _("Finn"),
    .trainerClass = TRAINER_CLASS_SWIMMER_M_FRLG,
    .trainerPic = TRAINER_PIC_SWIMMER_M_FRLG,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 38,
        .species = SPECIES_STARMIE,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_SWIMMER_MALE_GARRETT] =
{
    .trainerName = _("Garrett"),
    .trainerClass = TRAINER_CLASS_SWIMMER_M_FRLG,
    .trainerPic = TRAINER_PIC_SWIMMER_M_FRLG,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 35,
        .species = SPECIES_SHELLDER,
        },
        {
        .lvl = 35,
        .species = SPECIES_CLOYSTER,
        },
        {
        .lvl = 38,
        .species = SPECIES_WARTORTLE,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_FISHERMAN_TOMMY] =
{
    .trainerName = _("Tommy"),
    FISHERMAN_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 5,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 33,
        .species = SPECIES_GOLDEEN,
        },
        {
        .lvl = 33,
        .species = SPECIES_GOLDEEN,
        },
        {
        .lvl = 35,
        .species = SPECIES_SEAKING,
        },
        {
        .lvl = 35,
        .species = SPECIES_SEAKING,
        },
        {
        .lvl = 35,
        .species = SPECIES_SEAKING,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_CRUSH_GIRL_TANYA] =
{
    .trainerName = _("Tanya"),
    .trainerClass = TRAINER_CLASS_CRUSH_GIRL_FRLG,
    .trainerPic = TRAINER_PIC_CRUSH_GIRL_FRLG,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 38,
        .species = SPECIES_HITMONLEE,
        IVS(6),
        .heldItem = ITEM_BLACK_BELT,
        },
        {
        .lvl = 38,
        .species = SPECIES_HITMONCHAN,
        IVS(6),
        .heldItem = ITEM_BLACK_BELT,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_BLACK_BELT_SHEA] =
{
    .trainerName = _("Shea"),
    BLACK_BELT_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 38,
        .species = SPECIES_MACHOP,
        IVS(12),
        .heldItem = ITEM_BLACK_BELT,
        },
        {
        .lvl = 38,
        .species = SPECIES_MACHOKE,
        IVS(12),
        .heldItem = ITEM_BLACK_BELT,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_BLACK_BELT_HUGH] =
{
    .trainerName = _("Hugh"),
    BLACK_BELT_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 37,
        .species = SPECIES_MACHOP,
        IVS(12),
        .heldItem = ITEM_BLACK_BELT,
        },
        {
        .lvl = 37,
        .species = SPECIES_MACHOKE,
        IVS(12),
        .heldItem = ITEM_BLACK_BELT,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_CAMPER_BRYCE] =
{
    .trainerName = _("Bryce"),
    CAMPER_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 36,
        .species = SPECIES_NIDORINO,
        },
        {
        .lvl = 36,
        .species = SPECIES_RATICATE,
        },
        {
        .lvl = 36,
        .species = SPECIES_SANDSLASH,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_PICNICKER_CLAIRE] =
{
    .trainerName = _("Claire"),
    PICNICKER_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 4,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 35,
        .species = SPECIES_MEOWTH,
        },
        {
        .lvl = 35,
        .species = SPECIES_MEOWTH,
        },
        {
        .lvl = 35,
        .species = SPECIES_PIKACHU,
        },
        {
        .lvl = 35,
        .species = SPECIES_CLEFAIRY,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_CRUSH_KIN_MIK_KIA] =
{
    .trainerName = _("Mik & Kia"),
    CRUSH_KIN_INFO,
    .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 39,
        .species = SPECIES_MACHOKE,
        IVS(6),
        .heldItem = ITEM_BLACK_BELT,
        },
        {
        .lvl = 39,
        .species = SPECIES_PRIMEAPE,
        IVS(6),
        .heldItem = ITEM_BLACK_BELT,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_AROMA_LADY_VIOLET] =
{
    .trainerName = _("Violet"),
    .trainerClass = TRAINER_CLASS_AROMA_LADY_FRLG,
    .trainerPic = TRAINER_PIC_AROMA_LADY_FRLG,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 36,
        .species = SPECIES_BULBASAUR,
        },
        {
        .lvl = 36,
        .species = SPECIES_IVYSAUR,
        },
        {
        .lvl = 36,
        .species = SPECIES_IVYSAUR,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_TUBER_ALEXIS] =
{
    .trainerName = _("Alexis"),
    .trainerClass = TRAINER_CLASS_TUBER_FRLG,
    .trainerPic = TRAINER_PIC_TUBER_F_FRLG,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_GIRL,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 4,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 34,
        .species = SPECIES_STARYU,
        },
        {
        .lvl = 34,
        .species = SPECIES_STARYU,
        },
        {
        .lvl = 34,
        .species = SPECIES_KRABBY,
        },
        {
        .lvl = 34,
        .species = SPECIES_KRABBY,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_TWINS_JOY_MEG] =
{
    .trainerName = _("Joy & Meg"),
    .trainerClass = TRAINER_CLASS_TWINS_FRLG,
    .trainerPic = TRAINER_PIC_TWINS_FRLG,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_TWINS,
    .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 37,
        .species = SPECIES_CLEFAIRY,
        },
        {
        .lvl = 37,
        .species = SPECIES_CLEFAIRY,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_SWIMMER_FEMALE_TISHA] =
{
    .trainerName = _("Tisha"),
    .trainerClass = TRAINER_CLASS_SWIMMER_F_FRLG,
    .trainerPic = TRAINER_PIC_SWIMMER_F_FRLG,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 38,
        .species = SPECIES_KINGLER,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_PAINTER_CELINA] =
{
    .trainerName = _("Celina"),
    PAINTER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 50,
        .species = SPECIES_SMEARGLE,
        IVS(6),
        .moves = {MOVE_FLY, MOVE_DIG, MOVE_DIVE, MOVE_BOUNCE},
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_PAINTER_RAYNA] =
{
    .trainerName = _("Rayna"),
    PAINTER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 50,
        .species = SPECIES_SMEARGLE,
        IVS(6),
        .moves = {MOVE_CROSS_CHOP, MOVE_MEGAHORN, MOVE_DOUBLE_EDGE, MOVE_SELF_DESTRUCT},
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_LADY_GILLIAN] =
{
    .trainerName = _("Gillian"),
    .trainerClass = TRAINER_CLASS_LADY_FRLG,
    .trainerPic = TRAINER_PIC_LADY_FRLG,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .items = {ITEM_FULL_RESTORE},
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 47,
        .species = SPECIES_MAREEP,
        .heldItem = ITEM_STARDUST,
        },
        {
        .lvl = 48,
        .species = SPECIES_MAREEP,
        .heldItem = ITEM_STARDUST,
        },
        {
        .lvl = 49,
        .species = SPECIES_FLAAFFY,
        .heldItem = ITEM_NUGGET,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_YOUNGSTER_DESTIN] =
{
    .trainerName = _("Destin"),
    YOUNGSTER_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 48,
        .species = SPECIES_RATICATE,
        },
        {
        .lvl = 48,
        .species = SPECIES_PIDGEOTTO,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_SWIMMER_MALE_TOBY] =
{
    .trainerName = _("Toby"),
    .trainerClass = TRAINER_CLASS_SWIMMER_M_FRLG,
    .trainerPic = TRAINER_PIC_SWIMMER_M_FRLG,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 48,
        .species = SPECIES_POLIWHIRL,
        },
        {
        .lvl = 48,
        .species = SPECIES_TENTACOOL,
        },
        {
        .lvl = 48,
        .species = SPECIES_TENTACRUEL,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_TEAM_ROCKET_GRUNT_49] =
{
    .trainerName = _("Grunt"),
    .trainerClass = TRAINER_CLASS_TEAM_ROCKET_FRLG,
    .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M_FRLG,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 48,
        .species = SPECIES_RATTATA,
        },
        {
        .lvl = 48,
        .species = SPECIES_GRIMER,
        },
        {
        .lvl = 48,
        .species = SPECIES_MUK,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_TEAM_ROCKET_GRUNT_50] =
{
    .trainerName = _("Grunt"),
    .trainerClass = TRAINER_CLASS_TEAM_ROCKET_FRLG,
    .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M_FRLG,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 49,
        .species = SPECIES_KOFFING,
        .moves = {MOVE_MEMENTO, MOVE_HAZE, MOVE_SMOKESCREEN, MOVE_SLUDGE},
        },
        {
        .lvl = 49,
        .species = SPECIES_WEEZING,
        .moves = {MOVE_HAZE, MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SELF_DESTRUCT},
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_TEAM_ROCKET_GRUNT_51] =
{
    .trainerName = _("Grunt"),
    .trainerClass = TRAINER_CLASS_TEAM_ROCKET_FRLG,
    .trainerPic = TRAINER_PIC_ROCKET_GRUNT_F_FRLG,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 48,
        .species = SPECIES_EKANS,
        IVS(6),
        },
        {
        .lvl = 48,
        .species = SPECIES_GLOOM,
        IVS(6),
        },
        {
        .lvl = 48,
        .species = SPECIES_GLOOM,
        IVS(6),
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_BIRD_KEEPER_MILO] =
{
    .trainerName = _("Milo"),
    BIRD_KEEPER_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 47,
        .species = SPECIES_PIDGEY,
        },
        {
        .lvl = 49,
        .species = SPECIES_PIDGEOTTO,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_BIRD_KEEPER_CHAZ] =
{
    .trainerName = _("Chaz"),
    BIRD_KEEPER_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 47,
        .species = SPECIES_SPEAROW,
        },
        {
        .lvl = 49,
        .species = SPECIES_FEAROW,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_BIRD_KEEPER_HAROLD] =
{
    .trainerName = _("Harold"),
    BIRD_KEEPER_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 47,
        .species = SPECIES_HOOTHOOT,
        },
        {
        .lvl = 49,
        .species = SPECIES_NOCTOWL,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_FISHERMAN_TYLOR] =
{
    .trainerName = _("Tylor"),
    FISHERMAN_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 49,
        .species = SPECIES_QWILFISH,
        },
        {
        .lvl = 49,
        .species = SPECIES_QWILFISH,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_SWIMMER_MALE_MYMO] =
{
    .trainerName = _("Mymo"),
    .trainerClass = TRAINER_CLASS_SWIMMER_M_FRLG,
    .trainerPic = TRAINER_PIC_SWIMMER_M_FRLG,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 49,
        .species = SPECIES_KINGLER,
        },
        {
        .lvl = 49,
        .species = SPECIES_WARTORTLE,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_SWIMMER_FEMALE_NICOLE] =
{
    .trainerName = _("Nicole"),
    .trainerClass = TRAINER_CLASS_SWIMMER_F_FRLG,
    .trainerPic = TRAINER_PIC_SWIMMER_F_FRLG,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 50,
        .species = SPECIES_MARILL,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_SIS_AND_BRO_AVA_GEB] =
{
    .trainerName = _("Ava & Geb"),
    .trainerClass = TRAINER_CLASS_SIS_AND_BRO_FRLG,
    .trainerPic = TRAINER_PIC_SIS_AND_BRO_FRLG,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 50,
        .species = SPECIES_POLIWHIRL,
        },
        {
        .lvl = 50,
        .species = SPECIES_STARMIE,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_AROMA_LADY_ROSE] =
{
    .trainerName = _("Rose"),
    .trainerClass = TRAINER_CLASS_AROMA_LADY_FRLG,
    .trainerPic = TRAINER_PIC_AROMA_LADY_FRLG,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 49,
        .species = SPECIES_SUNKERN,
        },
        {
        .lvl = 49,
        .species = SPECIES_SUNFLORA,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_SWIMMER_MALE_SAMIR] =
{
    .trainerName = _("Samir"),
    .trainerClass = TRAINER_CLASS_SWIMMER_M_FRLG,
    .trainerPic = TRAINER_PIC_SWIMMER_M_FRLG,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 50,
        .species = SPECIES_GYARADOS,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_SWIMMER_FEMALE_DENISE] =
{
    .trainerName = _("Denise"),
    .trainerClass = TRAINER_CLASS_SWIMMER_F_FRLG,
    .trainerPic = TRAINER_PIC_SWIMMER_F_FRLG,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 49,
        .species = SPECIES_CHINCHOU,
        },
        {
        .lvl = 49,
        .species = SPECIES_LANTURN,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_TWINS_MIU_MIA] =
{
    .trainerName = _("Miu & Mia"),
    .trainerClass = TRAINER_CLASS_TWINS_FRLG,
    .trainerPic = TRAINER_PIC_TWINS_FRLG,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_TWINS,
    .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 50,
        .species = SPECIES_PIKACHU,
        },
        {
        .lvl = 50,
        .species = SPECIES_PIKACHU,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_HIKER_EARL] =
{
    .trainerName = _("Earl"),
    HIKER_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 49,
        .species = SPECIES_ONIX,
        },
        {
        .lvl = 49,
        .species = SPECIES_MACHOKE,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_RUIN_MANIAC_FOSTER] =
{
    .trainerName = _("Foster"),
    RUIN_MANIAC_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 50,
        .species = SPECIES_GOLEM,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_RUIN_MANIAC_LARRY] =
{
    .trainerName = _("Larry"),
    RUIN_MANIAC_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 49,
        .species = SPECIES_MACHOKE,
        },
        {
        .lvl = 49,
        .species = SPECIES_MACHOKE,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_HIKER_DARYL] =
{
    .trainerName = _("Daryl"),
    HIKER_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 50,
        .species = SPECIES_SUDOWOODO,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_POKEMANIAC_HECTOR] =
{
    .trainerName = _("Hector"),
    POKE_MANIAC_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 49,
        .species = SPECIES_RHYHORN,
        IVS(3),
        },
        {
        .lvl = 49,
        .species = SPECIES_KANGASKHAN,
        IVS(3),
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_PSYCHIC_DARIO] =
{
    .trainerName = _("Dario"),
    .trainerClass = TRAINER_CLASS_PSYCHIC_FRLG,
    .trainerPic = TRAINER_PIC_PSYCHIC_M_FRLG,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 52,
        .species = SPECIES_GIRAFARIG,
        IVS(12),
        .moves = {MOVE_CRUNCH, MOVE_PSYBEAM, MOVE_ODOR_SLEUTH, MOVE_AGILITY},
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_PSYCHIC_RODETTE] =
{
    .trainerName = _("Rodette"),
    .trainerClass = TRAINER_CLASS_PSYCHIC_FRLG,
    .trainerPic = TRAINER_PIC_PSYCHIC_F_FRLG,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 48,
        .species = SPECIES_NATU,
        IVS(12),
        .moves = {MOVE_NIGHT_SHADE, MOVE_CONFUSE_RAY, MOVE_WISH, MOVE_FUTURE_SIGHT},
        },
        {
        .lvl = 48,
        .species = SPECIES_DROWZEE,
        IVS(12),
        .moves = {MOVE_PSYCHIC, MOVE_DISABLE, MOVE_PSYCH_UP, MOVE_FUTURE_SIGHT},
        },
        {
        .lvl = 50,
        .species = SPECIES_HYPNO,
        IVS(12),
        .moves = {MOVE_PSYCHIC, MOVE_HYPNOSIS, MOVE_PSYCH_UP, MOVE_FUTURE_SIGHT},
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_AROMA_LADY_MIAH] =
{
    .trainerName = _("Miah"),
    .trainerClass = TRAINER_CLASS_AROMA_LADY_FRLG,
    .trainerPic = TRAINER_PIC_AROMA_LADY_FRLG,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 50,
        .species = SPECIES_BELLOSSOM,
        },
        {
        .lvl = 50,
        .species = SPECIES_BELLOSSOM,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_YOUNG_COUPLE_EVE_JON] =
{
    .trainerName = _("Eve & Jon"),
    .trainerClass = TRAINER_CLASS_YOUNG_COUPLE_FRLG,
    .trainerPic = TRAINER_PIC_YOUNG_COUPLE_FRLG,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_GIRL,
    .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 50,
        .species = SPECIES_GOLDUCK,
        },
        {
        .lvl = 50,
        .species = SPECIES_PSYDUCK,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_JUGGLER_MASON] =
{
    .trainerName = _("Mason"),
    JUGGLER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 4,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 47,
        .species = SPECIES_VOLTORB,
        .moves = {MOVE_SWIFT, MOVE_LIGHT_SCREEN, MOVE_SPARK, MOVE_SONIC_BOOM},
        },
        {
        .lvl = 47,
        .species = SPECIES_PINECO,
        .moves = {MOVE_SPIKES, MOVE_BIDE, MOVE_RAPID_SPIN, MOVE_TAKE_DOWN},
        },
        {
        .lvl = 47,
        .species = SPECIES_VOLTORB,
        .moves = {MOVE_SWIFT, MOVE_LIGHT_SCREEN, MOVE_SPARK, MOVE_SONIC_BOOM},
        },
        {
        .lvl = 47,
        .species = SPECIES_PINECO,
        .moves = {MOVE_SPIKES, MOVE_BIDE, MOVE_RAPID_SPIN, MOVE_EXPLOSION},
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_CRUSH_GIRL_CYNDY] =
{
    .trainerName = _("Cyndy"),
    .trainerClass = TRAINER_CLASS_CRUSH_GIRL_FRLG,
    .trainerPic = TRAINER_PIC_CRUSH_GIRL_FRLG,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 48,
        .species = SPECIES_PRIMEAPE,
        IVS(6),
        .heldItem = ITEM_BLACK_BELT,
        },
        {
        .lvl = 48,
        .species = SPECIES_HITMONTOP,
        IVS(6),
        .heldItem = ITEM_BLACK_BELT,
        },
        {
        .lvl = 48,
        .species = SPECIES_MACHOKE,
        IVS(6),
        .heldItem = ITEM_BLACK_BELT,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_CRUSH_GIRL_JOCELYN] =
{
    .trainerName = _("Jocelyn"),
    .trainerClass = TRAINER_CLASS_CRUSH_GIRL_FRLG,
    .trainerPic = TRAINER_PIC_CRUSH_GIRL_FRLG,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 38,
        .species = SPECIES_HITMONCHAN,
        IVS(6),
        .heldItem = ITEM_BLACK_BELT,
        },
        {
        .lvl = 38,
        .species = SPECIES_HITMONCHAN,
        IVS(6),
        .heldItem = ITEM_BLACK_BELT,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_TAMER_EVAN] =
{
    .trainerName = _("Evan"),
    TAMER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 48,
        .species = SPECIES_SANDSLASH,
        IVS(4),
        },
        {
        .lvl = 48,
        .species = SPECIES_LICKITUNG,
        IVS(4),
        },
        {
        .lvl = 49,
        .species = SPECIES_URSARING,
        IVS(4),
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_POKEMANIAC_MARK_2] =
{
    .trainerName = _("Mark"),
    POKE_MANIAC_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 33,
        .species = SPECIES_RHYHORN,
        IVS(10),
        },
        {
        .lvl = 33,
        .species = SPECIES_LICKITUNG,
        IVS(10),
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_PKMN_RANGER_LOGAN] =
{
    .trainerName = _("Logan"),
    .trainerClass = TRAINER_CLASS_PKMN_RANGER_FRLG,
    .trainerPic = TRAINER_PIC_POKEMON_RANGER_M_FRLG,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
    .items = {ITEM_FULL_RESTORE},
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 37,
        .species = SPECIES_EXEGGCUTE,
        IVS(12),
        .moves = {MOVE_SLEEP_POWDER, MOVE_POISON_POWDER, MOVE_STUN_SPORE, MOVE_CONFUSION},
        },
        {
        .lvl = 40,
        .species = SPECIES_EXEGGUTOR,
        IVS(12),
        .moves = {MOVE_EGG_BOMB, MOVE_STOMP, MOVE_CONFUSION, MOVE_HYPNOSIS},
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_PKMN_RANGER_JACKSON] =
{
    .trainerName = _("Jackson"),
    .trainerClass = TRAINER_CLASS_PKMN_RANGER_FRLG,
    .trainerPic = TRAINER_PIC_POKEMON_RANGER_M_FRLG,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
    .items = {ITEM_FULL_RESTORE},
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .partySize = 3,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 49,
        .species = SPECIES_TANGELA,
        IVS(12),
        .moves = {MOVE_SLAM, MOVE_MEGA_DRAIN, MOVE_BIND, MOVE_INGRAIN},
        },
        {
        .lvl = 49,
        .species = SPECIES_EXEGGCUTE,
        IVS(12),
        .moves = {MOVE_CONFUSION, MOVE_POISON_POWDER, MOVE_BARRAGE, MOVE_REFLECT},
        },
        {
        .lvl = 49,
        .species = SPECIES_EXEGGUTOR,
        IVS(12),
        .moves = {MOVE_CONFUSION, MOVE_EGG_BOMB, MOVE_SLEEP_POWDER, MOVE_STOMP},
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_PKMN_RANGER_BETH] =
{
    .trainerName = _("Beth"),
    .trainerClass = TRAINER_CLASS_PKMN_RANGER_FRLG,
    .trainerPic = TRAINER_PIC_POKEMON_RANGER_F_FRLG,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
    .items = {ITEM_FULL_RESTORE},
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .partySize = 3,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 38,
        .species = SPECIES_BELLSPROUT,
        IVS(12),
        },
        {
        .lvl = 38,
        .species = SPECIES_GLOOM,
        IVS(12),
        },
        {
        .lvl = 38,
        .species = SPECIES_GLOOM,
        IVS(12),
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_PKMN_RANGER_KATELYN] =
{
    .trainerName = _("Katelyn"),
    .trainerClass = TRAINER_CLASS_PKMN_RANGER_FRLG,
    .trainerPic = TRAINER_PIC_POKEMON_RANGER_F_FRLG,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
    .items = {ITEM_FULL_RESTORE},
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .partySize = 1,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 52,
        .species = SPECIES_CHANSEY,
        IVS(12),
        .moves = {MOVE_EGG_BOMB, MOVE_DEFENSE_CURL, MOVE_MINIMIZE, MOVE_SOFT_BOILED},
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_COOLTRAINER_LEROY] =
{
    .trainerName = _("Leroy"),
    .trainerClass = TRAINER_CLASS_COOLTRAINER_FRLG,
    .trainerPic = TRAINER_PIC_COOLTRAINER_M_FRLG,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
    .items = {ITEM_FULL_RESTORE},
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .partySize = 5,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 47,
        .species = SPECIES_RHYDON,
        IVS(12),
        .moves = {MOVE_TAKE_DOWN, MOVE_HORN_DRILL, MOVE_ROCK_BLAST, MOVE_SCARY_FACE},
        },
        {
        .lvl = 48,
        .species = SPECIES_SLOWBRO,
        IVS(12),
        .moves = {MOVE_PSYCHIC, MOVE_HEADBUTT, MOVE_AMNESIA, MOVE_DISABLE},
        },
        {
        .lvl = 47,
        .species = SPECIES_KANGASKHAN,
        IVS(12),
        .moves = {MOVE_DIZZY_PUNCH, MOVE_BITE, MOVE_ENDURE, MOVE_REVERSAL},
        },
        {
        .lvl = 48,
        .species = SPECIES_MACHOKE,
        IVS(12),
        .moves = {MOVE_CROSS_CHOP, MOVE_VITAL_THROW, MOVE_REVENGE, MOVE_SEISMIC_TOSS},
        },
        {
        .lvl = 50,
        .species = SPECIES_URSARING,
        IVS(12),
        .moves = {MOVE_SLASH, MOVE_FAINT_ATTACK, MOVE_SNORE, MOVE_REST},
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_COOLTRAINER_MICHELLE] =
{
    .trainerName = _("Michelle"),
    .trainerClass = TRAINER_CLASS_COOLTRAINER_FRLG,
    .trainerPic = TRAINER_PIC_COOLTRAINER_F_FRLG,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
    .items = {ITEM_HYPER_POTION},
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .partySize = 5,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 47,
        .species = SPECIES_PERSIAN,
        IVS(12),
        .moves = {MOVE_SLASH, MOVE_SCREECH, MOVE_FAINT_ATTACK, MOVE_BITE},
        },
        {
        .lvl = 47,
        .species = SPECIES_DEWGONG,
        IVS(12),
        .moves = {MOVE_ICE_BEAM, MOVE_TAKE_DOWN, MOVE_ICY_WIND, MOVE_GROWL},
        },
        {
        .lvl = 48,
        .species = SPECIES_NINETALES,
        IVS(12),
        .moves = {MOVE_FLAMETHROWER, MOVE_CONFUSE_RAY, MOVE_WILL_O_WISP, MOVE_GRUDGE},
        },
        {
        .lvl = 48,
        .species = SPECIES_RAPIDASH,
        IVS(12),
        .moves = {MOVE_BOUNCE, MOVE_AGILITY, MOVE_FIRE_SPIN, MOVE_TAKE_DOWN},
        },
        {
        .lvl = 50,
        .species = SPECIES_GIRAFARIG,
        IVS(12),
        .moves = {MOVE_CRUNCH, MOVE_PSYBEAM, MOVE_STOMP, MOVE_ODOR_SLEUTH},
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_COOL_COUPLE_LEX_NYA] =
{
    .trainerName = _("Lex & Nya"),
    COOL_COUPLE_INFO,
    .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE},
    .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 52,
        .species = SPECIES_MILTANK,
        IVS(12),
        .moves = {MOVE_BODY_SLAM, MOVE_MILK_DRINK, MOVE_GROWL, MOVE_DEFENSE_CURL},
        },
        {
        .lvl = 52,
        .species = SPECIES_TAUROS,
        IVS(12),
        .moves = {MOVE_THRASH, MOVE_HORN_ATTACK, MOVE_PURSUIT, MOVE_SWAGGER},
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_RUIN_MANIAC_BRANDON] =
{
    .trainerName = _("Brandon"),
    RUIN_MANIAC_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 50,
        .species = SPECIES_ONIX,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_RUIN_MANIAC_BENJAMIN] =
{
    .trainerName = _("Benjamin"),
    RUIN_MANIAC_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 48,
        .species = SPECIES_GEODUDE,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_BLAST, MOVE_ROLLOUT, MOVE_SELF_DESTRUCT},
        },
        {
        .lvl = 48,
        .species = SPECIES_GRAVELER,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_BLAST, MOVE_ROCK_THROW, MOVE_SELF_DESTRUCT},
        },
        {
        .lvl = 48,
        .species = SPECIES_GRAVELER,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_BLAST, MOVE_ROCK_THROW, MOVE_SELF_DESTRUCT},
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_PAINTER_EDNA] =
{
    .trainerName = _("Edna"),
    PAINTER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 50,
        .species = SPECIES_SMEARGLE,
        IVS(6),
        .moves = {MOVE_FAKE_OUT, MOVE_EXTREME_SPEED, MOVE_PROTECT, MOVE_QUICK_ATTACK},
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_GENTLEMAN_CLIFFORD] =
{
    .trainerName = _("Clifford"),
    GENTLEMAN_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 49,
        .species = SPECIES_MAROWAK,
        },
        {
        .lvl = 49,
        .species = SPECIES_GOLDUCK,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_LADY_SELPHY] =
{
    .trainerName = _("Selphy"),
    .trainerClass = TRAINER_CLASS_LADY_FRLG,
    .trainerPic = TRAINER_PIC_LADY_FRLG,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .items = {ITEM_FULL_RESTORE},
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 49,
        .species = SPECIES_PERSIAN,
        .moves = {MOVE_PAY_DAY, MOVE_BITE, MOVE_TAUNT, MOVE_TORMENT},
        .heldItem = ITEM_NUGGET,
        },
        {
        .lvl = 49,
        .species = SPECIES_PERSIAN,
        .moves = {MOVE_PAY_DAY, MOVE_SCRATCH, MOVE_TORMENT, MOVE_TAUNT},
        .heldItem = ITEM_NUGGET,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_RUIN_MANIAC_LAWSON] =
{
    .trainerName = _("Lawson"),
    RUIN_MANIAC_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 47,
        .species = SPECIES_ONIX,
        },
        {
        .lvl = 48,
        .species = SPECIES_GRAVELER,
        },
        {
        .lvl = 49,
        .species = SPECIES_MAROWAK,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_PSYCHIC_LAURA] =
{
    .trainerName = _("Laura"),
    .trainerClass = TRAINER_CLASS_PSYCHIC_FRLG,
    .trainerPic = TRAINER_PIC_PSYCHIC_F_FRLG,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 48,
        .species = SPECIES_NATU,
        IVS(12),
        },
        {
        .lvl = 48,
        .species = SPECIES_NATU,
        IVS(12),
        },
        {
        .lvl = 49,
        .species = SPECIES_XATU,
        IVS(12),
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_PKMN_BREEDER_BETHANY] =
{
    .trainerName = _("Bethany"),
    .trainerClass = TRAINER_CLASS_PKMN_BREEDER_FRLG,
    .trainerPic = TRAINER_PIC_POKEMON_BREEDER_FRLG,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 50,
        .species = SPECIES_CHANSEY,
        IVS(3),
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_PKMN_BREEDER_ALLISON] =
{
    .trainerName = _("Allison"),
    .trainerClass = TRAINER_CLASS_PKMN_BREEDER_FRLG,
    .trainerPic = TRAINER_PIC_POKEMON_BREEDER_FRLG,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 48,
        .species = SPECIES_CLEFAIRY,
        IVS(3),
        },
        {
        .lvl = 48,
        .species = SPECIES_CLEFAIRY,
        IVS(3),
        },
        {
        .lvl = 48,
        .species = SPECIES_CLEFABLE,
        IVS(3),
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_BUG_CATCHER_GARRET] =
{
    .trainerName = _("Garret"),
    BUG_CATCHER_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 49,
        .species = SPECIES_HERACROSS,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_BUG_CATCHER_JONAH] =
{
    .trainerName = _("Jonah"),
    BUG_CATCHER_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 4,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 45,
        .species = SPECIES_YANMA,
        },
        {
        .lvl = 45,
        .species = SPECIES_BEEDRILL,
        },
        {
        .lvl = 46,
        .species = SPECIES_YANMA,
        },
        {
        .lvl = 47,
        .species = SPECIES_BEEDRILL,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_BUG_CATCHER_VANCE] =
{
    .trainerName = _("Vance"),
    BUG_CATCHER_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 48,
        .species = SPECIES_VENONAT,
        },
        {
        .lvl = 48,
        .species = SPECIES_VENOMOTH,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_YOUNGSTER_NASH] =
{
    .trainerName = _("Nash"),
    YOUNGSTER_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 47,
        .species = SPECIES_WEEPINBELL,
        },
        {
        .lvl = 47,
        .species = SPECIES_WEEPINBELL,
        },
        {
        .lvl = 49,
        .species = SPECIES_VICTREEBEL,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_YOUNGSTER_CORDELL] =
{
    .trainerName = _("Cordell"),
    YOUNGSTER_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 48,
        .species = SPECIES_FARFETCHD,
        },
        {
        .lvl = 48,
        .species = SPECIES_FARFETCHD,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_LASS_DALIA] =
{
    .trainerName = _("Dalia"),
    LASS_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 4,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 46,
        .species = SPECIES_HOPPIP,
        },
        {
        .lvl = 47,
        .species = SPECIES_HOPPIP,
        },
        {
        .lvl = 47,
        .species = SPECIES_SKIPLOOM,
        },
        {
        .lvl = 48,
        .species = SPECIES_SKIPLOOM,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_LASS_JOANA] =
{
    .trainerName = _("Joana"),
    LASS_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 49,
        .species = SPECIES_SNUBBULL,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_CAMPER_RILEY] =
{
    .trainerName = _("Riley"),
    CAMPER_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 49,
        .species = SPECIES_PINSIR,
        },
        {
        .lvl = 50,
        .species = SPECIES_HERACROSS,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_PICNICKER_MARCY] =
{
    .trainerName = _("Marcy"),
    PICNICKER_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 48,
        .species = SPECIES_PARAS,
        },
        {
        .lvl = 48,
        .species = SPECIES_PARAS,
        },
        {
        .lvl = 49,
        .species = SPECIES_PARASECT,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_RUIN_MANIAC_LAYTON] =
{
    .trainerName = _("Layton"),
    RUIN_MANIAC_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 48,
        .species = SPECIES_SANDSLASH,
        },
        {
        .lvl = 48,
        .species = SPECIES_ONIX,
        },
        {
        .lvl = 48,
        .species = SPECIES_SANDSLASH,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_PICNICKER_KELSEY_2] =
{
    .trainerName = _("Kelsey"),
    PICNICKER_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 21,
        .species = SPECIES_NIDORAN_M,
        IVS(2),
        },
        {
        .lvl = 21,
        .species = SPECIES_NIDORAN_F,
        IVS(2),
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_PICNICKER_KELSEY_3] =
{
    .trainerName = _("Kelsey"),
    PICNICKER_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 29,
        .species = SPECIES_NIDORINO,
        IVS(7),
        },
        {
        .lvl = 29,
        .species = SPECIES_NIDORINA,
        IVS(7),
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_PICNICKER_KELSEY_4] =
{
    .trainerName = _("Kelsey"),
    PICNICKER_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 49,
        .species = SPECIES_NIDORINO,
        IVS(9),
        },
        {
        .lvl = 49,
        .species = SPECIES_NIDORINA,
        IVS(9),
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_CAMPER_RICKY_2] =
{
    .trainerName = _("Ricky"),
    CAMPER_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 22,
        .species = SPECIES_SQUIRTLE,
        IVS(2),
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_CAMPER_RICKY_3] =
{
    .trainerName = _("Ricky"),
    CAMPER_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 30,
        .species = SPECIES_WARTORTLE,
        IVS(7),
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_CAMPER_RICKY_4] =
{
    .trainerName = _("Ricky"),
    CAMPER_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 55,
        .species = SPECIES_WARTORTLE,
        IVS(14),
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_CAMPER_JEFF_2] =
{
    .trainerName = _("Jeff"),
    CAMPER_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 21,
        .species = SPECIES_SPEAROW,
        IVS(2),
        },
        {
        .lvl = 21,
        .species = SPECIES_RATICATE,
        IVS(2),
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_CAMPER_JEFF_3] =
{
    .trainerName = _("Jeff"),
    CAMPER_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 29,
        .species = SPECIES_FEAROW,
        IVS(7),
        },
        {
        .lvl = 29,
        .species = SPECIES_RATICATE,
        IVS(7),
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_CAMPER_JEFF_4] =
{
    .trainerName = _("Jeff"),
    CAMPER_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 54,
        .species = SPECIES_FEAROW,
        IVS(14),
        },
        {
        .lvl = 54,
        .species = SPECIES_RATICATE,
        IVS(14),
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_PICNICKER_ISABELLE_2] =
{
    .trainerName = _("Isabelle"),
    PICNICKER_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 21,
        .species = SPECIES_PIDGEOTTO,
        IVS(2),
        },
        {
        .lvl = 21,
        .species = SPECIES_PIDGEOTTO,
        IVS(2),
        },
        {
        .lvl = 18,
        .species = SPECIES_PIDGEY,
        IVS(2),
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_PICNICKER_ISABELLE_3] =
{
    .trainerName = _("Isabelle"),
    PICNICKER_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 29,
        .species = SPECIES_PIDGEOTTO,
        IVS(7),
        },
        {
        .lvl = 29,
        .species = SPECIES_PIDGEOTTO,
        IVS(7),
        },
        {
        .lvl = 26,
        .species = SPECIES_PIDGEOTTO,
        IVS(7),
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_PICNICKER_ISABELLE_4] =
{
    .trainerName = _("Isabelle"),
    PICNICKER_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 47,
        .species = SPECIES_PIDGEOTTO,
        IVS(9),
        },
        {
        .lvl = 47,
        .species = SPECIES_PIDGEOTTO,
        IVS(9),
        },
        {
        .lvl = 50,
        .species = SPECIES_PIDGEOT,
        IVS(9),
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_YOUNGSTER_YASU_2] =
{
    .trainerName = _("Yasu"),
    YOUNGSTER_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 22,
        .species = SPECIES_RATTATA,
        IVS(4),
        },
        {
        .lvl = 22,
        .species = SPECIES_RATICATE,
        IVS(4),
        },
        {
        .lvl = 22,
        .species = SPECIES_RATICATE,
        IVS(4),
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_YOUNGSTER_YASU_3] =
{
    .trainerName = _("Yasu"),
    YOUNGSTER_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 47,
        .species = SPECIES_RATICATE,
        IVS(9),
        },
        {
        .lvl = 47,
        .species = SPECIES_RATICATE,
        IVS(9),
        },
        {
        .lvl = 47,
        .species = SPECIES_RATICATE,
        IVS(9),
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_ENGINEER_BERNIE_2] =
{
    .trainerName = _("Bernie"),
    ENGINEER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 28,
        .species = SPECIES_MAGNETON,
        IVS(7),
        },
        {
        .lvl = 28,
        .species = SPECIES_MAGNETON,
        IVS(7),
        },
        {
        .lvl = 28,
        .species = SPECIES_MAGNETON,
        IVS(7),
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_GAMER_DARIAN_2] =
{
    .trainerName = _("Darian"),
    GAMBLER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 29,
        .species = SPECIES_GROWLITHE,
        IVS(7),
        },
        {
        .lvl = 29,
        .species = SPECIES_VULPIX,
        IVS(7),
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_CAMPER_CHRIS_2] =
{
    .trainerName = _("Chris"),
    CAMPER_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 24,
        .species = SPECIES_GROWLITHE,
        IVS(4),
        },
        {
        .lvl = 24,
        .species = SPECIES_CHARMANDER,
        IVS(4),
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_CAMPER_CHRIS_3] =
{
    .trainerName = _("Chris"),
    CAMPER_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 29,
        .species = SPECIES_GROWLITHE,
        IVS(7),
        },
        {
        .lvl = 29,
        .species = SPECIES_CHARMELEON,
        IVS(7),
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_CAMPER_CHRIS_4] =
{
    .trainerName = _("Chris"),
    CAMPER_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 54,
        .species = SPECIES_ARCANINE,
        IVS(14),
        },
        {
        .lvl = 54,
        .species = SPECIES_CHARMELEON,
        IVS(14),
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_PICNICKER_ALICIA_2] =
{
    .trainerName = _("Alicia"),
    PICNICKER_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 25,
        .species = SPECIES_MEOWTH,
        IVS(4),
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_PICNICKER_ALICIA_3] =
{
    .trainerName = _("Alicia"),
    PICNICKER_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 30,
        .species = SPECIES_PERSIAN,
        IVS(7),
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_PICNICKER_ALICIA_4] =
{
    .trainerName = _("Alicia"),
    PICNICKER_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 55,
        .species = SPECIES_PERSIAN,
        IVS(14),
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_HIKER_JEREMY_2] =
{
    .trainerName = _("Jeremy"),
    HIKER_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 30,
        .species = SPECIES_MACHOKE,
        IVS(7),
        },
        {
        .lvl = 28,
        .species = SPECIES_ONIX,
        IVS(7),
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_POKEMANIAC_MARK_3] =
{
    .trainerName = _("Mark"),
    POKE_MANIAC_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 54,
        .species = SPECIES_RHYDON,
        IVS(18),
        },
        {
        .lvl = 54,
        .species = SPECIES_LICKITUNG,
        IVS(18),
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_POKEMANIAC_HERMAN_2] =
{
    .trainerName = _("Herman"),
    POKE_MANIAC_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 29,
        .species = SPECIES_MAROWAK,
        IVS(10),
        },
        {
        .lvl = 29,
        .species = SPECIES_SLOWBRO,
        IVS(10),
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_POKEMANIAC_HERMAN_3] =
{
    .trainerName = _("Herman"),
    POKE_MANIAC_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 54,
        .species = SPECIES_MAROWAK,
        IVS(18),
        },
        {
        .lvl = 54,
        .species = SPECIES_SLOWBRO,
        IVS(18),
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_HIKER_TRENT_2] =
{
    .trainerName = _("Trent"),
    HIKER_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 31,
        .species = SPECIES_ONIX,
        IVS(7),
        },
        {
        .lvl = 31,
        .species = SPECIES_GRAVELER,
        IVS(7),
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_LASS_MEGAN_2] =
{
    .trainerName = _("Megan"),
    LASS_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 5,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 22,
        .species = SPECIES_PIDGEOTTO,
        IVS(4),
        },
        {
        .lvl = 22,
        .species = SPECIES_RATICATE,
        IVS(4),
        },
        {
        .lvl = 23,
        .species = SPECIES_NIDORAN_M,
        IVS(4),
        },
        {
        .lvl = 21,
        .species = SPECIES_MEOWTH,
        IVS(4),
        },
        {
        .lvl = 22,
        .species = SPECIES_PIKACHU,
        IVS(4),
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_LASS_MEGAN_3] =
{
    .trainerName = _("Megan"),
    LASS_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 5,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 46,
        .species = SPECIES_PIDGEOT,
        IVS(9),
        },
        {
        .lvl = 47,
        .species = SPECIES_RATICATE,
        IVS(9),
        },
        {
        .lvl = 47,
        .species = SPECIES_NIDORINO,
        IVS(9),
        },
        {
        .lvl = 47,
        .species = SPECIES_PERSIAN,
        IVS(9),
        },
        {
        .lvl = 48,
        .species = SPECIES_RAICHU,
        IVS(9),
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_SUPER_NERD_GLENN_2] =
{
    .trainerName = _("Glenn"),
    SUPER_NERD_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 28,
        .species = SPECIES_MUK,
        IVS(7),
        },
        {
        .lvl = 28,
        .species = SPECIES_MUK,
        IVS(7),
        },
        {
        .lvl = 28,
        .species = SPECIES_MUK,
        IVS(7),
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_GAMER_RICH_2] =
{
    .trainerName = _("Rich"),
    GAMBLER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 30,
        .species = SPECIES_GROWLITHE,
        IVS(7),
        },
        {
        .lvl = 30,
        .species = SPECIES_VULPIX,
        IVS(7),
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_BIKER_JAREN_2] =
{
    .trainerName = _("Jaren"),
    BIKER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 28,
        .species = SPECIES_MUK,
        IVS(7),
        },
        {
        .lvl = 30,
        .species = SPECIES_MUK,
        IVS(7),
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_FISHERMAN_ELLIOT_2] =
{
    .trainerName = _("Elliot"),
    FISHERMAN_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 4,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 28,
        .species = SPECIES_POLIWHIRL,
        IVS(7),
        },
        {
        .lvl = 28,
        .species = SPECIES_CLOYSTER,
        IVS(7),
        },
        {
        .lvl = 28,
        .species = SPECIES_SEAKING,
        IVS(7),
        },
        {
        .lvl = 28,
        .species = SPECIES_SEADRA,
        IVS(7),
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_ROCKER_LUCA_2] =
{
    .trainerName = _("Luca"),
    ROCKER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 33,
        .species = SPECIES_ELECTRODE,
        IVS(7),
        },
        {
        .lvl = 33,
        .species = SPECIES_ELECTRODE,
        IVS(7),
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_BEAUTY_SHEILA_2] =
{
    .trainerName = _("Sheila"),
    BEAUTY_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 49,
        .species = SPECIES_CLEFAIRY,
        IVS(9),
        },
        {
        .lvl = 49,
        .species = SPECIES_PERSIAN,
        IVS(9),
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_BIRD_KEEPER_ROBERT_2] =
{
    .trainerName = _("Robert"),
    BIRD_KEEPER_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 4,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 28,
        .species = SPECIES_PIDGEOTTO,
        IVS(7),
        },
        {
        .lvl = 28,
        .species = SPECIES_PIDGEOTTO,
        IVS(7),
        },
        {
        .lvl = 28,
        .species = SPECIES_FEAROW,
        IVS(7),
        },
        {
        .lvl = 28,
        .species = SPECIES_FEAROW,
        IVS(7),
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_BIRD_KEEPER_ROBERT_3] =
{
    .trainerName = _("Robert"),
    BIRD_KEEPER_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 4,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 47,
        .species = SPECIES_PIDGEOT,
        IVS(9),
        },
        {
        .lvl = 47,
        .species = SPECIES_PIDGEOT,
        IVS(9),
        },
        {
        .lvl = 47,
        .species = SPECIES_FEAROW,
        IVS(9),
        },
        {
        .lvl = 47,
        .species = SPECIES_FEAROW,
        IVS(9),
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_PICNICKER_SUSIE_2] =
{
    .trainerName = _("Susie"),
    PICNICKER_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 5,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 27,
        .species = SPECIES_PIDGEOTTO,
        IVS(7),
        },
        {
        .lvl = 27,
        .species = SPECIES_MEOWTH,
        IVS(7),
        },
        {
        .lvl = 27,
        .species = SPECIES_RATICATE,
        IVS(7),
        },
        {
        .lvl = 27,
        .species = SPECIES_PIKACHU,
        IVS(7),
        },
        {
        .lvl = 27,
        .species = SPECIES_MEOWTH,
        IVS(7),
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_PICNICKER_SUSIE_3] =
{
    .trainerName = _("Susie"),
    PICNICKER_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 5,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 47,
        .species = SPECIES_PIDGEOTTO,
        IVS(9),
        },
        {
        .lvl = 47,
        .species = SPECIES_PERSIAN,
        IVS(9),
        },
        {
        .lvl = 47,
        .species = SPECIES_RATICATE,
        IVS(9),
        },
        {
        .lvl = 47,
        .species = SPECIES_PIKACHU,
        IVS(9),
        },
        {
        .lvl = 47,
        .species = SPECIES_PERSIAN,
        IVS(9),
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_PICNICKER_SUSIE_4] =
{
    .trainerName = _("Susie"),
    PICNICKER_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 5,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 52,
        .species = SPECIES_PIDGEOT,
        IVS(14),
        },
        {
        .lvl = 52,
        .species = SPECIES_PERSIAN,
        IVS(14),
        },
        {
        .lvl = 52,
        .species = SPECIES_RATICATE,
        IVS(14),
        },
        {
        .lvl = 52,
        .species = SPECIES_RAICHU,
        IVS(14),
        },
        {
        .lvl = 52,
        .species = SPECIES_PERSIAN,
        IVS(14),
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_BIKER_LUKAS_2] =
{
    .trainerName = _("Lukas"),
    BIKER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 4,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 47,
        .species = SPECIES_KOFFING,
        IVS(9),
        },
        {
        .lvl = 47,
        .species = SPECIES_KOFFING,
        IVS(9),
        },
        {
        .lvl = 47,
        .species = SPECIES_MUK,
        IVS(9),
        },
        {
        .lvl = 47,
        .species = SPECIES_WEEZING,
        IVS(9),
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_BIRD_KEEPER_BENNY_2] =
{
    .trainerName = _("Benny"),
    BIRD_KEEPER_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 32,
        .species = SPECIES_FEAROW,
        IVS(7),
        },
        {
        .lvl = 32,
        .species = SPECIES_FEAROW,
        IVS(7),
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_BIRD_KEEPER_BENNY_3] =
{
    .trainerName = _("Benny"),
    BIRD_KEEPER_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 49,
        .species = SPECIES_FEAROW,
        IVS(9),
        },
        {
        .lvl = 49,
        .species = SPECIES_FEAROW,
        IVS(9),
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_BIRD_KEEPER_MARLON_2] =
{
    .trainerName = _("Marlon"),
    BIRD_KEEPER_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 30,
        .species = SPECIES_FEAROW,
        IVS(7),
        },
        {
        .lvl = 30,
        .species = SPECIES_DODUO,
        IVS(7),
        },
        {
        .lvl = 30,
        .species = SPECIES_FEAROW,
        IVS(7),
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_BIRD_KEEPER_MARLON_3] =
{
    .trainerName = _("Marlon"),
    BIRD_KEEPER_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 48,
        .species = SPECIES_FEAROW,
        IVS(9),
        },
        {
        .lvl = 48,
        .species = SPECIES_DODRIO,
        IVS(9),
        },
        {
        .lvl = 48,
        .species = SPECIES_FEAROW,
        IVS(9),
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_BEAUTY_GRACE_2] =
{
    .trainerName = _("Grace"),
    BEAUTY_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 49,
        .species = SPECIES_PIDGEOT,
        IVS(9),
        },
        {
        .lvl = 49,
        .species = SPECIES_WIGGLYTUFF,
        IVS(9),
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_BIRD_KEEPER_CHESTER_2] =
{
    .trainerName = _("Chester"),
    BIRD_KEEPER_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 30,
        .species = SPECIES_DODRIO,
        IVS(7),
        },
        {
        .lvl = 30,
        .species = SPECIES_DODRIO,
        IVS(7),
        },
        {
        .lvl = 30,
        .species = SPECIES_DODUO,
        IVS(7),
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_BIRD_KEEPER_CHESTER_3] =
{
    .trainerName = _("Chester"),
    BIRD_KEEPER_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 48,
        .species = SPECIES_DODRIO,
        IVS(9),
        },
        {
        .lvl = 48,
        .species = SPECIES_DODRIO,
        IVS(9),
        },
        {
        .lvl = 48,
        .species = SPECIES_DODRIO,
        IVS(9),
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_PICNICKER_BECKY_2] =
{
    .trainerName = _("Becky"),
    PICNICKER_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 32,
        .species = SPECIES_PIKACHU,
        IVS(7),
        },
        {
        .lvl = 32,
        .species = SPECIES_RAICHU,
        IVS(7),
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_PICNICKER_BECKY_3] =
{
    .trainerName = _("Becky"),
    PICNICKER_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 49,
        .species = SPECIES_PIKACHU,
        IVS(9),
        },
        {
        .lvl = 49,
        .species = SPECIES_RAICHU,
        IVS(9),
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_PICNICKER_BECKY_4] =
{
    .trainerName = _("Becky"),
    PICNICKER_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 54,
        .species = SPECIES_RAICHU,
        IVS(14),
        },
        {
        .lvl = 54,
        .species = SPECIES_RAICHU,
        IVS(14),
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_CRUSH_KIN_RON_MYA_2] =
{
    .trainerName = _("Ron & Mya"),
    CRUSH_KIN_INFO,
    .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 33,
        .species = SPECIES_HITMONCHAN,
        IVS(13),
        .heldItem = ITEM_BLACK_BELT,
        },
        {
        .lvl = 33,
        .species = SPECIES_HITMONLEE,
        IVS(13),
        .heldItem = ITEM_BLACK_BELT,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_CRUSH_KIN_RON_MYA_3] =
{
    .trainerName = _("Ron & Mya"),
    CRUSH_KIN_INFO,
    .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 51,
        .species = SPECIES_HITMONCHAN,
        IVS(15),
        .heldItem = ITEM_BLACK_BELT,
        },
        {
        .lvl = 51,
        .species = SPECIES_HITMONLEE,
        IVS(15),
        .heldItem = ITEM_BLACK_BELT,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_CRUSH_KIN_RON_MYA_4] =
{
    .trainerName = _("Ron & Mya"),
    CRUSH_KIN_INFO,
    .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 56,
        .species = SPECIES_HITMONCHAN,
        IVS(20),
        .heldItem = ITEM_BLACK_BELT,
        },
        {
        .lvl = 56,
        .species = SPECIES_HITMONLEE,
        IVS(20),
        .heldItem = ITEM_BLACK_BELT,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_BIKER_RUBEN_2] =
{
    .trainerName = _("Ruben"),
    BIKER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 48,
        .species = SPECIES_WEEZING,
        IVS(9),
        },
        {
        .lvl = 48,
        .species = SPECIES_WEEZING,
        IVS(9),
        },
        {
        .lvl = 48,
        .species = SPECIES_WEEZING,
        IVS(9),
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_CUE_BALL_CAMRON_2] =
{
    .trainerName = _("Camron"),
    CUE_BALL_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 49,
        .species = SPECIES_PRIMEAPE,
        IVS(9),
        },
        {
        .lvl = 49,
        .species = SPECIES_MACHOKE,
        IVS(9),
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_BIKER_JAXON_2] =
{
    .trainerName = _("Jaxon"),
    BIKER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 49,
        .species = SPECIES_WEEZING,
        IVS(9),
        },
        {
        .lvl = 49,
        .species = SPECIES_MUK,
        IVS(9),
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_CUE_BALL_ISAIAH_2] =
{
    .trainerName = _("Isaiah"),
    CUE_BALL_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 49,
        .species = SPECIES_MACHOKE,
        IVS(9),
        },
        {
        .lvl = 49,
        .species = SPECIES_MACHAMP,
        IVS(9),
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_CUE_BALL_COREY_2] =
{
    .trainerName = _("Corey"),
    CUE_BALL_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 49,
        .species = SPECIES_PRIMEAPE,
        IVS(9),
        },
        {
        .lvl = 49,
        .species = SPECIES_MACHAMP,
        IVS(9),
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_BIRD_KEEPER_JACOB_2] =
{
    .trainerName = _("Jacob"),
    BIRD_KEEPER_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 4,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 28,
        .species = SPECIES_FEAROW,
        IVS(7),
        },
        {
        .lvl = 28,
        .species = SPECIES_SPEAROW,
        IVS(7),
        },
        {
        .lvl = 28,
        .species = SPECIES_FEAROW,
        IVS(7),
        },
        {
        .lvl = 28,
        .species = SPECIES_SPEAROW,
        IVS(7),
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_BIRD_KEEPER_JACOB_3] =
{
    .trainerName = _("Jacob"),
    BIRD_KEEPER_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 4,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 47,
        .species = SPECIES_FEAROW,
        IVS(9),
        },
        {
        .lvl = 47,
        .species = SPECIES_FEAROW,
        IVS(9),
        },
        {
        .lvl = 47,
        .species = SPECIES_FEAROW,
        IVS(9),
        },
        {
        .lvl = 47,
        .species = SPECIES_FEAROW,
        IVS(9),
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_SWIMMER_FEMALE_ALICE_2] =
{
    .trainerName = _("Alice"),
    .trainerClass = TRAINER_CLASS_SWIMMER_F_FRLG,
    .trainerPic = TRAINER_PIC_SWIMMER_F_FRLG,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 49,
        .species = SPECIES_SEAKING,
        IVS(9),
        },
        {
        .lvl = 49,
        .species = SPECIES_SEAKING,
        IVS(9),
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_SWIMMER_MALE_DARRIN_2] =
{
    .trainerName = _("Darrin"),
    .trainerClass = TRAINER_CLASS_SWIMMER_M_FRLG,
    .trainerPic = TRAINER_PIC_SWIMMER_M_FRLG,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 4,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 52,
        .species = SPECIES_SEADRA,
        IVS(14),
        },
        {
        .lvl = 52,
        .species = SPECIES_SEADRA,
        IVS(14),
        },
        {
        .lvl = 52,
        .species = SPECIES_SEADRA,
        IVS(14),
        },
        {
        .lvl = 52,
        .species = SPECIES_SEADRA,
        IVS(14),
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_PICNICKER_MISSY_2] =
{
    .trainerName = _("Missy"),
    PICNICKER_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 49,
        .species = SPECIES_SEAKING,
        IVS(9),
        },
        {
        .lvl = 49,
        .species = SPECIES_SEAKING,
        IVS(9),
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_PICNICKER_MISSY_3] =
{
    .trainerName = _("Missy"),
    PICNICKER_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 54,
        .species = SPECIES_SEAKING,
        IVS(14),
        },
        {
        .lvl = 54,
        .species = SPECIES_SEAKING,
        IVS(14),
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_FISHERMAN_WADE_2] =
{
    .trainerName = _("Wade"),
    FISHERMAN_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 6,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 47,
        .species = SPECIES_MAGIKARP,
        IVS(9),
        },
        {
        .lvl = 47,
        .species = SPECIES_MAGIKARP,
        IVS(9),
        },
        {
        .lvl = 47,
        .species = SPECIES_MAGIKARP,
        IVS(9),
        },
        {
        .lvl = 47,
        .species = SPECIES_MAGIKARP,
        IVS(9),
        },
        {
        .lvl = 47,
        .species = SPECIES_MAGIKARP,
        IVS(9),
        },
        {
        .lvl = 47,
        .species = SPECIES_MAGIKARP,
        IVS(9),
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_SWIMMER_MALE_JACK_2] =
{
    .trainerName = _("Jack"),
    .trainerClass = TRAINER_CLASS_SWIMMER_M_FRLG,
    .trainerPic = TRAINER_PIC_SWIMMER_M_FRLG,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 50,
        .species = SPECIES_STARMIE,
        IVS(9),
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_SIS_AND_BRO_LIL_IAN_2] =
{
    .trainerName = _("Lil & Ian"),
    .trainerClass = TRAINER_CLASS_SIS_AND_BRO_FRLG,
    .trainerPic = TRAINER_PIC_SIS_AND_BRO_FRLG,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 50,
        .species = SPECIES_SEADRA,
        IVS(9),
        },
        {
        .lvl = 50,
        .species = SPECIES_STARMIE,
        IVS(9),
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_SIS_AND_BRO_LIL_IAN_3] =
{
    .trainerName = _("Lil & Ian"),
    .trainerClass = TRAINER_CLASS_SIS_AND_BRO_FRLG,
    .trainerPic = TRAINER_PIC_SIS_AND_BRO_FRLG,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 55,
        .species = SPECIES_SEADRA,
        IVS(14),
        },
        {
        .lvl = 55,
        .species = SPECIES_STARMIE,
        IVS(14),
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_SWIMMER_MALE_FINN_2] =
{
    .trainerName = _("Finn"),
    .trainerClass = TRAINER_CLASS_SWIMMER_M_FRLG,
    .trainerPic = TRAINER_PIC_SWIMMER_M_FRLG,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 50,
        .species = SPECIES_STARMIE,
        IVS(9),
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_CRUSH_GIRL_SHARON_2] =
{
    .trainerName = _("Sharon"),
    .trainerClass = TRAINER_CLASS_CRUSH_GIRL_FRLG,
    .trainerPic = TRAINER_PIC_CRUSH_GIRL_FRLG,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 50,
        .species = SPECIES_MANKEY,
        IVS(15),
        .heldItem = ITEM_BLACK_BELT,
        },
        {
        .lvl = 50,
        .species = SPECIES_PRIMEAPE,
        IVS(15),
        .heldItem = ITEM_BLACK_BELT,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_CRUSH_GIRL_SHARON_3] =
{
    .trainerName = _("Sharon"),
    .trainerClass = TRAINER_CLASS_CRUSH_GIRL_FRLG,
    .trainerPic = TRAINER_PIC_CRUSH_GIRL_FRLG,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 55,
        .species = SPECIES_PRIMEAPE,
        IVS(20),
        .heldItem = ITEM_BLACK_BELT,
        },
        {
        .lvl = 55,
        .species = SPECIES_PRIMEAPE,
        IVS(20),
        .heldItem = ITEM_BLACK_BELT,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_CRUSH_GIRL_TANYA_2] =
{
    .trainerName = _("Tanya"),
    .trainerClass = TRAINER_CLASS_CRUSH_GIRL_FRLG,
    .trainerPic = TRAINER_PIC_CRUSH_GIRL_FRLG,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 50,
        .species = SPECIES_HITMONLEE,
        IVS(15),
        .heldItem = ITEM_BLACK_BELT,
        },
        {
        .lvl = 50,
        .species = SPECIES_HITMONCHAN,
        IVS(15),
        .heldItem = ITEM_BLACK_BELT,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_CRUSH_GIRL_TANYA_3] =
{
    .trainerName = _("Tanya"),
    .trainerClass = TRAINER_CLASS_CRUSH_GIRL_FRLG,
    .trainerPic = TRAINER_PIC_CRUSH_GIRL_FRLG,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 55,
        .species = SPECIES_HITMONLEE,
        IVS(20),
        .heldItem = ITEM_BLACK_BELT,
        },
        {
        .lvl = 55,
        .species = SPECIES_HITMONCHAN,
        IVS(20),
        .heldItem = ITEM_BLACK_BELT,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_BLACK_BELT_SHEA_2] =
{
    .trainerName = _("Shea"),
    BLACK_BELT_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 50,
        .species = SPECIES_MACHOKE,
        IVS(21),
        .heldItem = ITEM_BLACK_BELT,
        },
        {
        .lvl = 50,
        .species = SPECIES_MACHOKE,
        IVS(21),
        .heldItem = ITEM_BLACK_BELT,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_BLACK_BELT_SHEA_3] =
{
    .trainerName = _("Shea"),
    BLACK_BELT_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 55,
        .species = SPECIES_MACHOKE,
        IVS(26),
        .heldItem = ITEM_BLACK_BELT,
        },
        {
        .lvl = 55,
        .species = SPECIES_MACHAMP,
        IVS(26),
        .heldItem = ITEM_BLACK_BELT,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_BLACK_BELT_HUGH_2] =
{
    .trainerName = _("Hugh"),
    BLACK_BELT_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 50,
        .species = SPECIES_MACHOKE,
        IVS(21),
        .heldItem = ITEM_BLACK_BELT,
        },
        {
        .lvl = 50,
        .species = SPECIES_MACHOKE,
        IVS(21),
        .heldItem = ITEM_BLACK_BELT,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_BLACK_BELT_HUGH_3] =
{
    .trainerName = _("Hugh"),
    BLACK_BELT_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 55,
        .species = SPECIES_MACHOKE,
        IVS(26),
        .heldItem = ITEM_BLACK_BELT,
        },
        {
        .lvl = 55,
        .species = SPECIES_MACHAMP,
        IVS(26),
        .heldItem = ITEM_BLACK_BELT,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_CRUSH_KIN_MIK_KIA_2] =
{
    .trainerName = _("Mik & Kia"),
    CRUSH_KIN_INFO,
    .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 51,
        .species = SPECIES_MACHOKE,
        IVS(15),
        .heldItem = ITEM_BLACK_BELT,
        },
        {
        .lvl = 51,
        .species = SPECIES_PRIMEAPE,
        IVS(15),
        .heldItem = ITEM_BLACK_BELT,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_CRUSH_KIN_MIK_KIA_3] =
{
    .trainerName = _("Mik & Kia"),
    CRUSH_KIN_INFO,
    .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 56,
        .species = SPECIES_MACHAMP,
        IVS(20),
        .heldItem = ITEM_BLACK_BELT,
        },
        {
        .lvl = 56,
        .species = SPECIES_PRIMEAPE,
        IVS(20),
        .heldItem = ITEM_BLACK_BELT,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_TUBER_AMIRA_2] =
{
    .trainerName = _("Amira"),
    .trainerClass = TRAINER_CLASS_TUBER_FRLG,
    .trainerPic = TRAINER_PIC_TUBER_F_FRLG,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_GIRL,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 47,
        .species = SPECIES_POLIWHIRL,
        IVS(9),
        },
        {
        .lvl = 47,
        .species = SPECIES_POLIWHIRL,
        IVS(9),
        },
        {
        .lvl = 47,
        .species = SPECIES_POLIWHIRL,
        IVS(9),
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_TWINS_JOY_MEG_2] =
{
    .trainerName = _("Joy & Meg"),
    .trainerClass = TRAINER_CLASS_TWINS_FRLG,
    .trainerPic = TRAINER_PIC_TWINS_FRLG,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_TWINS,
    .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 49,
        .species = SPECIES_CLEFAIRY,
        IVS(9),
        },
        {
        .lvl = 49,
        .species = SPECIES_CLEFAIRY,
        IVS(9),
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_PAINTER_RAYNA_2] =
{
    .trainerName = _("Rayna"),
    PAINTER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 54,
        .species = SPECIES_SMEARGLE,
        IVS(14),
        .moves = {MOVE_CROSS_CHOP, MOVE_MEGAHORN, MOVE_DOUBLE_EDGE, MOVE_SELF_DESTRUCT},
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_YOUNGSTER_DESTIN_2] =
{
    .trainerName = _("Destin"),
    YOUNGSTER_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 53,
        .species = SPECIES_RATICATE,
        IVS(14),
        },
        {
        .lvl = 53,
        .species = SPECIES_PIDGEOT,
        IVS(14),
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_PKMN_BREEDER_ALIZE_2] =
{
    .trainerName = _("Alize"),
    .trainerClass = TRAINER_CLASS_PKMN_BREEDER_FRLG,
    .trainerPic = TRAINER_PIC_POKEMON_BREEDER_FRLG,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 53,
        .species = SPECIES_PIKACHU,
        IVS(18),
        },
        {
        .lvl = 53,
        .species = SPECIES_CLEFAIRY,
        IVS(18),
        },
        {
        .lvl = 53,
        .species = SPECIES_MARILL,
        IVS(18),
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_YOUNG_COUPLE_GIA_JES_2] =
{
    .trainerName = _("Gia & Jes"),
    .trainerClass = TRAINER_CLASS_YOUNG_COUPLE_FRLG,
    .trainerPic = TRAINER_PIC_YOUNG_COUPLE_FRLG,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_GIRL,
    .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 30,
        .species = SPECIES_NIDORINA,
        IVS(7),
        },
        {
        .lvl = 30,
        .species = SPECIES_NIDORINO,
        IVS(7),
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_YOUNG_COUPLE_GIA_JES_3] =
{
    .trainerName = _("Gia & Jes"),
    .trainerClass = TRAINER_CLASS_YOUNG_COUPLE_FRLG,
    .trainerPic = TRAINER_PIC_YOUNG_COUPLE_FRLG,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_GIRL,
    .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 55,
        .species = SPECIES_NIDOKING,
        IVS(14),
        },
        {
        .lvl = 55,
        .species = SPECIES_NIDOQUEEN,
        IVS(14),
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_BIRD_KEEPER_MILO_2] =
{
    .trainerName = _("Milo"),
    BIRD_KEEPER_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 53,
        .species = SPECIES_PIDGEOTTO,
        IVS(14),
        },
        {
        .lvl = 55,
        .species = SPECIES_PIDGEOT,
        IVS(14),
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_BIRD_KEEPER_CHAZ_2] =
{
    .trainerName = _("Chaz"),
    BIRD_KEEPER_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 53,
        .species = SPECIES_FEAROW,
        IVS(14),
        },
        {
        .lvl = 55,
        .species = SPECIES_FEAROW,
        IVS(14),
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_BIRD_KEEPER_HAROLD_2] =
{
    .trainerName = _("Harold"),
    BIRD_KEEPER_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 53,
        .species = SPECIES_NOCTOWL,
        IVS(14),
        },
        {
        .lvl = 55,
        .species = SPECIES_NOCTOWL,
        IVS(14),
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_SWIMMER_FEMALE_NICOLE_2] =
{
    .trainerName = _("Nicole"),
    .trainerClass = TRAINER_CLASS_SWIMMER_F_FRLG,
    .trainerPic = TRAINER_PIC_SWIMMER_F_FRLG,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 54,
        .species = SPECIES_MARILL,
        IVS(14),
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_PSYCHIC_JACLYN_2] =
{
    .trainerName = _("Jaclyn"),
    .trainerClass = TRAINER_CLASS_PSYCHIC_FRLG,
    .trainerPic = TRAINER_PIC_PSYCHIC_F_FRLG,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 52,
        .species = SPECIES_NATU,
        IVS(26),
        .moves = {MOVE_PSYCHIC, MOVE_CONFUSE_RAY, MOVE_FUTURE_SIGHT, MOVE_WISH},
        },
        {
        .lvl = 52,
        .species = SPECIES_SLOWBRO,
        IVS(26),
        .moves = {MOVE_PSYCHIC, MOVE_HEADBUTT, MOVE_AMNESIA, MOVE_YAWN},
        },
        {
        .lvl = 54,
        .species = SPECIES_KADABRA,
        IVS(26),
        .moves = {MOVE_PSYCHIC, MOVE_FUTURE_SIGHT, MOVE_RECOVER, MOVE_REFLECT},
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_SWIMMER_MALE_SAMIR_2] =
{
    .trainerName = _("Samir"),
    .trainerClass = TRAINER_CLASS_SWIMMER_M_FRLG,
    .trainerPic = TRAINER_PIC_SWIMMER_M_FRLG,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 55,
        .species = SPECIES_GYARADOS,
        IVS(14),
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_HIKER_EARL_2] =
{
    .trainerName = _("Earl"),
    HIKER_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 54,
        .species = SPECIES_ONIX,
        IVS(14),
        },
        {
        .lvl = 54,
        .species = SPECIES_MACHAMP,
        IVS(14),
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_RUIN_MANIAC_LARRY_2] =
{
    .trainerName = _("Larry"),
    RUIN_MANIAC_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 54,
        .species = SPECIES_MACHOKE,
        IVS(14),
        },
        {
        .lvl = 54,
        .species = SPECIES_MACHOKE,
        IVS(14),
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_POKEMANIAC_HECTOR_2] =
{
    .trainerName = _("Hector"),
    POKE_MANIAC_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 55,
        .species = SPECIES_RHYDON,
        IVS(18),
        },
        {
        .lvl = 55,
        .species = SPECIES_KANGASKHAN,
        IVS(18),
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_PSYCHIC_DARIO_2] =
{
    .trainerName = _("Dario"),
    .trainerClass = TRAINER_CLASS_PSYCHIC_FRLG,
    .trainerPic = TRAINER_PIC_PSYCHIC_M_FRLG,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 56,
        .species = SPECIES_GIRAFARIG,
        IVS(26),
        .moves = {MOVE_CRUNCH, MOVE_PSYBEAM, MOVE_ODOR_SLEUTH, MOVE_AGILITY},
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_PSYCHIC_RODETTE_2] =
{
    .trainerName = _("Rodette"),
    .trainerClass = TRAINER_CLASS_PSYCHIC_FRLG,
    .trainerPic = TRAINER_PIC_PSYCHIC_F_FRLG,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 53,
        .species = SPECIES_NATU,
        IVS(26),
        .moves = {MOVE_PSYCHIC, MOVE_CONFUSE_RAY, MOVE_WISH, MOVE_FUTURE_SIGHT},
        },
        {
        .lvl = 53,
        .species = SPECIES_HYPNO,
        IVS(26),
        .moves = {MOVE_PSYCHIC, MOVE_DISABLE, MOVE_PSYCH_UP, MOVE_FUTURE_SIGHT},
        },
        {
        .lvl = 53,
        .species = SPECIES_HYPNO,
        IVS(26),
        .moves = {MOVE_PSYCHIC, MOVE_HYPNOSIS, MOVE_PSYCH_UP, MOVE_FUTURE_SIGHT},
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_JUGGLER_MASON_2] =
{
    .trainerName = _("Mason"),
    JUGGLER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 4,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 52,
        .species = SPECIES_ELECTRODE,
        IVS(14),
        },
        {
        .lvl = 52,
        .species = SPECIES_PINECO,
        IVS(14),
        },
        {
        .lvl = 52,
        .species = SPECIES_ELECTRODE,
        IVS(14),
        },
        {
        .lvl = 52,
        .species = SPECIES_PINECO,
        IVS(14),
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_PKMN_RANGER_NICOLAS_2] =
{
    .trainerName = _("Nicolas"),
    .trainerClass = TRAINER_CLASS_PKMN_RANGER_FRLG,
    .trainerPic = TRAINER_PIC_POKEMON_RANGER_M_FRLG,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
    .items = {ITEM_FULL_RESTORE},
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 55,
        .species = SPECIES_VICTREEBEL,
        IVS(26),
        .moves = {MOVE_RAZOR_LEAF, MOVE_ACID, MOVE_STUN_SPORE, MOVE_WRAP},
        },
        {
        .lvl = 55,
        .species = SPECIES_VICTREEBEL,
        IVS(26),
        .moves = {MOVE_RAZOR_LEAF, MOVE_ACID, MOVE_SLEEP_POWDER, MOVE_SLAM},
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_PKMN_RANGER_MADELINE_2] =
{
    .trainerName = _("Madeline"),
    .trainerClass = TRAINER_CLASS_PKMN_RANGER_FRLG,
    .trainerPic = TRAINER_PIC_POKEMON_RANGER_F_FRLG,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
    .items = {ITEM_FULL_RESTORE},
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 55,
        .species = SPECIES_VILEPLUME,
        IVS(26),
        .moves = {MOVE_PETAL_DANCE, MOVE_MOONLIGHT, MOVE_ACID, MOVE_SLEEP_POWDER},
        },
        {
        .lvl = 55,
        .species = SPECIES_VILEPLUME,
        IVS(26),
        .moves = {MOVE_PETAL_DANCE, MOVE_MOONLIGHT, MOVE_ACID, MOVE_STUN_SPORE},
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_CRUSH_GIRL_CYNDY_2] =
{
    .trainerName = _("Cyndy"),
    .trainerClass = TRAINER_CLASS_CRUSH_GIRL_FRLG,
    .trainerPic = TRAINER_PIC_CRUSH_GIRL_FRLG,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 54,
        .species = SPECIES_PRIMEAPE,
        IVS(20),
        .heldItem = ITEM_BLACK_BELT,
        },
        {
        .lvl = 54,
        .species = SPECIES_HITMONTOP,
        IVS(20),
        .heldItem = ITEM_BLACK_BELT,
        },
        {
        .lvl = 54,
        .species = SPECIES_MACHAMP,
        IVS(20),
        .heldItem = ITEM_BLACK_BELT,
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_TAMER_EVAN_2] =
{
    .trainerName = _("Evan"),
    TAMER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 52,
        .species = SPECIES_SANDSLASH,
        IVS(19),
        },
        {
        .lvl = 52,
        .species = SPECIES_LICKITUNG,
        IVS(19),
        },
        {
        .lvl = 55,
        .species = SPECIES_URSARING,
        IVS(19),
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_PKMN_RANGER_JACKSON_2] =
{
    .trainerName = _("Jackson"),
    .trainerClass = TRAINER_CLASS_PKMN_RANGER_FRLG,
    .trainerPic = TRAINER_PIC_POKEMON_RANGER_M_FRLG,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
    .items = {ITEM_FULL_RESTORE},
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .partySize = 3,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 53,
        .species = SPECIES_TANGELA,
        IVS(26),
        .moves = {MOVE_SLAM, MOVE_MEGA_DRAIN, MOVE_BIND, MOVE_INGRAIN},
        },
        {
        .lvl = 54,
        .species = SPECIES_EXEGGUTOR,
        IVS(26),
        .moves = {MOVE_CONFUSION, MOVE_EGG_BOMB, MOVE_STUN_SPORE, MOVE_REFLECT},
        },
        {
        .lvl = 55,
        .species = SPECIES_EXEGGUTOR,
        IVS(26),
        .moves = {MOVE_CONFUSION, MOVE_EGG_BOMB, MOVE_SLEEP_POWDER, MOVE_STOMP},
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_PKMN_RANGER_KATELYN_2] =
{
    .trainerName = _("Katelyn"),
    .trainerClass = TRAINER_CLASS_PKMN_RANGER_FRLG,
    .trainerPic = TRAINER_PIC_POKEMON_RANGER_F_FRLG,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
    .items = {ITEM_FULL_RESTORE},
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .partySize = 1,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 56,
        .species = SPECIES_CHANSEY,
        IVS(26),
        .moves = {MOVE_EGG_BOMB, MOVE_DEFENSE_CURL, MOVE_MINIMIZE, MOVE_SOFT_BOILED},
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_COOLTRAINER_LEROY_2] =
{
    .trainerName = _("Leroy"),
    .trainerClass = TRAINER_CLASS_COOLTRAINER_FRLG,
    .trainerPic = TRAINER_PIC_COOLTRAINER_M_FRLG,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
    .items = {ITEM_FULL_RESTORE},
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .partySize = 5,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 52,
        .species = SPECIES_RHYDON,
        IVS(26),
        .moves = {MOVE_EARTHQUAKE, MOVE_HORN_DRILL, MOVE_ROCK_BLAST, MOVE_SCARY_FACE},
        },
        {
        .lvl = 54,
        .species = SPECIES_SLOWBRO,
        IVS(26),
        .moves = {MOVE_PSYCHIC, MOVE_HEADBUTT, MOVE_AMNESIA, MOVE_DISABLE},
        },
        {
        .lvl = 52,
        .species = SPECIES_KANGASKHAN,
        IVS(26),
        .moves = {MOVE_DIZZY_PUNCH, MOVE_BITE, MOVE_ENDURE, MOVE_REVERSAL},
        },
        {
        .lvl = 52,
        .species = SPECIES_MACHAMP,
        IVS(26),
        .moves = {MOVE_CROSS_CHOP, MOVE_VITAL_THROW, MOVE_REVENGE, MOVE_SEISMIC_TOSS},
        },
        {
        .lvl = 55,
        .species = SPECIES_URSARING,
        IVS(26),
        .moves = {MOVE_SLASH, MOVE_FAINT_ATTACK, MOVE_SNORE, MOVE_REST},
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_COOLTRAINER_MICHELLE_2] =
{
    .trainerName = _("Michelle"),
    .trainerClass = TRAINER_CLASS_COOLTRAINER_FRLG,
    .trainerPic = TRAINER_PIC_COOLTRAINER_F_FRLG,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
    .items = {ITEM_HYPER_POTION},
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .partySize = 5,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 53,
        .species = SPECIES_PERSIAN,
        IVS(26),
        .moves = {MOVE_SLASH, MOVE_SCREECH, MOVE_FAINT_ATTACK, MOVE_BITE},
        },
        {
        .lvl = 53,
        .species = SPECIES_DEWGONG,
        IVS(26),
        .moves = {MOVE_ICE_BEAM, MOVE_TAKE_DOWN, MOVE_ICY_WIND, MOVE_SHEER_COLD},
        },
        {
        .lvl = 54,
        .species = SPECIES_NINETALES,
        IVS(26),
        .moves = {MOVE_FLAMETHROWER, MOVE_CONFUSE_RAY, MOVE_WILL_O_WISP, MOVE_GRUDGE},
        },
        {
        .lvl = 54,
        .species = SPECIES_RAPIDASH,
        IVS(26),
        .moves = {MOVE_BOUNCE, MOVE_AGILITY, MOVE_FIRE_SPIN, MOVE_TAKE_DOWN},
        },
        {
        .lvl = 56,
        .species = SPECIES_GIRAFARIG,
        IVS(26),
        .moves = {MOVE_CRUNCH, MOVE_PSYBEAM, MOVE_STOMP, MOVE_ODOR_SLEUTH},
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_COOL_COUPLE_LEX_NYA_2] =
{
    .trainerName = _("Lex & Nya"),
    COOL_COUPLE_INFO,
    .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE},
    .battleType = TRAINER_BATTLE_TYPE_DOUBLES,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 57,
        .species = SPECIES_MILTANK,
        IVS(26),
        .moves = {MOVE_BODY_SLAM, MOVE_MILK_DRINK, MOVE_GROWL, MOVE_DEFENSE_CURL},
        },
        {
        .lvl = 57,
        .species = SPECIES_TAUROS,
        IVS(26),
        .moves = {MOVE_TAKE_DOWN, MOVE_SCARY_FACE, MOVE_PURSUIT, MOVE_SWAGGER},
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_BUG_CATCHER_COLTON_2] =
{
    .trainerName = _("Colton"),
    BUG_CATCHER_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 19,
        .species = SPECIES_METAPOD,
        IVS(2),
        },
        {
        .lvl = 19,
        .species = SPECIES_WEEDLE,
        IVS(2),
        },
        {
        .lvl = 19,
        .species = SPECIES_METAPOD,
        IVS(2),
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_BUG_CATCHER_COLTON_3] =
{
    .trainerName = _("Colton"),
    BUG_CATCHER_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 27,
        .species = SPECIES_BUTTERFREE,
        IVS(7),
        },
        {
        .lvl = 27,
        .species = SPECIES_KAKUNA,
        IVS(7),
        },
        {
        .lvl = 27,
        .species = SPECIES_BUTTERFREE,
        IVS(7),
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_BUG_CATCHER_COLTON_4] =
{
    .trainerName = _("Colton"),
    BUG_CATCHER_FRLG_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 51,
        .species = SPECIES_BUTTERFREE,
        IVS(14),
        },
        {
        .lvl = 54,
        .species = SPECIES_BEEDRILL,
        IVS(14),
        },
        {
        .lvl = 51,
        .species = SPECIES_BUTTERFREE,
        IVS(14),
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_SWIMMER_MALE_MATTHEW_2] =
{
    .trainerName = _("Matthew"),
    .trainerClass = TRAINER_CLASS_SWIMMER_M_FRLG,
    .trainerPic = TRAINER_PIC_SWIMMER_M_FRLG,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 49,
        .species = SPECIES_POLIWHIRL,
        IVS(9),
        },
        {
        .lvl = 49,
        .species = SPECIES_POLIWRATH,
        IVS(9),
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_SWIMMER_MALE_TONY_2] =
{
    .trainerName = _("Tony"),
    .trainerClass = TRAINER_CLASS_SWIMMER_M_FRLG,
    .trainerPic = TRAINER_PIC_SWIMMER_M_FRLG,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 49,
        .species = SPECIES_SEADRA,
        IVS(9),
        },
        {
        .lvl = 49,
        .species = SPECIES_SEADRA,
        IVS(9),
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_SWIMMER_FEMALE_MELISSA_2] =
{
    .trainerName = _("Melissa"),
    .trainerClass = TRAINER_CLASS_SWIMMER_F_FRLG,
    .trainerPic = TRAINER_PIC_SWIMMER_F_FRLG,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 49,
        .species = SPECIES_POLIWHIRL,
        IVS(9),
        },
        {
        .lvl = 49,
        .species = SPECIES_SEAKING,
        IVS(9),
        },
    },
},

[DIFFICULTY_NORMAL][TRAINER_CUE_BALL_PAXTON] =
{
    .trainerName = _("Paxton"),
    CUE_BALL_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[])
    {
        {
        .lvl = 39,
        .species = SPECIES_WEEZING,
        IVS(6),
        },
        {
        .lvl = 39,
        .species = SPECIES_MUK,
        IVS(6),
        },
    },
},
#endif
