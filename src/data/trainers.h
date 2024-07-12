#define IVS(IV) .iv = TRAINER_PARTY_IVS(IV, IV, IV, IV, IV, IV)
#define PERFECT_IVS IVS(MAX_PER_STAT_IVS)

#define EV_SPREAD_ATK_DEF_HP TRAINER_PARTY_EVS(EV_REMAINDER, MAX_PER_STAT_EVS, MAX_PER_STAT_EVS, 0, 0, 0)
#define EV_SPREAD_ATK_SPE_HP TRAINER_PARTY_EVS(EV_REMAINDER, MAX_PER_STAT_EVS, 0, MAX_PER_STAT_EVS, 0, 0)
#define EV_SPREAD_ATK_SPE_DEF TRAINER_PARTY_EVS(0, MAX_PER_STAT_EVS, EV_REMAINDER, MAX_PER_STAT_EVS, 0, 0)
#define EV_SPREAD_ATK_SPE_SPD TRAINER_PARTY_EVS(0, MAX_PER_STAT_EVS, 0, MAX_PER_STAT_EVS, 0, EV_REMAINDER)
#define EV_SPREAD_SPA_DEF_HP TRAINER_PARTY_EVS(EV_REMAINDER, 0, MAX_PER_STAT_EVS, 0, MAX_PER_STAT_EVS, 0)
#define EV_SPREAD_SPA_SPE_HP TRAINER_PARTY_EVS(EV_REMAINDER, 0, 0, MAX_PER_STAT_EVS, MAX_PER_STAT_EVS, 0)
#define EV_SPREAD_SPA_SPE_DEF TRAINER_PARTY_EVS(0, 0, EV_REMAINDER, MAX_PER_STAT_EVS, MAX_PER_STAT_EVS, 0)
#define EV_SPREAD_SPA_SPE_SPD TRAINER_PARTY_EVS(0, 0, 0, MAX_PER_STAT_EVS, MAX_PER_STAT_EVS, EV_REMAINDER)

#define BOSS_AI_FLAGS .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON
#define MINI_BOSS_AI_FLAGS .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON

[TRAINER_NONE] =
{
    .trainerName = _(""),
    .trainerClass = TRAINER_CLASS_PKMN_TRAINER_1,
    .trainerPic = TRAINER_PIC_HIKER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .partySize = 0,
    .party = NULL,
},

#define RIVAL_ROUTE_103 0
#define RIVAL_RUSTBORO  1
#define RIVAL_ROUTE_110 2
#define RIVAL_ROUTE_119 3
#define RIVAL_LILYCOVE  4

#define RIVAL_ROUTE_103_STARTER_LEVEL  5
#define RIVAL_RUSTBORO_STARTER_LEVEL  15
#define RIVAL_ROUTE_110_STARTER_LEVEL 20
#define RIVAL_ROUTE_119_STARTER_LEVEL 42
#define RIVAL_LILYCOVE_STARTER_LEVEL  45

#define BRENDAN 0
#define MAY     1

#define BRENDAN_INFO                                       \
    .trainerName = _("Brendan"),                           \
    .trainerClass = TRAINER_CLASS_RIVAL,                   \
    .trainerPic = TRAINER_PIC_BRENDAN,                     \
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE, \
    BOSS_AI_FLAGS

#define MAY_INFO                                                                \
    .trainerName = _("May"),                                                    \
    .trainerClass = TRAINER_CLASS_RIVAL,                                        \
    .trainerPic = TRAINER_PIC_MAY,                                              \
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE, \
    BOSS_AI_FLAGS

#define RIVAL_STARTER(Location, Type, Rival)                                                             \
    {                                                                                                    \
    .lvl = Location##_STARTER_LEVEL,                                                                     \
    .species = Type##_STARTER + (Location < RIVAL_ROUTE_110 ? 0 : (Location < RIVAL_ROUTE_119 ? 1 : 2)), \
    .nature = Rival == BRENDAN ? NATURE_SERIOUS : NATURE_QUIRKY,                                         \
    PERFECT_IVS,                                                                                         \
    .gender = Rival == BRENDAN ? TRAINER_MON_MALE : TRAINER_MON_FEMALE,                                  \
    .heldItem = Location < RIVAL_LILYCOVE ? ITEM_NONE : (TYPE_##Type == TYPE_GRASS ? ITEM_SCEPTILITE : (TYPE_##Type == TYPE_FIRE ? ITEM_BLAZIKENITE : ITEM_SWAMPERTITE)), \
    }

#define RIVAL_WHISMUR(Location, Rival)                                         \
    {                                                                          \
    .lvl = Location##_STARTER_LEVEL - (Location < RIVAL_ROUTE_119 ? 2 : 1),    \
    .species = Location < RIVAL_ROUTE_119 ? SPECIES_WHISMUR : SPECIES_LOUDRED, \
    .ability = Rival == BRENDAN,                                               \
    IVS(18),                                                                   \
    .gender = Rival == BRENDAN ? TRAINER_MON_MALE : TRAINER_MON_FEMALE,        \
    }

#define RIVAL_MON(Location, Species, Ability, Rival)                             \
    {                                                                            \
    .lvl = Location##_STARTER_LEVEL - 2,                                         \
    .species = SPECIES_##Species,                                                \
    .ability = ABILITY_##Ability,                                                \
    IVS(Location < RIVAL_ROUTE_119 ? 6 : (Location < RIVAL_LILYCOVE ? 12 : 18)), \
    .gender = Rival == BRENDAN ? TRAINER_MON_MALE : TRAINER_MON_FEMALE,          \
    }

#define RIVAL_BATTLES(Rival, Type, Mon3, Evo3, Ability3, Mon4, Evo4, Ability4) \
[TRAINER_##Rival##_ROUTE_103_##Type] =                                         \
{                                                                              \
    Rival##_INFO,                                                              \
    .partySize = 1,                                                            \
    .party = (const struct TrainerMon[]) {                                     \
        RIVAL_STARTER(RIVAL_ROUTE_103, Type, Rival),                           \
    },                                                                         \
},                                                                             \
                                                                               \
[TRAINER_##Rival##_RUSTBORO_##Type] =                                          \
{                                                                              \
    Rival##_INFO,                                                              \
    .partySize = 2,                                                            \
    .party = (const struct TrainerMon[]) {                                     \
        RIVAL_WHISMUR(RIVAL_RUSTBORO, Rival),                                  \
        RIVAL_STARTER(RIVAL_RUSTBORO, Type, Rival),                            \
    },                                                                         \
},                                                                             \
                                                                               \
[TRAINER_##Rival##_ROUTE_110_##Type] =                                         \
{                                                                              \
    Rival##_INFO,                                                              \
    .partySize = 3,                                                            \
    .party = (const struct TrainerMon[]) {                                     \
        RIVAL_MON(RIVAL_ROUTE_110, Mon3, Ability3, Rival),                     \
        RIVAL_WHISMUR(RIVAL_ROUTE_110, Rival),                                 \
        RIVAL_STARTER(RIVAL_ROUTE_110, Type, Rival),                           \
    },                                                                         \
},                                                                             \
                                                                               \
[TRAINER_##Rival##_ROUTE_119_##Type] =                                         \
{                                                                              \
    Rival##_INFO,                                                              \
    .partySize = 4,                                                            \
    .party = (const struct TrainerMon[]) {                                     \
        RIVAL_MON(RIVAL_ROUTE_119, Mon4, Ability4, Rival),                     \
        RIVAL_MON(RIVAL_ROUTE_119, Evo3, Ability3, Rival),                     \
        RIVAL_WHISMUR(RIVAL_ROUTE_119, Rival),                                 \
        RIVAL_STARTER(RIVAL_ROUTE_119, Type, Rival),                           \
    },                                                                         \
},                                                                             \
                                                                               \
[TRAINER_##Rival##_LILYCOVE_##Type] =                                          \
{                                                                              \
    Rival##_INFO,                                                              \
    .partySize = 5,                                                            \
    .party = (const struct TrainerMon[]) {                                     \
        {                                                                      \
        .lvl = RIVAL_LILYCOVE_STARTER_LEVEL - 2,                               \
        .species = SPECIES_VIBRAVA,                                            \
        .ability = ABILITY_LEVITATE,                                           \
        IVS(18),                                                               \
        .gender = Rival == BRENDAN ? TRAINER_MON_MALE : TRAINER_MON_FEMALE,    \
        },                                                                     \
        RIVAL_MON(RIVAL_LILYCOVE, Evo4, Ability4, Rival),                      \
        RIVAL_MON(RIVAL_LILYCOVE, Evo3, Ability3, Rival),                      \
        RIVAL_WHISMUR(RIVAL_LILYCOVE, Rival),                                  \
        RIVAL_STARTER(RIVAL_LILYCOVE, Type, Rival),                            \
    },                                                                         \
}

RIVAL_BATTLES(BRENDAN, GRASS, CORPHISH, CRAWDAUNT, HYPER_CUTTER, SLUGMA, MAGCARGO, FLAME_BODY),
RIVAL_BATTLES(BRENDAN, FIRE, SHROOMISH, BRELOOM, EFFECT_SPORE, CORPHISH, CRAWDAUNT, HYPER_CUTTER),
RIVAL_BATTLES(BRENDAN, WATER, SLUGMA, MAGCARGO, FLAME_BODY, SHROOMISH, BRELOOM, EFFECT_SPORE),
RIVAL_BATTLES(MAY, GRASS, WINGULL, PELIPPER, KEEN_EYE, VULPIX, NINETALES, FLASH_FIRE),
RIVAL_BATTLES(MAY, FIRE, CACNEA, CACTURNE, SAND_VEIL, WINGULL, PELIPPER, KEEN_EYE),
RIVAL_BATTLES(MAY, WATER, VULPIX, NINETALES, FLASH_FIRE, CACNEA, CACTURNE, SAND_VEIL),

#define ENDGAME_REMATCH_2_LEVEL 65
#define ENDGAME_REMATCH_3_LEVEL 70
#define ENDGAME_REMATCH_4_LEVEL 75
#define ENDGAME_REMATCH_5_LEVEL 80

#define ACE   0
#define TIER2 2
#define TIER3 5

#define REMATCH_MON(Species, Tier, Rematch)          \
    .lvl = ENDGAME_REMATCH_##Rematch##_LEVEL - Tier, \
    .species = SPECIES_##Species,                    \
    PERFECT_IVS

#define WALLY_INFO                                         \
    .trainerName = _("Wally"),                             \
    .trainerClass = TRAINER_CLASS_RIVAL,                   \
    .trainerPic = TRAINER_PIC_WALLY,                       \
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE, \
    BOSS_AI_FLAGS

#define RALPH(Level) \
    .lvl = Level,                                                                            \
    .species = Level < 20 ? SPECIES_RALTS : (Level < 30 ? SPECIES_KIRLIA : SPECIES_GALLADE), \
    .ability = 1,                                                                            \
    .gender = TRAINER_MON_MALE,                                                              \
    IVS(24),                                                                                 \
    .nickname = COMPOUND_STRING("Ralph")

#define WALLY_BUDEW(Level)                                                                     \
    .lvl = Level,                                                                              \
    .species = Level < 25 ? SPECIES_BUDEW : (Level < 35 ? SPECIES_ROSELIA : SPECIES_ROSERADE), \
    .ability = ABILITY_NATURAL_CURE,                                                           \
    .gender = TRAINER_MON_FEMALE

#define WALLY_SWABLU(Level)                                   \
    .lvl = Level,                                             \
    .species = Level < 35 ? SPECIES_SWABLU : SPECIES_ALTARIA, \
    .ability = ABILITY_NATURAL_CURE,                          \
    .gender = TRAINER_MON_MALE

[TRAINER_WALLY_MAUVILLE] =
{
    WALLY_INFO,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        RALPH(19),
        }
    },
},

[TRAINER_WALLY_VERDANTURF] =
{
    WALLY_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        WALLY_BUDEW(21),
        IVS(3),
        },
        {
        RALPH(23),
        }
    },
},

[TRAINER_WALLY_ROUTE_114] =
{
    WALLY_INFO,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        WALLY_SWABLU(25),
        IVS(6),
        },
        {
        WALLY_BUDEW(25),
        IVS(6),
        },
        {
        RALPH(27),
        }
    },
},

[TRAINER_WALLY_VR_1] =
{
    WALLY_INFO,
    .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
    .partySize = 5,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 46,
        .species = SPECIES_DELCATTY,
        .ability = ABILITY_NORMALIZE,
        IVS(18),
        .moves = {MOVE_FAKE_OUT, MOVE_PLAY_ROUGH, MOVE_ASSIST, MOVE_CHARM},
        .gender = TRAINER_MON_FEMALE,
        },
        {
        .lvl = 46,
        .species = SPECIES_MAGNEZONE,
        .ability = ABILITY_ANALYTIC,
        IVS(18),
        .moves = {MOVE_THUNDERBOLT, MOVE_FLASH_CANNON, MOVE_TRI_ATTACK, MOVE_METAL_SOUND},
        },
        {
        WALLY_SWABLU(47),
        IVS(18),
        .moves = {MOVE_DRAGON_PULSE, MOVE_AIR_SLASH, MOVE_MOONBLAST, MOVE_COTTON_GUARD},
        },
        {
        WALLY_BUDEW(47),
        IVS(18),
        .moves = {MOVE_GIGA_DRAIN, MOVE_SLUDGE_BOMB, MOVE_LEECH_SEED, MOVE_TOXIC},
        },
        {
        RALPH(49),
        .nature = NATURE_ADAMANT,
        .moves = {MOVE_PSYCHO_CUT, MOVE_SACRED_SWORD, MOVE_LEAF_BLADE, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_GALLADITE,
        }
    },
},

#define REMATCH_RALPH(rematch)                                                         \
    {                                                                                  \
    REMATCH_MON(GALLADE, ACE, rematch),                                                \
    .ability = ABILITY_SHARPNESS,                                                      \
    .nature = NATURE_ADAMANT,                                                          \
    .ev = EV_SPREAD_ATK_SPE_HP,                                                        \
    .moves = {MOVE_PSYCHO_CUT, MOVE_SACRED_SWORD, MOVE_LEAF_BLADE, MOVE_SWORDS_DANCE}, \
    .gender = TRAINER_MON_MALE,                                                        \
    .heldItem = ITEM_GALLADITE,                                                        \
    .nickname = COMPOUND_STRING("Ralph"),                                              \
    .friendship = 255,                                                                 \
    }

#define WALLY_ROSERADE(rematch)                                                         \
    {                                                                                   \
    REMATCH_MON(ROSERADE, TIER2, rematch),                                              \
    .ability = ABILITY_NATURAL_CURE,                                                    \
    .nature = NATURE_MODEST,                                                            \
    .ev = TRAINER_PARTY_EVS(0, 0, 0, MAX_PER_STAT_EVS, MAX_PER_STAT_EVS, EV_REMAINDER), \
    .moves = {MOVE_GIGA_DRAIN, MOVE_SLUDGE_BOMB, MOVE_LEECH_SEED, MOVE_TOXIC},          \
    .gender = TRAINER_MON_FEMALE,                                                       \
    .heldItem = ITEM_MIRACLE_SEED,                                                      \
    }

#define WALLY_ALTARIA(rematch)                                                          \
    {                                                                                   \
    REMATCH_MON(ALTARIA, TIER2, rematch),                                               \
    .ability = ABILITY_NATURAL_CURE,                                                    \
    .nature = NATURE_MODEST,                                                            \
    .ev = TRAINER_PARTY_EVS(0, 0, EV_REMAINDER, MAX_PER_STAT_EVS, MAX_PER_STAT_EVS, 0), \
    .moves = {MOVE_DRAGON_PULSE, MOVE_AIR_SLASH, MOVE_MOONBLAST, MOVE_COTTON_GUARD},    \
    .gender = TRAINER_MON_MALE,                                                         \
    }

#define WALLY_MAGNEZONE(rematch)                                                        \
    {                                                                                   \
    REMATCH_MON(MAGNEZONE, TIER3, rematch),                                             \
    .ability = ABILITY_ANALYTIC,                                                        \
    .nature = NATURE_BOLD,                                                              \
    .ev = TRAINER_PARTY_EVS(0, 0, MAX_PER_STAT_EVS, 0, MAX_PER_STAT_EVS, EV_REMAINDER), \
    .moves = {MOVE_THUNDERBOLT, MOVE_FLASH_CANNON, MOVE_TRI_ATTACK, MOVE_METAL_SOUND},  \
    }

#define WALLY_DELCATTY(rematch)                                         \
    {                                                                   \
    REMATCH_MON(DELCATTY, TIER3, rematch),                              \
    .ability = ABILITY_NORMALIZE,                                       \
    .nature = NATURE_TIMID,                                             \
    .ev = EV_SPREAD_SPA_SPE_HP,                                         \
    .moves = {MOVE_FAKE_OUT, MOVE_PLAY_ROUGH, MOVE_ASSIST, MOVE_CHARM}, \
    .gender = TRAINER_MON_FEMALE,                                       \
    }

[TRAINER_WALLY_VR_2] =
{
    WALLY_INFO,
    .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
    .partySize = 5,
    .party = (const struct TrainerMon[]) {
        WALLY_DELCATTY(2),
        WALLY_MAGNEZONE(2),
        WALLY_ALTARIA(2),
        WALLY_ROSERADE(2),
        REMATCH_RALPH(2),
    },
},

[TRAINER_WALLY_VR_3] =
{
    WALLY_INFO,
    .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
    .partySize = 5,
    .party = (const struct TrainerMon[]) {
        WALLY_DELCATTY(3),
        WALLY_MAGNEZONE(3),
        WALLY_ALTARIA(3),
        WALLY_ROSERADE(3),
        REMATCH_RALPH(3),
    },
},

[TRAINER_WALLY_VR_4] =
{
    WALLY_INFO,
    .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
    .partySize = 5,
    .party = (const struct TrainerMon[]) {
        WALLY_DELCATTY(4),
        WALLY_MAGNEZONE(4),
        WALLY_ALTARIA(4),
        WALLY_ROSERADE(4),
        REMATCH_RALPH(4),
    },
},

[TRAINER_WALLY_VR_5] =
{
    WALLY_INFO,
    .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
    .partySize = 6,
    .party = (const struct TrainerMon[]) {
        {
        REMATCH_MON(GARDEVOIR, TIER3, 5),
        .moves = {MOVE_PSYCHIC, MOVE_MOONBLAST, MOVE_MYSTICAL_FIRE, MOVE_CALM_MIND},
        .gender = TRAINER_MON_FEMALE,
        },
        WALLY_DELCATTY(5),
        WALLY_MAGNEZONE(5),
        WALLY_ALTARIA(5),
        WALLY_ROSERADE(5),
        REMATCH_RALPH(5),
    },
},

#define LEADER_INFO(Trainer)                    \
    .trainerClass = TRAINER_CLASS_LEADER,       \
    .trainerPic = TRAINER_PIC_LEADER_##Trainer, \
    BOSS_AI_FLAGS

#define ROXANNE_INFO                                                            \
    LEADER_INFO(ROXANNE),                                                       \
    .trainerName = _("Roxanne"),                                                \
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE

[TRAINER_ROXANNE_1] =
{
    ROXANNE_INFO,
    .items = {ITEM_POTION, ITEM_POTION, ITEM_NONE, ITEM_NONE},
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 11,
        .species = SPECIES_LILEEP,
        IVS(12),
        .moves = {MOVE_ROCK_TOMB, MOVE_ASTONISH, MOVE_CONSTRICT, MOVE_ACID},
        .gender = TRAINER_MON_FEMALE,
        },
        {
        .lvl = 11,
        .species = SPECIES_ANORITH,
        .ability = ABILITY_SWIFT_SWIM,
        IVS(12),
        .moves = {MOVE_ROCK_TOMB, MOVE_SCRATCH, MOVE_HARDEN, MOVE_WATER_GUN},
        .gender = TRAINER_MON_MALE,
        },
        {
        .lvl = 13,
        .species = SPECIES_NOSEPASS,
        IVS(24),
        .moves = {MOVE_ROCK_TOMB, MOVE_BLOCK, MOVE_HARDEN, MOVE_TACKLE},
        .gender = TRAINER_MON_FEMALE,
        .heldItem = ITEM_ORAN_BERRY,
        }
    },
},

#define ROXANNE_PROBOPASS(rematch)                                                      \
    {                                                                                   \
    REMATCH_MON(PROBOPASS, ACE, rematch),                                               \
    .ability = ABILITY_SAND_FORCE,                                                      \
    .nature = NATURE_IMPISH,                                                            \
    .ev = TRAINER_PARTY_EVS(0, 0, MAX_PER_STAT_EVS, 0, MAX_PER_STAT_EVS, EV_REMAINDER), \
    .moves = {MOVE_POWER_GEM, MOVE_FLASH_CANNON, rematch < 5 ? MOVE_SANDSTORM : MOVE_BODY_PRESS, MOVE_IRON_DEFENSE}, \
    .gender = TRAINER_MON_FEMALE,                                                       \
    .heldItem = ITEM_SITRUS_BERRY,                                                      \
    }

#define ROXANNE_ARMALDO(rematch)                                                    \
    {                                                                               \
    REMATCH_MON(ARMALDO, TIER2, rematch),                                           \
    .ability = ABILITY_BATTLE_ARMOR,                                                \
    .nature = NATURE_ADAMANT,                                                       \
    .ev = EV_SPREAD_ATK_DEF_HP,                                                     \
    .moves = {MOVE_ROCK_SLIDE, MOVE_X_SCISSOR, MOVE_CRUSH_CLAW, MOVE_SWORDS_DANCE}, \
    .gender = TRAINER_MON_MALE,                                                     \
    .heldItem = ITEM_QUICK_CLAW,                                                    \
    }

#define ROXANNE_CRADILY(rematch)                                                        \
    {                                                                                   \
    REMATCH_MON(CRADILY, TIER2, rematch),                                               \
    .ability = ABILITY_STORM_DRAIN,                                                     \
    .nature = NATURE_CALM,                                                              \
    .ev = TRAINER_PARTY_EVS(0, 0, EV_REMAINDER, 0, MAX_PER_STAT_EVS, MAX_PER_STAT_EVS), \
    .moves = {MOVE_GIGA_DRAIN, MOVE_ANCIENT_POWER, MOVE_INGRAIN, MOVE_AMNESIA},         \
    .gender = TRAINER_MON_FEMALE,                                                       \
    .heldItem = ITEM_BIG_ROOT,                                                          \
    }

#define ROXANNE_RELICANTH(rematch)                                               \
    {                                                                            \
    REMATCH_MON(RELICANTH, TIER3, rematch),                                      \
    .ability = ABILITY_ROCK_HEAD,                                                \
    .nature = NATURE_IMPISH,                                                     \
    .ev = EV_SPREAD_ATK_DEF_HP,                                                  \
    .moves = {MOVE_HEAD_SMASH, MOVE_AQUA_TAIL, rematch < 5 ? MOVE_DOUBLE_EDGE : MOVE_BODY_PRESS, MOVE_IRON_DEFENSE}, \
    .gender = TRAINER_MON_FEMALE,                                                \
    }

#define ROXANNE_AGGRON(rematch, move1, move2, move3)                        \
    {                                                                       \
    REMATCH_MON(AGGRON, TIER3, rematch),                                    \
    .ability = ABILITY_ROCK_HEAD,                                           \
    .nature = NATURE_IMPISH,                                                \
    .ev = EV_SPREAD_ATK_DEF_HP,                                             \
    .moves = {MOVE_##move1, MOVE_##move2, MOVE_##move3, MOVE_STEALTH_ROCK}, \
    .gender = TRAINER_MON_FEMALE,                                           \
    }

[TRAINER_ROXANNE_2] =
{
    ROXANNE_INFO,
    .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
    .doubleBattle = TRUE,
    .partySize = 4,
    .party = (const struct TrainerMon[]) {
        ROXANNE_RELICANTH(2),
        ROXANNE_CRADILY(2),
        ROXANNE_ARMALDO(2),
        ROXANNE_PROBOPASS(2),
    },
},

[TRAINER_ROXANNE_3] =
{
    ROXANNE_INFO,
    .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
    .doubleBattle = TRUE,
    .partySize = 5,
    .party = (const struct TrainerMon[]) {
        ROXANNE_AGGRON(3, IRON_HEAD, ROCK_SLIDE, SANDSTORM),
        ROXANNE_RELICANTH(3),
        ROXANNE_CRADILY(3),
        ROXANNE_ARMALDO(3),
        ROXANNE_PROBOPASS(3),
    },
},

[TRAINER_ROXANNE_4] =
{
    ROXANNE_INFO,
    .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
    .doubleBattle = TRUE,
    .partySize = 5,
    .party = (const struct TrainerMon[]) {
        ROXANNE_AGGRON(4, IRON_HEAD, ROCK_SLIDE, SANDSTORM),
        ROXANNE_RELICANTH(4),
        ROXANNE_CRADILY(4),
        ROXANNE_ARMALDO(4),
        ROXANNE_PROBOPASS(4),
    },
},

[TRAINER_ROXANNE_5] =
{
    ROXANNE_INFO,
    .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
    .doubleBattle = TRUE,
    .partySize = 6,
    .party = (const struct TrainerMon[]) {
        {
        REMATCH_MON(RHYPERIOR, TIER3, 5),
        .ability = ABILITY_SOLID_ROCK,
        .nature = NATURE_ADAMANT,
        .ev = EV_SPREAD_ATK_DEF_HP,
        .moves = {MOVE_ROCK_WRECKER, MOVE_DRILL_RUN, MOVE_POISON_JAB, MOVE_SANDSTORM},
        .gender = TRAINER_MON_FEMALE,
        },
        ROXANNE_AGGRON(5, HEAD_SMASH, BODY_PRESS, IRON_DEFENSE),
        ROXANNE_RELICANTH(5),
        ROXANNE_CRADILY(5),
        ROXANNE_ARMALDO(5),
        ROXANNE_PROBOPASS(5),
    },
},

#define BRAWLY_INFO             \
    LEADER_INFO(BRAWLY),        \
    .trainerName = _("Brawly"), \
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE

[TRAINER_BRAWLY_1] =
{
    BRAWLY_INFO,
    .items = {ITEM_SUPER_POTION, ITEM_SUPER_POTION, ITEM_NONE, ITEM_NONE},
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 16,
        .species = SPECIES_MACHOP,
        .ability = ABILITY_NO_GUARD,
        IVS(12),
        .moves = {MOVE_BULK_UP, MOVE_KARATE_CHOP, MOVE_KNOCK_OFF, MOVE_FORESIGHT},
        .gender = TRAINER_MON_MALE,
        },
        {
        .lvl = 16,
        .species = SPECIES_MEDITITE,
        IVS(12),
        .moves = {MOVE_BULK_UP, MOVE_DETECT, MOVE_CONFUSION, MOVE_BIDE},
        .gender = TRAINER_MON_FEMALE,
        },
        {
        .lvl = 18,
        .species = SPECIES_MAKUHITA,
        .ability = ABILITY_THICK_FAT,
        IVS(24),
        .moves = {MOVE_BULK_UP, MOVE_ARM_THRUST, MOVE_FAKE_OUT, MOVE_WHIRLWIND},
        .gender = TRAINER_MON_MALE,
        .heldItem = ITEM_SITRUS_BERRY,
        }
    },
},

#define BRAWLY_HARIYAMA(rematch)                                                        \
    {                                                                                   \
    REMATCH_MON(HARIYAMA, ACE, rematch),                                                \
    .ability = ABILITY_THICK_FAT,                                                       \
    .nature = NATURE_ADAMANT,                                                           \
    .ev = TRAINER_PARTY_EVS(MAX_PER_STAT_EVS, MAX_PER_STAT_EVS, 0, EV_REMAINDER, 0, 0), \
    .moves = {MOVE_BULK_UP, MOVE_DRAIN_PUNCH, MOVE_BELLY_DRUM, MOVE_FAKE_OUT},          \
    .gender = TRAINER_MON_MALE,                                                         \
    .heldItem = ITEM_SITRUS_BERRY,                                                      \
    }

#define BRAWLY_MEDICHAM(rematch)                                                  \
    {                                                                             \
    REMATCH_MON(MEDICHAM, TIER2, rematch),                                        \
    .nature = NATURE_ADAMANT,                                                     \
    .ev = EV_SPREAD_ATK_SPE_HP,                                                   \
    .moves = {MOVE_BULK_UP, MOVE_HIGH_JUMP_KICK, MOVE_ZEN_HEADBUTT, MOVE_DETECT}, \
    .gender = TRAINER_MON_FEMALE,                                                 \
    .heldItem = ITEM_MUSCLE_BAND,                                                 \
    }

#define BRAWLY_MACHAMP(rematch)                                               \
    {                                                                         \
    REMATCH_MON(MACHAMP, TIER2, rematch),                                     \
    .ability = ABILITY_NO_GUARD,                                              \
    .nature = NATURE_ADAMANT,                                                 \
    .ev = EV_SPREAD_ATK_SPE_HP,                                               \
    .moves = {MOVE_BULK_UP, MOVE_CROSS_CHOP, MOVE_KNOCK_OFF, MOVE_DUAL_CHOP}, \
    .gender = TRAINER_MON_MALE,                                               \
    .heldItem = ITEM_BLACK_BELT,                                              \
    }

#define BRAWLY_BRELOOM(rematch)                                                   \
    {                                                                             \
    REMATCH_MON(BRELOOM, TIER3, rematch),                                         \
    .ability = ABILITY_TECHNICIAN,                                                \
    .nature = NATURE_ADAMANT,                                                     \
    .ev = EV_SPREAD_ATK_SPE_HP,                                                   \
    .moves = {MOVE_BULK_UP, MOVE_DRAIN_PUNCH, MOVE_BULLET_SEED, MOVE_MACH_PUNCH}, \
    .gender = TRAINER_MON_MALE,                                                   \
    }

#define BRAWLY_BLAZIKEN(rematch)                                                   \
    {                                                                              \
    REMATCH_MON(BLAZIKEN, TIER3, rematch),                                         \
    .nature = NATURE_ADAMANT,                                                      \
    .ev = EV_SPREAD_ATK_SPE_HP,                                                    \
    .moves = {MOVE_BULK_UP, MOVE_SKY_UPPERCUT, MOVE_BLAZE_KICK, MOVE_MIRROR_MOVE}, \
    .gender = TRAINER_MON_MALE,                                                    \
    }

[TRAINER_BRAWLY_2] =
{
    BRAWLY_INFO,
    .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
    .doubleBattle = TRUE,
    .partySize = 4,
    .party = (const struct TrainerMon[]) {
        BRAWLY_BRELOOM(2),
        BRAWLY_MACHAMP(2),
        BRAWLY_MEDICHAM(2),
        BRAWLY_HARIYAMA(2),
    },
},

[TRAINER_BRAWLY_3] =
{
    BRAWLY_INFO,
    .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
    .doubleBattle = TRUE,
    .partySize = 5,
    .party = (const struct TrainerMon[]) {
        BRAWLY_BLAZIKEN(3),
        BRAWLY_BRELOOM(3),
        BRAWLY_MACHAMP(3),
        BRAWLY_MEDICHAM(3),
        BRAWLY_HARIYAMA(3),
    },
},

[TRAINER_BRAWLY_4] =
{
    BRAWLY_INFO,
    .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
    .doubleBattle = TRUE,
    .partySize = 5,
    .party = (const struct TrainerMon[]) {
        BRAWLY_BLAZIKEN(4),
        BRAWLY_BRELOOM(4),
        BRAWLY_MACHAMP(4),
        BRAWLY_MEDICHAM(4),
        BRAWLY_HARIYAMA(4),
    },
},

[TRAINER_BRAWLY_5] =
{
    BRAWLY_INFO,
    .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
    .doubleBattle = TRUE,
    .partySize = 6,
    .party = (const struct TrainerMon[]) {
        {
        REMATCH_MON(GALLADE, TIER3, 5),
        .ability = ABILITY_JUSTIFIED,
        .nature = NATURE_ADAMANT,
        .ev = EV_SPREAD_ATK_SPE_HP,
        .moves = {MOVE_BULK_UP, MOVE_DRAIN_PUNCH, MOVE_PSYCHO_CUT, MOVE_NIGHT_SLASH},
        },
        BRAWLY_BLAZIKEN(5),
        BRAWLY_BRELOOM(5),
        BRAWLY_MACHAMP(5),
        BRAWLY_MEDICHAM(5),
        BRAWLY_HARIYAMA(5),
    },
},

#define WATTSON_INFO             \
    LEADER_INFO(WATTSON),        \
    .trainerName = _("Wattson"), \
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE

[TRAINER_WATTSON_1] =
{
    WATTSON_INFO,
    .items = {ITEM_SUPER_POTION, ITEM_SUPER_POTION, ITEM_NONE, ITEM_NONE},
    .partySize = 4,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 20,
        .species = SPECIES_MAGNEMITE,
        .ability = ABILITY_MAGNET_PULL,
        IVS(24),
        .moves = {MOVE_SHOCK_WAVE, MOVE_SONIC_BOOM, MOVE_MAGNET_BOMB, MOVE_THUNDER_WAVE},
        },
        {
        .lvl = 22,
        .species = SPECIES_MINUN,
        IVS(24),
        .moves = {MOVE_SHOCK_WAVE, MOVE_SWIFT, MOVE_SKILL_SWAP, MOVE_NUZZLE},
        .gender = TRAINER_MON_MALE,
        },
        {
        .lvl = 22,
        .species = SPECIES_PLUSLE,
        IVS(26),
        .moves = {MOVE_SHOCK_WAVE, MOVE_SWIFT, MOVE_SKILL_SWAP, MOVE_THUNDER_WAVE},
        .gender = TRAINER_MON_FEMALE,
        },
        {
        .lvl = 24,
        .species = SPECIES_ELECTRIKE,
        .ability = ABILITY_STATIC,
        IVS(30),
        .moves = {MOVE_SHOCK_WAVE, MOVE_QUICK_ATTACK, MOVE_BITE, MOVE_THUNDER_WAVE},
        .gender = TRAINER_MON_MALE,
        .heldItem = ITEM_SITRUS_BERRY,
        }
    },
},

#define WATTSON_MANECTRIC(rematch)                                                   \
    {                                                                                \
    REMATCH_MON(MANECTRIC, ACE, rematch),                                            \
    .ability = ABILITY_MINUS,                                                        \
    .nature = NATURE_MODEST,                                                         \
    .ev = EV_SPREAD_ATK_SPE_HP,                                                      \
    .moves = {MOVE_THUNDERBOLT, MOVE_FLAMETHROWER, MOVE_SIGNAL_BEAM, MOVE_SNARL},    \
    .gender = TRAINER_MON_MALE,                                                      \
    .heldItem = ITEM_SITRUS_BERRY,                                                   \
    }

#define WATTSON_PLUSLE(rematch)                                                  \
    {                                                                            \
    REMATCH_MON(PLUSLE, TIER2, rematch),                                         \
    .ability = ABILITY_PLUS,                                                     \
    .nature = NATURE_TIMID,                                                      \
    .ev = EV_SPREAD_ATK_SPE_SPD,                                                 \
    .moves = {MOVE_THUNDERBOLT, MOVE_HELPING_HAND, MOVE_CHARM, MOVE_NASTY_PLOT}, \
    .gender = TRAINER_MON_FEMALE,                                                \
    .heldItem = ITEM_MAGNET,                                                     \
    }

#define WATTSON_MINUN(rematch)                                                        \
    {                                                                                 \
    REMATCH_MON(MINUN, TIER2, rematch),                                               \
    .ability = ABILITY_MINUS,                                                         \
    .nature = NATURE_TIMID,                                                           \
    .ev = EV_SPREAD_ATK_SPE_SPD,                                                      \
    .moves = {MOVE_THUNDERBOLT, MOVE_THUNDER_WAVE, MOVE_FAKE_TEARS, MOVE_NASTY_PLOT}, \
    .gender = TRAINER_MON_MALE,                                                       \
    .heldItem = ITEM_MAGNET,                                                          \
    }

#define WATTSON_MAGNEZONE(rematch)                                                       \
    {                                                                                    \
    REMATCH_MON(MAGNEZONE, TIER3, rematch),                                              \
    .ability = ABILITY_MAGNET_PULL,                                                      \
    .nature = NATURE_MODEST,                                                             \
    .ev = TRAINER_PARTY_EVS(0, 0, MAX_PER_STAT_EVS, 0, MAX_PER_STAT_EVS, EV_REMAINDER),  \
    .moves = {MOVE_THUNDERBOLT, MOVE_FLASH_CANNON, MOVE_BODY_PRESS, MOVE_MAGNETIC_FLUX}, \
    }

#define WATTSON_LANTURN(rematch)                                                        \
    {                                                                                   \
    REMATCH_MON(LANTURN, TIER3, rematch),                                               \
    .ability = ABILITY_VOLT_ABSORB,                                                     \
    .nature = NATURE_MODEST,                                                            \
    .ev = TRAINER_PARTY_EVS(MAX_PER_STAT_EVS, 0, 0, 0, MAX_PER_STAT_EVS, EV_REMAINDER), \
    .moves = {MOVE_THUNDER, MOVE_HYDRO_PUMP, MOVE_ELECTRIC_TERRAIN, MOVE_RAIN_DANCE},   \
    .gender = TRAINER_MON_MALE,                                                         \
    }

[TRAINER_WATTSON_2] =
{
    WATTSON_INFO,
    .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
    .doubleBattle = TRUE,
    .partySize = 4,
    .party = (const struct TrainerMon[]) {
        WATTSON_MAGNEZONE(2),
        WATTSON_MINUN(2),
        WATTSON_PLUSLE(2),
        WATTSON_MANECTRIC(2),
    },
},

[TRAINER_WATTSON_3] =
{
    WATTSON_INFO,
    .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
    .doubleBattle = TRUE,
    .partySize = 5,
    .party = (const struct TrainerMon[]) {
        WATTSON_LANTURN(3),
        WATTSON_MAGNEZONE(3),
        WATTSON_MINUN(3),
        WATTSON_PLUSLE(3),
        WATTSON_MANECTRIC(3),
    },
},

[TRAINER_WATTSON_4] =
{
    WATTSON_INFO,
    .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
    .doubleBattle = TRUE,
    .partySize = 5,
    .party = (const struct TrainerMon[]) {
        WATTSON_LANTURN(4),
        WATTSON_MAGNEZONE(4),
        WATTSON_MINUN(4),
        WATTSON_PLUSLE(4),
        WATTSON_MANECTRIC(4),
    },
},

[TRAINER_WATTSON_5] =
{
    WATTSON_INFO,
    .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
    .doubleBattle = TRUE,
    .partySize = 6,
    .party = (const struct TrainerMon[]) {
        {
        REMATCH_MON(ELECTRODE, TIER3, 5),
        .ability = ABILITY_STATIC,
        .moves = {MOVE_DISCHARGE, MOVE_EERIE_IMPULSE, MOVE_LIGHT_SCREEN, MOVE_SCREECH},
        },
        WATTSON_LANTURN(5),
        WATTSON_MAGNEZONE(5),
        WATTSON_MINUN(5),
        WATTSON_PLUSLE(5),
        WATTSON_MANECTRIC(5),
    },
},

#define FLANNERY_INFO             \
    LEADER_INFO(FLANNERY),        \
    .trainerName = _("Flannery"), \
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE

[TRAINER_FLANNERY_1] =
{
    FLANNERY_INFO,
    .items = {ITEM_HYPER_POTION, ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE},
    .partySize = 4,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 28,
        .species = SPECIES_CASTFORM,
        IVS(24),
        .moves = {MOVE_OVERHEAT, MOVE_WEATHER_BALL, MOVE_HEADBUTT, MOVE_SUNNY_DAY},
        .gender = TRAINER_MON_FEMALE,
        },
        {
        .lvl = 30,
        .species = SPECIES_COMBUSKEN,
        IVS(24),
        .moves = {MOVE_OVERHEAT, MOVE_DOUBLE_KICK, MOVE_FEATHER_DANCE, MOVE_SUNNY_DAY},
        .gender = TRAINER_MON_FEMALE,
        },
        {
        .lvl = 30,
        .species = SPECIES_NUMEL,
        .ability = ABILITY_OBLIVIOUS,
        IVS(30),
        .moves = {MOVE_OVERHEAT, MOVE_EARTH_POWER, MOVE_SUNNY_DAY, MOVE_AMNESIA},
        .gender = TRAINER_MON_FEMALE,
        },
        {
        .lvl = 32,
        .species = SPECIES_TORKOAL,
        .ability = ABILITY_DROUGHT,
        IVS(30),
        .moves = {MOVE_OVERHEAT, MOVE_SUNNY_DAY, MOVE_RAPID_SPIN, MOVE_SMOKESCREEN},
        .gender = TRAINER_MON_FEMALE,
        .heldItem = ITEM_WHITE_HERB,
        }
    },
},

#define FLANNERY_TORKOAL(rematch)                                                  \
    {                                                                              \
    REMATCH_MON(TORKOAL, ACE, rematch),                                            \
    .ability = ABILITY_DROUGHT,                                                    \
    .nature = NATURE_MODEST,                                                       \
    .ev = EV_SPREAD_SPA_DEF_HP,                                                    \
    .moves = {MOVE_OVERHEAT, MOVE_IRON_DEFENSE, MOVE_SHELL_SMASH, MOVE_SUNNY_DAY}, \
    .gender = TRAINER_MON_FEMALE,                                                  \
    .heldItem = ITEM_WHITE_HERB,                                                   \
    }

#define FLANNERY_CAMERUPT(rematch)                                            \
    {                                                                         \
    REMATCH_MON(CAMERUPT, TIER2, rematch),                                    \
    .ability = ABILITY_MAGMA_ARMOR,                                           \
    .nature = NATURE_MODEST,                                                  \
    .ev = EV_SPREAD_SPA_SPE_HP,                                               \
    .moves = {MOVE_OVERHEAT, MOVE_EARTH_POWER, MOVE_AMNESIA, MOVE_SUNNY_DAY}, \
    .gender = TRAINER_MON_FEMALE,                                             \
    .heldItem = ITEM_WHITE_HERB,                                              \
    }

#define FLANNERY_BLAZIKEN(rematch)                                                 \
    {                                                                              \
    REMATCH_MON(BLAZIKEN, TIER2, rematch),                                         \
    .ability = ABILITY_BLAZE,                                                      \
    .nature = NATURE_MODEST,                                                       \
    .ev = EV_SPREAD_SPA_SPE_HP,                                                    \
    .moves = {MOVE_OVERHEAT, MOVE_AURA_SPHERE, MOVE_FOCUS_ENERGY, MOVE_SUNNY_DAY}, \
    .gender = TRAINER_MON_FEMALE,                                                  \
    .heldItem = ITEM_WHITE_HERB,                                                   \
    }

#define FLANNERY_CASTFORM(rematch)                                                \
    {                                                                             \
    REMATCH_MON(CASTFORM, TIER3, rematch),                                        \
    .ability = ABILITY_FORECAST,                                                  \
    .nature = NATURE_MODEST,                                                      \
    .ev = EV_SPREAD_SPA_SPE_HP,                                                   \
    .moves = {MOVE_OVERHEAT, MOVE_SOLAR_BEAM, MOVE_WEATHER_BALL, MOVE_SUNNY_DAY}, \
    .gender = TRAINER_MON_FEMALE,                                                 \
    }

#define FLANNERY_MAGCARGO(rematch)                                         \
    {                                                                      \
    REMATCH_MON(MAGCARGO, TIER3, rematch),                                 \
    .ability = ABILITY_FLAME_BODY,                                         \
    .nature = NATURE_MODEST,                                               \
    .ev = EV_SPREAD_SPA_DEF_HP,                                            \
    .moves = {MOVE_OVERHEAT, MOVE_YAWN, MOVE_SHELL_SMASH, MOVE_SUNNY_DAY}, \
    .gender = TRAINER_MON_FEMALE,                                          \
    }

#define FLANNERY_NINETALES(rematch)                                         \
    {                                                                       \
    REMATCH_MON(NINETALES, TIER3, rematch),                                 \
    .ability = ABILITY_DROUGHT,                                             \
    .nature = NATURE_TIMID,                                                \
    .ev = EV_SPREAD_SPA_SPE_HP,                                             \
    .moves = {MOVE_OVERHEAT, MOVE_GRUDGE, MOVE_NASTY_PLOT, MOVE_SUNNY_DAY}, \
    .gender = TRAINER_MON_FEMALE,                                           \
    }

[TRAINER_FLANNERY_2] =
{
    FLANNERY_INFO,
    .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
    .doubleBattle = TRUE,
    .partySize = 4,
    .party = (const struct TrainerMon[]) {
        FLANNERY_CASTFORM(2),
        FLANNERY_BLAZIKEN(2),
        FLANNERY_CAMERUPT(2),
        FLANNERY_TORKOAL(2),
    },
},

[TRAINER_FLANNERY_3] =
{
    FLANNERY_INFO,
    .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
    .doubleBattle = TRUE,
    .partySize = 5,
    .party = (const struct TrainerMon[]) {
        FLANNERY_MAGCARGO(3),
        FLANNERY_CASTFORM(3),
        FLANNERY_BLAZIKEN(3),
        FLANNERY_CAMERUPT(3),
        FLANNERY_TORKOAL(3),
    },
},

[TRAINER_FLANNERY_4] =
{
    FLANNERY_INFO,
    .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
    .doubleBattle = TRUE,
    .partySize = 6,
    .party = (const struct TrainerMon[]) {
        FLANNERY_NINETALES(4),
        FLANNERY_MAGCARGO(4),
        FLANNERY_CASTFORM(4),
        FLANNERY_BLAZIKEN(4),
        FLANNERY_CAMERUPT(4),
        FLANNERY_TORKOAL(4),
    },
},

[TRAINER_FLANNERY_5] =
{
    FLANNERY_INFO,
    .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
    .doubleBattle = TRUE,
    .partySize = 6,
    .party = (const struct TrainerMon[]) {
        FLANNERY_NINETALES(5),
        FLANNERY_MAGCARGO(5),
        FLANNERY_CASTFORM(5),
        FLANNERY_BLAZIKEN(5),
        FLANNERY_CAMERUPT(5),
        FLANNERY_TORKOAL(5),
    },
},

#define NORMAN_INFO             \
    LEADER_INFO(NORMAN),        \
    .trainerName = _("Norman"), \
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE

[TRAINER_NORMAN_1] =
{
    NORMAN_INFO,
    .items = {ITEM_HYPER_POTION, ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE},
    .partySize = 4,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 31,
        .species = SPECIES_LINOONE,
        .ability = ABILITY_QUICK_FEET,
        IVS(24),
        .moves = {MOVE_FACADE, MOVE_SLASH, MOVE_PLAY_ROUGH, MOVE_HONE_CLAWS},
        .gender = TRAINER_MON_MALE,
        },
        {
        .lvl = 33,
        .species = SPECIES_ZANGOOSE,
        .ability = ABILITY_POISON_HEAL,
        IVS(24),
        .moves = {MOVE_FACADE, MOVE_CRUSH_CLAW, MOVE_NIGHT_SLASH, MOVE_HONE_CLAWS},
        .gender = TRAINER_MON_MALE,
        },
        {
        .lvl = 33,
        .species = SPECIES_SPINDA,
        .ability = ABILITY_OWN_TEMPO,
        .nature = NATURE_QUIRKY,
        IVS(24),
        .moves = {MOVE_FACADE, MOVE_TEETER_DANCE, MOVE_FEINT_ATTACK, MOVE_DIZZY_PUNCH},
        .gender = TRAINER_MON_MALE,
        },
        {
        .lvl = 35,
        .species = SPECIES_VIGOROTH,
        IVS(30),
        .moves = {MOVE_FACADE, MOVE_THROAT_CHOP, MOVE_SLACK_OFF, MOVE_FOCUS_ENERGY},
        .gender = TRAINER_MON_MALE,
        .heldItem = ITEM_SITRUS_BERRY,
        }
    },
},

#define NORMAN_SLAKING(rematch)                                                        \
    {                                                                                  \
    REMATCH_MON(SLAKING, ACE, rematch),                                                \
    .ability = ABILITY_TRUANT,                                                         \
    .nature = NATURE_ADAMANT,                                                          \
    .ev = EV_SPREAD_ATK_SPE_HP,                                                        \
    .moves = {MOVE_GIGA_IMPACT, MOVE_HAMMER_ARM, MOVE_THROAT_CHOP, MOVE_SUCKER_PUNCH}, \
    .gender = TRAINER_MON_MALE,                                                        \
    .heldItem = ITEM_SITRUS_BERRY,                                                     \
    }

#define NORMAN_SPINDA(rematch)                                                 \
    {                                                                          \
    REMATCH_MON(SPINDA, TIER2, rematch),                                       \
    .ability = ABILITY_OWN_TEMPO,                                              \
    .nature = NATURE_JOLLY,                                                    \
    .ev = EV_SPREAD_ATK_SPE_HP,                                                \
    .moves = {MOVE_THRASH, MOVE_TEETER_DANCE, MOVE_HYPNOSIS, MOVE_SKILL_SWAP}, \
    .gender = TRAINER_MON_MALE,                                                \
    .heldItem = ITEM_LIECHI_BERRY,                                             \
    }

#define NORMAN_ZANGOOSE(rematch)                                                 \
    {                                                                            \
    REMATCH_MON(ZANGOOSE, TIER2, rematch),                                       \
    .ability = ABILITY_POISON_HEAL,                                              \
    .nature = NATURE_ADAMANT,                                                    \
    .ev = EV_SPREAD_ATK_SPE_HP,                                                  \
    .moves = {MOVE_FACADE, MOVE_X_SCISSOR, MOVE_NIGHT_SLASH, MOVE_SWORDS_DANCE}, \
    .gender = TRAINER_MON_MALE,                                                  \
    .heldItem = ITEM_TOXIC_ORB,                                                  \
    }

#define NORMAN_LINOONE(rematch)                                                \
    {                                                                          \
    REMATCH_MON(LINOONE, TIER3, rematch),                                      \
    .ability = ABILITY_QUICK_FEET,                                             \
    .nature = NATURE_JOLLY,                                                    \
    .ev = EV_SPREAD_ATK_SPE_HP,                                                \
    .moves = {MOVE_SLASH, MOVE_PLAY_ROUGH, MOVE_PIN_MISSILE, MOVE_BELLY_DRUM}, \
    .gender = TRAINER_MON_MALE,                                                \
    }

#define NORMAN_EXPLOUD(rematch)                                                           \
    {                                                                                     \
    REMATCH_MON(EXPLOUD, TIER3, rematch),                                                 \
    .ability = ABILITY_PUNK_ROCK,                                                         \
    .nature = NATURE_MODEST,                                                              \
    .ev = EV_SPREAD_SPA_SPE_HP,                                                           \
    .moves = {MOVE_HYPER_VOICE, MOVE_DISARMING_VOICE, MOVE_SHADOW_BALL, MOVE_SUPERSONIC}, \
    .gender = TRAINER_MON_MALE,                                                           \
    }

[TRAINER_NORMAN_2] =
{
    NORMAN_INFO,
    .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
    .doubleBattle = TRUE,
    .partySize = 4,
    .party = (const struct TrainerMon[]) {
        NORMAN_LINOONE(2),
        NORMAN_ZANGOOSE(2),
        NORMAN_SPINDA(2),
        NORMAN_SLAKING(2),
    },
},

[TRAINER_NORMAN_3] =
{
    NORMAN_INFO,
    .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
    .doubleBattle = TRUE,
    .partySize = 5,
    .party = (const struct TrainerMon[]) {
        NORMAN_LINOONE(3),
        NORMAN_EXPLOUD(3),
        NORMAN_ZANGOOSE(3),
        NORMAN_SPINDA(3),
        NORMAN_SLAKING(3),
    },
},

[TRAINER_NORMAN_4] =
{
    NORMAN_INFO,
    .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
    .doubleBattle = TRUE,
    .partySize = 5,
    .party = (const struct TrainerMon[]) {
        NORMAN_LINOONE(4),
        NORMAN_EXPLOUD(4),
        NORMAN_ZANGOOSE(4),
        NORMAN_SPINDA(4),
        NORMAN_SLAKING(4),
    },
},

[TRAINER_NORMAN_5] =
{
    NORMAN_INFO,
    .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
    .doubleBattle = TRUE,
    .partySize = 6,
    .party = (const struct TrainerMon[]) {
        NORMAN_LINOONE(5),
        {
        REMATCH_MON(KECLEON, TIER3, 5),
        .moves = {MOVE_FACADE, MOVE_SHADOW_CLAW, MOVE_SUCKER_PUNCH, MOVE_DISABLE},
        .gender = TRAINER_MON_MALE,
        },
        NORMAN_EXPLOUD(5),
        NORMAN_ZANGOOSE(5),
        NORMAN_SPINDA(5),
        NORMAN_SLAKING(5),
    },
},

#define WINONA_INFO             \
    LEADER_INFO(WINONA),        \
    .trainerName = _("Winona"), \
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE

[TRAINER_WINONA_1] =
{
    WINONA_INFO,
    .items = {ITEM_HYPER_POTION, ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE},
    .partySize = 5,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 40,
        .species = SPECIES_MASQUERAIN,
        IVS(25),
        .moves = {MOVE_AERIAL_ACE, MOVE_SILVER_WIND, MOVE_SCARY_FACE, MOVE_STUN_SPORE},
        .gender = TRAINER_MON_FEMALE,
        },
        {
        .lvl = 40,
        .species = SPECIES_TROPIUS,
        .ability = ABILITY_CHLOROPHYLL,
        IVS(25),
        .moves = {MOVE_AERIAL_ACE, MOVE_LEAF_TORNADO, MOVE_STOMP, MOVE_SWEET_SCENT},
        .gender = TRAINER_MON_FEMALE,
        },
        {
        .lvl = 41,
        .species = SPECIES_PELIPPER,
        .ability = ABILITY_DRIZZLE,
        IVS(25),
        .moves = {MOVE_AERIAL_ACE, MOVE_WATER_PULSE, MOVE_SUPERSONIC, MOVE_TAILWIND},
        .gender = TRAINER_MON_FEMALE,
        },
        {
        .lvl = 41,
        .species = SPECIES_SWELLOW,
        .ability = ABILITY_SCRAPPY,
        IVS(26),
        .moves = {MOVE_AERIAL_ACE, MOVE_QUICK_ATTACK, MOVE_QUICK_GUARD, MOVE_AGILITY},
        .gender = TRAINER_MON_FEMALE,
        },
        {
        .lvl = 43,
        .species = SPECIES_ALTARIA,
        PERFECT_IVS,
        .moves = {MOVE_AERIAL_ACE, MOVE_DRAGON_BREATH, MOVE_COTTON_GUARD, MOVE_DRAGON_DANCE},
        .gender = TRAINER_MON_FEMALE,
        .heldItem = ITEM_SITRUS_BERRY,
        }
    },
},

#define WINONA_ALTARIA(rematch)                                                      \
    {                                                                                \
    REMATCH_MON(ALTARIA, ACE, rematch),                                              \
    .ability = ABILITY_NATURAL_CURE,                                                 \
    .nature = NATURE_MODEST,                                                         \
    .ev = EV_SPREAD_SPA_SPE_SPD,                                                     \
    .moves = {MOVE_AIR_SLASH, MOVE_DRAGON_PULSE, MOVE_MOONBLAST, MOVE_COTTON_GUARD}, \
    .gender = TRAINER_MON_FEMALE,                                                    \
    .heldItem = ITEM_SITRUS_BERRY,                                                   \
    }

#define WINONA_SWELLOW(rematch)                                                 \
    {                                                                           \
    REMATCH_MON(SWELLOW, TIER2, rematch),                                       \
    .ability = ABILITY_SCRAPPY,                                                 \
    .nature = NATURE_JOLLY,                                                     \
    .ev = EV_SPREAD_ATK_SPE_HP,                                                 \
    .moves = {MOVE_BRAVE_BIRD, MOVE_ENDEAVOR, MOVE_REVERSAL, MOVE_DOUBLE_TEAM}, \
    .gender = TRAINER_MON_FEMALE,                                               \
    .heldItem = ITEM_SHARP_BEAK,                                                \
    }

#define WINONA_PELIPPER(rematch)                                                        \
    {                                                                                   \
    REMATCH_MON(PELIPPER, TIER2, rematch),                                              \
    .ability = ABILITY_DRIZZLE,                                                         \
    .nature = NATURE_MODEST,                                                            \
    .ev = TRAINER_PARTY_EVS(0, 0, EV_REMAINDER, MAX_PER_STAT_EVS, MAX_PER_STAT_EVS, 0), \
    .moves = {MOVE_HURRICANE, MOVE_HYDRO_PUMP, MOVE_TAILWIND, MOVE_ROOST},              \
    .gender = TRAINER_MON_FEMALE,                                                       \
    .heldItem = ITEM_DAMP_ROCK,                                                         \
    }

#define WINONA_TROPIUS(rematch)                                                         \
    {                                                                                   \
    REMATCH_MON(TROPIUS, TIER3, rematch),                                               \
    .ability = ABILITY_CHLOROPHYLL,                                                     \
    .nature = NATURE_MODEST,                                                            \
    .ev = TRAINER_PARTY_EVS(MAX_PER_STAT_EVS, 0, 0, EV_REMAINDER, MAX_PER_STAT_EVS, 0), \
    .moves = {MOVE_AIR_SLASH, MOVE_ENERGY_BALL, MOVE_BODY_SLAM, MOVE_SYNTHESIS},        \
    .gender = TRAINER_MON_FEMALE,                                                       \
    }

#define WINONA_MASQUERAIN(rematch)                                                \
    {                                                                             \
    REMATCH_MON(MASQUERAIN, TIER3, rematch),                                      \
    .ability = ABILITY_INTIMIDATE,                                                \
    .nature = NATURE_MODEST,                                                      \
    .ev = EV_SPREAD_SPA_SPE_SPD,                                                  \
    .moves = {MOVE_AIR_SLASH, MOVE_BUG_BUZZ, MOVE_GIGA_DRAIN, MOVE_QUIVER_DANCE}, \
    .gender = TRAINER_MON_FEMALE,                                                 \
    }

#define WINONA_NINJASK(rematch)                                                      \
    {                                                                                \
    REMATCH_MON(NINJASK, TIER3, rematch),                                            \
    .ability = ABILITY_SPEED_BOOST,                                                  \
    .nature = NATURE_JOLLY,                                                          \
    .ev = EV_SPREAD_ATK_SPE_HP,                                                      \
    .moves = {MOVE_ACROBATICS, MOVE_LEECH_LIFE, MOVE_BATON_PASS, MOVE_SWORDS_DANCE}, \
    .gender = TRAINER_MON_FEMALE,                                                    \
    }

[TRAINER_WINONA_2] =
{
    WINONA_INFO,
    .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
    .doubleBattle = TRUE,
    .partySize = 5,
    .party = (const struct TrainerMon[]) {
        WINONA_MASQUERAIN(2),
        WINONA_TROPIUS(2),
        WINONA_PELIPPER(2),
        WINONA_SWELLOW(2),
        WINONA_ALTARIA(2),
    },
},

[TRAINER_WINONA_3] =
{
    WINONA_INFO,
    .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
    .doubleBattle = TRUE,
    .partySize = 6,
    .party = (const struct TrainerMon[]) {
        WINONA_NINJASK(3),
        WINONA_MASQUERAIN(3),
        WINONA_TROPIUS(3),
        WINONA_PELIPPER(3),
        WINONA_SWELLOW(3),
        WINONA_ALTARIA(3),
    },
},

[TRAINER_WINONA_4] =
{
    WINONA_INFO,
    .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
    .doubleBattle = TRUE,
    .partySize = 6,
    .party = (const struct TrainerMon[]) {
        WINONA_NINJASK(4),
        WINONA_MASQUERAIN(4),
        WINONA_TROPIUS(4),
        WINONA_PELIPPER(4),
        WINONA_SWELLOW(4),
        WINONA_ALTARIA(4),
    },
},

[TRAINER_WINONA_5] =
{
    WINONA_INFO,
    .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
    .doubleBattle = TRUE,
    .partySize = 6,
    .party = (const struct TrainerMon[]) {
        WINONA_NINJASK(5),
        WINONA_MASQUERAIN(5),
        WINONA_TROPIUS(5),
        WINONA_PELIPPER(5),
        WINONA_SWELLOW(5),
        WINONA_ALTARIA(5),
    },
},

#define TATE_AND_LIZA_INFO                                   \
    LEADER_INFO(TATE_AND_LIZA),                              \
    .trainerName = _("Tate&Liza"),                           \
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE, \
    .doubleBattle = TRUE

[TRAINER_TATE_AND_LIZA_1] =
{
    TATE_AND_LIZA_INFO,
    .items = {ITEM_HYPER_POTION, ITEM_HYPER_POTION, ITEM_HYPER_POTION, ITEM_HYPER_POTION},
    .partySize = 4,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 55,
        .species = SPECIES_CLAYDOL,
        IVS(30),
        .moves = {MOVE_PSYCHIC, MOVE_EARTH_POWER, MOVE_COSMIC_POWER, MOVE_LIGHT_SCREEN},
        },
        {
        .lvl = 55,
        .species = SPECIES_GRUMPIG,
        .ability = ABILITY_THICK_FAT,
        IVS(30),
        .moves = {MOVE_PSYCHIC, MOVE_POWER_GEM, MOVE_CONFUSE_RAY, MOVE_MAGIC_COAT},
        .gender = TRAINER_MON_MALE,
        },
        {
        .lvl = 57,
        .species = SPECIES_LUNATONE,
        IVS(30),
        .moves = {MOVE_PSYCHIC, MOVE_MOONBLAST, MOVE_POWER_GEM, MOVE_ICY_WIND},
        .heldItem = ITEM_SITRUS_BERRY,
        },
        {
        .lvl = 57,
        .species = SPECIES_SOLROCK,
        IVS(30),
        .moves = {MOVE_PSYCHIC, MOVE_ROCK_SLIDE, MOVE_FLARE_BLITZ, MOVE_MORNING_SUN},
        .heldItem = ITEM_SITRUS_BERRY,
        }
    },
},

#define TATE_SOLROCK(rematch)              \
    {                                      \
    REMATCH_MON(, ACE, rematch),           \
    .ability = ABILITY_,                   \
    .nature = NATURE_,                     \
    .ev = ,                                \
    .moves = {MOVE_, MOVE_, MOVE_, MOVE_}, \
    .gender = TRAINER_MON_MALE,            \
    .heldItem = ITEM_,                     \
    }

#define LIZA_LUNATONE(rematch)             \
    {                                      \
    REMATCH_MON(, ACE, rematch),           \
    .ability = ABILITY_,                   \
    .nature = NATURE_,                     \
    .ev = ,                                \
    .moves = {MOVE_, MOVE_, MOVE_, MOVE_}, \
    .gender = TRAINER_MON_MALE,            \
    .heldItem = ITEM_,                     \
    }

#define TATE_GRUMPIG(rematch)              \
    {                                      \
    REMATCH_MON(, TIER2, rematch),         \
    .ability = ABILITY_,                   \
    .nature = NATURE_,                     \
    .ev = ,                                \
    .moves = {MOVE_, MOVE_, MOVE_, MOVE_}, \
    .gender = TRAINER_MON_MALE,            \
    }

#define LIZA_CLAYDOL(rematch)              \
    {                                      \
    REMATCH_MON(, TIER2, rematch),         \
    .ability = ABILITY_,                   \
    .nature = NATURE_,                     \
    .ev = ,                                \
    .moves = {MOVE_, MOVE_, MOVE_, MOVE_}, \
    .gender = TRAINER_MON_MALE,            \
    }

#define TATE_CHIMECHO(rematch)             \
    {                                      \
    REMATCH_MON(, TIER3, rematch),         \
    .ability = ABILITY_,                   \
    .nature = NATURE_,                     \
    .ev = ,                                \
    .moves = {MOVE_, MOVE_, MOVE_, MOVE_}, \
    .gender = TRAINER_MON_MALE,            \
    }

#define LIZA_GARDEVOIR(rematch)            \
    {                                      \
    REMATCH_MON(, TIER3, rematch),         \
    .ability = ABILITY_,                   \
    .nature = NATURE_,                     \
    .ev = ,                                \
    .moves = {MOVE_, MOVE_, MOVE_, MOVE_}, \
    .gender = TRAINER_MON_MALE,            \
    }

[TRAINER_TATE_AND_LIZA_2] =
{
    TATE_AND_LIZA_INFO,
    .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
    .partySize = 5,
    .party = (const struct TrainerMon[]) {
        {
        REMATCH_MON(CHIMECHO, TIER3, 2),
        .moves = {MOVE_PSYCHIC, MOVE_HEAL_PULSE, MOVE_LIGHT_SCREEN, MOVE_HEAL_BELL},
        .gender = TRAINER_MON_MALE,
        },
        {
        REMATCH_MON(CLAYDOL, TIER2, 2),
        .moves = {MOVE_PSYCHIC, MOVE_EARTH_POWER, MOVE_POWER_SPLIT, MOVE_COSMIC_POWER},
        },
        {
        REMATCH_MON(GRUMPIG, TIER2, 2),
        .ability = ABILITY_THICK_FAT,
        .moves = {MOVE_PSYCHIC, MOVE_POWER_GEM, MOVE_CONFUSE_RAY, MOVE_MAGIC_COAT},
        .gender = TRAINER_MON_MALE,
        },
        {
        REMATCH_MON(LUNATONE, ACE, 2),
        .moves = {MOVE_PSYCHIC, MOVE_MOONBLAST, MOVE_ICY_WIND, MOVE_COSMIC_POWER},
        .heldItem = ITEM_SITRUS_BERRY,
        },
        {
        REMATCH_MON(SOLROCK, ACE, 2),
        .moves = {MOVE_PSYCHIC, MOVE_ROCK_SLIDE, MOVE_FLARE_BLITZ, MOVE_MORNING_SUN},
        .heldItem = ITEM_SITRUS_BERRY,
        }
    },
},

[TRAINER_TATE_AND_LIZA_3] =
{
    TATE_AND_LIZA_INFO,
    .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
    .partySize = 6,
    .party = (const struct TrainerMon[]) {
        {
        REMATCH_MON(GARDEVOIR, TIER3, 3),
        .ability = ABILITY_SYNCHRONIZE,
        .moves = {MOVE_PSYCHIC, MOVE_DAZZLING_GLEAM, MOVE_MYSTICAL_FIRE, MOVE_CALM_MIND},
        .gender = TRAINER_MON_FEMALE,
        },
        {
        REMATCH_MON(CHIMECHO, TIER3, 3),
        .moves = {MOVE_PSYCHIC, MOVE_HEAL_PULSE, MOVE_LIGHT_SCREEN, MOVE_HEAL_BELL},
        .gender = TRAINER_MON_MALE,
        },
        {
        REMATCH_MON(CLAYDOL, TIER2, 3),
        .moves = {MOVE_PSYCHIC, MOVE_EARTH_POWER, MOVE_POWER_SPLIT, MOVE_COSMIC_POWER},
        },
        {
        REMATCH_MON(GRUMPIG, TIER2, 3),
        .ability = ABILITY_THICK_FAT,
        .moves = {MOVE_PSYCHIC, MOVE_POWER_GEM, MOVE_CONFUSE_RAY, MOVE_MAGIC_COAT},
        .gender = TRAINER_MON_MALE,
        },
        {
        REMATCH_MON(LUNATONE, ACE, 3),
        .moves = {MOVE_PSYCHIC, MOVE_MOONBLAST, MOVE_ICY_WIND, MOVE_COSMIC_POWER},
        .heldItem = ITEM_SITRUS_BERRY,
        },
        {
        REMATCH_MON(SOLROCK, ACE, 3),
        .moves = {MOVE_PSYCHIC, MOVE_ROCK_SLIDE, MOVE_FLARE_BLITZ, MOVE_MORNING_SUN},
        .heldItem = ITEM_SITRUS_BERRY,
        }
    },
},

[TRAINER_TATE_AND_LIZA_4] =
{
    TATE_AND_LIZA_INFO,
    .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
    .partySize = 6,
    .party = (const struct TrainerMon[]) {
        {
        REMATCH_MON(GARDEVOIR, TIER3, 4),
        .ability = ABILITY_SYNCHRONIZE,
        .moves = {MOVE_PSYCHIC, MOVE_DAZZLING_GLEAM, MOVE_MYSTICAL_FIRE, MOVE_CALM_MIND},
        .gender = TRAINER_MON_FEMALE,
        },
        {
        REMATCH_MON(CHIMECHO, TIER3, 4),
        .moves = {MOVE_PSYCHIC, MOVE_HEAL_PULSE, MOVE_LIGHT_SCREEN, MOVE_HEAL_BELL},
        .gender = TRAINER_MON_MALE,
        },
        {
        REMATCH_MON(CLAYDOL, TIER2, 4),
        .moves = {MOVE_PSYCHIC, MOVE_EARTH_POWER, MOVE_POWER_SPLIT, MOVE_COSMIC_POWER},
        },
        {
        REMATCH_MON(GRUMPIG, TIER2, 4),
        .ability = ABILITY_THICK_FAT,
        .moves = {MOVE_PSYCHIC, MOVE_POWER_GEM, MOVE_CONFUSE_RAY, MOVE_MAGIC_COAT},
        .gender = TRAINER_MON_MALE,
        },
        {
        REMATCH_MON(LUNATONE, ACE, 4),
        .moves = {MOVE_PSYCHIC, MOVE_MOONBLAST, MOVE_ICY_WIND, MOVE_COSMIC_POWER},
        .heldItem = ITEM_SITRUS_BERRY,
        },
        {
        REMATCH_MON(SOLROCK, ACE, 4),
        .moves = {MOVE_PSYCHIC, MOVE_ROCK_SLIDE, MOVE_FLARE_BLITZ, MOVE_MORNING_SUN},
        .heldItem = ITEM_SITRUS_BERRY,
        }
    },
},

[TRAINER_TATE_AND_LIZA_5] =
{
    TATE_AND_LIZA_INFO,
    .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
    .partySize = 6,
    .party = (const struct TrainerMon[]) {
        {
        REMATCH_MON(GARDEVOIR, TIER3, 5),
        .ability = ABILITY_SYNCHRONIZE,
        .moves = {MOVE_PSYCHIC, MOVE_DAZZLING_GLEAM, MOVE_MYSTICAL_FIRE, MOVE_CALM_MIND},
        .gender = TRAINER_MON_FEMALE,
        },
        {
        REMATCH_MON(CHIMECHO, TIER3, 5),
        .moves = {MOVE_PSYCHIC, MOVE_HEAL_PULSE, MOVE_LIGHT_SCREEN, MOVE_HEAL_BELL},
        .gender = TRAINER_MON_MALE,
        },
        {
        REMATCH_MON(CLAYDOL, TIER2, 5),
        .moves = {MOVE_PSYCHIC, MOVE_EARTH_POWER, MOVE_POWER_SPLIT, MOVE_COSMIC_POWER},
        },
        {
        REMATCH_MON(GRUMPIG, TIER2, 5),
        .ability = ABILITY_THICK_FAT,
        .moves = {MOVE_PSYCHIC, MOVE_POWER_GEM, MOVE_CONFUSE_RAY, MOVE_MAGIC_COAT},
        .gender = TRAINER_MON_MALE,
        },
        {
        REMATCH_MON(LUNATONE, ACE, 5),
        .moves = {MOVE_PSYCHIC, MOVE_MOONBLAST, MOVE_ICY_WIND, MOVE_COSMIC_POWER},
        .heldItem = ITEM_SITRUS_BERRY,
        },
        {
        REMATCH_MON(SOLROCK, ACE, 5),
        .moves = {MOVE_PSYCHIC, MOVE_ROCK_SLIDE, MOVE_FLARE_BLITZ, MOVE_MORNING_SUN},
        .heldItem = ITEM_SITRUS_BERRY,
        }
    },
},

#define JUAN_INFO             \
    LEADER_INFO(JUAN),        \
    .trainerName = _("Juan"), \
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE

[TRAINER_JUAN_1] =
{
    JUAN_INFO,
    .items = {ITEM_HYPER_POTION, ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE},
    .partySize = 5,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 44,
        .species = SPECIES_CASTFORM,
        IVS(24),
        .moves = {MOVE_WATER_PULSE, MOVE_WEATHER_BALL, MOVE_POWDER_SNOW, MOVE_RAIN_DANCE},
        },
        {
        .lvl = 44,
        .species = SPECIES_HUNTAIL,
        IVS(24),
        .moves = {MOVE_WATER_PULSE, MOVE_CRUNCH, MOVE_ICE_FANG, MOVE_RAIN_DANCE},
        },
        {
        .lvl = 45,
        .species = SPECIES_CRAWDAUNT,
        IVS(24),
        .moves = {MOVE_WATER_PULSE, MOVE_NIGHT_SLASH, MOVE_TAUNT, MOVE_SWORDS_DANCE},
        },
        {
        .lvl = 45,
        .species = SPECIES_LUVDISC,
        IVS(24),
        .moves = {MOVE_WATER_PULSE, MOVE_ATTRACT, MOVE_BABY_DOLL_EYES, MOVE_WISH},
        },
        {
        .lvl = 47,
        .species = SPECIES_WHISCASH,
        IVS(30),
        .moves = {MOVE_WATER_PULSE, MOVE_EARTHQUAKE, MOVE_AMNESIA, MOVE_DRAGON_DANCE},
        .heldItem = ITEM_SITRUS_BERRY,
        }
    },
},

#define JUAN_WHISCASH(rematch)             \
    {                                      \
    REMATCH_MON(, ACE, rematch),           \
    .ability = ABILITY_,                   \
    .nature = NATURE_,                     \
    .ev = ,                                \
    .moves = {MOVE_, MOVE_, MOVE_, MOVE_}, \
    .gender = TRAINER_MON_MALE,            \
    .heldItem = ITEM_,                     \
    }

#define JUAN_LUVDISC(rematch)              \
    {                                      \
    REMATCH_MON(, TIER2, rematch),         \
    .ability = ABILITY_,                   \
    .nature = NATURE_,                     \
    .ev = ,                                \
    .moves = {MOVE_, MOVE_, MOVE_, MOVE_}, \
    .gender = TRAINER_MON_MALE,            \
    .heldItem = ITEM_,                     \
    }

#define JUAN_CRAWDAUNT(rematch)            \
    {                                      \
    REMATCH_MON(, TIER2, rematch),         \
    .ability = ABILITY_,                   \
    .nature = NATURE_,                     \
    .ev = ,                                \
    .moves = {MOVE_, MOVE_, MOVE_, MOVE_}, \
    .gender = TRAINER_MON_MALE,            \
    .heldItem = ITEM_,                     \
    }

#define JUAN_HUNTAIL(rematch)              \
    {                                      \
    REMATCH_MON(, TIER3, rematch),         \
    .ability = ABILITY_,                   \
    .nature = NATURE_,                     \
    .ev = ,                                \
    .moves = {MOVE_, MOVE_, MOVE_, MOVE_}, \
    .gender = TRAINER_MON_MALE,            \
    }

#define JUAN_CASTFORM(rematch)             \
    {                                      \
    REMATCH_MON(, TIER3, rematch),         \
    .ability = ABILITY_,                   \
    .nature = NATURE_,                     \
    .ev = ,                                \
    .moves = {MOVE_, MOVE_, MOVE_, MOVE_}, \
    .gender = TRAINER_MON_MALE,            \
    }

#define JUAN_SWAMPERT(rematch)             \
    {                                      \
    REMATCH_MON(, TIER3, rematch),         \
    .ability = ABILITY_,                   \
    .nature = NATURE_,                     \
    .ev = ,                                \
    .moves = {MOVE_, MOVE_, MOVE_, MOVE_}, \
    .gender = TRAINER_MON_MALE,            \
    }


[TRAINER_JUAN_2] =
{
    JUAN_INFO,
    .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
    .doubleBattle = TRUE,
    .partySize = 5,
    .party = (const struct TrainerMon[]) {
        {
        REMATCH_MON(CASTFORM, TIER3, 2),
        .moves = {MOVE_WEATHER_BALL, MOVE_THUNDER, MOVE_HURRICANE, MOVE_RAIN_DANCE},
        },
        {
        REMATCH_MON(HUNTAIL, TIER3, 2),
        .moves = {MOVE_AQUA_TAIL, MOVE_CRUNCH, MOVE_BATON_PASS, MOVE_COIL},
        },
        {
        REMATCH_MON(CRAWDAUNT, TIER2, 2),
        .moves = {MOVE_CRABHAMMER, MOVE_CRUNCH, MOVE_ENDEAVOR, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_MYSTIC_WATER,
        },
        {
        REMATCH_MON(LUVDISC, TIER2, 2),
        .moves = {MOVE_HYDRO_PUMP, MOVE_WISH, MOVE_BABY_DOLL_EYES, MOVE_RAIN_DANCE},
        .heldItem = ITEM_DAMP_ROCK,
        },
        {
        REMATCH_MON(WHISCASH, ACE, 2),
        .moves = {MOVE_AQUA_TAIL, MOVE_EARTHQUAKE, MOVE_ZEN_HEADBUTT, MOVE_DRAGON_DANCE},
        .heldItem = ITEM_SITRUS_BERRY,
        }
    },
},

[TRAINER_JUAN_3] =
{
    JUAN_INFO,
    .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
    .doubleBattle = TRUE,
    .partySize = 6,
    .party = (const struct TrainerMon[]) {
        {
        REMATCH_MON(SWAMPERT, TIER3, 3),
        .moves = {MOVE_LIQUIDATION, MOVE_EARTHQUAKE, MOVE_HAMMER_ARM, MOVE_ROCK_SLIDE},
        },
        {
        REMATCH_MON(CASTFORM, TIER3, 3),
        .moves = {MOVE_WEATHER_BALL, MOVE_THUNDER, MOVE_HURRICANE, MOVE_RAIN_DANCE},
        },
        {
        REMATCH_MON(HUNTAIL, TIER3, 3),
        .moves = {MOVE_AQUA_TAIL, MOVE_CRUNCH, MOVE_BATON_PASS, MOVE_COIL},
        },
        {
        REMATCH_MON(CRAWDAUNT, TIER2, 3),
        .moves = {MOVE_CRABHAMMER, MOVE_CRUNCH, MOVE_ENDEAVOR, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_MYSTIC_WATER,
        },
        {
        REMATCH_MON(LUVDISC, TIER2, 3),
        .moves = {MOVE_HYDRO_PUMP, MOVE_WISH, MOVE_BABY_DOLL_EYES, MOVE_RAIN_DANCE},
        .heldItem = ITEM_DAMP_ROCK,
        },
        {
        REMATCH_MON(WHISCASH, ACE, 3),
        .moves = {MOVE_AQUA_TAIL, MOVE_EARTHQUAKE, MOVE_ZEN_HEADBUTT, MOVE_DRAGON_DANCE},
        .heldItem = ITEM_SITRUS_BERRY,
        }
    },
},

[TRAINER_JUAN_4] =
{
    JUAN_INFO,
    .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
    .doubleBattle = TRUE,
    .partySize = 6,
    .party = (const struct TrainerMon[]) {
        {
        REMATCH_MON(SWAMPERT, TIER3, 4),
        .moves = {MOVE_LIQUIDATION, MOVE_EARTHQUAKE, MOVE_HAMMER_ARM, MOVE_ROCK_SLIDE},
        },
        {
        REMATCH_MON(CASTFORM, TIER3, 4),
        .moves = {MOVE_WEATHER_BALL, MOVE_THUNDER, MOVE_HURRICANE, MOVE_RAIN_DANCE},
        },
        {
        REMATCH_MON(HUNTAIL, TIER3, 4),
        .moves = {MOVE_AQUA_TAIL, MOVE_CRUNCH, MOVE_BATON_PASS, MOVE_COIL},
        },
        {
        REMATCH_MON(CRAWDAUNT, TIER2, 4),
        .moves = {MOVE_CRABHAMMER, MOVE_CRUNCH, MOVE_ENDEAVOR, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_MYSTIC_WATER,
        },
        {
        REMATCH_MON(LUVDISC, TIER2, 4),
        .moves = {MOVE_HYDRO_PUMP, MOVE_WISH, MOVE_BABY_DOLL_EYES, MOVE_RAIN_DANCE},
        .heldItem = ITEM_DAMP_ROCK,
        },
        {
        REMATCH_MON(WHISCASH, ACE, 4),
        .moves = {MOVE_AQUA_TAIL, MOVE_EARTHQUAKE, MOVE_ZEN_HEADBUTT, MOVE_DRAGON_DANCE},
        .heldItem = ITEM_SITRUS_BERRY,
        }
    },
},

[TRAINER_JUAN_5] =
{
    JUAN_INFO,
    .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
    .doubleBattle = TRUE,
    .partySize = 6,
    .party = (const struct TrainerMon[]) {
        {
        REMATCH_MON(SWAMPERT, TIER3, 5),
        .moves = {MOVE_LIQUIDATION, MOVE_EARTHQUAKE, MOVE_HAMMER_ARM, MOVE_ROCK_SLIDE},
        },
        {
        REMATCH_MON(CASTFORM, TIER3, 5),
        .moves = {MOVE_WEATHER_BALL, MOVE_THUNDER, MOVE_HURRICANE, MOVE_RAIN_DANCE},
        },
        {
        REMATCH_MON(HUNTAIL, TIER3, 5),
        .moves = {MOVE_AQUA_TAIL, MOVE_CRUNCH, MOVE_BATON_PASS, MOVE_COIL},
        },
        {
        REMATCH_MON(CRAWDAUNT, TIER2, 5),
        .moves = {MOVE_CRABHAMMER, MOVE_CRUNCH, MOVE_ENDEAVOR, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_MYSTIC_WATER,
        },
        {
        REMATCH_MON(LUVDISC, TIER2, 5),
        .moves = {MOVE_HYDRO_PUMP, MOVE_WISH, MOVE_BABY_DOLL_EYES, MOVE_RAIN_DANCE},
        .heldItem = ITEM_DAMP_ROCK,
        },
        {
        REMATCH_MON(WHISCASH, ACE, 5),
        .moves = {MOVE_AQUA_TAIL, MOVE_EARTHQUAKE, MOVE_ZEN_HEADBUTT, MOVE_DRAGON_DANCE},
        .heldItem = ITEM_SITRUS_BERRY,
        }
    },
},

#define ELITE_FOUR_INFO(Trainer, MugshotColor)      \
    .trainerClass = TRAINER_CLASS_ELITE_FOUR,       \
    .trainerPic = TRAINER_PIC_ELITE_FOUR_##Trainer, \
    .mugshotEnabled = TRUE,                         \
    .mugshotColor = MUGSHOT_COLOR_##MugshotColor,   \
    BOSS_AI_FLAGS

[TRAINER_SIDNEY] =
{
    ELITE_FOUR_INFO(SIDNEY, PURPLE),
    .trainerName = _("Sidney"),
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
    .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
    .partySize = 5,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 50,
        .species = SPECIES_MIGHTYENA,
        IVS(30),
        .moves = {MOVE_CRUNCH, MOVE_FIRE_FANG, MOVE_THUNDER_FANG, MOVE_YAWN},
        },
        {
        .lvl = 50,
        .species = SPECIES_SHIFTRY,
        IVS(30),
        .moves = {MOVE_NIGHT_SLASH, MOVE_LEAF_BLADE, MOVE_FAKE_OUT, MOVE_DOUBLE_SLAP},
        },
        {
        .lvl = 51,
        .species = SPECIES_CRAWDAUNT,
        IVS(30),
        .moves = {MOVE_CRUNCH, MOVE_CRABHAMMER, MOVE_KNOCK_OFF, MOVE_SWORDS_DANCE},
        },
        {
        .lvl = 51,
        .species = SPECIES_CACTURNE,
        IVS(30),
        .moves = {MOVE_ENERGY_BALL, MOVE_DARK_PULSE, MOVE_LEECH_SEED, MOVE_SPIKY_SHIELD},
        },
        {
        .lvl = 52,
        .species = SPECIES_ABSOL,
        PERFECT_IVS,
        .moves = {MOVE_NIGHT_SLASH, MOVE_PSYCHO_CUT, MOVE_AERIAL_ACE, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_SITRUS_BERRY,
        }
    },
},

[TRAINER_PHOEBE] =
{
    ELITE_FOUR_INFO(PHOEBE, GREEN),
    .trainerName = _("Phoebe"),
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
    .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
    .partySize = 5,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 51,
        .species = SPECIES_DUSCLOPS,
        IVS(30),
        .moves = {MOVE_HEX, MOVE_CONFUSE_RAY, MOVE_CURSE, MOVE_WILL_O_WISP},
        },
        {
        .lvl = 51,
        .species = SPECIES_SHEDINJA,
        IVS(30),
        .moves = {MOVE_SHADOW_CLAW, MOVE_LEECH_LIFE, MOVE_HEAL_BLOCK, MOVE_SPITE},
        },
        {
        .lvl = 52,
        .species = SPECIES_SABLEYE,
        IVS(30),
        .moves = {MOVE_SHADOW_CLAW, MOVE_FOUL_PLAY, MOVE_POWER_GEM, MOVE_FAKE_OUT},
        },
        {
        .lvl = 52,
        .species = SPECIES_BANETTE,
        IVS(30),
        .moves = {MOVE_SHADOW_CLAW, MOVE_BODY_SLAM, MOVE_SHADOW_SNEAK, MOVE_SWORDS_DANCE},
        },
        {
        .lvl = 53,
        .species = SPECIES_DUSKNOIR,
        PERFECT_IVS,
        .moves = {MOVE_SHADOW_PUNCH, MOVE_EARTHQUAKE, MOVE_FIRE_PUNCH, MOVE_ICE_PUNCH},
        .heldItem = ITEM_SITRUS_BERRY,
        }
    },
},

[TRAINER_GLACIA] =
{
    ELITE_FOUR_INFO(GLACIA, PINK),
    .trainerName = _("Glacia"),
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
    .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
    .partySize = 5,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 52,
        .species = SPECIES_SEALEO,
        IVS(30),
        .moves = {MOVE_ICE_BALL, MOVE_ROLLOUT, MOVE_DEFENSE_CURL, MOVE_HAIL},
        },
        {
        .lvl = 52,
        .species = SPECIES_CASTFORM,
        IVS(30),
        .moves = {MOVE_BLIZZARD, MOVE_WEATHER_BALL, MOVE_HYDRO_PUMP, MOVE_HAIL},
        },
        {
        .lvl = 53,
        .species = SPECIES_GLALIE,
        IVS(30),
        .moves = {MOVE_FREEZE_DRY, MOVE_ICE_SHARD, MOVE_PROTECT, MOVE_HAIL},
        },
        {
        .lvl = 53,
        .species = SPECIES_FROSLASS,
        IVS(30),
        .moves = {MOVE_BLIZZARD, MOVE_SHADOW_BALL, MOVE_DRAINING_KISS, MOVE_HAIL},
        },
        {
        .lvl = 54,
        .species = SPECIES_WALREIN,
        PERFECT_IVS,
        .moves = {MOVE_BLIZZARD, MOVE_SURF, MOVE_SHEER_COLD, MOVE_HAIL},
        .heldItem = ITEM_SITRUS_BERRY,
        }
    },
},

[TRAINER_DRAKE] =
{
    ELITE_FOUR_INFO(DRAKE, BLUE),
    .trainerName = _("Drake"),
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
    .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
    .partySize = 5,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 53,
        .species = SPECIES_SHELGON,
        IVS(30),
        .moves = {MOVE_DRAGON_CLAW, MOVE_ZEN_HEADBUTT, MOVE_DOUBLE_EDGE, MOVE_PROTECT},
        },
        {
        .lvl = 53,
        .species = SPECIES_KINGDRA,
        IVS(30),
        .moves = {MOVE_DRAGON_PULSE, MOVE_SURF, MOVE_SMOKESCREEN, MOVE_YAWN},
        },
        {
        .lvl = 54,
        .species = SPECIES_ALTARIA,
        IVS(30),
        .moves = {MOVE_DRAGON_PULSE, MOVE_AIR_SLASH, MOVE_MOONBLAST, MOVE_COTTON_GUARD},
        },
        {
        .lvl = 54,
        .species = SPECIES_FLYGON,
        IVS(30),
        .moves = {MOVE_DRAGON_CLAW, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE},
        },
        {
        .lvl = 56,
        .species = SPECIES_SALAMENCE,
        PERFECT_IVS,
        .moves = {MOVE_DRAGON_CLAW, MOVE_DUAL_WINGBEAT, MOVE_ROCK_SLIDE, MOVE_DRAGON_DANCE},
        .heldItem = ITEM_SALAMENCITE,
        }
    },
},

[TRAINER_WALLACE] =
{
    .trainerName = _("Wallace"),
    .trainerClass = TRAINER_CLASS_CHAMPION,
    .trainerPic = TRAINER_PIC_CHAMPION_WALLACE,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE},
    .mugshotEnabled = TRUE,
    .mugshotColor = MUGSHOT_COLOR_YELLOW,
    BOSS_AI_FLAGS,
    .partySize = 6,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 56,
        .species = SPECIES_PELIPPER,
        .ability = ABILITY_DRIZZLE,
        PERFECT_IVS,
        .moves = {MOVE_HYDRO_PUMP, MOVE_HURRICANE, MOVE_ROOST, MOVE_SUPERSONIC},
        .gender = TRAINER_MON_MALE,
        .heldItem = ITEM_DAMP_ROCK,
        },
        {
        .lvl = 56,
        .species = SPECIES_GOREBYSS,
        .ability = ABILITY_SWIFT_SWIM,
        PERFECT_IVS,
        .moves = {MOVE_SURF, MOVE_PSYCHIC, MOVE_DRAINING_KISS, MOVE_SHELL_SMASH},
        .gender = TRAINER_MON_FEMALE,
        },
        {
        .lvl = 56,
        .species = SPECIES_RELICANTH,
        .ability = ABILITY_SWIFT_SWIM,
        .nature = NATURE_IMPISH,
        PERFECT_IVS,
        .moves = {MOVE_AQUA_TAIL, MOVE_ROCK_TOMB, MOVE_YAWN, MOVE_REST},
        .gender = TRAINER_MON_MALE,
        .heldItem = ITEM_CHESTO_BERRY,
        .isShiny = TRUE,
        },
        {
        .lvl = 57,
        .species = SPECIES_LUDICOLO,
        .ability = ABILITY_SWIFT_SWIM,
        PERFECT_IVS,
        .moves = {MOVE_SURF, MOVE_GIGA_DRAIN, MOVE_LEECH_SEED, MOVE_RAIN_DANCE},
        .gender = TRAINER_MON_MALE,
        },
        {
        .lvl = 57,
        .species = SPECIES_WAILORD,
        .ability = ABILITY_OBLIVIOUS,
        PERFECT_IVS,
        .moves = {MOVE_WATER_SPOUT, MOVE_ICE_BEAM, MOVE_AQUA_RING, MOVE_AMNESIA},
        .gender = TRAINER_MON_MALE,
        .heldItem = ITEM_LEFTOVERS,
        },
        {
        .lvl = 59,
        .species = SPECIES_MILOTIC,
        .ability = ABILITY_MARVEL_SCALE,
        PERFECT_IVS,
        .moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_RAIN_DANCE, MOVE_RECOVER},
        .gender = TRAINER_MON_FEMALE,
        .heldItem = ITEM_SITRUS_BERRY,
        }
    },
},

[TRAINER_STEVEN] =
{
    .trainerName = _("Steven"),
    .trainerClass = TRAINER_CLASS_RIVAL,
    .trainerPic = TRAINER_PIC_STEVEN,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE},
    BOSS_AI_FLAGS,
    .partySize = 6,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 77,
        .species = SPECIES_SKARMORY,
        .ability = ABILITY_STURDY,
        .nature = NATURE_IMPISH,
        .ev = EV_SPREAD_ATK_DEF_HP,
        PERFECT_IVS,
        .moves = {MOVE_STEEL_WING, MOVE_DRILL_PECK, MOVE_BODY_PRESS, MOVE_SPIKES},
        .gender = TRAINER_MON_MALE,
        .heldItem = ITEM_GANLON_BERRY,
        .ball = ITEM_LUXURY_BALL,
        },
        {
        .lvl = 77,
        .species = SPECIES_CLAYDOL,
        .nature = NATURE_CALM,
        .ev = TRAINER_PARTY_EVS(0, 0, MAX_PER_STAT_EVS, 0, EV_REMAINDER, MAX_PER_STAT_EVS),
        PERFECT_IVS,
        .moves = {MOVE_REFLECT, MOVE_LIGHT_SCREEN, MOVE_ANCIENT_POWER, MOVE_EARTHQUAKE},
        },
        {
        .lvl = 78,
        .species = SPECIES_JIRACHI,
        .nature = NATURE_MODEST,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, MAX_PER_STAT_EVS, MAX_PER_STAT_EVS, EV_REMAINDER),
        PERFECT_IVS,
        .moves = {MOVE_DOOM_DESIRE, MOVE_FLASH_CANNON, MOVE_PSYCHIC, MOVE_CALM_MIND},
        .heldItem = ITEM_KINGS_ROCK,
        .ball = ITEM_CHERISH_BALL,
        .nickname = COMPOUND_STRING("Devon"),
        },
        {
        .lvl = 78,
        .species = SPECIES_MAWILE,
        .ability = ABILITY_SHEER_FORCE,
        .nature = NATURE_ADAMANT,
        .ev = TRAINER_PARTY_EVS(0, MAX_PER_STAT_EVS, EV_REMAINDER, MAX_PER_STAT_EVS, 0, 0),
        PERFECT_IVS,
        .moves = {MOVE_IRON_HEAD, MOVE_PLAY_ROUGH, MOVE_CRUNCH, MOVE_SWORDS_DANCE},
        .gender = TRAINER_MON_FEMALE,
        .heldItem = ITEM_LIFE_ORB,
        .ball = ITEM_ULTRA_BALL,
        },
        {
        .lvl = 79,
        .species = SPECIES_AGGRON,
        .ability = ABILITY_STURDY,
        .nature = NATURE_IMPISH,
        .ev = EV_SPREAD_ATK_DEF_HP,
        PERFECT_IVS,
        .moves = {MOVE_IRON_HEAD, MOVE_ROCK_SLIDE, MOVE_BODY_PRESS, MOVE_IRON_DEFENSE},
        .gender = TRAINER_MON_MALE,
        .heldItem = ITEM_SHUCA_BERRY,
        .ball = ITEM_HEAVY_BALL,
        },
        {
        .lvl = 80,
        .species = SPECIES_METAGROSS,
        .ability = ABILITY_CLEAR_BODY,
        .nature = NATURE_ADAMANT,
        .ev = EV_SPREAD_ATK_DEF_HP,
        PERFECT_IVS,
        .moves = {MOVE_METEOR_MASH, MOVE_PSYCHIC_FANGS, MOVE_EARTHQUAKE, MOVE_BULLET_PUNCH},
        .heldItem = ITEM_METAGROSSITE,
        .ball = ITEM_PREMIER_BALL,
        }
    },
},

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

#define REMATCH_4_LEVEL_1 55
#define REMATCH_4_LEVEL_2 REMATCH_4_LEVEL_1 - 1
#define REMATCH_4_LEVEL_3 REMATCH_4_LEVEL_1 - 2
#define REMATCH_4_LEVEL_4 REMATCH_4_LEVEL_1 - 3
#define REMATCH_4_LEVEL_5 REMATCH_4_LEVEL_1 - 4
#define REMATCH_4_LEVEL_6 REMATCH_4_LEVEL_1 - 5

#define REMATCH_5_LEVEL_1 60
#define REMATCH_5_MINI_BOSS REMATCH_5_LEVEL_1 + 1
#define REMATCH_5_LEVEL_2 REMATCH_5_LEVEL_1 - 1
#define REMATCH_5_LEVEL_3 REMATCH_5_LEVEL_1 - 2
#define REMATCH_5_LEVEL_4 REMATCH_5_LEVEL_1 - 3
#define REMATCH_5_LEVEL_5 REMATCH_5_LEVEL_1 - 4
#define REMATCH_5_LEVEL_6 REMATCH_5_LEVEL_1 - 5

#define GABBY_AND_TY_INFO \
    .trainerName = _("Gabby & Ty"),                               \
    .trainerClass = TRAINER_CLASS_INTERVIEWER,                    \
    .trainerPic = TRAINER_PIC_INTERVIEWER,                        \
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTERVIEWER, \
    .doubleBattle = TRUE,                                         \
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY,  \
    .partySize = 2

#define GABBY_WHISMUR(Level)                                                                                   \
    .lvl = Level,                                                                                              \
    .species = Level < REMATCH_2_LEVEL_6 ? SPECIES_WHISMUR : (Level < ENDGAME_REMATCH_2_LEVEL ? SPECIES_LOUDRED : SPECIES_EXPLOUD), \
    .ability = ABILITY_SCRAPPY,                                                                                \
    .gender = TRAINER_MON_FEMALE

#define TY_MAGNEMITE(Level)                                                                                         \
    .lvl = Level,                                                                                                   \
    .species = Level < REMATCH_2_LEVEL_6 ? SPECIES_MAGNEMITE : (Level < ENDGAME_REMATCH_2_LEVEL ? SPECIES_MAGNETON : SPECIES_MAGNEZONE), \
    .ability = ABILITY_ANALYTIC

[TRAINER_GABBY_AND_TY_1] =
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

[TRAINER_GABBY_AND_TY_2] =
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

[TRAINER_GABBY_AND_TY_3] =
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

[TRAINER_GABBY_AND_TY_4] =
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

[TRAINER_GABBY_AND_TY_5] =
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

[TRAINER_GABBY_AND_TY_6] =
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

//Regular trainers
#define TRAINER_CLASS_PIC(class)           \
    .trainerClass = TRAINER_CLASS_##class, \
    .trainerPic = TRAINER_PIC_##class

#define YOUNGSTER_INFO            \
    TRAINER_CLASS_PIC(YOUNGSTER), \
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE

#define BUG_CATCHER_INFO            \
    TRAINER_CLASS_PIC(BUG_CATCHER), \
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE

#define LASS_INFO            \
    TRAINER_CLASS_PIC(LASS), \
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE

#define FISHERMAN_INFO            \
    TRAINER_CLASS_PIC(FISHERMAN), \
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER

#define RICH_MON(Level) \
    .lvl = Level,       \
    .heldItem = Level < REMATCH_5_LEVEL_6 ? ITEM_NUGGET : ITEM_BIG_NUGGET

#define RICH_BOY_INFO                                      \
    TRAINER_CLASS_PIC(RICH_BOY),                           \
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_RICH, \
    .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE}

#define RICH_BOY_MON(Level) \
    RICH_MON(Level),        \
    .isShiny = TRUE

#define LADY_INFO                                                               \
    TRAINER_CLASS_PIC(LADY),                                                    \
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE, \
    .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE}

#define TWINS_INFO                                                             \
    TRAINER_CLASS_PIC(TWINS),                                                  \
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_TWINS, \
    .doubleBattle = TRUE

#define HIKER_INFO            \
    TRAINER_CLASS_PIC(HIKER), \
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER

#define SCHOOLKID_M_INFO                     \
    .trainerClass = TRAINER_CLASS_SCHOOLKID, \
    .trainerPic = TRAINER_PIC_SCHOOLKID_M,   \
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE

#define SCHOOLKID_F_INFO                     \
    .trainerClass = TRAINER_CLASS_SCHOOLKID, \
    .trainerPic = TRAINER_PIC_SCHOOLKID_F,   \
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL

#define SAILOR_INFO            \
    TRAINER_CLASS_PIC(SAILOR), \
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE

#define TUBER_F_INFO                     \
    .trainerClass = TRAINER_CLASS_TUBER, \
    .trainerPic = TRAINER_PIC_TUBER_F,   \
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL

#define TUBER_M_INFO                     \
    .trainerClass = TRAINER_CLASS_TUBER, \
    .trainerPic = TRAINER_PIC_TUBER_M,   \
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL

#define BEAUTY_INFO            \
    TRAINER_CLASS_PIC(BEAUTY), \
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE

#define POKE_FAN_F_INFO                     \
    .trainerClass = TRAINER_CLASS_POKE_FAN, \
    .trainerPic = TRAINER_PIC_POKE_FAN_F,   \
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_TWINS

#define POKE_FAN_M_INFO                     \
    .trainerClass = TRAINER_CLASS_POKE_FAN, \
    .trainerPic = TRAINER_PIC_POKE_FAN_M,   \
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS

#define POKE_FAN_MON(Level) \
    .lvl = Level,       \
    .heldItem = Level < REMATCH_5_LEVEL_6 ? ITEM_ORAN_BERRY : ITEM_SITRUS_BERRY

#define AROMA_LADY_INFO            \
    TRAINER_CLASS_PIC(AROMA_LADY), \
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE

#define GUITARIST_INFO            \
    TRAINER_CLASS_PIC(GUITARIST), \
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE

#define BLACK_BELT_INFO            \
    TRAINER_CLASS_PIC(BLACK_BELT), \
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE

#define COLLECTOR_INFO            \
    TRAINER_CLASS_PIC(COLLECTOR), \
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS

#define PSYCHIC_M_INFO                     \
    .trainerClass = TRAINER_CLASS_PSYCHIC, \
    .trainerPic = TRAINER_PIC_PSYCHIC_M,   \
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE

#define PSYCHIC_F_INFO                     \
    .trainerClass = TRAINER_CLASS_PSYCHIC, \
    .trainerPic = TRAINER_PIC_PSYCHIC_F,   \
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE

#define TRIATHLETE_F_CYCLING_INFO                   \
    .trainerClass = TRAINER_CLASS_TRIATHLETE,       \
    .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_F, \
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE

#define TRIATHLETE_M_CYCLING_INFO                   \
    .trainerClass = TRAINER_CLASS_TRIATHLETE,       \
    .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_M, \
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE

#define TRIATHLETE_F_RUNNING_INFO                   \
    .trainerClass = TRAINER_CLASS_TRIATHLETE,       \
    .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_F, \
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE

#define TRIATHLETE_M_RUNNING_INFO                   \
    .trainerClass = TRAINER_CLASS_TRIATHLETE,       \
    .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_M, \
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE

#define TRIATHLETE_M_SWIMMING_INFO                   \
    .trainerClass = TRAINER_CLASS_TRIATHLETE,        \
    .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M, \
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER

#define TRIATHLETE_F_SWIMMING_INFO                   \
    .trainerClass = TRAINER_CLASS_TRIATHLETE,        \
    .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F, \
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER

#define TRIATHLETE_MON(Level, IV)                                            \
    .lvl = Level,                                                            \
    .ev = TRAINER_PARTY_EVS(MAX_PER_STAT_EVS, 0, 0, MAX_PER_STAT_EVS, 0, 0), \
    .iv = TRAINER_PARTY_IVS(MAX_PER_STAT_IVS, IV, IV, MAX_PER_STAT_IVS, IV, IV)

#define POKEMON_BREEDER_M_INFO                             \
    .trainerClass = TRAINER_CLASS_PKMN_BREEDER,            \
    .trainerPic = TRAINER_PIC_POKEMON_BREEDER_M,           \
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE, \
    .partySize = 6

#define POKEMON_BREEDER_F_INFO                                                  \
    .trainerClass = TRAINER_CLASS_PKMN_BREEDER,                                 \
    .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,                                \
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE, \
    .partySize = 6

#define POKEMON_BREEDER_MON(Level) \
    .lvl = Level,                  \
    PERFECT_IVS

#define TEAMMATES_INFO                                                         \
    TRAINER_CLASS_PIC(TEAMMATES),                                              \
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_TWINS, \
    .doubleBattle = TRUE

#define BUG_MANIAC_INFO            \
    TRAINER_CLASS_PIC(BUG_MANIAC), \
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS

#define BATTLE_GIRL_INFO            \
    TRAINER_CLASS_PIC(BATTLE_GIRL), \
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE

#define POKE_MANIAC_INFO            \
    TRAINER_CLASS_PIC(POKE_MANIAC), \
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS

#define CAMPER_INFO            \
    TRAINER_CLASS_PIC(CAMPER), \
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE

#define PICNICKER_INFO            \
    TRAINER_CLASS_PIC(PICNICKER), \
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL

#define KINDLER_INFO            \
    TRAINER_CLASS_PIC(KINDLER), \
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER

#define ACE_TRAINER_M_INFO                     \
    .trainerClass = TRAINER_CLASS_ACE_TRAINER, \
    .trainerPic = TRAINER_PIC_ACE_TRAINER_M,   \
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL

#define ACE_TRAINER_F_INFO                     \
    .trainerClass = TRAINER_CLASS_ACE_TRAINER, \
    .trainerPic = TRAINER_PIC_ACE_TRAINER_F,   \
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL

#define NINJA_BOY_INFO            \
    TRAINER_CLASS_PIC(NINJA_BOY), \
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS

#define PARASOL_LADY_INFO            \
    TRAINER_CLASS_PIC(PARASOL_LADY), \
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE

#define BIRD_KEEPER_INFO            \
    TRAINER_CLASS_PIC(BIRD_KEEPER), \
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL

#define EXPERT_F_INFO                     \
    .trainerClass = TRAINER_CLASS_EXPERT, \
    .trainerPic = TRAINER_PIC_EXPERT_F,   \
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE

#define EXPERT_M_INFO                     \
    .trainerClass = TRAINER_CLASS_EXPERT, \
    .trainerPic = TRAINER_PIC_EXPERT_M,   \
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE

#define RUIN_MANIAC_INFO            \
    TRAINER_CLASS_PIC(RUIN_MANIAC), \
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER

#define SWIMMER_F_INFO                     \
    .trainerClass = TRAINER_CLASS_SWIMMER, \
    .trainerPic = TRAINER_PIC_SWIMMER_F,   \
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER

#define SWIMMER_M_INFO                     \
    .trainerClass = TRAINER_CLASS_SWIMMER, \
    .trainerPic = TRAINER_PIC_SWIMMER_M,   \
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER

#define SIS_AND_BRO_INFO                                      \
    TRAINER_CLASS_PIC(SIS_AND_BRO),                           \
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER, \
    .doubleBattle = TRUE

#define YOUNG_COUPLE_INFO                                  \
    TRAINER_CLASS_PIC(YOUNG_COUPLE),                       \
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL, \
    .doubleBattle = TRUE

#define POKEMON_RANGER_F_INFO                                                 \
    .trainerClass = TRAINER_CLASS_PKMN_RANGER,                                \
    .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,                               \
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL, \
    .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE}

#define POKEMON_RANGER_M_INFO                              \
    .trainerClass = TRAINER_CLASS_PKMN_RANGER,             \
    .trainerPic = TRAINER_PIC_POKEMON_RANGER_M,            \
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL, \
    .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE}

#define HEX_MANIAC_INFO            \
    TRAINER_CLASS_PIC(HEX_MANIAC), \
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS

#define GENTLEMAN_INFO            \
    TRAINER_CLASS_PIC(GENTLEMAN), \
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_RICH

#define OLD_COUPLE_INFO                                       \
    TRAINER_CLASS_PIC(OLD_COUPLE),                            \
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE, \
    .doubleBattle = TRUE

#define DRAGON_TAMER_INFO            \
    TRAINER_CLASS_PIC(DRAGON_TAMER), \
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE

#define MAGMA_GRUNT_M_INFO                                  \
    .trainerName = _("Grunt"),                              \
    .trainerClass = TRAINER_CLASS_TEAM_MAGMA,               \
    .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,                \
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA, \
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE

#define MAGMA_GRUNT_F_INFO                                                     \
    .trainerName = _("Grunt"),                                                 \
    .trainerClass = TRAINER_CLASS_TEAM_MAGMA,                                  \
    .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,                                   \
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_MAGMA, \
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE

#define AQUA_GRUNT_M_INFO                                  \
    .trainerName = _("Grunt"),                             \
    .trainerClass = TRAINER_CLASS_TEAM_AQUA,               \
    .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,                \
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA, \
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE

#define AQUA_GRUNT_F_INFO                                                     \
    .trainerName = _("Grunt"),                                                \
    .trainerClass = TRAINER_CLASS_TEAM_AQUA,                                  \
    .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,                                   \
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_AQUA, \
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE

#define TABITHA_INFO                                        \
    .trainerName = _("Tabitha"),                            \
    .trainerClass = TRAINER_CLASS_MAGMA_ADMIN,              \
    .trainerPic = TRAINER_PIC_MAGMA_ADMIN_M,                \
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA, \
    BOSS_AI_FLAGS

#define TABITHA_HOUNDOUR(Level)                                                 \
    .lvl = Level,                                                               \
    .species = Level < REMATCH_3_LEVEL_6 ? SPECIES_HOUNDOUR : SPECIES_HOUNDOOM, \
    .ability = ABILITY_FLASH_FIRE,                                              \
    .gender = TRAINER_MON_MALE

#define TABITHA_SLUGMA(Level)                                                 \
    .lvl = Level,                                                             \
    .species = Level < REMATCH_3_LEVEL_6 ? SPECIES_SLUGMA : SPECIES_MAGCARGO, \
    .ability = ABILITY_MAGMA_ARMOR,                                           \
    .gender = TRAINER_MON_MALE

#define TABITHA_PHANPY(Level)                                                \
    .lvl = Level,                                                            \
    .species = Level < REMATCH_3_LEVEL_6 ? SPECIES_PHANPY : SPECIES_DONPHAN, \
    .gender = TRAINER_MON_MALE

#define COURTNEY_INFO                                                          \
    .trainerName = _("Courtney"),                                              \
    .trainerClass = TRAINER_CLASS_MAGMA_ADMIN,                                 \
    .trainerPic = TRAINER_PIC_MAGMA_ADMIN_F,                                   \
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_MAGMA, \
    BOSS_AI_FLAGS

#define SHELLY_INFO                                                           \
    .trainerName = _("Shelly"),                                               \
    .trainerClass = TRAINER_CLASS_AQUA_ADMIN,                                 \
    .trainerPic = TRAINER_PIC_AQUA_ADMIN_F,                                   \
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_AQUA, \
    BOSS_AI_FLAGS

#define SHELLY_GOREBYSS(Level)   \
    .lvl = Level,                \
    .species = SPECIES_GOREBYSS, \
    .gender = TRAINER_MON_FEMALE

#define SHELLY_GOLDEEN(Level)   \
    .lvl = Level,                \
    .species = Level < REMATCH_3_LEVEL_6 ? SPECIES_GOLDEEN : SPECIES_SEAKING, \
    .ability = ABILITY_SWIFT_SWIM,      \
    .gender = TRAINER_MON_FEMALE

#define SHELLY_STARYU(Level)   \
    .lvl = Level,                \
    .species = Level < REMATCH_3_LEVEL_6 ? SPECIES_STARYU : SPECIES_STARMIE, \
    .ability = ABILITY_ILLUMINATE

#define MATT_INFO                                          \
    .trainerName = _("Matt"),                              \
    .trainerClass = TRAINER_CLASS_AQUA_ADMIN,              \
    .trainerPic = TRAINER_PIC_AQUA_ADMIN_M,                \
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA, \
    BOSS_AI_FLAGS

#define MAXIE_INFO                                          \
    .trainerName = _("Maxie"),                              \
    .trainerClass = TRAINER_CLASS_MAGMA_LEADER,             \
    .trainerPic = TRAINER_PIC_MAGMA_LEADER_MAXIE,           \
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA, \
    BOSS_AI_FLAGS

#define HUMPHREY(Level)                                       \
    .lvl = Level,                                             \
    .species = Level < 33 ? SPECIES_NUMEL : SPECIES_CAMERUPT, \
    .ability = 2,                                             \
    .nature = NATURE_MODEST,                                  \
    PERFECT_IVS,                                              \
    .gender = TRAINER_MON_MALE,                               \
    .nickname = COMPOUND_STRING("Humphrey")

#define MAXIE_BALTOY(Level)                                   \
    {                                                         \
    .lvl = Level,                                             \
    .species = Level < 36 ? SPECIES_BALTOY : SPECIES_CLAYDOL, \
    IVS(18),                                                  \
    }

#define MAXIE_SANDSHREW(Level)                                                    \
    {                                                                             \
    .lvl = Level,                                                                 \
    .species = Level < REMATCH_3_LEVEL_6 ? SPECIES_SANDSHREW : SPECIES_SANDSLASH, \
    IVS(18),                                                                      \
    .gender = TRAINER_MON_MALE,                                                   \
    }

#define MAXIE_PHANPY(Level)                                                  \
    {                                                                        \
    .lvl = Level,                                                            \
    .species = Level < REMATCH_3_LEVEL_6 ? SPECIES_PHANPY : SPECIES_DONPHAN, \
    .ability = ABILITY_SAND_VEIL,                                            \
    IVS(18),                                                                 \
    .gender = TRAINER_MON_MALE,                                              \
    }

#define ARCHIE_INFO                                        \
    .trainerName = _("Archie"),                            \
    .trainerClass = TRAINER_CLASS_AQUA_LEADER,             \
    .trainerPic = TRAINER_PIC_AQUA_LEADER_ARCHIE,          \
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA, \
    BOSS_AI_FLAGS



//Route 102
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

#define CALVIN_TAILLOW(Level)                                                 \
    .lvl = Level,                                                             \
    .species = Level < REMATCH_3_LEVEL_6 ? SPECIES_TAILLOW : SPECIES_SWELLOW, \
    .gender = TRAINER_MON_MALE                                                \

#define CALVIN_MIGHTYENA(Level)    \
    .lvl = Level,                  \
    .species = SPECIES_MIGHTYENA,  \
    .ability = ABILITY_INTIMIDATE, \
    .gender = TRAINER_MON_MALE     \

[TRAINER_CALVIN_1] =
{
    CALVIN_INFO,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        LINUS(5),
        }
    },
},

[TRAINER_CALVIN_2] =
{
    CALVIN_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        CALVIN_TAILLOW(REMATCH_2_LEVEL_2),
        IVS(2),
        },
        {
        LINUS(REMATCH_2_LEVEL_1),
        IVS(2),
        }
    },
},

[TRAINER_CALVIN_3] =
{
    CALVIN_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        CALVIN_TAILLOW(REMATCH_3_LEVEL_2),
        IVS(3),
        },
        {
        LINUS(REMATCH_3_LEVEL_1),
        IVS(3),
        }
    },
},

[TRAINER_CALVIN_4] =
{
    CALVIN_INFO,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        CALVIN_MIGHTYENA(REMATCH_4_LEVEL_2),
        IVS(4),
        },
        {
        CALVIN_TAILLOW(REMATCH_4_LEVEL_2),
        IVS(4),
        },
        {
        LINUS(REMATCH_4_LEVEL_1),
        IVS(4),
        }
    },
},

[TRAINER_CALVIN_5] =
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
        {
        CALVIN_MIGHTYENA(REMATCH_5_LEVEL_2),
        IVS(5),
        },
        {
        CALVIN_TAILLOW(REMATCH_5_LEVEL_2),
        IVS(5),
        },
        {
        LINUS(REMATCH_5_MINI_BOSS),
        .ev = EV_SPREAD_ATK_SPE_HP,
        PERFECT_IVS,
        .moves = {MOVE_BODY_SLAM, MOVE_PLAY_ROUGH, MOVE_PIN_MISSILE, MOVE_HONE_CLAWS},
        .heldItem = ITEM_FIGY_BERRY,
        }
    },
},

[TRAINER_RICK] =
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
        }
    },
},

[TRAINER_ALLEN] =
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
        }
    },
},

[TRAINER_TIANA] =
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
        }
    },
},

//Route 104 (south)
#define WINSTON_INFO                                               \
    .trainerName = _("Winston"),                                   \
    RICH_BOY_INFO,                                                 \
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

[TRAINER_WINSTON_1] =
{
    WINSTON_INFO,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        MR_ZIG(8),
        }
    },
},

[TRAINER_WINSTON_2] =
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

[TRAINER_WINSTON_3] =
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
        }
    },
},

[TRAINER_WINSTON_4] =
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
        }
    },
},

[TRAINER_WINSTON_5] =
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
        }
    },
},

[TRAINER_BILLY] =
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
        }
    },
},

[TRAINER_DARIAN] =
{
    .trainerName = _("Darian"),
    FISHERMAN_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 9,
        .species = SPECIES_MAGIKARP,
        }
    },
},

//Petalburg Woods
[TRAINER_LYLE] =
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
        }
    },
},

[TRAINER_GRUNT_PETALBURG_WOODS] =
{
    AQUA_GRUNT_M_INFO,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 9,
        .species = SPECIES_CARVANHA,
        .moves = {MOVE_AQUA_JET, MOVE_RAGE, MOVE_LEER, MOVE_NONE},
        .gender = TRAINER_MON_MALE,
        }
    },
},

#define JAMES_INFO             \
    .trainerName = _("James"), \
    BUG_CATCHER_INFO,          \
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE

#define JAMES_NINCADA(Level)                                   \
    .lvl = Level,                                              \
    .species = Level < 20 ? SPECIES_NINCADA : SPECIES_NINJASK, \
    .gender = TRAINER_MON_MALE

[TRAINER_JAMES_1] =
{
    JAMES_INFO,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        JAMES_NINCADA(8),
        }
    },
},

[TRAINER_JAMES_2] =
{
    JAMES_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = REMATCH_2_LEVEL_2,
        .species = SPECIES_SHEDINJA,
        IVS(2),
        },
        {
        JAMES_NINCADA(REMATCH_2_LEVEL_2),
        IVS(2),
        }
    },
},

[TRAINER_JAMES_3] =
{
    JAMES_INFO,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = REMATCH_3_LEVEL_3,
        .species = SPECIES_DUSTOX,
        IVS(3),
        .gender = TRAINER_MON_MALE,
        },
        {
        .lvl = REMATCH_3_LEVEL_3,
        .species = SPECIES_SHEDINJA,
        IVS(3),
        },
        {
        JAMES_NINCADA(REMATCH_3_LEVEL_3),
        IVS(3),
        }
    },
},

[TRAINER_JAMES_4] =
{
    JAMES_INFO,
    .partySize = 4,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = REMATCH_4_LEVEL_4,
        .species = SPECIES_SURSKIT,
        IVS(4),
        .gender = TRAINER_MON_FEMALE,
        },
        {
        .lvl = REMATCH_4_LEVEL_4,
        .species = SPECIES_DUSTOX,
        IVS(4),
        .gender = TRAINER_MON_MALE,
        },
        {
        .lvl = REMATCH_4_LEVEL_4,
        .species = SPECIES_SHEDINJA,
        IVS(4),
        },
        {
        JAMES_NINCADA(REMATCH_4_LEVEL_4),
        IVS(4),
        }
    },
},

[TRAINER_JAMES_5] =
{
    JAMES_INFO,
    .partySize = 5,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = REMATCH_5_LEVEL_5,
        .species = SPECIES_MASQUERAIN,
        IVS(5),
        .gender = TRAINER_MON_FEMALE,
        },
        {
        .lvl = REMATCH_5_LEVEL_5,
        .species = SPECIES_BEAUTIFLY,
        IVS(5),
        .gender = TRAINER_MON_FEMALE,
        },
        {
        .lvl = REMATCH_5_LEVEL_5,
        .species = SPECIES_DUSTOX,
        IVS(5),
        .gender = TRAINER_MON_MALE,
        },
        {
        .lvl = REMATCH_5_LEVEL_4,
        .species = SPECIES_SHEDINJA,
        IVS(5),
        },
        {
        JAMES_NINCADA(REMATCH_5_LEVEL_4),
        IVS(5),
        }
    },
},

//Route 104 (north)
#define CINDY_INFO                                                 \
    .trainerName = _("Cindy"),                                     \
    LADY_INFO,                                                     \
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE

#define CINDY_ZIGZAGOON(Level)                                   \
    RICH_MON(Level),                                             \
    .species = Level < 20 ? SPECIES_ZIGZAGOON : SPECIES_LINOONE, \
    .ability = ABILITY_QUICK_FEET,                               \
    .gender = TRAINER_MON_FEMALE 

[TRAINER_CINDY_1] =
{
    CINDY_INFO,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        CINDY_ZIGZAGOON(8),
        }
    },
},

[TRAINER_CINDY_2] =
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

[TRAINER_CINDY_3] =
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

[TRAINER_CINDY_4] =
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

[TRAINER_CINDY_5] =
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

[TRAINER_HALEY_1] =
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

[TRAINER_HALEY_2] =
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

[TRAINER_HALEY_3] =
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

[TRAINER_HALEY_4] =
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

[TRAINER_HALEY_5] =
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

[TRAINER_GINA_AND_MIA] =
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

[TRAINER_IVAN] =
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
        .species = SPECIES_MUDKIP,
        }
    },
},

//Route 116
[TRAINER_JOSE] =
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

[TRAINER_JOEY] =
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

[TRAINER_JANICE] =
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

[TRAINER_CLARK] =
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

[TRAINER_DEVAN] =
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

[TRAINER_JOHNSON] =
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

[TRAINER_DAWSON] =
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
        .species = SPECIES_POOCHYENA,
        }
    },
},

[TRAINER_SARAH] =
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
        .species = SPECIES_ZIGZAGOON,
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

[TRAINER_JERRY_1] =
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

[TRAINER_JERRY_2] =
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

[TRAINER_JERRY_3] =
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

[TRAINER_JERRY_4] =
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

[TRAINER_JERRY_5] =
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

[TRAINER_KAREN_1] =
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

[TRAINER_KAREN_2] =
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

[TRAINER_KAREN_3] =
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

[TRAINER_KAREN_4] =
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

[TRAINER_KAREN_5] =
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

//Rustboro Gym
[TRAINER_JOSH] =
{
    .trainerName = _("Josh"),
    YOUNGSTER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 11,
        .species = SPECIES_GEODUDE,
        IVS(12),
        .moves = {MOVE_ROCK_TOMB, MOVE_TACKLE, MOVE_MUD_SPORT, MOVE_NONE}
        }
    },
},

[TRAINER_TOMMY] =
{
    .trainerName = _("Tommy"),
    YOUNGSTER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 9,
        .species = SPECIES_GEODUDE,
        IVS(13),
        },
        {
        .lvl = 9,
        .species = SPECIES_ARON,
        IVS(14),
        }
    },
},

[TRAINER_MARC] =
{
    .trainerName = _("Marc"),
    HIKER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 9,
        .species = SPECIES_GEODUDE,
        IVS(14),
        },
        {
        .lvl = 9,
        .species = SPECIES_RHYHORN,
        IVS(15),
        }
    },
},

//Rusturf Tunnel
[TRAINER_GRUNT_RUSTURF_TUNNEL] =
{
    AQUA_GRUNT_M_INFO,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 13,
        .species = SPECIES_CARVANHA,
        .moves = {MOVE_AQUA_JET, MOVE_RAGE, MOVE_LEER, MOVE_SCARY_FACE},
        .gender = TRAINER_MON_MALE,
        }
    },
},

//Route 106 (land)
[TRAINER_NED] =
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

#define ELLIOT_CARVANHA(Level)                                      \
    .lvl = Level,                                                   \
    .species = Level < 30 ? SPECIES_CARVANHA : SPECIES_SHARPEDO,    \
    .gender = TRAINER_MON_MALE

#define ELLIOT_BARBOACH(Level)                                      \
    .lvl = Level,                                                   \
    .species = Level < 30 ? SPECIES_BARBOACH : SPECIES_WHISCASH,    \
    .ability = ABILITY_OBLIVIOUS,                                   \
    .gender = TRAINER_MON_MALE

[TRAINER_ELLIOT_1] =
{
    ELLIOT_INFO,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 13,
        .species = SPECIES_MAGIKARP,
        .gender = TRAINER_MON_MALE,
        },
        {
        ELLIOT_TENTACOOL(13),
        },
        {
        ELLIOT_WAILMER(13),
        }
    },
},

[TRAINER_ELLIOT_2] =
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
        .lvl = REMATCH_2_LEVEL_5,
        .species = SPECIES_GYARADOS,
        IVS(2),
        .gender = TRAINER_MON_MALE,
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

[TRAINER_ELLIOT_3] =
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
        .lvl = REMATCH_3_LEVEL_5,
        .species = SPECIES_GYARADOS,
        IVS(3),
        .gender = TRAINER_MON_MALE,
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

[TRAINER_ELLIOT_4] =
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
        .lvl = REMATCH_4_LEVEL_5,
        .species = SPECIES_GYARADOS,
        IVS(4),
        .gender = TRAINER_MON_MALE,
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

[TRAINER_ELLIOT_5] =
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
        .lvl = REMATCH_5_LEVEL_5,
        .species = SPECIES_GYARADOS,
        IVS(5),
        .gender = TRAINER_MON_MALE,
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

//Dewford Gym
[TRAINER_LAURA] =
{
    .trainerName = _("Laura"),
    BATTLE_GIRL_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 16,
        .species = SPECIES_COMBUSKEN,
        IVS(18),
        }
    },
},

[TRAINER_LILITH] =
{
    .trainerName = _("Lilith"),
    BATTLE_GIRL_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 15,
        .species = SPECIES_MEDITITE,
        IVS(18),
        }
    },
},

[TRAINER_BRENDEN] =
{
    .trainerName = _("Brenden"),
    SAILOR_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 13,
        .species = SPECIES_HERACROSS,
        IVS(12),
        }
    },
},

[TRAINER_TAKAO] =
{
    .trainerName = _("Takao"),
    BLACK_BELT_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 15,
        .species = SPECIES_MACHOP,
        IVS(15),
        }
    },
},

[TRAINER_CRISTIAN] =
{
    .trainerName = _("Cristian"),
    BLACK_BELT_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 15,
        .species = SPECIES_MAKUHITA,
        IVS(24),
        }
    },
},

[TRAINER_JOCELYN] =
{
    .trainerName = _("Jocelyn"),
    BATTLE_GIRL_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 15,
        .species = SPECIES_MEDITITE,
        IVS(15),
        }
    },
},

//Route 109 (land)
[TRAINER_HUEY] =
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

[TRAINER_EDMOND] =
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

[TRAINER_HAILEY] =
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

[TRAINER_CHANDLER] =
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

#define LOLA_MARILL(Level)                       \
    .lvl = Level,                                \
    .species = Level < REMATCH_2_LEVEL_6 ? SPECIES_MARILL : SPECIES_AZUMARILL, \
    .ability = ABILITY_THICK_FAT, \
    .gender = TRAINER_MON_FEMALE

#define LOLA_WAILMER(Level)        \
    .ability = ABILITY_WATER_VEIL, \
    .gender = TRAINER_MON_FEMALE

[TRAINER_LOLA_1] =
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

[TRAINER_LOLA_2] =
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

[TRAINER_LOLA_3] =
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

[TRAINER_LOLA_4] =
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

[TRAINER_LOLA_5] =
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

[TRAINER_RICKY_1] =
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

[TRAINER_RICKY_2] =
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

[TRAINER_RICKY_3] =
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

[TRAINER_RICKY_4] =
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

[TRAINER_RICKY_5] =
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

//Seashore House
[TRAINER_SIMON] =
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

[TRAINER_JOHANNA] =
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

[TRAINER_DWAYNE] =
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

//Oceanic Museum
[TRAINER_GRUNT_MUSEUM_1] =
{
    AQUA_GRUNT_M_INFO,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 18,
        .species = SPECIES_CARVANHA,
        }
    },
},

[TRAINER_GRUNT_MUSEUM_2] =
{
    AQUA_GRUNT_M_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 17,
        .species = SPECIES_TENTACOOL,
        },
        {
        .lvl = 17,
        .species = SPECIES_CORPHISH,
        }
    },
},

//Route 110
#define ISABEL_INFO                    \
    .trainerName = _("Isabel"),        \
    POKE_FAN_F_INFO,                   \
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE, \
    .partySize = 2

#define ISABEL_MON(Level, Species)       \
    POKE_FAN_MON(Level),          \
    .species = SPECIES_##Species, \
    .gender = TRAINER_MON_FEMALE

[TRAINER_ISABEL_1] =
{
    ISABEL_INFO,
    .party = (const struct TrainerMon[]) {
        {
        ISABEL_MON(17, PLUSLE),
        },
        {
        ISABEL_MON(17, MINUN),
        }
    },
},

[TRAINER_ISABEL_2] =
{
    ISABEL_INFO,
    .party = (const struct TrainerMon[]) {
        {
        ISABEL_MON(REMATCH_2_LEVEL_2, PLUSLE),
        IVS(2),
        },
        {
        ISABEL_MON(REMATCH_2_LEVEL_2, MINUN),
        IVS(2),
        }
    },
},

[TRAINER_ISABEL_3] =
{
    ISABEL_INFO,
    .party = (const struct TrainerMon[]) {
        {
        ISABEL_MON(REMATCH_3_LEVEL_2, PLUSLE),
        IVS(3),
        },
        {
        ISABEL_MON(REMATCH_3_LEVEL_2, MINUN),
        IVS(3),
        }
    },
},

[TRAINER_ISABEL_4] =
{
    ISABEL_INFO,
    .party = (const struct TrainerMon[]) {
        {
        ISABEL_MON(REMATCH_4_LEVEL_2, PLUSLE),
        IVS(4),
        },
        {
        ISABEL_MON(REMATCH_4_LEVEL_2, MINUN),
        IVS(4),
        }
    },
},

[TRAINER_ISABEL_5] =
{
    ISABEL_INFO,
    .party = (const struct TrainerMon[]) {
        {
        ISABEL_MON(REMATCH_5_LEVEL_2, PLUSLE),
        IVS(5),
        },
        {
        ISABEL_MON(REMATCH_5_LEVEL_2, MINUN),
        IVS(5),
        }
    },
},

[TRAINER_KALEB] =
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

//Trick House 1
[TRAINER_SALLY] =
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

[TRAINER_ROBIN] =
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

[TRAINER_EDDIE] =
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

//Route 103
[TRAINER_DAISY] =
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

[TRAINER_MARCOS] =
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

[TRAINER_RHETT] =
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

[TRAINER_AMY_AND_LIV_1] =
{
    AMY_AND_LIV_INFO,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 17,
        .species = SPECIES_PLUSLE,
        .gender = TRAINER_MON_FEMALE,
        },
        {
        .lvl = 17,
        .species = SPECIES_MINUN,
        .gender = TRAINER_MON_FEMALE,
        }
    },
},

[TRAINER_AMY_AND_LIV_2] =
{
    AMY_AND_LIV_INFO,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = REMATCH_2_LEVEL_2,
        .species = SPECIES_PLUSLE,
        IVS(2),
        .gender = TRAINER_MON_FEMALE,
        },
        {
        .lvl = REMATCH_2_LEVEL_2,
        .species = SPECIES_MINUN,
        IVS(2),
        .gender = TRAINER_MON_FEMALE,
        }
    },
},

[TRAINER_AMY_AND_LIV_3] =
{
    AMY_AND_LIV_INFO,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = REMATCH_3_LEVEL_2,
        .species = SPECIES_PLUSLE,
        IVS(3),
        .gender = TRAINER_MON_FEMALE,
        },
        {
        .lvl = REMATCH_3_LEVEL_2,
        .species = SPECIES_MINUN,
        IVS(3),
        .gender = TRAINER_MON_FEMALE,
        }
    },
},

[TRAINER_AMY_AND_LIV_4] =
{
    AMY_AND_LIV_INFO,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = REMATCH_4_LEVEL_2,
        .species = SPECIES_PLUSLE,
        IVS(4),
        .moves = {MOVE_SHOCK_WAVE, MOVE_CHARGE, MOVE_FAKE_TEARS, MOVE_HELPING_HAND},
        .gender = TRAINER_MON_FEMALE,
        },
        {
        .lvl = REMATCH_4_LEVEL_2,
        .species = SPECIES_MINUN,
        IVS(4),
        .moves = {MOVE_SHOCK_WAVE, MOVE_CHARGE, MOVE_CHARM, MOVE_HELPING_HAND},
        .gender = TRAINER_MON_FEMALE,
        }
    },
},

[TRAINER_AMY_AND_LIV_5] =
{
    AMY_AND_LIV_INFO,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = REMATCH_5_LEVEL_2,
        .species = SPECIES_PLUSLE,
        IVS(5),
        .moves = {MOVE_THUNDERBOLT, MOVE_CHARGE, MOVE_FAKE_TEARS, MOVE_HELPING_HAND},
        .gender = TRAINER_MON_FEMALE,
        },
        {
        .lvl = REMATCH_5_LEVEL_2,
        .species = SPECIES_MINUN,
        IVS(5),
        .moves = {MOVE_THUNDERBOLT, MOVE_CHARGE, MOVE_CHARM, MOVE_HELPING_HAND},
        .gender = TRAINER_MON_FEMALE,
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

#define MIGUEL_CASTFORM(Level)  \
    POKE_FAN_MON(Level),         \
    .species = SPECIES_CASTFORM, \
    .gender = TRAINER_MON_MALE

[TRAINER_MIGUEL_1] =
{
    MIGUEL_INFO,
    .party = (const struct TrainerMon[]) {
        {
        MIGUEL_SKITTY(18),
        }
    },
},

[TRAINER_MIGUEL_2] =
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

[TRAINER_MIGUEL_3] =
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

[TRAINER_MIGUEL_4] =
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

[TRAINER_MIGUEL_5] =
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

[TRAINER_ANDREW] =
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

//Route 110
[TRAINER_TIMMY] =
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

[TRAINER_EDWIN_1] =
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

[TRAINER_EDWIN_2] =
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

[TRAINER_EDWIN_3] =
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

[TRAINER_EDWIN_4] =
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

[TRAINER_EDWIN_5] =
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

[TRAINER_JOSEPH] =
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

[TRAINER_EDWARD] =
{
    .trainerName = _("Edward"),
    PSYCHIC_M_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 19,
        .species = SPECIES_KADABRA,
        .moves = {MOVE_HIDDEN_POWER, MOVE_NONE, MOVE_NONE, MOVE_NONE}
        }
    },
},

[TRAINER_ALYSSA] =
{
    .trainerName = _("Alyssa"),
    TRIATHLETE_F_CYCLING_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        TRIATHLETE_MON(19, 0),
        .species = SPECIES_MAGNEMITE,
        }
    },
},

[TRAINER_DALE] =
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

//Route 117
#define DYLAN_INFO             \
    .trainerName = _("Dylan"), \
    TRIATHLETE_M_RUNNING_INFO, \
    MINI_BOSS_AI_FLAGS

#define DYLAN_DODUO(Level, IV)                             \
    TRIATHLETE_MON(Level, IV),                             \
    .species = Level < 31 ? SPECIES_DODUO: SPECIES_DODRIO, \
    .ability = ABILITY_TANGLED_FEET,                       \
    .gender = TRAINER_MON_MALE

[TRAINER_DYLAN_1] =
{
    DYLAN_INFO,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        DYLAN_DODUO(21, 1),
        }
    },
},

[TRAINER_DYLAN_2] =
{
    DYLAN_INFO,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        DYLAN_DODUO(REMATCH_2_LEVEL_1, 2),
        }
    },
},

[TRAINER_DYLAN_3] =
{
    DYLAN_INFO,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        DYLAN_DODUO(REMATCH_3_LEVEL_1, 3),
        }
    },
},

[TRAINER_DYLAN_4] =
{
    DYLAN_INFO,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        DYLAN_DODUO(REMATCH_4_LEVEL_1, 4),
        }
    },
},

[TRAINER_DYLAN_5] =
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
    
#define MARIA_DODUO(Level, IV)                             \
    TRIATHLETE_MON(Level, IV),                             \
    .species = Level < 31 ? SPECIES_DODUO: SPECIES_DODRIO, \
    .ability = ABILITY_EARLY_BIRD,                         \
    .gender = TRAINER_MON_FEMALE

[TRAINER_MARIA_1] =
{
    MARIA_INFO,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        MARIA_DODUO(21, 1),
        }
    },
},

[TRAINER_MARIA_2] =
{
    MARIA_INFO,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        MARIA_DODUO(REMATCH_2_LEVEL_1, 2),
        }
    },
},

[TRAINER_MARIA_3] =
{
    MARIA_INFO,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        MARIA_DODUO(REMATCH_3_LEVEL_1, 3),
        }
    },
},

[TRAINER_MARIA_4] =
{
    MARIA_INFO,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        MARIA_DODUO(REMATCH_4_LEVEL_1, 4),
        }
    },
},

[TRAINER_MARIA_5] =
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
[TRAINER_ISAAC_##Match]                                                                             \
{                                                                                                   \
    .trainerName = _("Isaac"),                                                                      \
    POKEMON_BREEDER_M_INFO,                                                                         \
    MINI_BOSS_AI_FLAGS,                                                                             \
    .party = (const struct TrainerMon[]) {                                                          \
        {                                                                                           \
        POKEMON_BREEDER_MON(Level),                                                                 \
        .species = Level < 20 ? SPECIES_WHISMUR : (Level < 40 ? SPECIES_LOUDRED : SPECIES_EXPLOUD), \
        .ability = 2,                                                                               \
        .moves = {MOVE_SMELLING_SALTS, MOVE_EXTRASENSORY, MOVE_CIRCLE_THROW, MOVE_HAMMER_ARM},      \
        .gender = TRAINER_MON_MALE                                                                  \
        },                                                                                          \
        {                                                                                           \
        POKEMON_BREEDER_MON(Level),                                                                 \
        .species = Level < 20 ? SPECIES_ZIGZAGOON : SPECIES_LINOONE,                                \
        .ability = ABILITY_QUICK_FEET,                                                              \
        .moves = {MOVE_EXTREME_SPEED, MOVE_MUD_SLAP, MOVE_SIMPLE_BEAM, MOVE_TICKLE},                \
        .gender = TRAINER_MON_MALE                                                                  \
        },                                                                                          \
        {                                                                                           \
        POKEMON_BREEDER_MON(Level),                                                                 \
        .species = Level < 24 ? SPECIES_MAKUHITA : SPECIES_HARIYAMA,                                \
        .ability = ABILITY_SHEER_FORCE,                                                             \
        .moves = {MOVE_CROSS_CHOP, MOVE_BULLET_PUNCH, MOVE_FEINT_ATTACK, MOVE_STOMPING_TANTRUM},    \
        .gender = TRAINER_MON_MALE                                                                  \
        },                                                                                          \
        {                                                                                           \
        POKEMON_BREEDER_MON(Level),                                                                 \
        .species = Level < 18 ? SPECIES_POOCHYENA : SPECIES_MIGHTYENA,                              \
        .ability = ABILITY_STRONG_JAW,                                                              \
        .moves = {MOVE_LASH_OUT, MOVE_POISON_FANG, MOVE_THUNDER_FANG, MOVE_FIRE_FANG},              \
        .gender = TRAINER_MON_MALE                                                                  \
        },                                                                                          \
        {                                                                                           \
        POKEMON_BREEDER_MON(Level),                                                                 \
        .species = Level < 22 ? SPECIES_TAILLOW : SPECIES_SWELLOW,                                  \
        .ability = ABILITY_SCRAPPY,                                                                 \
        .moves = {MOVE_BOOMBURST, MOVE_HURRICANE, MOVE_HEAT_WAVE, MOVE_ROOST},                      \
        .gender = TRAINER_MON_MALE                                                                  \
        },                                                                                          \
        {                                                                                           \
        POKEMON_BREEDER_MON(Level),                                                                 \
        .species = Level < 32 ? SPECIES_ARON : (Level < 42 ? SPECIES_LAIRON : SPECIES_AGGRON),      \
        .ability = ABILITY_ROCK_HEAD,                                                               \
        .moves = {MOVE_SMELLING_SALTS, MOVE_HEAD_SMASH, MOVE_DRAGON_RUSH, MOVE_CURSE},              \
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
[TRAINER_LYDIA_##Match]                                                                        \
{                                                                                              \
    .trainerName = _("Lydia"),                                                                 \
    POKEMON_BREEDER_F_INFO,                                                                    \
    MINI_BOSS_AI_FLAGS,                                                                        \
    .party = (const struct TrainerMon[]) {                                                     \
        {                                                                                      \
        POKEMON_BREEDER_MON(Level),                                                            \
        .species = Level < 25 ? SPECIES_WINGULL : SPECIES_PELIPPER,                            \
        .ability = ABILITY_RAIN_DISH,                                                          \
        .moves = {MOVE_CHILLING_WATER, MOVE_TWISTER, MOVE_TAILWIND, MOVE_AQUA_RING},           \
        .gender = TRAINER_MON_FEMALE                                                           \
        },                                                                                     \
        {                                                                                      \
        POKEMON_BREEDER_MON(Level),                                                            \
        .species = Level < 23 ? SPECIES_SHROOMISH : SPECIES_BRELOOM,                           \
        .ability = 2,                                                                          \
        .moves = {MOVE_WAKE_UP_SLAP, MOVE_POUNCE, MOVE_CHARM, MOVE_WORRY_SEED},                \
        .gender = TRAINER_MON_FEMALE                                                           \
        },                                                                                     \
        {                                                                                      \
        POKEMON_BREEDER_MON(Level),                                                            \
        .species = Level < REMATCH_2_LEVEL_6 ? SPECIES_AZURILL : (Level < REMATCH_3_LEVEL_6 ? SPECIES_MARILL : SPECIES_AZUMARILL), \
        .ability = ABILITY_SAP_SIPPER,                                                         \
        .moves = {MOVE_AQUA_JET, MOVE_PRESENT, MOVE_BRUTAL_SWING, MOVE_BELLY_DRUM},            \
        .gender = TRAINER_MON_FEMALE                                                           \
        },                                                                                     \
        {                                                                                      \
        POKEMON_BREEDER_MON(Level),                                                            \
        .species = Level < REMATCH_2_LEVEL_6 ? SPECIES_BUDEW : (Level < REMATCH_3_LEVEL_6 ? SPECIES_ROSELIA : SPECIES_ROSERADE), \
        .ability = 2,                                                                          \
        .moves = {MOVE_RAZOR_LEAF, MOVE_EXTRASENSORY, MOVE_LIFE_DEW, MOVE_GRASS_WHISTLE},      \
        .gender = TRAINER_MON_FEMALE                                                           \
        },                                                                                     \
        {                                                                                      \
        POKEMON_BREEDER_MON(Level),                                                            \
        .species = Level < REMATCH_2_LEVEL_6 ? SPECIES_SKITTY : SPECIES_DELCATTY,              \
        .ability = ABILITY_WONDER_SKIN,                                                        \
        .moves = {MOVE_UPROAR, MOVE_SIMPLE_BEAM, MOVE_FAKE_TEARS, MOVE_COSMIC_POWER},          \
        .gender = TRAINER_MON_FEMALE                                                           \
        },                                                                                     \
        {                                                                                      \
        POKEMON_BREEDER_MON(Level),                                                            \
        .species = Level < 33 ? SPECIES_GOLDEEN : SPECIES_SEAKING,                             \
        .ability = ABILITY_LIGHTNING_ROD,                                                      \
        .moves = {MOVE_AQUA_TAIL, MOVE_SMART_STRIKE, MOVE_DRILL_RUN, MOVE_MEGAHORN},           \
        .gender = TRAINER_MON_FEMALE                                                           \
        },                                                                                     \
    },                                                                                         \
}

LYDIA_BATTLE(1, 16),
LYDIA_BATTLE(2, REMATCH_2_LEVEL_3),
LYDIA_BATTLE(3, REMATCH_3_LEVEL_3),
LYDIA_BATTLE(4, REMATCH_4_LEVEL_3),
LYDIA_BATTLE(5, REMATCH_5_LEVEL_3),

#define ANNA_AND_MEG_INFO                                                              \
    .trainerName = _("Anna & Meg"),                                                    \
    TEAMMATES_INFO,                                                                    \
    MINI_BOSS_AI_FLAGS, \
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

[TRAINER_ANNA_AND_MEG_1] =
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

[TRAINER_ANNA_AND_MEG_2] =
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

[TRAINER_ANNA_AND_MEG_3] =
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

[TRAINER_ANNA_AND_MEG_4] =
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

[TRAINER_ANNA_AND_MEG_5] =
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

[TRAINER_DEREK] =
{
    .trainerName = _("Derek"),
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

[TRAINER_BRANDI] =
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

[TRAINER_MELINA] =
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

[TRAINER_AISHA] =
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

//Rusturf Tunnel
[TRAINER_MIKE] =
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

//Mauville Gym
[TRAINER_VIVIAN] =
{
    .trainerName = _("Vivian"),
    BEAUTY_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 21,
        .species = SPECIES_MINUN,
        IVS(12),
        .moves = {MOVE_SHOCK_WAVE, MOVE_SWIFT, MOVE_NUZZLE, MOVE_ENCORE}
        },
        {
        .lvl = 21,
        .species = SPECIES_PLUSLE,
        IVS(12),
        .moves = {MOVE_SHOCK_WAVE, MOVE_SWIFT, MOVE_NUZZLE, MOVE_SKILL_SWAP}
        }
    },
},

[TRAINER_KIRK] =
{
    .trainerName = _("Kirk"),
    GUITARIST_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 21,
        .species = SPECIES_ELECTRIKE,
        IVS(12),
        .moves = {MOVE_SHOCK_WAVE, MOVE_THUNDER_WAVE, MOVE_QUICK_ATTACK, MOVE_LEER}
        },
        {
        .lvl = 21,
        .species = SPECIES_VOLTORB,
        IVS(12),
        .moves = {MOVE_SHOCK_WAVE, MOVE_CHARGE, MOVE_SCREECH, MOVE_ROLLOUT}
        }
    },
},

[TRAINER_BEN] =
{
    .trainerName = _("Ben"),
    YOUNGSTER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 21,
        .species = SPECIES_PICHU,
        IVS(18),
        .moves = {MOVE_SHOCK_WAVE, MOVE_NASTY_PLOT, MOVE_NUZZLE, MOVE_SWEET_KISS}
        },
        {
        .lvl = 21,
        .species = SPECIES_ELECTRIKE,
        IVS(18),
        .moves = {MOVE_SHOCK_WAVE, MOVE_QUICK_ATTACK, MOVE_THUNDER_WAVE, MOVE_HOWL}
        }
    },
},

[TRAINER_ANGELO] =
{
    .trainerName = _("Angelo"),
    POKE_MANIAC_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 21,
        .species = SPECIES_CHINCHOU,
        IVS(12),
        .moves = {MOVE_SHOCK_WAVE, MOVE_BUBBLE_BEAM, MOVE_THUNDER_WAVE, MOVE_CONFUSE_RAY}
        },
        {
        .lvl = 21,
        .species = SPECIES_MAGNEMITE,
        IVS(12),
        .moves = {MOVE_SHOCK_WAVE, MOVE_MAGNET_BOMB, MOVE_THUNDER_WAVE, MOVE_SUPERSONIC}
        }
    },
},

[TRAINER_SHAWN] =
{
    .trainerName = _("Shawn"),
    GUITARIST_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 21,
        .species = SPECIES_MAGNEMITE,
        IVS(12),
        },
        {
        .lvl = 21,
        .species = SPECIES_ELECTRIKE,
        IVS(12),
        }
    },
},

//Route 118 (west)
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

[TRAINER_ROSE_1] =
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

[TRAINER_ROSE_2] =
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

[TRAINER_ROSE_3] =
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

[TRAINER_ROSE_4] =
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

[TRAINER_ROSE_5] =
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

[TRAINER_DEANDRE] =
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
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE \

#define DALTON_VOLTORB(Level)                                    \
    .lvl = Level,                                                \
    .species = Level < 30 ? SPECIES_VOLTORB : SPECIES_ELECTRODE, \
    .ability = ABILITY_SOUNDPROOF

#define DALTON_WHISMUR(Level)                                                                   \
    .lvl = Level,                                                                               \
    .species = Level < 20 ? SPECIES_WHISMUR : (Level < 40 ? SPECIES_LOUDRED : SPECIES_EXPLOUD), \
    .ability = ABILITY_SOUNDPROOF,                                                              \
    .gender = TRAINER_MON_MALE

#define DALTON_MAGNEMITE(Level)                                                                                     \
    .lvl = Level,                                                                                                   \
    .species = Level < 30 ? SPECIES_MAGNEMITE : (Level < REMATCH_5_LEVEL_6 ? SPECIES_MAGNETON : SPECIES_MAGNEZONE), \
    .ability = ABILITY_STURDY

[TRAINER_DALTON_1] =
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

[TRAINER_DALTON_2] =
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

[TRAINER_DALTON_3] =
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

[TRAINER_DALTON_4] =
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

[TRAINER_DALTON_5] =
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

[TRAINER_WADE] =
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

//Cycling Road
[TRAINER_JACLYN] =
{
    .trainerName = _("Jaclyn"),
    PSYCHIC_F_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 22,
        .species = SPECIES_KADABRA,
        .moves = {MOVE_HIDDEN_POWER, MOVE_NONE, MOVE_NONE, MOVE_NONE}
        }
    },
},

#define ABIGAIL_INFO             \
    .trainerName = _("Abigail"), \
    TRIATHLETE_F_CYCLING_INFO,   \
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE

#define ABIGAIL_BENJAMIN_MAGNEMITE(Level, IV)                                                                       \
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

[TRAINER_ABIGAIL_1] =
{
    ABIGAIL_INFO,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        ABIGAIL_BENJAMIN_MAGNEMITE(22, 1),
        }
    },
},

[TRAINER_ABIGAIL_2] =
{
    ABIGAIL_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        ABIGAIL_PLUSLE(REMATCH_2_LEVEL_2, 2),
        },
        {
        ABIGAIL_BENJAMIN_MAGNEMITE(REMATCH_2_LEVEL_2, 2),
        }
    },
},

[TRAINER_ABIGAIL_3] =
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
        ABIGAIL_BENJAMIN_MAGNEMITE(REMATCH_3_LEVEL_3, 3),
        }
    },
},

[TRAINER_ABIGAIL_4] =
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
        ABIGAIL_BENJAMIN_MAGNEMITE(REMATCH_4_LEVEL_3, 4),
        }
    },
},

[TRAINER_ABIGAIL_5] =
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
        ABIGAIL_BENJAMIN_MAGNEMITE(REMATCH_5_LEVEL_3, 5),
        }
    },
},

#define BENJAMIN_INFO             \
    .trainerName = _("Benjamin"), \
    TRIATHLETE_M_CYCLING_INFO,    \
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE

#define BENJAMIN_MINUN(Level, IV) \
    TRIATHLETE_MON(Level, IV),    \
    .species = SPECIES_MINUN,     \
    .gender = TRAINER_MON_MALE

#define BENJAMIN_VOLTORB(Level, IV)                                               \
    TRIATHLETE_MON(Level, IV),                                                    \
    .species = Level < REMATCH_4_LEVEL_6 ? SPECIES_VOLTORB : SPECIES_ELECTRODE,   \
    .ability = ABILITY_SOUNDPROOF

[TRAINER_BENJAMIN_1] =
{
    BENJAMIN_INFO,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        ABIGAIL_BENJAMIN_MAGNEMITE(22, 1),
        }
    },
},

[TRAINER_BENJAMIN_2] =
{
    BENJAMIN_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        BENJAMIN_MINUN(REMATCH_2_LEVEL_2, 2),
        },
        {
        ABIGAIL_BENJAMIN_MAGNEMITE(REMATCH_2_LEVEL_2, 2),
        }
    },
},

[TRAINER_BENJAMIN_3] =
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
        ABIGAIL_BENJAMIN_MAGNEMITE(REMATCH_3_LEVEL_3, 3),
        }
    },
},

[TRAINER_BENJAMIN_4] =
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
        ABIGAIL_BENJAMIN_MAGNEMITE(REMATCH_4_LEVEL_3, 4),
        }
    },
},

[TRAINER_BENJAMIN_5] =
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
        ABIGAIL_BENJAMIN_MAGNEMITE(REMATCH_5_LEVEL_3, 5),
        }
    },
},

[TRAINER_ANTHONY] =
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
        .species = SPECIES_MAGNEMITE,
        }
    },
},

[TRAINER_JASMINE] =
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
        .species = SPECIES_MAGNEMITE,
        },
        {
        TRIATHLETE_MON(20, 0),
        .species = SPECIES_VOLTORB,
        }
    },
},

[TRAINER_JACOB] =
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
        .species = SPECIES_VOLTORB,
        },
        {
        TRIATHLETE_MON(20, 0),
        .species = SPECIES_MAGNEMITE,
        }
    },
},

//Trick House 2
[TRAINER_TED] =
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

[TRAINER_PAUL] =
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

[TRAINER_GEORGIA] =
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

//Route 111 (south)
[TRAINER_TYRON] =
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

[TRAINER_LILY] =
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

[TRAINER_BIANCA] =
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

[TRAINER_HAYDEN] =
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

[TRAINER_VICTOR] =
{
    .trainerName = _("Victor"),
    .trainerClass = TRAINER_CLASS_WINSTRATE,
    .trainerPic = TRAINER_PIC_POKE_FAN_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        POKE_FAN_MON(23),
        .species = SPECIES_TAILLOW,
        .ev = EV_SPREAD_ATK_SPE_HP,
        IVS(3),
        .gender = TRAINER_MON_MALE,
        },
        {
        POKE_FAN_MON(23),
        .species = SPECIES_ZIGZAGOON,
        .ev = EV_SPREAD_ATK_SPE_HP,
        IVS(3),
        .gender = TRAINER_MON_MALE,
        }
    },
},

[TRAINER_VICTORIA] =
{
    .trainerName = _("Victoria"),
    .trainerClass = TRAINER_CLASS_WINSTRATE,
    .trainerPic = TRAINER_PIC_POKE_FAN_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_TWINS,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        POKE_FAN_MON(24),
        .species = SPECIES_ROSELIA,
        .ability = ABILITY_POISON_POINT,
        .ev = EV_SPREAD_SPA_SPE_HP,
        IVS(6),
        .gender = TRAINER_MON_FEMALE,
        }
    },
},

[TRAINER_VIVI] =
{
    .trainerName = _("Vivi"),
    .trainerClass = TRAINER_CLASS_WINSTRATE,
    .trainerPic = TRAINER_PIC_LASS,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 22,
        .species = SPECIES_NUMEL,
        .ev = EV_SPREAD_SPA_SPE_HP,
        IVS(12),
        .gender = TRAINER_MON_FEMALE,
        },
        {
        .lvl = 22,
        .species = SPECIES_SHROOMISH,
        .ev = EV_SPREAD_ATK_SPE_HP,
        IVS(12),
        .gender = TRAINER_MON_FEMALE,
        },
        {
        .lvl = 22,
        .species = SPECIES_GOLDEEN,
        .ev = EV_SPREAD_ATK_SPE_HP,
        IVS(12),
        .gender = TRAINER_MON_FEMALE,
        }
    },
},

[TRAINER_VICKY] =
{
    .trainerName = _("Vicky"),
    .trainerClass = TRAINER_CLASS_WINSTRATE,
    .trainerPic = TRAINER_PIC_EXPERT_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 25,
        .species = SPECIES_MEDITITE,
        .ev = EV_SPREAD_ATK_SPE_HP,
        IVS(24),
        .moves = {MOVE_FORCE_PALM, MOVE_MEDITATE, MOVE_PSYBEAM, MOVE_DETECT},
        .gender = TRAINER_MON_FEMALE,
        }
    },
},

[TRAINER_IRENE] =
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

[TRAINER_TRAVIS] =
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

//Route 112
[TRAINER_LARRY] =
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

[TRAINER_CAROL] =
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

[TRAINER_BRICE] =
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
    .species = Level < REMATCH_3_LEVEL_6 ? SPECIES_GEODUDE : (Level < REMATCH_5_LEVEL_6 ? SPECIES_GRAVELER : SPECIES_GOLEM) \

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

[TRAINER_TRENT_1] =
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

[TRAINER_TRENT_2] =
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

[TRAINER_TRENT_3] =
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

[TRAINER_TRENT_4] =
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

[TRAINER_TRENT_5] =
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

[TRAINER_BRYANT] =
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

[TRAINER_SHAYLA] =
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

//Route 111 (north)
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

#define WILTON_WAILMER(Level) \
    .lvl = Level,             \
    .species = Level < 40 ? SPECIES_WAILMER : SPECIES_WAILORD, \
    .ability = ABILITY_OBLIVIOUS,                              \
    .gender = TRAINER_MON_MALE

#define WILTON_ELECTRIKE(Level)                                                   \
    .lvl = Level,                                                                 \
    .species = Level < REMATCH_2_LEVEL_6 ? SPECIES_ELECTRIKE : SPECIES_MANECTRIC, \
    .ability = ABILITY_STATIC,                                                    \
    .gender = TRAINER_MON_MALE

[TRAINER_WILTON_1] =
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

[TRAINER_WILTON_2] =
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

[TRAINER_WILTON_3] =
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

[TRAINER_WILTON_4] =
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

[TRAINER_WILTON_5] =
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

#define BROOKE_ROSELIA(Level)                                                   \
    .lvl = Level,                                                              \
    .species = Level < REMATCH_3_LEVEL_6 ? SPECIES_ROSELIA : SPECIES_ROSERADE, \
    .ability = ABILITY_POISON_POINT,                                           \
    .gender = TRAINER_MON_FEMALE

#define BROOKE_NUMEL(Level)                                    \
    .lvl = Level,                                              \
    .species = Level < 33 ? SPECIES_NUMEL : SPECIES_CAMERUPT,  \
    .ability = ABILITY_OBLIVIOUS,                              \
    .gender = TRAINER_MON_FEMALE

#define BROOKE_WINGULL(Level)                                                  \
    .lvl = Level,                                                              \
    .species = Level < REMATCH_2_LEVEL_6 ? SPECIES_WINGULL : SPECIES_PELIPPER, \
    .ability = ABILITY_KEEN_EYE,                                               \
    .gender = TRAINER_MON_FEMALE

[TRAINER_BROOKE_1] =
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

[TRAINER_BROOKE_2] =
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

[TRAINER_BROOKE_3] =
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

[TRAINER_BROOKE_4] =
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

[TRAINER_BROOKE_5] =
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

[TRAINER_DAISUKE] =
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

//Route 113
[TRAINER_JAYLEN] =
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

[TRAINER_LAWRENCE] =
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

[TRAINER_LUNG] =
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

[TRAINER_WYATT] =
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
    .species = Level < 33 ? SPECIES_NUMEL : SPECIES_CAMERUPT, \
    .ability = ABILITY_SIMPLE,                                \
    .gender = TRAINER_MON_FEMALE,                             \
    .moves = {MOVE_LAVA_PLUME, Level < REMATCH_2_LEVEL_6 ? MOVE_BULLDOZE : MOVE_EARTH_POWER, MOVE_AMNESIA, MOVE_SUNNY_DAY}

#define MADELINE_ROSELIA(Level)                                                \
    .lvl = Level,                                                              \
    .species = Level < REMATCH_5_LEVEL_6 ? SPECIES_ROSELIA : SPECIES_ROSERADE, \
    .ability = ABILITY_POISON_POINT,                                           \
    .gender = TRAINER_MON_FEMALE,                                              \
    .moves = {MOVE_GIGA_DRAIN, MOVE_LEECH_SEED, MOVE_GROWTH, MOVE_SUNNY_DAY}

[TRAINER_MADELINE_1] =
{
    MADELINE_INFO,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        MADELINE_NUMEL(25),
        }
    },
},

[TRAINER_MADELINE_2] =
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

[TRAINER_MADELINE_3] =
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

[TRAINER_MADELINE_4] =
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

[TRAINER_MADELINE_5] =
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

[TRAINER_TORI_AND_TIA] =
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
    NINJA_BOY_INFO,            \
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

[TRAINER_LAO_1] =
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

[TRAINER_LAO_2] =
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

[TRAINER_LAO_3] =
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

[TRAINER_LAO_4] =
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

[TRAINER_LAO_5] =
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

[TRAINER_DILLON] =
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

[TRAINER_SOPHIE] =
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

[TRAINER_COBY] =
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

//Route 114
[TRAINER_NOLAN] =
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

[TRAINER_CHARLOTTE] =
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

[TRAINER_KAI] =
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

[TRAINER_CLAUDE] =
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

[TRAINER_NANCY] =
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

[TRAINER_TYRA_AND_IVY] =
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

[TRAINER_SHANE] =
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

[TRAINER_STEVE_1] =
{
    STEVE_INFO,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        STEVE_ARON(25),
        }
    },
},

[TRAINER_STEVE_2] =
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

[TRAINER_STEVE_3] =
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

[TRAINER_STEVE_4] =
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

[TRAINER_STEVE_5] =
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

[TRAINER_BERNIE_1] =
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

[TRAINER_BERNIE_2] =
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

[TRAINER_BERNIE_3] =
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

[TRAINER_BERNIE_4] =
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

[TRAINER_BERNIE_5] =
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

[TRAINER_LUCAS] =
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

[TRAINER_ANGELINA] =
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

[TRAINER_LENNY] =
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

#define NOB_INFO             \
    .trainerName = _("Nob"), \
    BLACK_BELT_INFO,         \
    MINI_BOSS_AI_FLAGS

//Route 115 (south)
[TRAINER_NOB_1] =
{
    NOB_INFO,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 27,
        .species = SPECIES_MACHOP,
        IVS(12),
        }
    },
},

[TRAINER_NOB_2] =
{
    NOB_INFO,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = REMATCH_2_LEVEL_1,
        .species = SPECIES_MACHOKE,
        IVS(13),
        }
    },
},

[TRAINER_NOB_3] =
{
    NOB_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = REMATCH_3_LEVEL_2,
        .species = SPECIES_BRELOOM,
        IVS(14),
        },
        {
        .lvl = REMATCH_3_LEVEL_1,
        .species = SPECIES_MACHOKE,
        IVS(14),
        }
    },
},

[TRAINER_NOB_4] =
{
    NOB_INFO,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = REMATCH_4_LEVEL_2,
        .species = SPECIES_HERACROSS,
        IVS(15),
        },
        {
        .lvl = REMATCH_4_LEVEL_2,
        .species = SPECIES_BRELOOM,
        IVS(15),
        },
        {
        .lvl = REMATCH_4_LEVEL_1,
        .species = SPECIES_MACHAMP,
        IVS(15),
        }
    },
},

[TRAINER_NOB_5] =
{
    NOB_INFO,
    .partySize = 4,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = REMATCH_5_LEVEL_2,
        .species = SPECIES_BLAZIKEN,
        IVS(17),
        },
        {
        .lvl = REMATCH_5_LEVEL_2,
        .species = SPECIES_HERACROSS,
        IVS(17),
        },
        {
        .lvl = REMATCH_5_LEVEL_2,
        .species = SPECIES_BRELOOM,
        IVS(17),
        },
        {
        .lvl = REMATCH_5_MINI_BOSS,
        .species = SPECIES_MACHAMP,
        IVS(17),
        .heldItem = ITEM_BLACK_BELT
        }
    },
},

[TRAINER_HECTOR] =
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

[TRAINER_MARLENE] =
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

[TRAINER_CYNDY_1] =
{
    CYNDY_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 25,
        .species = SPECIES_MAKUHITA,
        IVS(12),
        },
        {
        .lvl = 25,
        .species = SPECIES_MEDITITE,
        IVS(12),
        }
    },
},

[TRAINER_CYNDY_2] =
{
    CYNDY_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = REMATCH_2_LEVEL_2,
        .species = SPECIES_HARIYAMA,
        IVS(13),
        },
        {
        .lvl = REMATCH_2_LEVEL_2,
        .species = SPECIES_MEDITITE,
        IVS(13),
        }
    },
},

[TRAINER_CYNDY_3] =
{
    CYNDY_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = REMATCH_3_LEVEL_2,
        .species = SPECIES_HARIYAMA,
        IVS(14),
        },
        {
        .lvl = REMATCH_3_LEVEL_2,
        .species = SPECIES_MEDITITE,
        IVS(14),
        }
    },
},

[TRAINER_CYNDY_4] =
{
    CYNDY_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = REMATCH_4_LEVEL_2,
        .species = SPECIES_HARIYAMA,
        IVS(15),
        },
        {
        .lvl = REMATCH_4_LEVEL_2,
        .species = SPECIES_MEDICHAM,
        IVS(15),
        }
    },
},

[TRAINER_CYNDY_5] =
{
    CYNDY_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = REMATCH_5_LEVEL_2,
        .species = SPECIES_HARIYAMA,
        IVS(17),
        },
        {
        .lvl = REMATCH_5_LEVEL_2,
        .species = SPECIES_MEDICHAM,
        IVS(17),
        }
    },
},

//Mt. Chimney (Magma)
[TRAINER_GRUNT_MT_CHIMNEY_1] =
{
    MAGMA_GRUNT_F_INFO,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 27,
        .species = SPECIES_VULPIX,
        }
    },
},

[TRAINER_GRUNT_MT_CHIMNEY_2] =
{
    MAGMA_GRUNT_M_INFO,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 27,
        .species = SPECIES_SLUGMA,
        }
    },
},

[TRAINER_TABITHA_MT_CHIMNEY] =
{
    TABITHA_INFO,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        TABITHA_PHANPY(27),
        IVS(6),
        },
        {
        TABITHA_SLUGMA(27),
        IVS(6),
        },
        {
        TABITHA_HOUNDOUR(29),
        IVS(6),
        }
    },
},

[TRAINER_MAXIE_MT_CHIMNEY] =
{
    MAXIE_INFO,
    .items = {ITEM_SUPER_POTION, ITEM_SUPER_POTION, ITEM_NONE, ITEM_NONE},
    .partySize = 4,
    .party = (const struct TrainerMon[]) {
        MAXIE_PHANPY(28),
        MAXIE_SANDSHREW(29),
        MAXIE_BALTOY(29),
        {
        HUMPHREY(30),
        }
    },
},

//Jagged Pass
[TRAINER_ERIC] =
{
    .trainerName = _("Eric"),
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

[TRAINER_GRUNT_JAGGED_PASS] =
{
    MAGMA_GRUNT_M_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 26,
        .species = SPECIES_BALTOY,
        IVS(6),
        },
        {
        .lvl = 26,
        .species = SPECIES_HOUNDOUR,
        IVS(6),
        }
    },
},

#define DIANA_INFO             \
    .trainerName = _("Diana"), \
    PICNICKER_INFO,            \
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE

#define DIANA_SWABLU(Level)                                   \
    .lvl = Level,                                             \
    .species = Level < 35 ? SPECIES_SWABLU : SPECIES_ALTARIA, \
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

[TRAINER_DIANA_1] =
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

[TRAINER_DIANA_2] =
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

[TRAINER_DIANA_3] =
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

[TRAINER_DIANA_4] =
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

[TRAINER_DIANA_5] =
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

[TRAINER_AUTUMN] =
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

[TRAINER_JULIO] =
{
    .trainerName = _("Julio"),
    TRIATHLETE_M_CYCLING_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        TRIATHLETE_MON(27, 0),
        .species = SPECIES_MAGNEMITE,
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

[TRAINER_ETHAN_1] =
{
    ETHAN_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        ETHAN_GULPIN(26),
        },
        {
        ETHAN_TAILLOW(26),
        }
    },
},

[TRAINER_ETHAN_2] =
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
        }
    },
},

[TRAINER_ETHAN_3] =
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
        }
    },
},

[TRAINER_ETHAN_4] =
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
        }
    },
},

[TRAINER_ETHAN_5] =
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
        }
    },
},

//Lavaridge Gym
[TRAINER_JEFF] =
{
    .trainerName = _("Jeff"),
    KINDLER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 27,
        .species = SPECIES_NUMEL,
        IVS(12),
        },
        {
        .lvl = 27,
        .species = SPECIES_SLUGMA,
        IVS(12),
        }
    },
},

[TRAINER_JACE] =
{
    .trainerName = _("Jace"),
    KINDLER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 28,
        .species = SPECIES_VULPIX,
        IVS(12),
        }
    },
},

[TRAINER_ELI] =
{
    .trainerName = _("Eli"),
    HIKER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 28,
        .species = SPECIES_NUMEL,
        IVS(12),
        }
    },
},

[TRAINER_COLE] =
{
    .trainerName = _("Cole"),
    KINDLER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 28,
        .species = SPECIES_TORKOAL,
        IVS(12),
        }
    },
},

[TRAINER_GERALD] =
{
    .trainerName = _("Gerald"),
    ACE_TRAINER_M_INFO,
    .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 28,
        .species = SPECIES_TORCHIC,
        IVS(12),
        }
    },
},

[TRAINER_AXLE] =
{
    .trainerName = _("Axle"),
    KINDLER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 28,
        .species = SPECIES_NUMEL,
        IVS(12),
        }
    },
},

[TRAINER_KEEGAN] =
{
    .trainerName = _("Keegan"),
    KINDLER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 28,
        .species = SPECIES_HOUNDOUR,
        IVS(14),
        }
    },
},

[TRAINER_DANIELLE] =
{
    .trainerName = _("Danielle"),
    BATTLE_GIRL_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 28,
        .species = SPECIES_COMBUSKEN,
        IVS(12),
        }
    },
},

//Mt. Chimney
[TRAINER_SHIRLEY] =
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

[TRAINER_SHEILA] =
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

[TRAINER_SHELBY_1] =
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

[TRAINER_SHELBY_2] =
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

[TRAINER_SHELBY_3] =
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

[TRAINER_SHELBY_4] =
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

[TRAINER_SHELBY_5] =
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

#define SAWYER_NUMEL(Level)  \
    .lvl = Level,              \
    .species = Level < REMATCH_3_LEVEL_6 ? SPECIES_NUMEL : SPECIES_CAMERUPT, \
    .ability = 0, \
    .gender = TRAINER_MON_MALE

#define SAWYER_MACHOKE(Level)  \
    .lvl = Level,              \
    .species = Level < REMATCH_5_LEVEL_6 ? SPECIES_MACHOKE : SPECIES_MACHAMP, \
    .ability = ABILITY_GUTS, \
    .gender = TRAINER_MON_MALE

[TRAINER_SAWYER_1] =
{
    SAWYER_INFO,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        SAWYER_GEODUDE(28),
        }
    },
},

[TRAINER_SAWYER_2] =
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

[TRAINER_SAWYER_3] =
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

[TRAINER_SAWYER_4] =
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

[TRAINER_SAWYER_5] =
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

[TRAINER_MELISSA] =
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

//Route 111 (desert)
[TRAINER_HEIDI] =
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

[TRAINER_BEAU] =
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

[TRAINER_DREW] =
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

[TRAINER_BECKY] =
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

#define DUSTY_BALTOY(Level)                                   \
    .lvl = Level,                                             \
    .species = Level < 36 ? SPECIES_BALTOY : SPECIES_CLAYDOL, \
    IVS(10)

#define DUSTY_SANDSLASH(Level)    \
    .lvl = Level,                 \
    .species = SPECIES_SANDSLASH, \
    IVS(10), \
    .gender = TRAINER_MON_MALE

[TRAINER_DUSTY_1] =
{
    DUSTY_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        DUSTY_SANDSLASH(30),
        },
        {
        DUSTY_BALTOY(30),
        }
    },
},

[TRAINER_DUSTY_2] =
{
    DUSTY_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        DUSTY_SANDSLASH(REMATCH_2_LEVEL_1),
        },
        {
        DUSTY_BALTOY(REMATCH_2_LEVEL_1),
        }
    },
},

[TRAINER_DUSTY_3] =
{
    DUSTY_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        DUSTY_SANDSLASH(REMATCH_3_LEVEL_1),
        },
        {
        DUSTY_BALTOY(REMATCH_3_LEVEL_1),
        }
    },
},

[TRAINER_DUSTY_4] =
{
    DUSTY_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        DUSTY_SANDSLASH(REMATCH_4_LEVEL_1),
        },
        {
        DUSTY_BALTOY(REMATCH_4_LEVEL_1),
        }
    },
},

[TRAINER_DUSTY_5] =
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
        DUSTY_SANDSLASH(REMATCH_5_MINI_BOSS),
        },
        {
        DUSTY_BALTOY(REMATCH_5_MINI_BOSS),
        }
    },
},

[TRAINER_CELIA] =
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

[TRAINER_BRYAN] =
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
        .species = SPECIES_SANDSHREW,
        }
    },
},

[TRAINER_BRANDEN] =
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
        .species = SPECIES_SANDSHREW,
        }
    },
},

//Trick House 3
[TRAINER_JUSTIN] =
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

[TRAINER_MARTHA] =
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

[TRAINER_ALAN] =
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

//Petalburg Gym
[TRAINER_RANDALL] =
{
    .trainerName = _("Randall"),
    ACE_TRAINER_M_INFO,
    .items = {ITEM_X_SPEED, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 31,
        .species = SPECIES_SWELLOW,
        PERFECT_IVS,
        .heldItem = ITEM_SALAC_BERRY,
        .moves = {MOVE_QUICK_ATTACK, MOVE_AGILITY, MOVE_WING_ATTACK, MOVE_NONE}
        }
    },
},

[TRAINER_MARY] =
{
    .trainerName = _("Mary"),
    ACE_TRAINER_F_INFO,
    .items = {ITEM_X_ACCURACY, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 31,
        .species = SPECIES_DELCATTY,
        PERFECT_IVS,
        .heldItem = ITEM_MICLE_BERRY,
        .moves = {MOVE_SWIFT, MOVE_SHOCK_WAVE, MOVE_FEINT_ATTACK, MOVE_DISARMING_VOICE}
        }
    },
},

[TRAINER_PARKER] =
{
    .trainerName = _("Parker"),
    ACE_TRAINER_M_INFO,
    .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 31,
        .species = SPECIES_SPINDA,
        PERFECT_IVS,
        .moves = {MOVE_TEETER_DANCE, MOVE_DIZZY_PUNCH, MOVE_PSYBEAM, MOVE_NONE}
        }
    },
},

[TRAINER_ALEXIA] =
{
    .trainerName = _("Alexia"),
    ACE_TRAINER_F_INFO,
    .items = {ITEM_X_DEFENSE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 31,
        .species = SPECIES_WIGGLYTUFF,
        PERFECT_IVS,
        .heldItem = ITEM_GANLON_BERRY,
        .moves = {MOVE_DEFENSE_CURL, MOVE_FACADE, MOVE_BODY_PRESS, MOVE_NONE}
        }
    },
},

[TRAINER_GEORGE] =
{
    .trainerName = _("George"),
    ACE_TRAINER_M_INFO,
    .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 31,
        .species = SPECIES_VIGOROTH,
        PERFECT_IVS,
        .heldItem = ITEM_SITRUS_BERRY,
        .moves = {MOVE_SLACK_OFF, MOVE_DRAIN_PUNCH, MOVE_ENDURE, MOVE_NONE}
        }
    },
},

[TRAINER_JODY] =
{
    .trainerName = _("Jody"),
    ACE_TRAINER_F_INFO,
    .items = {ITEM_X_ATTACK, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_SETUP_FIRST_TURN,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 31,
        .species = SPECIES_ZANGOOSE,
        PERFECT_IVS,
        .heldItem = ITEM_LIECHI_BERRY,
        .moves = {MOVE_SWORDS_DANCE, MOVE_CRUSH_CLAW, MOVE_NONE, MOVE_NONE}
        }
    },
},

[TRAINER_BERKE] =
{
    .trainerName = _("Berke"),
    ACE_TRAINER_M_INFO,
    .items = {ITEM_DIRE_HIT, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 31,
        .species = SPECIES_LINOONE,
        PERFECT_IVS,
        .heldItem = ITEM_SCOPE_LENS,
        .moves = {MOVE_SLASH, MOVE_NONE, MOVE_NONE, MOVE_NONE}
        }
    },
},

//Route 103 (water)
[TRAINER_ISABELLE] =
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

[TRAINER_PETE] =
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

//Route 115 (north)
[TRAINER_JAIDEN] =
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

[TRAINER_TIMOTHY_1] =
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

[TRAINER_TIMOTHY_2] =
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

[TRAINER_TIMOTHY_3] =
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

[TRAINER_TIMOTHY_4] =
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

[TRAINER_TIMOTHY_5] =
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

[TRAINER_KYRA] =
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

[TRAINER_KOICHI] =
{
    .trainerName = _("Koichi"),
    BLACK_BELT_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 31,
        .species = SPECIES_MACHOKE,
        IVS(12),
        },
        {
        .lvl = 31,
        .species = SPECIES_MACHOKE,
        IVS(18),
        }
    },
},

[TRAINER_HELENE] =
{
    .trainerName = _("Helene"),
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

[TRAINER_ALIX] =
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

//Route 105
[TRAINER_IMANI] =
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

[TRAINER_DOMINIK] =
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

[TRAINER_FOSTER] =
{
    .trainerName = _("Foster"),
    RUIN_MANIAC_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 31,
        .species = SPECIES_NOSEPASS,
        IVS(12),
        },
        {
        .lvl = 31,
        .species = SPECIES_SANDSLASH,
        IVS(12),
        }
    },
},

[TRAINER_BEVERLY] =
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

#define ANDRES_SANDSHREW(Level)                                                     \
    .lvl = Level,                                                                   \
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

[TRAINER_ANDRES_1] =
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

[TRAINER_ANDRES_2] =
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

[TRAINER_ANDRES_3] =
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

[TRAINER_ANDRES_4] =
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

[TRAINER_ANDRES_5] =
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

[TRAINER_JOSUE] =
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

[TRAINER_LUIS] =
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

//Route 106 (water)
[TRAINER_DOUGLAS] =
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

[TRAINER_KYLA] =
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

//Route 107
[TRAINER_DENISE] =
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

#define TONY_CARVANHA(Level)                                                      \
    .lvl = Level,                                                                 \
    .species = Level < REMATCH_2_LEVEL_1 ? SPECIES_CARVANHA : SPECIES_SHARPEDO, \
    .gender = TRAINER_MON_MALE

#define TONY_STARYU(Level)                                                   \
    .lvl = Level,                                                            \
    .species = Level < REMATCH_4_LEVEL_6 ? SPECIES_STARYU : SPECIES_STARMIE, \
    .ability = ABILITY_ILLUMINATE

[TRAINER_TONY_1] =
{
    TONY_INFO,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        TONY_CARVANHA(32),
        }
    },
},

[TRAINER_TONY_2] =
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

[TRAINER_TONY_3] =
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

[TRAINER_TONY_4] =
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

[TRAINER_TONY_5] =
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

[TRAINER_LISA_AND_RAY] =
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

[TRAINER_DARRIN] =
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

[TRAINER_BETH] =
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

[TRAINER_CAMRON] =
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

//Route 108
[TRAINER_MISSY] =
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

[TRAINER_MATTHEW] =
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

[TRAINER_TARA] =
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

[TRAINER_CAROLINA] =
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

#define CORY_TENTACOOL(Level)                                                        \
    .lvl = Level,                                                                    \
    .species = Level < REMATCH_2_LEVEL_3 ? SPECIES_TENTACOOL : SPECIES_TENTACRUEL, \
    .ability = ABILITY_CLEAR_BODY,                                                   \
    .gender = TRAINER_MON_MALE

#define CORY_MACHOKE(Level)                                                   \
    .lvl = Level,                                                             \
    .species = Level < REMATCH_5_LEVEL_6 ? SPECIES_MACHOKE : SPECIES_MACHAMP, \
    .ability = ABILITY_GUTS,                                                  \
    .gender = TRAINER_MON_MALE

#define CORY_PELIPPER(Level)       \
    .lvl = Level,                  \
    .species = SPECIES_PELIPPER,   \
    .ability = ABILITY_KEEN_EYE, \
    .gender = TRAINER_MON_MALE

[TRAINER_CORY_1] =
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

[TRAINER_CORY_2] =
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

[TRAINER_CORY_3] =
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

[TRAINER_CORY_4] =
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

[TRAINER_CORY_5] =
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

[TRAINER_JEROME] =
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

//Abandoned Ship
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

[TRAINER_THALIA_1] =
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

[TRAINER_THALIA_2] =
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

[TRAINER_THALIA_3] =
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

[TRAINER_THALIA_4] =
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

[TRAINER_THALIA_5] =
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

[TRAINER_DEMETRIUS] =
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

[TRAINER_DUNCAN] =
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

[TRAINER_CHARLIE] =
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

[TRAINER_GARRISON] =
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

[TRAINER_JANI] =
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

[TRAINER_KIRA_AND_DAN_1] =
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

[TRAINER_KIRA_AND_DAN_2] =
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

[TRAINER_KIRA_AND_DAN_3] =
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

[TRAINER_KIRA_AND_DAN_4] =
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

[TRAINER_KIRA_AND_DAN_5] =
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

//Route 109 (water)
[TRAINER_AUSTINA] =
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

[TRAINER_GWEN] =
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

[TRAINER_DAVID] =
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

[TRAINER_ALICE] =
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


[TRAINER_CARTER] =
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

[TRAINER_ELIJAH] =
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

[TRAINER_MEL_AND_PAUL] =
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

//Trick House 4
[TRAINER_YUJI] =
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

[TRAINER_CORA] =
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

[TRAINER_PAULA] =
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

//Route 118 (east)
[TRAINER_BARNY] =
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

[TRAINER_CHESTER] =
{
    .trainerName = _("Chester"),
    BIRD_KEEPER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 33,
        .species = SPECIES_SWELLOW,
        },
        {
        .lvl = 33,
        .species = SPECIES_SWELLOW,
        }
    },
},

[TRAINER_PERRY] =
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

//Route 123 (west)
[TRAINER_DAVIS] =
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

[TRAINER_JAZMYN] =
{
    .trainerName = _("Jazmyn"),
    .trainerClass = TRAINER_CLASS_COOL_TRAINER,
    .trainerPic = TRAINER_PIC_ACE_TRAINER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
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

[TRAINER_VIOLET] =
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

[TRAINER_MIU_AND_YUKI] =
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

//Route 119 (south)
[TRAINER_KENT] =
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

[TRAINER_DONALD] =
{
    .trainerName = _("Donald"),
    BUG_MANIAC_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
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

[TRAINER_GREG] =
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

[TRAINER_TAYLOR] =
{
    .trainerName = _("Taylor"),
    BUG_MANIAC_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
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

[TRAINER_DOUG] =
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

[TRAINER_BRENT] =
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

[TRAINER_CHRIS] =
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


[TRAINER_CATHERINE_1] =
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

[TRAINER_CATHERINE_2] =
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

[TRAINER_CATHERINE_3] =
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

[TRAINER_CATHERINE_4] =
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

[TRAINER_CATHERINE_5] =
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

[TRAINER_JACKSON_1] =
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

[TRAINER_JACKSON_2] =
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

[TRAINER_JACKSON_3] =
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

[TRAINER_JACKSON_4] =
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

[TRAINER_JACKSON_5] =
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

[TRAINER_RACHEL] =
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

[TRAINER_PHIL] =
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

[TRAINER_TAKASHI] =
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

[TRAINER_DAYTON] =
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

[TRAINER_HUGH] =
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
        .species = SPECIES_TROPIUS,
        }
    },
},

//Weather Institute
[TRAINER_GRUNT_WEATHER_INST_1] =
{
    AQUA_GRUNT_F_INFO,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 38,
        .species = SPECIES_CARVANHA,
        }
    },
},

[TRAINER_GRUNT_WEATHER_INST_2] =
{
    AQUA_GRUNT_M_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 37,
        .species = SPECIES_CARVANHA,
        },
        {
        .lvl = 37,
        .species = SPECIES_CORPHISH,
        }
    },
},

[TRAINER_GRUNT_WEATHER_INST_3] =
{
    AQUA_GRUNT_M_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 37,
        .species = SPECIES_CARVANHA,
        },
        {
        .lvl = 37,
        .species = SPECIES_WAILMER,
        }
    },
},

[TRAINER_GRUNT_WEATHER_INST_4] =
{
    AQUA_GRUNT_F_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 37,
        .species = SPECIES_STARYU,
        },
        {
        .lvl = 37,
        .species = SPECIES_GOLDEEN,
        }
    },
},

[TRAINER_GRUNT_WEATHER_INST_5] =
{
    AQUA_GRUNT_M_INFO,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 36,
        .species = SPECIES_CARVANHA,
        },
        {
        .lvl = 36,
        .species = SPECIES_CLAMPERL,
        },
        {
        .lvl = 36,
        .species = SPECIES_TENTACOOL,
        }
    },
},

[TRAINER_SHELLY_WEATHER_INSTITUTE] =
{
    SHELLY_INFO,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        SHELLY_STARYU(39),
        IVS(6),
        },
        {
        SHELLY_GOLDEEN(39),
        IVS(6),
        },
        {
        SHELLY_GOREBYSS(41),
        IVS(6),
        }
    },
},

//Route 119 (north)
[TRAINER_FABIAN] =
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

[TRAINER_YASU] =
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

[TRAINER_HIDEO] =
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

//Route 120 (north)
[TRAINER_CLARISSA] =
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
    .gender = TRAINER_MON_MALE

#define ROBERT_NATU(Level)                                              \
    .lvl = Level,                                                       \
    .species = Level < REMATCH_3_LEVEL_2 ? SPECIES_NATU : SPECIES_XATU, \
    .ability = ABILITY_EARLY_BIRD,                                      \
    .gender = TRAINER_MON_MALE

[TRAINER_ROBERT_1] =
{
    ROBERT_INFO,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        ROBERT_SWABLU(40),
        }
    },
},

[TRAINER_ROBERT_2] =
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

[TRAINER_ROBERT_3] =
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

[TRAINER_ROBERT_4] =
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

[TRAINER_ROBERT_5] =
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

//Fortree Gym
[TRAINER_HUMBERTO] =
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

[TRAINER_JARED] =
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

[TRAINER_ASHLEY] =
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

[TRAINER_FLINT] =
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

[TRAINER_EDWARDO] =
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

[TRAINER_DARIUS] =
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

//Route 120 (south)
[TRAINER_COLIN] =
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

[TRAINER_LEONEL] =
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

[TRAINER_ANGELICA] =
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

[TRAINER_RILEY] =
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

[TRAINER_CALLIE] =
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

[TRAINER_JENNIFER] =
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

[TRAINER_JENNA] =
{
    .trainerName = _("Jenna"),
    POKEMON_RANGER_F_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_SETUP_FIRST_TURN,
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

[TRAINER_LORENZO] =
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

[TRAINER_JEFFREY_1] =
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

[TRAINER_JEFFREY_2] =
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

[TRAINER_JEFFREY_3] =
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

[TRAINER_JEFFREY_4] =
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

[TRAINER_JEFFREY_5] =
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

[TRAINER_KEIGO] =
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

[TRAINER_CHIP] =
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
        .species = SPECIES_SANDSLASH,
        IVS(6),
        }
    },
},

//Route 121
[TRAINER_CALE] =
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

[TRAINER_TAMMY] =
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

[TRAINER_JESSICA_1] =
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

[TRAINER_JESSICA_2] =
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

[TRAINER_JESSICA_3] =
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

[TRAINER_JESSICA_4] =
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

[TRAINER_JESSICA_5] =
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

[TRAINER_KATE_AND_JOY] =
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

[TRAINER_PAT] =
{
    .trainerName = _("Pat"),
    POKEMON_BREEDER_F_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = (const struct TrainerMon[]) {
        {
        POKEMON_BREEDER_MON(37),
        .species = SPECIES_MANECTRIC,
        .ability = ABILITY_STATIC,
        .moves = {MOVE_CHARGE_BEAM, MOVE_SNARL, MOVE_FLAME_BURST, MOVE_UPROAR},
        },
        {
        POKEMON_BREEDER_MON(37),
        .species = SPECIES_SHARPEDO,
        .ability = ABILITY_SPEED_BOOST,
        .moves = {MOVE_SCALE_SHOT, MOVE_ASSURANCE, MOVE_BOUNCE, MOVE_ICE_FANG},
        },
        {
        POKEMON_BREEDER_MON(37),
        .species = SPECIES_BELLOSSOM,
        .ability = ABILITY_CHLOROPHYLL,
        .moves = {MOVE_NATURE_POWER, MOVE_ACID_SPRAY, MOVE_TEETER_DANCE, MOVE_STRENGTH_SAP},
        },
        {
        POKEMON_BREEDER_MON(37),
        .species = SPECIES_GRUMPIG,
        .ability = ABILITY_THICK_FAT,
        .moves = {MOVE_EXTRASENSORY, MOVE_CHILLING_WATER, MOVE_SIMPLE_BEAM, MOVE_TRAILBLAZE},
        },
        {
        POKEMON_BREEDER_MON(37),
        .species = SPECIES_SANDSLASH,
        .ability = ABILITY_SAND_RUSH,
        .moves = {MOVE_HIGH_HORSEPOWER, MOVE_CRUSH_CLAW, MOVE_SMACK_DOWN, MOVE_METAL_CLAW},
        },
        {
        POKEMON_BREEDER_MON(37),
        .species = SPECIES_SWALOT,
        .ability = ABILITY_LIQUID_OOZE,
        .moves = {MOVE_SLUDGE_WAVE, MOVE_INFESTATION, MOVE_AMNESIA, MOVE_ACID_ARMOR},
        }
    },
},

[TRAINER_MYLES] =
{
    .trainerName = _("Myles"),
    POKEMON_BREEDER_M_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = (const struct TrainerMon[]) {
        {
        POKEMON_BREEDER_MON(37),
        .species = SPECIES_HOUNDOOM,
        .ability = ABILITY_UNNERVE,
        .moves = {MOVE_HEAT_WAVE, MOVE_SNARL, MOVE_UPROAR, MOVE_TRAILBLAZE},
        },
        {
        POKEMON_BREEDER_MON(37),
        .species = SPECIES_CAMERUPT,
        .ability = ABILITY_ANGER_POINT,
        .moves = {MOVE_FLAME_CHARGE, MOVE_STOMPING_TANTRUM, MOVE_HEAVY_SLAM, MOVE_LASH_OUT},
        },
        {
        POKEMON_BREEDER_MON(37),
        .species = SPECIES_VILEPLUME,
        .ability = ABILITY_EFFECT_SPORE,
        .moves = {MOVE_NATURE_POWER, MOVE_ACID_SPRAY, MOVE_TEETER_DANCE, MOVE_STRENGTH_SAP},
        },
        {
        POKEMON_BREEDER_MON(37),
        .species = SPECIES_ABSOL,
        .ability = ABILITY_SHARPNESS,
        .moves = {MOVE_BRUTAL_SWING, MOVE_MEGAHORN, MOVE_MAGIC_COAT, MOVE_PERISH_SONG},
        },
        {
        POKEMON_BREEDER_MON(37),
        .species = SPECIES_MUK,
        .ability = ABILITY_POISON_TOUCH,
        .moves = {MOVE_SHADOW_PUNCH, MOVE_SHADOW_SNEAK, MOVE_POWER_UP_PUNCH, MOVE_TAKE_DOWN},
        },
        {
        POKEMON_BREEDER_MON(37),
        .species = SPECIES_TROPIUS,
        .ability = ABILITY_HARVEST,
        .moves = {MOVE_NATURE_POWER, MOVE_AIR_CUTTER, MOVE_TRAILBLAZE, MOVE_TAILWIND},
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

[TRAINER_WALTER_1] =
{
    WALTER_INFO,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        WALTER_MANECTRIC(42),
        }
    },
},

[TRAINER_WALTER_2] =
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

[TRAINER_WALTER_3] =
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

[TRAINER_WALTER_4] =
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

[TRAINER_WALTER_5] =
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

[TRAINER_VANESSA] =
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

[TRAINER_MARCEL] =
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

[TRAINER_CRISTIN_1] =
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

[TRAINER_CRISTIN_2] =
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

[TRAINER_CRISTIN_3] =
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

[TRAINER_CRISTIN_4] =
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

[TRAINER_CRISTIN_5] =
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

//Mt. Pyre
[TRAINER_MARK] =
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

[TRAINER_LEAH] =
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

[TRAINER_ZANDER] =
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

[TRAINER_DEZ_AND_LUKE] =
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

[TRAINER_KAYLA] =
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
[TRAINER_GABRIELLE_##Match]                                                                                         \
{                                                                                                                   \
    .trainerName = _("Gabrielle"),                                                                                  \
    POKEMON_BREEDER_F_INFO,                                                                                         \
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,                                                                              \
    .party = (const struct TrainerMon[]) {                                                                          \
        {                                                                                                           \
        POKEMON_BREEDER_MON(Level),                                                                                 \
        .species = Level < 40 ? SPECIES_SHUPPET : SPECIES_BANETTE,                                                  \
        .ability = ABILITY_CURSED_BODY,                                                                             \
        .moves = {MOVE_PHANTOM_FORCE, MOVE_SKITTER_SMACK, MOVE_MAGIC_COAT, MOVE_DESTINY_BOND},                      \
        .gender = TRAINER_MON_FEMALE                                                                                \
        },                                                                                                          \
        {                                                                                                           \
        POKEMON_BREEDER_MON(Level),                                                                                 \
        .species = Level < 42 ? SPECIES_RHYHORN : (Level < REMATCH_4_LEVEL_6 ? SPECIES_RHYDON : SPECIES_RHYPERIOR), \
        .ability = ABILITY_RECKLESS,                                                                                \
        .moves = {MOVE_DRILL_RUN, MOVE_ROCK_BLAST, MOVE_AQUA_TAIL, MOVE_SMART_STRIKE},                              \
        .gender = TRAINER_MON_FEMALE                                                                                \
        },                                                                                                          \
        {                                                                                                           \
        POKEMON_BREEDER_MON(Level),                                                                                 \
        .species = SPECIES_CORSOLA,                                                                                 \
        .ability = ABILITY_REGENERATOR,                                                                             \
        .moves = {MOVE_HYDRO_PUMP, MOVE_ROCK_BLAST, MOVE_AQUA_RING, MOVE_CAMOUFLAGE},                               \
        .gender = TRAINER_MON_FEMALE                                                                                \
        },                                                                                                          \
        {                                                                                                           \
        POKEMON_BREEDER_MON(Level),                                                                                 \
        .species = Level < 40 ? SPECIES_LOTAD : (Level < 42 ? SPECIES_LOMBRE : SPECIES_LUDICOLO),                   \
        .ability = ABILITY_OWN_TEMPO,                                                                               \
        .moves = {MOVE_CHILLING_WATER, MOVE_MAGICAL_LEAF, MOVE_DISARMING_VOICE, MOVE_TEETER_DANCE},                 \
        .gender = TRAINER_MON_FEMALE                                                                                \
        },                                                                                                          \
        {                                                                                                           \
        POKEMON_BREEDER_MON(Level),                                                                                 \
        .species = Level < 40 ? SPECIES_SEEDOT : (Level < 42 ? SPECIES_NUZLEAF : SPECIES_SHIFTRY),                  \
        .ability = ABILITY_PICKPOCKET,                                                                              \
        .moves = {MOVE_TRAILBLAZE, MOVE_FOUL_PLAY, MOVE_SPITE, MOVE_QUICK_ATTACK},                                  \
        .gender = TRAINER_MON_FEMALE                                                                                \
        },                                                                                                          \
        {                                                                                                           \
        POKEMON_BREEDER_MON(Level),                                                                                 \
        .species = Level < 40 ? SPECIES_IGGLYBUFF : (Level < 42 ? SPECIES_JIGGLYPUFF : SPECIES_WIGGLYTUFF),         \
        .ability = ABILITY_COMPETITIVE,                                                                             \
        .moves = {MOVE_ALLURING_VOICE, MOVE_DRAINING_KISS, MOVE_ECHOED_VOICE, MOVE_BOUNCE},                         \
        .gender = TRAINER_MON_FEMALE                                                                                \
        },                                                                                                          \
    },                                                                                                              \
}

GABRIELLE_BATTLE(1, 38),
GABRIELLE_BATTLE(2, 40),
GABRIELLE_BATTLE(3, 42),
GABRIELLE_BATTLE(4, REMATCH_4_LEVEL_6),
GABRIELLE_BATTLE(5, REMATCH_5_LEVEL_6),

[TRAINER_WILLIAM] =
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

[TRAINER_TASHA] =
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

[TRAINER_ATSUSHI] =
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

[TRAINER_VALERIE_1] =
{
    VALERIE_INFO,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        VALERIE_SABLEYE(43),
        }
    },
},

[TRAINER_VALERIE_2] =
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

[TRAINER_VALERIE_3] =
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

[TRAINER_VALERIE_4] =
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

[TRAINER_VALERIE_5] =
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

[TRAINER_CEDRIC] =
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

[TRAINER_GRUNT_MT_PYRE_1] =
{
    AQUA_GRUNT_M_INFO,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 43,
        .species = SPECIES_CORPHISH,
        }
    },
},

[TRAINER_GRUNT_MT_PYRE_2] =
{
    AQUA_GRUNT_M_INFO,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 43,
        .species = SPECIES_TENTACOOL,
        }
    },
},

[TRAINER_GRUNT_MT_PYRE_3] =
{
    AQUA_GRUNT_M_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 42,
        .species = SPECIES_CARVANHA,
        },
        {
        .lvl = 42,
        .species = SPECIES_WAILMER,
        }
    },
},

[TRAINER_GRUNT_MT_PYRE_4] =
{
    AQUA_GRUNT_F_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 42,
        .species = SPECIES_STARYU,
        },
        {
        .lvl = 42,
        .species = SPECIES_GOLDEEN,
        }
    },
},

//Route 123 (east)
#define CAMERON_INFO             \
    .trainerName = _("Cameron"), \
    PSYCHIC_M_INFO,              \
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE

[TRAINER_CAMERON_1] =
{
    CAMERON_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 35,
        .species = SPECIES_KADABRA,
        },
        {
        .lvl = 35,
        .species = SPECIES_SOLROCK,
        }
    },
},

[TRAINER_CAMERON_2] =
{
    CAMERON_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 39,
        .species = SPECIES_ALAKAZAM,
        IVS(1),
        },
        {
        .lvl = 39,
        .species = SPECIES_SOLROCK,
        IVS(1),
        }
    },
},

[TRAINER_CAMERON_3] =
{
    CAMERON_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 41,
        .species = SPECIES_ALAKAZAM,
        IVS(3),
        },
        {
        .lvl = 41,
        .species = SPECIES_SOLROCK,
        IVS(3),
        }
    },
},

[TRAINER_CAMERON_4] =
{
    CAMERON_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = REMATCH_4_LEVEL_2,
        .species = SPECIES_ALAKAZAM,
        IVS(4),
        },
        {
        .lvl = REMATCH_4_LEVEL_2,
        .species = SPECIES_SOLROCK,
        IVS(4),
        }
    },
},

[TRAINER_CAMERON_5] =
{
    CAMERON_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = REMATCH_5_LEVEL_2,
        .species = SPECIES_ALAKAZAM,
        IVS(5),
        },
        {
        .lvl = REMATCH_5_LEVEL_2,
        .species = SPECIES_SOLROCK,
        IVS(5),
        }
    },
},

[TRAINER_JONAS] =
{
    .trainerName = _("Jonas"),
    NINJA_BOY_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 36,
        .species = SPECIES_KOFFING,
        .moves = {MOVE_TOXIC, MOVE_THUNDER, MOVE_SELF_DESTRUCT, MOVE_SLUDGE_BOMB}
        }
    },
},

[TRAINER_KAYLEY] =
{
    .trainerName = _("Kayley"),
    PARASOL_LADY_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 36,
        .species = SPECIES_CASTFORM_NORMAL,
        .moves = {MOVE_SUNNY_DAY, MOVE_WEATHER_BALL, MOVE_FLAMETHROWER, MOVE_SOLAR_BEAM}
        }
    },
},

[TRAINER_KINDRA] =
{
    .trainerName = _("Kindra"),
    HEX_MANIAC_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 35,
        .species = SPECIES_DUSKULL,
        },
        {
        .lvl = 35,
        .species = SPECIES_SHUPPET,
        }
    },
},

[TRAINER_ED] =
{
    .trainerName = _("Ed"),
    COLLECTOR_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 35,
        .species = SPECIES_ZANGOOSE,
        },
        {
        .lvl = 35,
        .species = SPECIES_SEVIPER,
        }
    },
},

[TRAINER_WENDY] =
{
    .trainerName = _("Wendy"),
    ACE_TRAINER_F_INFO,
    .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_SETUP_FIRST_TURN,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 34,
        .species = SPECIES_MAWILE,
        IVS(12),
        .moves = {MOVE_FAIRY_WIND, MOVE_METAL_CLAW, MOVE_BATON_PASS, MOVE_IRON_DEFENSE}
        },
        {
        .lvl = 34,
        .species = SPECIES_ROSELIA,
        IVS(12),
        .moves = {MOVE_GIGA_DRAIN, MOVE_TOXIC_SPIKES, MOVE_GRASS_WHISTLE, MOVE_LEECH_SEED}
        },
        {
        .lvl = 34,
        .species = SPECIES_PELIPPER,
        IVS(12),
        .moves = {MOVE_FLY, MOVE_BRINE, MOVE_MIST, MOVE_PROTECT}
        }
    },
},

[TRAINER_BRAXTON] =
{
    .trainerName = _("Braxton"),
    ACE_TRAINER_M_INFO,
    .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .partySize = 5,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 32,
        .species = SPECIES_SWELLOW,
        IVS(12),
        .moves = {MOVE_AERIAL_ACE, MOVE_QUICK_ATTACK, MOVE_FOCUS_ENERGY, MOVE_ENDEAVOR}
        },
        {
        .lvl = 32,
        .species = SPECIES_TRAPINCH,
        IVS(12),
        .moves = {MOVE_BULLDOZE, MOVE_CRUNCH, MOVE_ROCK_SLIDE, MOVE_SAND_TOMB}
        },
        {
        .lvl = 32,
        .species = SPECIES_WAILMER,
        IVS(12),
        .moves = {MOVE_ROLLOUT, MOVE_WHIRLPOOL, MOVE_DIVE, MOVE_WATER_PULSE}
        },
        {
        .lvl = 32,
        .species = SPECIES_MAGNETON,
        IVS(12),
        .moves = {MOVE_THUNDERBOLT, MOVE_SUPERSONIC, MOVE_THUNDER_WAVE, MOVE_MIRROR_SHOT}
        },
        {
        .lvl = 32,
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

[TRAINER_FERNANDO_1] =
{
    FERNANDO_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 35,
        .species = SPECIES_MANECTRIC,
        },
        {
        .lvl = 35,
        .species = SPECIES_LOUDRED,
        }
    },
},

[TRAINER_FERNANDO_2] =
{
    FERNANDO_INFO,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 37,
        .species = SPECIES_ELECTRODE,
        IVS(1),
        },
        {
        .lvl = 37,
        .species = SPECIES_MANECTRIC,
        IVS(1),
        },
        {
        .lvl = 37,
        .species = SPECIES_LOUDRED,
        IVS(1),
        }
    },
},

[TRAINER_FERNANDO_3] =
{
    FERNANDO_INFO,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 39,
        .species = SPECIES_ELECTRODE,
        IVS(3),
        },
        {
        .lvl = 39,
        .species = SPECIES_MANECTRIC,
        IVS(3),
        },
        {
        .lvl = 39,
        .species = SPECIES_LOUDRED,
        IVS(3),
        }
    },
},

[TRAINER_FERNANDO_4] =
{
    FERNANDO_INFO,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = REMATCH_4_LEVEL_3,
        .species = SPECIES_ELECTRODE,
        IVS(4),
        },
        {
        .lvl = REMATCH_4_LEVEL_3,
        .species = SPECIES_MANECTRIC,
        IVS(4),
        },
        {
        .lvl = REMATCH_4_LEVEL_3,
        .species = SPECIES_EXPLOUD,
        IVS(4),
        }
    },
},

[TRAINER_FERNANDO_5] =
{
    FERNANDO_INFO,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = REMATCH_5_LEVEL_3,
        .species = SPECIES_ELECTRODE,
        IVS(5),
        },
        {
        .lvl = REMATCH_5_LEVEL_3,
        .species = SPECIES_MANECTRIC,
        IVS(5),
        },
        {
        .lvl = REMATCH_5_LEVEL_3,
        .species = SPECIES_EXPLOUD,
        IVS(5),
        }
    },
},

[TRAINER_ALBERTO] =
{
    .trainerName = _("Alberto"),
    BIRD_KEEPER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 35,
        .species = SPECIES_PELIPPER,
        },
        {
        .lvl = 35,
        .species = SPECIES_XATU,
        }
    },
},

#define JACKI_INFO             \
    .trainerName = _("Jacki"), \
    PSYCHIC_F_INFO,            \
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE

[TRAINER_JACKI_1] =
{
    JACKI_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 35,
        .species = SPECIES_KADABRA,
        },
        {
        .lvl = 35,
        .species = SPECIES_LUNATONE,
        }
    },
},

[TRAINER_JACKI_2] =
{
    JACKI_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 39,
        .species = SPECIES_ALAKAZAM,
        IVS(1),
        },
        {
        .lvl = 39,
        .species = SPECIES_LUNATONE,
        IVS(1),
        }
    },
},

[TRAINER_JACKI_3] =
{
    JACKI_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 41,
        .species = SPECIES_ALAKAZAM,
        IVS(3),
        },
        {
        .lvl = 41,
        .species = SPECIES_LUNATONE,
        IVS(3),
        }
    },
},

[TRAINER_JACKI_4] =
{
    JACKI_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = REMATCH_4_LEVEL_2,
        .species = SPECIES_ALAKAZAM,
        IVS(4),
        },
        {
        .lvl = REMATCH_4_LEVEL_2,
        .species = SPECIES_LUNATONE,
        IVS(4),
        }
    },
},

[TRAINER_JACKI_5] =
{
    JACKI_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = REMATCH_5_LEVEL_2,
        .species = SPECIES_ALAKAZAM,
        IVS(5),
        },
        {
        .lvl = REMATCH_5_LEVEL_2,
        .species = SPECIES_LUNATONE,
        IVS(5),
        }
    },
},

[TRAINER_FREDRICK] =
{
    .trainerName = _("Fredrick"),
    EXPERT_M_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 35,
        .species = SPECIES_HARIYAMA,
        IVS(12),
        },
        {
        .lvl = 35,
        .species = SPECIES_MACHOKE,
        IVS(12),
        }
    },
},

//Magma Hideout
[TRAINER_GRUNT_MAGMA_HIDEOUT_1] =
{
    MAGMA_GRUNT_M_INFO,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 42,
        .species = SPECIES_TORKOAL,
        }
    },
},

[TRAINER_GRUNT_MAGMA_HIDEOUT_2] =
{
    MAGMA_GRUNT_M_INFO,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 42,
        .species = SPECIES_PHANPY,
        }
    },
},

[TRAINER_GRUNT_MAGMA_HIDEOUT_3] =
{
    MAGMA_GRUNT_M_INFO,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 42,
        .species = SPECIES_NUMEL,
        }
    },
},

[TRAINER_GRUNT_MAGMA_HIDEOUT_4] =
{
    MAGMA_GRUNT_M_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 41,
        .species = SPECIES_BALTOY,
        },
        {
        .lvl = 41,
        .species = SPECIES_SLUGMA,
        }
    },
},

[TRAINER_GRUNT_MAGMA_HIDEOUT_5] =
{
    MAGMA_GRUNT_M_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 41,
        .species = SPECIES_BALTOY,
        },
        {
        .lvl = 41,
        .species = SPECIES_HOUNDOUR,
        }
    },
},

[TRAINER_GRUNT_MAGMA_HIDEOUT_6] =
{
    MAGMA_GRUNT_M_INFO,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 42,
        .species = SPECIES_SANDSHREW,
        }
    },
},

[TRAINER_GRUNT_MAGMA_HIDEOUT_7] =
{
    MAGMA_GRUNT_M_INFO,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 42,
        .species = SPECIES_NUMEL,
        }
    },
},

[TRAINER_GRUNT_MAGMA_HIDEOUT_8] =
{
    MAGMA_GRUNT_M_INFO,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 42,
        .species = SPECIES_HOUNDOUR,
        }
    },
},

[TRAINER_GRUNT_MAGMA_HIDEOUT_9] =
{
    MAGMA_GRUNT_M_INFO,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 42,
        .species = SPECIES_PHANPY,
        }
    },
},

[TRAINER_GRUNT_MAGMA_HIDEOUT_10] =
{
    MAGMA_GRUNT_M_INFO,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 42,
        .species = SPECIES_SANDSHREW,
        }
    },
},

[TRAINER_GRUNT_MAGMA_HIDEOUT_11] =
{
    MAGMA_GRUNT_M_INFO,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 42,
        .species = SPECIES_BALTOY,
        }
    },
},

[TRAINER_GRUNT_MAGMA_HIDEOUT_12] =
{
    MAGMA_GRUNT_M_INFO,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 42,
        .species = SPECIES_NUMEL,
        }
    },
},

[TRAINER_GRUNT_MAGMA_HIDEOUT_13] =
{
    MAGMA_GRUNT_M_INFO,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 42,
        .species = SPECIES_SLUGMA,
        }
    },
},

[TRAINER_GRUNT_MAGMA_HIDEOUT_14] =
{
    MAGMA_GRUNT_F_INFO,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 42,
        .species = SPECIES_VULPIX,
        }
    },
},

[TRAINER_GRUNT_MAGMA_HIDEOUT_15] =
{
    MAGMA_GRUNT_F_INFO,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 42,
        .species = SPECIES_VULPIX,
        }
    },
},

[TRAINER_GRUNT_MAGMA_HIDEOUT_16] =
{
    MAGMA_GRUNT_F_INFO,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 42,
        .species = SPECIES_VULPIX,
        }
    },
},

[TRAINER_TABITHA_MAGMA_HIDEOUT] =
{
    TABITHA_INFO,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        TABITHA_PHANPY(50),
        IVS(9),
        },
        {
        TABITHA_SLUGMA(50),
        IVS(9),
        },
        {
        TABITHA_HOUNDOUR(52),
        IVS(9),
        }
    },
},

[TRAINER_MAXIE_MAGMA_HIDEOUT] =
{
    MAXIE_INFO,
    .items = {ITEM_SUPER_POTION, ITEM_SUPER_POTION, ITEM_NONE, ITEM_NONE},
    .partySize = 4,
    .party = (const struct TrainerMon[]) {
        MAXIE_PHANPY(51),
        MAXIE_SANDSHREW(52),
        MAXIE_BALTOY(52),
        {
        HUMPHREY(53),
        }
    },
},

//Aqua Hideout
[TRAINER_GRUNT_AQUA_HIDEOUT_1] =
{
    AQUA_GRUNT_M_INFO,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 43,
        .species = SPECIES_TENTACOOL,
        }
    },
},

[TRAINER_GRUNT_AQUA_HIDEOUT_2] =
{
    AQUA_GRUNT_M_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 42,
        .species = SPECIES_CORPHISH,
        },
        {
        .lvl = 42,
        .species = SPECIES_CARVANHA,
        }
    },
},

[TRAINER_GRUNT_AQUA_HIDEOUT_3] =
{
    AQUA_GRUNT_M_INFO,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 43,
        .species = SPECIES_WAILMER,
        }
    },
},

[TRAINER_GRUNT_AQUA_HIDEOUT_4] =
{
    AQUA_GRUNT_M_INFO,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 43,
        .species = SPECIES_CLAMPERL,
        }
    },
},

[TRAINER_GRUNT_AQUA_HIDEOUT_5] =
{
    AQUA_GRUNT_F_INFO,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 43,
        .species = SPECIES_STARYU,
        }
    },
},

[TRAINER_GRUNT_AQUA_HIDEOUT_6] =
{
    AQUA_GRUNT_F_INFO,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 43,
        .species = SPECIES_GOLDEEN,
        }
    },
},

[TRAINER_GRUNT_AQUA_HIDEOUT_7] =
{
    AQUA_GRUNT_F_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 42,
        .species = SPECIES_STARYU,
        },
        {
        .lvl = 42,
        .species = SPECIES_GOLDEEN,
        }
    },
},

[TRAINER_GRUNT_AQUA_HIDEOUT_8] =
{
    AQUA_GRUNT_M_INFO,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 43,
        .species = SPECIES_CARVANHA,
        }
    },
},

[TRAINER_MATT_AQUA_HIDEOUT] =
{
    MATT_INFO,
    .items = {ITEM_SUPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 52,
        .species = SPECIES_TENTACRUEL,
        IVS(6),
        },
        {
        .lvl = 52,
        .species = SPECIES_CRAWDAUNT,
        IVS(6),
        },
        {
        .lvl = 54,
        .species = SPECIES_HUNTAIL,
        IVS(6),
        }
    },
},

//Route 124
[TRAINER_GRACE] =
{
    .trainerName = _("Grace"),
    SWIMMER_F_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 38,
        .species = SPECIES_AZUMARILL,
        }
    },
},

[TRAINER_DECLAN] =
{
    .trainerName = _("Declan"),
    SWIMMER_M_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 38,
        .species = SPECIES_GYARADOS,
        }
    },
},

#define LILA_AND_ROY_INFO           \
    .trainerName = _("Lila & Roy"), \
    SIS_AND_BRO_INFO,               \
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE

[TRAINER_LILA_AND_ROY_1] =
{
    LILA_AND_ROY_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 38,
        .species = SPECIES_CHINCHOU,
        },
        {
        .lvl = 36,
        .species = SPECIES_HORSEA,
        }
    },
},

[TRAINER_LILA_AND_ROY_2] =
{
    LILA_AND_ROY_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 42,
        .species = SPECIES_LANTURN,
        },
        {
        .lvl = 40,
        .species = SPECIES_SEADRA,
        }
    },
},

[TRAINER_LILA_AND_ROY_3] =
{
    LILA_AND_ROY_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 45,
        .species = SPECIES_LANTURN,
        },
        {
        .lvl = 43,
        .species = SPECIES_SEADRA,
        }
    },
},

[TRAINER_LILA_AND_ROY_4] =
{
    LILA_AND_ROY_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = REMATCH_4_LEVEL_1,
        .species = SPECIES_LANTURN,
        },
        {
        .lvl = REMATCH_4_LEVEL_3,
        .species = SPECIES_SEADRA,
        }
    },
},

[TRAINER_LILA_AND_ROY_5] =
{
    LILA_AND_ROY_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = REMATCH_5_LEVEL_1,
        .species = SPECIES_LANTURN,
        },
        {
        .lvl = REMATCH_5_LEVEL_3,
        .species = SPECIES_KINGDRA,
        }
    },
},

[TRAINER_SPENCER] =
{
    .trainerName = _("Spencer"),
    SWIMMER_M_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 37,
        .species = SPECIES_TENTACRUEL,
        },
        {
        .lvl = 37,
        .species = SPECIES_PELIPPER,
        }
    },
},

#define JENNY_INFO             \
    .trainerName = _("Jenny"), \
    SWIMMER_F_INFO,            \
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE

[TRAINER_JENNY_1] =
{
    JENNY_INFO,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 38,
        .species = SPECIES_WAILMER,
        }
    },
},

[TRAINER_JENNY_2] =
{
    JENNY_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 42,
        .species = SPECIES_STARYU,
        },
        {
        .lvl = 42,
        .species = SPECIES_WAILORD,
        }
    },
},

[TRAINER_JENNY_3] =
{
    JENNY_INFO,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 43,
        .species = SPECIES_LUVDISC,
        },
        {
        .lvl = 43,
        .species = SPECIES_STARYU,
        },
        {
        .lvl = 43,
        .species = SPECIES_WAILORD,
        }
    },
},

[TRAINER_JENNY_4] =
{
    JENNY_INFO,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = REMATCH_4_LEVEL_3,
        .species = SPECIES_LUVDISC,
        },
        {
        .lvl = REMATCH_4_LEVEL_3,
        .species = SPECIES_STARYU,
        },
        {
        .lvl = REMATCH_4_LEVEL_3,
        .species = SPECIES_WAILORD,
        }
    },
},

[TRAINER_JENNY_5] =
{
    JENNY_INFO,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = REMATCH_5_LEVEL_3,
        .species = SPECIES_LUVDISC,
        },
        {
        .lvl = REMATCH_5_LEVEL_3,
        .species = SPECIES_STARMIE,
        },
        {
        .lvl = REMATCH_5_LEVEL_3,
        .species = SPECIES_WAILORD,
        }
    },
},

[TRAINER_CHAD] =
{
    .trainerName = _("Chad"),
    SWIMMER_M_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 37,
        .species = SPECIES_TENTACRUEL,
        },
        {
        .lvl = 37,
        .species = SPECIES_WAILMER,
        }
    },
},

[TRAINER_ISABELLA] =
{
    .trainerName = _("Isabella"),
    TRIATHLETE_F_SWIMMING_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        TRIATHLETE_MON(38, 0),
        .species = SPECIES_STARMIE,
        }
    },
},

[TRAINER_ROLAND] =
{
    .trainerName = _("Roland"),
    SWIMMER_M_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 38,
        .species = SPECIES_SHARPEDO,
        }
    },
},

//Route 125
#define ERNEST_INFO             \
    .trainerName = _("Ernest"), \
    SAILOR_INFO,                \
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE

[TRAINER_ERNEST_1] =
{
    ERNEST_INFO,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 36,
        .species = SPECIES_PELIPPER,
        },
        {
        .lvl = 36,
        .species = SPECIES_WAILMER,
        },
        {
        .lvl = 36,
        .species = SPECIES_MACHOKE,
        }
    },
},

[TRAINER_ERNEST_2] =
{
    ERNEST_INFO,
    .partySize = 4,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 40,
        .species = SPECIES_TENTACRUEL,
        IVS(1),
        },
        {
        .lvl = 40,
        .species = SPECIES_PELIPPER,
        IVS(1),
        },
        {
        .lvl = 40,
        .species = SPECIES_WAILMER,
        IVS(1),
        },
        {
        .lvl = 40,
        .species = SPECIES_MACHOKE,
        IVS(1),
        }
    },
},

[TRAINER_ERNEST_3] =
{
    ERNEST_INFO,
    .partySize = 4,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 42,
        .species = SPECIES_TENTACRUEL,
        IVS(2),
        },
        {
        .lvl = 42,
        .species = SPECIES_PELIPPER,
        IVS(2),
        },
        {
        .lvl = 42,
        .species = SPECIES_WAILORD,
        IVS(2),
        },
        {
        .lvl = 42,
        .species = SPECIES_MACHOKE,
        IVS(2),
        }
    },
},

[TRAINER_ERNEST_4] =
{
    ERNEST_INFO,
    .partySize = 4,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = REMATCH_4_LEVEL_4,
        .species = SPECIES_TENTACRUEL,
        IVS(4),
        },
        {
        .lvl = REMATCH_4_LEVEL_4,
        .species = SPECIES_PELIPPER,
        IVS(4),
        },
        {
        .lvl = REMATCH_4_LEVEL_4,
        .species = SPECIES_WAILORD,
        IVS(4),
        },
        {
        .lvl = REMATCH_4_LEVEL_4,
        .species = SPECIES_MACHOKE,
        IVS(4),
        }
    },
},

[TRAINER_ERNEST_5] =
{
    ERNEST_INFO,
    .partySize = 4,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = REMATCH_5_LEVEL_4,
        .species = SPECIES_TENTACRUEL,
        IVS(5),
        },
        {
        .lvl = REMATCH_5_LEVEL_4,
        .species = SPECIES_PELIPPER,
        IVS(5),
        },
        {
        .lvl = REMATCH_5_LEVEL_4,
        .species = SPECIES_WAILORD,
        IVS(5),
        },
        {
        .lvl = REMATCH_5_LEVEL_4,
        .species = SPECIES_MACHAMP,
        IVS(5),
        }
    },
},

[TRAINER_NOLEN] =
{
    .trainerName = _("Nolen"),
    SWIMMER_M_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 38,
        .species = SPECIES_TENTACRUEL,
        }
    },
},

[TRAINER_SHARON] =
{
    .trainerName = _("Sharon"),
    SWIMMER_F_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 38,
        .species = SPECIES_SEAKING,
        }
    },
},

[TRAINER_TANYA] =
{
    .trainerName = _("Tanya"),
    SWIMMER_F_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 38,
        .species = SPECIES_LUVDISC,
        }
    },
},

[TRAINER_PRESLEY] =
{
    .trainerName = _("Presley"),
    BIRD_KEEPER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 37,
        .species = SPECIES_TROPIUS,
        },
        {
        .lvl = 37,
        .species = SPECIES_XATU,
        }
    },
},

[TRAINER_AURON] =
{
    .trainerName = _("Auron"),
    EXPERT_M_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 37,
        .species = SPECIES_MANECTRIC,
        },
        {
        .lvl = 37,
        .species = SPECIES_MACHAMP,
        }
    },
},

[TRAINER_STAN] =
{
    .trainerName = _("Stan"),
    SWIMMER_M_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 37,
        .species = SPECIES_SEADRA,
        }
    },
},

[TRAINER_KIM_AND_IRIS] =
{
    .trainerName = _("Kim & Iris"),
    TEAMMATES_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 36,
        .species = SPECIES_CAMERUPT,
        .moves = {MOVE_FLAMETHROWER, MOVE_BULLDOZE, MOVE_REST, MOVE_CURSE}
        },
        {
        .lvl = 38,
        .species = SPECIES_ALTARIA,
        .moves = {MOVE_DRAGON_PULSE, MOVE_AERIAL_ACE, MOVE_SAFEGUARD, MOVE_COTTON_GUARD}
        }
    },
},

//Mossdeep Gym
[TRAINER_PRESTON] =
{
    .trainerName = _("Preston"),
    PSYCHIC_M_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 40,
        .species = SPECIES_GALLADE,
        IVS(12),
        }
    },
},

[TRAINER_MAURA] =
{
    .trainerName = _("Maura"),
    PSYCHIC_F_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 40,
        .species = SPECIES_ALAKAZAM,
        IVS(12),
        }
    },
},

[TRAINER_SAMANTHA] =
{
    .trainerName = _("Samantha"),
    PSYCHIC_F_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 40,
        .species = SPECIES_XATU,
        IVS(12),
        }
    },
},

[TRAINER_BLAKE] =
{
    .trainerName = _("Blake"),
    PSYCHIC_M_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 40,
        .species = SPECIES_CLAYDOL,
        IVS(12),
        }
    },
},

[TRAINER_MACEY] =
{
    .trainerName = _("Macey"),
    PSYCHIC_F_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 40,
        .species = SPECIES_STARMIE,
        }
    },
},

[TRAINER_CLIFFORD] =
{
    .trainerName = _("Clifford"),
    GENTLEMAN_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 40,
        .species = SPECIES_GIRAFARIG,
        }
    },
},

[TRAINER_NICHOLAS] =
{
    .trainerName = _("Nicholas"),
    PSYCHIC_M_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 40,
        .species = SPECIES_WOBBUFFET,
        }
    },
},

[TRAINER_NATE] =
{
    .trainerName = _("Nate"),
    GENTLEMAN_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 40,
        .species = SPECIES_GRUMPIG,
        IVS(12),
        }
    },
},

[TRAINER_VIRGIL] =
{
    .trainerName = _("Virgil"),
    PSYCHIC_M_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 40,
        .species = SPECIES_METANG,
        IVS(12),
        }
    },
},

[TRAINER_SYLVIA] =
{
    .trainerName = _("Sylvia"),
    HEX_MANIAC_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 40,
        .species = SPECIES_MEDICHAM,
        IVS(12),
        }
    },
},

[TRAINER_HANNAH] =
{
    .trainerName = _("Hannah"),
    PSYCHIC_F_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 40,
        .species = SPECIES_GARDEVOIR,
        IVS(12),
        }
    },
},

[TRAINER_KATHLEEN] =
{
    .trainerName = _("Kathleen"),
    HEX_MANIAC_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 40,
        .species = SPECIES_CHIMECHO,
        IVS(12),
        }
    },
},

//Space Center
[TRAINER_GRUNT_SPACE_CENTER_1] =
{
    MAGMA_GRUNT_M_INFO,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 44,
        .species = SPECIES_NUMEL,
        }
    },
},

[TRAINER_GRUNT_SPACE_CENTER_2] =
{
    MAGMA_GRUNT_F_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 43,
        .species = SPECIES_HOUNDOUR,
        },
        {
        .lvl = 43,
        .species = SPECIES_VULPIX,
        }
    },
},

[TRAINER_GRUNT_SPACE_CENTER_3] =
{
    MAGMA_GRUNT_M_INFO,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 44,
        .species = SPECIES_PHANPY,
        }
    },
},

[TRAINER_GRUNT_SPACE_CENTER_4] =
{
    MAGMA_GRUNT_M_INFO,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 44,
        .species = SPECIES_MAGCARGO,
        }
    },
},

[TRAINER_GRUNT_SPACE_CENTER_5] =
{
    MAGMA_GRUNT_M_INFO,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 44,
        .species = SPECIES_TORKOAL,
        }
    },
},

[TRAINER_GRUNT_SPACE_CENTER_6] =
{
    MAGMA_GRUNT_M_INFO,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 44,
        .species = SPECIES_CLAYDOL,
        }
    },
},

[TRAINER_COURTNEY_SPACE_CENTER] =
{
    COURTNEY_INFO,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 55,
        .species = SPECIES_SANDSLASH,
        IVS(12),
        },
        {
        .lvl = 55,
        .species = SPECIES_TORKOAL,
        IVS(12),
        },
        {
        .lvl = 57,
        .species = SPECIES_NINETALES,
        IVS(12),
        }
    },
},

[TRAINER_TABITHA_SPACE_CENTER] =
{
    TABITHA_INFO,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        TABITHA_PHANPY(55),
        IVS(12),
        },
        {
        TABITHA_SLUGMA(55),
        IVS(12),
        },
        {
        TABITHA_HOUNDOUR(57),
        IVS(12),
        }
    },
},

[TRAINER_MAXIE_SPACE_CENTER] =
{
    MAXIE_INFO,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        MAXIE_SANDSHREW(57),
        MAXIE_BALTOY(58),
        {
        HUMPHREY(60),
        .heldItem = ITEM_CAMERUPTITE,
        }
    },
},

//Trick House 6
[TRAINER_SOPHIA] =
{
    .trainerName = _("Sophia"),
    POKEMON_RANGER_F_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 40,
        .species = SPECIES_ALTARIA,
        IVS(6),
        },
        {
        .lvl = 40,
        .species = SPECIES_ROSELIA,
        IVS(6),
        }
    },
},

[TRAINER_SEBASTIAN] =
{
    .trainerName = _("Sebastian"),
    POKEMON_RANGER_M_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 41,
        .species = SPECIES_CACTURNE,
        IVS(6),
        }
    },
},

[TRAINER_BENNY] =
{
    .trainerName = _("Benny"),
    BIRD_KEEPER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 39,
        .species = SPECIES_SWELLOW,
        },
        {
        .lvl = 39,
        .species = SPECIES_PELIPPER,
        },
        {
        .lvl = 39,
        .species = SPECIES_XATU,
        }
    },
},

//Route 127
[TRAINER_AIDAN] =
{
    .trainerName = _("Aidan"),
    BIRD_KEEPER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 41,
        .species = SPECIES_SWELLOW,
        },
        {
        .lvl = 41,
        .species = SPECIES_SKARMORY,
        }
    },
},

[TRAINER_ATHENA] =
{
    .trainerName = _("Athena"),
    ACE_TRAINER_F_INFO,
    .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 41,
        .species = SPECIES_MANECTRIC,
        IVS(12),
        .moves = {MOVE_THUNDER, MOVE_THUNDER_WAVE, MOVE_QUICK_ATTACK, MOVE_NONE}
        },
        {
        .lvl = 41,
        .species = SPECIES_LINOONE,
        IVS(12),
        .moves = {MOVE_SURF, MOVE_THIEF, MOVE_NONE, MOVE_NONE}
        }
    },
},

[TRAINER_JONAH] =
{
    .trainerName = _("Jonah"),
    FISHERMAN_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 40,
        .species = SPECIES_WAILORD,
        },
        {
        .lvl = 40,
        .species = SPECIES_TENTACRUEL,
        },
        {
        .lvl = 40,
        .species = SPECIES_SHARPEDO,
        }
    },
},

[TRAINER_ROGER] =
{
    .trainerName = _("Roger"),
    FISHERMAN_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 40,
        .species = SPECIES_GYARADOS,
        },
        {
        .lvl = 40,
        .species = SPECIES_LUVDISC,
        },
        {
        .lvl = 40,
        .species = SPECIES_GYARADOS,
        }
    },
},

[TRAINER_HENRY] =
{
    .trainerName = _("Henry"),
    FISHERMAN_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 41,
        .species = SPECIES_SHARPEDO,
        },
        {
        .lvl = 41,
        .species = SPECIES_TENTACRUEL,
        }
    },
},

[TRAINER_CAMDEN] =
{
    .trainerName = _("Camden"),
    TRIATHLETE_M_SWIMMING_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        TRIATHLETE_MON(41, 0),
        .species = SPECIES_LANTURN,
        },
        {
        TRIATHLETE_MON(41, 0),
        .species = SPECIES_STARMIE,
        }
    },
},

#define KOJI_INFO             \
    .trainerName = _("Koji"), \
    BLACK_BELT_INFO,          \
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE

[TRAINER_KOJI_1] =
{
    KOJI_INFO,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 42,
        .species = SPECIES_MEDICHAM,
        }
    },
},

[TRAINER_KOJI_2] =
{
    KOJI_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 44,
        .species = SPECIES_MACHOKE,
        IVS(1),
        },
        {
        .lvl = 44,
        .species = SPECIES_MEDICHAM,
        IVS(1),
        }
    },
},

[TRAINER_KOJI_3] =
{
    KOJI_INFO,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 46,
        .species = SPECIES_MAKUHITA,
        IVS(2),
        },
        {
        .lvl = 46,
        .species = SPECIES_MACHOKE,
        IVS(2),
        },
        {
        .lvl = 46,
        .species = SPECIES_MEDICHAM,
        IVS(2),
        }
    },
},

[TRAINER_KOJI_4] =
{
    KOJI_INFO,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 48,
        .species = SPECIES_HARIYAMA,
        IVS(3),
        },
        {
        .lvl = 48,
        .species = SPECIES_MACHOKE,
        IVS(3),
        },
        {
        .lvl = 48,
        .species = SPECIES_MEDICHAM,
        IVS(3),
        }
    },
},

[TRAINER_KOJI_5] =
{
    KOJI_INFO,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = REMATCH_5_LEVEL_3,
        .species = SPECIES_HARIYAMA,
        IVS(5),
        },
        {
        .lvl = REMATCH_5_LEVEL_3,
        .species = SPECIES_MACHAMP,
        IVS(5),
        },
        {
        .lvl = REMATCH_5_LEVEL_3,
        .species = SPECIES_MEDICHAM,
        IVS(5),
        }
    },
},

[TRAINER_DONNY] =
{
    .trainerName = _("Donny"),
    TRIATHLETE_F_SWIMMING_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        TRIATHLETE_MON(41, 0),
        .species = SPECIES_PELIPPER,
        },
        {
        TRIATHLETE_MON(41, 0),
        .species = SPECIES_STARMIE,
        }
    },
},

//Route 128
[TRAINER_RUBEN] =
{
    .trainerName = _("Ruben"),
    ACE_TRAINER_M_INFO,
    .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 41,
        .species = SPECIES_SHIFTRY,
        IVS(12),
        },
        {
        .lvl = 41,
        .species = SPECIES_PROBOPASS,
        IVS(12),
        }
    },
},

[TRAINER_ALEXA] =
{
    .trainerName = _("Alexa"),
    ACE_TRAINER_F_INFO,
    .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 41,
        .species = SPECIES_BELLOSSOM,
        IVS(12),
        },
        {
        .lvl = 41,
        .species = SPECIES_AZUMARILL,
        IVS(12),
        }
    },
},

[TRAINER_WAYNE] =
{
    .trainerName = _("Wayne"),
    FISHERMAN_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 40,
        .species = SPECIES_LANTURN,
        },
        {
        .lvl = 40,
        .species = SPECIES_TENTACRUEL,
        },
        {
        .lvl = 40,
        .species = SPECIES_WAILORD,
        }
    },
},

#define ISAIAH_INFO             \
    .trainerName = _("Isaiah"), \
    TRIATHLETE_M_SWIMMING_INFO, \
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE

[TRAINER_ISAIAH_1] =
{
    ISAIAH_INFO,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        TRIATHLETE_MON(42, 0),
        .species = SPECIES_CHINCHOU,
        }
    },
},

[TRAINER_ISAIAH_2] =
{
    ISAIAH_INFO,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        TRIATHLETE_MON(44, 1),
        .species = SPECIES_LANTURN,
        }
    },
},

[TRAINER_ISAIAH_3] =
{
    ISAIAH_INFO,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        TRIATHLETE_MON(46, 2),
        .species = SPECIES_LANTURN,
        }
    },
},

[TRAINER_ISAIAH_4] =
{
    ISAIAH_INFO,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        TRIATHLETE_MON(48, 3),
        .species = SPECIES_LANTURN,
        }
    },
},

[TRAINER_ISAIAH_5] =
{
    ISAIAH_INFO,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        TRIATHLETE_MON(REMATCH_5_LEVEL_1, 4),
        .species = SPECIES_LANTURN,
        }
    },
},

#define KATELYN_INFO             \
    .trainerName = _("Katelyn"), \
    TRIATHLETE_F_SWIMMING_INFO,  \
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE

[TRAINER_KATELYN_1] =
{
    KATELYN_INFO,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        TRIATHLETE_MON(42, 0),
        .species = SPECIES_STARYU,
        }
    },
},

[TRAINER_KATELYN_2] =
{
    KATELYN_INFO,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 44,
        .species = SPECIES_STARMIE,
        IVS(1),
        }
    },
},

[TRAINER_KATELYN_3] =
{
    KATELYN_INFO,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 46,
        .species = SPECIES_STARMIE,
        IVS(2),
        }
    },
},

[TRAINER_KATELYN_4] =
{
    KATELYN_INFO,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 48,
        .species = SPECIES_STARMIE,
        IVS(3),
        }
    },
},

[TRAINER_KATELYN_5] =
{
    KATELYN_INFO,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = REMATCH_5_LEVEL_1,
        .species = SPECIES_STARMIE,
        IVS(5),
        }
    },
},

[TRAINER_CARLEE] =
{
    .trainerName = _("Carlee"),
    SWIMMER_F_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 42,
        .species = SPECIES_SEAKING,
        }
    },
},

[TRAINER_HARRISON] =
{
    .trainerName = _("Harrison"),
    SWIMMER_M_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 42,
        .species = SPECIES_TENTACRUEL,
        }
    },
},

//Seafloor Cavern
[TRAINER_GRUNT_SEAFLOOR_CAVERN_1] =
{
    AQUA_GRUNT_M_INFO,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 42,
        .species = SPECIES_WAILORD,
        }
    },
},

[TRAINER_GRUNT_SEAFLOOR_CAVERN_2] =
{
    AQUA_GRUNT_M_INFO,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 42,
        .species = SPECIES_TENTACRUEL,
        }
    },
},

[TRAINER_GRUNT_SEAFLOOR_CAVERN_3] =
{
    AQUA_GRUNT_M_INFO,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 42,
        .species = SPECIES_CRAWDAUNT,
        }
    },
},

[TRAINER_GRUNT_SEAFLOOR_CAVERN_4] =
{
    AQUA_GRUNT_F_INFO,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 42,
        .species = SPECIES_SEAKING,
        }
    },
},

[TRAINER_MATT_SEAFLOOR_CAVERN] =
{
    MATT_INFO,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 42,
        .species = SPECIES_TENTACRUEL,
        IVS(6),
        },
        {
        .lvl = 42,
        .species = SPECIES_CRAWDAUNT,
        IVS(6),
        },
        {
        .lvl = 43,
        .species = SPECIES_HUNTAIL,
        IVS(6),
        }
    },
},

[TRAINER_SHELLY_SEAFLOOR_CAVERN] =
{
    SHELLY_INFO,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        SHELLY_STARYU(42),
        IVS(12),
        },
        {
        SHELLY_GOLDEEN(42),
        IVS(12),
        },
        {
        SHELLY_GOREBYSS(43),
        IVS(12),
        }
    },
},

[TRAINER_ARCHIE_SEAFLOOR_CAVERN] =
{
    ARCHIE_INFO,
    .items = {ITEM_SUPER_POTION, ITEM_SUPER_POTION, ITEM_NONE, ITEM_NONE},
    .partySize = 4,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 43,
        .species = SPECIES_STARMIE,
        IVS(18),
        },
        {
        .lvl = 43,
        .species = SPECIES_TENTACRUEL,
        IVS(18),
        },
        {
        .lvl = 44,
        .species = SPECIES_WAILORD,
        IVS(18),
        },
        {
        .lvl = 45,
        .species = SPECIES_SHARPEDO,
        PERFECT_IVS,
        .heldItem = ITEM_SHARPEDONITE,
        }
    },
},

//Route 126
[TRAINER_LEONARDO] =
{
    .trainerName = _("Leonardo"),
    SWIMMER_M_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 42,
        .species = SPECIES_SHARPEDO,
        }
    },
},

[TRAINER_ISOBEL] =
{
    .trainerName = _("Isobel"),
    TRIATHLETE_F_SWIMMING_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        TRIATHLETE_MON(42, 0),
        .species = SPECIES_STARMIE,
        }
    },
},

[TRAINER_DEAN] =
{
    .trainerName = _("Dean"),
    SWIMMER_M_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 40,
        .species = SPECIES_TENTACRUEL,
        },
        {
        .lvl = 40,
        .species = SPECIES_PELIPPER,
        },
        {
        .lvl = 40,
        .species = SPECIES_SHARPEDO,
        }
    },
},

[TRAINER_NIKKI] =
{
    .trainerName = _("Nikki"),
    SWIMMER_F_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 41,
        .species = SPECIES_AZUMARILL,
        },
        {
        .lvl = 41,
        .species = SPECIES_SEALEO,
        }
    },
},

[TRAINER_BARRY] =
{
    .trainerName = _("Barry"),
    SWIMMER_M_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 42,
        .species = SPECIES_GYARADOS,
        }
    },
},

[TRAINER_SIENNA] =
{
    .trainerName = _("Sienna"),
    SWIMMER_F_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 41,
        .species = SPECIES_CORSOLA,
        },
        {
        .lvl = 41,
        .species = SPECIES_LUVDISC,
        }
    },
},

#define PABLO_INFO              \
    .trainerName = _("Pablo"),  \
    TRIATHLETE_M_SWIMMING_INFO, \
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE

[TRAINER_PABLO_1] =
{
    PABLO_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        TRIATHLETE_MON(41, 0),
        .species = SPECIES_CORPHISH,
        },
        {
        TRIATHLETE_MON(41, 0),
        .species = SPECIES_STARYU,
        }
    },
},

[TRAINER_PABLO_2] =
{
    PABLO_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 43,
        .species = SPECIES_CRAWDAUNT,
        IVS(1),
        },
        {
        .lvl = 43,
        .species = SPECIES_STARMIE,
        IVS(1),
        }
    },
},

[TRAINER_PABLO_3] =
{
    PABLO_INFO,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 45,
        .species = SPECIES_PELIPPER,
        IVS(2),
        },
        {
        .lvl = 45,
        .species = SPECIES_CRAWDAUNT,
        IVS(2),
        },
        {
        .lvl = 45,
        .species = SPECIES_STARMIE,
        IVS(2),
        }
    },
},

[TRAINER_PABLO_4] =
{
    PABLO_INFO,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 47,
        .species = SPECIES_PELIPPER,
        IVS(3),
        },
        {
        .lvl = 47,
        .species = SPECIES_CRAWDAUNT,
        IVS(3),
        },
        {
        .lvl = 47,
        .species = SPECIES_STARMIE,
        IVS(3),
        }
    },
},

[TRAINER_PABLO_5] =
{
    PABLO_INFO,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 49,
        .species = SPECIES_PELIPPER,
        IVS(4),
        },
        {
        .lvl = 49,
        .species = SPECIES_CRAWDAUNT,
        IVS(4),
        },
        {
        .lvl = 49,
        .species = SPECIES_STARMIE,
        IVS(4),
        }
    },
},

[TRAINER_BRENDA] =
{
    .trainerName = _("Brenda"),
    SWIMMER_F_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 42,
        .species = SPECIES_SEAKING,
        }
    },
},

//Route 129
[TRAINER_REED] =
{
    .trainerName = _("Reed"),
    SWIMMER_M_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 41,
        .species = SPECIES_SEALEO,
        },
        {
        .lvl = 41,
        .species = SPECIES_SHARPEDO,
        }
    },
},

[TRAINER_CHASE] =
{
    .trainerName = _("Chase"),
    TRIATHLETE_M_SWIMMING_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        TRIATHLETE_MON(41, 0),
        .species = SPECIES_STARMIE,
        },
        {
        TRIATHLETE_MON(41, 0),
        .species = SPECIES_PELIPPER,
        }
    },
},

[TRAINER_ALLISON] =
{
    .trainerName = _("Allison"),
    TRIATHLETE_F_SWIMMING_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        TRIATHLETE_MON(41, 0),
        .species = SPECIES_PELIPPER,
        },
        {
        TRIATHLETE_MON(41, 0),
        .species = SPECIES_STARMIE,
        }
    },
},

[TRAINER_CLARENCE] =
{
    .trainerName = _("Clarence"),
    SWIMMER_M_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 42,
        .species = SPECIES_SHARPEDO,
        }
    },
},

[TRAINER_TISHA] =
{
    .trainerName = _("Tisha"),
    SWIMMER_F_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 42,
        .species = SPECIES_LANTURN,
        }
    },
},

//Route 130
[TRAINER_RODNEY] =
{
    .trainerName = _("Rodney"),
    SWIMMER_M_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 42,
        .species = SPECIES_GYARADOS,
        }
    },
},

[TRAINER_KATIE] =
{
    .trainerName = _("Katie"),
    SWIMMER_F_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 41,
        .species = SPECIES_SEAKING,
        },
        {
        .lvl = 41,
        .species = SPECIES_SEALEO,
        }
    },
},

[TRAINER_SANTIAGO] =
{
    .trainerName = _("Santiago"),
    SWIMMER_M_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 41,
        .species = SPECIES_TENTACRUEL,
        },
        {
        .lvl = 41,
        .species = SPECIES_WAILORD,
        }
    },
},

//Route 131
[TRAINER_KEVIN] =
{
    .trainerName = _("Kevin"),
    SWIMMER_M_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 42,
        .species = SPECIES_SEALEO,
        }
    },
},

[TRAINER_TALIA] =
{
    .trainerName = _("Talia"),
    TRIATHLETE_F_SWIMMING_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        TRIATHLETE_MON(42, 0),
        .species = SPECIES_STARMIE,
        }
    },
},

[TRAINER_RICHARD] =
{
    .trainerName = _("Richard"),
    SWIMMER_M_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 42,
        .species = SPECIES_PELIPPER,
        }
    },
},

[TRAINER_KARA] =
{
    .trainerName = _("Kara"),
    SWIMMER_F_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 42,
        .species = SPECIES_SEAKING,
        }
    },
},

[TRAINER_HERMAN] =
{
    .trainerName = _("Herman"),
    SWIMMER_M_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 41,
        .species = SPECIES_PELIPPER,
        },
        {
        .lvl = 41,
        .species = SPECIES_TENTACRUEL,
        }
    },
},

[TRAINER_SUSIE] =
{
    .trainerName = _("Susie"),
    SWIMMER_F_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 42,
        .species = SPECIES_LUVDISC,
        }
    },
},

[TRAINER_RELI_AND_IAN] =
{
    .trainerName = _("Reli & Ian"),
    SIS_AND_BRO_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 42,
        .species = SPECIES_AZUMARILL,
        },
        {
        .lvl = 40,
        .species = SPECIES_PELIPPER,
        }
    },
},

//Route 132
[TRAINER_GILBERT] =
{
    .trainerName = _("Gilbert"),
    SWIMMER_M_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 42,
        .species = SPECIES_SHARPEDO,
        }
    },
},

[TRAINER_DANA] =
{
    .trainerName = _("Dana"),
    SWIMMER_F_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 42,
        .species = SPECIES_AZUMARILL,
        }
    },
},

[TRAINER_RONALD] =
{
    .trainerName = _("Ronald"),
    FISHERMAN_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 6,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 37,
        .species = SPECIES_GYARADOS,
        },
        {
        .lvl = 37,
        .species = SPECIES_GYARADOS,
        },
        {
        .lvl = 37,
        .species = SPECIES_GYARADOS,
        },
        {
        .lvl = 37,
        .species = SPECIES_GYARADOS,
        },
        {
        .lvl = 37,
        .species = SPECIES_GYARADOS,
        },
        {
        .lvl = 37,
        .species = SPECIES_GYARADOS,
        }
    },
},

[TRAINER_KIYO] =
{
    .trainerName = _("Kiyo"),
    BLACK_BELT_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 42,
        .species = SPECIES_HARIYAMA,
        IVS(12),
        }
    },
},

[TRAINER_PAXTON] =
{
    .trainerName = _("Paxton"),
    EXPERT_M_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 41,
        .species = SPECIES_SWELLOW,
        },
        {
        .lvl = 41,
        .species = SPECIES_BRELOOM,
        }
    },
},

[TRAINER_DARCY] =
{
    .trainerName = _("Darcy"),
    ACE_TRAINER_F_INFO,
    .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 41,
        .species = SPECIES_PELIPPER,
        },
        {
        .lvl = 41,
        .species = SPECIES_CAMERUPT,
        }
    },
},

[TRAINER_MAKAYLA] =
{
    .trainerName = _("Makayla"),
    EXPERT_F_INFO,
    .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 41,
        .species = SPECIES_ROSELIA,
        },
        {
        .lvl = 41,
        .species = SPECIES_MEDICHAM,
        }
    },
},

[TRAINER_JONATHAN] =
{
    .trainerName = _("Jonathan"),
    ACE_TRAINER_M_INFO,
    .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_SETUP_FIRST_TURN,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 41,
        .species = SPECIES_KECLEON,
        },
        {
        .lvl = 41,
        .species = SPECIES_EXPLOUD,
        }
    },
},

//Route 133
[TRAINER_LINDA] =
{
    .trainerName = _("Linda"),
    SWIMMER_F_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 41,
        .species = SPECIES_CORSOLA,
        },
        {
        .lvl = 41,
        .species = SPECIES_SEADRA,
        }
    },
},

[TRAINER_BECK] =
{
    .trainerName = _("Beck"),
    BIRD_KEEPER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 42,
        .species = SPECIES_BLAZIKEN,
        }
    },
},

[TRAINER_CONOR] =
{
    .trainerName = _("Conor"),
    EXPERT_M_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 41,
        .species = SPECIES_LANTURN,
        },
        {
        .lvl = 41,
        .species = SPECIES_HARIYAMA,
        IVS(24),
        }
    },
},

[TRAINER_MOLLIE] =
{
    .trainerName = _("Mollie"),
    EXPERT_F_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 41,
        .species = SPECIES_WHISCASH,
        },
        {
        .lvl = 41,
        .species = SPECIES_MEDICHAM,
        IVS(24),
        }
    },
},

[TRAINER_WARREN] =
{
    .trainerName = _("Warren"),
    ACE_TRAINER_M_INFO,
    .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 41,
        .species = SPECIES_GOLEM,
        IVS(12),
        },
        {
        .lvl = 41,
        .species = SPECIES_LUDICOLO,
        IVS(12),
        }
    },
},

[TRAINER_DEBRA] =
{
    .trainerName = _("Debra"),
    SWIMMER_F_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 42,
        .species = SPECIES_SEAKING,
        }
    },
},

[TRAINER_FRANKLIN] =
{
    .trainerName = _("Franklin"),
    SWIMMER_M_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 42,
        .species = SPECIES_SEALEO,
        }
    },
},

//Route 134
[TRAINER_LAUREL] =
{
    .trainerName = _("Laurel"),
    SWIMMER_F_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 41,
        .species = SPECIES_LUVDISC,
        },
        {
        .lvl = 41,
        .species = SPECIES_LUVDISC,
        }
    },
},

[TRAINER_JACK] =
{
    .trainerName = _("Jack"),
    SWIMMER_M_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 42,
        .species = SPECIES_GYARADOS,
        }
    },
},


[TRAINER_HITOSHI] =
{
    .trainerName = _("Hitoshi"),
    BLACK_BELT_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 41,
        .species = SPECIES_HARIYAMA,
        IVS(6),
        },
        {
        .lvl = 41,
        .species = SPECIES_MACHOKE,
        IVS(24),
        }
    },
},

[TRAINER_REYNA] =
{
    .trainerName = _("Reyna"),
    BATTLE_GIRL_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 41,
        .species = SPECIES_MEDICHAM,
        IVS(6),
        },
        {
        .lvl = 41,
        .species = SPECIES_HARIYAMA,
        IVS(24),
        }
    },
},

[TRAINER_HUDSON] =
{
    .trainerName = _("Hudson"),
    SAILOR_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 42,
        .species = SPECIES_WAILORD,
        }
    },
},

[TRAINER_AARON] =
{
    .trainerName = _("Aaron"),
    DRAGON_TAMER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 42,
        .species = SPECIES_SHELGON,
        PERFECT_IVS,
        .moves = {MOVE_DRAGON_CLAW, MOVE_ZEN_HEADBUTT, MOVE_CRUNCH, MOVE_SCARY_FACE}
        }
    },
},

[TRAINER_MARLEY] =
{
    .trainerName = _("Marley"),
    ACE_TRAINER_F_INFO,
    .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 42,
        .species = SPECIES_MANECTRIC,
        PERFECT_IVS,
        .moves = {MOVE_BITE, MOVE_ROAR, MOVE_THUNDER_WAVE, MOVE_THUNDERBOLT}
        }
    },
},

[TRAINER_ALEX] =
{
    .trainerName = _("Alex"),
    BIRD_KEEPER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 41,
        .species = SPECIES_XATU,
        IVS(18),
        },
        {
        .lvl = 41,
        .species = SPECIES_SWELLOW,
        IVS(18),
        }
    },
},

[TRAINER_KELVIN] =
{
    .trainerName = _("Kelvin"),
    SAILOR_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 41,
        .species = SPECIES_MACHOKE,
        IVS(18),
        },
        {
        .lvl = 41,
        .species = SPECIES_SEALEO,
        IVS(18),
        }
    },
},

//Sootopolis Gym
[TRAINER_CONNIE] =
{
    .trainerName = _("Connie"),
    BEAUTY_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 44,
        .species = SPECIES_SEAKING,
        IVS(12),
        }
    },
},

[TRAINER_ANDREA] =
{
    .trainerName = _("Andrea"),
    LASS_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 44,
        .species = SPECIES_LUVDISC,
        IVS(12),
        }
    },
},

[TRAINER_DAPHNE] =
{
    .trainerName = _("Daphne"),
    LADY_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        RICH_MON(43),
        .species = SPECIES_CORSOLA,
        IVS(12),
        .moves = {MOVE_WATER_PULSE, MOVE_ATTRACT, MOVE_POWER_GEM, MOVE_LIFE_DEW}
        },
        {
        RICH_MON(43),
        .species = SPECIES_LUVDISC,
        IVS(12),
        .moves = {MOVE_WATER_PULSE, MOVE_ATTRACT, MOVE_CAPTIVATE, MOVE_AQUA_RING}
        }
    },
},

[TRAINER_ANNIKA] =
{
    .trainerName = _("Annika"),
    POKE_FAN_F_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        POKE_FAN_MON(43),
        .species = SPECIES_MAGIKARP,
        IVS(12),
        .moves = {MOVE_HYDRO_PUMP, MOVE_BOUNCE, MOVE_FLAIL, MOVE_TACKLE}
        },
        {
        POKE_FAN_MON(43),
        .species = SPECIES_FEEBAS,
        IVS(12),
        .moves = {MOVE_WATER_PULSE, MOVE_FLAIL, MOVE_RETURN, MOVE_ATTRACT}
        }
    },
},

[TRAINER_TIFFANY] =
{
    .trainerName = _("Tiffany"),
    BEAUTY_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 43,
        .species = SPECIES_TENTACRUEL,
        IVS(12),
        },
        {
        .lvl = 43,
        .species = SPECIES_SHARPEDO,
        IVS(12),
        }
    },
},

[TRAINER_CRISSY] =
{
    .trainerName = _("Crissy"),
    LASS_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 43,
        .species = SPECIES_LANTURN,
        IVS(12),
        },
        {
        .lvl = 43,
        .species = SPECIES_WAILORD,
        IVS(12),
        }
    },
},

[TRAINER_BETHANY] =
{
    .trainerName = _("Bethany"),
    POKE_FAN_F_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        POKE_FAN_MON(42),
        .species = SPECIES_AZURILL,
        IVS(12),
        },
        {
        POKE_FAN_MON(42),
        .species = SPECIES_MARILL,
        IVS(12),
        },
        {
        POKE_FAN_MON(42),
        .species = SPECIES_AZUMARILL,
        IVS(12),
        }
    },
},

[TRAINER_OLIVIA] =
{
    .trainerName = _("Olivia"),
    BEAUTY_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 42,
        .species = SPECIES_CLAMPERL,
        IVS(12),
        .moves = {MOVE_WATER_PULSE, MOVE_WHIRLPOOL, MOVE_RAIN_DANCE, MOVE_IRON_DEFENSE}
        },
        {
        .lvl = 42,
        .species = SPECIES_CRAWDAUNT,
        IVS(12),
        .moves = {MOVE_WATER_PULSE, MOVE_NIGHT_SLASH, MOVE_PROTECT, MOVE_TAUNT}
        },
        {
        .lvl = 42,
        .species = SPECIES_LUDICOLO,
        IVS(12),
        .moves = {MOVE_WATER_PULSE, MOVE_GIGA_DRAIN, MOVE_NATURE_POWER, MOVE_TEETER_DANCE}
        }
    },
},

[TRAINER_BRIANNA] =
{
    .trainerName = _("Brianna"),
    LADY_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        RICH_MON(44),
        .species = SPECIES_MARSHTOMP,
        IVS(18),
        }
    },
},

[TRAINER_BRIDGET] =
{
    .trainerName = _("Bridget"),
    BEAUTY_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 44,
        .species = SPECIES_AZUMARILL,
        IVS(18),
        }
    },
},

//Trick House 7
[TRAINER_JOSHUA] =
{
    .trainerName = _("Joshua"),
    PSYCHIC_M_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 45,
        .species = SPECIES_ALAKAZAM,
        },
        {
        .lvl = 45,
        .species = SPECIES_SOLROCK,
        }
    },
},

[TRAINER_PATRICIA] =
{
    .trainerName = _("Patricia"),
    HEX_MANIAC_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 45,
        .species = SPECIES_BANETTE,
        },
        {
        .lvl = 45,
        .species = SPECIES_DUSCLOPS,
        }
    },
},

[TRAINER_MARIELA] =
{
    .trainerName = _("Mariela"),
    PSYCHIC_F_INFO,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 46,
        .species = SPECIES_CHIMECHO,
        }
    },
},

[TRAINER_EVERETT] =
{
    .trainerName = _("Everett"),
    GENTLEMAN_INFO,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 46,
        .species = SPECIES_WOBBUFFET,
        }
    },
},

[TRAINER_ALEXIS] =
{
    .trainerName = _("Alexis"),
    PSYCHIC_F_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 45,
        .species = SPECIES_GARDEVOIR,
        },
        {
        .lvl = 45,
        .species = SPECIES_XATU,
        }
    },
},

[TRAINER_ALVARO] =
{
    .trainerName = _("Alvaro"),
    PSYCHIC_M_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 45,
        .species = SPECIES_LUNATONE,
        },
        {
        .lvl = 45,
        .species = SPECIES_ALAKAZAM,
        }
    },
},

//Meteor Falls
#define JOHN_AND_JAY_INFO           \
    .trainerName = _("John & Jay"), \
    OLD_COUPLE_INFO,                \
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY

[TRAINER_JOHN_AND_JAY_1] =
{
    JOHN_AND_JAY_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 45,
        .species = SPECIES_MEDICHAM,
        IVS(24),
        .moves = {MOVE_ZEN_HEADBUTT, MOVE_HIGH_JUMP_KICK, MOVE_FIRE_PUNCH, MOVE_ICE_PUNCH}
        },
        {
        .lvl = 45,
        .species = SPECIES_HARIYAMA,
        IVS(24),
        .moves = {MOVE_CLOSE_COMBAT, MOVE_ROCK_SLIDE, MOVE_REST, MOVE_BELLY_DRUM}
        }
    },
},

[TRAINER_JOHN_AND_JAY_2] =
{
    JOHN_AND_JAY_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 48,
        .species = SPECIES_MEDICHAM,
        IVS(25),
        .moves = {MOVE_ZEN_HEADBUTT, MOVE_HIGH_JUMP_KICK, MOVE_FIRE_PUNCH, MOVE_ICE_PUNCH}
        },
        {
        .lvl = 48,
        .species = SPECIES_HARIYAMA,
        IVS(25),
        .moves = {MOVE_CLOSE_COMBAT, MOVE_ROCK_SLIDE, MOVE_REST, MOVE_BELLY_DRUM}
        }
    },
},

[TRAINER_JOHN_AND_JAY_3] =
{
    JOHN_AND_JAY_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 51,
        .species = SPECIES_MEDICHAM,
        IVS(26),
        .moves = {MOVE_ZEN_HEADBUTT, MOVE_HIGH_JUMP_KICK, MOVE_FIRE_PUNCH, MOVE_ICE_PUNCH}
        },
        {
        .lvl = 51,
        .species = SPECIES_HARIYAMA,
        IVS(26),
        .moves = {MOVE_CLOSE_COMBAT, MOVE_ROCK_SLIDE, MOVE_REST, MOVE_BELLY_DRUM}
        }
    },
},

[TRAINER_JOHN_AND_JAY_4] =
{
    JOHN_AND_JAY_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 54,
        .species = SPECIES_MEDICHAM,
        IVS(27),
        .moves = {MOVE_ZEN_HEADBUTT, MOVE_HIGH_JUMP_KICK, MOVE_FIRE_PUNCH, MOVE_ICE_PUNCH}
        },
        {
        .lvl = 54,
        .species = SPECIES_HARIYAMA,
        IVS(27),
        .moves = {MOVE_CLOSE_COMBAT, MOVE_ROCK_SLIDE, MOVE_REST, MOVE_BELLY_DRUM}
        }
    },
},

[TRAINER_JOHN_AND_JAY_5] =
{
    JOHN_AND_JAY_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 57,
        .species = SPECIES_MEDICHAM,
        IVS(29),
        .moves = {MOVE_ZEN_HEADBUTT, MOVE_HIGH_JUMP_KICK, MOVE_FIRE_PUNCH, MOVE_ICE_PUNCH}
        },
        {
        .lvl = 57,
        .species = SPECIES_HARIYAMA,
        IVS(29),
        .moves = {MOVE_CLOSE_COMBAT, MOVE_ROCK_SLIDE, MOVE_REST, MOVE_BELLY_DRUM}
        }
    },
},

#define NICOLAS_INFO             \
    .trainerName = _("Nicolas"), \
    DRAGON_TAMER_INFO,           \
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE

[TRAINER_NICOLAS_1] =
{
    NICOLAS_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 45,
        .species = SPECIES_BAGON,
        IVS(12),
        },
        {
        .lvl = 45,
        .species = SPECIES_ALTARIA,
        IVS(12),
        }
    },
},

[TRAINER_NICOLAS_2] =
{
    NICOLAS_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 47,
        .species = SPECIES_SHELGON,
        IVS(13),
        },
        {
        .lvl = 47,
        .species = SPECIES_ALTARIA,
        IVS(13),
        }
    },
},

[TRAINER_NICOLAS_3] =
{
    NICOLAS_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 49,
        .species = SPECIES_SHELGON,
        IVS(14),
        },
        {
        .lvl = 49,
        .species = SPECIES_ALTARIA,
        IVS(14),
        }
    },
},

[TRAINER_NICOLAS_4] =
{
    NICOLAS_INFO,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 51,
        .species = SPECIES_FLYGON,
        IVS(15),
        },
        {
        .lvl = 51,
        .species = SPECIES_SHELGON,
        IVS(15),
        },
        {
        .lvl = 51,
        .species = SPECIES_ALTARIA,
        IVS(15),
        }
    },
},

[TRAINER_NICOLAS_5] =
{
    NICOLAS_INFO,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 53,
        .species = SPECIES_FLYGON,
        IVS(17),
        },
        {
        .lvl = 53,
        .species = SPECIES_SALAMENCE,
        IVS(17),
        },
        {
        .lvl = 53,
        .species = SPECIES_ALTARIA,
        IVS(17),
        .heldItem = ITEM_DRAGON_FANG
        }
    },
},

//Victory Road
[TRAINER_ALBERT] =
{
    .trainerName = _("Albert"),
    ACE_TRAINER_M_INFO,
    .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 45,
        .species = SPECIES_MAGNETON,
        IVS(12),
        },
        {
        .lvl = 45,
        .species = SPECIES_MUK,
        IVS(12),
        }
    },
},

[TRAINER_HOPE] =
{
    .trainerName = _("Hope"),
    ACE_TRAINER_F_INFO,
    .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 47,
        .species = SPECIES_ROSERADE,
        IVS(12),
        }
    },
},

[TRAINER_SHANNON] =
{
    .trainerName = _("Shannon"),
    ACE_TRAINER_F_INFO,
    .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 47,
        .species = SPECIES_CLAYDOL,
        IVS(12),
        }
    },
},

[TRAINER_SAMUEL] =
{
    .trainerName = _("Samuel"),
    ACE_TRAINER_M_INFO,
    .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 45,
        .species = SPECIES_SWELLOW,
        IVS(12),
        },
        {
        .lvl = 45,
        .species = SPECIES_MAWILE,
        IVS(12),
        },
        {
        .lvl = 45,
        .species = SPECIES_ALAKAZAM,
        IVS(12),
        }
    },
},

[TRAINER_JULIE] =
{
    .trainerName = _("Julie"),
    ACE_TRAINER_F_INFO,
    .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 45,
        .species = SPECIES_SANDSLASH,
        IVS(12),
        },
        {
        .lvl = 45,
        .species = SPECIES_NINETALES,
        IVS(12),
        },
        {
        .lvl = 45,
        .species = SPECIES_TROPIUS,
        IVS(12),
        }
    },
},

[TRAINER_OWEN] =
{
    .trainerName = _("Owen"),
    ACE_TRAINER_M_INFO,
    .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 45,
        .species = SPECIES_KECLEON,
        IVS(12),
        },
        {
        .lvl = 45,
        .species = SPECIES_GOLEM,
        IVS(12),
        },
        {
        .lvl = 45,
        .species = SPECIES_WAILORD,
        IVS(12),
        }
    },
},

[TRAINER_DIANNE] =
{
    .trainerName = _("Dianne"),
    ACE_TRAINER_F_INFO,
    .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 46,
        .species = SPECIES_CLAYDOL,
        .moves = {MOVE_SKILL_SWAP, MOVE_ZEN_HEADBUTT, MOVE_EARTHQUAKE, MOVE_COSMIC_POWER}
        },
        {
        .lvl = 46,
        .species = SPECIES_LANTURN,
        .moves = {MOVE_THUNDERBOLT, MOVE_BUBBLE_BEAM, MOVE_SIGNAL_BEAM, MOVE_THUNDER_WAVE}
        }
    },
},

[TRAINER_FELIX] =
{
    .trainerName = _("Felix"),
    ACE_TRAINER_M_INFO,
    .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 46,
        .species = SPECIES_MEDICHAM,
        .moves = {MOVE_ZEN_HEADBUTT, MOVE_HIGH_JUMP_KICK, MOVE_THUNDER_PUNCH, MOVE_FIRE_PUNCH}
        },
        {
        .lvl = 46,
        .species = SPECIES_CLAYDOL,
        .moves = {MOVE_SKILL_SWAP, MOVE_EARTH_POWER, MOVE_PSYCHIC, MOVE_COSMIC_POWER}
        }
    },
},

[TRAINER_CAROLINE] =
{
    .trainerName = _("Caroline"),
    ACE_TRAINER_F_INFO,
    .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 46,
        .species = SPECIES_SKARMORY,
        IVS(12),
        },
        {
        .lvl = 46,
        .species = SPECIES_SABLEYE,
        IVS(12),
        }
    },
},

[TRAINER_EDGAR] =
{
    .trainerName = _("Edgar"),
    ACE_TRAINER_M_INFO,
    .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 46,
        .species = SPECIES_CACTURNE,
        IVS(12),
        },
        {
        .lvl = 46,
        .species = SPECIES_PELIPPER,
        IVS(12),
        }
    },
},

[TRAINER_MICHELLE] =
{
    .trainerName = _("Michelle"),
    ACE_TRAINER_F_INFO,
    .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 45,
        .species = SPECIES_TORKOAL,
        IVS(12),
        },
        {
        .lvl = 45,
        .species = SPECIES_MEDICHAM,
        IVS(12),
        },
        {
        .lvl = 45,
        .species = SPECIES_LUDICOLO,
        IVS(12),
        }
    },
},

[TRAINER_MITCHELL] =
{
    .trainerName = _("Mitchell"),
    ACE_TRAINER_M_INFO,
    .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 46,
        .species = SPECIES_LUNATONE,
        .moves = {MOVE_EXPLOSION, MOVE_REFLECT, MOVE_LIGHT_SCREEN, MOVE_PSYCHIC}
        },
        {
        .lvl = 46,
        .species = SPECIES_SOLROCK,
        .moves = {MOVE_EXPLOSION, MOVE_REFLECT, MOVE_LIGHT_SCREEN, MOVE_SHADOW_BALL}
        }
    },
},

[TRAINER_HALLE] =
{
    .trainerName = _("Halle"),
    ACE_TRAINER_F_INFO,
    .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 46,
        .species = SPECIES_SABLEYE,
        },
        {
        .lvl = 46,
        .species = SPECIES_ABSOL,
        }
    },
},

[TRAINER_VITO] =
{
    .trainerName = _("Vito"),
    .trainerClass = TRAINER_CLASS_WINSTRATE,
    .trainerPic = TRAINER_PIC_ACE_TRAINER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
    .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .partySize = 5,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 44,
        .species = SPECIES_SWALOT,
        .ev = EV_SPREAD_ATK_SPE_HP,
        IVS(12),
        },
        {
        .lvl = 44,
        .species = SPECIES_DODRIO,
        .ev = EV_SPREAD_ATK_SPE_HP,
        IVS(12),
        },
        {
        .lvl = 44,
        .species = SPECIES_ALAKAZAM,
        .ev = EV_SPREAD_SPA_SPE_HP,
        IVS(12),
        },
        {
        .lvl = 44,
        .species = SPECIES_ELECTRODE,
        .ev = EV_SPREAD_SPA_SPE_HP,
        IVS(12),
        },
        {
        .lvl = 44,
        .species = SPECIES_SHIFTRY,
        .ev = EV_SPREAD_ATK_SPE_HP,
        IVS(12),
        }
    },
},

[TRAINER_KATELYNN] =
{
    .trainerName = _("Katelynn"),
    ACE_TRAINER_F_INFO,
    .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 46,
        .species = SPECIES_GARDEVOIR,
        IVS(12),
        .moves = {MOVE_SKILL_SWAP, MOVE_PSYCHIC, MOVE_THUNDERBOLT, MOVE_CALM_MIND}
        },
        {
        .lvl = 46,
        .species = SPECIES_SLAKING,
        IVS(12),
        .moves = {MOVE_EARTHQUAKE, MOVE_SHADOW_CLAW, MOVE_AERIAL_ACE, MOVE_BRICK_BREAK}
        }
    },
},

[TRAINER_QUINCY] =
{
    .trainerName = _("Quincy"),
    ACE_TRAINER_M_INFO,
    .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 46,
        .species = SPECIES_SLAKING,
        IVS(12),
        .moves = {MOVE_ATTRACT, MOVE_MEGA_KICK, MOVE_HAMMER_ARM, MOVE_THROAT_CHOP}
        },
        {
        .lvl = 46,
        .species = SPECIES_DUSCLOPS,
        IVS(12),
        .moves = {MOVE_SKILL_SWAP, MOVE_PROTECT, MOVE_WILL_O_WISP, MOVE_TOXIC}
        }
    },
},

//Trick House 8
[TRAINER_KEIRA] =
{
    .trainerName = _("Keira"),
    ACE_TRAINER_F_INFO,
    .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_SETUP_FIRST_TURN,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 59,
        .species = SPECIES_AGGRON,
        IVS(12),
        },
        {
        .lvl = 59,
        .species = SPECIES_MANECTRIC,
        IVS(12),
        }
    },
},

[TRAINER_VINCENT] =
{
    .trainerName = _("Vincent"),
    ACE_TRAINER_M_INFO,
    .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 58,
        .species = SPECIES_SABLEYE,
        IVS(12),
        },
        {
        .lvl = 58,
        .species = SPECIES_MEDICHAM,
        IVS(12),
        },
        {
        .lvl = 58,
        .species = SPECIES_SHARPEDO,
        IVS(12),
        }
    },
},

[TRAINER_LEROY] =
{
    .trainerName = _("Leroy"),
    ACE_TRAINER_M_INFO,
    .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 59,
        .species = SPECIES_MAWILE,
        IVS(12),
        },
        {
        .lvl = 59,
        .species = SPECIES_STARMIE,
        IVS(12),
        }
    },
},

//S.S. Tidal
[TRAINER_LEA_AND_JED] =
{
    .trainerName = _("Lea & Jed"),
    YOUNG_COUPLE_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 59,
        .species = SPECIES_LUVDISC,
        },
        {
        .lvl = 59,
        .species = SPECIES_LUVDISC,
        }
    },
},

[TRAINER_GARRET] =
{
    .trainerName = _("Garret"),
    RICH_BOY_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        RICH_BOY_MON(60),
        .species = SPECIES_AZUMARILL,
        }
    },
},

[TRAINER_MICAH] =
{
    .trainerName = _("Micah"),
    GENTLEMAN_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 59,
        .species = SPECIES_PERSIAN,
        },
        {
        .lvl = 59,
        .species = SPECIES_MANECTRIC,
        }
    },
},

[TRAINER_COLTON] =
{
    .trainerName = _("Colton"),
    POKE_FAN_M_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 6,
    .party = (const struct TrainerMon[]) {
        {
        POKE_FAN_MON(55),
        .species = SPECIES_SKITTY,
        .moves = {MOVE_ASSIST, MOVE_CHARM, MOVE_FEINT_ATTACK, MOVE_HEAL_BELL}
        },
        {
        POKE_FAN_MON(55),
        .species = SPECIES_SKITTY,
        .moves = {MOVE_ASSIST, MOVE_CHARM, MOVE_FEINT_ATTACK, MOVE_HEAL_BELL}
        },
        {
        POKE_FAN_MON(55),
        .species = SPECIES_SKITTY,
        .moves = {MOVE_ASSIST, MOVE_CHARM, MOVE_FEINT_ATTACK, MOVE_HEAL_BELL}
        },
        {
        POKE_FAN_MON(55),
        .species = SPECIES_SKITTY,
        .moves = {MOVE_ASSIST, MOVE_CHARM, MOVE_FEINT_ATTACK, MOVE_HEAL_BELL}
        },
        {
        POKE_FAN_MON(55),
        .species = SPECIES_SKITTY,
        .moves = {MOVE_ASSIST, MOVE_CHARM, MOVE_FEINT_ATTACK, MOVE_HEAL_BELL}
        },
        {
        POKE_FAN_MON(55),
        .species = SPECIES_DELCATTY,
        .moves = {MOVE_ASSIST, MOVE_CHARM, MOVE_FEINT_ATTACK, MOVE_HEAL_BELL}
        }
    },
},

[TRAINER_NAOMI] =
{
    .trainerName = _("Naomi"),
    LADY_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        RICH_MON(60),
        .species = SPECIES_ROSERADE,
        IVS(12),
        }
    },
},

[TRAINER_THOMAS] =
{
    .trainerName = _("Thomas"),
    GENTLEMAN_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 60,
        .species = SPECIES_ZANGOOSE,
        }
    },
},

[TRAINER_PHILLIP] =
{
    .trainerName = _("Phillip"),
    SAILOR_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 59,
        .species = SPECIES_TENTACRUEL,
        },
        {
        .lvl = 59,
        .species = SPECIES_MACHAMP,
        }
    },
},

[TRAINER_LEONARD] =
{
    .trainerName = _("Leonard"),
    SAILOR_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 58,
        .species = SPECIES_QUAGSIRE,
        },
        {
        .lvl = 58,
        .species = SPECIES_PELIPPER,
        },
        {
        .lvl = 58,
        .species = SPECIES_FERALIGATR,
        }
    },
},

//Other
[TRAINER_ANABEL] =
{
    .trainerName = _("Anabel"),
    .trainerClass = TRAINER_CLASS_SALON_MAIDEN,
    .trainerPic = TRAINER_PIC_SALON_MAIDEN_ANABEL,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_MALE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 50,
        .species = SPECIES_SNORLAX,
        PERFECT_IVS,
        }
    },
},

[TRAINER_TUCKER] =
{
    .trainerName = _("Tucker"),
    .trainerClass = TRAINER_CLASS_DOME_ACE,
    .trainerPic = TRAINER_PIC_DOME_ACE_TUCKER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 50,
        .species = SPECIES_SWAMPERT,
        PERFECT_IVS,
        }
    },
},

[TRAINER_SPENSER] =
{
    .trainerName = _("Spenser"),
    .trainerClass = TRAINER_CLASS_PALACE_MAVEN,
    .trainerPic = TRAINER_PIC_PALACE_MAVEN_SPENSER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .partySize = 4,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 5,
        .species = SPECIES_AZURILL,
        PERFECT_IVS,
        },
        {
        .lvl = 5,
        .species = SPECIES_UNOWN,
        PERFECT_IVS,
        },
        {
        .lvl = 40,
        .species = SPECIES_DUSCLOPS,
        PERFECT_IVS,
        },
        {
        .lvl = 70,
        .species = SPECIES_KYOGRE,
        PERFECT_IVS,
        }
    },
},

[TRAINER_GRETA] =
{
    .trainerName = _("Greta"),
    .trainerClass = TRAINER_CLASS_ARENA_TYCOON,
    .trainerPic = TRAINER_PIC_ARENA_TYCOON_GRETA,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_MALE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .partySize = 4,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 50,
        .species = SPECIES_HERACROSS,
        PERFECT_IVS,
        },
        {
        .lvl = 50,
        .species = SPECIES_MIENSHAO,
        PERFECT_IVS,
        },
        {
        .lvl = 50,
        .species = SPECIES_BRELOOM,
        PERFECT_IVS,
        },
        {
        .lvl = 50,
        .species = SPECIES_MEDICHAM,
        PERFECT_IVS,
        }
    },
},

[TRAINER_NOLAND] =
{
    .trainerName = _("Noland"),
    .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
    .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 50,
        .species = SPECIES_PINSIR,
        PERFECT_IVS,
        }
    },
},

[TRAINER_LUCY] =
{
    .trainerName = _("Lucy"),
    .trainerClass = TRAINER_CLASS_PIKE_QUEEN,
    .trainerPic = TRAINER_PIC_PIKE_QUEEN_LUCY,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_MALE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 60,
        .species = SPECIES_SEVIPER,
        PERFECT_IVS,
        }
    },
},

[TRAINER_BRANDON] =
{
    .trainerName = _("Brandon"),
    .trainerClass = TRAINER_CLASS_PYRAMID_KING,
    .trainerPic = TRAINER_PIC_PYRAMID_KING_BRANDON,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .partySize = 6,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 50,
        .species = SPECIES_REGIDRAGO,
        PERFECT_IVS,
        },
        {
        .lvl = 50,
        .species = SPECIES_REGIELEKI,
        PERFECT_IVS,
        },
        {
        .lvl = 50,
        .species = SPECIES_REGIROCK,
        PERFECT_IVS,
        },
        {
        .lvl = 50,
        .species = SPECIES_REGICE,
        PERFECT_IVS,
        },
        {
        .lvl = 50,
        .species = SPECIES_REGISTEEL,
        PERFECT_IVS,
        },
        {
        .lvl = 70,
        .species = SPECIES_REGIGIGAS,
        PERFECT_IVS,
        }
    },
},

[TRAINER_RED] =
{
    .trainerName = _("Red"),
    .trainerClass = TRAINER_CLASS_RIVAL,
    .trainerPic = TRAINER_PIC_RED,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 5,
        .species = SPECIES_CHARMANDER,
        }
    },
},

[TRAINER_LEAF] =
{
    .trainerName = _("Leaf"),
    .trainerClass = TRAINER_CLASS_RIVAL,
    .trainerPic = TRAINER_PIC_LEAF,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_MALE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 5,
        .species = SPECIES_BULBASAUR,
        }
    },
},

[TRAINER_BRENDAN_PLACEHOLDER] =
{
    .trainerName = _("Brendan"),
    .trainerClass = TRAINER_CLASS_RS_PROTAG,
    .trainerPic = TRAINER_PIC_RS_BRENDAN,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 5,
        .species = SPECIES_GROUDON,
        }
    },
},

[TRAINER_MAY_PLACEHOLDER] =
{
    .trainerName = _("May"),
    .trainerClass = TRAINER_CLASS_RS_PROTAG,
    .trainerPic = TRAINER_PIC_RS_MAY,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_MALE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 5,
        .species = SPECIES_KYOGRE,
        }
    },
},

[TRAINER_DUDLEY] =
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

[TRAINER_KAYLEE] =
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

[TRAINER_TERRY] =
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
[TRAINER_UNUSED_##Num] =                          \
{                                                 \
    .trainerName = _("Unused"),                   \
    .trainerClass = TRAINER_CLASS_PKMN_TRAINER_2, \
    .trainerPic = TRAINER_PIC_RS_BRENDAN,         \
    .partySize = 1,                               \
    .party = (const struct TrainerMon[]) {        \
        {                                         \
        .lvl = 1,                                 \
        .species = SPECIES_BULBASAUR,             \
        }                                         \
    },                                            \
}

UNUSED_TRAINER(1),
UNUSED_TRAINER(2),
UNUSED_TRAINER(3),
UNUSED_TRAINER(4),
