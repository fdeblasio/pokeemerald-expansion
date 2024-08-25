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

#define KYLE  0
#define KELLI 1

#define KYLE_INFO                                          \
    .trainerName = _("Kyle"),                              \
    .trainerClass = TRAINER_CLASS_RIVAL,                   \
    .trainerPic = TRAINER_PIC_KYLE,                        \
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE, \
    BOSS_AI_FLAGS

#define KELLI_INFO                                                              \
    .trainerName = _("Kelli"),                                                  \
    .trainerClass = TRAINER_CLASS_RIVAL,                                        \
    .trainerPic = TRAINER_PIC_KELLI,                                            \
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE, \
    BOSS_AI_FLAGS

#define RIVAL_STARTER(Location, Type, Rival)                                                             \
    {                                                                                                    \
    .lvl = Location##_STARTER_LEVEL,                                                                     \
    .species = Type##_STARTER + (Location < RIVAL_ROUTE_110 ? 0 : (Location < RIVAL_ROUTE_119 ? 1 : 2)), \
    .nature = Rival == KYLE ? NATURE_SERIOUS : NATURE_QUIRKY,                                            \
    PERFECT_IVS,                                                                                         \
    .gender = Rival == KYLE ? TRAINER_MON_MALE : TRAINER_MON_FEMALE,                                     \
    }

#define RIVAL_ZUBAT(Location, Rival)                                        \
    {                                                                       \
    .lvl = Location##_STARTER_LEVEL - (Location < RIVAL_ROUTE_119 ? 2 : 1), \
    .species = Location < RIVAL_ROUTE_119 ? SPECIES_ZUBAT : (Location < RIVAL_LILYCOVE ? SPECIES_GOLBAT : SPECIES_CROBAT), \
    .ability = ABILITY_INNER_FOCUS,                                         \
    IVS(18),                                                                \
    .gender = Rival == KYLE ? TRAINER_MON_MALE : TRAINER_MON_FEMALE,        \
    }

#define RIVAL_MON(Location, Species, Ability, Rival)                             \
    {                                                                            \
    .lvl = Location##_STARTER_LEVEL - 2,                                         \
    .species = SPECIES_##Species,                                                \
    .ability = ABILITY_##Ability,                                                \
    IVS(Location < RIVAL_ROUTE_119 ? 6 : (Location < RIVAL_LILYCOVE ? 12 : 18)), \
    .gender = Rival == KYLE ? TRAINER_MON_MALE : TRAINER_MON_FEMALE,             \
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
        RIVAL_ZUBAT(RIVAL_RUSTBORO, Rival),                                    \
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
        RIVAL_ZUBAT(RIVAL_ROUTE_110, Rival),                                   \
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
        RIVAL_ZUBAT(RIVAL_ROUTE_119, Rival),                                   \
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
        .species = SPECIES_TOXTRICITY,                                         \
        .ability = ABILITY_PUNK_ROCK,                                          \
        IVS(18),                                                               \
        .gender = Rival == KYLE ? TRAINER_MON_MALE : TRAINER_MON_FEMALE,       \
        },                                                                     \
        RIVAL_MON(RIVAL_LILYCOVE, Evo4, Ability4, Rival),                      \
        RIVAL_MON(RIVAL_LILYCOVE, Evo3, Ability3, Rival),                      \
        RIVAL_ZUBAT(RIVAL_LILYCOVE, Rival),                                    \
        RIVAL_STARTER(RIVAL_LILYCOVE, Type, Rival),                            \
    },                                                                         \
}

RIVAL_BATTLES(KYLE, GRASS, BARBOACH, WHISCASH, OBLIVIOUS, GROWLITHE, ARCANINE, FLASH_FIRE),
RIVAL_BATTLES(KYLE, FIRE, SKIDDO, GOGOAT, SAP_SIPPER, BARBOACH, WHISCASH, OBLIVIOUS),
RIVAL_BATTLES(KYLE, WATER, GROWLITHE, ARCANINE, FLASH_FIRE, SKIDDO, GOGOAT, SAP_SIPPER),
RIVAL_BATTLES(KELLI, GRASS, BUIZEL, FLOATZEL, SWIFT_SWIM, VULPIX, NINETALES, FLASH_FIRE),
RIVAL_BATTLES(KELLI, FIRE, TANGELA, TANGROWTH, CHLOROPHYLL, BUIZEL, FLOATZEL, SWIFT_SWIM),
RIVAL_BATTLES(KELLI, WATER, VULPIX, NINETALES, FLASH_FIRE, TANGELA, TANGROWTH, CHLOROPHYLL),

#define ENDGAME_REMATCH_2_LEVEL 75
#define ENDGAME_REMATCH_3_LEVEL 80
#define ENDGAME_REMATCH_4_LEVEL 85
#define ENDGAME_REMATCH_5_LEVEL 90

#define ACE   0
#define TIER2 2
#define TIER3 5

#define REMATCH_MON(Species, Tier, Rematch)          \
    .lvl = ENDGAME_REMATCH_##Rematch##_LEVEL - Tier, \
    .species = SPECIES_##Species,                    \
    PERFECT_IVS

#define DUNCAN_INFO                                        \
    .trainerName = _("Duncan"),                            \
    .trainerClass = TRAINER_CLASS_RIVAL,                   \
    .trainerPic = TRAINER_PIC_DUNCAN,                      \
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE, \
    BOSS_AI_FLAGS

#define LEDGE(Level)                                                                                               \
    .lvl = Level,                                                                                                  \
    .species = Level < 20 ? SPECIES_WALLY_STARTER : (Level < 38 ? (SPECIES_WALLY_STARTER + 1) : SPECIES_LEDYBULK), \
    .ability = ABILITY_SWARM,                                                                                      \
    .gender = TRAINER_MON_MALE,                                                                                    \
    IVS(24),                                                                                                       \
    .nickname = COMPOUND_STRING("Ledge")

#define DUNCAN_BELLSPROUT(Level)                                                                         \
    .lvl = Level,                                                                                        \
    .species = Level < 25 ? SPECIES_BELLSPROUT : (Level < 35 ? SPECIES_WEEPINBELL : SPECIES_VICTREEBEL), \
    .ability = ABILITY_CHLOROPHYLL,                                                                      \
    .gender = TRAINER_MON_MALE

#define DUNCAN_PACHIRISU(Level)                                     \
    .lvl = Level,                                                   \
    .species = Level < 35 ? SPECIES_PACHIRISU : SPECIES_PACHIRIKKU, \
    .ability = 0,                                                   \
    .gender = TRAINER_MON_MALE

[TRAINER_DUNCAN_MAUVILLE] =
{
    DUNCAN_INFO,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        LEDGE(19),
        }
    },
},

[TRAINER_DUNCAN_VERDANTURF] =
{
    DUNCAN_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        DUNCAN_BELLSPROUT(21),
        IVS(3),
        },
        {
        LEDGE(23),
        }
    },
},

[TRAINER_DUNCAN_ROUTE_114] =
{
    DUNCAN_INFO,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        DUNCAN_PACHIRISU(25),
        IVS(6),
        },
        {
        DUNCAN_BELLSPROUT(25),
        IVS(6),
        },
        {
        LEDGE(27),
        }
    },
},

[TRAINER_DUNCAN_VICTORY_ROAD_1] =
{
    DUNCAN_INFO,
    .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
    .partySize = 5,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 56,
        .species = SPECIES_SWOOBAT,
        .ability = ABILITY_SIMPLE,
        IVS(18),
        .moves = {MOVE_PSYCHIC, MOVE_AIR_SLASH, MOVE_CALM_MIND, MOVE_AMNESIA},
        .gender = TRAINER_MON_MALE,
        },
        {
        .lvl = 56,
        .species = SPECIES_SWALOT,
        .ability = ABILITY_LIQUID_OOZE,
        IVS(18),
        .moves = {MOVE_SLUDGE_BOMB, MOVE_GIGA_DRAIN, MOVE_ICE_BEAM, MOVE_BODY_PRESS},
        .gender = TRAINER_MON_MALE,
        },
        {
        DUNCAN_PACHIRISU(57),
        IVS(18),
        .moves = {MOVE_DISCHARGE, MOVE_SWIFT, MOVE_NUZZLE, MOVE_SWEET_KISS},
        },
        {
        DUNCAN_BELLSPROUT(57),
        IVS(18),
        .moves = {MOVE_LEAF_BLADE, MOVE_POISON_JAB, MOVE_POISON_POWDER, MOVE_GASTRO_ACID},
        },
        {
        LEDGE(59),
        .nature = NATURE_ADAMANT,
        .moves = {MOVE_LUNGE, MOVE_DRAIN_PUNCH, MOVE_FIRE_PUNCH, MOVE_THUNDER_PUNCH},
        .heldItem = ITEM_PUNCHING_GLOVE,
        }
    },
},

#define REMATCH_LEDGE(rematch)                                                    \
    {                                                                             \
    REMATCH_MON(LEDYBULK, ACE, rematch),                                          \
    .ability = ABILITY_IRON_FIST,                                                 \
    .nature = NATURE_ADAMANT,                                                     \
    EV_SPREAD_ATK_SPE_HP,                                                         \
    .moves = {MOVE_LUNGE, MOVE_DRAIN_PUNCH, MOVE_FIRE_PUNCH, MOVE_THUNDER_PUNCH}, \
    .gender = TRAINER_MON_MALE,                                                   \
    .heldItem = ITEM_PUNCHING_GLOVE,                                              \
    .nickname = COMPOUND_STRING("Ledge"),                                         \
    .friendship = 255,                                                            \
    }

#define DUNCAN_VICTREEBEL(rematch)                                                   \
    {                                                                                \
    REMATCH_MON(VICTREEBEL, TIER2, rematch),                                         \
    .ability = ABILITY_NATURAL_CURE,                                                 \
    .nature = NATURE_ADAMANT,                                                        \
    EV_SPREAD_ATK_SPE_HP,                                                            \
    .moves = {MOVE_LEAF_BLADE, MOVE_POISON_JAB, MOVE_LEECH_LIFE, MOVE_SWORDS_DANCE}, \
    .gender = TRAINER_MON_MALE,                                                      \
    .heldItem = ITEM_MIRACLE_SEED,                                                   \
    }

#define DUNCAN_PACHIRIKKU(rematch)                                               \
    {                                                                            \
    REMATCH_MON(PACHIRIKKU, TIER2, rematch),                                     \
    .ability = ABILITY_VOLT_ABSORB,                                              \
    .nature = NATURE_TIMID,                                                      \
    EV_SPREAD_SPA_SPE_SPD,                                                       \
    .moves = {MOVE_THUNDERBOLT, MOVE_SIGNAL_BEAM, MOVE_GRASS_KNOT, MOVE_NUZZLE}, \
    .gender = TRAINER_MON_MALE,                                                  \
    }

#define DUNCAN_SWALOT(rematch)                                                    \
    {                                                                             \
    REMATCH_MON(SWALOT, TIER3, rematch),                                          \
    .ability = ABILITY_LIQUID_OOZE,                                               \
    .nature = NATURE_MODEST,                                                      \
    EV_SPREAD_SPA_HP_SPE,                                                         \
    .moves = {MOVE_SLUDGE_BOMB, MOVE_GIGA_DRAIN, MOVE_ICE_BEAM, MOVE_BODY_PRESS}, \
    .gender = TRAINER_MON_MALE,                                                   \
    }

#define DUNCAN_SWOOBAT(rematch)                                                \
    {                                                                          \
    REMATCH_MON(SWOOBAT, TIER3, rematch),                                      \
    .ability = ABILITY_SIMPLE,                                                 \
    .nature = NATURE_TIMID,                                                    \
    EV_SPREAD_SPA_SPE_HP,                                                      \
    .moves = {MOVE_PSYCHIC, MOVE_AIR_SLASH, MOVE_SIGNAL_BEAM, MOVE_CALM_MIND}, \
    .gender = TRAINER_MON_MALE,                                                \
    }

#define DUNCAN_DUBWOOL(rematch)                                                       \
    {                                                                                 \
    REMATCH_MON(DUBWOOL, TIER3, rematch),                                             \
    .ability = ABILITY_FLUFFY,                                                        \
    .nature = NATURE_MODEST,                                                          \
    EV_SPREAD_ATK_DEF_HP,                                                             \
    .moves = {MOVE_BODY_SLAM, MOVE_BODY_PRESS, MOVE_ZEN_HEADBUTT, MOVE_COTTON_GUARD}, \
    .gender = TRAINER_MON_MALE,                                                       \
    }

[TRAINER_DUNCAN_VICTORY_ROAD_2] =
{
    DUNCAN_INFO,
    .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
    .partySize = 5,
    .party = (const struct TrainerMon[]) {
        DUNCAN_SWOOBAT(2),
        DUNCAN_SWALOT(2),
        DUNCAN_PACHIRIKKU(2),
        DUNCAN_VICTREEBEL(2),
        REMATCH_LEDGE(2),
    },
},

[TRAINER_DUNCAN_VICTORY_ROAD_3] =
{
    DUNCAN_INFO,
    .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
    .partySize = 5,
    .party = (const struct TrainerMon[]) {
        DUNCAN_SWOOBAT(3),
        DUNCAN_SWALOT(3),
        DUNCAN_PACHIRIKKU(3),
        DUNCAN_VICTREEBEL(3),
        REMATCH_LEDGE(3),
    },
},

[TRAINER_DUNCAN_VICTORY_ROAD_4] =
{
    DUNCAN_INFO,
    .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
    .partySize = 6,
    .party = (const struct TrainerMon[]) {
        DUNCAN_DUBWOOL(4),
        DUNCAN_SWOOBAT(4),
        DUNCAN_SWALOT(4),
        DUNCAN_PACHIRIKKU(4),
        DUNCAN_VICTREEBEL(4),
        REMATCH_LEDGE(4),
    },
},

[TRAINER_DUNCAN_VICTORY_ROAD_5] =
{
    DUNCAN_INFO,
    .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
    .partySize = 6,
    .party = (const struct TrainerMon[]) {
        DUNCAN_DUBWOOL(5),
        DUNCAN_SWOOBAT(5),
        DUNCAN_SWALOT(5),
        DUNCAN_PACHIRIKKU(5),
        DUNCAN_VICTREEBEL(5),
        REMATCH_LEDGE(5),
    },
},

#define LEADER_INFO(Trainer)                    \
    .trainerClass = TRAINER_CLASS_LEADER,       \
    .trainerPic = TRAINER_PIC_LEADER_##Trainer, \
    BOSS_AI_FLAGS

#define LEADER_REMATCH(rematch)                                                    \
    .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE}, \
    .doubleBattle = TRUE,                                                          \
    .partySize = rematch < 4 ? 5 : 6

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
        .species = SPECIES_ARCHEN,
        .ability = ABILITY_DEFEATIST,
        IVS(12),
        .moves = {MOVE_ROCK_TOMB, MOVE_WING_ATTACK, MOVE_DRAGON_BREATH, MOVE_QUICK_ATTACK},
        .gender = TRAINER_MON_FEMALE,
        },
        {
        .lvl = 11,
        .species = SPECIES_CRANIDOS,
        .ability = ABILITY_ROCK_HEAD,
        IVS(12),
        .moves = {MOVE_ROCK_TOMB, MOVE_ROCK_SMASH, MOVE_PURSUIT, MOVE_HEADBUTT},
        .gender = TRAINER_MON_FEMALE,
        },
        {
        .lvl = 13,
        .species = SPECIES_NOSEPASS,
        IVS(24),
        .moves = {MOVE_ROCK_TOMB, MOVE_BLOCK, MOVE_HARDEN, MOVE_TACKLE},
        .gender = TRAINER_MON_FEMALE,
        .heldItem = ITEM_ORAN_BERRY,
        .ball = ITEM_POKE_BALL,
        }
    },
},

#define ROXANNE_PROBOPASS(rematch)                                                      \
    {                                                                                   \
    REMATCH_MON(PROBOPASS, ACE, rematch),                                               \
    .ability = ABILITY_SAND_FORCE,                                                      \
    .nature = NATURE_IMPISH,                                                            \
    EV_SPREAD_SPA_DEF_SPD,                                                              \
    .moves = {MOVE_POWER_GEM, MOVE_FLASH_CANNON, rematch < 5 ? MOVE_SANDSTORM : MOVE_BODY_PRESS, MOVE_IRON_DEFENSE}, \
    .gender = TRAINER_MON_FEMALE,                                                       \
    .heldItem = ITEM_SITRUS_BERRY,                                                      \
    .ball = ITEM_POKE_BALL,                                                             \
    }

#define ROXANNE_RAMPARDOS(rematch)                                                   \
    {                                                                                \
    REMATCH_MON(RAMPARDOS, TIER2, rematch),                                          \
    .ability = ABILITY_ROCK_HEAD,                                                    \
    .nature = NATURE_ADAMANT,                                                        \
    EV_SPREAD_ATK_SPE_HP,                                                            \
    .moves = {MOVE_HEAD_SMASH, MOVE_ZEN_HEADBUTT, MOVE_IRON_HEAD, MOVE_BRICK_BREAK}, \
    .gender = TRAINER_MON_FEMALE,                                                    \
    .heldItem = ITEM_QUICK_CLAW,                                                     \
    }

#define ROXANNE_ARCHEOPS(rematch)                                                  \
    {                                                                              \
    REMATCH_MON(ARCHEOPS, TIER2, rematch),                                         \
    .ability = ABILITY_EARLY_BIRD,                                                 \
    .nature = NATURE_ADAMANT,                                                      \
    EV_SPREAD_ATK_SPE_HP,                                                          \
    .moves = {MOVE_ROCK_SLIDE, MOVE_DUAL_WINGBEAT, MOVE_CRUNCH, MOVE_DRAGON_CLAW}, \
    .gender = TRAINER_MON_FEMALE,                                                  \
    .heldItem = ITEM_SHELL_BELL,                                                   \
    }

#define ROXANNE_GARGANACL(rematch)                                                 \
    {                                                                              \
    REMATCH_MON(GARGANACL, TIER3, rematch),                                        \
    .ability = ABILITY_PURIFYING_SALT,                                             \
    .nature = NATURE_IMPISH,                                                       \
    EV_SPREAD_ATK_DEF_HP,                                                          \
    .moves = {MOVE_ROCK_SLIDE, MOVE_SALT_CURE, MOVE_BODY_PRESS, MOVE_WIDE_GUARD}, \
    .gender = TRAINER_MON_FEMALE,                                                  \
    }

#define ROXANNE_GIGALITH(rematch)                                                  \
    {                                                                              \
    REMATCH_MON(GIGALITH, TIER3, rematch),                                         \
    .ability = ABILITY_SAND_STREAM,                                                \
    .nature = NATURE_ADAMANT,                                                      \
    EV_SPREAD_ATK_SPD_HP,                                                          \
    .moves = {MOVE_ROCK_SLIDE, MOVE_IRON_HEAD, MOVE_SANDSTORM, MOVE_STEALTH_ROCK}, \
    .gender = TRAINER_MON_FEMALE,                                                  \
    }

#define ROXANNE_GOLEM(rematch)                                                            \
    {                                                                                     \
    REMATCH_MON(GOLEM, TIER3, rematch),                                                   \
    .ability = ABILITY_SAND_VEIL,                                                         \
    .nature = NATURE_IMPISH,                                                              \
    EV_SPREAD_ATK_DEF_HP,                                                                 \
    .moves = {MOVE_ROCK_SLIDE, MOVE_HIGH_HORSEPOWER, MOVE_BODY_PRESS, MOVE_IRON_DEFENSE}, \
    .gender = TRAINER_MON_FEMALE,                                                         \
    }

[TRAINER_ROXANNE_2] =
{
    ROXANNE_INFO,
    LEADER_REMATCH(2),
    .party = (const struct TrainerMon[]) {
        ROXANNE_GIGALITH(2),
        ROXANNE_GARGANACL(2),
        ROXANNE_ARCHEOPS(2),
        ROXANNE_RAMPARDOS(2),
        ROXANNE_PROBOPASS(2),
    },
},

[TRAINER_ROXANNE_3] =
{
    ROXANNE_INFO,
    LEADER_REMATCH(3),
    .party = (const struct TrainerMon[]) {
        ROXANNE_GIGALITH(3),
        ROXANNE_GARGANACL(3),
        ROXANNE_ARCHEOPS(3),
        ROXANNE_RAMPARDOS(3),
        ROXANNE_PROBOPASS(3),
    },
},

[TRAINER_ROXANNE_4] =
{
    ROXANNE_INFO,
    LEADER_REMATCH(4),
    .party = (const struct TrainerMon[]) {
        ROXANNE_GOLEM(4),
        ROXANNE_GIGALITH(4),
        ROXANNE_GARGANACL(4),
        ROXANNE_ARCHEOPS(4),
        ROXANNE_RAMPARDOS(4),
        ROXANNE_PROBOPASS(4),
    },
},

[TRAINER_ROXANNE_5] =
{
    ROXANNE_INFO,
    LEADER_REMATCH(5),
    .party = (const struct TrainerMon[]) {
        ROXANNE_GOLEM(5),
        ROXANNE_GIGALITH(5),
        ROXANNE_GARGANACL(5),
        ROXANNE_ARCHEOPS(5),
        ROXANNE_RAMPARDOS(5),
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
        .species = SPECIES_MAKUHITA,
        .ability = ABILITY_THICK_FAT,
        IVS(12),
        .moves = {MOVE_BULK_UP, MOVE_ARM_THRUST, MOVE_FAKE_OUT, MOVE_WHIRLWIND},
        .gender = TRAINER_MON_MALE,
        },
        {
        .lvl = 16,
        .species = SPECIES_CRABRAWLER,
        .ability = ABILITY_IRON_FIST,
        IVS(12),
        .moves = {MOVE_BULK_UP, MOVE_ROCK_SMASH, MOVE_VISE_GRIP, MOVE_BUBBLE_BEAM},
        .gender = TRAINER_MON_MALE,
        },
        {
        .lvl = 18,
        .species = SPECIES_CLOBBOPUS,
        .ability = ABILITY_LIMBER,
        IVS(24),
        .moves = {MOVE_BULK_UP, MOVE_ROCK_SMASH, MOVE_BIND, MOVE_DETECT},
        .gender = TRAINER_MON_MALE,
        .heldItem = ITEM_SITRUS_BERRY,
        .ball = ITEM_POKE_BALL,
        }
    },
},

#define BRAWLY_GRAPPLOCT(rematch)                                            \
    {                                                                        \
    REMATCH_MON(GRAPPLOCT, TIER3, rematch),                                  \
    .ability = ABILITY_TECHNICIAN,                                           \
    .nature = NATURE_ADAMANT,                                                \
    EV_SPREAD_ATK_SPE_HP,                                                    \
    .moves = {MOVE_BULK_UP, MOVE_STORM_THROW, MOVE_AQUA_JET, MOVE_OCTOLOCK}, \
    .gender = TRAINER_MON_MALE,                                              \
    .heldItem = ITEM_SITRUS_BERRY,                                           \
    .ball = ITEM_POKE_BALL,                                                  \
    }

#define BRAWLY_CRABOMINABLE(rematch)                                                    \
    {                                                                                   \
    REMATCH_MON(CRABOMINABLE, TIER3, rematch),                                          \
    .ability = ABILITY_IRON_FIST,                                                       \
    .nature = NATURE_ADAMANT,                                                           \
    EV_SPREAD_ATK_HP_SPD,                                                               \
    .moves = {MOVE_DRAIN_PUNCH, MOVE_ICE_HAMMER, MOVE_CRABHAMMER, MOVE_POWER_UP_PUNCH}, \
    .gender = TRAINER_MON_MALE,                                                         \
    .heldItem = ITEM_ASSAULT_VEST,                                                      \
    }

#define BRAWLY_HARIYAMA(rematch)                                               \
    {                                                                          \
    REMATCH_MON(HARIYAMA, ACE, rematch),                                       \
    .ability = ABILITY_THICK_FAT,                                              \
    .nature = NATURE_ADAMANT,                                                  \
    EV_SPREAD_ATK_HP_SPE,                                                      \
    .moves = {MOVE_BULK_UP, MOVE_DRAIN_PUNCH, MOVE_BELLY_DRUM, MOVE_FAKE_OUT}, \
    .gender = TRAINER_MON_MALE,                                                \
    .heldItem = ITEM_BLACK_BELT,                                               \
    }

#define BRAWLY_MEDICHAM(rematch)                                                  \
    {                                                                             \
    REMATCH_MON(MEDICHAM, TIER2, rematch),                                        \
    .ability = ABILITY_PURE_POWER,                                                \
    .nature = NATURE_ADAMANT,                                                     \
    EV_SPREAD_ATK_SPE_HP,                                                         \
    .moves = {MOVE_BULK_UP, MOVE_HIGH_JUMP_KICK, MOVE_ZEN_HEADBUTT, MOVE_DETECT}, \
    .gender = TRAINER_MON_FEMALE,                                                 \
    }

#define BRAWLY_MACHAMP(rematch)                                               \
    {                                                                         \
    REMATCH_MON(MACHAMP, TIER2, rematch),                                     \
    .ability = ABILITY_NO_GUARD,                                              \
    .nature = NATURE_ADAMANT,                                                 \
    EV_SPREAD_ATK_SPE_HP,                                                     \
    .moves = {MOVE_BULK_UP, MOVE_CROSS_CHOP, MOVE_KNOCK_OFF, MOVE_DUAL_CHOP}, \
    .gender = TRAINER_MON_MALE,                                               \
    }

#define BRAWLY_MIENSHAO(rematch)                                              \
    {                                                                         \
    REMATCH_MON(MIENSHAO, TIER3, rematch),                                    \
    .ability = ABILITY_REGENERATOR,                                           \
    .nature = NATURE_ADAMANT,                                                 \
    EV_SPREAD_ATK_SPE_HP,                                                     \
    .moves = {MOVE_BULK_UP, MOVE_HIGH_JUMP_KICK, MOVE_U_TURN, MOVE_FAKE_OUT}, \
    .gender = TRAINER_MON_MALE,                                               \
    }

[TRAINER_BRAWLY_2] =
{
    BRAWLY_INFO,
    LEADER_REMATCH(2),
    .party = (const struct TrainerMon[]) {
        BRAWLY_MACHAMP(2),
        BRAWLY_MEDICHAM(2),
        BRAWLY_HARIYAMA(2),
        BRAWLY_CRABOMINABLE(2),
        BRAWLY_GRAPPLOCT(2),
    },
},

[TRAINER_BRAWLY_3] =
{
    BRAWLY_INFO,
    LEADER_REMATCH(3),
    .party = (const struct TrainerMon[]) {
        BRAWLY_MACHAMP(3),
        BRAWLY_MEDICHAM(3),
        BRAWLY_HARIYAMA(3),
        BRAWLY_CRABOMINABLE(3),
        BRAWLY_GRAPPLOCT(3),
    },
},

[TRAINER_BRAWLY_4] =
{
    BRAWLY_INFO,
    LEADER_REMATCH(4),
    .party = (const struct TrainerMon[]) {
        BRAWLY_MIENSHAO(4),
        BRAWLY_MACHAMP(4),
        BRAWLY_MEDICHAM(4),
        BRAWLY_HARIYAMA(4),
        BRAWLY_CRABOMINABLE(4),
        BRAWLY_GRAPPLOCT(4),
    },
},

[TRAINER_BRAWLY_5] =
{
    BRAWLY_INFO,
    LEADER_REMATCH(5),
    .party = (const struct TrainerMon[]) {
        BRAWLY_MIENSHAO(5),
        BRAWLY_MACHAMP(5),
        BRAWLY_MEDICHAM(5),
        BRAWLY_HARIYAMA(5),
        BRAWLY_CRABOMINABLE(5),
        BRAWLY_GRAPPLOCT(5),
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
        .species = SPECIES_TYNAMO,
        .ability = ABILITY_LEVITATE,
        IVS(24),
        .moves = {MOVE_SHOCK_WAVE, MOVE_SPARK, MOVE_TACKLE, MOVE_THUNDER_WAVE},
        },
        {
        .lvl = 22,
        .species = SPECIES_WATTREL,
        .ability = ABILITY_WIND_POWER,
        IVS(24),
        .moves = {MOVE_SHOCK_WAVE, MOVE_AIR_CUTTER, MOVE_UPROAR, MOVE_QUICK_ATTACK},
        .gender = TRAINER_MON_MALE,
        },
        {
        .lvl = 22,
        .species = SPECIES_HELIOPTILE,
        .ability = ABILITY_DRY_SKIN,
        IVS(26),
        .moves = {MOVE_SHOCK_WAVE, MOVE_SWIFT, MOVE_MUD_SLAP, MOVE_CHARGE},
        .gender = TRAINER_MON_MALE,
        },
        {
        .lvl = 24,
        .species = SPECIES_LUXIO,
        .ability = ABILITY_INTIMIDATE,
        IVS(30),
        .moves = {MOVE_SHOCK_WAVE, MOVE_BITE, MOVE_BABY_DOLL_EYES, MOVE_CHARGE},
        .gender = TRAINER_MON_MALE,
        .heldItem = ITEM_SITRUS_BERRY,
        .ball = ITEM_POKE_BALL,
        }
    },
},

#define WATTSON_LUXRAY(rematch)                                                             \
    {                                                                                       \
    REMATCH_MON(LUXRAY, ACE, rematch),                                                      \
    .ability = ABILITY_INTIMIDATE,                                                          \
    .nature = NATURE_ADAMANT,                                                               \
    EV_SPREAD_ATK_SPE_HP,                                                                   \
    .moves = {MOVE_SUPERCELL_SLAM, MOVE_CRUNCH, MOVE_PSYCHIC_FANGS, MOVE_ELECTRIC_TERRAIN}, \
    .gender = TRAINER_MON_MALE,                                                             \
    .heldItem = ITEM_ELECTRIC_SEED,                                                         \
    .ball = ITEM_POKE_BALL,                                                                 \
    }

#define WATTSON_HELIOLISK(rematch)                                                           \
    {                                                                                        \
    REMATCH_MON(HELIOLISK, TIER2, rematch),                                                  \
    .ability = ABILITY_DRY_SKIN,                                                             \
    .nature = NATURE_MODEST,                                                                 \
    EV_SPREAD_ATK_SPE_SPD,                                                                   \
    .moves = {MOVE_PARABOLIC_CHARGE, MOVE_HYPER_VOICE, MOVE_WEATHER_BALL, MOVE_EARTH_POWER}, \
    .gender = TRAINER_MON_MALE,                                                              \
    .heldItem = ITEM_BIG_ROOT,                                                               \
    }

#define WATTSON_KILOWATTREL(rematch)                                             \
    {                                                                            \
    REMATCH_MON(KILOWATTREL, TIER2, rematch),                                    \
    .ability = ABILITY_WIND_POWER,                                               \
    .nature = NATURE_TIMID,                                                      \
    EV_SPREAD_ATK_SPE_HP,                                                        \
    .moves = {MOVE_THUNDER, MOVE_HURRICANE, MOVE_WEATHER_BALL, MOVE_RAIN_DANCE}, \
    .gender = TRAINER_MON_MALE,                                                  \
    .heldItem = ITEM_DAMP_ROCK,                                                  \
    }

#define WATTSON_EELEKTROSS(rematch)                                                \
    {                                                                              \
    REMATCH_MON(EELEKTROSS, TIER3, rematch),                                       \
    .ability = ABILITY_LEVITATE,                                                   \
    .nature = NATURE_ADAMANT,                                                      \
    EV_SPREAD_SPA_SPE_DEF,                                                         \
    .moves = {MOVE_SUPERCELL_SLAM, MOVE_DRAIN_PUNCH, MOVE_LIQUIDATION, MOVE_COIL}, \
    }

#define WATTSON_ROTOM(rematch)                                                        \
    {                                                                                 \
    REMATCH_MON(ROTOM, TIER3, rematch),                                               \
    .ability = ABILITY_LEVITATE,                                                      \
    .nature = NATURE_MODEST,                                                          \
    EV_SPREAD_SPA_SPE_HP,                                                             \
    .moves = {MOVE_THUNDERBOLT, MOVE_SHADOW_BALL, MOVE_HYPER_VOICE, MOVE_NASTY_PLOT}, \
    }

#define WATTSON_ELECTRODE(rematch)                                                    \
    {                                                                                 \
    REMATCH_MON(ELECTRODE, TIER3, rematch),                                           \
    .ability = ABILITY_STATIC,                                                        \
    .nature = NATURE_TIMID,                                                           \
    EV_SPREAD_SPA_SPE_HP,                                                             \
    .moves = {MOVE_THUNDERBOLT, MOVE_EERIE_IMPULSE, MOVE_LIGHT_SCREEN, MOVE_SCREECH}, \
    }

[TRAINER_WATTSON_2] =
{
    WATTSON_INFO,
    LEADER_REMATCH(2),
    .party = (const struct TrainerMon[]) {
        WATTSON_ROTOM(2),
        WATTSON_EELEKTROSS(2),
        WATTSON_KILOWATTREL(2),
        WATTSON_HELIOLISK(2),
        WATTSON_LUXRAY(2),
    },
},

[TRAINER_WATTSON_3] =
{
    WATTSON_INFO,
    LEADER_REMATCH(3),
    .party = (const struct TrainerMon[]) {
        WATTSON_ROTOM(3),
        WATTSON_EELEKTROSS(3),
        WATTSON_KILOWATTREL(3),
        WATTSON_HELIOLISK(3),
        WATTSON_LUXRAY(3),
    },
},

[TRAINER_WATTSON_4] =
{
    WATTSON_INFO,
    LEADER_REMATCH(4),
    .party = (const struct TrainerMon[]) {
        WATTSON_ELECTRODE(4),
        WATTSON_ROTOM(4),
        WATTSON_EELEKTROSS(4),
        WATTSON_KILOWATTREL(4),
        WATTSON_HELIOLISK(4),
        WATTSON_LUXRAY(4),
    },
},

[TRAINER_WATTSON_5] =
{
    WATTSON_INFO,
    LEADER_REMATCH(5),
    .party = (const struct TrainerMon[]) {
        WATTSON_ELECTRODE(5),
        WATTSON_ROTOM(5),
        WATTSON_EELEKTROSS(5),
        WATTSON_KILOWATTREL(5),
        WATTSON_HELIOLISK(5),
        WATTSON_LUXRAY(5),
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
        .species = SPECIES_HEATMOR,
        .ability = ABILITY_FLASH_FIRE,
        IVS(24),
        .moves = {MOVE_OVERHEAT, MOVE_BUG_BITE, MOVE_LICK, MOVE_SLASH},
        .gender = TRAINER_MON_FEMALE,
        },
        {
        .lvl = 30,
        .species = SPECIES_VULPIX,
        .ability = ABILITY_FLASH_FIRE,
        IVS(24),
        .moves = {MOVE_OVERHEAT, MOVE_EXTRASENSORY, MOVE_HEX, MOVE_WILL_O_WISP},
        .gender = TRAINER_MON_FEMALE,
        },
        {
        .lvl = 30,
        .species = SPECIES_TORKOAL,
        .ability = ABILITY_DROUGHT,
        IVS(30),
        .moves = {MOVE_OVERHEAT, MOVE_SUNNY_DAY, MOVE_RAPID_SPIN, MOVE_SMOKESCREEN},
        .gender = TRAINER_MON_FEMALE,
        },
        {
        .lvl = 32,
        .species = SPECIES_LITLEO,
        .ability = ABILITY_UNNERVE,
        IVS(30),
        .moves = {MOVE_OVERHEAT, MOVE_SWIFT, MOVE_WORK_UP, MOVE_NOBLE_ROAR},
        .gender = TRAINER_MON_FEMALE,
        .heldItem = ITEM_WHITE_HERB,
        .ball = ITEM_POKE_BALL,
        }
    },
},

#define FLANNERY_PYROAR(rematch)                                                   \
    {                                                                              \
    REMATCH_MON(PYROAR, ACE, rematch),                                             \
    .ability = ABILITY_COMPETITIVE,                                                \
    .nature = NATURE_MODEST,                                                       \
    EV_SPREAD_SPA_SPE_HP,                                                          \
    .moves = {MOVE_FIRE_BLAST, MOVE_HYPER_VOICE, MOVE_DARK_PULSE, MOVE_SUNNY_DAY}, \
    .gender = TRAINER_MON_FEMALE,                                                  \
    .heldItem = ITEM_WIDE_LENS,                                                    \
    .ball = ITEM_POKE_BALL,                                                        \
    }

#define FLANNERY_TORKOAL(rematch)                                                     \
    {                                                                                 \
    REMATCH_MON(TORKOAL, TIER2, rematch),                                             \
    .ability = ABILITY_DROUGHT,                                                       \
    .nature = NATURE_MODEST,                                                          \
    EV_SPREAD_SPA_DEF_HP,                                                             \
    .moves = {MOVE_FLAMETHROWER, MOVE_BODY_PRESS, MOVE_IRON_DEFENSE, MOVE_SUNNY_DAY}, \
    .gender = TRAINER_MON_FEMALE,                                                     \
    .heldItem = ITEM_HEAT_ROCK,                                                       \
    }

#define FLANNERY_NINETALES(rematch)                                         \
    {                                                                       \
    REMATCH_MON(NINETALES, TIER2, rematch),                                 \
    .ability = ABILITY_DROUGHT,                                             \
    .nature = NATURE_TIMID,                                                 \
    EV_SPREAD_SPA_SPE_HP,                                                   \
    .moves = {MOVE_OVERHEAT, MOVE_GRUDGE, MOVE_NASTY_PLOT, MOVE_SUNNY_DAY}, \
    .gender = TRAINER_MON_FEMALE,                                           \
    .heldItem = ITEM_WHITE_HERB,                                            \
    }

#define FLANNERY_HEATMOR(rematch)                                                    \
    {                                                                                \
    REMATCH_MON(HEATMOR, TIER3, rematch),                                            \
    .ability = ABILITY_FLASH_FIRE,                                                   \
    .nature = NATURE_ADAMANT,                                                        \
    EV_SPREAD_ATK_SPE_HP,                                                            \
    .moves = {MOVE_FIRE_LASH, MOVE_DRAIN_PUNCH, MOVE_THUNDER_PUNCH, MOVE_SUNNY_DAY}, \
    .gender = TRAINER_MON_FEMALE,                                                    \
    }

#define FLANNERY_ARCANINE(rematch)                                              \
    {                                                                           \
    REMATCH_MON(ARCANINE, TIER3, rematch),                                      \
    .ability = ABILITY_FLASH_FIRE,                                              \
    .nature = NATURE_ADAMANT,                                                   \
    EV_SPREAD_ATK_SPE_HP,                                                       \
    .moves = {MOVE_TEMPER_FLARE, MOVE_CRUNCH, MOVE_PLAY_ROUGH, MOVE_SUNNY_DAY}, \
    .gender = TRAINER_MON_FEMALE,                                               \
    }

#define FLANNERY_MAROWAK_ALOLAN(rematch)                                             \
    {                                                                                \
    REMATCH_MON(MAROWAK_ALOLAN, TIER3, rematch),                                     \
    .ability = ABILITY_ROCK_HEAD,                                                    \
    .nature = NATURE_ADAMANT,                                                        \
    EV_SPREAD_ATK_SPE_HP,                                                            \
    .moves = {MOVE_FLARE_BLITZ, MOVE_SHADOW_BONE, MOVE_DOUBLE_EDGE, MOVE_SUNNY_DAY}, \
    .gender = TRAINER_MON_FEMALE,                                                    \
    }

[TRAINER_FLANNERY_2] =
{
    FLANNERY_INFO,
    LEADER_REMATCH(2),
    .party = (const struct TrainerMon[]) {
        FLANNERY_ARCANINE(2),
        FLANNERY_HEATMOR(2),
        FLANNERY_NINETALES(2),
        FLANNERY_TORKOAL(2),
        FLANNERY_PYROAR(2),
    },
},

[TRAINER_FLANNERY_3] =
{
    FLANNERY_INFO,
    LEADER_REMATCH(3),
    .party = (const struct TrainerMon[]) {
        FLANNERY_ARCANINE(3),
        FLANNERY_HEATMOR(3),
        FLANNERY_NINETALES(3),
        FLANNERY_TORKOAL(3),
        FLANNERY_PYROAR(3),
    },
},

[TRAINER_FLANNERY_4] =
{
    FLANNERY_INFO,
    LEADER_REMATCH(4),
    .party = (const struct TrainerMon[]) {
        FLANNERY_MAROWAK_ALOLAN(4),
        FLANNERY_ARCANINE(4),
        FLANNERY_HEATMOR(4),
        FLANNERY_NINETALES(4),
        FLANNERY_TORKOAL(4),
        FLANNERY_PYROAR(4),
    },
},

[TRAINER_FLANNERY_5] =
{
    FLANNERY_INFO,
    LEADER_REMATCH(5),
    .party = (const struct TrainerMon[]) {
        FLANNERY_MAROWAK_ALOLAN(5),
        FLANNERY_ARCANINE(5),
        FLANNERY_HEATMOR(5),
        FLANNERY_NINETALES(5),
        FLANNERY_TORKOAL(5),
        FLANNERY_PYROAR(5),
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
        .species = SPECIES_WATCHOG,
        .ability = ABILITY_KEEN_EYE,
        IVS(24),
        .moves = {MOVE_FACADE, MOVE_CRUNCH, MOVE_CONFUSE_RAY, MOVE_HYPNOSIS},
        .gender = TRAINER_MON_MALE,
        },
        {
        .lvl = 33,
        .species = SPECIES_GLAMEOW,
        .ability = ABILITY_LIMBER,
        IVS(24),
        .moves = {MOVE_FACADE, MOVE_FEINT_ATTACK, MOVE_FAKE_OUT, MOVE_ASSIST},
        .gender = TRAINER_MON_FEMALE,
        },
        {
        .lvl = 33,
        .species = SPECIES_PERSIAN,
        .ability = ABILITY_TECHNICIAN,
        IVS(24),
        .moves = {MOVE_FACADE, MOVE_BITE, MOVE_FAKE_OUT, MOVE_TAUNT},
        .gender = TRAINER_MON_MALE,
        },
        {
        .lvl = 35,
        .species = SPECIES_DELCATTY,
        .ability = ABILITY_NORMALIZE,
        IVS(30),
        .moves = {MOVE_FACADE, MOVE_WAKE_UP_SLAP, MOVE_CHARM, MOVE_ASSIST},
        .gender = TRAINER_MON_FEMALE,
        .heldItem = ITEM_SITRUS_BERRY,
        .ball = ITEM_POKE_BALL,
        }
    },
},

#define NORMAN_DELCATTY(rematch)                                              \
    {                                                                         \
    REMATCH_MON(DELCATTY, ACE, rematch),                                      \
    .ability = ABILITY_NORMALIZE,                                             \
    .nature = NATURE_MODEST,                                                  \
    EV_SPREAD_SPA_SPE_HP,                                                     \
    .moves = {MOVE_HYPER_VOICE, MOVE_BLIZZARD, MOVE_ASSIST, MOVE_NASTY_PLOT}, \
    .gender = TRAINER_MON_FEMALE,                                             \
    .heldItem = ITEM_SITRUS_BERRY,                                            \
    .ball = ITEM_POKE_BALL,                                                   \
    }

#define NORMAN_PERSIAN(rematch)                                       \
    {                                                                 \
    REMATCH_MON(PERSIAN, TIER2, rematch),                             \
    .ability = ABILITY_TECHNICIAN,                                    \
    .nature = NATURE_JOLLY,                                           \
    EV_SPREAD_ATK_SPE_HP,                                             \
    .moves = {MOVE_COVET, MOVE_BITE, MOVE_AERIAL_ACE, MOVE_FAKE_OUT}, \
    .gender = TRAINER_MON_MALE,                                       \
    .heldItem = ITEM_LIECHI_BERRY,                                    \
    }

#define NORMAN_PURUGLY(rematch)                                                   \
    {                                                                             \
    REMATCH_MON(PURUGLY, TIER2, rematch),                                         \
    .ability = ABILITY_THICK_FAT,                                                 \
    .nature = NATURE_JOLLY,                                                       \
    EV_SPREAD_ATK_SPE_HP,                                                         \
    .moves = {MOVE_BODY_SLAM, MOVE_PLAY_ROUGH, MOVE_FEINT_ATTACK, MOVE_FAKE_OUT}, \
    .gender = TRAINER_MON_FEMALE,                                                 \
    .heldItem = ITEM_ASSAULT_VEST,                                                \
    }

#define NORMAN_WATCHOG(rematch)                                                 \
    {                                                                           \
    REMATCH_MON(WATCHOG, TIER3, rematch),                                       \
    .ability = ABILITY_ANALYTIC,                                                \
    .nature = NATURE_ADAMANT,                                                   \
    EV_SPREAD_ATK_SPE_HP,                                                       \
    .moves = {MOVE_HYPER_FANG, MOVE_SUPER_FANG, MOVE_CRUNCH, MOVE_CONFUSE_RAY}, \
    .gender = TRAINER_MON_MALE,                                                 \
    }

#define NORMAN_ZANGOOSE(rematch)                                                \
    {                                                                           \
    REMATCH_MON(ZANGOOSE, TIER3, rematch),                                      \
    .ability = ABILITY_SHARPNESS,                                               \
    .nature = NATURE_ADAMANT,                                                   \
    EV_SPREAD_ATK_SPE_HP,                                                       \
    .moves = {MOVE_SLASH, MOVE_X_SCISSOR, MOVE_NIGHT_SLASH, MOVE_SWORDS_DANCE}, \
    .gender = TRAINER_MON_MALE,                                                 \
    }

#define NORMAN_GUMSHOOS(rematch)                                                  \
    {                                                                             \
    REMATCH_MON(GUMSHOOS, TIER3, rematch),                                        \
    .ability = ABILITY_STRONG_JAW,                                                \
    .nature = NATURE_ADAMANT,                                                     \
    EV_SPREAD_ATK_SPE_HP,                                                         \
    .moves = {MOVE_HYPER_FANG, MOVE_PSYCHIC_FANGS, MOVE_CRUNCH, MOVE_SCARY_FACE}, \
    .gender = TRAINER_MON_MALE,                                                   \
    }

[TRAINER_NORMAN_2] =
{
    NORMAN_INFO,
    LEADER_REMATCH(2),
    .party = (const struct TrainerMon[]) {
        NORMAN_ZANGOOSE(2),
        NORMAN_WATCHOG(2),
        NORMAN_PURUGLY(2),
        NORMAN_PERSIAN(2),
        NORMAN_DELCATTY(2),
    },
},

[TRAINER_NORMAN_3] =
{
    NORMAN_INFO,
    LEADER_REMATCH(3),
    .party = (const struct TrainerMon[]) {
        NORMAN_ZANGOOSE(3),
        NORMAN_WATCHOG(3),
        NORMAN_PURUGLY(3),
        NORMAN_PERSIAN(3),
        NORMAN_DELCATTY(3),
    },
},

[TRAINER_NORMAN_4] =
{
    NORMAN_INFO,
    LEADER_REMATCH(4),
    .party = (const struct TrainerMon[]) {
        NORMAN_GUMSHOOS(4),
        NORMAN_ZANGOOSE(4),
        NORMAN_WATCHOG(4),
        NORMAN_PURUGLY(4),
        NORMAN_PERSIAN(4),
        NORMAN_DELCATTY(4),
    },
},

[TRAINER_NORMAN_5] =
{
    NORMAN_INFO,
    LEADER_REMATCH(5),
    .party = (const struct TrainerMon[]) {
        NORMAN_GUMSHOOS(5),
        NORMAN_ZANGOOSE(5),
        NORMAN_WATCHOG(5),
        NORMAN_PURUGLY(5),
        NORMAN_PERSIAN(5),
        NORMAN_DELCATTY(5),
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
        .species = SPECIES_DODRIO,
        .ability = ABILITY_EARLY_BIRD,
        IVS(25),
        .moves = {MOVE_AERIAL_ACE, MOVE_DOUBLE_HIT, MOVE_RAGE, MOVE_ACUPRESSURE},
        .gender = TRAINER_MON_FEMALE,
        },
        {
        .lvl = 40,
        .species = SPECIES_NOIVERN,
        .ability = ABILITY_INFILTRATOR,
        IVS(25),
        .moves = {MOVE_AERIAL_ACE, MOVE_DRAGON_BREATH, MOVE_SCREECH, MOVE_SUPERSONIC},
        .gender = TRAINER_MON_FEMALE,
        },
        {
        .lvl = 41,
        .species = SPECIES_BOMBIRDIER,
        .ability = ABILITY_BIG_PECKS,
        IVS(25),
        .moves = {MOVE_AERIAL_ACE, MOVE_FEINT_ATTACK, MOVE_ROCK_TOMB, MOVE_HONE_CLAWS},
        .gender = TRAINER_MON_FEMALE,
        },
        {
        .lvl = 41,
        .species = SPECIES_FLAMIGO,
        .ability = ABILITY_SCRAPPY,
        IVS(26),
        .moves = {MOVE_AERIAL_ACE, MOVE_BRICK_BREAK, MOVE_FOCUS_ENERGY, MOVE_ROOST},
        .gender = TRAINER_MON_FEMALE,
        },
        {
        .lvl = 43,
        .species = SPECIES_CORVIKNIGHT,
        .ability = ABILITY_PRESSURE,
        PERFECT_IVS,
        .moves = {MOVE_AERIAL_ACE, MOVE_IRON_HEAD, MOVE_POWER_TRIP, MOVE_HONE_CLAWS},
        .gender = TRAINER_MON_FEMALE,
        .heldItem = ITEM_SITRUS_BERRY,
        .ball = ITEM_POKE_BALL,
        }
    },
},

#define WINONA_CORVIKNIGHT(rematch)                                                 \
    {                                                                               \
    REMATCH_MON(CORVIKNIGHT, ACE, rematch),                                         \
    .ability = ABILITY_MIRROR_ARMOR,                                                \
    .nature = NATURE_IMPISH,                                                        \
    EV_SPREAD_ATK_DEF_HP,                                                           \
    .moves = {MOVE_DRILL_PECK, MOVE_IRON_HEAD, MOVE_BODY_PRESS, MOVE_IRON_DEFENSE}, \
    .gender = TRAINER_MON_FEMALE,                                                   \
    .heldItem = ITEM_SITRUS_BERRY,                                                  \
    .ball = ITEM_POKE_BALL,                                                         \
    }

#define WINONA_FLAMIGO(rematch)                                                    \
    {                                                                              \
    REMATCH_MON(FLAMIGO, TIER2, rematch),                                          \
    .ability = ABILITY_SCRAPPY,                                                    \
    .nature = NATURE_ADAMANT,                                                      \
    EV_SPREAD_ATK_SPE_HP,                                                          \
    .moves = {MOVE_ACROBATICS, MOVE_HIGH_JUMP_KICK, MOVE_LIQUIDATION, MOVE_ROOST}, \
    .gender = TRAINER_MON_FEMALE,                                                  \
    .heldItem = ITEM_FLYING_GEM,                                                   \
    }

#define WINONA_BOMBIRDIER(rematch)                                             \
    {                                                                          \
    REMATCH_MON(BOMBIRDIER, TIER2, rematch),                                   \
    .ability = ABILITY_BIG_PECKS,                                              \
    .nature = NATURE_ADAMANT,                                                  \
    EV_SPREAD_ATK_SPE_HP,                                                      \
    .moves = {MOVE_DRILL_PECK, MOVE_THROAT_CHOP, MOVE_ROCK_SLIDE, MOVE_ROOST}, \
    .gender = TRAINER_MON_FEMALE,                                              \
    .heldItem = ITEM_SHARP_BEAK,                                               \
    }

#define WINONA_NOIVERN(rematch)                                                  \
    {                                                                            \
    REMATCH_MON(NOIVERN, TIER3, rematch),                                        \
    .ability = ABILITY_INFILTRATOR,                                              \
    .nature = NATURE_TIMID,                                                      \
    EV_SPREAD_SPA_SPE_HP,                                                        \
    .moves = {MOVE_AIR_SLASH, MOVE_DRAGON_PULSE, MOVE_FLAMETHROWER, MOVE_ROOST}, \
    .gender = TRAINER_MON_FEMALE,                                                \
    }

#define WINONA_DODRIO(rematch)                                                     \
    {                                                                              \
    REMATCH_MON(DODRIO, TIER3, rematch),                                           \
    .ability = ABILITY_EARLY_BIRD,                                                 \
    .nature = NATURE_ADAMANT,                                                      \
    EV_SPREAD_ATK_SPE_HP,                                                          \
    .moves = {MOVE_DRILL_PECK, MOVE_BODY_SLAM, MOVE_JUMP_KICK, MOVE_SWORDS_DANCE}, \
    .gender = TRAINER_MON_FEMALE,                                                  \
    }

#define WINONA_XATU(rematch)                                                  \
    {                                                                         \
    REMATCH_MON(XATU, TIER3, rematch),                                        \
    .ability = ABILITY_EARLY_BIRD,                                            \
    .nature = NATURE_MODEST,                                                  \
    EV_SPREAD_SPA_SPE_HP,                                                     \
    .moves = {MOVE_AIR_SLASH, MOVE_PSYCHIC, MOVE_DAZZLING_GLEAM, MOVE_ROOST}, \
    .gender = TRAINER_MON_FEMALE,                                             \
    }

[TRAINER_WINONA_2] =
{
    WINONA_INFO,
    LEADER_REMATCH(2),
    .party = (const struct TrainerMon[]) {
        WINONA_DODRIO(2),
        WINONA_NOIVERN(2),
        WINONA_BOMBIRDIER(2),
        WINONA_FLAMIGO(2),
        WINONA_CORVIKNIGHT(2),
    },
},

[TRAINER_WINONA_3] =
{
    WINONA_INFO,
    LEADER_REMATCH(3),
    .party = (const struct TrainerMon[]) {
        WINONA_DODRIO(3),
        WINONA_NOIVERN(3),
        WINONA_BOMBIRDIER(3),
        WINONA_FLAMIGO(3),
        WINONA_CORVIKNIGHT(3),
    },
},

[TRAINER_WINONA_4] =
{
    WINONA_INFO,
    LEADER_REMATCH(4),
    .party = (const struct TrainerMon[]) {
        WINONA_XATU(4),
        WINONA_DODRIO(4),
        WINONA_NOIVERN(4),
        WINONA_BOMBIRDIER(4),
        WINONA_FLAMIGO(4),
        WINONA_CORVIKNIGHT(4),
    },
},

[TRAINER_WINONA_5] =
{
    WINONA_INFO,
    LEADER_REMATCH(5),
    .party = (const struct TrainerMon[]) {
        WINONA_XATU(5),
        WINONA_DODRIO(5),
        WINONA_NOIVERN(5),
        WINONA_BOMBIRDIER(5),
        WINONA_FLAMIGO(5),
        WINONA_CORVIKNIGHT(5),
    },
},

#define TATE_AND_LIZA_INFO         \
    LEADER_INFO(TATE_AND_LIZA),    \
    .trainerName = _("Tate&Liza"), \
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE

[TRAINER_TATE_AND_LIZA_1] =
{
    TATE_AND_LIZA_INFO,
    .doubleBattle = TRUE,
    .items = {ITEM_HYPER_POTION, ITEM_HYPER_POTION, ITEM_HYPER_POTION, ITEM_HYPER_POTION},
    .partySize = 4,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 49,
        .species = SPECIES_ESPEON,
        .ability = ABILITY_SYNCHRONIZE,
        IVS(30),
        .moves = {MOVE_PSYCHIC, MOVE_POWER_GEM, MOVE_MORNING_SUN, MOVE_PSYCHIC_TERRAIN},
        .gender = TRAINER_MON_FEMALE,
        },
        {
        .lvl = 49,
        .species = SPECIES_ALAKAZAM,
        .ability = ABILITY_INNER_FOCUS,
        IVS(30),
        .moves = {MOVE_PSYCHIC, MOVE_KINESIS, MOVE_REFLECT, MOVE_RECOVER},
        .gender = TRAINER_MON_MALE,
        },
        {
        .lvl = 51,
        .species = SPECIES_MEOWSTIC_FEMALE,
        .ability = ABILITY_KEEN_EYE,
        IVS(30),
        .moves = {MOVE_PSYCHIC, MOVE_SHADOW_BALL, MOVE_ENERGY_BALL, MOVE_SIGNAL_BEAM},
        .gender = TRAINER_MON_FEMALE,
        .heldItem = ITEM_SITRUS_BERRY,
        .ball = ITEM_POKE_BALL,
        },
        {
        .lvl = 51,
        .species = SPECIES_MEOWSTIC,
        .ability = ABILITY_INFILTRATOR,
        IVS(30),
        .moves = {MOVE_PSYCHIC, MOVE_REFLECT, MOVE_LIGHT_SCREEN, MOVE_TEARFUL_LOOK},
        .gender = TRAINER_MON_MALE,
        .heldItem = ITEM_SITRUS_BERRY,
        .ball = ITEM_POKE_BALL,
        }
    },
},

#define TATE_MEOWSTIC(rematch)                                                          \
    {                                                                                   \
    REMATCH_MON(MEOWSTIC, ACE, rematch),                                                \
    .ability = ABILITY_PRANKSTER,                                                       \
    .nature = NATURE_TIMID,                                                             \
    EV_SPREAD_SPA_SPE_HP,                                                               \
    .moves = {MOVE_PSYCHIC, MOVE_PSYCHIC_TERRAIN, MOVE_TEARFUL_LOOK, MOVE_DOUBLE_TEAM}, \
    .gender = TRAINER_MON_MALE,                                                         \
    .heldItem = ITEM_SITRUS_BERRY,                                                      \
    .ball = ITEM_POKE_BALL,                                                             \
    }

#define LIZA_MEOWSTIC(rematch)                                                   \
    {                                                                            \
    REMATCH_MON(MEOWSTIC_FEMALE, ACE, rematch),                                  \
    .ability = ABILITY_COMPETITIVE,                                              \
    .nature = NATURE_MODEST,                                                     \
    EV_SPREAD_SPA_SPE_HP,                                                        \
    .moves = {MOVE_PSYCHIC, MOVE_SHADOW_BALL, MOVE_SIGNAL_BEAM, MOVE_CALM_MIND}, \
    .gender = TRAINER_MON_FEMALE,                                                \
    .heldItem = ITEM_SITRUS_BERRY,                                               \
    .ball = ITEM_POKE_BALL,                                                      \
    }

#define TATE_ALAKAZAM(rematch)                                                  \
    {                                                                           \
    REMATCH_MON(ALAKAZAM, TIER3, rematch),                                      \
    .ability = ABILITY_MAGIC_GUARD,                                             \
    .nature = NATURE_MODEST,                                                    \
    EV_SPREAD_SPA_SPE_HP,                                                       \
    .moves = {MOVE_PSYCHIC, MOVE_DAZZLING_GLEAM, MOVE_RECOVER, MOVE_CALM_MIND}, \
    .gender = TRAINER_MON_MALE,                                                 \
    }

#define LIZA_ESPEON(rematch)                                                       \
    {                                                                              \
    REMATCH_MON(ESPEON, TIER2, rematch),                                           \
    .ability = ABILITY_MAGIC_BOUNCE,                                               \
    .nature = NATURE_MODEST,                                                       \
    EV_SPREAD_SPA_SPE_HP,                                                          \
    .moves = {MOVE_PSYCHIC, MOVE_POWER_GEM, MOVE_PSYCHIC_TERRAIN, MOVE_CALM_MIND}, \
    .gender = TRAINER_MON_FEMALE,                                                  \
    }

#define TATE_GRUMPIG(rematch)                                                      \
    {                                                                              \
    REMATCH_MON(GRUMPIG, TIER2, rematch),                                          \
    .ability = ABILITY_THICK_FAT,                                                  \
    .nature = NATURE_CALM,                                                         \
    EV_SPREAD_SPA_SPD_HP,                                                          \
    .moves = {MOVE_PSYCHIC, MOVE_POWER_GEM, MOVE_DAZZLING_GLEAM, MOVE_MAGIC_COAT}, \
    .gender = TRAINER_MON_MALE,                                                    \
    }

#define LIZA_ESPATHRA(rematch)                                                           \
    {                                                                                    \
    REMATCH_MON(ESPATHRA, TIER3, rematch),                                               \
    .ability = ABILITY_OPPORTUNIST,                                                      \
    .nature = NATURE_TIMID,                                                              \
    EV_SPREAD_SPA_SPE_HP,                                                                \
    .moves = {MOVE_LUMINA_CRASH, MOVE_DAZZLING_GLEAM, MOVE_SHADOW_BALL, MOVE_CALM_MIND}, \
    .gender = TRAINER_MON_FEMALE,                                                        \
    }

[TRAINER_TATE_AND_LIZA_2] =
{
    TATE_AND_LIZA_INFO,
    LEADER_REMATCH(2),
    .party = (const struct TrainerMon[]) {
        TATE_GRUMPIG(2),
        LIZA_ESPEON(2),
        TATE_ALAKAZAM(2),
        LIZA_MEOWSTIC(2),
        TATE_MEOWSTIC(2),
    },
},

[TRAINER_TATE_AND_LIZA_3] =
{
    TATE_AND_LIZA_INFO,
    LEADER_REMATCH(3),
    .party = (const struct TrainerMon[]) {
        TATE_GRUMPIG(3),
        LIZA_ESPEON(3),
        TATE_ALAKAZAM(3),
        LIZA_MEOWSTIC(3),
        TATE_MEOWSTIC(3),
    },
},

[TRAINER_TATE_AND_LIZA_4] =
{
    TATE_AND_LIZA_INFO,
    LEADER_REMATCH(4),
    .party = (const struct TrainerMon[]) {
        LIZA_ESPATHRA(4),
        TATE_GRUMPIG(4),
        LIZA_ESPEON(4),
        TATE_ALAKAZAM(4),
        LIZA_MEOWSTIC(4),
        TATE_MEOWSTIC(4),
    },
},

[TRAINER_TATE_AND_LIZA_5] =
{
    TATE_AND_LIZA_INFO,
    LEADER_REMATCH(5),
    .party = (const struct TrainerMon[]) {
        LIZA_ESPATHRA(5),
        TATE_GRUMPIG(5),
        LIZA_ESPEON(5),
        TATE_ALAKAZAM(5),
        LIZA_MEOWSTIC(5),
        TATE_MEOWSTIC(5),
    },
},

#define GLACIA_INFO             \
    .trainerName = _("Glacia"), \
    LEADER_INFO(GLACIA),        \
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE

[TRAINER_JUAN_1] =
{
    GLACIA_INFO,
    .items = {ITEM_HYPER_POTION, ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE},
    .partySize = 5,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 55,
        .species = SPECIES_VANILLUXE,
        .ability = ABILITY_SNOW_WARNING,
        IVS(24),
        .moves = {MOVE_ICICLE_CRASH, MOVE_FREEZE_DRY, MOVE_ACID_ARMOR, MOVE_MIRROR_COAT},
        .gender = TRAINER_MON_FEMALE,
        },
        {
        .lvl = 55,
        .species = SPECIES_MAMOSWINE,
        .ability = ABILITY_SNOW_CLOAK,
        IVS(24),
        .moves = {MOVE_ICICLE_CRASH, MOVE_EARTHQUAKE, MOVE_ICE_SHARD, MOVE_AMNESIA},
        .gender = TRAINER_MON_FEMALE,
        },
        {
        .lvl = 56,
        .species = SPECIES_FROSMOTH,
        .ability = ABILITY_SHIELD_DUST,
        IVS(24),
        .moves = {MOVE_ICICLE_CRASH, MOVE_BUG_BUZZ, MOVE_TAILWIND, MOVE_QUIVER_DANCE},
        .gender = TRAINER_MON_FEMALE,
        },
        {
        .lvl = 56,
        .species = SPECIES_FROSLASS,
        .ability = ABILITY_SNOW_CLOAK,
        IVS(24),
        .moves = {MOVE_ICICLE_CRASH, MOVE_SHADOW_BALL, MOVE_SNOWSCAPE, MOVE_AURORA_VEIL},
        .gender = TRAINER_MON_FEMALE,
        },
        {
        .lvl = 58,
        .species = SPECIES_WALREIN,
        .ability = ABILITY_ICE_BODY,
        IVS(30),
        .moves = {MOVE_ICICLE_CRASH, MOVE_SURF, MOVE_CRUNCH, MOVE_ROLLOUT},
        .gender = TRAINER_MON_FEMALE,
        .heldItem = ITEM_ICY_ROCK,
        .ball = ITEM_POKE_BALL,
        }
    },
},

#define GLACIA_WALREIN(rematch)                                            \
    {                                                                      \
    REMATCH_MON(WALREIN, ACE, rematch),                                    \
    .ability = ABILITY_ICE_BODY,                                           \
    .nature = NATURE_MODEST,                                               \
    EV_SPREAD_SPA_HP_SPE,                                                  \
    .moves = {MOVE_BLIZZARD, MOVE_SURF, MOVE_SIGNAL_BEAM, MOVE_SNOWSCAPE}, \
    .gender = TRAINER_MON_FEMALE,                                          \
    .heldItem = ITEM_ICY_ROCK,                                             \
    .ball = ITEM_POKE_BALL,                                                \
    }

#define GLACIA_FROSLASS(rematch)                                                  \
    {                                                                             \
    REMATCH_MON(FROSLASS, TIER2, rematch),                                        \
    .ability = ABILITY_SNOW_CLOAK,                                                \
    .nature = NATURE_TIMID,                                                       \
    EV_SPREAD_SPA_SPE_HP,                                                         \
    .moves = {MOVE_BLIZZARD, MOVE_SHADOW_BALL, MOVE_SNOWSCAPE, MOVE_AURORA_VEIL}, \
    .gender = TRAINER_MON_FEMALE,                                                 \
    .heldItem = ITEM_LIGHT_CLAY,                                                  \
    }

#define GLACIA_FROSMOTH(rematch)                                                 \
    {                                                                            \
    REMATCH_MON(FROSMOTH, TIER2, rematch),                                       \
    .ability = ABILITY_ICE_SCALES,                                               \
    .nature = NATURE_MODEST,                                                     \
    EV_SPREAD_SPA_SPD_SPE,                                                       \
    .moves = {MOVE_BLIZZARD, MOVE_BUG_BUZZ, MOVE_GIGA_DRAIN, MOVE_QUIVER_DANCE}, \
    .gender = TRAINER_MON_FEMALE,                                                \
    .heldItem = ITEM_NEVER_MELT_ICE,                                             \
    }

#define GLACIA_MAMOSWINE(rematch)                                                       \
    {                                                                                   \
    REMATCH_MON(MAMOSWINE, TIER3, rematch),                                             \
    .ability = ABILITY_SNOW_CLOAK,                                                      \
    .nature = NATURE_ADAMANT,                                                           \
    EV_SPREAD_ATK_SPE_HP,                                                               \
    .moves = {MOVE_ICICLE_CRASH, MOVE_HIGH_HORSEPOWER, MOVE_ICE_SHARD, MOVE_SNOWSCAPE}, \
    .gender = TRAINER_MON_FEMALE,                                                       \
    }

#define GLACIA_VANILLUXE(rematch)                                                    \
    {                                                                                \
    REMATCH_MON(VANILLUXE, TIER3, rematch),                                          \
    .ability = ABILITY_SNOW_WARNING,                                                 \
    .nature = NATURE_MODEST,                                                         \
    EV_SPREAD_SPA_SPE_HP,                                                            \
    .moves = {MOVE_BLIZZARD, MOVE_FLASH_CANNON, MOVE_HYPER_VOICE, MOVE_SIGNAL_BEAM}, \
    .gender = TRAINER_MON_FEMALE,                                                    \
    }

#define GLACIA_BEARTIC(rematch)                                                   \
    {                                                                             \
    REMATCH_MON(BEARTIC, TIER3, rematch),                                         \
    .ability = ABILITY_SNOW_CLOAK,                                                \
    .nature = NATURE_ADAMANT,                                                     \
    EV_SPREAD_ATK_SPE_HP,                                                         \
    .moves = {MOVE_ICICLE_CRASH, MOVE_PLAY_ROUGH, MOVE_AQUA_JET, MOVE_SNOWSCAPE}, \
    .gender = TRAINER_MON_FEMALE,                                                 \
    }


[TRAINER_JUAN_2] =
{
    GLACIA_INFO,
    LEADER_REMATCH(2),
    .party = (const struct TrainerMon[]) {
        GLACIA_VANILLUXE(2),
        GLACIA_MAMOSWINE(2),
        GLACIA_FROSMOTH(2),
        GLACIA_FROSLASS(2),
        GLACIA_WALREIN(2),
    },
},

[TRAINER_JUAN_3] =
{
    GLACIA_INFO,
    LEADER_REMATCH(3),
    .party = (const struct TrainerMon[]) {
        GLACIA_VANILLUXE(3),
        GLACIA_MAMOSWINE(3),
        GLACIA_FROSMOTH(3),
        GLACIA_FROSLASS(3),
        GLACIA_WALREIN(3),
    },
},

[TRAINER_JUAN_4] =
{
    GLACIA_INFO,
    LEADER_REMATCH(4),
    .party = (const struct TrainerMon[]) {
        GLACIA_BEARTIC(4),
        GLACIA_VANILLUXE(4),
        GLACIA_MAMOSWINE(4),
        GLACIA_FROSMOTH(4),
        GLACIA_FROSLASS(4),
        GLACIA_WALREIN(4),
    },
},

[TRAINER_JUAN_5] =
{
    GLACIA_INFO,
    LEADER_REMATCH(5),
    .party = (const struct TrainerMon[]) {
        GLACIA_BEARTIC(5),
        GLACIA_VANILLUXE(5),
        GLACIA_MAMOSWINE(5),
        GLACIA_FROSMOTH(5),
        GLACIA_FROSLASS(5),
        GLACIA_WALREIN(5),
    },
},

#define ELITE_FOUR_INFO(Trainer, MugshotColor)                             \
    .trainerClass = TRAINER_CLASS_ELITE_FOUR,                              \
    .trainerPic = TRAINER_PIC_ELITE_FOUR_##Trainer,                        \
    .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE}, \
    .mugshotEnabled = TRUE,                                                \
    .mugshotColor = MUGSHOT_TYPE_##MugshotColor,                           \
    BOSS_AI_FLAGS

#define SIDNEY_INFO                \
    ELITE_FOUR_INFO(SIDNEY, DARK), \
    .trainerName = _("Sidney"),    \
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR

#define SIDNEY_ABSOL(Level)                                                           \
    {                                                                                 \
    .lvl = Level,                                                                     \
    .species = SPECIES_ABSOL,                                                         \
    .ability = ABILITY_SHARPNESS,                                                     \
    .nature = NATURE_ADAMANT,                                                         \
    EV_SPREAD_ATK_SPE_HP,                                                             \
    PERFECT_IVS,                                                                      \
    .moves = {MOVE_NIGHT_SLASH, MOVE_PSYCHO_CUT, MOVE_AERIAL_ACE, MOVE_SWORDS_DANCE}, \
    .gender = TRAINER_MON_MALE,                                                       \
    .heldItem = Level < 85 ? ITEM_SITRUS_BERRY : ITEM_ABSOLITE,                       \
    .ball = ITEM_POKE_BALL,                                                           \
    }

#define SIDNEY_SUPPORTING_MON(Level) \
    .lvl = Level,                    \
    PERFECT_IVS,                     \
    .gender = TRAINER_MON_MALE,      \
    .ball = ITEM_DUSK_BALL

#define SIDNEY_CACTURNE(Level)                                                        \
    {                                                                                 \
    SIDNEY_SUPPORTING_MON(Level),                                                     \
    .species = SPECIES_CACTURNE,                                                      \
    .ability = ABILITY_WATER_ABSORB,                                                  \
    .nature = NATURE_MODEST,                                                          \
    EV_SPREAD_SPA_SPE_HP,                                                             \
    .moves = {MOVE_DARK_PULSE, MOVE_ENERGY_BALL, MOVE_LEECH_SEED, MOVE_SPIKY_SHIELD}, \
    }

#define SIDNEY_CRAWDAUNT(Level)                                                 \
    {                                                                           \
    SIDNEY_SUPPORTING_MON(Level),                                               \
    .species = SPECIES_CRAWDAUNT,                                               \
    .ability = ABILITY_HYPER_CUTTER,                                            \
    .nature = NATURE_ADAMANT,                                                   \
    EV_SPREAD_ATK_SPE_HP,                                                       \
    .moves = {MOVE_CRUNCH, MOVE_CRABHAMMER, MOVE_KNOCK_OFF, MOVE_SWORDS_DANCE}, \
    }

#define SIDNEY_SHIFTRY(Level)                                                  \
    {                                                                          \
    SIDNEY_SUPPORTING_MON(Level),                                              \
    .species = SPECIES_SHIFTRY,                                                \
    .ability = ABILITY_WIND_RIDER,                                             \
    .nature = NATURE_ADAMANT,                                                  \
    EV_SPREAD_ATK_SPE_HP,                                                      \
    .moves = {MOVE_NIGHT_SLASH, MOVE_LEAF_BLADE, MOVE_FAKE_OUT, MOVE_ROLLOUT}, \
    }

#define SIDNEY_MIGHTYENA(Level)                                                 \
    {                                                                           \
    SIDNEY_SUPPORTING_MON(Level),                                               \
    .species = SPECIES_MIGHTYENA,                                               \
    .ability = ABILITY_INTIMIDATE,                                              \
    .nature = NATURE_ADAMANT,                                                   \
    EV_SPREAD_ATK_SPE_HP,                                                       \
    .moves = {MOVE_CRUNCH, MOVE_PLAY_ROUGH, MOVE_FIRE_FANG, MOVE_THUNDER_FANG}, \
    }

#define SIDNEY_SHARPEDO(Level)                                                 \
    {                                                                          \
    SIDNEY_SUPPORTING_MON(Level),                                              \
    .species = SPECIES_SHARPEDO,                                               \
    .ability = ABILITY_ROUGH_SKIN,                                             \
    .nature = NATURE_ADAMANT,                                                  \
    EV_SPREAD_ATK_SPE_HP,                                                      \
    .moves = {MOVE_CRUNCH, MOVE_LIQUIDATION, MOVE_POISON_FANG, MOVE_ICE_FANG}, \
    }

[TRAINER_SIDNEY] =
{
    SIDNEY_INFO,
    .partySize = 5,
    .party = (const struct TrainerMon[]) {
        SIDNEY_MIGHTYENA(60),
        SIDNEY_SHIFTRY(60),
        SIDNEY_CRAWDAUNT(61),
        SIDNEY_CACTURNE(61),
        SIDNEY_ABSOL(62),
    },
},

[TRAINER_SIDNEY_REMATCH] =
{
    SIDNEY_INFO,
    .partySize = 6,
    .party = (const struct TrainerMon[]) {
        SIDNEY_SHARPEDO(86),
        SIDNEY_MIGHTYENA(86),
        SIDNEY_SHIFTRY(86),
        SIDNEY_CRAWDAUNT(88),
        SIDNEY_CACTURNE(88),
        SIDNEY_ABSOL(90),
    },
},

#define PHOEBE_INFO                 \
    ELITE_FOUR_INFO(PHOEBE, GHOST), \
    .trainerName = _("Phoebe"),     \
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR

#define PHOEBE_DUSKNOIR(Level)                                                      \
    {                                                                               \
    .lvl = Level,                                                                   \
    .species = SPECIES_DUSKNOIR,                                                    \
    .ability = ABILITY_IRON_FIST,                                                   \
    .nature = NATURE_ADAMANT,                                                       \
    EV_SPREAD_ATK_SPD_HP,                                                           \
    PERFECT_IVS,                                                                    \
    .moves = {MOVE_SHADOW_PUNCH, MOVE_EARTHQUAKE, MOVE_FIRE_PUNCH, MOVE_ICE_PUNCH}, \
    .gender = TRAINER_MON_FEMALE,                                                   \
    .heldItem = ITEM_SITRUS_BERRY,                                                  \
    .ball = ITEM_POKE_BALL,                                                         \
    }

#define PHOEBE_SUPPORTING_MON(Level) \
    .lvl = Level,                    \
    PERFECT_IVS,                     \
    .ball = ITEM_DUSK_BALL

#define PHOEBE_BANETTE(Level)                                                          \
    {                                                                                  \
    PHOEBE_SUPPORTING_MON(Level),                                                      \
    .species = SPECIES_BANETTE,                                                        \
    .ability = ABILITY_CURSED_BODY,                                                    \
    .nature = NATURE_ADAMANT,                                                          \
    EV_SPREAD_ATK_SPE_HP,                                                              \
    .moves = {MOVE_SHADOW_CLAW, MOVE_BODY_SLAM, MOVE_SHADOW_SNEAK, MOVE_SWORDS_DANCE}, \
    .gender = TRAINER_MON_FEMALE,                                                      \
    }

#define PHOEBE_SABLEYE(Level)                                                     \
    {                                                                             \
    PHOEBE_SUPPORTING_MON(Level),                                                 \
    .species = SPECIES_SABLEYE,                                                   \
    .ability = ABILITY_PRANKSTER,                                                 \
    .nature = NATURE_IMPISH,                                                      \
    EV_SPREAD_DEF_HP_SPD,                                                         \
    .moves = {MOVE_FOUL_PLAY, MOVE_CONFUSE_RAY, MOVE_WILL_O_WISP, MOVE_FAKE_OUT}, \
    .gender = TRAINER_MON_FEMALE,                                                 \
    }

#define PHOEBE_SHEDINJA(Level)                                                 \
    {                                                                          \
    PHOEBE_SUPPORTING_MON(Level),                                              \
    .species = SPECIES_SHEDINJA,                                               \
    .ability = ABILITY_WONDER_GUARD,                                           \
    .nature = NATURE_ADAMANT,                                                  \
    EV_SPREAD_ATK_SPE_HP,                                                      \
    .moves = {MOVE_SHADOW_CLAW, MOVE_LEECH_LIFE, MOVE_HEAL_BLOCK, MOVE_SPITE}, \
    }

#define PHOEBE_DUSCLOPS(Level)                                                 \
    {                                                                          \
    PHOEBE_SUPPORTING_MON(Level),                                              \
    .species = SPECIES_DUSCLOPS,                                               \
    .ability = ABILITY_PRESSURE,                                               \
    .nature = NATURE_CALM,                                                     \
    EV_SPREAD_SPD_HP_DEF,                                                      \
    .moves = {MOVE_HEX, MOVE_CONFUSE_RAY, MOVE_NIGHT_SHADE, MOVE_WILL_O_WISP}, \
    .gender = TRAINER_MON_MALE,                                                \
    }

#define PHOEBE_CURSOLA(Level)                                                   \
    {                                                                           \
    PHOEBE_SUPPORTING_MON(Level),                                               \
    .species = SPECIES_CURSOLA,                                                 \
    .ability = ABILITY_PERISH_BODY,                                             \
    .nature = NATURE_MODEST,                                                    \
    EV_SPREAD_SPA_SPD_DEF,                                                      \
    .moves = {MOVE_SHADOW_BALL, MOVE_POWER_GEM, MOVE_SPITE, MOVE_STRENGTH_SAP}, \
    .gender = TRAINER_MON_FEMALE,                                               \
    }

[TRAINER_PHOEBE] =
{
    PHOEBE_INFO,
    .partySize = 5,
    .party = (const struct TrainerMon[]) {
        PHOEBE_DUSCLOPS(61),
        PHOEBE_SHEDINJA(61),
        PHOEBE_SABLEYE(62),
        PHOEBE_BANETTE(62),
        PHOEBE_DUSKNOIR(63),
    },
},

[TRAINER_PHOEBE_REMATCH] =
{
    PHOEBE_INFO,
    .partySize = 6,
    .party = (const struct TrainerMon[]) {
        PHOEBE_DUSCLOPS(86),
        PHOEBE_CURSOLA(86),
        PHOEBE_SHEDINJA(86),
        PHOEBE_SABLEYE(88),
        PHOEBE_BANETTE(88),
        PHOEBE_DUSKNOIR(90),
    },
},

#define JUAN_INFO                 \
    ELITE_FOUR_INFO(JUAN, GRASS), \
    .trainerName = _("Juan"),     \
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR

#define JUAN_WALREIN(Level)                                              \
    {                                                                      \
    .lvl = Level,                                                          \
    .species = SPECIES_WALREIN,                                            \
    .ability = ABILITY_THICK_FAT,                                          \
    .nature = NATURE_MODEST,                                               \
    EV_SPREAD_SPA_HP_SPE,                                                  \
    PERFECT_IVS,                                                           \
    .moves = {MOVE_BLIZZARD, MOVE_SURF, MOVE_SIGNAL_BEAM, MOVE_SNOWSCAPE}, \
    .gender = TRAINER_MON_FEMALE,                                          \
    .heldItem = ITEM_SITRUS_BERRY,                                         \
    .ball = ITEM_POKE_BALL,                                                \
    }

#define JUAN_SUPPORTING_MON(Level) \
    .lvl = Level,                    \
    PERFECT_IVS,                     \
    .ball = ITEM_PREMIER_BALL

#define JUAN_FROSLASS(Level)                                                      \
    {                                                                               \
    JUAN_SUPPORTING_MON(Level),                                                   \
    .species = SPECIES_FROSLASS,                                                    \
    .ability = ABILITY_SNOW_CLOAK,                                                  \
    .nature = NATURE_TIMID,                                                         \
    EV_SPREAD_SPA_SPE_HP,                                                           \
    .moves = {MOVE_BLIZZARD, MOVE_SHADOW_BALL, MOVE_DRAINING_KISS, MOVE_SNOWSCAPE}, \
    .gender = TRAINER_MON_FEMALE,                                                   \
    }

#define JUAN_GLALIE(Level)                                                        \
    {                                                                               \
    JUAN_SUPPORTING_MON(Level),                                                   \
    .species = SPECIES_GLALIE,                                                      \
    .ability = ABILITY_ICE_BODY,                                                    \
    .nature = NATURE_MODEST,                                                        \
    EV_SPREAD_SPA_SPE_HP,                                                           \
    .moves = {MOVE_FREEZE_DRY, MOVE_WEATHER_BALL, MOVE_DARK_PULSE, MOVE_SNOWSCAPE}, \
    .gender = TRAINER_MON_MALE,                                                     \
    }

#define JUAN_CASTFORM(Level)                                                    \
    {                                                                             \
    JUAN_SUPPORTING_MON(Level),                                                 \
    .species = SPECIES_CASTFORM,                                                  \
    .ability = ABILITY_FORECAST,                                                  \
    .nature = NATURE_MODEST,                                                      \
    EV_SPREAD_SPA_SPE_HP,                                                         \
    .moves = {MOVE_BLIZZARD, MOVE_WEATHER_BALL, MOVE_HYDRO_PUMP, MOVE_SNOWSCAPE}, \
    .gender = TRAINER_MON_FEMALE,                                                 \
    }

#define JUAN_SEALEO(Level)                                                   \
    {                                                                          \
    JUAN_SUPPORTING_MON(Level),                                              \
    .species = SPECIES_SEALEO,                                                 \
    .ability = ABILITY_ICE_BODY,                                               \
    .nature = NATURE_ADAMANT,                                                  \
    EV_SPREAD_ATK_HP_SPE,                                                      \
    .moves = {MOVE_ICE_BALL, MOVE_ROLLOUT, MOVE_DEFENSE_CURL, MOVE_SNOWSCAPE}, \
    .gender = TRAINER_MON_MALE,                                                \
    }

#define JUAN_NINETALES(Level)                                                  \
    {                                                                            \
    JUAN_SUPPORTING_MON(Level),                                                \
    .species = SPECIES_NINETALES_ALOLAN,                                         \
    .ability = ABILITY_SNOW_WARNING,                                             \
    .nature = NATURE_TIMID,                                                      \
    EV_SPREAD_SPE_SPD_HP,                                                        \
    .moves = {MOVE_BLIZZARD, MOVE_MOONBLAST, MOVE_AURORA_VEIL, MOVE_NASTY_PLOT}, \
    .gender = TRAINER_MON_FEMALE,                                                \
    .heldItem = ITEM_ICY_ROCK,                                                   \
    }

[TRAINER_GLACIA] =
{
    JUAN_INFO,
    .partySize = 5,
    .party = (const struct TrainerMon[]) {
        JUAN_SEALEO(62),
        JUAN_CASTFORM(62),
        JUAN_GLALIE(63),
        JUAN_FROSLASS(63),
        JUAN_WALREIN(64),
    },
},

[TRAINER_GLACIA_REMATCH] =
{
    JUAN_INFO,
    .partySize = 6,
    .party = (const struct TrainerMon[]) {
        JUAN_SEALEO(86),
        JUAN_NINETALES(86),
        JUAN_CASTFORM(86),
        JUAN_GLALIE(88),
        JUAN_FROSLASS(88),
        JUAN_WALREIN(90),
    },
},

#define DRAKE_INFO                  \
    ELITE_FOUR_INFO(DRAKE, DRAGON), \
    .trainerName = _("Drake"),      \
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR

#define DRAKE_SALAMENCE(Level)                                                           \
    {                                                                                    \
    .lvl = Level,                                                                        \
    .species = SPECIES_SALAMENCE,                                                        \
    .ability = ABILITY_INTIMIDATE,                                                       \
    .nature = NATURE_ADAMANT,                                                            \
    EV_SPREAD_ATK_SPE_HP,                                                                \
    PERFECT_IVS,                                                                         \
    .moves = {MOVE_DRAGON_CLAW, MOVE_DUAL_WINGBEAT, MOVE_ROCK_SLIDE, MOVE_DRAGON_DANCE}, \
    .gender = TRAINER_MON_MALE,                                                          \
    .heldItem = ITEM_SALAMENCITE,                                                        \
    .ball = ITEM_POKE_BALL,                                                              \
    }

#define DRAKE_SUPPORTING_MON(Level) \
    .lvl = Level,                   \
    PERFECT_IVS,                    \
    .ball = ITEM_HEAVY_BALL

#define DRAKE_FLYGON(Level)                                                           \
    {                                                                                 \
    DRAKE_SUPPORTING_MON(Level),                                                      \
    .species = SPECIES_FLYGON,                                                        \
    .ability = ABILITY_LEVITATE,                                                      \
    .nature = NATURE_ADAMANT,                                                         \
    EV_SPREAD_ATK_SPE_HP,                                                             \
    .moves = {MOVE_DRAGON_CLAW, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_DRAGON_DANCE}, \
    .gender = TRAINER_MON_MALE,                                                       \
    }

#define DRAKE_ALTARIA(Level)                                                         \
    {                                                                                \
    DRAKE_SUPPORTING_MON(Level),                                                     \
    .species = SPECIES_ALTARIA,                                                      \
    .ability = ABILITY_FLUFFY,                                                       \
    .nature = NATURE_MODEST,                                                         \
    EV_SPREAD_SPA_DEF_HP,                                                            \
    .moves = {MOVE_DRAGON_PULSE, MOVE_AIR_SLASH, MOVE_MOONBLAST, MOVE_COTTON_GUARD}, \
    .gender = TRAINER_MON_MALE,                                                      \
    }

#define DRAKE_KINGDRA(Level)                                              \
    {                                                                     \
    DRAKE_SUPPORTING_MON(Level),                                          \
    .species = SPECIES_KINGDRA,                                           \
    .ability = ABILITY_SNIPER,                                            \
    .nature = NATURE_MODEST,                                              \
    EV_SPREAD_SPA_SPE_HP,                                                 \
    .moves = {MOVE_DRAGON_PULSE, MOVE_SURF, MOVE_SMOKESCREEN, MOVE_YAWN}, \
    .gender = TRAINER_MON_MALE,                                           \
    }

#define DRAKE_SHELGON(Level)                                                        \
    {                                                                               \
    DRAKE_SUPPORTING_MON(Level),                                                    \
    .species = SPECIES_SHELGON,                                                     \
    .ability = ABILITY_ROCK_HEAD,                                                   \
    .nature = NATURE_IMPISH,                                                        \
    EV_SPREAD_ATK_DEF_HP,                                                           \
    .moves = {MOVE_DRAGON_CLAW, MOVE_ZEN_HEADBUTT, MOVE_DOUBLE_EDGE, MOVE_PROTECT}, \
    .gender = TRAINER_MON_FEMALE,                                                   \
    }

#define DRAKE_DRAGALGE(Level)                                                            \
    {                                                                                    \
    DRAKE_SUPPORTING_MON(Level),                                                         \
    .species = SPECIES_DRAGALGE,                                                         \
    .ability = ABILITY_ADAPTABILITY,                                                     \
    .nature = NATURE_CALM,                                                               \
    EV_SPREAD_SPA_SPD_HP,                                                                \
    .moves = {MOVE_DRAGON_PULSE, MOVE_SLUDGE_BOMB, MOVE_DRAGON_TAIL, MOVE_TOXIC_SPIKES}, \
    .gender = TRAINER_MON_MALE,                                                          \
    }

[TRAINER_DRAKE] =
{
    DRAKE_INFO,
    .partySize = 5,
    .party = (const struct TrainerMon[]) {
        DRAKE_SHELGON(63),
        DRAKE_KINGDRA(63),
        DRAKE_ALTARIA(64),
        DRAKE_FLYGON(64),
        DRAKE_SALAMENCE(66),
    },
},

[TRAINER_DRAKE_REMATCH] =
{
    DRAKE_INFO,
    .partySize = 6,
    .party = (const struct TrainerMon[]) {
        DRAKE_SHELGON(86),
        DRAKE_DRAGALGE(86),
        DRAKE_KINGDRA(86),
        DRAKE_ALTARIA(88),
        DRAKE_FLYGON(88),
        DRAKE_SALAMENCE(90),
    },
},

#define WALLACE_BATTLE(Trainer, AceLevel)                                                  \
[TRAINER_##Trainer] =                                                                      \
{                                                                                          \
    .trainerName = _("Wallace"),                                                           \
    .trainerClass = TRAINER_CLASS_CHAMPION,                                                \
    .trainerPic = TRAINER_PIC_CHAMPION_WALLACE,                                            \
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,                                 \
    .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE}, \
    .mugshotEnabled = TRUE,                                                                \
    .mugshotColor = MUGSHOT_TYPE_WATER,                                                    \
    BOSS_AI_FLAGS,                                                                         \
    .partySize = 6,                                                                        \
    .party = (const struct TrainerMon[]) {                                                 \
        {                                                                                  \
        .lvl = AceLevel - 3,                                                               \
        .species = SPECIES_PELIPPER,                                                       \
        .ability = ABILITY_DRIZZLE,                                                        \
        .nature = NATURE_MODEST,                                                           \
        EV_SPREAD_SPA_DEF_SPE,                                                             \
        PERFECT_IVS,                                                                       \
        .moves = {MOVE_HYDRO_PUMP, MOVE_HURRICANE, MOVE_ROOST, MOVE_TAILWIND},             \
        .gender = TRAINER_MON_MALE,                                                        \
        .heldItem = ITEM_DAMP_ROCK,                                                        \
        .ball = ITEM_ULTRA_BALL,                                                           \
        },                                                                                 \
        {                                                                                  \
        .lvl = AceLevel - 3,                                                               \
        .species = SPECIES_GOREBYSS,                                                       \
        .ability = ABILITY_SWIFT_SWIM,                                                     \
        .nature = NATURE_MODEST,                                                           \
        EV_SPREAD_SPA_SPE_DEF,                                                             \
        PERFECT_IVS,                                                                       \
        .moves = {MOVE_SURF, MOVE_PSYCHIC, MOVE_DRAINING_KISS, MOVE_SHELL_SMASH},          \
        .gender = TRAINER_MON_FEMALE,                                                      \
        .ball = ITEM_DIVE_BALL,                                                            \
        },                                                                                 \
        {                                                                                  \
        .lvl = AceLevel - 3,                                                               \
        .species = SPECIES_RELICANTH,                                                      \
        .ability = ABILITY_SWIFT_SWIM,                                                     \
        .nature = NATURE_IMPISH,                                                           \
        EV_SPREAD_ATK_DEF_HP,                                                              \
        PERFECT_IVS,                                                                       \
        .moves = {MOVE_AQUA_TAIL, MOVE_ROCK_SLIDE, MOVE_YAWN, MOVE_REST},                  \
        .gender = TRAINER_MON_MALE,                                                        \
        .heldItem = ITEM_CHESTO_BERRY,                                                     \
        .ball = ITEM_DIVE_BALL,                                                            \
        .isShiny = TRUE,                                                                   \
        },                                                                                 \
        {                                                                                  \
        .lvl = AceLevel - 2,                                                               \
        .species = SPECIES_LUDICOLO,                                                       \
        .ability = ABILITY_SWIFT_SWIM,                                                     \
        .nature = NATURE_MODEST,                                                           \
        EV_SPREAD_SPA_SPE_HP,                                                              \
        PERFECT_IVS,                                                                       \
        .moves = {MOVE_SURF, MOVE_GIGA_DRAIN, MOVE_LEECH_SEED, MOVE_RAIN_DANCE},           \
        .gender = TRAINER_MON_MALE,                                                        \
        .ball = ITEM_ULTRA_BALL,                                                           \
        },                                                                                 \
        {                                                                                  \
        .lvl = AceLevel - 2,                                                               \
        .species = SPECIES_WAILORD,                                                        \
        .ability = ABILITY_OBLIVIOUS,                                                      \
        .nature = NATURE_MODEST,                                                           \
        EV_SPREAD_SPA_HP_SPE,                                                              \
        PERFECT_IVS,                                                                       \
        .moves = {MOVE_WATER_SPOUT, MOVE_ICE_BEAM, MOVE_AQUA_RING, MOVE_AMNESIA},          \
        .gender = TRAINER_MON_MALE,                                                        \
        .heldItem = ITEM_LEFTOVERS,                                                        \
        .ball = ITEM_DIVE_BALL,                                                            \
        },                                                                                 \
        {                                                                                  \
        .lvl = AceLevel,                                                                   \
        .species = SPECIES_MILOTIC,                                                        \
        .ability = ABILITY_MARVEL_SCALE,                                                   \
        .nature = NATURE_MODEST,                                                           \
        EV_SPREAD_SPA_SPD_SPE,                                                             \
        PERFECT_IVS,                                                                       \
        .moves = {MOVE_HYDRO_PUMP, MOVE_ICE_BEAM, MOVE_COIL, MOVE_RECOVER},                \
        .gender = TRAINER_MON_FEMALE,                                                      \
        .heldItem = ITEM_SITRUS_BERRY,                                                     \
        .ball = ITEM_POKE_BALL,                                                            \
        },                                                                                 \
    },                                                                                     \
}                                                                                          \

WALLACE_BATTLE(WALLACE, 69),
WALLACE_BATTLE(WALLACE_REMATCH, 90),

[TRAINER_STEVEN] =
{
    STEVEN_INFO,
    .trainerPic = TRAINER_PIC_STEVEN,
    .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE},
    BOSS_AI_FLAGS,
    .partySize = 6,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 87,
        .species = SPECIES_SKARMORY,
        .ability = ABILITY_STURDY,
        .nature = NATURE_IMPISH,
        EV_SPREAD_ATK_DEF_HP,
        PERFECT_IVS,
        .moves = {MOVE_STEEL_WING, MOVE_DRILL_PECK, MOVE_BODY_PRESS, MOVE_SPIKES},
        .gender = TRAINER_MON_MALE,
        .heldItem = ITEM_GANLON_BERRY,
        .ball = ITEM_LUXURY_BALL,
        },
        {
        .lvl = 87,
        .species = SPECIES_CLAYDOL,
        .nature = NATURE_CALM,
        EV_SPREAD_DEF_SPD_SPA,
        PERFECT_IVS,
        .moves = {MOVE_REFLECT, MOVE_LIGHT_SCREEN, MOVE_ANCIENT_POWER, MOVE_EARTHQUAKE},
        .ball = ITEM_HEAVY_BALL,
        },
        {
        .lvl = 88,
        .species = SPECIES_JIRACHI,
        .nature = NATURE_MODEST,
        EV_SPREAD_SPA_SPE_SPD,
        PERFECT_IVS,
        .moves = {MOVE_DOOM_DESIRE, MOVE_FLASH_CANNON, MOVE_PSYCHIC, MOVE_CALM_MIND},
        .heldItem = ITEM_KINGS_ROCK,
        .ball = ITEM_CHERISH_BALL,
        .nickname = COMPOUND_STRING("Devon"),
        },
        {
        STEVEN_MAWILE(88),
        .heldItem = ITEM_LIFE_ORB,
        },
        {
        STEVEN_AGGRON(89),
        .heldItem = ITEM_SHUCA_BERRY,
        },
        {
        STEVEN_PERRSERKER(90),
        .heldItem = ITEM_METAL_COAT,
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

#define GABBY_AND_TY_INFO \
    .trainerName = _("Gabby & Ty"),                               \
    .trainerClass = TRAINER_CLASS_INTERVIEWER,                    \
    .trainerPic = TRAINER_PIC_INTERVIEWER,                        \
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTERVIEWER, \
    .doubleBattle = TRUE,                                         \
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY,  \
    .partySize = 2

#define GABBY_TOXEL(Level)                                                     \
    .lvl = Level,                                                              \
    .species = Level < REMATCH_3_LEVEL_6 ? SPECIES_TOXEL : SPECIES_TOXTRICITY, \
    .ability = ABILITY_PUNK_ROCK,                                              \
    .gender = TRAINER_MON_FEMALE

#define TY_KLINK(Level) \
    .lvl = Level,       \
    .species = Level < REMATCH_2_LEVEL_6 ? SPECIES_KLINK : (Level < ENDGAME_REMATCH_2_LEVEL ? SPECIES_KLANG : SPECIES_KLINKLANG), \
    .ability = ABILITY_CLEAR_BODY

[TRAINER_GABBY_AND_TY_1] =
{
    GABBY_AND_TY_INFO,
    .party = (const struct TrainerMon[]) {
        {
        TY_KLINK(24),
        IVS(6),
        },
        {
        GABBY_TOXEL(24),
        IVS(6),
        }
    },
},

[TRAINER_GABBY_AND_TY_2] =
{
    GABBY_AND_TY_INFO,
    .party = (const struct TrainerMon[]) {
        {
        TY_KLINK(REMATCH_2_LEVEL_1),
        IVS(12),
        },
        {
        GABBY_TOXEL(REMATCH_2_LEVEL_1),
        IVS(12),
        }
    },
},

[TRAINER_GABBY_AND_TY_3] =
{
    GABBY_AND_TY_INFO,
    .party = (const struct TrainerMon[]) {
        {
        TY_KLINK(REMATCH_3_LEVEL_1),
        IVS(18),
        },
        {
        GABBY_TOXEL(REMATCH_3_LEVEL_1),
        IVS(18),
        }
    },
},

[TRAINER_GABBY_AND_TY_4] =
{
    GABBY_AND_TY_INFO,
    .party = (const struct TrainerMon[]) {
        {
        TY_KLINK(REMATCH_4_LEVEL_1),
        IVS(24),
        },
        {
        GABBY_TOXEL(REMATCH_4_LEVEL_1),
        IVS(24),
        }
    },
},

[TRAINER_GABBY_AND_TY_5] =
{
    GABBY_AND_TY_INFO,
    .party = (const struct TrainerMon[]) {
        {
        TY_KLINK(REMATCH_5_LEVEL_1),
        IVS(30),
        },
        {
        GABBY_TOXEL(REMATCH_5_LEVEL_1),
        IVS(30),
        }
    },
},

[TRAINER_GABBY_AND_TY_6] =
{
    GABBY_AND_TY_INFO,
    .party = (const struct TrainerMon[]) {
        {
        TY_KLINK(ENDGAME_REMATCH_2_LEVEL),
        IVS(30),
        .moves = {MOVE_GEAR_GRIND, MOVE_ZAP_CANNON, MOVE_LOCK_ON, MOVE_SHIFT_GEAR},
        },
        {
        GABBY_TOXEL(ENDGAME_REMATCH_2_LEVEL),
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
    .trainerClass = TRAINER_CLASS_TEAM_MAGMA,               \
    .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,                \
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA, \
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE

#define MAGMA_GRUNT_F_INFO                                                     \
    .trainerClass = TRAINER_CLASS_TEAM_MAGMA,                                  \
    .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,                                   \
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_MAGMA, \
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE

#define MAGMA_HIDEOUT_LEVEL 45
#define SPACE_CENTER_GRUNT_LEVEL 47

#define LANDON_BATTLE(Location, Level)                                                     \
[TRAINER_LANDON_##Location] =                                                              \
{                                                                                          \
    .trainerName = _("Landon"),                                                            \
    MAGMA_GRUNT_M_INFO,                                                                    \
    .partySize = 1,                                                                        \
    .party = (const struct TrainerMon[]) {                                                 \
        {                                                                                  \
        .lvl = Level,                                                                      \
        .species = Level < SPACE_CENTER_GRUNT_LEVEL ? SPECIES_DRILBUR : SPECIES_EXCADRILL, \
        .ability = ABILITY_SAND_FORCE,                                                     \
        .gender = TRAINER_MON_MALE,                                                        \
        }                                                                                  \
    },                                                                                     \
}

#define GINNY_BATTLE(Location, Level)                                                        \
[TRAINER_GINNY_##Location] =                                                                 \
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

#define TERRANCE_BATTLE(Location, Level)                                                \
[TRAINER_TERRANCE_##Location] =                                                         \
{                                                                                       \
    .trainerName = _("Terrance"),                                                       \
    MAGMA_GRUNT_M_INFO,                                                                 \
    .partySize = 1,                                                                     \
    .party = (const struct TrainerMon[]) {                                              \
        {                                                                               \
        .lvl = Level,                                                                   \
        .species = Level < SPACE_CENTER_GRUNT_LEVEL ? SPECIES_BALTOY : SPECIES_CLAYDOL, \
        .ability = ABILITY_LEVITATE,                                                    \
        IVS(6),                                                                         \
        .gender = TRAINER_MON_NONE,                                                     \
        }                                                                               \
    },                                                                                  \
}

#define JORDAN_BATTLE(Location, Level)                                                  \
[TRAINER_JORDAN_##Location] =                                                           \
{                                                                                       \
    .trainerName = _("Jordan"),                                                         \
    MAGMA_GRUNT_F_INFO,                                                                 \
    .partySize = 1,                                                                     \
    .party = (const struct TrainerMon[]) {                                              \
        {                                                                               \
        .lvl = Level,                                                                   \
        .species = Level < SPACE_CENTER_GRUNT_LEVEL ? SPECIES_RHYHORN : SPECIES_RHYDON, \
        .ability = ABILITY_ROCK_HEAD,                                                   \
        .gender = TRAINER_MON_FEMALE,                                                   \
        }                                                                               \
    },                                                                                  \
}

#define GAETANO_BATTLE(Location, Level)                                                  \
[TRAINER_GAETANO_##Location] =                                                           \
{                                                                                        \
    .trainerName = _("Gaetano"),                                                         \
    MAGMA_GRUNT_M_INFO,                                                                  \
    .partySize = 1,                                                                      \
    .party = (const struct TrainerMon[]) {                                               \
        {                                                                                \
        .lvl = Level,                                                                    \
        .species = Level < SPACE_CENTER_GRUNT_LEVEL ? SPECIES_DIGLETT : SPECIES_DUGTRIO, \
        .ability = ABILITY_SAND_VEIL,                                                    \
        .gender = TRAINER_MON_MALE,                                                      \
        }                                                                                \
    },                                                                                   \
}

#define WALKER_BATTLE(Location, Level)                                                  \
[TRAINER_WALKER_##Location] =                                                           \
{                                                                                       \
    .trainerName = _("Walker"),                                                         \
    MAGMA_GRUNT_M_INFO,                                                                 \
    .partySize = 1,                                                                     \
    .party = (const struct TrainerMon[]) {                                              \
        {                                                                               \
        .lvl = Level,                                                                   \
        .species = Level < SPACE_CENTER_GRUNT_LEVEL ? SPECIES_CUBONE : SPECIES_MAROWAK, \
        .ability = ABILITY_ROCK_HEAD,                                                   \
        .gender = TRAINER_MON_MALE,                                                     \
        }                                                                               \
    },                                                                                  \
}



#define AQUA_GRUNT_M_INFO                                  \
    .trainerClass = TRAINER_CLASS_TEAM_AQUA,               \
    .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,                \
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA, \
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE

#define AQUA_GRUNT_F_INFO                                                     \
    .trainerClass = TRAINER_CLASS_TEAM_AQUA,                                  \
    .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,                                   \
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_AQUA, \
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

#define AQUA_HIDEOUT_LEVEL 45
#define SEAFLOOR_CAVERN_LEVEL 52

#define MARINA_BATTLE(Location, Level)                                                \
[TRAINER_MARINA_##Location] =                                                         \
{                                                                                     \
    .trainerName = _("Marina"),                                                       \
    AQUA_GRUNT_F_INFO,                                                                \
    .partySize = 2,                                                                   \
    .party = (const struct TrainerMon[]) {                                            \
        {                                                                             \
        .lvl = Level,                                                                 \
        .species = Level < AQUA_HIDEOUT_LEVEL ? SPECIES_POLIWAG : (Level < SEAFLOOR_CAVERN_LEVEL ? SPECIES_POLIWHIRL : SPECIES_POLIWRATH), \
        .ability = ABILITY_SWIFT_SWIM,                                                \
        .gender = TRAINER_MON_FEMALE,                                                 \
        },                                                                            \
        {                                                                             \
        .lvl = Level,                                                                 \
        .species = Level < SEAFLOOR_CAVERN_LEVEL ? SPECIES_DUCKLETT : SPECIES_SWANNA, \
        .ability = ABILITY_BIG_PECKS,                                                 \
        .gender = TRAINER_MON_FEMALE,                                                 \
        }                                                                             \
    },                                                                                \
}

#define MALIK_BATTLE(Location, Level)                                                      \
[TRAINER_MALIK_##Location] =                                                               \
{                                                                                          \
    .trainerName = _("Malik"),                                                             \
    AQUA_GRUNT_M_INFO,                                                                     \
    .partySize = 2,                                                                        \
    .party = (const struct TrainerMon[]) {                                                 \
        {                                                                                  \
        .lvl = Level,                                                                      \
        .species = Level < AQUA_HIDEOUT_LEVEL ? SPECIES_POLIWAG : (Level < SEAFLOOR_CAVERN_LEVEL ? SPECIES_POLIWHIRL : SPECIES_POLITOED), \
        .ability = ABILITY_SWIFT_SWIM,                                                     \
        .gender = TRAINER_MON_MALE,                                                        \
        },                                                                                 \
        {                                                                                  \
        .lvl = Level,                                                                      \
        .species = Level < SEAFLOOR_CAVERN_LEVEL ? SPECIES_ARROKUDA : SPECIES_BARRASKEWDA, \
        .ability = ABILITY_SWIFT_SWIM,                                                     \
        .gender = TRAINER_MON_MALE,                                                        \
        }                                                                                  \
    },                                                                                     \
}

#define BERYL_BATTLE(Location, Level)                                                   \
[TRAINER_BERYL_##Location] =                                                            \
{                                                                                       \
    .trainerName = _("Beryl"),                                                          \
    AQUA_GRUNT_M_INFO,                                                                  \
    .partySize = 2,                                                                     \
    .party = (const struct TrainerMon[]) {                                              \
        {                                                                               \
        .lvl = Level,                                                                   \
        .species = Level < SEAFLOOR_CAVERN_LEVEL ? SPECIES_WINGULL : SPECIES_PELIPPER,  \
        .ability = 1,                                                                   \
        .gender = TRAINER_MON_MALE,                                                     \
        },                                                                              \
        {                                                                               \
        .lvl = Level,                                                                   \
        .species = Level < SEAFLOOR_CAVERN_LEVEL ? SPECIES_BARBOACH : SPECIES_WHISCASH, \
        .ability = ABILITY_OBLIVIOUS,                                                   \
        .gender = TRAINER_MON_MALE,                                                     \
        }                                                                               \
    },                                                                                  \
}

#define NERISSA_BATTLE(Location, Level)                                               \
[TRAINER_NERISSA_##Location] =                                                        \
{                                                                                     \
    .trainerName = _("Nerissa"),                                                      \
    AQUA_GRUNT_F_INFO,                                                                \
    .partySize = 2,                                                                   \
    .party = (const struct TrainerMon[]) {                                            \
        {                                                                             \
        .lvl = Level,                                                                 \
        .species = Level < SEAFLOOR_CAVERN_LEVEL ? SPECIES_WAILMER : SPECIES_WAILORD, \
        .ability = ABILITY_WATER_VEIL,                                                \
        .gender = TRAINER_MON_FEMALE,                                                 \
        },                                                                            \
        {                                                                             \
        .lvl = Level,                                                                 \
        .species = Level < SEAFLOOR_CAVERN_LEVEL ? SPECIES_BUIZEL : SPECIES_FLOATZEL, \
        .ability = ABILITY_SWIFT_SWIM,                                                \
        .gender = TRAINER_MON_FEMALE,                                                 \
        }                                                                             \
    },                                                                                \
}



#define TABITHA_BATTLE(Location, AceLevel, IVs)                                           \
[TRAINER_TABITHA_##Location] =                                                            \
{                                                                                         \
    .trainerName = _("Tabitha"),                                                          \
    .trainerClass = TRAINER_CLASS_MAGMA_ADMIN,                                            \
    .trainerPic = TRAINER_PIC_MAGMA_ADMIN_M,                                              \
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,                               \
    BOSS_AI_FLAGS,                                                                        \
    .partySize = 3,                                                                       \
    .party = (const struct TrainerMon[]) {                                                \
        {                                                                                 \
        .lvl = (AceLevel - 2),                                                            \
        .species = AceLevel < REMATCH_3_LEVEL_6 ? SPECIES_SANDSHREW : SPECIES_SANDSLASH,  \
        .ability = ABILITY_SAND_VEIL,                                                     \
        IVS(IVs),                                                                         \
        .gender = TRAINER_MON_MALE,                                                       \
        },                                                                                \
        {                                                                                 \
        .lvl = (AceLevel - 2),                                                            \
        .species = AceLevel < REMATCH_3_LEVEL_6 ? SPECIES_DRILBUR : SPECIES_EXCADRILL,    \
        .ability = ABILITY_SAND_FORCE,                                                    \
        IVS(IVs),                                                                         \
        .gender = TRAINER_MON_MALE,                                                       \
        },                                                                                \
        {                                                                                 \
        .lvl = AceLevel,                                                                  \
        .species = AceLevel < REMATCH_3_LEVEL_6 ? SPECIES_SILICOBRA : SPECIES_SANDACONDA, \
        .ability = ABILITY_SAND_SPIT,                                                     \
        IVS(IVs),                                                                         \
        .gender = TRAINER_MON_MALE,                                                       \
        }                                                                                 \
    },                                                                                    \
}

#define COURTNEY_BATTLE(Location, AceLevel, IVs)                                          \
[TRAINER_COURTNEY_##Location] =                                                           \
{                                                                                         \
    .trainerName = _("Courtney"),                                                         \
    .trainerClass = TRAINER_CLASS_MAGMA_ADMIN,                                            \
    .trainerPic = TRAINER_PIC_MAGMA_ADMIN_F,                                              \
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_MAGMA,            \
    BOSS_AI_FLAGS,                                                                        \
    .partySize = 3,                                                                       \
    .party = (const struct TrainerMon[]) {                                                \
        {                                                                                 \
        .lvl = (AceLevel - 2),                                                            \
        .species = AceLevel < REMATCH_3_LEVEL_6 ? SPECIES_CUBONE : SPECIES_MAROWAK,       \
        .ability = ABILITY_ROCK_HEAD,                                                     \
        IVS(IVs),                                                                         \
        .gender = TRAINER_MON_FEMALE,                                                     \
        },                                                                                \
        {                                                                                 \
        .lvl = (AceLevel - 2),                                                            \
        .species = AceLevel < REMATCH_3_LEVEL_6 ? SPECIES_DIGLETT : SPECIES_DUGTRIO,      \
        .ability = ABILITY_SAND_VEIL,                                                     \
        IVS(IVs),                                                                         \
        .gender = TRAINER_MON_FEMALE,                                                     \
        },                                                                                \
        {                                                                                 \
        .lvl = AceLevel,                                                                  \
        .species = AceLevel < REMATCH_3_LEVEL_6 ? SPECIES_HIPPOPOTAS : SPECIES_HIPPOWDON, \
        .ability = ABILITY_SAND_STREAM,                                                   \
        IVS(IVs),                                                                         \
        .gender = TRAINER_MON_FEMALE,                                                     \
        }                                                                                 \
    },                                                                                    \
}

#define SHELLY_BATTLE(Location, AceLevel, IVs)                                          \
[TRAINER_SHELLY_##Location] =                                                           \
{                                                                                       \
    .trainerName = _("Shelly"),                                                         \
    .trainerClass = TRAINER_CLASS_AQUA_ADMIN,                                           \
    .trainerPic = TRAINER_PIC_AQUA_ADMIN_F,                                             \
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_AQUA,           \
    BOSS_AI_FLAGS,                                                                      \
    .partySize = 3,                                                                     \
    .party = (const struct TrainerMon[]) {                                              \
        {                                                                               \
        .lvl = (AceLevel - 2),                                                          \
        .species = AceLevel < REMATCH_3_LEVEL_6 ? SPECIES_DUCKLETT : SPECIES_SWANNA,    \
        .ability = ABILITY_KEEN_EYE,                                                    \
        IVS(IVs),                                                                       \
        .gender = TRAINER_MON_NONE,                                                     \
        },                                                                              \
        {                                                                               \
        .lvl = (AceLevel - 2),                                                          \
        .species = AceLevel < REMATCH_3_LEVEL_6 ? SPECIES_POLIWHIRL : SPECIES_POLITOED, \
        .ability = ABILITY_WATER_ABSORB,                                                \
        IVS(IVs),                                                                       \
        .gender = TRAINER_MON_FEMALE,                                                   \
        },                                                                              \
        {                                                                               \
        .lvl = AceLevel,                                                                \
        .species = SPECIES_GOREBYSS,                                                    \
        .ability = ABILITY_SWIFT_SWIM,                                                  \
        IVS(IVs),                                                                       \
        .gender = TRAINER_MON_FEMALE,                                                   \
        }                                                                               \
    },                                                                                  \
}

#define MATT_BATTLE(Location, AceLevel, IVs)               \
[TRAINER_MATT_##Location] =                                \
{                                                          \
    .trainerName = _("Matt"),                              \
    .trainerClass = TRAINER_CLASS_AQUA_ADMIN,              \
    .trainerPic = TRAINER_PIC_AQUA_ADMIN_M,                \
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA, \
    BOSS_AI_FLAGS,                                         \
    .partySize = 3,                                        \
    .party = (const struct TrainerMon[]) {                 \
        {                                                  \
        .lvl = (AceLevel - 2),                             \
        .species = SPECIES_GYARADOS,                       \
        .ability = ABILITY_INTIMIDATE,                     \
        IVS(IVs),                                          \
        .gender = TRAINER_MON_MALE,                        \
        },                                                 \
        {                                                  \
        .lvl = (AceLevel - 2),                             \
        .species = SPECIES_POLIWRATH,                      \
        .ability = ABILITY_DAMP,                           \
        IVS(IVs),                                          \
        .gender = TRAINER_MON_MALE,                        \
        },                                                 \
        {                                                  \
        .lvl = AceLevel,                                   \
        .species = SPECIES_HUNTAIL,                        \
        .ability = ABILITY_SWIFT_SWIM,                     \
        IVS(IVs),                                          \
        .gender = TRAINER_MON_MALE,                        \
        }                                                  \
    },                                                     \
}

#define MAXIE_INFO                                          \
    .trainerName = _("Maxie"),                              \
    .trainerClass = TRAINER_CLASS_MAGMA_LEADER,             \
    .trainerPic = TRAINER_PIC_MAGMA_LEADER_MAXIE,           \
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA, \
    BOSS_AI_FLAGS

#define HUMPHREY(Level)                                       \
    .lvl = Level,                                             \
    .species = Level < 33 ? SPECIES_NUMEL : SPECIES_CAMERUPT, \
    .ability = 1,                                             \
    .nature = NATURE_MODEST,                                  \
    PERFECT_IVS,                                              \
    .gender = TRAINER_MON_MALE,                               \
    .ball = ITEM_POKE_BALL,                                   \
    .nickname = COMPOUND_STRING("Humphrey")

#define MAXIE_RHYHORN(Level)    \
    {                           \
    .lvl = Level,               \
    .species = Level < 42 ? SPECIES_RHYHORN : (Level < (MAXIE_SPACE_CENTER_ACE_LEVEL - 1) ? SPECIES_RHYDON : SPECIES_RHYPERIOR), \
    .ability = 2,               \
    IVS(18),                    \
    .gender = TRAINER_MON_MALE, \
    }

#define MAXIE_TRAPINCH(Level)                                                                   \
    {                                                                                           \
    .lvl = Level,                                                                               \
    .species = Level < 35 ? SPECIES_TRAPINCH : (Level < 45 ? SPECIES_VIBRAVA : SPECIES_FLYGON), \
    IVS(18),                                                                                    \
    }

#define MAXIE_SANDILE(Level)                                                                        \
    {                                                                                               \
    .lvl = Level,                                                                                   \
    .species = Level < 29 ? SPECIES_SANDILE : (Level < 40 ? SPECIES_KROKOROK : SPECIES_KROOKODILE), \
    .ability = ABILITY_INTIMIDATE,                                                                  \
    IVS(18),                                                                                        \
    .gender = TRAINER_MON_MALE,                                                                     \
    }

#define ARCHIE_INFO                                        \
    .trainerName = _("Archie"),                            \
    .trainerClass = TRAINER_CLASS_AQUA_LEADER,             \
    .trainerPic = TRAINER_PIC_AQUA_LEADER_ARCHIE,          \
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA, \
    BOSS_AI_FLAGS

#define FINNEAS(Level)                                           \
    .lvl = Level,                                                \
    .species = Level < 30 ? SPECIES_CARVANHA : SPECIES_SHARPEDO, \
    .ability = ABILITY_ROUGH_SKIN,                               \
    .nature = NATURE_ADAMANT,                                    \
    PERFECT_IVS,                                                 \
    .gender = TRAINER_MON_MALE,                                  \
    .ball = ITEM_POKE_BALL,                                      \
    .nickname = COMPOUND_STRING("Finneas")

#define ARCHIE_ARROKUDA(Level)                                      \
    {                                                               \
    .lvl = Level,                                                   \
    .species = Level < 26 ? SPECIES_ARROKUDA : SPECIES_BARRASKEWDA, \
    .ability = ABILITY_SWIFT_SWIM,                                  \
    IVS(18),                                                        \
    .gender = TRAINER_MON_MALE,                                     \
    }

#define ARCHIE_WAILMER(Level)                                  \
    {                                                          \
    .lvl = Level,                                              \
    .species = Level < 40 ? SPECIES_WAILMER : SPECIES_WAILORD, \
    .ability = ABILITY_OBLIVIOUS,                              \
    IVS(18),                                                   \
    .gender = TRAINER_MON_MALE,                                \
    }



//Route 102
#define CALVIN_INFO             \
    .trainerName = _("Calvin"), \
    YOUNGSTER_INFO,             \
    MINI_BOSS_AI_FLAGS

#define MEERO(Level)                                          \
    .lvl = Level,                                             \
    .species = Level < 20 ? SPECIES_PATRAT : SPECIES_WATCHOG, \
    .ability = ABILITY_KEEN_EYE,                              \
    .nature = NATURE_JOLLY,                                   \
    .gender = TRAINER_MON_MALE,                               \
    .nickname = COMPOUND_STRING("Meero")

#define CALVIN_WATTREL(Level)                                                     \
    .lvl = Level,                                                                 \
    .species = Level < REMATCH_3_LEVEL_6 ? SPECIES_WATTREL : SPECIES_KILOWATTREL, \
    .ability = ABILITY_WIND_POWER,                                                \
    .gender = TRAINER_MON_MALE                                                    \

#define CALVIN_POLIWRATH(Level)      \
    .lvl = Level,                    \
    .species = SPECIES_POLIWRATH,    \
    .ability = ABILITY_WATER_ABSORB, \
    .gender = TRAINER_MON_MALE       \

[TRAINER_CALVIN_1] =
{
    CALVIN_INFO,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        MEERO(5),
        }
    },
},

[TRAINER_CALVIN_2] =
{
    CALVIN_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        CALVIN_WATTREL(REMATCH_2_LEVEL_2),
        IVS(2),
        },
        {
        MEERO(REMATCH_2_LEVEL_1),
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
        CALVIN_WATTREL(REMATCH_3_LEVEL_2),
        IVS(3),
        },
        {
        MEERO(REMATCH_3_LEVEL_1),
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
        CALVIN_POLIWRATH(REMATCH_4_LEVEL_2),
        IVS(4),
        },
        {
        CALVIN_WATTREL(REMATCH_4_LEVEL_2),
        IVS(4),
        },
        {
        MEERO(REMATCH_4_LEVEL_1),
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
        CALVIN_POLIWRATH(REMATCH_5_LEVEL_2),
        IVS(5),
        },
        {
        CALVIN_WATTREL(REMATCH_5_LEVEL_2),
        IVS(5),
        },
        {
        MEERO(REMATCH_5_MINI_BOSS),
        EV_SPREAD_ATK_SPE_HP,
        PERFECT_IVS,
        .moves = {MOVE_HYPER_FANG, MOVE_CRUNCH, MOVE_LOW_KICK, MOVE_CONFUSE_RAY},
        .heldItem = ITEM_SITRUS_BERRY,
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
        .species = SPECIES_SURSKIT,
        },
        {
        .lvl = 4,
        .species = SPECIES_CATERPIE,
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
        .species = SPECIES_ROOKIDEE,
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
        .species = SPECIES_PURRLOIN,
        },
        {
        .lvl = 4,
        .species = SPECIES_SHROOMISH,
        }
    },
},

//Route 104 (south)
#define WINSTON_INFO             \
    .trainerName = _("Winston"), \
    RICH_BOY_INFO,               \
    MINI_BOSS_AI_FLAGS

#define MR_CAT(Level)                                        \
    RICH_BOY_MON(Level),                                     \
    .species = Level < 35 ? SPECIES_LITLEO : SPECIES_PYROAR, \
    .ability = ABILITY_RIVALRY,                              \
    .gender = TRAINER_MON_MALE,                              \
    .nickname = COMPOUND_STRING("Mr. Cat")

#define MR_BRAT(Level)                                                      \
    RICH_BOY_MON(Level),                                                    \
    .species = Level < 28 ? SPECIES_MEOWTH_ALOLAN : SPECIES_PERSIAN_ALOLAN, \
    .ability = 0,                                                           \
    .gender = TRAINER_MON_MALE,                                             \
    .nickname = COMPOUND_STRING("Mr. Brat")

#define MR_BAT(Level)                                                        \
    RICH_BOY_MON(Level),                                                     \
    .species = Level < REMATCH_3_LEVEL_6 ? SPECIES_WOOBAT : SPECIES_SWOOBAT, \
    .ability = ABILITY_UNAWARE,                                              \
    .gender = TRAINER_MON_MALE,                                              \
    .nickname = COMPOUND_STRING("Mr. Bat")

#define MR_FAT(Level)                                                          \
    RICH_BOY_MON(Level),                                                       \
    .species = Level < REMATCH_4_LEVEL_6 ? SPECIES_MUNCHLAX : SPECIES_SNORLAX, \
    .ability = ABILITY_THICK_FAT,                                              \
    .gender = TRAINER_MON_MALE,                                                \
    .nickname = COMPOUND_STRING("Mr. Fat")

#define MR_XAT(Level)              \
    RICH_BOY_MON(Level),           \
    .species = SPECIES_XATU,       \
    .ability = ABILITY_EARLY_BIRD, \
    .gender = TRAINER_MON_MALE,    \
    .nickname = COMPOUND_STRING("Mr. Xat")

[TRAINER_WINSTON_1] =
{
    WINSTON_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        MR_BRAT(7),
        },
        {
        MR_CAT(7),
        }
    },
},

[TRAINER_WINSTON_2] =
{
    WINSTON_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        MR_BAT(REMATCH_2_LEVEL_2),
        },
        {
        MR_BRAT(REMATCH_2_LEVEL_2),
        },
        {
        MR_CAT(REMATCH_2_LEVEL_1),
        }
    },
},

[TRAINER_WINSTON_3] =
{
    WINSTON_INFO,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        MR_FAT(REMATCH_3_LEVEL_2),
        },
        {
        MR_BAT(REMATCH_3_LEVEL_2),
        },
        {
        MR_BRAT(REMATCH_3_LEVEL_2),
        },
        {
        MR_CAT(REMATCH_3_LEVEL_1),
        }
    },
},

[TRAINER_WINSTON_4] =
{
    WINSTON_INFO,
    .partySize = 4,
    .party = (const struct TrainerMon[]) {
        {
        MR_XAT(REMATCH_4_LEVEL_2),
        IVS(24),
        },
        {
        MR_FAT(REMATCH_4_LEVEL_2),
        },
        {
        MR_BAT(REMATCH_4_LEVEL_2),
        },
        {
        MR_BRAT(REMATCH_4_LEVEL_2),
        },
        {
        MR_CAT(REMATCH_4_LEVEL_1),
        }
    },
},

[TRAINER_WINSTON_5] =
{
    WINSTON_INFO,
    .partySize = 4,
    .party = (const struct TrainerMon[]) {
        {
        MR_XAT(REMATCH_5_LEVEL_2),
        IVS(24),
        .moves = {MOVE_PSYCHIC, MOVE_AIR_SLASH, MOVE_OMINOUS_WIND, MOVE_TAILWIND},
        },
        {
        MR_FAT(REMATCH_5_LEVEL_2),
        IVS(24),
        .moves = {MOVE_BODY_SLAM, MOVE_CRUNCH, MOVE_HIGH_HORSEPOWER, MOVE_BELLY_DRUM},
        },
        {
        MR_BAT(REMATCH_5_LEVEL_2),
        IVS(24),
        .moves = {MOVE_PSYCHIC, MOVE_AIR_SLASH, MOVE_ATTRACT, MOVE_CALM_MIND},
        },
        {
        MR_BRAT(REMATCH_5_LEVEL_2),
        IVS(24),
        .moves = {MOVE_DARK_PULSE, MOVE_POWER_GEM, MOVE_PAY_DAY, MOVE_NASTY_PLOT},
        },
        {
        MR_CAT(REMATCH_5_MINI_BOSS),
        PERFECT_IVS,
        .moves = {MOVE_FLAMETHROWER, MOVE_HYPER_VOICE, MOVE_WORK_UP, MOVE_NOBLE_ROAR},
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
        .species = SPECIES_WATTREL,
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
        .species = SPECIES_CATERPIE,
        },
        {
        .lvl = 3,
        .species = SPECIES_CATERPIE,
        },
        {
        .lvl = 3,
        .species = SPECIES_CATERPIE,
        },
        {
        .lvl = 3,
        .species = SPECIES_CATERPIE,
        },
        {
        .lvl = 3,
        .species = SPECIES_CATERPIE,
        },
        {
        .lvl = 3,
        .species = SPECIES_CATERPIE,
        }
    },
},

[TRAINER_CASPIAN_PETALBURG_WOODS] =
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

#define JAMES_NINCADA(Level)                                   \
    .lvl = Level,                                              \
    .species = Level < 20 ? SPECIES_NINCADA : SPECIES_NINJASK, \
    .gender = TRAINER_MON_MALE

#define JAMES_SHEDINJA(Level) \
    .lvl = Level,             \
    .species = SPECIES_SHEDINJA

#define JAMES_BUTTERFREE(Level)    \
    .lvl = Level,                  \
    .species = SPECIES_BUTTERFREE, \
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
        JAMES_SHEDINJA(REMATCH_2_LEVEL_2),
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
        JAMES_BUTTERFREE(REMATCH_3_LEVEL_3),
        IVS(3),
        },
        {
        JAMES_SHEDINJA(REMATCH_3_LEVEL_3),
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
        JAMES_BUTTERFREE(REMATCH_4_LEVEL_4),
        IVS(4),
        },
        {
        JAMES_SHEDINJA(REMATCH_4_LEVEL_4),
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
        .species = SPECIES_ESCAVALIER,
        IVS(5),
        .gender = TRAINER_MON_MALE,
        },
        {
        JAMES_BUTTERFREE(REMATCH_5_LEVEL_4),
        IVS(5),
        },
        {
        JAMES_SHEDINJA(REMATCH_5_LEVEL_4),
        IVS(5),
        },
        {
        JAMES_NINCADA(REMATCH_5_LEVEL_4),
        IVS(5),
        }
    },
},

//Route 104 (north)
#define CINDY_INFO             \
    .trainerName = _("Cindy"), \
    LADY_INFO,                 \
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE

#define CINDY_LITLEO(Level)                                  \
    RICH_MON(Level),                                         \
    .species = Level < 35 ? SPECIES_LITLEO : SPECIES_PYROAR, \
    .ability = ABILITY_UNNERVE,                              \
    .gender = TRAINER_MON_FEMALE 

#define CINDY_MEOWTH(Level)                                   \
    RICH_MON(Level),                                          \
    .species = Level < 28 ? SPECIES_MEOWTH : SPECIES_PERSIAN, \
    .ability = ABILITY_TECHNICIAN,                            \
    .gender = TRAINER_MON_FEMALE 

[TRAINER_CINDY_1] =
{
    CINDY_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        CINDY_MEOWTH(7),
        },
        {
        CINDY_LITLEO(7),
        }
    },
},

[TRAINER_CINDY_2] =
{
    CINDY_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        CINDY_MEOWTH(REMATCH_2_LEVEL_2),
        IVS(2),
        },
        {
        CINDY_LITLEO(REMATCH_2_LEVEL_2),
        IVS(2),
        }
    },
},

[TRAINER_CINDY_3] =
{
    CINDY_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        CINDY_MEOWTH(REMATCH_3_LEVEL_2),
        IVS(3),
        },
        {
        CINDY_LITLEO(REMATCH_3_LEVEL_2),
        IVS(3),
        }
    },
},

[TRAINER_CINDY_4] =
{
    CINDY_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        CINDY_MEOWTH(REMATCH_4_LEVEL_2),
        IVS(4),
        },
        {
        CINDY_LITLEO(REMATCH_4_LEVEL_2),
        IVS(4),
        }
    },
},

[TRAINER_CINDY_5] =
{
    CINDY_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        CINDY_MEOWTH(REMATCH_5_LEVEL_2),
        IVS(5),
        .moves = {MOVE_SLASH, MOVE_NIGHT_SLASH, MOVE_FAKE_OUT, MOVE_SCREECH},
        },
        {
        CINDY_LITLEO(REMATCH_5_LEVEL_2),
        IVS(5),
        .moves = {MOVE_FLAMETHROWER, MOVE_HYPER_VOICE, MOVE_WORK_UP, MOVE_NOBLE_ROAR},
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

#define HALEY_TOGEPI(Level)                                                                                    \
    .lvl = Level,                                                                                              \
    .species = Level < 16 ? SPECIES_TOGEPI : (Level < REMATCH_5_LEVEL_6 ? SPECIES_TOGETIC : SPECIES_TOGEKISS), \
    .ability = ABILITY_CHLOROPHYLL,                                                                            \
    .gender = TRAINER_MON_FEMALE

#define HALEY_PACHIRISU(Level)                                                     \
    .lvl = Level,                                                                  \
    .species = Level < REMATCH_4_LEVEL_6 ? SPECIES_PACHIRISU : SPECIES_PACHIRIKKU, \
    .gender = TRAINER_MON_FEMALE

[TRAINER_HALEY_1] =
{
    HALEY_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        HALEY_TOGEPI(7),
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
        HALEY_PACHIRISU(REMATCH_2_LEVEL_3),
        IVS(2),
        },
        {
        HALEY_TOGEPI(REMATCH_2_LEVEL_3),
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
        HALEY_PACHIRISU(REMATCH_3_LEVEL_3),
        IVS(3),
        },
        {
        HALEY_TOGEPI(REMATCH_3_LEVEL_3),
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
        HALEY_PACHIRISU(REMATCH_4_LEVEL_3),
        IVS(4),
        },
        {
        HALEY_TOGEPI(REMATCH_4_LEVEL_3),
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
        HALEY_PACHIRISU(REMATCH_5_LEVEL_3),
        IVS(5),
        },
        {
        HALEY_TOGEPI(REMATCH_5_LEVEL_3),
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
        .species = SPECIES_KARRABLAST,
        },
        {
        .lvl = 7,
        .species = SPECIES_SHELMET,
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
        .species = SPECIES_ARROKUDA,
        },
        {
        .lvl = 6,
        .species = SPECIES_POLIWAG,
        },
        {
        .lvl = 6,
        .species = SPECIES_OSHAWOTT,
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
        .species = SPECIES_CATERPIE,
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
        .species = SPECIES_TRUBBISH,
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
        .species = SPECIES_SNUBBULL,
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
        .species = SPECIES_NACLI,
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
        .species = SPECIES_ROGGENROLA,
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
        .species = SPECIES_YUNGOOS,
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
        .species = SPECIES_HELIOPTILE,
        },
        {
        RICH_BOY_MON(8),
        .species = SPECIES_SKIDDO,
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
        .species = SPECIES_PURRLOIN,
        },
        {
        RICH_MON(8),
        .species = SPECIES_PATRAT,
        }
    },
},

#define JERRY_INFO             \
    .trainerName = _("Jerry"), \
    SCHOOLKID_M_INFO,          \
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE

#define JERRY_ABRA(Level)                                                                                    \
    .lvl = Level,                                                                                            \
    .species = Level < 16 ? SPECIES_ABRA : (Level < REMATCH_3_LEVEL_6 ? SPECIES_KADABRA : SPECIES_ALAKAZAM), \
    .ability = ABILITY_INNER_FOCUS,                                                                          \
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
        JERRY_ABRA(10),
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
        JERRY_ABRA(REMATCH_2_LEVEL_2),
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
        JERRY_ABRA(REMATCH_3_LEVEL_3),
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
        JERRY_ABRA(REMATCH_4_LEVEL_3),
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
        JERRY_ABRA(REMATCH_5_LEVEL_3),
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

#define KAREN_CLEFFA(Level)                                                                                     \
    .lvl = Level,                                                                                               \
    .species = Level < 12 ? SPECIES_CLEFFA : (Level < REMATCH_3_LEVEL_6 ? SPECIES_CLEFAIRY : SPECIES_CLEFABLE), \
    .ability = ABILITY_MAGIC_GUARD,                                                                             \
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
        KAREN_CLEFFA(REMATCH_2_LEVEL_2),
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
        KAREN_CLEFFA(REMATCH_3_LEVEL_3),
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
        KAREN_CLEFFA(REMATCH_4_LEVEL_3),
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
        KAREN_CLEFFA(REMATCH_5_LEVEL_3),
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
        .species = SPECIES_NACLI,
        IVS(12),
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
        .species = SPECIES_RHYHORN,
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
        .species = SPECIES_ROGGENROLA,
        IVS(15),
        }
    },
},

//Rusturf Tunnel
[TRAINER_CASPIAN_RUSTURF_TUNNEL] =
{
    CASPIAN_INFO,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        CASPIAN_CARVANHA(13, AQUA_JET, RAGE, SCARY_FACE),
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
        .species = SPECIES_ARROKUDA,
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

#define ELLIOT_ARROKUDA(Level)                                      \
    .lvl = Level,                                                   \
    .species = Level < 26 ? SPECIES_ARROKUDA : SPECIES_BARRASKEWDA, \
    .ability = ABILITY_SWIFT_SWIM,                                  \
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

[TRAINER_ELLIOT_1] =
{
    ELLIOT_INFO,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        ELLIOT_MAGIKARP(13),
        },
        {
        ELLIOT_ARROKUDA(13),
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
        ELLIOT_MAGIKARP(REMATCH_2_LEVEL_5),
        IVS(2),
        },
        {
        ELLIOT_ARROKUDA(REMATCH_2_LEVEL_5),
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
        ELLIOT_MAGIKARP(REMATCH_3_LEVEL_5),
        IVS(3),
        },
        {
        ELLIOT_ARROKUDA(REMATCH_3_LEVEL_5),
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
        ELLIOT_MAGIKARP(REMATCH_4_LEVEL_5),
        IVS(4),
        },
        {
        ELLIOT_ARROKUDA(REMATCH_4_LEVEL_5),
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
        ELLIOT_MAGIKARP(REMATCH_5_LEVEL_5),
        IVS(5),
        },
        {
        ELLIOT_ARROKUDA(REMATCH_5_LEVEL_5),
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
        .lvl = 13,
        .species = SPECIES_HERACROSS,
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
        .lvl = 15,
        .species = SPECIES_CRABRAWLER,
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
        .species = SPECIES_MIENFOO,
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
        .species = SPECIES_BUIZEL,
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
        .species = SPECIES_POLIWAG,
        },
        {
        .lvl = 16,
        .species = SPECIES_ARROKUDA,
        }
    },
},

#define LOLA_INFO             \
    .trainerName = _("Lola"), \
    TUBER_F_INFO,             \
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE

#define LOLA_BUIZEL(Level)                                                    \
    .lvl = Level,                                                             \
    .species = Level < REMATCH_2_LEVEL_6 ? SPECIES_BUIZEL : SPECIES_FLOATZEL, \
    .ability = ABILITY_SWIFT_SWIM,                                            \
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
        LOLA_BUIZEL(18),
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
        LOLA_BUIZEL(REMATCH_2_LEVEL_2),
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
        LOLA_BUIZEL(REMATCH_3_LEVEL_2),
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
        LOLA_BUIZEL(REMATCH_4_LEVEL_2),
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
        LOLA_BUIZEL(REMATCH_5_LEVEL_2),
        IVS(5),
        }
    },
},

#define RICKY_INFO             \
    .trainerName = _("Ricky"), \
    TUBER_M_INFO,              \
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE

#define RICKY_HELIOPTILE(Level)                                                    \
    .lvl = Level,                                                                  \
    .species = Level < REMATCH_2_LEVEL_6 ? SPECIES_HELIOPTILE : SPECIES_HELIOLISK, \
    .ability = ABILITY_GLUTTONY,                                                   \
    .moves = {                                                                     \
        MOVE_SURF,                                                                 \
        Level < REMATCH_2_LEVEL_6 ? MOVE_THUNDER_SHOCK : MOVE_PARABOLIC_CHARGE,    \
        Level < REMATCH_2_LEVEL_6 ? MOVE_QUICK_ATTACK : MOVE_WEATHER_BALL,         \
        Level < REMATCH_2_LEVEL_6 ? MOVE_MUD_SLAP : MOVE_BULLDOZE                  \
    },                                                                             \
    .gender = TRAINER_MON_MALE

#define RICKY_DUCKLETT(Level)                                   \
    .lvl = Level,                                                             \
    .species = Level < REMATCH_3_LEVEL_6 ? SPECIES_DUCKLETT : SPECIES_SWANNA, \
    .ability = ABILITY_BIG_PECKS,                                             \
    .moves = {MOVE_SURF, MOVE_AIR_SLASH, MOVE_FEATHER_DANCE, MOVE_AQUA_RING}, \
    .gender = TRAINER_MON_MALE

[TRAINER_RICKY_1] =
{
    RICKY_INFO,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        RICKY_HELIOPTILE(18),
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
        RICKY_DUCKLETT(REMATCH_2_LEVEL_2),
        IVS(2),
        },
        {
        RICKY_HELIOPTILE(REMATCH_2_LEVEL_2),
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
        RICKY_DUCKLETT(REMATCH_3_LEVEL_2),
        IVS(3),
        },
        {
        RICKY_HELIOPTILE(REMATCH_3_LEVEL_2),
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
        RICKY_DUCKLETT(REMATCH_4_LEVEL_2),
        IVS(4),
        },
        {
        RICKY_HELIOPTILE(REMATCH_4_LEVEL_2),
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
        RICKY_DUCKLETT(REMATCH_5_LEVEL_2),
        IVS(5),
        },
        {
        RICKY_HELIOPTILE(REMATCH_5_LEVEL_2),
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
        .species = SPECIES_BUIZEL,
        },
        {
        .lvl = 16,
        .species = SPECIES_POLIWAG,
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
        .species = SPECIES_DUCKLETT,
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
        .species = SPECIES_CRABRAWLER,
        },
        {
        .lvl = 15,
        .species = SPECIES_ARROKUDA,
        }
    },
},

//Oceanic Museum
MALIK_BATTLE(MUSEUM, 17),
MARINA_BATTLE(MUSEUM, 17),

[TRAINER_ARCHIE_MUSEUM] =
{
    ARCHIE_INFO,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        ARCHIE_WAILMER(17),
        ARCHIE_ARROKUDA(17),
        {
        FINNEAS(19),
        .moves = {MOVE_AQUA_JET, MOVE_BITE, MOVE_POISON_FANG, MOVE_FOCUS_ENERGY},
        }
    },
},

//Route 110
#define ISABEL_INFO                    \
    .trainerName = _("Isabel"),        \
    POKE_FAN_F_INFO,                   \
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE, \
    .partySize = 2

#define ISABEL_MON(Level, Species) \
    POKE_FAN_MON(Level),           \
    .species = SPECIES_##Species,  \
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
        .species = SPECIES_GULPIN,
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
        .species = SPECIES_WOOLOO,
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
        .species = SPECIES_GEODUDE,
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

#define AMY_MINUN(Level)      \
    .lvl = Level,             \
    .species = SPECIES_MINUN, \
    .gender = TRAINER_MON_FEMALE

#define LIV_PLUSLE(Level)      \
    .lvl = Level,              \
    .species = SPECIES_PLUSLE, \
    .gender = TRAINER_MON_FEMALE

[TRAINER_AMY_AND_LIV_1] =
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

[TRAINER_AMY_AND_LIV_2] =
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

[TRAINER_AMY_AND_LIV_3] =
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

[TRAINER_AMY_AND_LIV_4] =
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

[TRAINER_AMY_AND_LIV_5] =
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

#define MIGUEL_PACHIRISU(Level)                                                    \
    POKE_FAN_MON(Level),                                                           \
    .species = Level < REMATCH_3_LEVEL_6 ? SPECIES_PACHIRISU : SPECIES_PACHIRIKKU, \
    .ability = 0,                                                                  \
    .gender = TRAINER_MON_MALE

#define MIGUEL_CASTFORM(Level)   \
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
        MIGUEL_PACHIRISU(REMATCH_2_LEVEL_2),
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
        MIGUEL_PACHIRISU(REMATCH_3_LEVEL_3),
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
        MIGUEL_PACHIRISU(REMATCH_4_LEVEL_3),
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
        MIGUEL_PACHIRISU(REMATCH_5_LEVEL_3),
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
        .species = SPECIES_ARROKUDA,
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
        .species = SPECIES_SHINX,
        }
    },
},

#define EDWIN_INFO                     \
    .trainerName = _("Edwin"),         \
    COLLECTOR_INFO,                    \
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE

#define EDWIN_ZANGOOSE(Level)       \
    .lvl = Level,                   \
    .species = SPECIES_ZANGOOSE,    \
    .ability = ABILITY_POISON_HEAL, \
    .gender = TRAINER_MON_MALE

#define EDWIN_SEVIPER(Level)    \
    .lvl = Level,               \
    .species = SPECIES_SEVIPER, \
    .gender = TRAINER_MON_MALE

#define EDWIN_MAROWAK(Level)      \
    .lvl = Level,                 \
    .species = SPECIES_MAROWAK,   \
    .ability = ABILITY_ROCK_HEAD, \
    .gender = TRAINER_MON_MALE

#define EDWIN_MAROWAK_ALOLAN(Level)    \
    .lvl = Level,                      \
    .species = SPECIES_MAROWAK_ALOLAN, \
    .ability = ABILITY_CURSED_BODY,    \
    .gender = TRAINER_MON_MALE

#define EDWIN_ESPEON(Level)    \
    .lvl = Level,              \
    .species = SPECIES_ESPEON, \
    .gender = TRAINER_MON_FEMALE

#define EDWIN_UMBREON(Level)    \
    .lvl = Level,               \
    .species = SPECIES_UMBREON, \
    .gender = TRAINER_MON_MALE

[TRAINER_EDWIN_1] =
{
    EDWIN_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        EDWIN_SEVIPER(18),
        },
        {
        EDWIN_ZANGOOSE(18),
        }
    },
},

[TRAINER_EDWIN_2] =
{
    EDWIN_INFO,
    .partySize = 4,
    .party = (const struct TrainerMon[]) {
        {
        EDWIN_MAROWAK_ALOLAN(REMATCH_2_LEVEL_4),
        },
        {
        EDWIN_MAROWAK(REMATCH_2_LEVEL_4),
        },
        {
        EDWIN_SEVIPER(REMATCH_2_LEVEL_4),
        },
        {
        EDWIN_ZANGOOSE(REMATCH_2_LEVEL_4),
        }
    },
},

[TRAINER_EDWIN_3] =
{
    EDWIN_INFO,
    .partySize = 6,
    .party = (const struct TrainerMon[]) {
        {
        EDWIN_UMBREON(REMATCH_3_LEVEL_6),
        },
        {
        EDWIN_ESPEON(REMATCH_3_LEVEL_6),
        },
        {
        EDWIN_MAROWAK_ALOLAN(REMATCH_3_LEVEL_6),
        },
        {
        EDWIN_MAROWAK(REMATCH_3_LEVEL_6),
        },
        {
        EDWIN_SEVIPER(REMATCH_3_LEVEL_6),
        },
        {
        EDWIN_ZANGOOSE(REMATCH_3_LEVEL_6),
        }
    },
},

[TRAINER_EDWIN_4] =
{
    EDWIN_INFO,
    .partySize = 6,
    .party = (const struct TrainerMon[]) {
        {
        EDWIN_UMBREON(REMATCH_4_LEVEL_6),
        },
        {
        EDWIN_ESPEON(REMATCH_4_LEVEL_6),
        },
        {
        EDWIN_MAROWAK_ALOLAN(REMATCH_4_LEVEL_6),
        },
        {
        EDWIN_MAROWAK(REMATCH_4_LEVEL_6),
        },
        {
        EDWIN_SEVIPER(REMATCH_4_LEVEL_6),
        },
        {
        EDWIN_ZANGOOSE(REMATCH_4_LEVEL_6),
        }
    },
},

[TRAINER_EDWIN_5] =
{
    EDWIN_INFO,
    .partySize = 6,
    .party = (const struct TrainerMon[]) {
        {
        EDWIN_UMBREON(REMATCH_5_LEVEL_6),
        },
        {
        EDWIN_ESPEON(REMATCH_5_LEVEL_6),
        },
        {
        EDWIN_MAROWAK_ALOLAN(REMATCH_5_LEVEL_6),
        },
        {
        EDWIN_MAROWAK(REMATCH_5_LEVEL_6),
        },
        {
        EDWIN_SEVIPER(REMATCH_5_LEVEL_6),
        },
        {
        EDWIN_ZANGOOSE(REMATCH_5_LEVEL_6),
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
        .species = SPECIES_SHINX,
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
        .moves = {MOVE_PSYBEAM, MOVE_HIDDEN_POWER, MOVE_NONE, MOVE_NONE}
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
        .species = SPECIES_KLINK,
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
        .species = SPECIES_BARBOACH,
        },
        {
        .lvl = 16,
        .species = SPECIES_WAILMER,
        },
        {
        .lvl = 16,
        .species = SPECIES_ARROKUDA,
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
        .species = SPECIES_SHARPEDO,
        },
        {
        TRIATHLETE_MON(REMATCH_5_LEVEL_2, 5),
        .species = SPECIES_ARCANINE,
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
        .species = SPECIES_WEAVILE,
        },
        {
        TRIATHLETE_MON(REMATCH_5_LEVEL_2, 5),
        .species = SPECIES_GOGOAT,
        },
        {
        MARIA_DODUO(REMATCH_5_MINI_BOSS, 5),
        .moves = {MOVE_BODY_SLAM, MOVE_DRILL_PECK, MOVE_DRILL_RUN, MOVE_REST},
        }
    },
},

#define ISAAC_BATTLE(Match, Level)                                                                      \
[TRAINER_ISAAC_##Match]                                                                                 \
{                                                                                                       \
    .trainerName = _("Isaac"),                                                                          \
    POKEMON_BREEDER_M_INFO,                                                                             \
    MINI_BOSS_AI_FLAGS,                                                                                 \
    .party = (const struct TrainerMon[]) {                                                              \
        {                                                                                               \
        POKEMON_BREEDER_MON(Level),                                                                     \
        .species = Level < 29 ? SPECIES_SANDILE : (Level < 40 ? SPECIES_KROKOROK : SPECIES_KROOKODILE), \
        .ability = ABILITY_ANGER_POINT,                                                                 \
        .moves = {MOVE_STOMPING_TANTRUM, MOVE_LASH_OUT, MOVE_THUNDER_FANG, MOVE_FIRE_FANG},             \
        .gender = TRAINER_MON_MALE                                                                      \
        },                                                                                              \
        {                                                                                               \
        POKEMON_BREEDER_MON(Level),                                                                     \
        .species = Level < 20 ? SPECIES_MUNCHLAX : SPECIES_SNORLAX,                                     \
        .ability = ABILITY_THICK_FAT,                                                                   \
        .moves = {MOVE_PAY_DAY, MOVE_POWER_UP_PUNCH, MOVE_HYDRO_PUMP, MOVE_CURSE},                      \
        .gender = TRAINER_MON_MALE                                                                      \
        },                                                                                              \
        {                                                                                               \
        POKEMON_BREEDER_MON(Level),                                                                     \
        .species = Level < 24 ? SPECIES_MAKUHITA : SPECIES_HARIYAMA,                                    \
        .ability = ABILITY_SHEER_FORCE,                                                                 \
        .moves = {MOVE_CROSS_CHOP, MOVE_BULLET_PUNCH, MOVE_FEINT_ATTACK, MOVE_STOMPING_TANTRUM},        \
        .gender = TRAINER_MON_MALE                                                                      \
        },                                                                                              \
        {                                                                                               \
        POKEMON_BREEDER_MON(Level),                                                                     \
        .species = Level < 18 ? SPECIES_POOCHYENA : SPECIES_MIGHTYENA,                                  \
        .ability = ABILITY_STRONG_JAW,                                                                  \
        .moves = {MOVE_LASH_OUT, MOVE_POISON_FANG, MOVE_THUNDER_FANG, MOVE_FIRE_FANG},                  \
        .gender = TRAINER_MON_MALE                                                                      \
        },                                                                                              \
        {                                                                                               \
        POKEMON_BREEDER_MON(Level),                                                                     \
        .species = Level < 24 ? SPECIES_TANGELA : SPECIES_TANGROWTH,                                    \
        .ability = ABILITY_REGENERATOR,                                                                 \
        .moves = {MOVE_NATURE_POWER, MOVE_INFESTATION, MOVE_CONFUSION, MOVE_WAKE_UP_SLAP},              \
        .gender = TRAINER_MON_MALE                                                                      \
        },                                                                                              \
        {                                                                                               \
        POKEMON_BREEDER_MON(Level),                                                                     \
        .species = Level < 32 ? SPECIES_ARON : (Level < 42 ? SPECIES_LAIRON : SPECIES_AGGRON),          \
        .ability = ABILITY_ROCK_HEAD,                                                                   \
        .moves = {MOVE_SMELLING_SALTS, MOVE_HEAD_SMASH, MOVE_DRAGON_RUSH, MOVE_CURSE},                  \
        .gender = TRAINER_MON_MALE                                                                      \
        },                                                                                              \
    },                                                                                                  \
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
        .species = Level < REMATCH_2_LEVEL_6 ? SPECIES_HAPPINY : (Level < REMATCH_3_LEVEL_6 ? SPECIES_CHANSEY : SPECIES_BLISSEY), \
        .ability = ABILITY_NATURAL_CURE,                                                       \
        .moves = {MOVE_UPROAR, MOVE_PRESENT, MOVE_GRAVITY, MOVE_HEAL_BELL},                    \
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
        .species = Level < 38 ? SPECIES_GLAMEOW : SPECIES_PURUGLY,                             \
        .ability = 2,                                                                          \
        .moves = {MOVE_COVET, MOVE_WAKE_UP_SLAP, MOVE_BITE, MOVE_QUICK_ATTACK},                \
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

#define MEG_PATRAT(Level)                                     \
    .lvl = Level,                                             \
    .species = Level < 20 ? SPECIES_PATRAT : SPECIES_WATCHOG, \
    .ability = ABILITY_KEEN_EYE,                              \
    .gender = TRAINER_MON_FEMALE

[TRAINER_ANNA_AND_MEG_1] =
{
    ANNA_AND_MEG_INFO,
    .party = (const struct TrainerMon[]) {
        {
        MEG_PATRAT(19),
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
        MEG_PATRAT(REMATCH_2_LEVEL_3),
        IVS(2),
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
        MEG_PATRAT(REMATCH_3_LEVEL_3),
        IVS(3),
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
        MEG_PATRAT(REMATCH_4_LEVEL_3),
        IVS(4),
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
        MEG_PATRAT(REMATCH_5_LEVEL_3),
        IVS(5),
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
        .species = SPECIES_KARRABLAST,
        IVS(18),
        },
        {
        .lvl = 19,
        .species = SPECIES_BUTTERFREE,
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
        .species = SPECIES_FLITTLE,
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
        .species = SPECIES_FIDOUGH,
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
        .species = SPECIES_ZUBAT,
        },
        {
        .lvl = 19,
        .species = SPECIES_WOOBAT,
        },
        {
        .lvl = 19,
        .species = SPECIES_NOIBAT,
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
        .species = SPECIES_VOLTORB,
        IVS(12),
        .moves = {MOVE_SHOCK_WAVE, MOVE_SWIFT, MOVE_EERIE_IMPULSE, MOVE_CHARGE}
        },
        {
        .lvl = 21,
        .species = SPECIES_TOXEL,
        IVS(12),
        .moves = {MOVE_SHOCK_WAVE, MOVE_ACID, MOVE_NUZZLE, MOVE_TEARFUL_LOOK}
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
        .species = SPECIES_WATTREL,
        IVS(18),
        .moves = {MOVE_SHOCK_WAVE, MOVE_AIR_CUTTER, MOVE_SPARK, MOVE_UPROAR}
        },
        {
        .lvl = 21,
        .species = SPECIES_PACHIRISU,
        IVS(18),
        .moves = {MOVE_SHOCK_WAVE, MOVE_QUICK_ATTACK, MOVE_THUNDER_WAVE, MOVE_GROWL}
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
        .species = SPECIES_TYNAMO,
        IVS(12),
        .moves = {MOVE_SHOCK_WAVE, MOVE_SPARK, MOVE_TACKLE, MOVE_THUNDER_WAVE}
        },
        {
        .lvl = 21,
        .species = SPECIES_HELIOPTILE,
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
        .species = SPECIES_TOXEL,
        IVS(12),
        },
        {
        .lvl = 21,
        .species = SPECIES_SHINX,
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

#define ROSE_BELLSPROUT(Level) \
    .lvl = Level,              \
    .species = Level < REMATCH_2_LEVEL_6 ? SPECIES_BELLSPROUT : (Level < REMATCH_4_LEVEL_6 ? SPECIES_WEEPINBELL : SPECIES_VICTREEBEL), \
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
        ROSE_BELLSPROUT(21),
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
        ROSE_BELLSPROUT(REMATCH_2_LEVEL_3),
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
        ROSE_BELLSPROUT(REMATCH_3_LEVEL_3),
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
        ROSE_BELLSPROUT(REMATCH_4_LEVEL_3),
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
        ROSE_BELLSPROUT(REMATCH_5_LEVEL_4),
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
        .species = SPECIES_YUNGOOS,
        },
        {
        .lvl = 20,
        .species = SPECIES_ARON,
        },
        {
        .lvl = 20,
        .species = SPECIES_SHINX,
        }
    },
},

#define DALTON_INFO                   \
    .trainerName = _("Dalton"),       \
    GUITARIST_INFO,                   \
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE \

#define DALTON_TOXEL(Level)                                     \
    .lvl = Level,                                               \
    .species = Level < 30 ? SPECIES_TOXEL : SPECIES_TOXTRICITY, \
    .ability = 0,                                               \
    .gender = TRAINER_MON_MALE

#define DALTON_VOLTORB(Level)                                    \
    .lvl = Level,                                                \
    .species = Level < 30 ? SPECIES_VOLTORB : SPECIES_ELECTRODE, \
    .ability = ABILITY_SOUNDPROOF

#define DALTON_ROTOM(Level)       \
    .lvl = Level,                 \
    .species = SPECIES_ROTOM_FAN, \
    .ability = ABILITY_WIND_POWER

[TRAINER_DALTON_1] =
{
    DALTON_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        DALTON_VOLTORB(21),
        },
        {
        DALTON_TOXEL(21),
        }
    },
},

[TRAINER_DALTON_2] =
{
    DALTON_INFO,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        DALTON_ROTOM(REMATCH_2_LEVEL_3),
        IVS(2),
        },
        {
        DALTON_VOLTORB(REMATCH_2_LEVEL_3),
        IVS(2),
        },
        {
        DALTON_TOXEL(REMATCH_2_LEVEL_3),
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
        DALTON_ROTOM(REMATCH_3_LEVEL_3),
        IVS(3),
        },
        {
        DALTON_VOLTORB(REMATCH_3_LEVEL_3),
        IVS(3),
        },
        {
        DALTON_TOXEL(REMATCH_3_LEVEL_3),
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
        DALTON_ROTOM(REMATCH_4_LEVEL_3),
        IVS(4),
        },
        {
        DALTON_VOLTORB(REMATCH_4_LEVEL_3),
        IVS(4),
        },
        {
        DALTON_TOXEL(REMATCH_4_LEVEL_3),
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
        DALTON_ROTOM(REMATCH_5_LEVEL_3),
        IVS(5),
        },
        {
        DALTON_VOLTORB(REMATCH_5_LEVEL_3),
        IVS(5),
        },
        {
        DALTON_TOXEL(REMATCH_5_LEVEL_3),
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
        .species = SPECIES_ARROKUDA,
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

#define ABIGAIL_CYCLIZAR(Level, IV) \
    TRIATHLETE_MON(Level, IV),      \
    .species = SPECIES_CYCLIZAR,    \
    .ability = ABILITY_SHED_SKIN,   \
    .gender = TRAINER_MON_FEMALE

#define ABIGAIL_PLUSLE(Level, IV) \
    TRIATHLETE_MON(Level, IV),    \
    .species = SPECIES_PLUSLE,    \
    .gender = TRAINER_MON_FEMALE

#define ABIGAIL_LUXIO(Level, IV)                                           \
    TRIATHLETE_MON(Level, IV),                                             \
    .species = Level < REMATCH_4_LEVEL_6 ? SPECIES_LUXIO : SPECIES_LUXRAY, \
    .ability = ABILITY_INTIMIDATE,                                         \
    .gender = TRAINER_MON_FEMALE

[TRAINER_ABIGAIL_1] =
{
    ABIGAIL_INFO,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        ABIGAIL_CYCLIZAR(22, 1),
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
        ABIGAIL_CYCLIZAR(REMATCH_2_LEVEL_2, 2),
        }
    },
},

[TRAINER_ABIGAIL_3] =
{
    ABIGAIL_INFO,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        ABIGAIL_LUXIO(REMATCH_3_LEVEL_3, 3),
        },
        {
        ABIGAIL_PLUSLE(REMATCH_3_LEVEL_3, 3),
        },
        {
        ABIGAIL_CYCLIZAR(REMATCH_3_LEVEL_3, 3),
        }
    },
},

[TRAINER_ABIGAIL_4] =
{
    ABIGAIL_INFO,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        ABIGAIL_LUXIO(REMATCH_4_LEVEL_3, 4),
        },
        {
        ABIGAIL_PLUSLE(REMATCH_4_LEVEL_3, 4),
        },
        {
        ABIGAIL_CYCLIZAR(REMATCH_4_LEVEL_3, 4),
        }
    },
},

[TRAINER_ABIGAIL_5] =
{
    ABIGAIL_INFO,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        ABIGAIL_LUXIO(REMATCH_5_LEVEL_3, 5),
        },
        {
        ABIGAIL_PLUSLE(REMATCH_5_LEVEL_3, 5),
        },
        {
        ABIGAIL_CYCLIZAR(REMATCH_5_LEVEL_3, 5),
        }
    },
},

#define BENJAMIN_INFO             \
    .trainerName = _("Benjamin"), \
    TRIATHLETE_M_CYCLING_INFO,    \
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE

#define BENJAMIN_KLINK(Level, IV) \
    TRIATHLETE_MON(Level, IV),    \
    .species = Level < REMATCH_3_LEVEL_6 ? SPECIES_KLINK : (Level < REMATCH_5_LEVEL_6 ? SPECIES_KLANG : SPECIES_KLINKLANG), \
    .ability = ABILITY_PLUS

#define BENJAMIN_MINUN(Level, IV) \
    TRIATHLETE_MON(Level, IV),    \
    .species = SPECIES_MINUN,     \
    .gender = TRAINER_MON_MALE

#define BENJAMIN_VOLTORB(Level, IV)                                             \
    TRIATHLETE_MON(Level, IV),                                                  \
    .species = Level < REMATCH_4_LEVEL_6 ? SPECIES_VOLTORB : SPECIES_ELECTRODE, \
    .ability = ABILITY_SOUNDPROOF

[TRAINER_BENJAMIN_1] =
{
    BENJAMIN_INFO,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        ABIGAIL_CYCLIZAR(22, 1),
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
        BENJAMIN_KLINK(REMATCH_2_LEVEL_2, 2),
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
        BENJAMIN_KLINK(REMATCH_3_LEVEL_3, 3),
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
        BENJAMIN_KLINK(REMATCH_4_LEVEL_3, 4),
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
        BENJAMIN_KLINK(REMATCH_5_LEVEL_3, 5),
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
        .species = SPECIES_MINUN,
        },
        {
        TRIATHLETE_MON(21, 0),
        .species = SPECIES_PLUSLE,
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
        .species = SPECIES_WATTREL,
        },
        {
        TRIATHLETE_MON(20, 0),
        .species = SPECIES_KLINK,
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
        .species = SPECIES_CYCLIZAR,
        },
        {
        TRIATHLETE_MON(20, 0),
        .species = SPECIES_VOLTORB,
        },
        {
        TRIATHLETE_MON(20, 0),
        .species = SPECIES_TYNAMO,
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
        .species = SPECIES_BELLSPROUT,
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
        .species = SPECIES_BUTTERFREE,
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
        .species = SPECIES_WATTREL,
        EV_SPREAD_ATK_SPE_HP,
        IVS(3),
        .gender = TRAINER_MON_MALE,
        },
        {
        POKE_FAN_MON(23),
        .species = SPECIES_PATRAT,
        EV_SPREAD_ATK_SPE_HP,
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
        EV_SPREAD_SPA_SPE_HP,
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
        .species = SPECIES_DUCKLETT,
        EV_SPREAD_ATK_SPE_HP,
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
        EV_SPREAD_ATK_SPE_HP,
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
        .species = SPECIES_BELLSPROUT,
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
        .species = SPECIES_SKIDDO,
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
        .species = SPECIES_GULPIN,
        },
        {
        .lvl = 24,
        .species = SPECIES_CACNEA,
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
        .species = SPECIES_GROWLITHE,
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
        .species = SPECIES_ROSELIA,
        },
        {
        .lvl = 24,
        .species = SPECIES_SPRIGATITO,
        .isShiny = TRUE,
        .nickname = COMPOUND_STRING("Teaspoon"),
        }
    },
},

//Route 111 (north)
#define WILTON_INFO                                                \
    .trainerName = _("Wilton"),                                    \
    ACE_TRAINER_M_INFO,                                            \
    .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE}, \
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY

#define WILTON_GRIMER(Level)                                             \
    .lvl = Level,                                                        \
    .species = Level < REMATCH_2_LEVEL_6 ? SPECIES_GRIMER : SPECIES_MUK, \
    .ability = ABILITY_STENCH,                                           \
    .gender = TRAINER_MON_MALE

#define WILTON_WAILMER(Level)                                  \
    .lvl = Level,                                              \
    .species = Level < 40 ? SPECIES_WAILMER : SPECIES_WAILORD, \
    .ability = ABILITY_OBLIVIOUS,                              \
    .gender = TRAINER_MON_MALE

#define WILTON_LUXIO(Level)                                                \
    .lvl = Level,                                                          \
    .species = Level < REMATCH_2_LEVEL_6 ? SPECIES_LUXIO : SPECIES_LUXRAY, \
    .ability = ABILITY_INTIMIDATE,                                         \
    .gender = TRAINER_MON_MALE

[TRAINER_WILTON_1] =
{
    WILTON_INFO,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        WILTON_LUXIO(24),
        IVS(12),
        },
        {
        WILTON_WAILMER(24),
        IVS(12),
        },
        {
        WILTON_GRIMER(24),
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
        WILTON_LUXIO(REMATCH_2_LEVEL_3),
        IVS(13),
        },
        {
        WILTON_WAILMER(REMATCH_2_LEVEL_3),
        IVS(13),
        },
        {
        WILTON_GRIMER(REMATCH_2_LEVEL_3),
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
        WILTON_LUXIO(REMATCH_3_LEVEL_3),
        IVS(14),
        },
        {
        WILTON_WAILMER(REMATCH_3_LEVEL_3),
        IVS(14),
        },
        {
        WILTON_GRIMER(REMATCH_3_LEVEL_3),
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
        WILTON_LUXIO(REMATCH_4_LEVEL_3),
        IVS(15),
        },
        {
        WILTON_WAILMER(REMATCH_4_LEVEL_3),
        IVS(15),
        },
        {
        WILTON_GRIMER(REMATCH_4_LEVEL_3),
        IVS(15),
        }
    },
},

[TRAINER_WILTON_5] =
{
    WILTON_INFO,
    .partySize = 4,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = REMATCH_5_LEVEL_4,
        .species = SPECIES_HAXORUS,
        },
        {
        WILTON_LUXIO(REMATCH_5_LEVEL_4),
        IVS(17),
        },
        {
        WILTON_WAILMER(REMATCH_5_LEVEL_4),
        IVS(17),
        },
        {
        WILTON_GRIMER(REMATCH_5_LEVEL_4),
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
    .partySize = 4,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = REMATCH_5_LEVEL_4,
        .species = SPECIES_PURUGLY,
        },
        {
        BROOKE_WINGULL(REMATCH_5_LEVEL_4),
        IVS(17),
        },
        {
        BROOKE_NUMEL(REMATCH_5_LEVEL_4),
        IVS(17),
        },
        {
        BROOKE_ROSELIA(REMATCH_5_LEVEL_4),
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
        .species = SPECIES_HELIOLISK,
        IVS(5),
        .moves = {MOVE_WEATHER_BALL, MOVE_SOLAR_BEAM, MOVE_MORNING_SUN, MOVE_SUNNY_DAY}
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
        .species = SPECIES_MEOWTH,
        .nature = NATURE_ADAMANT,
        .gender = TRAINER_MON_MALE,
        },
        {
        .lvl = 24,
        .species = SPECIES_SKITTY,
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
        .species = SPECIES_BUIZEL,
        },
        {
        .lvl = 24,
        .species = SPECIES_SHROOMISH,
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
        .species = SPECIES_WATTREL,
        },
        {
        .lvl = 24,
        .species = SPECIES_DUCKLETT,
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
        .species = SPECIES_WEEPINBELL,
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
        .species = SPECIES_POLIWAG,
        },
        {
        .lvl = 23,
        .species = SPECIES_BUIZEL,
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
        .species = SPECIES_BUIZEL,
        },
        {
        .lvl = 24,
        .species = SPECIES_CAPSAKID,
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
        .species = SPECIES_STUNKY,
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

#define BERNIE_HEATMOR(Level)      \
    .lvl = Level,                  \
    .species = SPECIES_HEATMOR,    \
    .ability = ABILITY_FLASH_FIRE, \
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
        BERNIE_HEATMOR(24),
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
        BERNIE_HEATMOR(REMATCH_2_LEVEL_3),
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
        BERNIE_HEATMOR(REMATCH_3_LEVEL_3),
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
        BERNIE_HEATMOR(REMATCH_4_LEVEL_3),
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
        BERNIE_HEATMOR(REMATCH_5_LEVEL_3),
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
        .species = SPECIES_NACLI,
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
        .species = SPECIES_TANGELA,
        },
        {
        .lvl = 24,
        .species = SPECIES_BUIZEL,
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
        .species = SPECIES_ROGGENROLA,
        },
        {
        .lvl = 24,
        .species = SPECIES_MACHOP,
        }
    },
},

//Meteor Falls
COURTNEY_BATTLE(METEOR_FALLS, 28, 3),

//Route 115 (south)
#define NOB_INFO             \
    .trainerName = _("Nob"), \
    BLACK_BELT_INFO,         \
    MINI_BOSS_AI_FLAGS

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
        .species = SPECIES_POLIWRATH,
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
        .species = SPECIES_SPRITZEE,
        },
        {
        .lvl = 25,
        .species = SPECIES_SWIRLIX,
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
        .species = SPECIES_CHINGLING,
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
GINNY_BATTLE(MT_CHIMNEY, 27),
LANDON_BATTLE(MT_CHIMNEY, 27),
TABITHA_BATTLE(MT_CHIMNEY, 29, 6),

[TRAINER_MAXIE_MT_CHIMNEY] =
{
    MAXIE_INFO,
    .items = {ITEM_SUPER_POTION, ITEM_SUPER_POTION, ITEM_NONE, ITEM_NONE},
    .partySize = 4,
    .party = (const struct TrainerMon[]) {
        MAXIE_SANDILE(28),
        MAXIE_TRAPINCH(29),
        MAXIE_RHYHORN(29),
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

#define DIANA_BELLSPROUT(Level) \
    .lvl = Level,               \
    .species = Level < REMATCH_2_LEVEL_6 ? SPECIES_BELLSPROUT : (Level < REMATCH_3_LEVEL_6 ? SPECIES_WEEPINBELL : SPECIES_VICTREEBEL), \
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
        DIANA_BELLSPROUT(25),
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
        DIANA_BELLSPROUT(REMATCH_2_LEVEL_3),
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
        DIANA_BELLSPROUT(REMATCH_3_LEVEL_3),
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
        DIANA_BELLSPROUT(REMATCH_4_LEVEL_3),
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
        DIANA_BELLSPROUT(REMATCH_5_LEVEL_3),
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
        .species = SPECIES_KLINK,
        }
    },
},

#define ETHAN_INFO             \
    .trainerName = _("Ethan"), \
    CAMPER_INFO,               \
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE

#define ETHAN_GULPIN(Level)                                                 \
    .lvl = Level,                                                           \
    .species = Level < REMATCH_2_LEVEL_6 ? SPECIES_GULPIN : SPECIES_SWALOT, \
    .ability = ABILITY_LIQUID_OOZE,                                         \
    .gender = TRAINER_MON_MALE

#define ETHAN_STUNKY(Level)                                                   \
    .lvl = Level,                                                             \
    .species = Level < REMATCH_3_LEVEL_6 ? SPECIES_STUNKY : SPECIES_SKUNTANK, \
    .ability = ABILITY_AFTERMATH,                                             \
    .gender = TRAINER_MON_MALE

#define ETHAN_ZUBAT(Level) \
    .lvl = Level,          \
    .species = Level < REMATCH_5_LEVEL_6 ? SPECIES_ZUBAT : (Level < REMATCH_5_LEVEL_6 ? SPECIES_GOLBAT : SPECIES_CROBAT), \
    .gender = TRAINER_MON_MALE

#define ETHAN_SANDSHREW(Level)    \
    .lvl = Level,                 \
    .species = Level < REMATCH_4_LEVEL_6 ? SPECIES_SANDSHREW : SPECIES_SANDSLASH, \
    .gender = TRAINER_MON_MALE

[TRAINER_ETHAN_1] =
{
    ETHAN_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        ETHAN_STUNKY(26),
        },
        {
        ETHAN_GULPIN(26),
        }
    },
},

[TRAINER_ETHAN_2] =
{
    ETHAN_INFO,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        ETHAN_ZUBAT(REMATCH_2_LEVEL_3),
        IVS(2),
        },
        {
        ETHAN_STUNKY(REMATCH_2_LEVEL_3),
        IVS(2),
        },
        {
        ETHAN_GULPIN(REMATCH_2_LEVEL_3),
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
        ETHAN_SANDSHREW(REMATCH_3_LEVEL_4),
        IVS(3),
        },
        {
        ETHAN_ZUBAT(REMATCH_3_LEVEL_4),
        IVS(3),
        },
        {
        ETHAN_STUNKY(REMATCH_3_LEVEL_4),
        IVS(3),
        },
        {
        ETHAN_GULPIN(REMATCH_3_LEVEL_4),
        IVS(3),
        }
    },
},

[TRAINER_ETHAN_4] =
{
    ETHAN_INFO,
    .partySize = 4,
    .party = (const struct TrainerMon[]) {
        {
        ETHAN_SANDSHREW(REMATCH_4_LEVEL_4),
        IVS(4),
        },
        {
        ETHAN_ZUBAT(REMATCH_4_LEVEL_4),
        IVS(4),
        },
        {
        ETHAN_STUNKY(REMATCH_4_LEVEL_4),
        IVS(4),
        },
        {
        ETHAN_GULPIN(REMATCH_4_LEVEL_4),
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
        ETHAN_SANDSHREW(REMATCH_5_LEVEL_4),
        IVS(5),
        },
        {
        ETHAN_ZUBAT(REMATCH_5_LEVEL_4),
        IVS(5),
        },
        {
        ETHAN_STUNKY(REMATCH_5_LEVEL_4),
        IVS(5),
        },
        {
        ETHAN_GULPIN(REMATCH_5_LEVEL_4),
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
        .species = SPECIES_MAROWAK_ALOLAN,
        IVS(12),
        },
        {
        .lvl = 27,
        .species = SPECIES_SCOVILLAIN,
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
        .species = SPECIES_GROWLITHE,
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
        .species = SPECIES_HEATMOR,
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
        .species = SPECIES_LITWICK,
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
        .species = SPECIES_TORRACAT,
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
        .species = SPECIES_SWANNA,
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
        .species = SPECIES_CACNEA,
        },
        {
        .lvl = 29,
        .species = SPECIES_MARACTUS,
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
        .species = SPECIES_SANDILE,
        },
        {
        .lvl = 28,
        .species = SPECIES_SILICOBRA,
        },
        {
        .lvl = 28,
        .species = SPECIES_HELIOPTILE,
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
        .species = SPECIES_BUIZEL,
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
    IVS(10),                      \
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
        .species = SPECIES_ARCHEOPS,
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
        .species = SPECIES_BUIZEL,
        },
        {
        .lvl = 29,
        .species = SPECIES_CACNEA,
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
        .species = SPECIES_SANDILE,
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
        .species = SPECIES_CORVISQUIRE,
        },
        {
        .lvl = 28,
        .species = SPECIES_WEEPINBELL,
        },
        {
        .lvl = 28,
        .species = SPECIES_SILICOBRA,
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
        .species = SPECIES_BOLDORE,
        }
    },
},

//Petalburg Gym
#define PETALBURG_GYM_TRAINER(Variable, Name, Gender, Item, Species, HeldItem, Move1, Move2, Move3, Move4)                         \
[TRAINER_##Variable] =                                                                                             \
{                                                                                                                  \
    .trainerName = _(Name),                                                                                        \
    ACE_TRAINER_##Gender##_INFO,                                                                                   \
    .items = {ITEM_##Item, ITEM_NONE, ITEM_NONE, ITEM_NONE},                                                       \
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SETUP_FIRST_TURN, \
    .partySize = 1,                                                                                                \
    .party = (const struct TrainerMon[]) {                                                                         \
        {                                                                                                          \
        .lvl = 31,                                                                                                 \
        .species = SPECIES_##Species,                                                                              \
        PERFECT_IVS,                                                                                               \
        .heldItem = ITEM_##HeldItem,                                                                               \
        .moves = {MOVE_##Move1, MOVE_##Move2, MOVE_##Move3, MOVE_##Move4}                                          \
        }                                                                                                          \
    },                                                                                                             \
}

PETALBURG_GYM_TRAINER(RANDALL, "Randall", M, X_SPEED,      PERSIAN,  SALAC_BERRY,  FURY_SWIPES,  FAKE_OUT,    FEINT,        NONE),
PETALBURG_GYM_TRAINER(MARY,    "Mary",    F, X_ACCURACY,   DODRIO,   MICLE_BERRY,  TRI_ATTACK,   DOUBLE_HIT,  AERIAL_ACE,   NONE),
PETALBURG_GYM_TRAINER(PARKER,  "Parker",  M, HYPER_POTION, WATCHOG,  PERSIM_BERRY, CONFUSE_RAY,  DIZZY_PUNCH, NONE,         NONE),
PETALBURG_GYM_TRAINER(ALEXIA,  "Alexia",  F, X_DEFENSE,    DUBWOOL,  GANLON_BERRY, DEFENSE_CURL, FACADE,      BODY_PRESS,   NONE),
PETALBURG_GYM_TRAINER(GEORGE,  "George",  M, HYPER_POTION, CHANSEY,  SITRUS_BERRY, SOFT_BOILED,  LIFE_DEW,    ECHOED_VOICE, NONE),
PETALBURG_GYM_TRAINER(JODY,    "Jody",    F, X_ATTACK,     ZANGOOSE, LIECHI_BERRY, SWORDS_DANCE, CRUSH_CLAW,  NONE,         NONE),
PETALBURG_GYM_TRAINER(BERKE,   "Berke",   M, DIRE_HIT,     GUMSHOOS, SCOPE_LENS,   CHIP_AWAY,    NONE,        NONE,         NONE),

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
        .species = SPECIES_FLOATZEL,
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
        .species = SPECIES_BARRASKEWDA,
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
        .species = SPECIES_WOOLOO,
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
        .species = SPECIES_MIENFOO,
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
        .species = SPECIES_ESPURR,
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
        .species = SPECIES_FLOATZEL,
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
        .species = SPECIES_BARRASKEWDA,
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
        .species = SPECIES_CORVISQUIRE,
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
        .species = SPECIES_BARBOACH,
        IVS(1),
        },
        {
        .lvl = 31,
        .species = SPECIES_POLIWHIRL,
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
        .species = SPECIES_BUIZEL,
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
        .species = SPECIES_DUCKLETT,
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

#define TONY_ARROKUDA(Level)                                                       \
    .lvl = Level,                                                                  \
    .species = Level < REMATCH_4_LEVEL_6 ? SPECIES_ARROKUDA : SPECIES_BARRASKEWDA, \
    .ability = ABILITY_SWIFT_SWIM

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
        TONY_ARROKUDA(REMATCH_3_LEVEL_2),
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
        TONY_ARROKUDA(REMATCH_4_LEVEL_2),
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
        TONY_ARROKUDA(REMATCH_5_LEVEL_2),
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
        .species = SPECIES_CLAMPERL,
        },
        {
        .lvl = 30,
        .species = SPECIES_ARROKUDA,
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
        .species = SPECIES_ARROKUDA,
        IVS(1),
        },
        {
        .lvl = 30,
        .species = SPECIES_WINGULL,
        IVS(1),
        },
        {
        .lvl = 30,
        .species = SPECIES_ARROKUDA,
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
        .species = SPECIES_BARBOACH,
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
        .species = SPECIES_DUCKLETT,
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
        .species = SPECIES_MAGIKARP,
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
        .species = SPECIES_POLIWHIRL,
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
        .species = SPECIES_CORVISQUIRE,
        IVS(6),
        },
        {
        .lvl = 30,
        .species = SPECIES_TINKATINK,
        IVS(6),
        }
    },
},

#define CORY_INFO             \
    .trainerName = _("Cory"), \
    SAILOR_INFO,              \
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE

#define CORY_ARROKUDA(Level)                                                      \
    .lvl = Level,                                                                  \
    .species = Level < REMATCH_2_LEVEL_3 ? SPECIES_ARROKUDA : SPECIES_BARRASKEWDA, \
    .ability = ABILITY_SWIFT_SWIM,                                                 \
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
        CORY_ARROKUDA(30),
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
        CORY_ARROKUDA(REMATCH_2_LEVEL_3),
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
        CORY_ARROKUDA(REMATCH_3_LEVEL_3),
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
        CORY_ARROKUDA(REMATCH_4_LEVEL_3),
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
        CORY_ARROKUDA(REMATCH_5_LEVEL_3),
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
        .species = SPECIES_BARRASKEWDA,
        }
    },
},

//Abandoned Ship
#define THALIA_INFO             \
    .trainerName = _("Thalia"), \
    BEAUTY_INFO,                \
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE

#define THALIA_POLIWAG(Level)        \
    .lvl = Level,                    \
    .species = Level < REMATCH_2_LEVEL_2 ? SPECIES_POLIWAG : (Level < REMATCH_4_LEVEL_6 ? SPECIES_POLIWHIRL : SPECIES_POLITOED), \
    .ability = ABILITY_WATER_ABSORB, \
    .gender = TRAINER_MON_FEMALE

#define THALIA_WAILMER(Level)                                  \
    .lvl = Level,                                              \
    .species = Level < 40 ? SPECIES_WAILMER : SPECIES_WAILORD, \
    .ability = ABILITY_WATER_VEIL,                             \
    .gender = TRAINER_MON_FEMALE

#define THALIA_AROMATISSE(Level)   \
    .lvl = Level,                  \
    .species = SPECIES_AROMATISSE, \
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
        THALIA_POLIWAG(31),
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
        THALIA_POLIWAG(REMATCH_2_LEVEL_2),
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
        THALIA_AROMATISSE(REMATCH_3_LEVEL_3),
        IVS(3),
        },
        {
        THALIA_WAILMER(REMATCH_3_LEVEL_3),
        IVS(3),
        },
        {
        THALIA_POLIWAG(REMATCH_3_LEVEL_3),
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
        THALIA_AROMATISSE(REMATCH_4_LEVEL_3),
        IVS(4),
        },
        {
        THALIA_WAILMER(REMATCH_4_LEVEL_3),
        IVS(4),
        },
        {
        THALIA_POLIWAG(REMATCH_4_LEVEL_3),
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
        THALIA_AROMATISSE(REMATCH_5_LEVEL_3),
        IVS(5),
        },
        {
        THALIA_WAILMER(REMATCH_5_LEVEL_3),
        IVS(5),
        },
        {
        THALIA_POLIWAG(REMATCH_5_LEVEL_3),
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
        .species = SPECIES_GUMSHOOS,
        },
        {
        .lvl = 31,
        .species = SPECIES_LUXIO,
        }
    },
},

[TRAINER_WERNER] =
{
    .trainerName = _("Werner"),
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
        .species = SPECIES_FLOATZEL,
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
        .species = SPECIES_FLOATZEL,
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
        .species = SPECIES_ARROKUDA,
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
        .species = SPECIES_DUCKLETT,
        },
        {
        .lvl = 30,
        .species = SPECIES_WINGULL,
        },
        {
        .lvl = 30,
        .species = SPECIES_ARROKUDA,
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
        .species = SPECIES_BARRASKEWDA,
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
        .species = SPECIES_CORVISQUIRE,
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
        .species = SPECIES_MEOWTH,
        },
        {
        .lvl = 31,
        .species = SPECIES_MEOWTH_ALOLAN,
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
        .species = SPECIES_ARROKUDA,
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
        .species = SPECIES_KILOWATTREL,
        },
        {
        .lvl = 33,
        .species = SPECIES_CORVISQUIRE,
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
        .species = SPECIES_WEEPINBELL,
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
        .species = SPECIES_SPRITZEE,
        },
        {
        .lvl = 33,
        .species = SPECIES_SWIRLIX,
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
        .species = SPECIES_CATERPIE,
        IVS(12),
        },
        {
        .lvl = 32,
        .species = SPECIES_METAPOD,
        IVS(12),
        },
        {
        .lvl = 32,
        .species = SPECIES_BUTTERFREE,
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
        .species = SPECIES_SHELMET,
        IVS(12),
        },
        {
        .lvl = 32,
        .species = SPECIES_KARRABLAST,
        IVS(12),
        },
        {
        .lvl = 32,
        .species = SPECIES_MASQUERAIN,
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
        .species = SPECIES_HERACROSS,
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
        .species = SPECIES_ARROKUDA,
        },
        {
        .lvl = 31,
        .species = SPECIES_CLAMPERL,
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

#define CATHERINE_WEEPINBELL(Level)                                                 \
    .lvl = Level,                                                                   \
    .species = Level < REMATCH_3_LEVEL_6 ? SPECIES_WEEPINBELL : SPECIES_VICTREEBEL, \
    IVS(10),                                                                        \
    .gender = TRAINER_MON_FEMALE


[TRAINER_CATHERINE_1] =
{
    CATHERINE_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        CATHERINE_WEEPINBELL(34),
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
        CATHERINE_WEEPINBELL(REMATCH_2_LEVEL_1),
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
        CATHERINE_WEEPINBELL(REMATCH_3_LEVEL_1),
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
        CATHERINE_WEEPINBELL(REMATCH_4_LEVEL_1),
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
        CATHERINE_WEEPINBELL(REMATCH_5_MINI_BOSS),
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

#define JACKSON_CAPSAKID(Level)                                                   \
    .lvl = Level,                                                                 \
    .species = Level < REMATCH_2_LEVEL_1 ? SPECIES_CAPSAKID : SPECIES_SCOVILLAIN, \
    .ability = ABILITY_CHLOROPHYLL,                                               \
    IVS(10),                                                                      \
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
        JACKSON_CAPSAKID(34),
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
        JACKSON_CAPSAKID(REMATCH_2_LEVEL_1),
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
        JACKSON_CAPSAKID(REMATCH_3_LEVEL_1),
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
        JACKSON_CAPSAKID(REMATCH_4_LEVEL_1),
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
        JACKSON_CAPSAKID(REMATCH_5_MINI_BOSS),
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
        .species = SPECIES_DUCKLETT,
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
        .species = SPECIES_CORVISQUIRE,
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
        .species = SPECIES_GROWLITHE,
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
        .species = SPECIES_FLAMIGO,
        }
    },
},

//Weather Institute
#define WEATHER_INSTITUTE_AQUA_LEVEL 37
NERISSA_BATTLE(WEATHER_INSTITUTE, WEATHER_INSTITUTE_AQUA_LEVEL),
BERYL_BATTLE(WEATHER_INSTITUTE, WEATHER_INSTITUTE_AQUA_LEVEL),
MALIK_BATTLE(WEATHER_INSTITUTE, WEATHER_INSTITUTE_AQUA_LEVEL),
MARINA_BATTLE(WEATHER_INSTITUTE, WEATHER_INSTITUTE_AQUA_LEVEL),

[TRAINER_CASPIAN_WEATHER_INSTITUTE] =
{
    CASPIAN_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        CASPIAN_CLAMPERL(WEATHER_INSTITUTE_AQUA_LEVEL),
        CASPIAN_CARVANHA(WEATHER_INSTITUTE_AQUA_LEVEL, AQUA_JET, POISON_FANG, ICE_FANG),
    },
},

SHELLY_BATTLE(WEATHER_INSTITUTE, 41, 6),

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
        .species = SPECIES_LUXIO,
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
    .ability = ABILITY_NATURAL_CURE,                                         \
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
        .species = SPECIES_CORVIKNIGHT,
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
        .species = SPECIES_ARCHEOPS,
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
        .species = SPECIES_SWANNA,
        IVS(12),
        },
        {
        .lvl = 38,
        .species = SPECIES_CORVISQUIRE,
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
        .species = SPECIES_BUTTERFREE,
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
        .species = SPECIES_KILOWATTREL,
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
        .species = SPECIES_AXEW,
        IVS(12),
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
        .species = SPECIES_ACCELGOR,
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
        .species = SPECIES_DRAMPA,
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
        .species = SPECIES_ROSELIA,
        IVS(6),
        },
        {
        .lvl = 39,
        .species = SPECIES_GOGOAT,
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
        .species = SPECIES_WEEPINBELL,
        IVS(6),
        },
        {
        .lvl = 39,
        .species = SPECIES_SCOVILLAIN,
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

#define JEFFREY_ESCAVALIER(Level)  \
    .lvl = Level,                  \
    .species = SPECIES_ESCAVALIER, \
    IVS(10),                       \
    .gender = TRAINER_MON_MALE

#define JEFFREY_BUTTERFREE(Level)  \
    .lvl = Level,                  \
    .species = SPECIES_BUTTERFREE, \
    IVS(10),                       \
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
        JEFFREY_BUTTERFREE(42),
        },
        {
        JEFFREY_ESCAVALIER(42),
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
        JEFFREY_BUTTERFREE(45),
        },
        {
        JEFFREY_ESCAVALIER(45),
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
        JEFFREY_BUTTERFREE(REMATCH_4_LEVEL_2),
        },
        {
        JEFFREY_ESCAVALIER(REMATCH_4_LEVEL_2),
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
        JEFFREY_BUTTERFREE(REMATCH_5_LEVEL_2),
        },
        {
        JEFFREY_ESCAVALIER(REMATCH_5_LEVEL_2),
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
        .species = SPECIES_ACCELGOR,
        },
        {
        .lvl = 41,
        .species = SPECIES_ESCAVALIER,
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
        .species = SPECIES_PUMPKABOO,
        },
        {
        .lvl = 41,
        .species = SPECIES_GASTLY,
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
        .species = SPECIES_WATCHOG,
        },
        {
        .lvl = 42,
        .species = SPECIES_SNORLAX,
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
        .species = SPECIES_LUXRAY,
        .ability = ABILITY_GUTS,
        .moves = {MOVE_CHARGE_BEAM, MOVE_DOUBLE_KICK, MOVE_FIRE_FANG, MOVE_CONFUSE_RAY},
        },
        {
        POKEMON_BREEDER_MON(37),
        .species = SPECIES_SHARPEDO,
        .ability = ABILITY_SPEED_BOOST,
        .moves = {MOVE_SCALE_SHOT, MOVE_ASSURANCE, MOVE_BOUNCE, MOVE_ICE_FANG},
        },
        {
        POKEMON_BREEDER_MON(37),
        .species = SPECIES_GRAPPLOCT,
        .ability = ABILITY_TECHNICIAN,
        .moves = {MOVE_CIRCLE_THROW, MOVE_POWER_UP_PUNCH, MOVE_RETALIATE, MOVE_SOAK},
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
        .species = SPECIES_PYROAR,
        .ability = ABILITY_COMPETITIVE,
        .moves = {MOVE_HEAT_WAVE, MOVE_SNARL, MOVE_MUD_SLAP, MOVE_TRAILBLAZE},
        .gender = TRAINER_MON_MALE,
        },
        {
        POKEMON_BREEDER_MON(37),
        .species = SPECIES_CAMERUPT,
        .ability = ABILITY_ANGER_POINT,
        .moves = {MOVE_FLAME_CHARGE, MOVE_STOMPING_TANTRUM, MOVE_HEAVY_SLAM, MOVE_LASH_OUT},
        },
        {
        POKEMON_BREEDER_MON(37),
        .species = SPECIES_VICTREEBEL,
        .ability = ABILITY_EFFECT_SPORE,
        .moves = {MOVE_LEAF_STORM, MOVE_ACID_SPRAY, MOVE_SLUDGE_WAVE, MOVE_STRENGTH_SAP}, //TODO
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

#define WALTER_LUXRAY(Level)       \
    RICH_MON(Level),               \
    .species = SPECIES_LUXRAY,     \
    .ability = ABILITY_INTIMIDATE, \
    IVS(10),                       \
    .gender = TRAINER_MON_MALE

#define WALTER_SWANNA(Level)     \
    RICH_MON(Level),             \
    .species = SPECIES_SWANNA,   \
    .ability = ABILITY_KEEN_EYE, \
    IVS(10),                     \
    .gender = TRAINER_MON_MALE

#define WALTER_PERSIAN(Level)   \
    RICH_MON(Level),            \
    .species = SPECIES_PERSIAN, \
    .ability = ABILITY_LIMBER,  \
    IVS(10),                    \
    .gender = TRAINER_MON_MALE

[TRAINER_WALTER_1] =
{
    WALTER_INFO,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        WALTER_LUXRAY(42),
        }
    },
},

[TRAINER_WALTER_2] =
{
    WALTER_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        WALTER_SWANNA(44),
        },
        {
        WALTER_LUXRAY(44),
        }
    },
},

[TRAINER_WALTER_3] =
{
    WALTER_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        WALTER_SWANNA(46),
        },
        {
        WALTER_LUXRAY(46),
        }
    },
},

[TRAINER_WALTER_4] =
{
    WALTER_INFO,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        WALTER_PERSIAN(REMATCH_4_LEVEL_2),
        },
        {
        WALTER_SWANNA(REMATCH_4_LEVEL_2),
        },
        {
        WALTER_LUXRAY(REMATCH_4_LEVEL_1),
        }
    },
},

[TRAINER_WALTER_5] =
{
    WALTER_INFO,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        WALTER_PERSIAN(REMATCH_5_LEVEL_2),
        .moves = {MOVE_HEADBUTT, MOVE_PLAY_ROUGH, MOVE_PIN_MISSILE, MOVE_BELLY_DRUM}
        },
        {
        WALTER_SWANNA(REMATCH_5_LEVEL_2),
        .moves = {MOVE_HYDRO_PUMP, MOVE_PSYCHIC, MOVE_POWER_GEM, MOVE_AMNESIA}
        },
        {
        WALTER_LUXRAY(REMATCH_5_MINI_BOSS),
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
        .species = SPECIES_PACHIRISU,
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
        .species = SPECIES_CUFANT,
        IVS(12),
        },
        {
        .lvl = 41,
        .species = SPECIES_ORTHWORM,
        IVS(12),
        }
    },
},

#define CRISTIN_INFO                                               \
    .trainerName = _("Cristin"),                                   \
    ACE_TRAINER_F_INFO,                                            \
    .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE}, \
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY

#define CRISTIN_MARACTUS(Level)     \
    .lvl = Level,                   \
    .species = SPECIES_MARACTUS,    \
    .ability = ABILITY_CHLOROPHYLL, \
    .gender = TRAINER_MON_FEMALE

#define CRISTIN_HELIOLISK(Level)  \
    .lvl = Level,                 \
    .species = SPECIES_HELIOLISK, \
    .ability = ABILITY_SAND_VEIL, \
    .gender = TRAINER_MON_FEMALE

#define CRISTIN_TROPIUS(Level)      \
    .lvl = Level,                   \
    .species = SPECIES_TROPIUS,     \
    .ability = ABILITY_CHLOROPHYLL, \
    .gender = TRAINER_MON_FEMALE

[TRAINER_CRISTIN_1] =
{
    CRISTIN_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        CRISTIN_HELIOLISK(41),
        IVS(12),
        },
        {
        CRISTIN_MARACTUS(41),
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
        CRISTIN_HELIOLISK(43),
        IVS(13),
        },
        {
        CRISTIN_MARACTUS(43),
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
        CRISTIN_TROPIUS(44),
        IVS(14),
        },
        {
        CRISTIN_HELIOLISK(44),
        IVS(14),
        },
        {
        CRISTIN_MARACTUS(44),
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
        CRISTIN_TROPIUS(REMATCH_4_LEVEL_3),
        IVS(15),
        },
        {
        CRISTIN_HELIOLISK(REMATCH_4_LEVEL_3),
        IVS(15),
        },
        {
        CRISTIN_MARACTUS(REMATCH_4_LEVEL_3),
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
        CRISTIN_TROPIUS(REMATCH_5_LEVEL_3),
        IVS(17),
        },
        {
        CRISTIN_HELIOLISK(REMATCH_5_LEVEL_3),
        IVS(17),
        },
        {
        CRISTIN_MARACTUS(REMATCH_5_LEVEL_3),
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
        .species = SPECIES_HAUNTER,
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
        .species = SPECIES_PERSIAN,
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
        .species = SPECIES_ESPATHRA,
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
        .species = Level < 40 ? SPECIES_BUIZEL : SPECIES_FLOATZEL,                                                  \
        .ability = ABILITY_WATER_VEIL,                                                                              \
        .moves = {MOVE_FLIP_TURN, MOVE_ICE_FANG, MOVE_TAIL_SLAP, MOVE_AQUA_RING},                                   \
        .gender = TRAINER_MON_FEMALE                                                                                \
        },                                                                                                          \
        {                                                                                                           \
        POKEMON_BREEDER_MON(Level),                                                                                 \
        .species = Level < 40 ? SPECIES_FLITTLE : SPECIES_ESPATHRA,                                                 \
        .ability = ABILITY_SPEED_BOOST,                                                                             \
        .moves = {MOVE_STORED_POWER, MOVE_MUD_SLAP, MOVE_CONFUSE_RAY, MOVE_BATON_PASS},                             \
        .gender = TRAINER_MON_FEMALE                                                                                \
        },                                                                                                          \
        {                                                                                                           \
        POKEMON_BREEDER_MON(Level),                                                                                 \
        .species = SPECIES_BOMBIRDIER,                                                                              \
        .ability = ABILITY_ROCKY_PAYLOAD,                                                                           \
        .moves = {MOVE_ROCK_BLAST, MOVE_LASH_OUT, MOVE_BRAVE_BIRD, MOVE_TAILWIND},                                  \
        .gender = TRAINER_MON_FEMALE                                                                                \
        },                                                                                                          \
        {                                                                                                           \
        POKEMON_BREEDER_MON(Level),                                                                                 \
        .species = Level < 40 ? SPECIES_CLEFFA : (Level < 42 ? SPECIES_CLEFAIRY : SPECIES_CLEFABLE),                \
        .ability = ABILITY_UNAWARE,                                                                                 \
        .moves = {MOVE_ALLURING_VOICE, MOVE_DRAINING_KISS, MOVE_PSYSHOCK, MOVE_CHILLING_WATER},                     \
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
        .species = SPECIES_ESPURR,
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
        .species = SPECIES_LITWICK,
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

#define VALERIE_PALOSSAND(Level)  \
    .lvl = Level,                 \
    .species = SPECIES_PALOSSAND, \
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
        VALERIE_PALOSSAND(43),
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
        VALERIE_PALOSSAND(44),
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
        VALERIE_PALOSSAND(45),
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
        VALERIE_PALOSSAND(REMATCH_4_LEVEL_3),
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
        VALERIE_PALOSSAND(REMATCH_5_LEVEL_3),
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
        .species = SPECIES_SWOOBAT,
        }
    },
},

NERISSA_BATTLE(MT_PYRE, 42),
BERYL_BATTLE(MT_PYRE, 42),
MALIK_BATTLE(MT_PYRE, 42),
MARINA_BATTLE(MT_PYRE, 42),

//Route 123 (east)
#define CAMERON_INFO             \
    .trainerName = _("Cameron"), \
    PSYCHIC_M_INFO,              \
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE

#define CAMERON_ESPURR(Level)                                  \
    .lvl = Level,                                              \
    .species = Level < 46 ? SPECIES_ESPURR : SPECIES_MEOWSTIC, \
    .gender = TRAINER_MON_MALE

#define CAMERON_KADABRA(Level)                                  \
    .lvl = Level,                                               \
    .species = Level < 46 ? SPECIES_KADABRA : SPECIES_ALAKAZAM, \
    .ability = ABILITY_SYNCHRONIZE,                             \
    .gender = TRAINER_MON_MALE

[TRAINER_CAMERON_1] =
{
    CAMERON_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        CAMERON_KADABRA(44),
        },
        {
        CAMERON_ESPURR(44),
        }
    },
},

[TRAINER_CAMERON_2] =
{
    CAMERON_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        CAMERON_KADABRA(46),
        IVS(2),
        },
        {
        CAMERON_ESPURR(46),
        IVS(2),
        }
    },
},

[TRAINER_CAMERON_3] =
{
    CAMERON_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        CAMERON_KADABRA(48),
        IVS(3),
        },
        {
        CAMERON_ESPURR(48),
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
        CAMERON_KADABRA(REMATCH_4_LEVEL_2),
        IVS(4),
        },
        {
        CAMERON_ESPURR(REMATCH_4_LEVEL_2),
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
        CAMERON_KADABRA(REMATCH_5_LEVEL_2),
        IVS(5),
        },
        {
        CAMERON_ESPURR(REMATCH_5_LEVEL_2),
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
        .lvl = 45,
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
        .lvl = 45,
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
        .lvl = 44,
        .species = SPECIES_ROTOM,
        },
        {
        .lvl = 44,
        .species = SPECIES_SANDYGAST,
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
        .lvl = 44,
        .species = SPECIES_ZANGOOSE,
        },
        {
        .lvl = 44,
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
        .species = SPECIES_GIBLE,
        IVS(12),
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
        .lvl = 41,
        .species = SPECIES_CORVIKNIGHT,
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
        .species = SPECIES_KLANG,
        IVS(12),
        },
        {
        .lvl = 41,
        .species = SPECIES_GOGOAT,
        IVS(12),
        }
    },
},

#define FERNANDO_INFO             \
    .trainerName = _("Fernando"), \
    GUITARIST_INFO,               \
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE

#define FERNANDO_TOXTRICITY(Level) \
    .lvl = Level,                  \
    .species = SPECIES_TOXTRICITY, \
    .ability = ABILITY_PUNK_ROCK,  \
    .gender = TRAINER_MON_MALE

#define FERNANDO_LUXRAY(Level)     \
    .lvl = Level,                  \
    .species = SPECIES_LUXRAY,     \
    .ability = ABILITY_INTIMIDATE, \
    .gender = TRAINER_MON_MALE

#define FERNANDO_ELECTRODE(Level) \
    .lvl = Level,                 \
    .species = SPECIES_ELECTRODE, \
    .ability = ABILITY_SOUNDPROOF

[TRAINER_FERNANDO_1] =
{
    FERNANDO_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        FERNANDO_LUXRAY(44),
        },
        {
        FERNANDO_TOXTRICITY(44),
        }
    },
},

[TRAINER_FERNANDO_2] =
{
    FERNANDO_INFO,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        FERNANDO_ELECTRODE(45),
        IVS(2),
        },
        {
        FERNANDO_LUXRAY(45),
        IVS(2),
        },
        {
        FERNANDO_TOXTRICITY(45),
        IVS(2),
        }
    },
},

[TRAINER_FERNANDO_3] =
{
    FERNANDO_INFO,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        FERNANDO_ELECTRODE(47),
        IVS(3),
        },
        {
        FERNANDO_LUXRAY(47),
        IVS(3),
        },
        {
        FERNANDO_TOXTRICITY(47),
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
        FERNANDO_ELECTRODE(REMATCH_4_LEVEL_3),
        IVS(4),
        },
        {
        FERNANDO_LUXRAY(REMATCH_4_LEVEL_3),
        IVS(4),
        },
        {
        FERNANDO_TOXTRICITY(REMATCH_4_LEVEL_3),
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
        FERNANDO_ELECTRODE(REMATCH_5_LEVEL_3),
        IVS(5),
        },
        {
        FERNANDO_LUXRAY(REMATCH_5_LEVEL_3),
        IVS(5),
        },
        {
        FERNANDO_TOXTRICITY(REMATCH_5_LEVEL_3),
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
        .lvl = 44,
        .species = SPECIES_FLAMIGO,
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

#define JACKI_ESPURR(Level)                                           \
    .lvl = Level,                                                     \
    .species = Level < 46 ? SPECIES_ESPURR : SPECIES_MEOWSTIC_FEMALE, \
    .gender = TRAINER_MON_FEMALE

#define JACKI_KADABRA(Level)                                    \
    .lvl = Level,                                               \
    .species = Level < 46 ? SPECIES_KADABRA : SPECIES_ALAKAZAM, \
    .ability = ABILITY_INNER_FOCUS,                             \
    .gender = TRAINER_MON_FEMALE

[TRAINER_JACKI_1] =
{
    JACKI_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        JACKI_KADABRA(44),
        },
        {
        JACKI_ESPURR(44),
        }
    },
},

[TRAINER_JACKI_2] =
{
    JACKI_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        JACKI_KADABRA(39),
        IVS(2),
        },
        {
        JACKI_ESPURR(39),
        IVS(2),
        }
    },
},

[TRAINER_JACKI_3] =
{
    JACKI_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        JACKI_KADABRA(41),
        IVS(3),
        },
        {
        JACKI_ESPURR(41),
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
        JACKI_KADABRA(REMATCH_4_LEVEL_2),
        IVS(4),
        },
        {
        JACKI_ESPURR(REMATCH_4_LEVEL_2),
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
        JACKI_KADABRA(REMATCH_5_LEVEL_2),
        IVS(5),
        },
        {
        JACKI_ESPURR(REMATCH_5_LEVEL_2),
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

//Magma Hideout
#define MAGMA_HIDEOUT_GRUNT(Number, Gender, Species) \
[TRAINER_GRUNT_MAGMA_HIDEOUT_##Number] =             \
{                                                    \
    .trainerName = _("Grunt"),                       \
    MAGMA_GRUNT_##Gender##_INFO,                     \
    .partySize = 1,                                  \
    .party = (const struct TrainerMon[]) {           \
        {                                            \
        .lvl = MAGMA_HIDEOUT_LEVEL,                  \
        .species = SPECIES_##Species,                \
        }                                            \
    },                                               \
}

MAGMA_HIDEOUT_GRUNT(1, M, NUMEL),
MAGMA_HIDEOUT_GRUNT(2, M, GEODUDE),
MAGMA_HIDEOUT_GRUNT(3, F, SANDYGAST),
MAGMA_HIDEOUT_GRUNT(4, M, BALTOY),
MAGMA_HIDEOUT_GRUNT(5, M, RHYHORN),
MAGMA_HIDEOUT_GRUNT(6, F, CUBONE),
MAGMA_HIDEOUT_GRUNT(7, M, SANDSHREW),
MAGMA_HIDEOUT_GRUNT(8, M, DIGLETT),
MAGMA_HIDEOUT_GRUNT(9, M, DRILBUR),
MAGMA_HIDEOUT_GRUNT(10, M, SANDILE),

WALKER_BATTLE(MAGMA_HIDEOUT, MAGMA_HIDEOUT_LEVEL),
GAETANO_BATTLE(MAGMA_HIDEOUT, MAGMA_HIDEOUT_LEVEL),
JORDAN_BATTLE(MAGMA_HIDEOUT, MAGMA_HIDEOUT_LEVEL),
TERRANCE_BATTLE(MAGMA_HIDEOUT, MAGMA_HIDEOUT_LEVEL),
GINNY_BATTLE(MAGMA_HIDEOUT, MAGMA_HIDEOUT_LEVEL),
LANDON_BATTLE(MAGMA_HIDEOUT, MAGMA_HIDEOUT_LEVEL),
TABITHA_BATTLE(MAGMA_HIDEOUT, 47, 9),

[TRAINER_MAXIE_MAGMA_HIDEOUT] =
{
    MAXIE_INFO,
    .items = {ITEM_HYPER_POTION, ITEM_SUPER_POTION, ITEM_NONE, ITEM_NONE},
    .partySize = 4,
    .party = (const struct TrainerMon[]) {
        MAXIE_SANDILE(46),
        MAXIE_TRAPINCH(47),
        MAXIE_RHYHORN(47),
        {
        HUMPHREY(48),
        }
    },
},

//Aqua Hideout
#define AQUA_HIDEOUT_GRUNT(Number, Gender, Species1, Species2) \
[TRAINER_GRUNT_AQUA_HIDEOUT_##Number] =                        \
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

AQUA_HIDEOUT_GRUNT(1, M, WINGULL, MAGIKARP),
AQUA_HIDEOUT_GRUNT(2, F, CLAMPERL, DUCKLETT),
AQUA_HIDEOUT_GRUNT(3, M, WINGULL, BUIZEL),

NERISSA_BATTLE(AQUA_HIDEOUT, AQUA_HIDEOUT_LEVEL),
BERYL_BATTLE(AQUA_HIDEOUT, AQUA_HIDEOUT_LEVEL),

[TRAINER_CASPIAN_AQUA_HIDEOUT] =
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
MATT_BATTLE(AQUA_HIDEOUT, 49, 6),

//Route 124
[TRAINER_GRACE] =
{
    .trainerName = _("Grace"),
    SWIMMER_F_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 46,
        .species = SPECIES_FLOATZEL,
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
        .lvl = 46,
        .species = SPECIES_GYARADOS,
        }
    },
},

#define LILA_AND_ROY_INFO           \
    .trainerName = _("Lila & Roy"), \
    SIS_AND_BRO_INFO,               \
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE

#define LILA_DUCKLETT(Level)                                   \
    .lvl = Level,                                              \
    .species = Level < 47 ? SPECIES_DUCKLETT : SPECIES_SWANNA, \
    .ability = ABILITY_KEEN_EYE,                               \
    .gender = TRAINER_MON_FEMALE

#define ROY_BUIZEL(Level)                                      \
    .lvl = Level,                                              \
    .species = Level < 45 ? SPECIES_BUIZEL : SPECIES_FLOATZEL, \
    .ability = ABILITY_SWIFT_SWIM,                             \
    .gender = TRAINER_MON_MALE

[TRAINER_LILA_AND_ROY_1] =
{
    LILA_AND_ROY_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        LILA_DUCKLETT(46),
        },
        {
        ROY_BUIZEL(44),
        }
    },
},

[TRAINER_LILA_AND_ROY_2] =
{
    LILA_AND_ROY_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        LILA_DUCKLETT(47),
        },
        {
        ROY_BUIZEL(45),
        }
    },
},

[TRAINER_LILA_AND_ROY_3] =
{
    LILA_AND_ROY_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        LILA_DUCKLETT(48),
        },
        {
        ROY_BUIZEL(46),
        }
    },
},

[TRAINER_LILA_AND_ROY_4] =
{
    LILA_AND_ROY_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        LILA_DUCKLETT(REMATCH_4_LEVEL_1),
        },
        {
        ROY_BUIZEL(REMATCH_4_LEVEL_3),
        }
    },
},

[TRAINER_LILA_AND_ROY_5] =
{
    LILA_AND_ROY_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        LILA_DUCKLETT(REMATCH_5_LEVEL_1),
        },
        {
        ROY_BUIZEL(REMATCH_5_LEVEL_3),
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
        .lvl = 45,
        .species = SPECIES_BARRASKEWDA,
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

#define JENNY_BARBOACH(Level)                                    \
    .lvl = Level,                                                \
    .species = Level < 47 ? SPECIES_BARBOACH : SPECIES_WHISCASH, \
    .ability = ABILITY_ILLUMINATE

#define JENNY_FLOATZEL(Level)    \
    .lvl = Level,                \
    .species = SPECIES_FLOATZEL, \
    .gender = TRAINER_MON_FEMALE

[TRAINER_JENNY_1] =
{
    JENNY_INFO,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        JENNY_WAILMER(46),
        }
    },
},

[TRAINER_JENNY_2] =
{
    JENNY_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        JENNY_BARBOACH(46),
        },
        {
        JENNY_WAILMER(46),
        }
    },
},

[TRAINER_JENNY_3] =
{
    JENNY_INFO,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        JENNY_FLOATZEL(47),
        },
        {
        JENNY_BARBOACH(47),
        },
        {
        JENNY_WAILMER(47),
        }
    },
},

[TRAINER_JENNY_4] =
{
    JENNY_INFO,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        JENNY_FLOATZEL(REMATCH_4_LEVEL_3),
        },
        {
        JENNY_BARBOACH(REMATCH_4_LEVEL_3),
        },
        {
        JENNY_WAILMER(REMATCH_4_LEVEL_3),
        }
    },
},

[TRAINER_JENNY_5] =
{
    JENNY_INFO,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        JENNY_FLOATZEL(REMATCH_5_LEVEL_3),
        },
        {
        JENNY_BARBOACH(REMATCH_5_LEVEL_3),
        },
        {
        JENNY_WAILMER(REMATCH_5_LEVEL_3),
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
        .lvl = 45,
        .species = SPECIES_BARRASKEWDA,
        },
        {
        .lvl = 45,
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
        TRIATHLETE_MON(46, 0),
        .species = SPECIES_FLOATZEL,
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
        .lvl = 46,
        .species = SPECIES_SHARPEDO,
        }
    },
},

//Route 125
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

#define ERNEST_BARRASKEWDA(Level)   \
    .lvl = Level,                   \
    .species = SPECIES_BARRASKEWDA, \
    .ability = ABILITY_SWIFT_SWIM,  \
    .gender = TRAINER_MON_MALE

[TRAINER_ERNEST_1] =
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

[TRAINER_ERNEST_2] =
{
    ERNEST_INFO,
    .partySize = 4,
    .party = (const struct TrainerMon[]) {
        {
        ERNEST_BARRASKEWDA(44),
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

[TRAINER_ERNEST_3] =
{
    ERNEST_INFO,
    .partySize = 4,
    .party = (const struct TrainerMon[]) {
        {
        ERNEST_BARRASKEWDA(45),
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

[TRAINER_ERNEST_4] =
{
    ERNEST_INFO,
    .partySize = 4,
    .party = (const struct TrainerMon[]) {
        {
        ERNEST_BARRASKEWDA(REMATCH_4_LEVEL_4),
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

[TRAINER_ERNEST_5] =
{
    ERNEST_INFO,
    .partySize = 4,
    .party = (const struct TrainerMon[]) {
        {
        ERNEST_BARRASKEWDA(REMATCH_5_LEVEL_4),
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

[TRAINER_NOLEN] =
{
    .trainerName = _("Nolen"),
    SWIMMER_M_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 46,
        .species = SPECIES_BARRASKEWDA,
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
        .lvl = 46,
        .species = SPECIES_POLIWHIRL,
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
        .lvl = 46,
        .species = SPECIES_SEALEO,
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
        .lvl = 45,
        .species = SPECIES_KILOWATTREL,
        },
        {
        .lvl = 45,
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
        .lvl = 45,
        .species = SPECIES_LUXRAY,
        },
        {
        .lvl = 45,
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
        .lvl = 46,
        .species = SPECIES_POLIWRATH,
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

//Mossdeep Gym
#define MOSSDEEP_GYM_LEVEL 46

[TRAINER_PRESTON] =
{
    .trainerName = _("Preston"),
    PSYCHIC_M_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = MOSSDEEP_GYM_LEVEL,
        .species = SPECIES_SWOOBAT,
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
        .lvl = MOSSDEEP_GYM_LEVEL,
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
        .lvl = MOSSDEEP_GYM_LEVEL,
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
        .lvl = MOSSDEEP_GYM_LEVEL,
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
        .lvl = MOSSDEEP_GYM_LEVEL,
        .species = SPECIES_ESPATHRA,
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
        .lvl = MOSSDEEP_GYM_LEVEL,
        .species = SPECIES_ESPEON,
        }
    },
},

[TRAINER_KATHLEEN] =
{
    .trainerName = _("Kathleen"),
    PSYCHIC_F_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = MOSSDEEP_GYM_LEVEL,
        .species = SPECIES_CHIMECHO,
        IVS(12),
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
        .lvl = MOSSDEEP_GYM_LEVEL,
        .species = SPECIES_ALAKAZAM,
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
        .lvl = MOSSDEEP_GYM_LEVEL,
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
        .lvl = MOSSDEEP_GYM_LEVEL,
        .species = SPECIES_SWOOBAT,
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
        .lvl = MOSSDEEP_GYM_LEVEL,
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
        .lvl = MOSSDEEP_GYM_LEVEL,
        .species = SPECIES_ESPEON,
        IVS(12),
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

[TRAINER_SEBASTIAN] =
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

[TRAINER_BENNY] =
{
    .trainerName = _("Benny"),
    BIRD_KEEPER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 45,
        .species = SPECIES_CORVIKNIGHT,
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

//Space Center
JORDAN_BATTLE(SPACE_CENTER, SPACE_CENTER_GRUNT_LEVEL),
WALKER_BATTLE(SPACE_CENTER, SPACE_CENTER_GRUNT_LEVEL),
GAETANO_BATTLE(SPACE_CENTER, SPACE_CENTER_GRUNT_LEVEL),
TERRANCE_BATTLE(SPACE_CENTER, SPACE_CENTER_GRUNT_LEVEL),
GINNY_BATTLE(SPACE_CENTER, SPACE_CENTER_GRUNT_LEVEL),
LANDON_BATTLE(SPACE_CENTER, SPACE_CENTER_GRUNT_LEVEL),
COURTNEY_BATTLE(SPACE_CENTER, MAXIE_SPACE_CENTER_ACE_LEVEL - 1, 12),
TABITHA_BATTLE(SPACE_CENTER, MAXIE_SPACE_CENTER_ACE_LEVEL - 1, 12),

[TRAINER_MAXIE_SPACE_CENTER] =
{
    MAXIE_INFO,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        MAXIE_TRAPINCH(MAXIE_SPACE_CENTER_ACE_LEVEL - 1),
        MAXIE_RHYHORN(MAXIE_SPACE_CENTER_ACE_LEVEL - 1),
        {
        HUMPHREY(MAXIE_SPACE_CENTER_ACE_LEVEL),
        .heldItem = ITEM_CAMERUPTITE,
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
        .lvl = 49,
        .species = SPECIES_CORVIKNIGHT,
        },
        {
        .lvl = 49,
        .species = SPECIES_BOMBIRDIER,
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
        .lvl = 49,
        .species = SPECIES_LUXRAY,
        IVS(12),
        },
        {
        .lvl = 49,
        .species = SPECIES_GUMSHOOS,
        IVS(12),
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
        .lvl = 48,
        .species = SPECIES_WAILORD,
        },
        {
        .lvl = 48,
        .species = SPECIES_BARRASKEWDA,
        },
        {
        .lvl = 48,
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
        .lvl = 48,
        .species = SPECIES_GYARADOS,
        },
        {
        .lvl = 48,
        .species = SPECIES_DEWOTT,
        },
        {
        .lvl = 48,
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
        .lvl = 49,
        .species = SPECIES_SHARPEDO,
        },
        {
        .lvl = 49,
        .species = SPECIES_BARRASKEWDA,
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
        TRIATHLETE_MON(49, 0),
        .species = SPECIES_BARRASKEWDA,
        },
        {
        TRIATHLETE_MON(49, 0),
        .species = SPECIES_WHISCASH,
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

[TRAINER_KOJI_1] =
{
    KOJI_INFO,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        KOJI_MEDICHAM(50),
        }
    },
},

[TRAINER_KOJI_2] =
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

[TRAINER_KOJI_3] =
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

[TRAINER_KOJI_4] =
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

[TRAINER_KOJI_5] =
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

[TRAINER_DONNY] =
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
        .species = SPECIES_POLIWRATH,
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
        .lvl = 50,
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
        TRIATHLETE_MON(50, 0),
        .species = SPECIES_POLITOED,
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
        .lvl = 48,
        .species = SPECIES_BARRASKEWDA,
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

[TRAINER_NIKKI] =
{
    .trainerName = _("Nikki"),
    SWIMMER_F_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 49,
        .species = SPECIES_FLOATZEL,
        },
        {
        .lvl = 49,
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
        .lvl = 50,
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
        .lvl = 49,
        .species = SPECIES_SWANNA,
        },
        {
        .lvl = 49,
        .species = SPECIES_SEALEO,
        }
    },
},

#define PABLO_INFO              \
    .trainerName = _("Pablo"),  \
    TRIATHLETE_M_SWIMMING_INFO, \
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE

#define PABLO_POLIWHIRL(Level, IV)                                \
    TRIATHLETE_MON(Level, IV),                                    \
    .species = Level < 50 ? SPECIES_POLIWHIRL : SPECIES_POLITOED, \
    .ability = ABILITY_WATER_ABSORB

#define PABLO_DUCKLETT(Level, IV)                              \
    TRIATHLETE_MON(Level, IV),                                 \
    .species = Level < 50 ? SPECIES_DUCKLETT : SPECIES_SWANNA, \
    .ability = ABILITY_BIG_PECKS,                              \
    .gender = TRAINER_MON_MALE

#define PABLO_PELIPPER(Level, IV) \
    TRIATHLETE_MON(Level, IV),    \
    .species = SPECIES_PELIPPER,  \
    .ability = ABILITY_KEEN_EYE,  \
    .gender = TRAINER_MON_MALE

[TRAINER_PABLO_1] =
{
    PABLO_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        PABLO_DUCKLETT(49, 0),
        },
        {
        PABLO_POLIWHIRL(49, 0),
        }
    },
},

[TRAINER_PABLO_2] =
{
    PABLO_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        PABLO_DUCKLETT(50, 2),
        },
        {
        PABLO_POLIWHIRL(50, 2),
        }
    },
},

[TRAINER_PABLO_3] =
{
    PABLO_INFO,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        PABLO_PELIPPER(51, 3),
        },
        {
        PABLO_DUCKLETT(51, 3),
        },
        {
        PABLO_POLIWHIRL(51, 3),
        }
    },
},

[TRAINER_PABLO_4] =
{
    PABLO_INFO,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        PABLO_PELIPPER(52, 4),
        },
        {
        PABLO_DUCKLETT(52, 4),
        },
        {
        PABLO_POLIWHIRL(52, 4),
        }
    },
},

[TRAINER_PABLO_5] =
{
    PABLO_INFO,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        PABLO_PELIPPER(REMATCH_5_LEVEL_3, 5),
        },
        {
        PABLO_DUCKLETT(REMATCH_5_LEVEL_3, 5),
        },
        {
        PABLO_POLIWHIRL(REMATCH_5_LEVEL_3, 5),
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
        .lvl = 50,
        .species = SPECIES_CLAMPERL,
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
        .lvl = 49,
        .species = SPECIES_GARBODOR,
        IVS(12),
        },
        {
        .lvl = 49,
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
        .lvl = 49,
        .species = SPECIES_VICTREEBEL,
        IVS(12),
        },
        {
        .lvl = 49,
        .species = SPECIES_FLOATZEL,
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
        .lvl = 48,
        .species = SPECIES_SAMUROTT,
        },
        {
        .lvl = 48,
        .species = SPECIES_BARRASKEWDA,
        },
        {
        .lvl = 48,
        .species = SPECIES_WAILORD,
        }
    },
},

#define ISAIAH_BATTLE(Match, Level)                               \
[TRAINER_ISAIAH_##Match]                                          \
{                                                                 \
    .trainerName = _("Isaiah"),                                   \
    TRIATHLETE_M_SWIMMING_INFO,                                   \
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,                            \
    .partySize = 1,                                               \
    .party = (const struct TrainerMon[]) {                        \
        {                                                         \
        TRIATHLETE_MON(Level, Match),                             \
        .species = Level < 51 ? SPECIES_SEALEO : SPECIES_WALREIN, \
        .ability = ABILITY_THICK_FAT,                             \
        .gender = TRAINER_MON_MALE,                               \
        }                                                         \
    }                                                             \
}

ISAIAH_BATTLE(1, 50),
ISAIAH_BATTLE(2, 51),
ISAIAH_BATTLE(3, 52),
ISAIAH_BATTLE(4, 53),
ISAIAH_BATTLE(5, REMATCH_5_LEVEL_1),

#define KATELYN_BATTLE(Match, Level)                                 \
[TRAINER_KATELYN_##Match]                                            \
{                                                                    \
    .trainerName = _("Katelyn"),                                     \
    TRIATHLETE_F_SWIMMING_INFO,                                      \
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,                               \
    .partySize = 1,                                                  \
    .party = (const struct TrainerMon[]) {                           \
        {                                                            \
        TRIATHLETE_MON(Level, Match),                                \
        .species = Level < 51 ? SPECIES_BARBOACH : SPECIES_WHISCASH, \
        .ability = ABILITY_OBLIVIOUS,                                \
        }                                                            \
    }                                                                \
}

KATELYN_BATTLE(1, 50),
KATELYN_BATTLE(2, 51),
KATELYN_BATTLE(3, 52),
KATELYN_BATTLE(4, 53),
KATELYN_BATTLE(5, REMATCH_5_LEVEL_1),

[TRAINER_CARLEE] =
{
    .trainerName = _("Carlee"),
    SWIMMER_F_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 50,
        .species = SPECIES_SWANNA,
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
        .lvl = 50,
        .species = SPECIES_BARRASKEWDA,
        }
    },
},

//Seafloor Cavern
NERISSA_BATTLE(SEAFLOOR_CAVERN, SEAFLOOR_CAVERN_LEVEL),
BERYL_BATTLE(SEAFLOOR_CAVERN, SEAFLOOR_CAVERN_LEVEL),
MALIK_BATTLE(SEAFLOOR_CAVERN, SEAFLOOR_CAVERN_LEVEL),
MARINA_BATTLE(SEAFLOOR_CAVERN, SEAFLOOR_CAVERN_LEVEL),
MATT_BATTLE(SEAFLOOR_CAVERN, 54, 12),
SHELLY_BATTLE(SEAFLOOR_CAVERN, 54, 12),

[TRAINER_ARCHIE_SEAFLOOR_CAVERN] =
{
    ARCHIE_INFO,
    .items = {ITEM_HYPER_POTION, ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE},
    .partySize = 4,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 53,
        .species = SPECIES_DONDOZO,
        .ability = ABILITY_UNAWARE,
        IVS(18),
        .gender = TRAINER_MON_MALE,
        },
        ARCHIE_WAILMER(53),
        ARCHIE_ARROKUDA(54),
        {
        FINNEAS(55),
        .moves = {MOVE_LIQUIDATION, MOVE_CRUNCH, MOVE_ICE_FANG, MOVE_POISON_FANG},
        .heldItem = ITEM_SHARPEDONITE,
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
        .lvl = 52,
        .species = SPECIES_SEALEO,
        },
        {
        .lvl = 52,
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
        TRIATHLETE_MON(52, 0),
        .species = SPECIES_POLIWRATH,
        },
        {
        TRIATHLETE_MON(52, 0),
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
        TRIATHLETE_MON(52, 0),
        .species = SPECIES_PELIPPER,
        },
        {
        TRIATHLETE_MON(52, 0),
        .species = SPECIES_POLITOED,
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
        .lvl = 53,
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
        .lvl = 53,
        .species = SPECIES_FLOATZEL,
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
        .lvl = 53,
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
        .lvl = 52,
        .species = SPECIES_SHARPEDO,
        },
        {
        .lvl = 52,
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
        .lvl = 52,
        .species = SPECIES_BARRASKEWDA,
        },
        {
        .lvl = 52,
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
        .lvl = 53,
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
        TRIATHLETE_MON(53, 0),
        .species = SPECIES_GYARADOS,
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
        .lvl = 53,
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
        .lvl = 53,
        .species = SPECIES_SWANNA,
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
        .lvl = 52,
        .species = SPECIES_PELIPPER,
        },
        {
        .lvl = 52,
        .species = SPECIES_BARRASKEWDA,
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
        .lvl = 53,
        .species = SPECIES_SAMUROTT,
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
        .lvl = 53,
        .species = SPECIES_FLOATZEL,
        },
        {
        .lvl = 51,
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
        .lvl = 54,
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
        .lvl = 54,
        .species = SPECIES_FLOATZEL,
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

[TRAINER_KIYO] =
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

[TRAINER_PAXTON] =
{
    .trainerName = _("Paxton"),
    EXPERT_M_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 53,
        .species = SPECIES_CORVIKNIGHT,
        },
        {
        .lvl = 53,
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
        .lvl = 53,
        .species = SPECIES_PELIPPER,
        },
        {
        .lvl = 53,
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
        .lvl = 53,
        .species = SPECIES_ROSELIA,
        },
        {
        .lvl = 53,
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
        .lvl = 53,
        .species = SPECIES_KECLEON,
        },
        {
        .lvl = 53,
        .species = SPECIES_UMBREON,
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
        .lvl = 53,
        .species = SPECIES_SWANNA,
        },
        {
        .lvl = 53,
        .species = SPECIES_PELIPPER,
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
        .lvl = 54,
        .species = SPECIES_ARCHEOPS,
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
        .lvl = 53,
        .species = SPECIES_CRABOMINABLE,
        },
        {
        .lvl = 53,
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

[TRAINER_WARREN] =
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
        .species = SPECIES_HAXORUS,
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
        .lvl = 54,
        .species = SPECIES_GYARADOS,
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
        .lvl = 54,
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
        .lvl = 53,
        .species = SPECIES_CLAMPERL,
        },
        {
        .lvl = 53,
        .species = SPECIES_SWANNA,
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
        .lvl = 54,
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

[TRAINER_REYNA] =
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

[TRAINER_HUDSON] =
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

[TRAINER_AARON] =
{
    .trainerName = _("Aaron"),
    DRAGON_TAMER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 54,
        .species = SPECIES_GABITE,
        PERFECT_IVS,
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
        .lvl = 54,
        .species = SPECIES_LUXRAY,
        PERFECT_IVS,
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
        .lvl = 53,
        .species = SPECIES_XATU,
        IVS(18),
        },
        {
        .lvl = 53,
        .species = SPECIES_CORVIKNIGHT,
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

//Sootopolis Gym
[TRAINER_CONNIE] =
{
    .trainerName = _("Connie"),
    BEAUTY_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 55,
        .species = SPECIES_FROSLASS,
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
        .lvl = 55,
        .species = SPECIES_FROSMOTH,
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
        RICH_MON(54),
        .species = SPECIES_FROSLASS,
        IVS(12),
        },
        {
        RICH_MON(54),
        .species = SPECIES_GLALIE,
        IVS(12),
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
        POKE_FAN_MON(54),
        .species = SPECIES_CUBCHOO,
        IVS(12),
        },
        {
        POKE_FAN_MON(54),
        .species = SPECIES_SNOM,
        IVS(12),
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
        .lvl = 54,
        .species = SPECIES_WEAVILE,
        IVS(12),
        },
        {
        .lvl = 54,
        .species = SPECIES_BEARTIC,
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
        .lvl = 54,
        .species = SPECIES_SEALEO,
        IVS(12),
        },
        {
        .lvl = 54,
        .species = SPECIES_VANILLUXE,
        IVS(12),
        }
    },
},

[TRAINER_BETHANY] =
{
    .trainerName = _("Bethany"),
    POKE_FAN_F_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_ACE_POKEMON,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        POKE_FAN_MON(53),
        .species = SPECIES_SWINUB,
        IVS(12),
        },
        {
        POKE_FAN_MON(53),
        .species = SPECIES_PILOSWINE,
        IVS(12),
        },
        {
        POKE_FAN_MON(53),
        .species = SPECIES_MAMOSWINE,
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
        .lvl = 53,
        .species = SPECIES_VANILLISH,
        IVS(12),
        },
        {
        .lvl = 53,
        .species = SPECIES_CRABOMINABLE,
        IVS(12),
        },
        {
        .lvl = 53,
        .species = SPECIES_WEAVILE,
        IVS(12),
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
        RICH_MON(55),
        .species = SPECIES_ROTOM_FROST,
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
        .lvl = 55,
        .species = SPECIES_CRABOMINABLE,
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
        .lvl = 55,
        .species = SPECIES_ALAKAZAM,
        },
        {
        .lvl = 55,
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
        .lvl = 55,
        .species = SPECIES_BANETTE,
        },
        {
        .lvl = 55,
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
        .lvl = 56,
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
        .lvl = 56,
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
        .lvl = 55,
        .species = SPECIES_GARDEVOIR,
        },
        {
        .lvl = 55,
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
        .lvl = 55,
        .species = SPECIES_LUNATONE,
        },
        {
        .lvl = 55,
        .species = SPECIES_ALAKAZAM,
        }
    },
},

//Meteor Falls (Waterfall)
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

[TRAINER_JOHN_AND_JAY_1] =
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

[TRAINER_JOHN_AND_JAY_2] =
{
    JOHN_AND_JAY_INFO,
    .party = (const struct TrainerMon[]) {
        {
        JAY_MEDICHAM(57),
        },
        {
        JOHN_HARIYAMA(57),
        }
    },
},

[TRAINER_JOHN_AND_JAY_3] =
{
    JOHN_AND_JAY_INFO,
    .party = (const struct TrainerMon[]) {
        {
        JAY_MEDICHAM(58),
        },
        {
        JOHN_HARIYAMA(58),
        }
    },
},

[TRAINER_JOHN_AND_JAY_4] =
{
    JOHN_AND_JAY_INFO,
    .party = (const struct TrainerMon[]) {
        {
        JAY_MEDICHAM(59),
        },
        {
        JOHN_HARIYAMA(59),
        }
    },
},

[TRAINER_JOHN_AND_JAY_5] =
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
    IVS(18),                                                                                                     \
    .gender = TRAINER_MON_MALE

#define NICOLAS_FLYGON(Level)  \
    .lvl = Level,              \
    .species = SPECIES_FLYGON, \
    IVS(18),                   \
    .gender = TRAINER_MON_MALE

[TRAINER_NICOLAS_1] =
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

[TRAINER_NICOLAS_2] =
{
    NICOLAS_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        NICOLAS_BAGON(56),
        },
        {
        NICOLAS_ALTARIA(56),
        }
    },
},

[TRAINER_NICOLAS_3] =
{
    NICOLAS_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        NICOLAS_BAGON(57),
        },
        {
        NICOLAS_ALTARIA(57),
        }
    },
},

[TRAINER_NICOLAS_4] =
{
    NICOLAS_INFO,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        NICOLAS_FLYGON(58),
        },
        {
        NICOLAS_BAGON(58),
        },
        {
        NICOLAS_ALTARIA(58),
        }
    },
},

[TRAINER_NICOLAS_5] =
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

[TRAINER_HOPE] =
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

[TRAINER_SHANNON] =
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

[TRAINER_SAMUEL] =
{
    .trainerName = _("Samuel"),
    ACE_TRAINER_M_INFO,
    .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 55,
        .species = SPECIES_CORVIKNIGHT,
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

[TRAINER_JULIE] =
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

[TRAINER_OWEN] =
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

[TRAINER_DIANNE] =
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

[TRAINER_FELIX] =
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

[TRAINER_CAROLINE] =
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

[TRAINER_EDGAR] =
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

[TRAINER_MICHELLE] =
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

[TRAINER_MITCHELL] =
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

[TRAINER_HALLE] =
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

[TRAINER_VITO] =
{
    .trainerName = _("Vito"),
    .trainerClass = TRAINER_CLASS_WINSTRATE,
    .trainerPic = TRAINER_PIC_ACE_TRAINER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
    .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    MINI_BOSS_AI_FLAGS,
    .partySize = 5,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 55,
        .species = SPECIES_SWALOT,
        EV_SPREAD_ATK_SPE_HP,
        IVS(12),
        },
        {
        .lvl = 55,
        .species = SPECIES_DODRIO,
        EV_SPREAD_ATK_SPE_HP,
        IVS(12),
        },
        {
        .lvl = 55,
        .species = SPECIES_ALAKAZAM,
        EV_SPREAD_SPA_SPE_HP,
        IVS(12),
        },
        {
        .lvl = 55,
        .species = SPECIES_ELECTRODE,
        EV_SPREAD_SPA_SPE_HP,
        IVS(12),
        },
        {
        .lvl = 55,
        .species = SPECIES_SHIFTRY,
        EV_SPREAD_ATK_SPE_HP,
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

[TRAINER_QUINCY] =
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
        .lvl = 69,
        .species = SPECIES_AGGRON,
        IVS(12),
        },
        {
        .lvl = 69,
        .species = SPECIES_LUXRAY,
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
        .lvl = 68,
        .species = SPECIES_SABLEYE,
        IVS(12),
        },
        {
        .lvl = 68,
        .species = SPECIES_MEDICHAM,
        IVS(12),
        },
        {
        .lvl = 68,
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
        .lvl = 69,
        .species = SPECIES_MAWILE,
        IVS(12),
        },
        {
        .lvl = 69,
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
        .lvl = 69,
        .species = SPECIES_LUVDISC,
        },
        {
        .lvl = 69,
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
        RICH_BOY_MON(70),
        .species = SPECIES_FLOATZEL,
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
        .lvl = 69,
        .species = SPECIES_PERSIAN,
        },
        {
        .lvl = 69,
        .species = SPECIES_LUXRAY,
        }
    },
},

[TRAINER_COLTON] =
{
    .trainerName = _("Colton"),
    POKE_FAN_M_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_ACE_POKEMON,
    .partySize = 6,
    .party = (const struct TrainerMon[]) {
        {
        POKE_FAN_MON(65),
        .species = SPECIES_SKITTY,
        .moves = {MOVE_ASSIST, MOVE_CHARM, MOVE_FEINT_ATTACK, MOVE_HEAL_BELL}
        },
        {
        POKE_FAN_MON(65),
        .species = SPECIES_SKITTY,
        .moves = {MOVE_ASSIST, MOVE_CHARM, MOVE_FEINT_ATTACK, MOVE_HEAL_BELL}
        },
        {
        POKE_FAN_MON(65),
        .species = SPECIES_SKITTY,
        .moves = {MOVE_ASSIST, MOVE_CHARM, MOVE_FEINT_ATTACK, MOVE_HEAL_BELL}
        },
        {
        POKE_FAN_MON(65),
        .species = SPECIES_SKITTY,
        .moves = {MOVE_ASSIST, MOVE_CHARM, MOVE_FEINT_ATTACK, MOVE_HEAL_BELL}
        },
        {
        POKE_FAN_MON(65),
        .species = SPECIES_SKITTY,
        .moves = {MOVE_ASSIST, MOVE_CHARM, MOVE_FEINT_ATTACK, MOVE_HEAL_BELL}
        },
        {
        POKE_FAN_MON(65),
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
        RICH_MON(70),
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
        .lvl = 70,
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
        .lvl = 69,
        .species = SPECIES_BARRASKEWDA,
        },
        {
        .lvl = 69,
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
        .lvl = 68,
        .species = SPECIES_QUAGSIRE,
        },
        {
        .lvl = 68,
        .species = SPECIES_PELIPPER,
        },
        {
        .lvl = 68,
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

[TRAINER_KYLE_PLACEHOLDER] =
{
    .trainerName = _("Kyle"),
    .trainerClass = TRAINER_CLASS_RS_PROTAG,
    .trainerPic = TRAINER_PIC_RS_KYLE,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 5,
        .species = SPECIES_GROUDON,
        }
    },
},

[TRAINER_KELLI_PLACEHOLDER] =
{
    .trainerName = _("May"),
    .trainerClass = TRAINER_CLASS_RS_PROTAG,
    .trainerPic = TRAINER_PIC_RS_KELLI,
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
        .species = SPECIES_ARROKUDA,
        },
        {
        .lvl = 33,
        .species = SPECIES_WINGULL,
        },
        {
        .lvl = 33,
        .species = SPECIES_BARRASKEWDA,
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
    .trainerPic = TRAINER_PIC_RS_KYLE,         \
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
