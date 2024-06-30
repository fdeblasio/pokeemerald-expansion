#define IVS(IV) .iv = TRAINER_PARTY_IVS(IV, IV, IV, IV, IV, IV)
#define PERFECT_IVS IVS(MAX_PER_STAT_IVS)
#define EV_SPREAD_ATK_DEF_HP TRAINER_PARTY_EVS(EV_REMAINDER, MAX_PER_STAT_EVS, MAX_PER_STAT_EVS, 0, 0, 0)
#define EV_SPREAD_ATK_SPE_HP TRAINER_PARTY_EVS(EV_REMAINDER, MAX_PER_STAT_EVS, 0, MAX_PER_STAT_EVS, 0, 0)
#define EV_SPREAD_SPA_SPE_HP TRAINER_PARTY_EVS(EV_REMAINDER, 0, 0, MAX_PER_STAT_EVS, MAX_PER_STAT_EVS, 0)

#define BASE_MON(Level, Species) \
    .lvl = Level,                \
    .species = SPECIES_##Species

[TRAINER_NONE] =
{
    .trainerName = _(""),
    .trainerClass = TRAINER_CLASS_PKMN_TRAINER_1,
    .trainerPic = TRAINER_PIC_HIKER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .partySize = 0,
    .party = NULL,
},

#define RIVAL_STARTER(Location, Species, Nature, Gender) \
    {                                                    \
    .lvl = RIVAL_##Location##_STARTER_LEVEL,             \
    .species = SPECIES_##Species,                        \
    .nature = NATURE_##Nature,                           \
    PERFECT_IVS,                                         \
    .gender = TRAINER_MON_##Gender,                      \
    }

#define RIVAL_ROUTE_103_STARTER_LEVEL 5

#define RIVAL_RUSTBORO_STARTER_LEVEL 15
#define RIVAL_RUSTBORO_WHISMUR(Gender)         \
    {                                          \
    .lvl = 13,                                 \
    .species = SPECIES_WHISMUR,                \
    IVS(3),                                    \
    .gender = TRAINER_MON_##Gender,            \
    }

#define RIVAL_ROUTE_110_STARTER_LEVEL 20
#define RIVAL_ROUTE_110_MON(Species, Ability, Gender) \
    {                                                 \
    .lvl = 18,                                        \
    .species = SPECIES_##Species,                     \
    .ability = ABILITY_##Ability,                     \
    IVS(6),                                           \
    .gender = TRAINER_MON_##Gender,                   \
    }

#define RIVAL_ROUTE_119_STARTER_LEVEL 43
#define RIVAL_ROUTE_119_MON(Species, Ability, Gender) \
    {                                                 \
    .lvl = 42,                                        \
    .species = SPECIES_##Species,                     \
    .ability = ABILITY_##Ability,                     \
    IVS(12),                                          \
    .gender = TRAINER_MON_##Gender,                   \
    }

#define RIVAL_LILYCOVE_STARTER_LEVEL 50
#define RIVAL_LILYCOVE_LOUDRED(Ability, Gender)      \
    {                                                \
    .lvl = RIVAL_LILYCOVE_STARTER_LEVEL - 1,         \
    .species = SPECIES_LOUDRED,                      \
    .ability = ABILITY_##Ability,                    \
    IVS(18),                                         \
    .gender = TRAINER_MON_##Gender,                  \
    }

#define RIVAL_LILYCOVE_MON(Species, Ability, Gender) \
    {                                                \
    .lvl = RIVAL_LILYCOVE_STARTER_LEVEL - 2,         \
    .species = SPECIES_##Species,                    \
    .ability = ABILITY_##Ability,                    \
    IVS(18),                                         \
    .gender = TRAINER_MON_##Gender,                  \
    }

#define BRENDAN_INFO                                       \
    .trainerName = _("Brendan"),                           \
    .trainerClass = TRAINER_CLASS_RIVAL,                   \
    .trainerPic = TRAINER_PIC_BRENDAN,                     \
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE, \
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON

[TRAINER_BRENDAN_ROUTE_103_MUDKIP] =
{
    BRENDAN_INFO,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        RIVAL_STARTER(ROUTE_103, TREECKO, SERIOUS, MALE),
    },
},

[TRAINER_BRENDAN_RUSTBORO_MUDKIP] =
{
    BRENDAN_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        RIVAL_RUSTBORO_WHISMUR(MALE),
        RIVAL_STARTER(RUSTBORO, TREECKO, SERIOUS, MALE),
    },
},

[TRAINER_BRENDAN_ROUTE_110_MUDKIP] =
{
    BRENDAN_INFO,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        RIVAL_ROUTE_110_MON(CORPHISH, HYPER_CUTTER, MALE),
        RIVAL_ROUTE_110_MON(WHISMUR, SOUNDPROOF, MALE),
        RIVAL_STARTER(ROUTE_110, GROVYLE, SERIOUS, MALE),
    },
},

[TRAINER_BRENDAN_ROUTE_119_MUDKIP] =
{
    BRENDAN_INFO,
    .partySize = 4,
    .party = (const struct TrainerMon[]) {
        RIVAL_ROUTE_119_MON(SLUGMA, FLAME_BODY, MALE),
        RIVAL_ROUTE_119_MON(CRAWDAUNT, HYPER_CUTTER, MALE),
        RIVAL_ROUTE_119_MON(LOUDRED, PUNK_ROCK, MALE),
        RIVAL_STARTER(ROUTE_119, GROVYLE, SERIOUS, MALE),
    },
},

[TRAINER_BRENDAN_LILYCOVE_MUDKIP] =
{
    BRENDAN_INFO,
    .partySize = 5,
    .party = (const struct TrainerMon[]) {
        RIVAL_LILYCOVE_MON(VIBRAVA, LEVITATE, MALE),
        RIVAL_LILYCOVE_MON(MAGCARGO, FLAME_BODY, MALE),
        RIVAL_LILYCOVE_MON(CRAWDAUNT, HYPER_CUTTER, MALE),
        RIVAL_LILYCOVE_LOUDRED(PUNK_ROCK, MALE),
        RIVAL_STARTER(LILYCOVE, SCEPTILE, SERIOUS, MALE),
    },
},

[TRAINER_BRENDAN_ROUTE_103_TREECKO] =
{
    BRENDAN_INFO,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        RIVAL_STARTER(ROUTE_103, TORCHIC, SERIOUS, MALE),
    },
},

[TRAINER_BRENDAN_RUSTBORO_TREECKO] =
{
    BRENDAN_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        RIVAL_RUSTBORO_WHISMUR(MALE),
        RIVAL_STARTER(RUSTBORO, TORCHIC, SERIOUS, MALE),
    },
},

[TRAINER_BRENDAN_ROUTE_110_TREECKO] =
{
    BRENDAN_INFO,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        RIVAL_ROUTE_110_MON(SHROOMISH, EFFECT_SPORE, MALE),
        RIVAL_ROUTE_110_MON(WHISMUR, SOUNDPROOF, MALE),
        RIVAL_STARTER(ROUTE_110, COMBUSKEN, SERIOUS, MALE),
    },
},

[TRAINER_BRENDAN_ROUTE_119_TREECKO] =
{
    BRENDAN_INFO,
    .partySize = 4,
    .party = (const struct TrainerMon[]) {
        RIVAL_ROUTE_119_MON(CORPHISH, HYPER_CUTTER, MALE),
        RIVAL_ROUTE_119_MON(BRELOOM, EFFECT_SPORE, MALE),
        RIVAL_ROUTE_119_MON(LOUDRED, PUNK_ROCK, MALE),
        RIVAL_STARTER(ROUTE_119, COMBUSKEN, SERIOUS, MALE),
    },
},

[TRAINER_BRENDAN_LILYCOVE_TREECKO] =
{
    BRENDAN_INFO,
    .partySize = 5,
    .party = (const struct TrainerMon[]) {
        RIVAL_LILYCOVE_MON(VIBRAVA, LEVITATE, MALE),
        RIVAL_LILYCOVE_MON(CRAWDAUNT, HYPER_CUTTER, MALE),
        RIVAL_LILYCOVE_MON(BRELOOM, EFFECT_SPORE, MALE),
        RIVAL_LILYCOVE_LOUDRED(PUNK_ROCK, MALE),
        RIVAL_STARTER(LILYCOVE, BLAZIKEN, SERIOUS, MALE),
    },
},

[TRAINER_BRENDAN_ROUTE_103_TORCHIC] =
{
    BRENDAN_INFO,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        RIVAL_STARTER(ROUTE_103, MUDKIP, SERIOUS, MALE),
    },
},

[TRAINER_BRENDAN_RUSTBORO_TORCHIC] =
{
    BRENDAN_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        RIVAL_RUSTBORO_WHISMUR(MALE),
        RIVAL_STARTER(RUSTBORO, MUDKIP, SERIOUS, MALE),
    },
},

[TRAINER_BRENDAN_ROUTE_110_TORCHIC] =
{
    BRENDAN_INFO,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        RIVAL_ROUTE_110_MON(SLUGMA, FLAME_BODY, MALE),
        RIVAL_ROUTE_110_MON(WHISMUR, SOUNDPROOF, MALE),
        RIVAL_STARTER(ROUTE_110, MARSHTOMP, SERIOUS, MALE),
    },
},

[TRAINER_BRENDAN_ROUTE_119_TORCHIC] =
{
    BRENDAN_INFO,
    .partySize = 4,
    .party = (const struct TrainerMon[]) {
        RIVAL_ROUTE_119_MON(SHROOMISH, EFFECT_SPORE, MALE),
        RIVAL_ROUTE_119_MON(MAGCARGO, FLAME_BODY, MALE),
        RIVAL_ROUTE_119_MON(LOUDRED, PUNK_ROCK, MALE),
        RIVAL_STARTER(ROUTE_119, MARSHTOMP, SERIOUS, MALE),
    },
},

[TRAINER_BRENDAN_LILYCOVE_TORCHIC] =
{
    BRENDAN_INFO,
    .partySize = 5,
    .party = (const struct TrainerMon[]) {
        RIVAL_LILYCOVE_MON(VIBRAVA, LEVITATE, MALE),
        RIVAL_LILYCOVE_MON(BRELOOM, EFFECT_SPORE, MALE),
        RIVAL_LILYCOVE_MON(MAGCARGO, FLAME_BODY, MALE),
        RIVAL_LILYCOVE_LOUDRED(PUNK_ROCK, MALE),
        RIVAL_STARTER(LILYCOVE, SWAMPERT, SERIOUS, MALE),
    },
},

#define MAY_INFO                                                                \
    .trainerName = _("May"),                                                    \
    .trainerClass = TRAINER_CLASS_RIVAL,                                        \
    .trainerPic = TRAINER_PIC_MAY,                                              \
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE, \
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON

[TRAINER_MAY_ROUTE_103_MUDKIP] =
{
    MAY_INFO,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        RIVAL_STARTER(ROUTE_103, TREECKO, QUIRKY, FEMALE),
    },
},

[TRAINER_MAY_RUSTBORO_MUDKIP] =
{
    MAY_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        RIVAL_RUSTBORO_WHISMUR(FEMALE),
        RIVAL_STARTER(RUSTBORO, TREECKO, QUIRKY, FEMALE),
    },
},

[TRAINER_MAY_ROUTE_110_MUDKIP] =
{
    MAY_INFO,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        RIVAL_ROUTE_110_MON(WINGULL, KEEN_EYE, FEMALE),
        RIVAL_ROUTE_110_MON(WHISMUR, SOUNDPROOF, FEMALE),
        RIVAL_STARTER(ROUTE_110, GROVYLE, QUIRKY, FEMALE),
    },
},

[TRAINER_MAY_ROUTE_119_MUDKIP] =
{
    MAY_INFO,
    .partySize = 4,
    .party = (const struct TrainerMon[]) {
        RIVAL_ROUTE_119_MON(VULPIX, FLASH_FIRE, FEMALE),
        RIVAL_ROUTE_119_MON(PELIPPER, KEEN_EYE, FEMALE),
        RIVAL_ROUTE_119_MON(LOUDRED, SOUNDPROOF, FEMALE),
        RIVAL_STARTER(ROUTE_119, GROVYLE, QUIRKY, FEMALE),
    },
},

[TRAINER_MAY_LILYCOVE_MUDKIP] =
{
    MAY_INFO,
    .partySize = 5,
    .party = (const struct TrainerMon[]) {
        RIVAL_LILYCOVE_MON(VIBRAVA, LEVITATE, FEMALE),
        RIVAL_LILYCOVE_MON(NINETALES, FLASH_FIRE, FEMALE),
        RIVAL_LILYCOVE_MON(PELIPPER, KEEN_EYE, FEMALE),
        RIVAL_LILYCOVE_LOUDRED(SOUNDPROOF, FEMALE),
        RIVAL_STARTER(LILYCOVE, SCEPTILE, QUIRKY, FEMALE),
    },
},

[TRAINER_MAY_ROUTE_103_TREECKO] =
{
    MAY_INFO,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        RIVAL_STARTER(ROUTE_103, TORCHIC, QUIRKY, FEMALE),
    },
},

[TRAINER_MAY_RUSTBORO_TREECKO] =
{
    MAY_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        RIVAL_RUSTBORO_WHISMUR(FEMALE),
        RIVAL_STARTER(RUSTBORO, TORCHIC, QUIRKY, FEMALE),
    },
},

[TRAINER_MAY_ROUTE_110_TREECKO] =
{
    MAY_INFO,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        RIVAL_ROUTE_110_MON(CACNEA, SAND_VEIL, FEMALE),
        RIVAL_ROUTE_110_MON(WHISMUR, SOUNDPROOF, FEMALE),
        RIVAL_STARTER(ROUTE_110, COMBUSKEN, QUIRKY, FEMALE),
    },
},

[TRAINER_MAY_ROUTE_119_TREECKO] =
{
    MAY_INFO,
    .partySize = 4,
    .party = (const struct TrainerMon[]) {
        RIVAL_ROUTE_119_MON(WINGULL, KEEN_EYE, FEMALE),
        RIVAL_ROUTE_119_MON(CACTURNE, SAND_VEIL, FEMALE),
        RIVAL_ROUTE_119_MON(LOUDRED, SOUNDPROOF, FEMALE),
        RIVAL_STARTER(ROUTE_119, COMBUSKEN, QUIRKY, FEMALE),
    },
},

[TRAINER_MAY_LILYCOVE_TREECKO] =
{
    MAY_INFO,
    .partySize = 5,
    .party = (const struct TrainerMon[]) {
        RIVAL_LILYCOVE_MON(VIBRAVA, LEVITATE, FEMALE),
        RIVAL_LILYCOVE_MON(PELIPPER, KEEN_EYE, FEMALE),
        RIVAL_LILYCOVE_MON(CACTURNE, SAND_VEIL, FEMALE),
        RIVAL_LILYCOVE_LOUDRED(SOUNDPROOF, FEMALE),
        RIVAL_STARTER(LILYCOVE, BLAZIKEN, QUIRKY, FEMALE),
    },
},

[TRAINER_MAY_ROUTE_103_TORCHIC] =
{
    MAY_INFO,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        RIVAL_STARTER(ROUTE_103, MUDKIP, QUIRKY, FEMALE),
    },
},

[TRAINER_MAY_RUSTBORO_TORCHIC] =
{
    MAY_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        RIVAL_RUSTBORO_WHISMUR(FEMALE),
        RIVAL_STARTER(RUSTBORO, MUDKIP, QUIRKY, FEMALE),
    },
},

[TRAINER_MAY_ROUTE_110_TORCHIC] =
{
    MAY_INFO,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        RIVAL_ROUTE_110_MON(VULPIX, FLASH_FIRE, FEMALE),
        RIVAL_ROUTE_110_MON(WHISMUR, SOUNDPROOF, FEMALE),
        RIVAL_STARTER(ROUTE_110, MARSHTOMP, QUIRKY, FEMALE),
    },
},

[TRAINER_MAY_ROUTE_119_TORCHIC] =
{
    MAY_INFO,
    .partySize = 4,
    .party = (const struct TrainerMon[]) {
        RIVAL_ROUTE_119_MON(CACNEA, SAND_VEIL, FEMALE),
        RIVAL_ROUTE_119_MON(NINETALES, FLASH_FIRE, FEMALE),
        RIVAL_ROUTE_119_MON(LOUDRED, SOUNDPROOF, FEMALE),
        RIVAL_STARTER(ROUTE_119, MARSHTOMP, QUIRKY, FEMALE),
    },
},

[TRAINER_MAY_LILYCOVE_TORCHIC] =
{
    MAY_INFO,
    .partySize = 5,
    .party = (const struct TrainerMon[]) {
        RIVAL_LILYCOVE_MON(VIBRAVA, LEVITATE, FEMALE),
        RIVAL_LILYCOVE_MON(CACTURNE, SAND_VEIL, FEMALE),
        RIVAL_LILYCOVE_MON(NINETALES, FLASH_FIRE, FEMALE),
        RIVAL_LILYCOVE_LOUDRED(SOUNDPROOF, FEMALE),
        RIVAL_STARTER(LILYCOVE, SWAMPERT, QUIRKY, FEMALE),
    },
},

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
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON

#define RALPH(Level, Species) \
    BASE_MON(Level, Species),          \
    .ability = 1,                      \
    IVS(24),                           \
    .gender = TRAINER_MON_MALE,        \
    .nickname = COMPOUND_STRING("Ralph")

#define WALLY_BUDEW                  \
    .ability = ABILITY_NATURAL_CURE, \
    .gender = TRAINER_MON_FEMALE

[TRAINER_WALLY_MAUVILLE] =
{
    WALLY_INFO,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        RALPH(19, RALTS),
        }
    },
},

[TRAINER_WALLY_VERDANTURF] =
{
    WALLY_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 21,
        .species = SPECIES_BUDEW,
        IVS(3),
        WALLY_BUDEW,
        },
        {
        RALPH(23, KIRLIA),
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
        .lvl = 47,
        .species = SPECIES_MAGNEZONE,
        .ability = ABILITY_ANALYTIC,
        IVS(18),
        .moves = {MOVE_THUNDERBOLT, MOVE_FLASH_CANNON, MOVE_TRI_ATTACK, MOVE_METAL_SOUND},
        },
        {
        .lvl = 46,
        .species = SPECIES_ALTARIA,
        .ability = ABILITY_NATURAL_CURE,
        IVS(18),
        .moves = {MOVE_DRAGON_PULSE, MOVE_AIR_SLASH, MOVE_MOONBLAST, MOVE_COTTON_GUARD},
        .gender = TRAINER_MON_MALE,
        },
        {
        .lvl = 47,
        .species = SPECIES_ROSERADE,
        IVS(18),
        .moves = {MOVE_GIGA_DRAIN, MOVE_SLUDGE_BOMB, MOVE_LEECH_SEED, MOVE_TOXIC},
        WALLY_BUDEW,
        },
        {
        RALPH(49, GALLADE),
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

#define WALLY_ROSERADE(rematch)                                                \
    {                                                                          \
    REMATCH_MON(ROSERADE, TIER2, rematch),                                     \
    WALLY_BUDEW,                                                               \
    .nature = NATURE_MODEST,                                                   \
    .ev = TRAINER_PARTY_EVS(0, 0, 0, 63, 63, 1),                               \
    .moves = {MOVE_GIGA_DRAIN, MOVE_SLUDGE_BOMB, MOVE_LEECH_SEED, MOVE_TOXIC}, \
    .heldItem = ITEM_MIRACLE_SEED,                                             \
    }

#define WALLY_ALTARIA(rematch)                                                       \
    {                                                                                \
    REMATCH_MON(ALTARIA, TIER2, rematch),                                            \
    .ability = ABILITY_NATURAL_CURE,                                                 \
    .nature = NATURE_MODEST,                                                         \
    .ev = TRAINER_PARTY_EVS(0, 0, 1, 63, 63, 0),                                     \
    .moves = {MOVE_DRAGON_PULSE, MOVE_AIR_SLASH, MOVE_MOONBLAST, MOVE_COTTON_GUARD}, \
    .gender = TRAINER_MON_MALE,                                                      \
    }

#define WALLY_MAGNEZONE(rematch)                                                       \
    {                                                                                  \
    REMATCH_MON(MAGNEZONE, TIER3, rematch),                                            \
    .ability = ABILITY_ANALYTIC,                                                       \
    .nature = NATURE_BOLD,                                                             \
    .ev = TRAINER_PARTY_EVS(0, 0, 63, 0, 63, 1),                                       \
    .moves = {MOVE_THUNDERBOLT, MOVE_FLASH_CANNON, MOVE_TRI_ATTACK, MOVE_METAL_SOUND}, \
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

#define LEADER_INFO(pic)                    \
    .trainerClass = TRAINER_CLASS_LEADER,   \
    .trainerPic = TRAINER_PIC_LEADER_##pic, \
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON

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

#define ROXANNE_PROBOPASS(rematch, move3)                                          \
    {                                                                              \
    REMATCH_MON(PROBOPASS, ACE, rematch),                                          \
    .ability = ABILITY_SAND_FORCE,                                                 \
    .nature = NATURE_IMPISH,                                                       \
    .ev = TRAINER_PARTY_EVS(0, 0, 63, 63, 1, 0),                                   \
    .moves = {MOVE_POWER_GEM, MOVE_FLASH_CANNON, MOVE_##move3, MOVE_IRON_DEFENSE}, \
    .gender = TRAINER_MON_FEMALE,                                                  \
    .heldItem = ITEM_SITRUS_BERRY,                                                 \
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

#define ROXANNE_CRADILY(rematch)                                                \
    {                                                                           \
    REMATCH_MON(CRADILY, TIER2, rematch),                                       \
    .ability = ABILITY_STORM_DRAIN,                                             \
    .nature = NATURE_CALM,                                                      \
    .ev = TRAINER_PARTY_EVS(0, 0, 1, 0, 63, 63),                                \
    .moves = {MOVE_GIGA_DRAIN, MOVE_ANCIENT_POWER, MOVE_INGRAIN, MOVE_AMNESIA}, \
    .gender = TRAINER_MON_FEMALE,                                               \
    .heldItem = ITEM_BIG_ROOT,                                                  \
    }

#define ROXANNE_RELICANTH(rematch, move3, move4)                            \
    {                                                                       \
    REMATCH_MON(RELICANTH, TIER3, rematch),                                 \
    .ability = ABILITY_ROCK_HEAD,                                           \
    .nature = NATURE_IMPISH,                                                \
    .ev = EV_SPREAD_ATK_DEF_HP,                                             \
    .moves = {MOVE_HEAD_SMASH, MOVE_AQUA_TAIL, MOVE_##move3, MOVE_##move4}, \
    .gender = TRAINER_MON_FEMALE,                                           \
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
        ROXANNE_RELICANTH(2, DOUBLE_EDGE, REST),
        ROXANNE_CRADILY(2),
        ROXANNE_ARMALDO(2),
        ROXANNE_PROBOPASS(2, SANDSTORM),
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
        ROXANNE_RELICANTH(3, DOUBLE_EDGE, REST),
        ROXANNE_CRADILY(3),
        ROXANNE_ARMALDO(3),
        ROXANNE_PROBOPASS(3, SANDSTORM),
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
        ROXANNE_RELICANTH(4, DOUBLE_EDGE, REST),
        ROXANNE_CRADILY(4),
        ROXANNE_ARMALDO(4),
        ROXANNE_PROBOPASS(4, SANDSTORM),
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
        ROXANNE_RELICANTH(5, BODY_PRESS, IRON_DEFENSE),
        ROXANNE_CRADILY(5),
        ROXANNE_ARMALDO(5),
        ROXANNE_PROBOPASS(5, BODY_PRESS),
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

#define BRAWLY_HARIYAMA(rematch)                                               \
    {                                                                          \
    REMATCH_MON(HARIYAMA, ACE, rematch),                                       \
    .ability = ABILITY_THICK_FAT,                                              \
    .nature = NATURE_ADAMANT,                                                  \
    .ev = TRAINER_PARTY_EVS(63, 63, 0, 1, 0, 0),                               \
    .moves = {MOVE_BULK_UP, MOVE_DRAIN_PUNCH, MOVE_BELLY_DRUM, MOVE_FAKE_OUT}, \
    .gender = TRAINER_MON_MALE,                                                \
    .heldItem = ITEM_SITRUS_BERRY,                                             \
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
        .lvl = 22,
        .species = SPECIES_MAGNEMITE,
        IVS(24),
        .moves = {MOVE_SHOCK_WAVE, MOVE_SONIC_BOOM, MOVE_MAGNET_BOMB, MOVE_THUNDER_WAVE},
        },
        {
        .lvl = 24,
        .species = SPECIES_MINUN,
        IVS(24),
        .moves = {MOVE_SHOCK_WAVE, MOVE_SWIFT, MOVE_SKILL_SWAP, MOVE_NUZZLE},
        },
        {
        .lvl = 24,
        .species = SPECIES_PLUSLE,
        IVS(26),
        .moves = {MOVE_SHOCK_WAVE, MOVE_SWIFT, MOVE_SKILL_SWAP, MOVE_THUNDER_WAVE},
        },
        {
        .lvl = 26,
        .species = SPECIES_MANECTRIC,
        IVS(30),
        .moves = {MOVE_SHOCK_WAVE, MOVE_QUICK_ATTACK, MOVE_BITE, MOVE_THUNDER_WAVE},
        .heldItem = ITEM_SITRUS_BERRY,
        }
    },
},

[TRAINER_WATTSON_2] =
{
    WATTSON_INFO,
    .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
    .doubleBattle = TRUE,
    .partySize = 4,
    .party = (const struct TrainerMon[]) {
        {
        REMATCH_MON(MAGNETON, TIER3, 2),
        .moves = {MOVE_THUNDERBOLT, MOVE_FLASH_CANNON, MOVE_TRI_ATTACK, MOVE_ELECTRIC_TERRAIN},
        },
        {
        REMATCH_MON(MINUN, TIER2, 2),
        .moves = {MOVE_THUNDERBOLT, MOVE_THUNDER_WAVE, MOVE_FAKE_TEARS, MOVE_NASTY_PLOT},
        .gender = TRAINER_MON_MALE,
        .heldItem = ITEM_MAGNET,
        },
        {
        REMATCH_MON(PLUSLE, TIER2, 2),
        .moves = {MOVE_THUNDERBOLT, MOVE_SKILL_SWAP, MOVE_CHARM, MOVE_NASTY_PLOT},
        .gender = TRAINER_MON_FEMALE,
        .heldItem = ITEM_MAGNET,
        },
        {
        REMATCH_MON(MANECTRIC, ACE, 2),
        .moves = {MOVE_THUNDERBOLT, MOVE_FLAMETHROWER, MOVE_SIGNAL_BEAM, MOVE_ICE_FANG},
        .gender = TRAINER_MON_MALE,
        .heldItem = ITEM_SITRUS_BERRY,
        }
    },
},

[TRAINER_WATTSON_3] =
{
    WATTSON_INFO,
    .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
    .doubleBattle = TRUE,
    .partySize = 5,
    .party = (const struct TrainerMon[]) {
        {
        REMATCH_MON(LANTURN, TIER3, 3),
        .ability = ABILITY_VOLT_ABSORB,
        .moves = {MOVE_THUNDER, MOVE_HYDRO_PUMP, MOVE_ELECTRIC_TERRAIN, MOVE_RAIN_DANCE},
        .gender = TRAINER_MON_MALE,
        },
        {
        REMATCH_MON(MAGNEZONE, TIER3, 3),
        .moves = {MOVE_THUNDERBOLT, MOVE_FLASH_CANNON, MOVE_TRI_ATTACK, MOVE_ELECTRIC_TERRAIN},
        },
        {
        REMATCH_MON(MINUN, TIER2, 3),
        .moves = {MOVE_THUNDERBOLT, MOVE_THUNDER_WAVE, MOVE_FAKE_TEARS, MOVE_NASTY_PLOT},
        .gender = TRAINER_MON_MALE,
        .heldItem = ITEM_MAGNET,
        },
        {
        REMATCH_MON(PLUSLE, TIER2, 3),
        .moves = {MOVE_THUNDERBOLT, MOVE_SKILL_SWAP, MOVE_CHARM, MOVE_NASTY_PLOT},
        .gender = TRAINER_MON_FEMALE,
        .heldItem = ITEM_MAGNET,
        },
        {
        REMATCH_MON(MANECTRIC, ACE, 3),
        .moves = {MOVE_THUNDERBOLT, MOVE_FLAMETHROWER, MOVE_SIGNAL_BEAM, MOVE_ICE_FANG},
        .gender = TRAINER_MON_MALE,
        .heldItem = ITEM_SITRUS_BERRY,
        }
    },
},

[TRAINER_WATTSON_4] =
{
    WATTSON_INFO,
    .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
    .doubleBattle = TRUE,
    .partySize = 5,
    .party = (const struct TrainerMon[]) {
        {
        REMATCH_MON(LANTURN, TIER3, 4),
        .ability = ABILITY_VOLT_ABSORB,
        .moves = {MOVE_THUNDER, MOVE_HYDRO_PUMP, MOVE_ELECTRIC_TERRAIN, MOVE_RAIN_DANCE},
        .gender = TRAINER_MON_MALE,
        },
        {
        REMATCH_MON(MAGNEZONE, TIER3, 4),
        .moves = {MOVE_THUNDERBOLT, MOVE_FLASH_CANNON, MOVE_TRI_ATTACK, MOVE_ELECTRIC_TERRAIN},
        },
        {
        REMATCH_MON(MINUN, TIER2, 4),
        .moves = {MOVE_THUNDERBOLT, MOVE_THUNDER_WAVE, MOVE_FAKE_TEARS, MOVE_NASTY_PLOT},
        .gender = TRAINER_MON_MALE,
        .heldItem = ITEM_MAGNET,
        },
        {
        REMATCH_MON(PLUSLE, TIER2, 4),
        .moves = {MOVE_THUNDERBOLT, MOVE_SKILL_SWAP, MOVE_CHARM, MOVE_NASTY_PLOT},
        .gender = TRAINER_MON_FEMALE,
        .heldItem = ITEM_MAGNET,
        },
        {
        REMATCH_MON(MANECTRIC, ACE, 4),
        .moves = {MOVE_THUNDERBOLT, MOVE_FLAMETHROWER, MOVE_SIGNAL_BEAM, MOVE_ICE_FANG},
        .gender = TRAINER_MON_MALE,
        .heldItem = ITEM_SITRUS_BERRY,
        }
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
        .moves = {MOVE_THUNDERBOLT, MOVE_ROLLOUT, MOVE_LIGHT_SCREEN, MOVE_SCREECH},
        },
        {
        REMATCH_MON(LANTURN, TIER3, 5),
        .ability = ABILITY_VOLT_ABSORB,
        .moves = {MOVE_THUNDER, MOVE_HYDRO_PUMP, MOVE_ELECTRIC_TERRAIN, MOVE_RAIN_DANCE},
        .gender = TRAINER_MON_MALE,
        },
        {
        REMATCH_MON(MAGNEZONE, TIER3, 5),
        .moves = {MOVE_THUNDERBOLT, MOVE_FLASH_CANNON, MOVE_TRI_ATTACK, MOVE_ELECTRIC_TERRAIN},
        },
        {
        REMATCH_MON(MINUN, TIER2, 5),
        .moves = {MOVE_THUNDERBOLT, MOVE_THUNDER_WAVE, MOVE_FAKE_TEARS, MOVE_NASTY_PLOT},
        .gender = TRAINER_MON_MALE,
        .heldItem = ITEM_MAGNET,
        },
        {
        REMATCH_MON(PLUSLE, TIER2, 5),
        .moves = {MOVE_THUNDERBOLT, MOVE_SKILL_SWAP, MOVE_CHARM, MOVE_NASTY_PLOT},
        .gender = TRAINER_MON_FEMALE,
        .heldItem = ITEM_MAGNET,
        },
        {
        REMATCH_MON(MANECTRIC, ACE, 5),
        .moves = {MOVE_THUNDERBOLT, MOVE_FLAMETHROWER, MOVE_SIGNAL_BEAM, MOVE_ICE_FANG},
        .gender = TRAINER_MON_MALE,
        .heldItem = ITEM_MANECTITE,
        }
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

[TRAINER_FLANNERY_2] =
{
    FLANNERY_INFO,
    .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
    .doubleBattle = TRUE,
    .partySize = 4,
    .party = (const struct TrainerMon[]) {
        {
        REMATCH_MON(CASTFORM, TIER3, 2),
        .moves = {MOVE_OVERHEAT, MOVE_SOLAR_BEAM, MOVE_WEATHER_BALL, MOVE_SUNNY_DAY},
        .gender = TRAINER_MON_FEMALE,
        },
        {
        REMATCH_MON(BLAZIKEN, TIER2, 2),
        .moves = {MOVE_OVERHEAT, MOVE_AURA_SPHERE, MOVE_FOCUS_ENERGY, MOVE_SUNNY_DAY},
        .gender = TRAINER_MON_FEMALE,
        .heldItem = ITEM_WHITE_HERB,
        },
        {
        REMATCH_MON(CAMERUPT, TIER2, 2),
        .moves = {MOVE_OVERHEAT, MOVE_EARTH_POWER, MOVE_AMNESIA, MOVE_SUNNY_DAY},
        .gender = TRAINER_MON_FEMALE,
        .heldItem = ITEM_WHITE_HERB,
        },
        {
        REMATCH_MON(TORKOAL, ACE, 2),
        .ability = ABILITY_DROUGHT,
        .moves = {MOVE_OVERHEAT, MOVE_IRON_DEFENSE, MOVE_SHELL_SMASH, MOVE_SUNNY_DAY},
        .gender = TRAINER_MON_FEMALE,
        .heldItem = ITEM_WHITE_HERB,
        }
    },
},

[TRAINER_FLANNERY_3] =
{
    FLANNERY_INFO,
    .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
    .doubleBattle = TRUE,
    .partySize = 5,
    .party = (const struct TrainerMon[]) {
        {
        REMATCH_MON(MAGCARGO, TIER3, 3),
        .moves = {MOVE_OVERHEAT, MOVE_YAWN, MOVE_AMNESIA, MOVE_SHELL_SMASH},
        .gender = TRAINER_MON_FEMALE,
        },
        {
        REMATCH_MON(CASTFORM, TIER3, 3),
        .moves = {MOVE_OVERHEAT, MOVE_SOLAR_BEAM, MOVE_WEATHER_BALL, MOVE_SUNNY_DAY},
        .gender = TRAINER_MON_FEMALE,
        },
        {
        REMATCH_MON(BLAZIKEN, TIER2, 3),
        .moves = {MOVE_OVERHEAT, MOVE_AURA_SPHERE, MOVE_FOCUS_ENERGY, MOVE_SUNNY_DAY},
        .gender = TRAINER_MON_FEMALE,
        .heldItem = ITEM_WHITE_HERB,
        },
        {
        REMATCH_MON(CAMERUPT, TIER2, 3),
        .moves = {MOVE_OVERHEAT, MOVE_EARTH_POWER, MOVE_AMNESIA, MOVE_SUNNY_DAY},
        .gender = TRAINER_MON_FEMALE,
        .heldItem = ITEM_WHITE_HERB,
        },
        {
        REMATCH_MON(TORKOAL, ACE, 3),
        .ability = ABILITY_DROUGHT,
        .moves = {MOVE_OVERHEAT, MOVE_IRON_DEFENSE, MOVE_SHELL_SMASH, MOVE_SUNNY_DAY},
        .gender = TRAINER_MON_FEMALE,
        .heldItem = ITEM_WHITE_HERB,
        }
    },
},

[TRAINER_FLANNERY_4] =
{
    FLANNERY_INFO,
    .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
    .doubleBattle = TRUE,
    .partySize = 6,
    .party = (const struct TrainerMon[]) {
        {
        REMATCH_MON(NINETALES, TIER3, 4),
        .ability = ABILITY_DROUGHT,
        .moves = {MOVE_OVERHEAT, MOVE_GRUDGE, MOVE_NASTY_PLOT, MOVE_SUNNY_DAY},
        .gender = TRAINER_MON_FEMALE,
        },
        {
        REMATCH_MON(MAGCARGO, TIER3, 4),
        .moves = {MOVE_OVERHEAT, MOVE_YAWN, MOVE_SHELL_SMASH, MOVE_SUNNY_DAY},
        .gender = TRAINER_MON_FEMALE,
        },
        {
        REMATCH_MON(CASTFORM, TIER3, 4),
        .moves = {MOVE_OVERHEAT, MOVE_SOLAR_BEAM, MOVE_WEATHER_BALL, MOVE_SUNNY_DAY},
        .gender = TRAINER_MON_FEMALE,
        },
        {
        REMATCH_MON(BLAZIKEN, TIER2, 4),
        .moves = {MOVE_OVERHEAT, MOVE_AURA_SPHERE, MOVE_FOCUS_ENERGY, MOVE_SUNNY_DAY},
        .gender = TRAINER_MON_FEMALE,
        .heldItem = ITEM_WHITE_HERB,
        },
        {
        REMATCH_MON(CAMERUPT, TIER2, 4),
        .moves = {MOVE_OVERHEAT, MOVE_EARTH_POWER, MOVE_AMNESIA, MOVE_SUNNY_DAY},
        .gender = TRAINER_MON_FEMALE,
        .heldItem = ITEM_WHITE_HERB,
        },
        {
        REMATCH_MON(TORKOAL, ACE, 4),
        .ability = ABILITY_DROUGHT,
        .moves = {MOVE_OVERHEAT, MOVE_IRON_DEFENSE, MOVE_SHELL_SMASH, MOVE_SUNNY_DAY},
        .gender = TRAINER_MON_FEMALE,
        .heldItem = ITEM_WHITE_HERB,
        }
    },
},

[TRAINER_FLANNERY_5] =
{
    FLANNERY_INFO,
    .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
    .doubleBattle = TRUE,
    .partySize = 6,
    .party = (const struct TrainerMon[]) {
        {
        REMATCH_MON(NINETALES, TIER3, 5),
        .ability = ABILITY_DROUGHT,
        .moves = {MOVE_OVERHEAT, MOVE_GRUDGE, MOVE_NASTY_PLOT, MOVE_SUNNY_DAY},
        .gender = TRAINER_MON_FEMALE,
        },
        {
        REMATCH_MON(MAGCARGO, TIER3, 5),
        .moves = {MOVE_OVERHEAT, MOVE_YAWN, MOVE_AMNESIA, MOVE_SHELL_SMASH},
        .gender = TRAINER_MON_FEMALE,
        },
        {
        REMATCH_MON(CASTFORM, TIER3, 5),
        .moves = {MOVE_OVERHEAT, MOVE_SOLAR_BEAM, MOVE_WEATHER_BALL, MOVE_SUNNY_DAY},
        .gender = TRAINER_MON_FEMALE,
        },
        {
        REMATCH_MON(BLAZIKEN, TIER2, 5),
        .moves = {MOVE_OVERHEAT, MOVE_AURA_SPHERE, MOVE_FOCUS_ENERGY, MOVE_SUNNY_DAY},
        .gender = TRAINER_MON_FEMALE,
        .heldItem = ITEM_WHITE_HERB,
        },
        {
        REMATCH_MON(CAMERUPT, TIER2, 5),
        .moves = {MOVE_OVERHEAT, MOVE_EARTH_POWER, MOVE_AMNESIA, MOVE_SUNNY_DAY},
        .gender = TRAINER_MON_FEMALE,
        .heldItem = ITEM_WHITE_HERB,
        },
        {
        REMATCH_MON(TORKOAL, ACE, 5),
        .ability = ABILITY_DROUGHT,
        .moves = {MOVE_OVERHEAT, MOVE_IRON_DEFENSE, MOVE_SHELL_SMASH, MOVE_SUNNY_DAY},
        .gender = TRAINER_MON_FEMALE,
        .heldItem = ITEM_WHITE_HERB,
        }
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
        .lvl = 32,
        .species = SPECIES_LINOONE,
        .ability = ABILITY_QUICK_FEET,
        IVS(24),
        .moves = {MOVE_FACADE, MOVE_SLASH, MOVE_PLAY_ROUGH, MOVE_HONE_CLAWS},
        .gender = TRAINER_MON_MALE,
        },
        {
        .lvl = 34,
        .species = SPECIES_ZANGOOSE,
        .ability = ABILITY_POISON_HEAL,
        IVS(24),
        .moves = {MOVE_FACADE, MOVE_CRUSH_CLAW, MOVE_NIGHT_SLASH, MOVE_HONE_CLAWS},
        .gender = TRAINER_MON_MALE,
        },
        {
        .lvl = 34,
        .species = SPECIES_SPINDA,
        .ability = ABILITY_OWN_TEMPO,
        .nature = NATURE_QUIRKY,
        IVS(24),
        .moves = {MOVE_FACADE, MOVE_TEETER_DANCE, MOVE_FEINT_ATTACK, MOVE_DIZZY_PUNCH},
        .gender = TRAINER_MON_MALE,
        },
        {
        .lvl = 36,
        .species = SPECIES_SLAKING,
        IVS(30),
        .moves = {MOVE_FACADE, MOVE_THROAT_CHOP, MOVE_SLACK_OFF, MOVE_FOCUS_ENERGY},
        .gender = TRAINER_MON_MALE,
        .heldItem = ITEM_SITRUS_BERRY,
        }
    },
},

[TRAINER_NORMAN_2] =
{
    NORMAN_INFO,
    .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
    .doubleBattle = TRUE,
    .partySize = 4,
    .party = (const struct TrainerMon[]) {
        {
        REMATCH_MON(LINOONE, TIER3, 2),
        .ability = ABILITY_QUICK_FEET,
        .moves = {MOVE_SLASH, MOVE_PLAY_ROUGH, MOVE_PIN_MISSILE, MOVE_BELLY_DRUM},
        .gender = TRAINER_MON_MALE,
        },
        {
        REMATCH_MON(ZANGOOSE, TIER2, 2),
        .ability = ABILITY_POISON_HEAL,
        .moves = {MOVE_FACADE, MOVE_X_SCISSOR, MOVE_NIGHT_SLASH, MOVE_SWORDS_DANCE},
        .gender = TRAINER_MON_MALE,
        .heldItem = ITEM_TOXIC_ORB,
        },
        {
        REMATCH_MON(SPINDA, TIER2, 2),
        .ability = ABILITY_OWN_TEMPO,
        .moves = {MOVE_THRASH, MOVE_TEETER_DANCE, MOVE_HYPNOSIS, MOVE_SKILL_SWAP},
        .gender = TRAINER_MON_MALE,
        .heldItem = ITEM_LIECHI_BERRY,
        },
        {
        REMATCH_MON(SLAKING, ACE, 2),
        .moves = {MOVE_GIGA_IMPACT, MOVE_HAMMER_ARM, MOVE_THROAT_CHOP, MOVE_SUCKER_PUNCH},
        .gender = TRAINER_MON_MALE,
        .heldItem = ITEM_SITRUS_BERRY,
        }
    },
},

[TRAINER_NORMAN_3] =
{
    NORMAN_INFO,
    .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
    .doubleBattle = TRUE,
    .partySize = 5,
    .party = (const struct TrainerMon[]) {
        {
        REMATCH_MON(LINOONE, TIER3, 3),
        .ability = ABILITY_QUICK_FEET,
        .moves = {MOVE_SLASH, MOVE_PLAY_ROUGH, MOVE_PIN_MISSILE, MOVE_BELLY_DRUM},
        .gender = TRAINER_MON_MALE,
        },
        {
        REMATCH_MON(EXPLOUD, TIER3, 3),
        .ability = ABILITY_PUNK_ROCK,
        .moves = {MOVE_HYPER_VOICE, MOVE_CRUNCH, MOVE_SCREECH, MOVE_SUPERSONIC},
        .gender = TRAINER_MON_MALE,
        },
        {
        REMATCH_MON(ZANGOOSE, TIER2, 3),
        .ability = ABILITY_POISON_HEAL,
        .moves = {MOVE_FACADE, MOVE_X_SCISSOR, MOVE_NIGHT_SLASH, MOVE_SWORDS_DANCE},
        .gender = TRAINER_MON_MALE,
        .heldItem = ITEM_TOXIC_ORB,
        },
        {
        REMATCH_MON(SPINDA, TIER2, 3),
        .ability = ABILITY_OWN_TEMPO,
        .moves = {MOVE_THRASH, MOVE_TEETER_DANCE, MOVE_HYPNOSIS, MOVE_SKILL_SWAP},
        .gender = TRAINER_MON_MALE,
        .heldItem = ITEM_LIECHI_BERRY,
        },
        {
        REMATCH_MON(SLAKING, ACE, 3),
        .moves = {MOVE_GIGA_IMPACT, MOVE_HAMMER_ARM, MOVE_THROAT_CHOP, MOVE_SUCKER_PUNCH},
        .gender = TRAINER_MON_MALE,
        .heldItem = ITEM_SITRUS_BERRY,
        }
    },
},

[TRAINER_NORMAN_4] =
{
    NORMAN_INFO,
    .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
    .doubleBattle = TRUE,
    .partySize = 5,
    .party = (const struct TrainerMon[]) {
        {
        REMATCH_MON(LINOONE, TIER3, 4),
        .ability = ABILITY_QUICK_FEET,
        .moves = {MOVE_SLASH, MOVE_PLAY_ROUGH, MOVE_PIN_MISSILE, MOVE_BELLY_DRUM},
        .gender = TRAINER_MON_MALE,
        },
        {
        REMATCH_MON(EXPLOUD, TIER3, 4),
        .ability = ABILITY_PUNK_ROCK,
        .moves = {MOVE_HYPER_VOICE, MOVE_CRUNCH, MOVE_SCREECH, MOVE_SUPERSONIC},
        .gender = TRAINER_MON_MALE,
        },
        {
        REMATCH_MON(ZANGOOSE, TIER2, 4),
        .ability = ABILITY_POISON_HEAL,
        .moves = {MOVE_FACADE, MOVE_X_SCISSOR, MOVE_NIGHT_SLASH, MOVE_SWORDS_DANCE},
        .gender = TRAINER_MON_MALE,
        .heldItem = ITEM_TOXIC_ORB,
        },
        {
        REMATCH_MON(SPINDA, TIER2, 4),
        .ability = ABILITY_OWN_TEMPO,
        .moves = {MOVE_THRASH, MOVE_TEETER_DANCE, MOVE_HYPNOSIS, MOVE_SKILL_SWAP},
        .gender = TRAINER_MON_MALE,
        .heldItem = ITEM_LIECHI_BERRY,
        },
        {
        REMATCH_MON(SLAKING, ACE, 4),
        .moves = {MOVE_GIGA_IMPACT, MOVE_HAMMER_ARM, MOVE_THROAT_CHOP, MOVE_SUCKER_PUNCH},
        .gender = TRAINER_MON_MALE,
        .heldItem = ITEM_SITRUS_BERRY,
        }
    },
},

[TRAINER_NORMAN_5] =
{
    NORMAN_INFO,
    .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
    .doubleBattle = TRUE,
    .partySize = 6,
    .party = (const struct TrainerMon[]) {
        {
        REMATCH_MON(LINOONE, TIER3, 5),
        .ability = ABILITY_QUICK_FEET,
        .moves = {MOVE_SLASH, MOVE_PLAY_ROUGH, MOVE_PIN_MISSILE, MOVE_BELLY_DRUM},
        .gender = TRAINER_MON_MALE,
        },
        {
        REMATCH_MON(KECLEON, TIER3, 5),
        .moves = {MOVE_FACADE, MOVE_SHADOW_CLAW, MOVE_SUCKER_PUNCH, MOVE_DISABLE},
        .gender = TRAINER_MON_MALE,
        },
        {
        REMATCH_MON(EXPLOUD, TIER3, 5),
        .ability = ABILITY_PUNK_ROCK,
        .moves = {MOVE_HYPER_VOICE, MOVE_CRUNCH, MOVE_SCREECH, MOVE_SUPERSONIC},
        .gender = TRAINER_MON_MALE,
        },
        {
        REMATCH_MON(ZANGOOSE, TIER2, 5),
        .ability = ABILITY_POISON_HEAL,
        .moves = {MOVE_FACADE, MOVE_X_SCISSOR, MOVE_NIGHT_SLASH, MOVE_SWORDS_DANCE},
        .gender = TRAINER_MON_MALE,
        .heldItem = ITEM_TOXIC_ORB,
        },
        {
        REMATCH_MON(SPINDA, TIER2, 5),
        .ability = ABILITY_OWN_TEMPO,
        .moves = {MOVE_THRASH, MOVE_TEETER_DANCE, MOVE_HYPNOSIS, MOVE_SKILL_SWAP},
        .gender = TRAINER_MON_MALE,
        .heldItem = ITEM_LIECHI_BERRY,
        },
        {
        REMATCH_MON(SLAKING, ACE, 5),
        .moves = {MOVE_GIGA_IMPACT, MOVE_HAMMER_ARM, MOVE_THROAT_CHOP, MOVE_SUCKER_PUNCH},
        .gender = TRAINER_MON_MALE,
        .heldItem = ITEM_SITRUS_BERRY,
        }
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
        .lvl = 43,
        .species = SPECIES_MASQUERAIN,
        IVS(25),
        .moves = {MOVE_AERIAL_ACE, MOVE_SILVER_WIND, MOVE_SCARY_FACE, MOVE_STUN_SPORE},
        .gender = TRAINER_MON_FEMALE,
        },
        {
        .lvl = 43,
        .species = SPECIES_TROPIUS,
        .ability = ABILITY_CHLOROPHYLL,
        IVS(25),
        .moves = {MOVE_AERIAL_ACE, MOVE_LEAF_TORNADO, MOVE_STOMP, MOVE_SWEET_SCENT},
        .gender = TRAINER_MON_FEMALE,
        },
        {
        .lvl = 44,
        .species = SPECIES_PELIPPER,
        .ability = ABILITY_DRIZZLE,
        IVS(25),
        .moves = {MOVE_AERIAL_ACE, MOVE_WATER_PULSE, MOVE_SUPERSONIC, MOVE_TAILWIND},
        .gender = TRAINER_MON_FEMALE,
        },
        {
        .lvl = 44,
        .species = SPECIES_SWELLOW,
        .ability = ABILITY_SCRAPPY,
        IVS(26),
        .moves = {MOVE_AERIAL_ACE, MOVE_QUICK_ATTACK, MOVE_QUICK_GUARD, MOVE_AGILITY},
        .gender = TRAINER_MON_FEMALE,
        },
        {
        .lvl = 46,
        .species = SPECIES_ALTARIA,
        PERFECT_IVS,
        .moves = {MOVE_AERIAL_ACE, MOVE_DRAGON_BREATH, MOVE_COTTON_GUARD, MOVE_DRAGON_DANCE},
        .gender = TRAINER_MON_FEMALE,
        .heldItem = ITEM_SITRUS_BERRY,
        }
    },
},

[TRAINER_WINONA_2] =
{
    WINONA_INFO,
    .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
    .doubleBattle = TRUE,
    .partySize = 5,
    .party = (const struct TrainerMon[]) {
        {
        REMATCH_MON(MASQUERAIN, TIER3, 2),
        .moves = {MOVE_AIR_SLASH, MOVE_BUG_BUZZ, MOVE_GIGA_DRAIN, MOVE_QUIVER_DANCE},
        .gender = TRAINER_MON_FEMALE,
        },
        {
        REMATCH_MON(TROPIUS, TIER3, 2),
        .ability = ABILITY_CHLOROPHYLL,
        .moves = {MOVE_AIR_SLASH, MOVE_ENERGY_BALL, MOVE_BODY_SLAM, MOVE_SYNTHESIS},
        .gender = TRAINER_MON_FEMALE,
        },
        {
        REMATCH_MON(PELIPPER, TIER2, 2),
        .ability = ABILITY_DRIZZLE,
        .moves = {MOVE_HURRICANE, MOVE_HYDRO_PUMP, MOVE_TAILWIND, MOVE_ROOST},
        .gender = TRAINER_MON_FEMALE,
        .heldItem = ITEM_DAMP_ROCK,
        },
        {
        REMATCH_MON(SWELLOW, TIER2, 2),
        .ability = ABILITY_SCRAPPY,
        .moves = {MOVE_BRAVE_BIRD, MOVE_ENDEAVOR, MOVE_REVERSAL, MOVE_DOUBLE_TEAM},
        .gender = TRAINER_MON_FEMALE,
        .heldItem = ITEM_SHARP_BEAK,
        },
        {
        REMATCH_MON(ALTARIA, ACE, 2),
        .moves = {MOVE_AIR_SLASH, MOVE_DRAGON_PULSE, MOVE_MOONBLAST, MOVE_COTTON_GUARD},
        .gender = TRAINER_MON_FEMALE,
        .heldItem = ITEM_SITRUS_BERRY,
        }
    },
},

[TRAINER_WINONA_3] =
{
    WINONA_INFO,
    .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
    .doubleBattle = TRUE,
    .partySize = 6,
    .party = (const struct TrainerMon[]) {
        {
        REMATCH_MON(NINJASK, TIER3, 3),
        .moves = {MOVE_AERIAL_ACE, MOVE_LEECH_LIFE, MOVE_BATON_PASS, MOVE_SWORDS_DANCE},
        .gender = TRAINER_MON_FEMALE,
        },
        {
        REMATCH_MON(MASQUERAIN, TIER3, 3),
        .moves = {MOVE_AIR_SLASH, MOVE_BUG_BUZZ, MOVE_GIGA_DRAIN, MOVE_QUIVER_DANCE},
        .gender = TRAINER_MON_FEMALE,
        },
        {
        REMATCH_MON(TROPIUS, TIER3, 3),
        .ability = ABILITY_CHLOROPHYLL,
        .moves = {MOVE_AIR_SLASH, MOVE_ENERGY_BALL, MOVE_BODY_SLAM, MOVE_SYNTHESIS},
        .gender = TRAINER_MON_FEMALE,
        },
        {
        REMATCH_MON(PELIPPER, TIER2, 3),
        .ability = ABILITY_DRIZZLE,
        .moves = {MOVE_HURRICANE, MOVE_HYDRO_PUMP, MOVE_TAILWIND, MOVE_ROOST},
        .gender = TRAINER_MON_FEMALE,
        .heldItem = ITEM_DAMP_ROCK,
        },
        {
        REMATCH_MON(SWELLOW, TIER2, 3),
        .ability = ABILITY_SCRAPPY,
        .moves = {MOVE_BRAVE_BIRD, MOVE_ENDEAVOR, MOVE_REVERSAL, MOVE_DOUBLE_TEAM},
        .gender = TRAINER_MON_FEMALE,
        .heldItem = ITEM_SHARP_BEAK,
        },
        {
        REMATCH_MON(ALTARIA, ACE, 3),
        .moves = {MOVE_AIR_SLASH, MOVE_DRAGON_PULSE, MOVE_MOONBLAST, MOVE_COTTON_GUARD},
        .gender = TRAINER_MON_FEMALE,
        .heldItem = ITEM_SITRUS_BERRY,
        }
    },
},

[TRAINER_WINONA_4] =
{
    WINONA_INFO,
    .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
    .doubleBattle = TRUE,
    .partySize = 6,
    .party = (const struct TrainerMon[]) {
        {
        REMATCH_MON(NINJASK, TIER3, 4),
        .moves = {MOVE_AERIAL_ACE, MOVE_LEECH_LIFE, MOVE_BATON_PASS, MOVE_SWORDS_DANCE},
        .gender = TRAINER_MON_FEMALE,
        },
        {
        REMATCH_MON(MASQUERAIN, TIER3, 4),
        .moves = {MOVE_AIR_SLASH, MOVE_BUG_BUZZ, MOVE_GIGA_DRAIN, MOVE_QUIVER_DANCE},
        .gender = TRAINER_MON_FEMALE,
        },
        {
        REMATCH_MON(TROPIUS, TIER3, 4),
        .ability = ABILITY_CHLOROPHYLL,
        .moves = {MOVE_AIR_SLASH, MOVE_ENERGY_BALL, MOVE_BODY_SLAM, MOVE_SYNTHESIS},
        .gender = TRAINER_MON_FEMALE,
        },
        {
        REMATCH_MON(PELIPPER, TIER2, 4),
        .ability = ABILITY_DRIZZLE,
        .moves = {MOVE_HURRICANE, MOVE_HYDRO_PUMP, MOVE_TAILWIND, MOVE_ROOST},
        .gender = TRAINER_MON_FEMALE,
        .heldItem = ITEM_DAMP_ROCK,
        },
        {
        REMATCH_MON(SWELLOW, TIER2, 4),
        .ability = ABILITY_SCRAPPY,
        .moves = {MOVE_BRAVE_BIRD, MOVE_ENDEAVOR, MOVE_REVERSAL, MOVE_DOUBLE_TEAM},
        .gender = TRAINER_MON_FEMALE,
        .heldItem = ITEM_SHARP_BEAK,
        },
        {
        REMATCH_MON(ALTARIA, ACE, 4),
        .moves = {MOVE_AIR_SLASH, MOVE_DRAGON_PULSE, MOVE_MOONBLAST, MOVE_COTTON_GUARD},
        .gender = TRAINER_MON_FEMALE,
        .heldItem = ITEM_SITRUS_BERRY,
        }
    },
},

[TRAINER_WINONA_5] =
{
    WINONA_INFO,
    .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
    .doubleBattle = TRUE,
    .partySize = 6,
    .party = (const struct TrainerMon[]) {
        {
        REMATCH_MON(NINJASK, TIER3, 5),
        .moves = {MOVE_ACROBATICS, MOVE_LEECH_LIFE, MOVE_BATON_PASS, MOVE_SWORDS_DANCE},
        .gender = TRAINER_MON_FEMALE,
        },
        {
        REMATCH_MON(MASQUERAIN, TIER3, 5),
        .moves = {MOVE_AIR_SLASH, MOVE_BUG_BUZZ, MOVE_GIGA_DRAIN, MOVE_QUIVER_DANCE},
        .gender = TRAINER_MON_FEMALE,
        },
        {
        REMATCH_MON(TROPIUS, TIER3, 5),
        .ability = ABILITY_CHLOROPHYLL,
        .moves = {MOVE_AIR_SLASH, MOVE_ENERGY_BALL, MOVE_BODY_SLAM, MOVE_SYNTHESIS},
        .gender = TRAINER_MON_FEMALE,
        },
        {
        REMATCH_MON(PELIPPER, TIER2, 5),
        .ability = ABILITY_DRIZZLE,
        .moves = {MOVE_HURRICANE, MOVE_HYDRO_PUMP, MOVE_TAILWIND, MOVE_ROOST},
        .gender = TRAINER_MON_FEMALE,
        .heldItem = ITEM_DAMP_ROCK,
        },
        {
        REMATCH_MON(SWELLOW, TIER2, 5),
        .ability = ABILITY_SCRAPPY,
        .moves = {MOVE_BRAVE_BIRD, MOVE_ENDEAVOR, MOVE_REVERSAL, MOVE_DOUBLE_TEAM},
        .gender = TRAINER_MON_FEMALE,
        .heldItem = ITEM_SHARP_BEAK,
        },
        {
        REMATCH_MON(ALTARIA, ACE, 5),
        .moves = {MOVE_AIR_SLASH, MOVE_DRAGON_PULSE, MOVE_MOONBLAST, MOVE_COTTON_GUARD},
        .gender = TRAINER_MON_FEMALE,
        .heldItem = ITEM_SITRUS_BERRY,
        }
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

[TRAINER_SIDNEY] =
{
    .trainerName = _("Sidney"),
    .trainerClass = TRAINER_CLASS_ELITE_FOUR,
    .trainerPic = TRAINER_PIC_ELITE_FOUR_SIDNEY,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
    .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
    .mugshotEnabled = TRUE,
    .mugshotColor = MUGSHOT_COLOR_PURPLE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
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
    .trainerName = _("Phoebe"),
    .trainerClass = TRAINER_CLASS_ELITE_FOUR,
    .trainerPic = TRAINER_PIC_ELITE_FOUR_PHOEBE,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
    .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
    .mugshotEnabled = TRUE,
    .mugshotColor = MUGSHOT_COLOR_GREEN,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
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
    .trainerName = _("Glacia"),
    .trainerClass = TRAINER_CLASS_ELITE_FOUR,
    .trainerPic = TRAINER_PIC_ELITE_FOUR_GLACIA,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
    .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
    .mugshotEnabled = TRUE,
    .mugshotColor = MUGSHOT_COLOR_PINK,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
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
    .trainerName = _("Drake"),
    .trainerClass = TRAINER_CLASS_ELITE_FOUR,
    .trainerPic = TRAINER_PIC_ELITE_FOUR_DRAKE,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
    .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
    .mugshotEnabled = TRUE,
    .mugshotColor = MUGSHOT_COLOR_BLUE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
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
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
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
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
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
        .ev = TRAINER_PARTY_EVS(0, 0, 63, 0, 1, 63),
        PERFECT_IVS,
        .moves = {MOVE_REFLECT, MOVE_LIGHT_SCREEN, MOVE_ANCIENT_POWER, MOVE_EARTHQUAKE},
        },
        {
        .lvl = 78,
        .species = SPECIES_JIRACHI,
        .nature = NATURE_MODEST,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 63, 63, 1),
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
        .ev = TRAINER_PARTY_EVS(0, 63, 1, 63, 0, 0),
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

#define GABBY_AND_TY \
    .trainerName = _("Gabby & Ty"),                               \
    .trainerClass = TRAINER_CLASS_INTERVIEWER,                    \
    .trainerPic = TRAINER_PIC_INTERVIEWER,                        \
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTERVIEWER, \
    .doubleBattle = TRUE,                                         \
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY,  \
    .partySize = 2

[TRAINER_GABBY_AND_TY_1] =
{
    GABBY_AND_TY,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 21,
        .species = SPECIES_MAGNEMITE,
        IVS(6),
        },
        {
        .lvl = 21,
        .species = SPECIES_WHISMUR,
        IVS(6),
        }
    },
},

[TRAINER_GABBY_AND_TY_2] =
{
    GABBY_AND_TY,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 34,
        .species = SPECIES_MAGNETON,
        IVS(12),
        },
        {
        .lvl = 34,
        .species = SPECIES_LOUDRED,
        IVS(12),
        }
    },
},

[TRAINER_GABBY_AND_TY_3] =
{
    GABBY_AND_TY,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 40,
        .species = SPECIES_MAGNETON,
        IVS(18),
        },
        {
        .lvl = 40,
        .species = SPECIES_LOUDRED,
        IVS(18),
        }
    },
},

[TRAINER_GABBY_AND_TY_4] =
{
    GABBY_AND_TY,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 45,
        .species = SPECIES_MAGNETON,
        IVS(24),
        },
        {
        .lvl = 45,
        .species = SPECIES_LOUDRED,
        IVS(24),
        }
    },
},

[TRAINER_GABBY_AND_TY_5] =
{
    GABBY_AND_TY,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 50,
        .species = SPECIES_MAGNETON,
        IVS(30),
        },
        {
        .lvl = 50,
        .species = SPECIES_LOUDRED,
        IVS(30),
        }
    },
},

[TRAINER_GABBY_AND_TY_6] =
{
    GABBY_AND_TY,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 55,
        .species = SPECIES_MAGNEZONE,
        IVS(30),
        .moves = {MOVE_THUNDERBOLT, MOVE_FLASH_CANNON, MOVE_METAL_SOUND, MOVE_BARRIER},
        },
        {
        .lvl = 55,
        .species = SPECIES_EXPLOUD,
        IVS(30),
        .moves = {MOVE_HYPER_VOICE, MOVE_DISARMING_VOICE, MOVE_CRUNCH, MOVE_THUNDER_FANG},
        }
    },
},

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

#define RICH_MON(Level, Species)  \
    BASE_MON(Level, Species),     \
    .heldItem = (Level < REMATCH_5_LEVEL_6 ? ITEM_NUGGET : ITEM_BIG_NUGGET)

#define RICH_BOY_INFO            \
    TRAINER_CLASS_PIC(RICH_BOY), \
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_RICH

#define RICH_BOY_MON(Level, Species) \
    RICH_MON(Level, Species),        \
    .isShiny = TRUE

#define LADY_INFO            \
    TRAINER_CLASS_PIC(LADY), \
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE

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

#define TRIATHLETE_MON(Level, Species, IV)       \
    BASE_MON(Level, Species),                    \
    .ev = TRAINER_PARTY_EVS(63, 0, 0, 63, 0, 0), \
    .iv = TRAINER_PARTY_IVS(31, IV, IV, 31, IV, IV)

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

#define POKEMON_BREEDER_MON(Level, Species) \
    BASE_MON(Level, Species),               \
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

#define AQUA_GRUNT_M_INFO                    \
    .trainerName = _("Grunt"),               \
    .trainerClass = TRAINER_CLASS_TEAM_AQUA, \
    .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,  \
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA

#define BIRD_KEEPER_INFO            \
    TRAINER_CLASS_PIC(BIRD_KEEPER), \
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL

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
#define REMATCH_5_MINIBOSS REMATCH_5_LEVEL_1 + 1
#define REMATCH_5_LEVEL_2 REMATCH_5_LEVEL_1 - 1
#define REMATCH_5_LEVEL_3 REMATCH_5_LEVEL_1 - 2
#define REMATCH_5_LEVEL_4 REMATCH_5_LEVEL_1 - 3
#define REMATCH_5_LEVEL_5 REMATCH_5_LEVEL_1 - 4
#define REMATCH_5_LEVEL_6 REMATCH_5_LEVEL_1 - 5


//Route 102
#define CALVIN_INFO             \
    .trainerName = _("Calvin"), \
    YOUNGSTER_INFO,             \
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON

#define LINUS(Level, Species)     \
    BASE_MON(Level, Species),     \
    .ability = ABILITY_GLUTTONY,  \
    .nature = NATURE_JOLLY,       \
    .gender = TRAINER_MON_MALE,   \
    .nickname = COMPOUND_STRING("Linus")

[TRAINER_CALVIN_1] =
{
    CALVIN_INFO,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        LINUS(5, ZIGZAGOON),
        }
    },
},

[TRAINER_CALVIN_2] =
{
    CALVIN_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = REMATCH_2_LEVEL_2,
        .species = SPECIES_TAILLOW,
        IVS(2),
        .gender = TRAINER_MON_MALE,
        },
        {
        LINUS(REMATCH_2_LEVEL_1, LINOONE),
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
        .lvl = REMATCH_3_LEVEL_2,
        .species = SPECIES_SWELLOW,
        IVS(3),
        .gender = TRAINER_MON_MALE,
        },
        {
        LINUS(REMATCH_3_LEVEL_1, LINOONE),
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
        .lvl = REMATCH_4_LEVEL_2,
        .species = SPECIES_MIGHTYENA,
        .ability = ABILITY_INTIMIDATE,
        IVS(4),
        .gender = TRAINER_MON_MALE,
        },
        {
        .lvl = REMATCH_4_LEVEL_2,
        .species = SPECIES_SWELLOW,
        IVS(4),
        .gender = TRAINER_MON_MALE,
        },
        {
        LINUS(REMATCH_4_LEVEL_1, LINOONE),
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
        .lvl = REMATCH_5_LEVEL_2,
        .species = SPECIES_MIGHTYENA,
        .ability = ABILITY_INTIMIDATE,
        IVS(5),
        .gender = TRAINER_MON_MALE,
        },
        {
        .lvl = REMATCH_5_LEVEL_2,
        .species = SPECIES_SWELLOW,
        IVS(5),
        .gender = TRAINER_MON_MALE,
        },
        {
        LINUS(REMATCH_5_MINIBOSS, LINOONE),
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

//Route 104 south
#define WINSTON_INFO                                               \
    .trainerName = _("Winston"),                                   \
    RICH_BOY_INFO,                                                 \
    .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE}, \
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON

#define MR_ZIG(Level, Species)     \
    RICH_BOY_MON(Level, Species),  \
    .ability = ABILITY_QUICK_FEET, \
    .gender = TRAINER_MON_MALE,    \
    .nickname = COMPOUND_STRING("Mr. Zig")

#define MR_PIG(Level, Species)    \
    RICH_BOY_MON(Level, Species), \
    .ability = ABILITY_THICK_FAT, \
    .gender = TRAINER_MON_MALE,   \
    .nickname = COMPOUND_STRING("Mr. Pig")

#define MR_DIG(Level, Species)    \
    RICH_BOY_MON(Level, Species), \
    .gender = TRAINER_MON_MALE,   \
    .nickname = COMPOUND_STRING("Mr. Dig")

#define MR_GIG(Level, Species)     \
    RICH_BOY_MON(Level, Species),  \
    .ability = ABILITY_SAP_SIPPER, \
    .gender = TRAINER_MON_MALE,    \
    .nickname = COMPOUND_STRING("Mr. Gig")

[TRAINER_WINSTON_1] =
{
    WINSTON_INFO,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        MR_ZIG(8, ZIGZAGOON),
        }
    },
},

[TRAINER_WINSTON_2] =
{
    WINSTON_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        MR_PIG(REMATCH_2_LEVEL_2, SPOINK),
        },
        {
        MR_ZIG(REMATCH_2_LEVEL_1, LINOONE),
        }
    },
},

[TRAINER_WINSTON_3] =
{
    WINSTON_INFO,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        MR_DIG(REMATCH_3_LEVEL_2, TRAPINCH),
        },
        {
        MR_PIG(REMATCH_3_LEVEL_2, GRUMPIG),
        },
        {
        MR_ZIG(REMATCH_3_LEVEL_1, LINOONE),
        }
    },
},

[TRAINER_WINSTON_4] =
{
    WINSTON_INFO,
    .partySize = 4,
    .party = (const struct TrainerMon[]) {
        {
        MR_GIG(REMATCH_4_LEVEL_2, GIRAFARIG),
        },
        {
        MR_DIG(REMATCH_4_LEVEL_2, VIBRAVA),
        },
        {
        MR_PIG(REMATCH_4_LEVEL_2, GRUMPIG),
        },
        {
        MR_ZIG(REMATCH_4_LEVEL_1, LINOONE),
        }
    },
},

[TRAINER_WINSTON_5] =
{
    WINSTON_INFO,
    .partySize = 4,
    .party = (const struct TrainerMon[]) {
        {
        MR_GIG(REMATCH_5_LEVEL_2, FARIGIRAF),
        IVS(24),
        .moves = {MOVE_TWIN_BEAM, MOVE_ENERGY_BALL, MOVE_SHADOW_BALL, MOVE_NASTY_PLOT},
        },
        {
        MR_DIG(REMATCH_5_LEVEL_2, FLYGON),
        IVS(24),
        .moves = {MOVE_DIG, MOVE_DRAGON_CLAW, MOVE_CRUNCH, MOVE_DRAGON_DANCE},
        },
        {
        MR_PIG(REMATCH_5_LEVEL_2, GRUMPIG),
        IVS(24),
        .moves = {MOVE_PSYCHIC, MOVE_POWER_GEM, MOVE_DAZZLING_GLEAM, MOVE_FLASH_CANNON},
        },
        {
        MR_ZIG(REMATCH_5_MINIBOSS, LINOONE),
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
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
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

[TRAINER_JAMES_1] =
{
    JAMES_INFO,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 8,
        .species = SPECIES_NINCADA,
        .gender = TRAINER_MON_MALE,
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
        .lvl = REMATCH_2_LEVEL_2,
        .species = SPECIES_NINJASK,
        IVS(2),
        .gender = TRAINER_MON_MALE,
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
        .lvl = REMATCH_3_LEVEL_3,
        .species = SPECIES_NINJASK,
        IVS(3),
        .gender = TRAINER_MON_MALE,
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
        .lvl = REMATCH_4_LEVEL_4,
        .species = SPECIES_NINJASK,
        IVS(4),
        .gender = TRAINER_MON_MALE,
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
        .lvl = REMATCH_5_LEVEL_4,
        .species = SPECIES_NINJASK,
        IVS(5),
        .gender = TRAINER_MON_MALE,
        }
    },
},

//Route 104 north
#define CINDY_INFO                                                 \
    .trainerName = _("Cindy"),                                     \
    LADY_INFO,                                                     \
    .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE}, \
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE

#define CINDY_ZIGZAGOON(Level, Species) \
    RICH_MON(Level, Species),           \
    .ability = ABILITY_QUICK_FEET,      \
    .gender = TRAINER_MON_FEMALE 

[TRAINER_CINDY_1] =
{
    CINDY_INFO,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        CINDY_ZIGZAGOON(8, ZIGZAGOON),
        }
    },
},

[TRAINER_CINDY_2] =
{
    CINDY_INFO,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        CINDY_ZIGZAGOON(REMATCH_2_LEVEL_1, LINOONE),
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
        CINDY_ZIGZAGOON(REMATCH_3_LEVEL_1, LINOONE),
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
        CINDY_ZIGZAGOON(REMATCH_4_LEVEL_1, LINOONE),
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
        CINDY_ZIGZAGOON(REMATCH_5_LEVEL_1, LINOONE),
        IVS(5),
        .moves = {MOVE_HEADBUTT, MOVE_PLAY_ROUGH, MOVE_PIN_MISSILE, MOVE_BESTOW},
        }
    },
},

#define HALEY_INFO             \
    .trainerName = _("Haley"), \
    LASS_INFO,                 \
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE

#define HALEY_SHROOMISH              \
    .ability = ABILITY_EFFECT_SPORE, \
    .gender = TRAINER_MON_FEMALE

#define HALEY_LOTAD                \
    .ability = ABILITY_SWIFT_SWIM, \
    .gender = TRAINER_MON_FEMALE

[TRAINER_HALEY_1] =
{
    HALEY_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 7,
        .species = SPECIES_LOTAD,
        HALEY_LOTAD,
        },
        {
        .lvl = 7,
        .species = SPECIES_SHROOMISH,
        HALEY_SHROOMISH,
        }
    },
},

[TRAINER_HALEY_2] =
{
    HALEY_INFO,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = REMATCH_2_LEVEL_3,
        .species = SPECIES_TAILLOW,
        IVS(2),
        .gender = TRAINER_MON_FEMALE,
        },
        {
        .lvl = REMATCH_2_LEVEL_3,
        .species = SPECIES_LOMBRE,
        IVS(2),
        HALEY_LOTAD,
        },
        {
        .lvl = REMATCH_2_LEVEL_3,
        .species = SPECIES_SHROOMISH,
        IVS(2),
        HALEY_SHROOMISH,
        }
    },
},

[TRAINER_HALEY_3] =
{
    HALEY_INFO,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = REMATCH_3_LEVEL_3,
        .species = SPECIES_TAILLOW,
        IVS(3),
        .gender = TRAINER_MON_FEMALE,
        },
        {
        .lvl = REMATCH_3_LEVEL_3,
        .species = SPECIES_LOMBRE,
        IVS(3),
        HALEY_LOTAD,
        },
        {
        .lvl = REMATCH_3_LEVEL_3,
        .species = SPECIES_BRELOOM,
        IVS(3),
        HALEY_SHROOMISH,
        }
    },
},

[TRAINER_HALEY_4] =
{
    HALEY_INFO,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = REMATCH_4_LEVEL_3,
        .species = SPECIES_SWELLOW,
        IVS(4),
        .gender = TRAINER_MON_FEMALE,
        },
        {
        .lvl = REMATCH_4_LEVEL_3,
        .species = SPECIES_LOMBRE,
        IVS(4),
        HALEY_LOTAD,
        },
        {
        .lvl = REMATCH_4_LEVEL_3,
        .species = SPECIES_BRELOOM,
        IVS(4),
        HALEY_SHROOMISH,
        }
    },
},

[TRAINER_HALEY_5] =
{
    HALEY_INFO,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = REMATCH_5_LEVEL_3,
        .species = SPECIES_SWELLOW,
        IVS(5),
        .gender = TRAINER_MON_FEMALE,
        },
        {
        .lvl = REMATCH_5_LEVEL_3,
        .species = SPECIES_LUDICOLO,
        IVS(5),
        HALEY_LOTAD,
        },
        {
        .lvl = REMATCH_5_LEVEL_3,
        .species = SPECIES_BRELOOM,
        IVS(5),
        HALEY_SHROOMISH,
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
        RICH_BOY_MON(8, ABRA),
        },
        {
        RICH_BOY_MON(8, POOCHYENA),
        }
    },
},

[TRAINER_SARAH] =
{
    .trainerName = _("Sarah"),
    LADY_INFO,
    .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        RICH_MON(8, LOTAD),
        },
        {
        RICH_MON(8, ZIGZAGOON),
        }
    },
},

#define JERRY_INFO             \
    .trainerName = _("Jerry"), \
    SCHOOLKID_M_INFO,          \
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE

#define JERRY_SHUPPET            \
    .ability = ABILITY_INSOMNIA, \
    .gender = TRAINER_MON_MALE

[TRAINER_JERRY_1] =
{
    JERRY_INFO,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 10,
        .species = SPECIES_RALTS,
        .ability = ABILITY_SYNCHRONIZE,
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
        .lvl = REMATCH_2_LEVEL_2,
        .species = SPECIES_MEDITITE,
        IVS(2),
        .gender = TRAINER_MON_MALE,
        },
        {
        .lvl = REMATCH_2_LEVEL_2,
        .species = SPECIES_KIRLIA,
        .ability = ABILITY_SYNCHRONIZE,
        IVS(2),
        .gender = TRAINER_MON_MALE,
        }
    },
},

[TRAINER_JERRY_3] =
{
    JERRY_INFO,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = REMATCH_3_LEVEL_3,
        .species = SPECIES_SHUPPET,
        IVS(3),
        JERRY_SHUPPET,
        },
        {
        .lvl = REMATCH_3_LEVEL_3,
        .species = SPECIES_MEDITITE,
        IVS(3),
        .gender = TRAINER_MON_MALE,
        },
        {
        .lvl = REMATCH_3_LEVEL_3,
        .species = SPECIES_GALLADE,
        .ability = ABILITY_STEADFAST,
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
        .lvl = REMATCH_4_LEVEL_3,
        .species = SPECIES_SHUPPET,
        IVS(4),
        JERRY_SHUPPET,
        },
        {
        .lvl = REMATCH_4_LEVEL_3,
        .species = SPECIES_MEDITITE,
        IVS(4),
        .gender = TRAINER_MON_MALE,
        },
        {
        .lvl = REMATCH_4_LEVEL_3,
        .species = SPECIES_GALLADE,
        .ability = ABILITY_STEADFAST,
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
        .lvl = REMATCH_5_LEVEL_3,
        .species = SPECIES_BANETTE,
        IVS(5),
        JERRY_SHUPPET,
        },
        {
        .lvl = REMATCH_5_LEVEL_3,
        .species = SPECIES_MEDICHAM,
        IVS(5),
        .gender = TRAINER_MON_MALE,
        },
        {
        .lvl = REMATCH_5_LEVEL_3,
        .species = SPECIES_GALLADE,
        .ability = ABILITY_STEADFAST,
        IVS(6),
        }
    },
},

#define KAREN_INFO             \
    .trainerName = _("Karen"), \
    SCHOOLKID_F_INFO,          \
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE

#define KAREN_SHROOMISH             \
    .ability = ABILITY_POISON_HEAL, \
    .gender = TRAINER_MON_FEMALE

#define KAREN_WHISMUR              \
    .ability = ABILITY_SOUNDPROOF, \
    .gender = TRAINER_MON_FEMALE

#define KAREN_SKITTY              \
    .ability = ABILITY_NORMALIZE, \
    .gender = TRAINER_MON_FEMALE

[TRAINER_KAREN_1] =
{
    KAREN_INFO,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 10,
        .species = SPECIES_SHROOMISH,
        IVS(1),
        KAREN_SHROOMISH,
        }
    },
},

[TRAINER_KAREN_2] =
{
    KAREN_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = REMATCH_2_LEVEL_2,
        .species = SPECIES_WHISMUR,
        IVS(2),
        KAREN_WHISMUR,
        },
        {
        .lvl = REMATCH_2_LEVEL_2,
        .species = SPECIES_SHROOMISH,
        IVS(2),
        KAREN_SHROOMISH,
        }
    },
},

[TRAINER_KAREN_3] =
{
    KAREN_INFO,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = REMATCH_3_LEVEL_3,
        .species = SPECIES_SKITTY,
        IVS(3),
        KAREN_SKITTY,
        },
        {
        .lvl = REMATCH_3_LEVEL_3,
        .species = SPECIES_LOUDRED,
        IVS(3),
        KAREN_WHISMUR,
        },
        {
        .lvl = REMATCH_3_LEVEL_3,
        .species = SPECIES_BRELOOM,
        IVS(3),
        KAREN_SHROOMISH,
        }
    },
},

[TRAINER_KAREN_4] =
{
    KAREN_INFO,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = REMATCH_4_LEVEL_3,
        .species = SPECIES_DELCATTY,
        IVS(4),
        KAREN_SKITTY,
        },
        {
        .lvl = REMATCH_4_LEVEL_3,
        .species = SPECIES_LOUDRED,
        IVS(4),
        KAREN_WHISMUR,
        },
        {
        .lvl = REMATCH_4_LEVEL_3,
        .species = SPECIES_BRELOOM,
        IVS(4),
        KAREN_SHROOMISH,
        }
    },
},

[TRAINER_KAREN_5] =
{
    KAREN_INFO,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = REMATCH_5_LEVEL_3,
        .species = SPECIES_DELCATTY,
        IVS(5),
        KAREN_SKITTY,
        },
        {
        .lvl = REMATCH_5_LEVEL_3,
        .species = SPECIES_EXPLOUD,
        IVS(5),
        KAREN_WHISMUR,
        },
        {
        .lvl = REMATCH_5_LEVEL_3,
        .species = SPECIES_BRELOOM,
        IVS(5),
        KAREN_SHROOMISH,
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

[TRAINER_GRUNT_RUSTURF_TUNNEL] =
{
    AQUA_GRUNT_M_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
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

//Route 106 land
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

#define ELLIOT_WAILMER_BARBOACH   \
    .ability = ABILITY_OBLIVIOUS, \
    .gender = TRAINER_MON_MALE

#define ELLIOT_TENTACOOL           \
    .ability = ABILITY_CLEAR_BODY, \
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
        .lvl = 13,
        .species = SPECIES_TENTACOOL,
        ELLIOT_TENTACOOL,
        },
        {
        .lvl = 13,
        .species = SPECIES_WAILMER,
        ELLIOT_WAILMER_BARBOACH,
        }
    },
},

[TRAINER_ELLIOT_2] =
{
    ELLIOT_INFO,
    .partySize = 5,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = REMATCH_2_LEVEL_5,
        .species = SPECIES_BARBOACH,
        IVS(2),
        ELLIOT_WAILMER_BARBOACH,
        },
        {
        .lvl = REMATCH_2_LEVEL_5,
        .species = SPECIES_CARVANHA,
        IVS(2),
        .gender = TRAINER_MON_MALE,
        },
        {
        .lvl = REMATCH_2_LEVEL_5,
        .species = SPECIES_GYARADOS,
        IVS(2),
        .gender = TRAINER_MON_MALE,
        },
        {
        .lvl = REMATCH_2_LEVEL_5,
        .species = SPECIES_TENTACRUEL,
        IVS(2),
        ELLIOT_TENTACOOL,
        },
        {
        .lvl = REMATCH_2_LEVEL_5,
        .species = SPECIES_WAILMER,
        IVS(2),
        ELLIOT_WAILMER_BARBOACH,
        }
    },
},

[TRAINER_ELLIOT_3] =
{
    ELLIOT_INFO,
    .partySize = 5,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = REMATCH_3_LEVEL_5,
        .species = SPECIES_WHISCASH,
        IVS(3),
        ELLIOT_WAILMER_BARBOACH,
        },
        {
        .lvl = REMATCH_3_LEVEL_5,
        .species = SPECIES_SHARPEDO,
        IVS(3),
        .gender = TRAINER_MON_MALE,
        },
        {
        .lvl = REMATCH_3_LEVEL_5,
        .species = SPECIES_GYARADOS,
        IVS(3),
        .gender = TRAINER_MON_MALE,
        },
        {
        .lvl = REMATCH_3_LEVEL_5,
        .species = SPECIES_TENTACRUEL,
        IVS(3),
        ELLIOT_TENTACOOL,
        },
        {
        .lvl = REMATCH_3_LEVEL_5,
        .species = SPECIES_WAILMER,
        IVS(3),
        ELLIOT_WAILMER_BARBOACH,
        }
    },
},

[TRAINER_ELLIOT_4] =
{
    ELLIOT_INFO,
    .partySize = 5,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = REMATCH_4_LEVEL_5,
        .species = SPECIES_WHISCASH,
        IVS(4),
        ELLIOT_WAILMER_BARBOACH,
        },
        {
        .lvl = REMATCH_4_LEVEL_5,
        .species = SPECIES_SHARPEDO,
        IVS(4),
        .gender = TRAINER_MON_MALE,
        },
        {
        .lvl = REMATCH_4_LEVEL_5,
        .species = SPECIES_GYARADOS,
        IVS(4),
        .gender = TRAINER_MON_MALE,
        },
        {
        .lvl = REMATCH_4_LEVEL_5,
        .species = SPECIES_TENTACRUEL,
        IVS(4),
        ELLIOT_TENTACOOL,
        },
        {
        .lvl = REMATCH_4_LEVEL_5,
        .species = SPECIES_WAILMER,
        IVS(4),
        ELLIOT_WAILMER_BARBOACH,
        }
    },
},

[TRAINER_ELLIOT_5] =
{
    ELLIOT_INFO,
    .partySize = 5,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = REMATCH_5_LEVEL_5,
        .species = SPECIES_WHISCASH,
        IVS(5),
        ELLIOT_WAILMER_BARBOACH,
        },
        {
        .lvl = REMATCH_5_LEVEL_5,
        .species = SPECIES_SHARPEDO,
        IVS(5),
        .gender = TRAINER_MON_MALE,
        },
        {
        .lvl = REMATCH_5_LEVEL_5,
        .species = SPECIES_GYARADOS,
        IVS(5),
        .gender = TRAINER_MON_MALE,
        },
        {
        .lvl = REMATCH_5_LEVEL_5,
        .species = SPECIES_TENTACRUEL,
        IVS(5),
        ELLIOT_TENTACOOL,
        },
        {
        .lvl = REMATCH_5_LEVEL_5,
        .species = SPECIES_WAILORD,
        IVS(5),
        ELLIOT_WAILMER_BARBOACH,
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

//Route 109 land
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

#define LOLA_MARILL               \
    .ability = ABILITY_THICK_FAT, \
    .gender = TRAINER_MON_FEMALE

#define LOLA_WAILMER               \
    .ability = ABILITY_WATER_VEIL, \
    .gender = TRAINER_MON_FEMALE

[TRAINER_LOLA_1] =
{
    LOLA_INFO,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 18,
        .species = SPECIES_MARILL,
        IVS(1),
        LOLA_MARILL,
        }
    },
},

[TRAINER_LOLA_2] =
{
    LOLA_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = REMATCH_2_LEVEL_2,
        .species = SPECIES_WAILMER,
        IVS(2),
        LOLA_WAILMER,
        },
        {
        .lvl = REMATCH_2_LEVEL_2,
        .species = SPECIES_AZUMARILL,
        IVS(2),
        LOLA_MARILL,
        }
    },
},

[TRAINER_LOLA_3] =
{
    LOLA_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = REMATCH_3_LEVEL_2,
        .species = SPECIES_WAILMER,
        IVS(3),
        },
        {
        .lvl = REMATCH_3_LEVEL_2,
        .species = SPECIES_AZUMARILL,
        IVS(3),
        LOLA_MARILL,
        }
    },
},

[TRAINER_LOLA_4] =
{
    LOLA_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = REMATCH_4_LEVEL_2,
        .species = SPECIES_WAILMER,
        IVS(4),
        LOLA_WAILMER,
        },
        {
        .lvl = REMATCH_4_LEVEL_2,
        .species = SPECIES_AZUMARILL,
        IVS(4),
        LOLA_MARILL,
        }
    },
},

[TRAINER_LOLA_5] =
{
    LOLA_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = REMATCH_5_LEVEL_2,
        .species = SPECIES_WAILORD,
        IVS(5),
        LOLA_WAILMER,
        },
        {
        .lvl = REMATCH_5_LEVEL_2,
        .species = SPECIES_AZUMARILL,
        IVS(5),
        LOLA_MARILL,
        }
    },
},

#define RICKY_INFO             \
    .trainerName = _("Ricky"), \
    TUBER_M_INFO,              \
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE

#define RICKY_ZIGZAGOON(move2, move3, move4)                        \
    .ability = ABILITY_GLUTTONY,                                    \
    .moves = {MOVE_SURF, MOVE_##move2, MOVE_##move3, MOVE_##move4}, \
    .gender = TRAINER_MON_MALE

#define RICKY_LOMBRE(move2, move3)                                   \
    .ability = ABILITY_SWIFT_SWIM,                                   \
    .moves = {MOVE_SURF, MOVE_##move2, MOVE_##move3, MOVE_FAKE_OUT}, \
    .gender = TRAINER_MON_MALE

[TRAINER_RICKY_1] =
{
    RICKY_INFO,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 18,
        .species = SPECIES_ZIGZAGOON,
        IVS(1),
        RICKY_ZIGZAGOON(HEADBUTT, SAND_ATTACK, ODOR_SLEUTH),
        }
    },
},

[TRAINER_RICKY_2] =
{
    RICKY_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = REMATCH_2_LEVEL_2,
        .species = SPECIES_LOMBRE,
        IVS(2),
        RICKY_LOMBRE(MEGA_DRAIN, TEETER_DANCE),
        },
        {
        .lvl = REMATCH_2_LEVEL_2,
        .species = SPECIES_LINOONE,
        IVS(2),
        RICKY_ZIGZAGOON(SLASH, PIN_MISSILE, SAND_ATTACK),
        }
    },
},

[TRAINER_RICKY_3] =
{
    RICKY_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = REMATCH_3_LEVEL_2,
        .species = SPECIES_LUDICOLO,
        IVS(3),
        RICKY_LOMBRE(GIGA_DRAIN, NATURE_POWER),
        },
        {
        .lvl = REMATCH_3_LEVEL_2,
        .species = SPECIES_LINOONE,
        IVS(3),
        RICKY_ZIGZAGOON(SLASH, PIN_MISSILE, SAND_ATTACK),
        }
    },
},

[TRAINER_RICKY_4] =
{
    RICKY_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = REMATCH_4_LEVEL_2,
        .species = SPECIES_LUDICOLO,
        IVS(4),
        RICKY_LOMBRE(GIGA_DRAIN, NATURE_POWER),
        },
        {
        .lvl = REMATCH_4_LEVEL_2,
        .species = SPECIES_LINOONE,
        IVS(4),
        RICKY_ZIGZAGOON(SLASH, PIN_MISSILE, SAND_ATTACK),
        }
    },
},

[TRAINER_RICKY_5] =
{
    RICKY_INFO,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = REMATCH_5_LEVEL_2,
        .species = SPECIES_LUDICOLO,
        IVS(5),
        RICKY_LOMBRE(GIGA_DRAIN, NATURE_POWER),
        },
        {
        .lvl = REMATCH_5_LEVEL_2,
        .species = SPECIES_LINOONE,
        IVS(5),
        RICKY_ZIGZAGOON(SLASH, PIN_MISSILE, SAND_ATTACK),
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
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
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
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
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

#define ISABEL_MON(Species, Berry) \
    .species = SPECIES_##Species, \
    .gender = TRAINER_MON_FEMALE, \
    .heldItem = ITEM_##Berry##_BERRY

[TRAINER_ISABEL_1] =
{
    ISABEL_INFO,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 17,
        ISABEL_MON(PLUSLE, ORAN),
        },
        {
        .lvl = 17,
        ISABEL_MON(MINUN, ORAN),
        }
    },
},

[TRAINER_ISABEL_2] =
{
    ISABEL_INFO,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = REMATCH_2_LEVEL_2,
        ISABEL_MON(PLUSLE, ORAN),
        IVS(2),
        },
        {
        .lvl = REMATCH_2_LEVEL_2,
        ISABEL_MON(MINUN, ORAN),
        IVS(2),
        }
    },
},

[TRAINER_ISABEL_3] =
{
    ISABEL_INFO,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = REMATCH_3_LEVEL_2,
        ISABEL_MON(PLUSLE, ORAN),
        IVS(3),
        },
        {
        .lvl = REMATCH_3_LEVEL_2,
        ISABEL_MON(MINUN, ORAN),
        IVS(3),
        }
    },
},

[TRAINER_ISABEL_4] =
{
    ISABEL_INFO,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = REMATCH_4_LEVEL_2,
        ISABEL_MON(PLUSLE, ORAN),
        IVS(4),
        },
        {
        .lvl = REMATCH_4_LEVEL_2,
        ISABEL_MON(MINUN, ORAN),
        IVS(4),
        }
    },
},

[TRAINER_ISABEL_5] =
{
    ISABEL_INFO,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = REMATCH_5_LEVEL_2,
        ISABEL_MON(PLUSLE, SITRUS),
        IVS(5),
        },
        {
        .lvl = REMATCH_5_LEVEL_2,
        ISABEL_MON(MINUN, SITRUS),
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
        .lvl = 17,
        .species = SPECIES_MINUN,
        .gender = TRAINER_MON_MALE,
        .heldItem = ITEM_ORAN_BERRY
        },
        {
        .lvl = 17,
        .species = SPECIES_PLUSLE,
        .gender = TRAINER_MON_MALE,
        .heldItem = ITEM_ORAN_BERRY
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

#define MIGUEL_SKITTY \
    .ability = ABILITY_CUTE_CHARM, \
    .gender = TRAINER_MON_FEMALE

[TRAINER_MIGUEL_1] =
{
    MIGUEL_INFO,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 18,
        .species = SPECIES_SKITTY,
        MIGUEL_SKITTY,
        .heldItem = ITEM_ORAN_BERRY
        }
    },
},

[TRAINER_MIGUEL_2] =
{
    MIGUEL_INFO,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = REMATCH_2_LEVEL_1,
        .species = SPECIES_SKITTY,
        MIGUEL_SKITTY,
        .heldItem = ITEM_ORAN_BERRY
        }
    },
},

[TRAINER_MIGUEL_3] =
{
    MIGUEL_INFO,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = REMATCH_3_LEVEL_1,
        .species = SPECIES_SKITTY,
        MIGUEL_SKITTY,
        .heldItem = ITEM_ORAN_BERRY
        }
    },
},

[TRAINER_MIGUEL_4] =
{
    MIGUEL_INFO,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = REMATCH_4_LEVEL_1,
        .species = SPECIES_DELCATTY,
        MIGUEL_SKITTY,
        .heldItem = ITEM_ORAN_BERRY
        }
    },
},

[TRAINER_MIGUEL_5] =
{
    MIGUEL_INFO,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = REMATCH_5_LEVEL_1,
        .species = SPECIES_DELCATTY,
        MIGUEL_SKITTY,
        .heldItem = ITEM_SITRUS_BERRY
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
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE, \
    .partySize = 2

#define EDWIN_LOMBRE               \
    .ability = ABILITY_SWIFT_SWIM, \
    .gender = TRAINER_MON_MALE

#define EDWIN_NUZLEAF               \
    .ability = ABILITY_CHLOROPHYLL, \
    .gender = TRAINER_MON_MALE

[TRAINER_EDWIN_1] =
{
    EDWIN_INFO,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 18,
        .species = SPECIES_LOMBRE,
        EDWIN_LOMBRE,
        },
        {
        .lvl = 18,
        .species = SPECIES_NUZLEAF,
        EDWIN_NUZLEAF,
        }
    },
},

[TRAINER_EDWIN_2] =
{
    EDWIN_INFO,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = REMATCH_2_LEVEL_2,
        .species = SPECIES_LOMBRE,
        EDWIN_LOMBRE,
        },
        {
        .lvl = REMATCH_2_LEVEL_2,
        .species = SPECIES_NUZLEAF,
        EDWIN_NUZLEAF,
        }
    },
},

[TRAINER_EDWIN_3] =
{
    EDWIN_INFO,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = REMATCH_3_LEVEL_2,
        .species = SPECIES_LOMBRE,
        EDWIN_LOMBRE,
        },
        {
        .lvl = REMATCH_3_LEVEL_2,
        .species = SPECIES_NUZLEAF,
        EDWIN_NUZLEAF,
        }
    },
},

[TRAINER_EDWIN_4] =
{
    EDWIN_INFO,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = REMATCH_4_LEVEL_2,
        .species = SPECIES_LOMBRE,
        EDWIN_LOMBRE,
        },
        {
        .lvl = REMATCH_4_LEVEL_2,
        .species = SPECIES_NUZLEAF,
        EDWIN_NUZLEAF,
        }
    },
},

[TRAINER_EDWIN_5] =
{
    EDWIN_INFO,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = REMATCH_5_LEVEL_2,
        .species = SPECIES_LUDICOLO,
        EDWIN_LOMBRE,
        },
        {
        .lvl = REMATCH_5_LEVEL_2,
        .species = SPECIES_SHIFTRY,
        EDWIN_NUZLEAF,
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
        TRIATHLETE_MON(19, MAGNEMITE, 0),
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
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON

#define DYLAN_DODUO(Level, Species, IV) \
    TRIATHLETE_MON(Level, Species, IV), \
    .ability = ABILITY_TANGLED_FEET,    \
    .gender = TRAINER_MON_MALE

[TRAINER_DYLAN_1] =
{
    DYLAN_INFO,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        DYLAN_DODUO(21, DODUO, 1),
        }
    },
},

[TRAINER_DYLAN_2] =
{
    DYLAN_INFO,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        DYLAN_DODUO(REMATCH_2_LEVEL_1, DODRIO, 2),
        }
    },
},

[TRAINER_DYLAN_3] =
{
    DYLAN_INFO,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        DYLAN_DODUO(REMATCH_3_LEVEL_1, DODRIO, 3),
        }
    },
},

[TRAINER_DYLAN_4] =
{
    DYLAN_INFO,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        DYLAN_DODUO(REMATCH_4_LEVEL_1, DODRIO, 4),
        }
    },
},

[TRAINER_DYLAN_5] =
{
    DYLAN_INFO,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        TRIATHLETE_MON(REMATCH_5_LEVEL_2, ELECTRODE, 5),
        },
        {
        TRIATHLETE_MON(REMATCH_5_LEVEL_2, SHARPEDO, 5),
        },
        {
        DYLAN_DODUO(REMATCH_5_MINIBOSS, DODRIO, 5),
        .moves = {MOVE_THRASH, MOVE_DRILL_PECK, MOVE_DRILL_RUN, MOVE_SWORDS_DANCE},
        }
    },
},

#define MARIA_INFO             \
    .trainerName = _("Maria"), \
    TRIATHLETE_F_RUNNING_INFO, \
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON
    
#define MARIA_DODUO(Level, Species, IV) \
    TRIATHLETE_MON(Level, Species, IV), \
    .ability = ABILITY_EARLY_BIRD,      \
    .gender = TRAINER_MON_FEMALE

[TRAINER_MARIA_1] =
{
    MARIA_INFO,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        MARIA_DODUO(21, DODUO, 1),
        }
    },
},

[TRAINER_MARIA_2] =
{
    MARIA_INFO,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        MARIA_DODUO(REMATCH_2_LEVEL_1, DODRIO, 2),
        }
    },
},

[TRAINER_MARIA_3] =
{
    MARIA_INFO,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        MARIA_DODUO(REMATCH_3_LEVEL_1, DODRIO, 3),
        }
    },
},

[TRAINER_MARIA_4] =
{
    MARIA_INFO,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        MARIA_DODUO(REMATCH_4_LEVEL_1, DODRIO, 4),
        }
    },
},

[TRAINER_MARIA_5] =
{
    MARIA_INFO,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        TRIATHLETE_MON(REMATCH_5_LEVEL_2, RAICHU, 5),
        },
        {
        TRIATHLETE_MON(REMATCH_5_LEVEL_2, STARMIE, 5),
        },
        {
        MARIA_DODUO(REMATCH_5_MINIBOSS, DODRIO, 5),
        .moves = {MOVE_BODY_SLAM, MOVE_DRILL_PECK, MOVE_DRILL_RUN, MOVE_REST},
        }
    },
},

#define ISAAC_INFO(Match, Level, Mon1, Mon2, Mon3, Mon4, Mon5, Mon6)                           \
[TRAINER_ISAAC_##Match]                                                                        \
{                                                                                              \
    .trainerName = _("Isaac"),                                                                 \
    POKEMON_BREEDER_M_INFO,                                                                    \
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,         \
    .party = (const struct TrainerMon[]) {                                                     \
        {                                                                                      \
        POKEMON_BREEDER_MON(Level, Mon1),                                                      \
        .ability = 2,                                                                          \
        .moves = {MOVE_SMELLING_SALTS, MOVE_EXTRASENSORY, MOVE_CIRCLE_THROW, MOVE_HAMMER_ARM}, \
        .gender = TRAINER_MON_MALE                                                             \
        },                                                                                     \
        {                                                                                      \
        POKEMON_BREEDER_MON(Level, Mon2),                                                      \
        .ability = ABILITY_QUICK_FEET,                                                         \
        .moves = {MOVE_EXTREME_SPEED, MOVE_MUD_SLAP, MOVE_SIMPLE_BEAM, MOVE_TICKLE},           \
        .gender = TRAINER_MON_MALE                                                             \
        },                                                                                     \
        {                                                                                      \
        POKEMON_BREEDER_MON(Level, Mon3),                                                      \
        .ability = ABILITY_SHEER_FORCE,                                                        \
        .moves = {MOVE_CROSS_CHOP, MOVE_BULLET_PUNCH, MOVE_FEINT_ATTACK, MOVE_CHIP_AWAY},      \
        .gender = TRAINER_MON_MALE                                                             \
        },                                                                                     \
        {                                                                                      \
        POKEMON_BREEDER_MON(Level, Mon4),                                                      \
        .ability = ABILITY_STRONG_JAW,                                                         \
        .moves = {MOVE_CRUNCH, MOVE_POISON_FANG, MOVE_THUNDER_FANG, MOVE_FIRE_FANG},           \
        .gender = TRAINER_MON_MALE                                                             \
        },                                                                                     \
        {                                                                                      \
        POKEMON_BREEDER_MON(Level, Mon5),                                                      \
        .ability = ABILITY_SCRAPPY,                                                            \
        .moves = {MOVE_BOOMBURST, MOVE_HURRICANE, MOVE_SKY_ATTACK, MOVE_ROOST},                \
        .gender = TRAINER_MON_MALE                                                             \
        },                                                                                     \
        {                                                                                      \
        POKEMON_BREEDER_MON(Level, Mon6),                                                      \
        .ability = ABILITY_ROCK_HEAD,                                                          \
        .moves = {MOVE_IRON_HEAD, MOVE_HEAD_SMASH, MOVE_DRAGON_RUSH, MOVE_CURSE},              \
        .gender = TRAINER_MON_MALE                                                             \
        },                                                                                     \
    },                                                                                         \
}

ISAAC_INFO(1, 16, WHISMUR, ZIGZAGOON, MAKUHITA, POOCHYENA, TAILLOW, ARON),
ISAAC_INFO(2, REMATCH_2_LEVEL_3, LOUDRED, LINOONE, MAKUHITA, MIGHTYENA, SWELLOW, ARON),
ISAAC_INFO(3, REMATCH_3_LEVEL_3, LOUDRED, LINOONE, HARIYAMA, MIGHTYENA, SWELLOW, LAIRON),
ISAAC_INFO(4, REMATCH_4_LEVEL_3, LOUDRED, LINOONE, HARIYAMA, MIGHTYENA, SWELLOW, LAIRON),
ISAAC_INFO(5, REMATCH_4_LEVEL_3, EXPLOUD, LINOONE, HARIYAMA, MIGHTYENA, SWELLOW, AGGRON),

#define LYDIA_INFO(Match, Level, Mon1, Mon2, Mon3, Mon4, Mon5, Mon6)                           \
[TRAINER_LYDIA_##Match]                                                                        \
{                                                                                              \
    .trainerName = _("Lydia"),                                                                 \
    POKEMON_BREEDER_F_INFO,                                                                    \
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,         \
    .party = (const struct TrainerMon[]) {                                                     \
        {                                                                                      \
        POKEMON_BREEDER_MON(Level, Mon1),                                                      \
        .ability = ABILITY_RAIN_DISH,                                                          \
        .moves = {MOVE_BRINE, MOVE_TWISTER, MOVE_KNOCK_OFF, MOVE_AQUA_RING},                   \
        .gender = TRAINER_MON_FEMALE                                                           \
        },                                                                                     \
        {                                                                                      \
        POKEMON_BREEDER_MON(Level, Mon2),                                                      \
        .ability = 2,                                                                          \
        .moves = {MOVE_BULLET_SEED, MOVE_SPORE, MOVE_FAKE_TEARS, MOVE_WORRY_SEED},             \
        .gender = TRAINER_MON_FEMALE                                                           \
        },                                                                                     \
        {                                                                                      \
        POKEMON_BREEDER_MON(Level, Mon3),                                                      \
        .ability = ABILITY_SAP_SIPPER,                                                         \
        .moves = {MOVE_AQUA_JET, MOVE_PRESENT, MOVE_PERISH_SONG, MOVE_BELLY_DRUM},             \
        .gender = TRAINER_MON_FEMALE                                                           \
        },                                                                                     \
        {                                                                                      \
        POKEMON_BREEDER_MON(Level, Mon4),                                                      \
        .ability = 2,                                                                          \
        .moves = {MOVE_RAZOR_LEAF, MOVE_PIN_MISSILE, MOVE_LIFE_DEW, MOVE_GRASS_WHISTLE},       \
        .gender = TRAINER_MON_FEMALE                                                           \
        },                                                                                     \
        {                                                                                      \
        POKEMON_BREEDER_MON(Level, Mon5),                                                      \
        .ability = ABILITY_WONDER_SKIN,                                                        \
        .moves = {MOVE_UPROAR, MOVE_SIMPLE_BEAM, MOVE_FAKE_TEARS, MOVE_COSMIC_POWER},          \
        .gender = TRAINER_MON_FEMALE                                                           \
        },                                                                                     \
        {                                                                                      \
        POKEMON_BREEDER_MON(Level, Mon6),                                                      \
        .ability = ABILITY_LIGHTNING_ROD,                                                      \
        .moves = {MOVE_AQUA_TAIL, MOVE_SKULL_BASH, MOVE_SIGNAL_BEAM, MOVE_MUD_SLAP},           \
        .gender = TRAINER_MON_FEMALE                                                           \
        },                                                                                     \
    },                                                                                         \
}

LYDIA_INFO(1, 16, WINGULL, SHROOMISH, AZURILL, BUDEW, SKITTY, GOLDEEN),
LYDIA_INFO(2, REMATCH_2_LEVEL_3, WINGULL, SHROOMISH, MARILL, ROSELIA, SKITTY, GOLDEEN),
LYDIA_INFO(3, REMATCH_3_LEVEL_3, PELIPPER, BRELOOM, AZUMARILL, ROSELIA, DELCATTY, GOLDEEN),
LYDIA_INFO(4, REMATCH_4_LEVEL_3, PELIPPER, BRELOOM, AZUMARILL, ROSELIA, DELCATTY, SEAKING),
LYDIA_INFO(5, REMATCH_4_LEVEL_3, PELIPPER, BRELOOM, AZUMARILL, ROSERADE, DELCATTY, SEAKING),

#define ANNA_AND_MEG_INFO                                                              \
    .trainerName = _("Anna & Meg"),                                                    \
    TEAMMATES_INFO,                                                                    \
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON, \
    .partySize = 2

#define ANNA_MAKUHITA             \
    .ability = ABILITY_THICK_FAT, \
    .gender = TRAINER_MON_FEMALE

#define MEG_ZIGZAGOON          \
    .ability = ABILITY_PICKUP, \
    .gender = TRAINER_MON_FEMALE

[TRAINER_ANNA_AND_MEG_1] =
{
    ANNA_AND_MEG_INFO,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 19,
        .species = SPECIES_ZIGZAGOON,
        .moves = {MOVE_HEADBUTT, MOVE_BABY_DOLL_EYES, MOVE_SAND_ATTACK, MOVE_ODOR_SLEUTH},
        MEG_ZIGZAGOON,
        },
        {
        .lvl = 21,
        .species = SPECIES_MAKUHITA,
        .moves = {MOVE_ARM_THRUST, MOVE_FOCUS_ENERGY, MOVE_FAKE_OUT, MOVE_WHIRLWIND},
        ANNA_MAKUHITA,
        }
    },
},

[TRAINER_ANNA_AND_MEG_2] =
{
    ANNA_AND_MEG_INFO,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = REMATCH_2_LEVEL_3,
        .species = SPECIES_LINOONE,
        IVS(2),
        .moves = {MOVE_SLASH, MOVE_TAIL_WHIP, MOVE_HONE_CLAWS, MOVE_ODOR_SLEUTH},
        MEG_ZIGZAGOON,
        },
        {
        .lvl = REMATCH_2_LEVEL_1,
        .species = SPECIES_HARIYAMA,
        IVS(2),
        .moves = {MOVE_VITAL_THROW, MOVE_BULK_UP, MOVE_SMELLING_SALTS, MOVE_DETECT},
        ANNA_MAKUHITA,
        }
    },
},

[TRAINER_ANNA_AND_MEG_3] =
{
    ANNA_AND_MEG_INFO,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = REMATCH_3_LEVEL_3,
        .species = SPECIES_LINOONE,
        IVS(3),
        .moves = {MOVE_SLASH, MOVE_TAIL_WHIP, MOVE_HONE_CLAWS, MOVE_ODOR_SLEUTH},
        MEG_ZIGZAGOON,
        },
        {
        .lvl = REMATCH_3_LEVEL_1,
        .species = SPECIES_HARIYAMA,
        IVS(3),
        .moves = {MOVE_WAKE_UP_SLAP, MOVE_BELLY_DRUM, MOVE_FAKE_OUT, MOVE_DETECT},
        ANNA_MAKUHITA,
        }
    },
},

[TRAINER_ANNA_AND_MEG_4] =
{
    ANNA_AND_MEG_INFO,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = REMATCH_4_LEVEL_3,
        .species = SPECIES_LINOONE,
        IVS(4),
        .moves = {MOVE_SLASH, MOVE_TAIL_WHIP, MOVE_HONE_CLAWS, MOVE_ODOR_SLEUTH},
        MEG_ZIGZAGOON,
        },
        {
        .lvl = REMATCH_4_LEVEL_1,
        .species = SPECIES_HARIYAMA,
        IVS(4),
        .moves = {MOVE_WAKE_UP_SLAP, MOVE_BELLY_DRUM, MOVE_FAKE_OUT, MOVE_DETECT},
        ANNA_MAKUHITA,
        }
    },
},

[TRAINER_ANNA_AND_MEG_5] =
{
    ANNA_AND_MEG_INFO,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = REMATCH_5_LEVEL_3,
        .species = SPECIES_LINOONE,
        IVS(5),
        .moves = {MOVE_SLASH, MOVE_TAIL_WHIP, MOVE_HONE_CLAWS, MOVE_ODOR_SLEUTH},
        MEG_ZIGZAGOON,
        },
        {
        .lvl = REMATCH_5_LEVEL_1,
        .species = SPECIES_HARIYAMA,
        IVS(5),
        .moves = {MOVE_WAKE_UP_SLAP, MOVE_BELLY_DRUM, MOVE_FAKE_OUT, MOVE_DETECT},
        ANNA_MAKUHITA,
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
        .lvl = 20,
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

[TRAINER_VIVIAN] =
{
    .trainerName = _("Vivian"),
    BEAUTY_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 20,
        .species = SPECIES_MINUN,
        IVS(12),
        .moves = {MOVE_SHOCK_WAVE, MOVE_SWIFT, MOVE_NUZZLE, MOVE_ENCORE}
        },
        {
        .lvl = 20,
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
        .lvl = 20,
        .species = SPECIES_ELECTRIKE,
        IVS(12),
        .moves = {MOVE_SHOCK_WAVE, MOVE_THUNDER_WAVE, MOVE_QUICK_ATTACK, MOVE_LEER}
        },
        {
        .lvl = 20,
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
        .lvl = 20,
        .species = SPECIES_PICHU,
        IVS(18),
        .moves = {MOVE_SHOCK_WAVE, MOVE_NASTY_PLOT, MOVE_NUZZLE, MOVE_SWEET_KISS}
        },
        {
        .lvl = 20,
        .species = SPECIES_ELECTRIKE,
        IVS(18),
        .moves = {MOVE_SHOCK_WAVE, MOVE_QUICK_ATTACK, MOVE_THUNDER_WAVE, MOVE_HOWL}
        }
    },
},

[TRAINER_ANGELO] =
{
    .trainerName = _("Angelo"),
    TRAINER_CLASS_PIC(POKEMANIAC),
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 20,
        .species = SPECIES_CHINCHOU,
        IVS(12),
        .moves = {MOVE_SHOCK_WAVE, MOVE_BUBBLE_BEAM, MOVE_THUNDER_WAVE, MOVE_CONFUSE_RAY}
        },
        {
        .lvl = 20,
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
        .lvl = 20,
        .species = SPECIES_MAGNEMITE,
        IVS(12),
        },
        {
        .lvl = 20,
        .species = SPECIES_ELECTRIKE,
        IVS(12),
        }
    },
},




[TRAINER_SAWYER_1] =
{
    .trainerName = _("Sawyer"),
    HIKER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 26,
        .species = SPECIES_GEODUDE,
        }
    },
},

[TRAINER_SAWYER_2] =
{
    .trainerName = _("Sawyer"),
    HIKER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 34,
        .species = SPECIES_NUMEL,
        IVS(1),
        },
        {
        .lvl = 34,
        .species = SPECIES_GEODUDE,
        IVS(1),
        }
    },
},

[TRAINER_SAWYER_3] =
{
    .trainerName = _("Sawyer"),
    HIKER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = REMATCH_3_LEVEL_3,
        .species = SPECIES_MACHOKE,
        IVS(3),
        },
        {
        .lvl = REMATCH_3_LEVEL_3,
        .species = SPECIES_CAMERUPT,
        IVS(3),
        },
        {
        .lvl = REMATCH_3_LEVEL_3,
        .species = SPECIES_GRAVELER,
        IVS(3),
        }
    },
},

[TRAINER_SAWYER_4] =
{
    .trainerName = _("Sawyer"),
    HIKER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 40,
        .species = SPECIES_MACHOKE,
        IVS(3),
        },
        {
        .lvl = 40,
        .species = SPECIES_CAMERUPT,
        IVS(3),
        },
        {
        .lvl = 40,
        .species = SPECIES_GOLEM,
        IVS(3),
        }
    },
},

[TRAINER_SAWYER_5] =
{
    .trainerName = _("Sawyer"),
    HIKER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 42,
        .species = SPECIES_MACHAMP,
        IVS(4),
        },
        {
        .lvl = 42,
        .species = SPECIES_CAMERUPT,
        IVS(4),
        },
        {
        .lvl = 42,
        .species = SPECIES_GOLEM,
        IVS(4),
        }
    },
},

#define GABRIELLE_INFO             \
    .trainerName = _("Gabrielle"), \
    POKEMON_BREEDER_F_INFO,        \
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE

[TRAINER_GABRIELLE_1] =
{
    GABRIELLE_INFO,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 31,
        .species = SPECIES_SKITTY,
        },
        {
        .lvl = 31,
        .species = SPECIES_POOCHYENA,
        },
        {
        .lvl = 31,
        .species = SPECIES_ZIGZAGOON,
        },
        {
        .lvl = 31,
        .species = SPECIES_LOTAD,
        },
        {
        .lvl = 31,
        .species = SPECIES_SEEDOT,
        },
        {
        .lvl = 31,
        .species = SPECIES_TAILLOW,
        }
    },
},

[TRAINER_GABRIELLE_2] =
{
    GABRIELLE_INFO,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 34,
        .species = SPECIES_SKITTY,
        IVS(1),
        },
        {
        .lvl = 34,
        .species = SPECIES_MIGHTYENA,
        IVS(1),
        },
        {
        .lvl = 34,
        .species = SPECIES_ZIGZAGOON,
        IVS(1),
        },
        {
        .lvl = 34,
        .species = SPECIES_LOTAD,
        IVS(1),
        },
        {
        .lvl = 34,
        .species = SPECIES_SEEDOT,
        IVS(1),
        },
        {
        .lvl = 34,
        .species = SPECIES_TAILLOW,
        IVS(1),
        }
    },
},

[TRAINER_GABRIELLE_3] =
{
    GABRIELLE_INFO,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = REMATCH_3_LEVEL_6,
        .species = SPECIES_SKITTY,
        IVS(3),
        },
        {
        .lvl = REMATCH_3_LEVEL_6,
        .species = SPECIES_MIGHTYENA,
        IVS(3),
        },
        {
        .lvl = REMATCH_3_LEVEL_6,
        .species = SPECIES_LINOONE,
        IVS(3),
        },
        {
        .lvl = REMATCH_3_LEVEL_6,
        .species = SPECIES_LOMBRE,
        IVS(3),
        },
        {
        .lvl = REMATCH_3_LEVEL_6,
        .species = SPECIES_NUZLEAF,
        IVS(3),
        },
        {
        .lvl = REMATCH_3_LEVEL_6,
        .species = SPECIES_TAILLOW,
        IVS(3),
        }
    },
},

[TRAINER_GABRIELLE_4] =
{
    GABRIELLE_INFO,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 38,
        .species = SPECIES_DELCATTY,
        IVS(3),
        },
        {
        .lvl = 38,
        .species = SPECIES_MIGHTYENA,
        IVS(3),
        },
        {
        .lvl = 38,
        .species = SPECIES_LINOONE,
        IVS(3),
        },
        {
        .lvl = 38,
        .species = SPECIES_LOMBRE,
        IVS(3),
        },
        {
        .lvl = 38,
        .species = SPECIES_NUZLEAF,
        IVS(3),
        },
        {
        .lvl = 38,
        .species = SPECIES_SWELLOW,
        IVS(3),
        }
    },
},

[TRAINER_GABRIELLE_5] =
{
    GABRIELLE_INFO,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 40,
        .species = SPECIES_DELCATTY,
        IVS(4),
        },
        {
        .lvl = 40,
        .species = SPECIES_MIGHTYENA,
        IVS(4),
        },
        {
        .lvl = 40,
        .species = SPECIES_LINOONE,
        IVS(4),
        },
        {
        .lvl = 40,
        .species = SPECIES_LUDICOLO,
        IVS(4),
        },
        {
        .lvl = 40,
        .species = SPECIES_SHIFTRY,
        IVS(4),
        },
        {
        .lvl = 40,
        .species = SPECIES_SWELLOW,
        IVS(4),
        }
    },
},

[TRAINER_MARCEL] =
{
    .trainerName = _("Marcel"),
    .trainerClass = TRAINER_CLASS_COOLTRAINER,
    .trainerPic = TRAINER_PIC_COOLTRAINER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
    .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 33,
        .species = SPECIES_MANECTRIC,
        IVS(12),
        },
        {
        .lvl = 33,
        .species = SPECIES_SHIFTRY,
        IVS(12),
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

[TRAINER_DECLAN] =
{
    .trainerName = _("Declan"),
    .trainerClass = TRAINER_CLASS_SWIMMER,
    .trainerPic = TRAINER_PIC_SWIMMER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 38,
        .species = SPECIES_GYARADOS,
        }
    },
},

[TRAINER_FREDRICK] =
{
    .trainerName = _("Fredrick"),
    .trainerClass = TRAINER_CLASS_EXPERT,
    .trainerPic = TRAINER_PIC_EXPERT_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
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

[TRAINER_ZANDER] =
{
    .trainerName = _("Zander"),
    BLACK_BELT_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 36,
        .species = SPECIES_HARIYAMA,
        }
    },
},

[TRAINER_ARCHIE] =
{
    .trainerName = _("Archie"),
    .trainerClass = TRAINER_CLASS_AQUA_LEADER,
    .trainerPic = TRAINER_PIC_AQUA_LEADER_ARCHIE,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
    .items = {ITEM_SUPER_POTION, ITEM_SUPER_POTION, ITEM_NONE, ITEM_NONE},
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
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
        IVS(18),
        }
    },
},

[TRAINER_LEAH] =
{
    .trainerName = _("Leah"),
    TRAINER_CLASS_PIC(HEX_MANIAC),
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 36,
        .species = SPECIES_SPOINK,
        }
    },
},

[TRAINER_FELIX] =
{
    .trainerName = _("Felix"),
    .trainerClass = TRAINER_CLASS_COOLTRAINER,
    .trainerPic = TRAINER_PIC_COOLTRAINER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
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

[TRAINER_VIOLET] =
{
    .trainerName = _("Violet"),
    AROMA_LADY_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 29,
        .species = SPECIES_ROSELIA,
        },
        {
        .lvl = 29,
        .species = SPECIES_GLOOM,
        }
    },
},

[TRAINER_ROSE_1] =
{
    .trainerName = _("Rose"),
    AROMA_LADY_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 18,
        .species = SPECIES_SHROOMISH,
        },
        {
        .lvl = 18,
        .species = SPECIES_ODDISH,
        },
        {
        .lvl = 18,
        .species = SPECIES_BUDEW,
        }
    },
},

[TRAINER_ROSE_2] =
{
    .trainerName = _("Rose"),
    AROMA_LADY_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 33,
        .species = SPECIES_SHROOMISH,
        IVS(1),
        },
        {
        .lvl = 33,
        .species = SPECIES_GLOOM,
        IVS(1),
        },
        {
        .lvl = 33,
        .species = SPECIES_ROSELIA,
        IVS(1),
        }
    },
},

[TRAINER_ROSE_3] =
{
    .trainerName = _("Rose"),
    AROMA_LADY_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = REMATCH_3_LEVEL_3,
        .species = SPECIES_BRELOOM,
        IVS(3),
        },
        {
        .lvl = REMATCH_3_LEVEL_3,
        .species = SPECIES_BELLOSSOM,
        IVS(3),
        },
        {
        .lvl = REMATCH_3_LEVEL_3,
        .species = SPECIES_ROSELIA,
        IVS(3),
        }
    },
},

[TRAINER_ROSE_4] =
{
    .trainerName = _("Rose"),
    AROMA_LADY_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 36,
        .species = SPECIES_BRELOOM,
        IVS(3),
        },
        {
        .lvl = 36,
        .species = SPECIES_BELLOSSOM,
        IVS(3),
        },
        {
        .lvl = 36,
        .species = SPECIES_ROSERADE,
        IVS(3),
        }
    },
},

[TRAINER_ROSE_5] =
{
    .trainerName = _("Rose"),
    AROMA_LADY_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 4,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 40,
        .species = SPECIES_TROPIUS,
        IVS(4),
        },
        {
        .lvl = 40,
        .species = SPECIES_BRELOOM,
        IVS(4),
        },
        {
        .lvl = 40,
        .species = SPECIES_BELLOSSOM,
        IVS(4),
        },
        {
        .lvl = 40,
        .species = SPECIES_ROSERADE,
        IVS(4),
        }
    },
},

[TRAINER_CHIP] =
{
    .trainerName = _("Chip"),
    TRAINER_CLASS_PIC(RUIN_MANIAC),
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 31,
        .species = SPECIES_BALTOY,
        IVS(6),
        .moves = {MOVE_PSYBEAM, MOVE_SELF_DESTRUCT, MOVE_SANDSTORM, MOVE_ANCIENT_POWER}
        },
        {
        .lvl = 31,
        .species = SPECIES_SANDSHREW,
        IVS(6),
        .moves = {MOVE_DIG, MOVE_SLASH, MOVE_SAND_ATTACK, MOVE_POISON_STING}
        },
        {
        .lvl = 31,
        .species = SPECIES_SANDSLASH,
        IVS(6),
        .moves = {MOVE_DIG, MOVE_SLASH, MOVE_SAND_ATTACK, MOVE_POISON_STING}
        }
    },
},

[TRAINER_FOSTER] =
{
    .trainerName = _("Foster"),
    TRAINER_CLASS_PIC(RUIN_MANIAC),
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 29,
        .species = SPECIES_NOSEPASS,
        IVS(12),
        .moves = {MOVE_POWER_GEM, MOVE_SPARK, MOVE_THUNDER_WAVE, MOVE_HARDEN}
        },
        {
        .lvl = 29,
        .species = SPECIES_SANDSLASH,
        IVS(12),
        .moves = {MOVE_BULLDOZE, MOVE_CRUSH_CLAW, MOVE_SAND_ATTACK, MOVE_FURY_SWIPES}
        }
    },
},

[TRAINER_DUSTY_1] =
{
    .trainerName = _("Dusty"),
    TRAINER_CLASS_PIC(RUIN_MANIAC),
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 26,
        .species = SPECIES_SANDSLASH,
        IVS(6),
        .moves = {MOVE_BULLDOZE, MOVE_CRUSH_CLAW, MOVE_SAND_ATTACK, MOVE_RAPID_SPIN}
        },
        {
        .lvl = 26,
        .species = SPECIES_BALTOY,
        IVS(6),
        .moves = {MOVE_PSYBEAM, MOVE_ANCIENT_POWER, MOVE_RAPID_SPIN, MOVE_COSMIC_POWER}
        }
    },
},

[TRAINER_DUSTY_2] =
{
    .trainerName = _("Dusty"),
    TRAINER_CLASS_PIC(RUIN_MANIAC),
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 34,
        .species = SPECIES_SANDSLASH,
        IVS(7),
        .moves = {MOVE_BULLDOZE, MOVE_CRUSH_CLAW, MOVE_SAND_TOMB, MOVE_RAPID_SPIN}
        },
        {
        .lvl = 34,
        .species = SPECIES_BALTOY,
        IVS(7),
        .moves = {MOVE_EARTH_POWER, MOVE_PSYBEAM, MOVE_ANCIENT_POWER, MOVE_COSMIC_POWER}
        }
    },
},

[TRAINER_DUSTY_3] =
{
    .trainerName = _("Dusty"),
    TRAINER_CLASS_PIC(RUIN_MANIAC),
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = REMATCH_3_LEVEL_2,
        .species = SPECIES_SANDSLASH,
        IVS(3),
        .moves = {MOVE_BULLDOZE, MOVE_CRUSH_CLAW, MOVE_SAND_TOMB, MOVE_RAPID_SPIN}
        },
        {
        .lvl = REMATCH_3_LEVEL_2,
        .species = SPECIES_CLAYDOL,
        IVS(3),
        .moves = {MOVE_EARTH_POWER, MOVE_PSYBEAM, MOVE_ANCIENT_POWER, MOVE_COSMIC_POWER}
        }
    },
},

[TRAINER_DUSTY_4] =
{
    .trainerName = _("Dusty"),
    TRAINER_CLASS_PIC(RUIN_MANIAC),
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 42,
        .species = SPECIES_SANDSLASH,
        IVS(9),
        .moves = {MOVE_BULLDOZE, MOVE_CRUSH_CLAW, MOVE_SAND_TOMB, MOVE_RAPID_SPIN}
        },
        {
        .lvl = 42,
        .species = SPECIES_CLAYDOL,
        IVS(9),
        .moves = {MOVE_EARTH_POWER, MOVE_PSYBEAM, MOVE_ANCIENT_POWER, MOVE_COSMIC_POWER}
        }
    },
},

[TRAINER_DUSTY_5] =
{
    .trainerName = _("Dusty"),
    TRAINER_CLASS_PIC(RUIN_MANIAC),
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 46,
        .species = SPECIES_RELICANTH,
        IVS(10),
        .moves = {MOVE_AQUA_TAIL, MOVE_ROCK_TOMB, MOVE_TAKE_DOWN, MOVE_YAWN}
        },
        {
        .lvl = 46,
        .species = SPECIES_SANDSLASH,
        IVS(10),
        .moves = {MOVE_BULLDOZE, MOVE_CRUSH_CLAW, MOVE_SAND_TOMB, MOVE_RAPID_SPIN}
        },
        {
        .lvl = 46,
        .species = SPECIES_CLAYDOL,
        IVS(10),
        .moves = {MOVE_EARTH_POWER, MOVE_PSYBEAM, MOVE_ANCIENT_POWER, MOVE_COSMIC_POWER}
        }
    },
},

[TRAINER_AUSTINA] =
{
    .trainerName = _("Austina"),
    TUBER_F_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 30,
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
        .lvl = 30,
        .species = SPECIES_SPHEAL,
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
        .lvl = 30,
        .species = SPECIES_WAILMER,
        }
    },
},

[TRAINER_RANDALL] =
{
    .trainerName = _("Randall"),
    .trainerClass = TRAINER_CLASS_COOLTRAINER,
    .trainerPic = TRAINER_PIC_COOLTRAINER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
    .items = {ITEM_X_SPEED, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 28,
        .species = SPECIES_SWELLOW,
        PERFECT_IVS,
        .heldItem = ITEM_SALAC_BERRY,
        .moves = {MOVE_QUICK_ATTACK, MOVE_AGILITY, MOVE_WING_ATTACK, MOVE_NONE}
        }
    },
},

[TRAINER_PARKER] =
{
    .trainerName = _("Parker"),
    .trainerClass = TRAINER_CLASS_COOLTRAINER,
    .trainerPic = TRAINER_PIC_COOLTRAINER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
    .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 28,
        .species = SPECIES_SPINDA,
        PERFECT_IVS,
        .moves = {MOVE_TEETER_DANCE, MOVE_DIZZY_PUNCH, MOVE_PSYBEAM, MOVE_NONE}
        }
    },
},

[TRAINER_GEORGE] =
{
    .trainerName = _("George"),
    .trainerClass = TRAINER_CLASS_COOLTRAINER,
    .trainerPic = TRAINER_PIC_COOLTRAINER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
    .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 28,
        .species = SPECIES_VIGOROTH,
        PERFECT_IVS,
        .heldItem = ITEM_SITRUS_BERRY,
        .moves = {MOVE_SLACK_OFF, MOVE_DRAIN_PUNCH, MOVE_ENDURE, MOVE_NONE}
        }
    },
},

[TRAINER_BERKE] =
{
    .trainerName = _("Berke"),
    .trainerClass = TRAINER_CLASS_COOLTRAINER,
    .trainerPic = TRAINER_PIC_COOLTRAINER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
    .items = {ITEM_DIRE_HIT, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 28,
        .species = SPECIES_LINOONE,
        PERFECT_IVS,
        .heldItem = ITEM_SCOPE_LENS,
        .moves = {MOVE_SLASH, MOVE_NONE, MOVE_NONE, MOVE_NONE}
        }
    },
},

[TRAINER_BRAXTON] =
{
    .trainerName = _("Braxton"),
    .trainerClass = TRAINER_CLASS_COOLTRAINER,
    .trainerPic = TRAINER_PIC_COOLTRAINER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
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

[TRAINER_VINCENT] =
{
    .trainerName = _("Vincent"),
    .trainerClass = TRAINER_CLASS_COOLTRAINER,
    .trainerPic = TRAINER_PIC_COOLTRAINER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
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
    .trainerClass = TRAINER_CLASS_COOLTRAINER,
    .trainerPic = TRAINER_PIC_COOLTRAINER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
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

[TRAINER_EDGAR] =
{
    .trainerName = _("Edgar"),
    .trainerClass = TRAINER_CLASS_COOLTRAINER,
    .trainerPic = TRAINER_PIC_COOLTRAINER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
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

[TRAINER_ALBERT] =
{
    .trainerName = _("Albert"),
    .trainerClass = TRAINER_CLASS_COOLTRAINER,
    .trainerPic = TRAINER_PIC_COOLTRAINER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
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

[TRAINER_SAMUEL] =
{
    .trainerName = _("Samuel"),
    .trainerClass = TRAINER_CLASS_COOLTRAINER,
    .trainerPic = TRAINER_PIC_COOLTRAINER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
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

[TRAINER_VITO] =
{
    .trainerName = _("Vito"),
    .trainerClass = TRAINER_CLASS_WINSTRATE,
    .trainerPic = TRAINER_PIC_COOLTRAINER_M,
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

[TRAINER_OWEN] =
{
    .trainerName = _("Owen"),
    .trainerClass = TRAINER_CLASS_COOLTRAINER,
    .trainerPic = TRAINER_PIC_COOLTRAINER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
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

[TRAINER_WILTON_1] =
{
    .trainerName = _("Wilton"),
    .trainerClass = TRAINER_CLASS_COOLTRAINER,
    .trainerPic = TRAINER_PIC_COOLTRAINER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
    .items = {ITEM_SUPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 22,
        .species = SPECIES_ELECTRIKE,
        IVS(12),
        },
        {
        .lvl = 22,
        .species = SPECIES_WAILMER,
        IVS(12),
        },
        {
        .lvl = 22,
        .species = SPECIES_MAKUHITA,
        IVS(12),
        }
    },
},

[TRAINER_WILTON_2] =
{
    .trainerName = _("Wilton"),
    .trainerClass = TRAINER_CLASS_COOLTRAINER,
    .trainerPic = TRAINER_PIC_COOLTRAINER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
    .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 33,
        .species = SPECIES_MANECTRIC,
        IVS(13),
        },
        {
        .lvl = 33,
        .species = SPECIES_WAILMER,
        IVS(13),
        },
        {
        .lvl = 33,
        .species = SPECIES_HARIYAMA,
        IVS(13),
        }
    },
},

[TRAINER_WILTON_3] =
{
    .trainerName = _("Wilton"),
    .trainerClass = TRAINER_CLASS_COOLTRAINER,
    .trainerPic = TRAINER_PIC_COOLTRAINER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
    .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = REMATCH_3_LEVEL_3,
        .species = SPECIES_MANECTRIC,
        IVS(14),
        },
        {
        .lvl = REMATCH_3_LEVEL_3,
        .species = SPECIES_WAILMER,
        IVS(14),
        },
        {
        .lvl = REMATCH_3_LEVEL_3,
        .species = SPECIES_HARIYAMA,
        IVS(14),
        }
    },
},

[TRAINER_WILTON_4] =
{
    .trainerName = _("Wilton"),
    .trainerClass = TRAINER_CLASS_COOLTRAINER,
    .trainerPic = TRAINER_PIC_COOLTRAINER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
    .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 38,
        .species = SPECIES_MANECTRIC,
        IVS(15),
        },
        {
        .lvl = 38,
        .species = SPECIES_WAILMER,
        IVS(15),
        },
        {
        .lvl = 38,
        .species = SPECIES_HARIYAMA,
        IVS(15),
        }
    },
},

[TRAINER_WILTON_5] =
{
    .trainerName = _("Wilton"),
    .trainerClass = TRAINER_CLASS_COOLTRAINER,
    .trainerPic = TRAINER_PIC_COOLTRAINER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
    .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 42,
        .species = SPECIES_MANECTRIC,
        IVS(17),
        },
        {
        .lvl = 42,
        .species = SPECIES_WAILORD,
        IVS(17),
        },
        {
        .lvl = 42,
        .species = SPECIES_HARIYAMA,
        IVS(17),
        }
    },
},

[TRAINER_WARREN] =
{
    .trainerName = _("Warren"),
    .trainerClass = TRAINER_CLASS_COOLTRAINER,
    .trainerPic = TRAINER_PIC_COOLTRAINER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
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

[TRAINER_MARY] =
{
    .trainerName = _("Mary"),
    .trainerClass = TRAINER_CLASS_COOLTRAINER,
    .trainerPic = TRAINER_PIC_COOLTRAINER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
    .items = {ITEM_X_ACCURACY, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 28,
        .species = SPECIES_DELCATTY,
        PERFECT_IVS,
        .heldItem = ITEM_MICLE_BERRY,
        .moves = {MOVE_SWIFT, MOVE_SHOCK_WAVE, MOVE_FEINT_ATTACK, MOVE_NONE}
        }
    },
},

[TRAINER_ALEXIA] =
{
    .trainerName = _("Alexia"),
    .trainerClass = TRAINER_CLASS_COOLTRAINER,
    .trainerPic = TRAINER_PIC_COOLTRAINER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
    .items = {ITEM_X_DEFENSE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 28,
        .species = SPECIES_WIGGLYTUFF,
        PERFECT_IVS,
        .heldItem = ITEM_GANLON_BERRY,
        .moves = {MOVE_DEFENSE_CURL, MOVE_FACADE, MOVE_BODY_PRESS, MOVE_NONE}
        }
    },
},

[TRAINER_JODY] =
{
    .trainerName = _("Jody"),
    .trainerClass = TRAINER_CLASS_COOLTRAINER,
    .trainerPic = TRAINER_PIC_COOLTRAINER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
    .items = {ITEM_X_ATTACK, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_SETUP_FIRST_TURN,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 28,
        .species = SPECIES_ZANGOOSE,
        PERFECT_IVS,
        .heldItem = ITEM_LIECHI_BERRY,
        .moves = {MOVE_SWORDS_DANCE, MOVE_CRUSH_CLAW, MOVE_NONE, MOVE_NONE}
        }
    },
},

[TRAINER_WENDY] =
{
    .trainerName = _("Wendy"),
    .trainerClass = TRAINER_CLASS_COOLTRAINER,
    .trainerPic = TRAINER_PIC_COOLTRAINER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
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

[TRAINER_KEIRA] =
{
    .trainerName = _("Keira"),
    .trainerClass = TRAINER_CLASS_COOLTRAINER,
    .trainerPic = TRAINER_PIC_COOLTRAINER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
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

[TRAINER_JENNIFER] =
{
    .trainerName = _("Jennifer"),
    .trainerClass = TRAINER_CLASS_COOLTRAINER,
    .trainerPic = TRAINER_PIC_COOLTRAINER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
    .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 33,
        .species = SPECIES_SABLEYE,
        IVS(24),
        }
    },
},

[TRAINER_HOPE] =
{
    .trainerName = _("Hope"),
    .trainerClass = TRAINER_CLASS_COOLTRAINER,
    .trainerPic = TRAINER_PIC_COOLTRAINER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
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
    .trainerClass = TRAINER_CLASS_COOLTRAINER,
    .trainerPic = TRAINER_PIC_COOLTRAINER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
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

[TRAINER_MICHELLE] =
{
    .trainerName = _("Michelle"),
    .trainerClass = TRAINER_CLASS_COOLTRAINER,
    .trainerPic = TRAINER_PIC_COOLTRAINER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
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

[TRAINER_CAROLINE] =
{
    .trainerName = _("Caroline"),
    .trainerClass = TRAINER_CLASS_COOLTRAINER,
    .trainerPic = TRAINER_PIC_COOLTRAINER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
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

[TRAINER_JULIE] =
{
    .trainerName = _("Julie"),
    .trainerClass = TRAINER_CLASS_COOLTRAINER,
    .trainerPic = TRAINER_PIC_COOLTRAINER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
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

[TRAINER_BROOKE_1] =
{
    .trainerName = _("Brooke"),
    .trainerClass = TRAINER_CLASS_COOLTRAINER,
    .trainerPic = TRAINER_PIC_COOLTRAINER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
    .items = {ITEM_SUPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 22,
        .species = SPECIES_WINGULL,
        IVS(12),
        },
        {
        .lvl = 22,
        .species = SPECIES_NUMEL,
        IVS(12),
        },
        {
        .lvl = 22,
        .species = SPECIES_ROSELIA,
        IVS(12),
        }
    },
},

[TRAINER_BROOKE_2] =
{
    .trainerName = _("Brooke"),
    .trainerClass = TRAINER_CLASS_COOLTRAINER,
    .trainerPic = TRAINER_PIC_COOLTRAINER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
    .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 33,
        .species = SPECIES_PELIPPER,
        IVS(13),
        },
        {
        .lvl = 33,
        .species = SPECIES_NUMEL,
        IVS(13),
        },
        {
        .lvl = 33,
        .species = SPECIES_ROSELIA,
        IVS(13),
        }
    },
},

[TRAINER_BROOKE_3] =
{
    .trainerName = _("Brooke"),
    .trainerClass = TRAINER_CLASS_COOLTRAINER,
    .trainerPic = TRAINER_PIC_COOLTRAINER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
    .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = REMATCH_3_LEVEL_3,
        .species = SPECIES_PELIPPER,
        IVS(14),
        },
        {
        .lvl = REMATCH_3_LEVEL_3,
        .species = SPECIES_CAMERUPT,
        IVS(14),
        },
        {
        .lvl = REMATCH_3_LEVEL_3,
        .species = SPECIES_ROSELIA,
        IVS(14),
        }
    },
},

[TRAINER_BROOKE_4] =
{
    .trainerName = _("Brooke"),
    .trainerClass = TRAINER_CLASS_COOLTRAINER,
    .trainerPic = TRAINER_PIC_COOLTRAINER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
    .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 38,
        .species = SPECIES_PELIPPER,
        IVS(15),
        },
        {
        .lvl = 38,
        .species = SPECIES_CAMERUPT,
        IVS(15),
        },
        {
        .lvl = 38,
        .species = SPECIES_ROSELIA,
        IVS(15),
        }
    },
},

[TRAINER_BROOKE_5] =
{
    .trainerName = _("Brooke"),
    .trainerClass = TRAINER_CLASS_COOLTRAINER,
    .trainerPic = TRAINER_PIC_COOLTRAINER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
    .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 42,
        .species = SPECIES_PELIPPER,
        IVS(17),
        },
        {
        .lvl = 42,
        .species = SPECIES_CAMERUPT,
        IVS(17),
        },
        {
        .lvl = 42,
        .species = SPECIES_ROSERADE,
        IVS(17),
        }
    },
},

[TRAINER_PATRICIA] =
{
    .trainerName = _("Patricia"),
    TRAINER_CLASS_PIC(HEX_MANIAC),
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
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

[TRAINER_KINDRA] =
{
    .trainerName = _("Kindra"),
    TRAINER_CLASS_PIC(HEX_MANIAC),
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
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

[TRAINER_TAMMY] =
{
    .trainerName = _("Tammy"),
    TRAINER_CLASS_PIC(HEX_MANIAC),
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 33,
        .species = SPECIES_DUSKULL,
        },
        {
        .lvl = 33,
        .species = SPECIES_SHUPPET,
        }
    },
},

[TRAINER_TASHA] =
{
    .trainerName = _("Tasha"),
    TRAINER_CLASS_PIC(HEX_MANIAC),
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 36,
        .species = SPECIES_SHUPPET,
        IVS(6),
        }
    },
},

[TRAINER_VALERIE_1] =
{
    .trainerName = _("Valerie"),
    TRAINER_CLASS_PIC(HEX_MANIAC),
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 36,
        .species = SPECIES_SABLEYE,
        }
    },
},

[TRAINER_VALERIE_2] =
{
    .trainerName = _("Valerie"),
    TRAINER_CLASS_PIC(HEX_MANIAC),
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 38,
        .species = SPECIES_DUSKULL,
        IVS(1),
        },
        {
        .lvl = 38,
        .species = SPECIES_SHUPPET,
        IVS(1),
        },
        {
        .lvl = 38,
        .species = SPECIES_SABLEYE,
        IVS(1),
        }
    },
},

[TRAINER_VALERIE_3] =
{
    .trainerName = _("Valerie"),
    TRAINER_CLASS_PIC(HEX_MANIAC),
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = REMATCH_3_LEVEL_3,
        .species = SPECIES_DUSCLOPS,
        IVS(3),
        },
        {
        .lvl = REMATCH_3_LEVEL_3,
        .species = SPECIES_BANETTE,
        IVS(3),
        },
        {
        .lvl = REMATCH_3_LEVEL_3,
        .species = SPECIES_SABLEYE,
        IVS(3),
        }
    },
},

[TRAINER_VALERIE_4] =
{
    .trainerName = _("Valerie"),
    TRAINER_CLASS_PIC(HEX_MANIAC),
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 42,
        .species = SPECIES_DUSCLOPS,
        IVS(3),
        },
        {
        .lvl = 42,
        .species = SPECIES_BANETTE,
        IVS(3),
        },
        {
        .lvl = 42,
        .species = SPECIES_SABLEYE,
        IVS(3),
        }
    },
},

[TRAINER_VALERIE_5] =
{
    .trainerName = _("Valerie"),
    TRAINER_CLASS_PIC(HEX_MANIAC),
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 44,
        .species = SPECIES_DUSKNOIR,
        IVS(4),
        },
        {
        .lvl = 44,
        .species = SPECIES_BANETTE,
        IVS(4),
        },
        {
        .lvl = 44,
        .species = SPECIES_SABLEYE,
        IVS(4),
        }
    },
},

[TRAINER_DAPHNE] =
{
    .trainerName = _("Daphne"),
    LADY_INFO,
    .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        RICH_MON(43, CORSOLA),
        IVS(12),
        .moves = {MOVE_WATER_PULSE, MOVE_ATTRACT, MOVE_POWER_GEM, MOVE_LIFE_DEW}
        },
        {
        RICH_MON(43, LUVDISC),
        IVS(12),
        .moves = {MOVE_WATER_PULSE, MOVE_ATTRACT, MOVE_CAPTIVATE, MOVE_AQUA_RING}
        }
    },
},

[TRAINER_BRIANNA] =
{
    .trainerName = _("Brianna"),
    LADY_INFO,
    .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        RICH_MON(44, MARSHTOMP),
        IVS(18),
        }
    },
},

[TRAINER_NAOMI] =
{
    .trainerName = _("Naomi"),
    LADY_INFO,
    .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        RICH_MON(60, ROSERADE),
        IVS(12),
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
        .lvl = 26,
        .species = SPECIES_MARILL,
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
        .lvl = 26,
        .species = SPECIES_SHROOMISH,
        }
    },
},

[TRAINER_SHIRLEY] =
{
    .trainerName = _("Shirley"),
    BEAUTY_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 26,
        .species = SPECIES_NUMEL,
        }
    },
},

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

[TRAINER_JESSICA_1] =
{
    .trainerName = _("Jessica"),
    BEAUTY_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 33,
        .species = SPECIES_KECLEON,
        .moves = {MOVE_SLASH, MOVE_SHADOW_CLAW, MOVE_DETECT, MOVE_PSYBEAM}
        },
        {
        .lvl = 33,
        .species = SPECIES_SEVIPER,
        .moves = {MOVE_POISON_TAIL, MOVE_SCREECH, MOVE_GLARE, MOVE_NIGHT_SLASH}
        }
    },
},

[TRAINER_JESSICA_2] =
{
    .trainerName = _("Jessica"),
    BEAUTY_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 36,
        .species = SPECIES_KECLEON,
        IVS(1),
        .moves = {MOVE_SLASH, MOVE_SHADOW_CLAW, MOVE_DETECT, MOVE_PSYBEAM}
        },
        {
        .lvl = 36,
        .species = SPECIES_SEVIPER,
        IVS(1),
        .moves = {MOVE_POISON_JAB, MOVE_NIGHT_SLASH, MOVE_GLARE, MOVE_SWORDS_DANCE}
        }
    },
},

[TRAINER_JESSICA_3] =
{
    .trainerName = _("Jessica"),
    BEAUTY_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = REMATCH_3_LEVEL_2,
        .species = SPECIES_KECLEON,
        IVS(3),
        .moves = {MOVE_SLASH, MOVE_SHADOW_CLAW, MOVE_DETECT, MOVE_SCREECH}
        },
        {
        .lvl = REMATCH_3_LEVEL_2,
        .species = SPECIES_SEVIPER,
        IVS(3),
        .moves = {MOVE_POISON_JAB, MOVE_CRUNCH, MOVE_GLARE, MOVE_SWORDS_DANCE}
        }
    },
},

[TRAINER_JESSICA_4] =
{
    .trainerName = _("Jessica"),
    BEAUTY_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 42,
        .species = SPECIES_KECLEON,
        IVS(3),
        .moves = {MOVE_SLASH, MOVE_SHADOW_CLAW, MOVE_DETECT, MOVE_SCREECH}
        },
        {
        .lvl = 42,
        .species = SPECIES_SEVIPER,
        IVS(3),
        .moves = {MOVE_POISON_JAB, MOVE_CRUNCH, MOVE_GLARE, MOVE_SWORDS_DANCE}
        }
    },
},

[TRAINER_JESSICA_5] =
{
    .trainerName = _("Jessica"),
    BEAUTY_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 45,
        .species = SPECIES_KECLEON,
        IVS(4),
        .moves = {MOVE_SLASH, MOVE_SHADOW_CLAW, MOVE_DETECT, MOVE_SCREECH}
        },
        {
        .lvl = 45,
        .species = SPECIES_SEVIPER,
        IVS(4),
        .moves = {MOVE_POISON_JAB, MOVE_CRUNCH, MOVE_GLARE, MOVE_COIL}
        }
    },
},

[TRAINER_MOLLIE] =
{
    .trainerName = _("Mollie"),
    .trainerClass = TRAINER_CLASS_EXPERT,
    .trainerPic = TRAINER_PIC_EXPERT_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
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

[TRAINER_GARRET] =
{
    .trainerName = _("Garret"),
    RICH_BOY_INFO,
    .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        RICH_BOY_MON(60, AZUMARILL),
        }
    },
},

[TRAINER_MARK] =
{
    .trainerName = _("Mark"),
    TRAINER_CLASS_PIC(POKEMANIAC),
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 36,
        .species = SPECIES_RHYHORN,
        }
    },
},

[TRAINER_STEVE_1] =
{
    .trainerName = _("Steve"),
    TRAINER_CLASS_PIC(POKEMANIAC),
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 24,
        .species = SPECIES_ARON,
        }
    },
},

[TRAINER_STEVE_2] =
{
    .trainerName = _("Steve"),
    TRAINER_CLASS_PIC(POKEMANIAC),
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 35,
        .species = SPECIES_LAIRON,
        IVS(1),
        }
    },
},

[TRAINER_STEVE_3] =
{
    .trainerName = _("Steve"),
    TRAINER_CLASS_PIC(POKEMANIAC),
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = REMATCH_3_LEVEL_2,
        .species = SPECIES_RHYHORN,
        IVS(3),
        },
        {
        .lvl = REMATCH_3_LEVEL_2,
        .species = SPECIES_LAIRON,
        IVS(3),
        }
    },
},

[TRAINER_STEVE_4] =
{
    .trainerName = _("Steve"),
    TRAINER_CLASS_PIC(POKEMANIAC),
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 42,
        .species = SPECIES_RHYDON,
        IVS(3),
        },
        {
        .lvl = 42,
        .species = SPECIES_AGGRON,
        IVS(3),
        }
    },
},

[TRAINER_STEVE_5] =
{
    .trainerName = _("Steve"),
    TRAINER_CLASS_PIC(POKEMANIAC),
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 46,
        .species = SPECIES_RHYPERIOR,
        IVS(4),
        },
        {
        .lvl = 46,
        .species = SPECIES_AGGRON,
        IVS(4),
        }
    },
},

[TRAINER_LUIS] =
{
    .trainerName = _("Luis"),
    .trainerClass = TRAINER_CLASS_SWIMMER,
    .trainerPic = TRAINER_PIC_SWIMMER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 30,
        .species = SPECIES_CARVANHA,
        }
    },
},

[TRAINER_DOMINIK] =
{
    .trainerName = _("Dominik"),
    .trainerClass = TRAINER_CLASS_SWIMMER,
    .trainerPic = TRAINER_PIC_SWIMMER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 30,
        .species = SPECIES_TENTACRUEL,
        }
    },
},

[TRAINER_DOUGLAS] =
{
    .trainerName = _("Douglas"),
    .trainerClass = TRAINER_CLASS_SWIMMER,
    .trainerPic = TRAINER_PIC_SWIMMER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 29,
        .species = SPECIES_STARYU,
        IVS(1),
        },
        {
        .lvl = 29,
        .species = SPECIES_HORSEA,
        IVS(1),
        }
    },
},

[TRAINER_DARRIN] =
{
    .trainerName = _("Darrin"),
    .trainerClass = TRAINER_CLASS_SWIMMER,
    .trainerPic = TRAINER_PIC_SWIMMER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 28,
        .species = SPECIES_TENTACOOL,
        IVS(1),
        },
        {
        .lvl = 28,
        .species = SPECIES_WINGULL,
        IVS(1),
        },
        {
        .lvl = 28,
        .species = SPECIES_TENTACOOL,
        IVS(1),
        }
    },
},

[TRAINER_JEROME] =
{
    .trainerName = _("Jerome"),
    .trainerClass = TRAINER_CLASS_SWIMMER,
    .trainerPic = TRAINER_PIC_SWIMMER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 30,
        .species = SPECIES_TENTACRUEL,
        }
    },
},

[TRAINER_MATTHEW] =
{
    .trainerName = _("Matthew"),
    .trainerClass = TRAINER_CLASS_SWIMMER,
    .trainerPic = TRAINER_PIC_SWIMMER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 30,
        .species = SPECIES_CARVANHA,
        }
    },
},

[TRAINER_DAVID] =
{
    .trainerName = _("David"),
    .trainerClass = TRAINER_CLASS_SWIMMER,
    .trainerPic = TRAINER_PIC_SWIMMER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 29,
        .species = SPECIES_TENTACOOL,
        },
        {
        .lvl = 29,
        .species = SPECIES_CARVANHA,
        }
    },
},

[TRAINER_SPENCER] =
{
    .trainerName = _("Spencer"),
    .trainerClass = TRAINER_CLASS_SWIMMER,
    .trainerPic = TRAINER_PIC_SWIMMER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
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

[TRAINER_ROLAND] =
{
    .trainerName = _("Roland"),
    .trainerClass = TRAINER_CLASS_SWIMMER,
    .trainerPic = TRAINER_PIC_SWIMMER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 38,
        .species = SPECIES_SHARPEDO,
        }
    },
},

[TRAINER_NOLEN] =
{
    .trainerName = _("Nolen"),
    .trainerClass = TRAINER_CLASS_SWIMMER,
    .trainerPic = TRAINER_PIC_SWIMMER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 38,
        .species = SPECIES_TENTACRUEL,
        }
    },
},

[TRAINER_STAN] =
{
    .trainerName = _("Stan"),
    .trainerClass = TRAINER_CLASS_SWIMMER,
    .trainerPic = TRAINER_PIC_SWIMMER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 37,
        .species = SPECIES_SEADRA,
        }
    },
},

[TRAINER_BARRY] =
{
    .trainerName = _("Barry"),
    .trainerClass = TRAINER_CLASS_SWIMMER,
    .trainerPic = TRAINER_PIC_SWIMMER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 42,
        .species = SPECIES_GYARADOS,
        }
    },
},

[TRAINER_DEAN] =
{
    .trainerName = _("Dean"),
    .trainerClass = TRAINER_CLASS_SWIMMER,
    .trainerPic = TRAINER_PIC_SWIMMER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
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

[TRAINER_RODNEY] =
{
    .trainerName = _("Rodney"),
    .trainerClass = TRAINER_CLASS_SWIMMER,
    .trainerPic = TRAINER_PIC_SWIMMER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 42,
        .species = SPECIES_GYARADOS,
        }
    },
},

[TRAINER_RICHARD] =
{
    .trainerName = _("Richard"),
    .trainerClass = TRAINER_CLASS_SWIMMER,
    .trainerPic = TRAINER_PIC_SWIMMER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 42,
        .species = SPECIES_PELIPPER,
        }
    },
},

[TRAINER_HERMAN] =
{
    .trainerName = _("Herman"),
    .trainerClass = TRAINER_CLASS_SWIMMER,
    .trainerPic = TRAINER_PIC_SWIMMER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
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

[TRAINER_SANTIAGO] =
{
    .trainerName = _("Santiago"),
    .trainerClass = TRAINER_CLASS_SWIMMER,
    .trainerPic = TRAINER_PIC_SWIMMER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
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

[TRAINER_GILBERT] =
{
    .trainerName = _("Gilbert"),
    .trainerClass = TRAINER_CLASS_SWIMMER,
    .trainerPic = TRAINER_PIC_SWIMMER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 42,
        .species = SPECIES_SHARPEDO,
        }
    },
},

[TRAINER_FRANKLIN] =
{
    .trainerName = _("Franklin"),
    .trainerClass = TRAINER_CLASS_SWIMMER,
    .trainerPic = TRAINER_PIC_SWIMMER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 42,
        .species = SPECIES_SEALEO,
        }
    },
},

[TRAINER_KEVIN] =
{
    .trainerName = _("Kevin"),
    .trainerClass = TRAINER_CLASS_SWIMMER,
    .trainerPic = TRAINER_PIC_SWIMMER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 42,
        .species = SPECIES_SEALEO,
        }
    },
},

[TRAINER_JACK] =
{
    .trainerName = _("Jack"),
    .trainerClass = TRAINER_CLASS_SWIMMER,
    .trainerPic = TRAINER_PIC_SWIMMER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 42,
        .species = SPECIES_GYARADOS,
        }
    },
},

[TRAINER_DUDLEY] =
{
    .trainerName = _("Dudley"),
    .trainerClass = TRAINER_CLASS_SWIMMER,
    .trainerPic = TRAINER_PIC_SWIMMER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
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

[TRAINER_CHAD] =
{
    .trainerName = _("Chad"),
    .trainerClass = TRAINER_CLASS_SWIMMER,
    .trainerPic = TRAINER_PIC_SWIMMER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
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

[TRAINER_TONY_1] =
{
    .trainerName = _("Tony"),
    .trainerClass = TRAINER_CLASS_SWIMMER,
    .trainerPic = TRAINER_PIC_SWIMMER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 30,
        .species = SPECIES_CARVANHA,
        }
    },
},

[TRAINER_TONY_2] =
{
    .trainerName = _("Tony"),
    .trainerClass = TRAINER_CLASS_SWIMMER,
    .trainerPic = TRAINER_PIC_SWIMMER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 35,
        .species = SPECIES_SHARPEDO,
        IVS(1),
        }
    },
},

[TRAINER_TONY_3] =
{
    .trainerName = _("Tony"),
    .trainerClass = TRAINER_CLASS_SWIMMER,
    .trainerPic = TRAINER_PIC_SWIMMER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = REMATCH_3_LEVEL_1,
        .species = SPECIES_SHARPEDO,
        IVS(3),
        }
    },
},

[TRAINER_TONY_4] =
{
    .trainerName = _("Tony"),
    .trainerClass = TRAINER_CLASS_SWIMMER,
    .trainerPic = TRAINER_PIC_SWIMMER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 39,
        .species = SPECIES_STARYU,
        IVS(3),
        },
        {
        .lvl = 39,
        .species = SPECIES_SHARPEDO,
        IVS(3),
        }
    },
},

[TRAINER_TONY_5] =
{
    .trainerName = _("Tony"),
    .trainerClass = TRAINER_CLASS_SWIMMER,
    .trainerPic = TRAINER_PIC_SWIMMER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 42,
        .species = SPECIES_STARMIE,
        IVS(4),
        },
        {
        .lvl = 42,
        .species = SPECIES_SHARPEDO,
        IVS(4),
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

[TRAINER_KOICHI] =
{
    .trainerName = _("Koichi"),
    BLACK_BELT_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 29,
        .species = SPECIES_MACHOKE,
        IVS(12),
        },
        {
        .lvl = 29,
        .species = SPECIES_MACHOKE,
        IVS(18),
        }
    },
},

[TRAINER_NOB_1] =
{
    .trainerName = _("Nob"),
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

[TRAINER_NOB_2] =
{
    .trainerName = _("Nob"),
    BLACK_BELT_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 35,
        .species = SPECIES_MACHOKE,
        IVS(13),
        }
    },
},

[TRAINER_NOB_3] =
{
    .trainerName = _("Nob"),
    BLACK_BELT_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = REMATCH_3_LEVEL_1,
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
    .trainerName = _("Nob"),
    BLACK_BELT_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 45,
        .species = SPECIES_HERACROSS,
        IVS(15),
        },
        {
        .lvl = 45,
        .species = SPECIES_BRELOOM,
        IVS(15),
        },
        {
        .lvl = 45,
        .species = SPECIES_MACHAMP,
        IVS(15),
        }
    },
},

[TRAINER_NOB_5] =
{
    .trainerName = _("Nob"),
    BLACK_BELT_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 4,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 50,
        .species = SPECIES_BLAZIKEN,
        IVS(17),
        },
        {
        .lvl = 50,
        .species = SPECIES_HERACROSS,
        IVS(17),
        },
        {
        .lvl = 50,
        .species = SPECIES_BRELOOM,
        IVS(17),
        },
        {
        .lvl = 50,
        .species = SPECIES_MACHAMP,
        IVS(17),
        .heldItem = ITEM_BLACK_BELT
        }
    },
},

[TRAINER_YUJI] =
{
    .trainerName = _("Yuji"),
    BLACK_BELT_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 29,
        .species = SPECIES_MAKUHITA,
        IVS(12),
        },
        {
        .lvl = 29,
        .species = SPECIES_MACHOKE,
        IVS(12),
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
        .lvl = 24,
        .species = SPECIES_MACHOP,
        IVS(12),
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
        .lvl = 36,
        .species = SPECIES_HARIYAMA,
        IVS(12),
        }
    },
},

[TRAINER_DALTON_1] =
{
    .trainerName = _("Dalton"),
    GUITARIST_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 19,
        .species = SPECIES_WHISMUR,
        },
        {
        .lvl = 19,
        .species = SPECIES_VOLTORB,
        }
    },
},

[TRAINER_DALTON_2] =
{
    .trainerName = _("Dalton"),
    GUITARIST_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 33,
        .species = SPECIES_MAGNEMITE,
        IVS(1),
        },
        {
        .lvl = 33,
        .species = SPECIES_LOUDRED,
        IVS(1),
        },
        {
        .lvl = 33,
        .species = SPECIES_VOLTORB,
        IVS(1),
        }
    },
},

[TRAINER_DALTON_3] =
{
    .trainerName = _("Dalton"),
    GUITARIST_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = REMATCH_3_LEVEL_3,
        .species = SPECIES_MAGNETON,
        IVS(3),
        },
        {
        .lvl = REMATCH_3_LEVEL_3,
        .species = SPECIES_LOUDRED,
        IVS(3),
        },
        {
        .lvl = REMATCH_3_LEVEL_3,
        .species = SPECIES_ELECTRODE,
        IVS(3),
        }
    },
},

[TRAINER_DALTON_4] =
{
    .trainerName = _("Dalton"),
    GUITARIST_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 36,
        .species = SPECIES_MAGNETON,
        IVS(3),
        },
        {
        .lvl = 36,
        .species = SPECIES_LOUDRED,
        IVS(3),
        },
        {
        .lvl = 36,
        .species = SPECIES_ELECTRODE,
        IVS(3),
        }
    },
},

[TRAINER_DALTON_5] =
{
    .trainerName = _("Dalton"),
    GUITARIST_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 40,
        .species = SPECIES_MAGNEZONE,
        IVS(4),
        },
        {
        .lvl = 40,
        .species = SPECIES_EXPLOUD,
        IVS(4),
        },
        {
        .lvl = 40,
        .species = SPECIES_ELECTRODE,
        IVS(4),
        }
    },
},

[TRAINER_COLE] =
{
    .trainerName = _("Cole"),
    TRAINER_CLASS_PIC(KINDLER),
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 26,
        .species = SPECIES_TORKOAL,
        IVS(12),
        }
    },
},

[TRAINER_JEFF] =
{
    .trainerName = _("Jeff"),
    TRAINER_CLASS_PIC(KINDLER),
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 25,
        .species = SPECIES_NUMEL,
        IVS(12),
        },
        {
        .lvl = 25,
        .species = SPECIES_SLUGMA,
        IVS(12),
        }
    },
},

[TRAINER_AXLE] =
{
    .trainerName = _("Axle"),
    TRAINER_CLASS_PIC(KINDLER),
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 26,
        .species = SPECIES_NUMEL,
        IVS(12),
        }
    },
},

[TRAINER_JACE] =
{
    .trainerName = _("Jace"),
    TRAINER_CLASS_PIC(KINDLER),
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 26,
        .species = SPECIES_VULPIX,
        IVS(12),
        }
    },
},

[TRAINER_KEEGAN] =
{
    .trainerName = _("Keegan"),
    TRAINER_CLASS_PIC(KINDLER),
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 26,
        .species = SPECIES_HOUNDOUR,
        IVS(14),
        }
    },
},

[TRAINER_BERNIE_1] =
{
    .trainerName = _("Bernie"),
    TRAINER_CLASS_PIC(KINDLER),
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 23,
        .species = SPECIES_SLUGMA,
        },
        {
        .lvl = 23,
        .species = SPECIES_WINGULL,
        }
    },
},

[TRAINER_BERNIE_2] =
{
    .trainerName = _("Bernie"),
    TRAINER_CLASS_PIC(KINDLER),
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 33,
        .species = SPECIES_NUMEL,
        IVS(1),
        },
        {
        .lvl = 33,
        .species = SPECIES_SLUGMA,
        IVS(1),
        },
        {
        .lvl = 33,
        .species = SPECIES_PELIPPER,
        IVS(1),
        }
    },
},

[TRAINER_BERNIE_3] =
{
    .trainerName = _("Bernie"),
    TRAINER_CLASS_PIC(KINDLER),
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = REMATCH_3_LEVEL_3,
        .species = SPECIES_CAMERUPT,
        IVS(3),
        },
        {
        .lvl = REMATCH_3_LEVEL_3,
        .species = SPECIES_SLUGMA,
        IVS(3),
        },
        {
        .lvl = REMATCH_3_LEVEL_3,
        .species = SPECIES_PELIPPER,
        IVS(3),
        }
    },
},

[TRAINER_BERNIE_4] =
{
    .trainerName = _("Bernie"),
    TRAINER_CLASS_PIC(KINDLER),
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 38,
        .species = SPECIES_CAMERUPT,
        IVS(3),
        },
        {
        .lvl = 38,
        .species = SPECIES_MAGCARGO,
        IVS(3),
        },
        {
        .lvl = 38,
        .species = SPECIES_PELIPPER,
        IVS(3),
        }
    },
},

[TRAINER_BERNIE_5] =
{
    .trainerName = _("Bernie"),
    TRAINER_CLASS_PIC(KINDLER),
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 42,
        .species = SPECIES_CAMERUPT,
        IVS(4),
        },
        {
        .lvl = 42,
        .species = SPECIES_MAGCARGO,
        IVS(4),
        },
        {
        .lvl = 42,
        .species = SPECIES_PELIPPER,
        IVS(4),
        }
    },
},

[TRAINER_DREW] =
{
    .trainerName = _("Drew"),
    TRAINER_CLASS_PIC(CAMPER),
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 27,
        .species = SPECIES_TRAPINCH,
        .moves = {MOVE_DIG, MOVE_BULLDOZE, MOVE_FEINT_ATTACK, MOVE_SAND_TOMB}
        }
    },
},

[TRAINER_BEAU] =
{
    .trainerName = _("Beau"),
    TRAINER_CLASS_PIC(CAMPER),
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 25,
        .species = SPECIES_BALTOY,
        .moves = {MOVE_RAPID_SPIN, MOVE_MUD_SLAP, MOVE_PSYBEAM, MOVE_ROCK_TOMB}
        },
        {
        .lvl = 25,
        .species = SPECIES_SANDSHREW,
        .moves = {MOVE_BULLDOZE, MOVE_SAND_TOMB, MOVE_RAPID_SPIN, MOVE_FURY_SWIPES}
        },
        {
        .lvl = 25,
        .species = SPECIES_BALTOY,
        .moves = {MOVE_RAPID_SPIN, MOVE_MUD_SLAP, MOVE_PSYBEAM, MOVE_ROCK_TOMB}
        }
    },
},

[TRAINER_LARRY] =
{
    .trainerName = _("Larry"),
    TRAINER_CLASS_PIC(CAMPER),
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 22,
        .species = SPECIES_NUZLEAF,
        }
    },
},

[TRAINER_SHANE] =
{
    .trainerName = _("Shane"),
    TRAINER_CLASS_PIC(CAMPER),
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 23,
        .species = SPECIES_VOLBEAT,
        },
        {
        .lvl = 23,
        .species = SPECIES_NUZLEAF,
        }
    },
},

[TRAINER_JUSTIN] =
{
    .trainerName = _("Justin"),
    TRAINER_CLASS_PIC(CAMPER),
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 27,
        .species = SPECIES_KECLEON,
        }
    },
},

[TRAINER_AUTUMN] =
{
    .trainerName = _("Autumn"),
    TRAINER_CLASS_PIC(PICNICKER),
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 26,
        .species = SPECIES_SHROOMISH,
        }
    },
},

[TRAINER_TRAVIS] =
{
    .trainerName = _("Travis"),
    TRAINER_CLASS_PIC(CAMPER),
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 21,
        .species = SPECIES_SANDSHREW,
        }
    },
},

[TRAINER_ETHAN_1] =
{
    .trainerName = _("Ethan"),
    TRAINER_CLASS_PIC(CAMPER),
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 25,
        .species = SPECIES_GULPIN,
        },
        {
        .lvl = 25,
        .species = SPECIES_TAILLOW,
        }
    },
},

[TRAINER_ETHAN_2] =
{
    .trainerName = _("Ethan"),
    TRAINER_CLASS_PIC(CAMPER),
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 33,
        .species = SPECIES_ZIGZAGOON,
        IVS(1),
        },
        {
        .lvl = 33,
        .species = SPECIES_SWALOT,
        IVS(1),
        },
        {
        .lvl = 33,
        .species = SPECIES_SWELLOW,
        IVS(1),
        }
    },
},

[TRAINER_ETHAN_3] =
{
    .trainerName = _("Ethan"),
    TRAINER_CLASS_PIC(CAMPER),
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 4,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = REMATCH_3_LEVEL_4,
        .species = SPECIES_GOLBAT,
        IVS(3),
        },
        {
        .lvl = REMATCH_3_LEVEL_4,
        .species = SPECIES_LINOONE,
        IVS(3),
        },
        {
        .lvl = REMATCH_3_LEVEL_4,
        .species = SPECIES_SWALOT,
        IVS(3),
        },
        {
        .lvl = REMATCH_3_LEVEL_4,
        .species = SPECIES_SWELLOW,
        IVS(3),
        }
    },
},

[TRAINER_ETHAN_4] =
{
    .trainerName = _("Ethan"),
    TRAINER_CLASS_PIC(CAMPER),
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 5,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 40,
        .species = SPECIES_SANDSLASH,
        IVS(3),
        },
        {
        .lvl = 40,
        .species = SPECIES_GOLBAT,
        IVS(3),
        },
        {
        .lvl = 40,
        .species = SPECIES_LINOONE,
        IVS(3),
        },
        {
        .lvl = 40,
        .species = SPECIES_SWALOT,
        IVS(3),
        },
        {
        .lvl = 40,
        .species = SPECIES_SWELLOW,
        IVS(3),
        }
    },
},

[TRAINER_ETHAN_5] =
{
    .trainerName = _("Ethan"),
    TRAINER_CLASS_PIC(CAMPER),
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 5,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 45,
        .species = SPECIES_SANDSLASH,
        IVS(4),
        },
        {
        .lvl = 45,
        .species = SPECIES_CROBAT,
        IVS(4),
        },
        {
        .lvl = 45,
        .species = SPECIES_LINOONE,
        IVS(4),
        },
        {
        .lvl = 45,
        .species = SPECIES_SWALOT,
        IVS(4),
        },
        {
        .lvl = 45,
        .species = SPECIES_SWELLOW,
        IVS(4),
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
        .lvl = 31,
        .species = SPECIES_MASQUERAIN,
        IVS(12),
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
        .lvl = 29,
        .species = SPECIES_WURMPLE,
        IVS(12),
        },
        {
        .lvl = 29,
        .species = SPECIES_SILCOON,
        IVS(12),
        },
        {
        .lvl = 29,
        .species = SPECIES_BEAUTIFLY,
        IVS(12),
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
        .lvl = 29,
        .species = SPECIES_WURMPLE,
        IVS(12),
        },
        {
        .lvl = 29,
        .species = SPECIES_CASCOON,
        IVS(12),
        },
        {
        .lvl = 29,
        .species = SPECIES_DUSTOX,
        IVS(12),
        }
    },
},

[TRAINER_JEFFREY_1] =
{
    .trainerName = _("Jeffrey"),
    BUG_MANIAC_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 31,
        .species = SPECIES_HERACROSS,
        },
        {
        .lvl = 31,
        .species = SPECIES_PINSIR,
        },
        {
        .lvl = 31,
        .species = SPECIES_MASQUERAIN,
        }
    },
},

[TRAINER_JEFFREY_2] =
{
    .trainerName = _("Jeffrey"),
    BUG_MANIAC_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 4,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 34,
        .species = SPECIES_WURMPLE,
        IVS(1),
        },
        {
        .lvl = 34,
        .species = SPECIES_HERACROSS,
        IVS(1),
        },
        {
        .lvl = 34,
        .species = SPECIES_PINSIR,
        IVS(1),
        },
        {
        .lvl = 34,
        .species = SPECIES_MASQUERAIN,
        IVS(1),
        }
    },
},

[TRAINER_JEFFREY_3] =
{
    .trainerName = _("Jeffrey"),
    BUG_MANIAC_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 5,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = REMATCH_3_LEVEL_5,
        .species = SPECIES_WURMPLE,
        IVS(3),
        },
        {
        .lvl = REMATCH_3_LEVEL_5,
        .species = SPECIES_SILCOON,
        IVS(3),
        },
        {
        .lvl = REMATCH_3_LEVEL_5,
        .species = SPECIES_HERACROSS,
        IVS(3),
        },
        {
        .lvl = REMATCH_3_LEVEL_5,
        .species = SPECIES_PINSIR,
        IVS(3),
        },
        {
        .lvl = REMATCH_3_LEVEL_5,
        .species = SPECIES_MASQUERAIN,
        IVS(3),
        }
    },
},

[TRAINER_JEFFREY_4] =
{
    .trainerName = _("Jeffrey"),
    BUG_MANIAC_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 5,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 40,
        .species = SPECIES_CASCOON,
        IVS(3),
        },
        {
        .lvl = 40,
        .species = SPECIES_SILCOON,
        IVS(3),
        },
        {
        .lvl = 40,
        .species = SPECIES_HERACROSS,
        IVS(3),
        },
        {
        .lvl = 40,
        .species = SPECIES_PINSIR,
        IVS(3),
        },
        {
        .lvl = 40,
        .species = SPECIES_MASQUERAIN,
        IVS(3),
        }
    },
},

[TRAINER_JEFFREY_5] =
{
    .trainerName = _("Jeffrey"),
    BUG_MANIAC_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 5,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 43,
        .species = SPECIES_DUSTOX,
        IVS(4),
        },
        {
        .lvl = 43,
        .species = SPECIES_BEAUTIFLY,
        IVS(4),
        },
        {
        .lvl = 43,
        .species = SPECIES_HERACROSS,
        IVS(4),
        },
        {
        .lvl = 43,
        .species = SPECIES_PINSIR,
        IVS(4),
        },
        {
        .lvl = 43,
        .species = SPECIES_MASQUERAIN,
        IVS(4),
        .heldItem = ITEM_SILVER_POWDER
        }
    },
},

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

[TRAINER_WILLIAM] =
{
    .trainerName = _("William"),
    PSYCHIC_M_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 34,
        .species = SPECIES_BALTOY,
        },
        {
        .lvl = 34,
        .species = SPECIES_SPOINK,
        },
        {
        .lvl = 34,
        .species = SPECIES_KIRLIA,
        }
    },
},

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

[TRAINER_CAMERON_1] =
{
    .trainerName = _("Cameron"),
    PSYCHIC_M_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
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
    .trainerName = _("Cameron"),
    PSYCHIC_M_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
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
    .trainerName = _("Cameron"),
    PSYCHIC_M_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = REMATCH_3_LEVEL_2,
        .species = SPECIES_ALAKAZAM,
        IVS(3),
        },
        {
        .lvl = REMATCH_3_LEVEL_2,
        .species = SPECIES_SOLROCK,
        IVS(3),
        }
    },
},

[TRAINER_CAMERON_4] =
{
    .trainerName = _("Cameron"),
    PSYCHIC_M_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 43,
        .species = SPECIES_ALAKAZAM,
        IVS(3),
        },
        {
        .lvl = 43,
        .species = SPECIES_SOLROCK,
        IVS(3),
        }
    },
},

[TRAINER_CAMERON_5] =
{
    .trainerName = _("Cameron"),
    PSYCHIC_M_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 45,
        .species = SPECIES_ALAKAZAM,
        IVS(4),
        },
        {
        .lvl = 45,
        .species = SPECIES_SOLROCK,
        IVS(4),
        }
    },
},

[TRAINER_JACLYN] =
{
    .trainerName = _("Jaclyn"),
    PSYCHIC_F_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 19,
        .species = SPECIES_ABRA,
        .moves = {MOVE_HIDDEN_POWER, MOVE_NONE, MOVE_NONE, MOVE_NONE}
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

[TRAINER_KAYLA] =
{
    .trainerName = _("Kayla"),
    PSYCHIC_F_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 34,
        .species = SPECIES_WOBBUFFET,
        },
        {
        .lvl = 34,
        .species = SPECIES_NATU,
        },
        {
        .lvl = 34,
        .species = SPECIES_KADABRA,
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

[TRAINER_JACKI_1] =
{
    .trainerName = _("Jacki"),
    PSYCHIC_F_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
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
    .trainerName = _("Jacki"),
    PSYCHIC_F_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
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
    .trainerName = _("Jacki"),
    PSYCHIC_F_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = REMATCH_3_LEVEL_2,
        .species = SPECIES_ALAKAZAM,
        IVS(3),
        },
        {
        .lvl = REMATCH_3_LEVEL_2,
        .species = SPECIES_LUNATONE,
        IVS(3),
        }
    },
},

[TRAINER_JACKI_4] =
{
    .trainerName = _("Jacki"),
    PSYCHIC_F_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 43,
        .species = SPECIES_ALAKAZAM,
        IVS(3),
        },
        {
        .lvl = 43,
        .species = SPECIES_LUNATONE,
        IVS(3),
        }
    },
},

[TRAINER_JACKI_5] =
{
    .trainerName = _("Jacki"),
    PSYCHIC_F_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 45,
        .species = SPECIES_ALAKAZAM,
        IVS(4),
        },
        {
        .lvl = 45,
        .species = SPECIES_LUNATONE,
        IVS(4),
        }
    },
},

[TRAINER_MICAH] =
{
    .trainerName = _("Micah"),
    TRAINER_CLASS_PIC(GENTLEMAN),
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_RICH,
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

[TRAINER_THOMAS] =
{
    .trainerName = _("Thomas"),
    TRAINER_CLASS_PIC(GENTLEMAN),
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_RICH,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 60,
        .species = SPECIES_ZANGOOSE,
        }
    },
},

[TRAINER_WALTER_1] =
{
    .trainerName = _("Walter"),
    TRAINER_CLASS_PIC(GENTLEMAN),
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_RICH,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 34,
        .species = SPECIES_MANECTRIC,
        }
    },
},

[TRAINER_WALTER_2] =
{
    .trainerName = _("Walter"),
    TRAINER_CLASS_PIC(GENTLEMAN),
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_RICH,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 36,
        .species = SPECIES_MANECTRIC,
        IVS(1),
        }
    },
},

[TRAINER_WALTER_3] =
{
    .trainerName = _("Walter"),
    TRAINER_CLASS_PIC(GENTLEMAN),
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_RICH,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = REMATCH_3_LEVEL_2,
        .species = SPECIES_LINOONE,
        IVS(3),
        .moves = {MOVE_HEADBUTT, MOVE_PLAY_ROUGH, MOVE_PIN_MISSILE, MOVE_HONE_CLAWS}
        },
        {
        .lvl = REMATCH_3_LEVEL_2,
        .species = SPECIES_MANECTRIC,
        IVS(3),
        .moves = {MOVE_DISCHARGE, MOVE_BITE, MOVE_ODOR_SLEUTH, MOVE_ROAR}
        }
    },
},

[TRAINER_WALTER_4] =
{
    .trainerName = _("Walter"),
    TRAINER_CLASS_PIC(GENTLEMAN),
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_RICH,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 42,
        .species = SPECIES_LINOONE,
        IVS(3),
        .moves = {MOVE_HEADBUTT, MOVE_PLAY_ROUGH, MOVE_PIN_MISSILE, MOVE_BELLY_DRUM}
        },
        {
        .lvl = 42,
        .species = SPECIES_MANECTRIC,
        IVS(3),
        .moves = {MOVE_DISCHARGE, MOVE_BITE, MOVE_CHARGE, MOVE_ROAR}
        }
    },
},

[TRAINER_WALTER_5] =
{
    .trainerName = _("Walter"),
    TRAINER_CLASS_PIC(GENTLEMAN),
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_RICH,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 45,
        .species = SPECIES_LINOONE,
        IVS(4),
        .moves = {MOVE_HEADBUTT, MOVE_PLAY_ROUGH, MOVE_PIN_MISSILE, MOVE_BELLY_DRUM}
        },
        {
        .lvl = 45,
        .species = SPECIES_GOLDUCK,
        IVS(4),
        .moves = {MOVE_HYDRO_PUMP, MOVE_CONFUSION, MOVE_POWER_GEM, MOVE_AMNESIA}
        },
        {
        .lvl = 45,
        .species = SPECIES_MANECTRIC,
        IVS(4),
        .moves = {MOVE_DISCHARGE, MOVE_BITE, MOVE_CHARGE, MOVE_ROAR}
        }
    },
},

[TRAINER_TED] =
{
    .trainerName = _("Ted"),
    SCHOOLKID_M_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 22,
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
        .lvl = 20,
        .species = SPECIES_NUMEL,
        IVS(1),
        },
        {
        .lvl = 20,
        .species = SPECIES_ODDISH,
        IVS(1),
        },
        {
        .lvl = 20,
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
        .lvl = 21,
        .species = SPECIES_SHROOMISH,
        IVS(1),
        },
        {
        .lvl = 21,
        .species = SPECIES_BEAUTIFLY,
        IVS(1),
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
        .lvl = 32,
        .species = SPECIES_SPINDA,
        .moves = {MOVE_DIZZY_PUNCH, MOVE_HYPNOSIS, MOVE_PSYBEAM, MOVE_SKILL_SWAP}
        },
        {
        .lvl = 34,
        .species = SPECIES_SLAKING,
        .moves = {MOVE_FOCUS_PUNCH, MOVE_YAWN, MOVE_SLACK_OFF, MOVE_FEINT_ATTACK}
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
        .lvl = 19,
        .species = SPECIES_TAILLOW,
        .ev = EV_SPREAD_ATK_SPE_HP,
        IVS(3),
        .heldItem = ITEM_ORAN_BERRY
        },
        {
        .lvl = 19,
        .species = SPECIES_ZIGZAGOON,
        .ev = EV_SPREAD_ATK_SPE_HP,
        IVS(3),
        .heldItem = ITEM_ORAN_BERRY
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
        .lvl = 55,
        .species = SPECIES_SKITTY,
        .heldItem = ITEM_ORAN_BERRY,
        .moves = {MOVE_ASSIST, MOVE_CHARM, MOVE_FEINT_ATTACK, MOVE_HEAL_BELL}
        },
        {
        .lvl = 55,
        .species = SPECIES_SKITTY,
        .heldItem = ITEM_ORAN_BERRY,
        .moves = {MOVE_ASSIST, MOVE_CHARM, MOVE_FEINT_ATTACK, MOVE_HEAL_BELL}
        },
        {
        .lvl = 55,
        .species = SPECIES_SKITTY,
        .heldItem = ITEM_ORAN_BERRY,
        .moves = {MOVE_ASSIST, MOVE_CHARM, MOVE_FEINT_ATTACK, MOVE_HEAL_BELL}
        },
        {
        .lvl = 55,
        .species = SPECIES_SKITTY,
        .heldItem = ITEM_ORAN_BERRY,
        .moves = {MOVE_ASSIST, MOVE_CHARM, MOVE_FEINT_ATTACK, MOVE_HEAL_BELL}
        },
        {
        .lvl = 55,
        .species = SPECIES_SKITTY,
        .heldItem = ITEM_ORAN_BERRY,
        .moves = {MOVE_ASSIST, MOVE_CHARM, MOVE_FEINT_ATTACK, MOVE_HEAL_BELL}
        },
        {
        .lvl = 55,
        .species = SPECIES_DELCATTY,
        .heldItem = ITEM_ORAN_BERRY,
        .moves = {MOVE_ASSIST, MOVE_CHARM, MOVE_FEINT_ATTACK, MOVE_HEAL_BELL}
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
        .lvl = 20,
        .species = SPECIES_ROSELIA,
        .ev = EV_SPREAD_SPA_SPE_HP,
        IVS(6),
        .heldItem = ITEM_ORAN_BERRY
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
        .lvl = 34,
        .species = SPECIES_PIKACHU,
        .heldItem = ITEM_ORAN_BERRY
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
        .lvl = 42,
        .species = SPECIES_AZURILL,
        IVS(12),
        .heldItem = ITEM_ORAN_BERRY
        },
        {
        .lvl = 42,
        .species = SPECIES_MARILL,
        IVS(12),
        .heldItem = ITEM_ORAN_BERRY
        },
        {
        .lvl = 42,
        .species = SPECIES_AZUMARILL,
        IVS(12),
        .heldItem = ITEM_ORAN_BERRY
        }
    },
},

[TRAINER_TIMOTHY_1] =
{
    .trainerName = _("Timothy"),
    .trainerClass = TRAINER_CLASS_EXPERT,
    .trainerPic = TRAINER_PIC_EXPERT_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 30,
        .species = SPECIES_HARIYAMA,
        IVS(24),
        }
    },
},

[TRAINER_TIMOTHY_2] =
{
    .trainerName = _("Timothy"),
    .trainerClass = TRAINER_CLASS_EXPERT,
    .trainerPic = TRAINER_PIC_EXPERT_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 36,
        .species = SPECIES_HARIYAMA,
        IVS(25),
        .moves = {MOVE_ARM_THRUST, MOVE_SMELLING_SALTS, MOVE_KNOCK_OFF, MOVE_BULK_UP}
        }
    },
},

[TRAINER_TIMOTHY_3] =
{
    .trainerName = _("Timothy"),
    .trainerClass = TRAINER_CLASS_EXPERT,
    .trainerPic = TRAINER_PIC_EXPERT_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = REMATCH_3_LEVEL_1,
        .species = SPECIES_HARIYAMA,
        IVS(26),
        .moves = {MOVE_WAKE_UP_SLAP, MOVE_SMELLING_SALTS, MOVE_KNOCK_OFF, MOVE_BULK_UP}
        }
    },
},

[TRAINER_TIMOTHY_4] =
{
    .trainerName = _("Timothy"),
    .trainerClass = TRAINER_CLASS_EXPERT,
    .trainerPic = TRAINER_PIC_EXPERT_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 42,
        .species = SPECIES_HARIYAMA,
        IVS(27),
        .moves = {MOVE_WAKE_UP_SLAP, MOVE_SMELLING_SALTS, MOVE_KNOCK_OFF, MOVE_BELLY_DRUM}
        }
    },
},

[TRAINER_TIMOTHY_5] =
{
    .trainerName = _("Timothy"),
    .trainerClass = TRAINER_CLASS_EXPERT,
    .trainerPic = TRAINER_PIC_EXPERT_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 45,
        .species = SPECIES_HARIYAMA,
        IVS(29),
        .moves = {MOVE_WAKE_UP_SLAP, MOVE_SMELLING_SALTS, MOVE_KNOCK_OFF, MOVE_BELLY_DRUM}
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
        .lvl = 21,
        .species = SPECIES_MEDITITE,
        .ev = EV_SPREAD_ATK_SPE_HP,
        IVS(24),
        .moves = {MOVE_HIGH_JUMP_KICK, MOVE_MEDITATE, MOVE_PSYBEAM, MOVE_DETECT}
        }
    },
},

[TRAINER_SHELBY_1] =
{
    .trainerName = _("Shelby"),
    .trainerClass = TRAINER_CLASS_EXPERT,
    .trainerPic = TRAINER_PIC_EXPERT_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 25,
        .species = SPECIES_MAKUHITA,
        IVS(24),
        },
        {
        .lvl = 25,
        .species = SPECIES_MEDITITE,
        IVS(24),
        }
    },
},

[TRAINER_SHELBY_2] =
{
    .trainerName = _("Shelby"),
    .trainerClass = TRAINER_CLASS_EXPERT,
    .trainerPic = TRAINER_PIC_EXPERT_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 34,
        .species = SPECIES_HARIYAMA,
        IVS(25),
        },
        {
        .lvl = 34,
        .species = SPECIES_MEDITITE,
        IVS(25),
        }
    },
},

[TRAINER_SHELBY_3] =
{
    .trainerName = _("Shelby"),
    .trainerClass = TRAINER_CLASS_EXPERT,
    .trainerPic = TRAINER_PIC_EXPERT_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = REMATCH_3_LEVEL_2,
        .species = SPECIES_HARIYAMA,
        IVS(26),
        },
        {
        .lvl = REMATCH_3_LEVEL_2,
        .species = SPECIES_MEDICHAM,
        IVS(26),
        }
    },
},

[TRAINER_SHELBY_4] =
{
    .trainerName = _("Shelby"),
    .trainerClass = TRAINER_CLASS_EXPERT,
    .trainerPic = TRAINER_PIC_EXPERT_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 41,
        .species = SPECIES_HARIYAMA,
        IVS(27),
        },
        {
        .lvl = 41,
        .species = SPECIES_MEDICHAM,
        IVS(27),
        }
    },
},

[TRAINER_SHELBY_5] =
{
    .trainerName = _("Shelby"),
    .trainerClass = TRAINER_CLASS_EXPERT,
    .trainerPic = TRAINER_PIC_EXPERT_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 45,
        .species = SPECIES_HARIYAMA,
        IVS(29),
        },
        {
        .lvl = 45,
        .species = SPECIES_MEDICHAM,
        IVS(29),
        }
    },
},

[TRAINER_QUINCY] =
{
    .trainerName = _("Quincy"),
    .trainerClass = TRAINER_CLASS_COOLTRAINER,
    .trainerPic = TRAINER_PIC_COOLTRAINER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
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

[TRAINER_KATELYNN] =
{
    .trainerName = _("Katelynn"),
    .trainerClass = TRAINER_CLASS_COOLTRAINER,
    .trainerPic = TRAINER_PIC_COOLTRAINER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
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

[TRAINER_JAYLEN] =
{
    .trainerName = _("Jaylen"),
    YOUNGSTER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 24,
        .species = SPECIES_TRAPINCH,
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
        .lvl = 24,
        .species = SPECIES_ARON,
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
        .lvl = 22,
        .species = SPECIES_CORPHISH,
        },
        {
        .lvl = 22,
        .species = SPECIES_GOLDEEN,
        },
        {
        .lvl = 22,
        .species = SPECIES_BARBOACH,
        }
    },
},

[TRAINER_NOLAN] =
{
    .trainerName = _("Nolan"),
    FISHERMAN_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 24,
        .species = SPECIES_GYARADOS,
        }
    },
},

[TRAINER_BARNY] =
{
    .trainerName = _("Barny"),
    FISHERMAN_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 29,
        .species = SPECIES_TENTACOOL,
        },
        {
        .lvl = 29,
        .species = SPECIES_CARVANHA,
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
        .lvl = 19,
        .species = SPECIES_TENTACOOL,
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
        .lvl = 29,
        .species = SPECIES_WAILMER,
        IVS(1),
        },
        {
        .lvl = 29,
        .species = SPECIES_TENTACRUEL,
        IVS(1),
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

[TRAINER_JACOB] =
{
    .trainerName = _("Jacob"),
    TRIATHLETE_M_CYCLING_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 17,
        .species = SPECIES_VOLTORB,
        IVS(2),
        },
        {
        .lvl = 17,
        .species = SPECIES_VOLTORB,
        IVS(2),
        },
        {
        .lvl = 17,
        .species = SPECIES_MAGNEMITE,
        IVS(24),
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
        .lvl = 18,
        .species = SPECIES_MAGNEMITE,
        },
        {
        .lvl = 18,
        .species = SPECIES_MAGNEMITE,
        }
    },
},

[TRAINER_BENJAMIN_1] =
{
    .trainerName = _("Benjamin"),
    TRIATHLETE_M_CYCLING_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 20,
        .species = SPECIES_MAGNEMITE,
        }
    },
},

[TRAINER_BENJAMIN_2] =
{
    .trainerName = _("Benjamin"),
    TRIATHLETE_M_CYCLING_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 34,
        .species = SPECIES_MINUN,
        IVS(1),
        },
        {
        .lvl = 34,
        .species = SPECIES_MAGNETON,
        IVS(1),
        }
    },
},

[TRAINER_BENJAMIN_3] =
{
    .trainerName = _("Benjamin"),
    TRIATHLETE_M_CYCLING_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = REMATCH_3_LEVEL_3,
        .species = SPECIES_VOLTORB,
        IVS(3),
        },
        {
        .lvl = REMATCH_3_LEVEL_3,
        .species = SPECIES_MINUN,
        IVS(3),
        },
        {
        .lvl = REMATCH_3_LEVEL_3,
        .species = SPECIES_MAGNETON,
        IVS(3),
        }
    },
},

[TRAINER_BENJAMIN_4] =
{
    .trainerName = _("Benjamin"),
    TRIATHLETE_M_CYCLING_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 36,
        .species = SPECIES_ELECTRODE,
        IVS(3),
        },
        {
        .lvl = 36,
        .species = SPECIES_MINUN,
        IVS(3),
        },
        {
        .lvl = 36,
        .species = SPECIES_MAGNETON,
        IVS(3),
        }
    },
},

[TRAINER_BENJAMIN_5] =
{
    .trainerName = _("Benjamin"),
    TRIATHLETE_M_CYCLING_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 40,
        .species = SPECIES_ELECTRODE,
        IVS(4),
        },
        {
        .lvl = 40,
        .species = SPECIES_MINUN,
        IVS(4),
        },
        {
        .lvl = 40,
        .species = SPECIES_MAGNETON,
        IVS(4),
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
        .lvl = 17,
        .species = SPECIES_MAGNEMITE,
        IVS(9),
        },
        {
        .lvl = 17,
        .species = SPECIES_MAGNEMITE,
        IVS(9),
        },
        {
        .lvl = 17,
        .species = SPECIES_VOLTORB,
        }
    },
},

[TRAINER_ABIGAIL_1] =
{
    .trainerName = _("Abigail"),
    TRIATHLETE_F_CYCLING_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 20,
        .species = SPECIES_MAGNEMITE,
        }
    },
},

[TRAINER_ABIGAIL_2] =
{
    .trainerName = _("Abigail"),
    TRIATHLETE_F_CYCLING_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 34,
        .species = SPECIES_PLUSLE,
        IVS(1),
        },
        {
        .lvl = 34,
        .species = SPECIES_MAGNETON,
        IVS(1),
        }
    },
},

[TRAINER_ABIGAIL_3] =
{
    .trainerName = _("Abigail"),
    TRIATHLETE_F_CYCLING_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = REMATCH_3_LEVEL_3,
        .species = SPECIES_ELECTRIKE,
        IVS(3),
        },
        {
        .lvl = REMATCH_3_LEVEL_3,
        .species = SPECIES_PLUSLE,
        IVS(3),
        },
        {
        .lvl = REMATCH_3_LEVEL_3,
        .species = SPECIES_MAGNETON,
        IVS(3),
        }
    },
},

[TRAINER_ABIGAIL_4] =
{
    .trainerName = _("Abigail"),
    TRIATHLETE_F_CYCLING_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 36,
        .species = SPECIES_MANECTRIC,
        IVS(3),
        },
        {
        .lvl = 36,
        .species = SPECIES_PLUSLE,
        IVS(3),
        },
        {
        .lvl = 36,
        .species = SPECIES_MAGNETON,
        IVS(3),
        }
    },
},

[TRAINER_ABIGAIL_5] =
{
    .trainerName = _("Abigail"),
    TRIATHLETE_F_CYCLING_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 40,
        .species = SPECIES_MANECTRIC,
        IVS(4),
        },
        {
        .lvl = 40,
        .species = SPECIES_PLUSLE,
        IVS(4),
        },
        {
        .lvl = 40,
        .species = SPECIES_MAGNETON,
        IVS(4),
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
        .lvl = 41,
        .species = SPECIES_LANTURN,
        },
        {
        .lvl = 41,
        .species = SPECIES_STARMIE,
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
        .lvl = 29,
        .species = SPECIES_LINOONE,
        },
        {
        .lvl = 29,
        .species = SPECIES_MANECTRIC,
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
        .lvl = 41,
        .species = SPECIES_STARMIE,
        },
        {
        .lvl = 41,
        .species = SPECIES_PELIPPER,
        IVS(9),
        }
    },
},

[TRAINER_ISAIAH_1] =
{
    .trainerName = _("Isaiah"),
    TRIATHLETE_M_SWIMMING_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 42,
        .species = SPECIES_CHINCHOU,
        }
    },
},

[TRAINER_ISAIAH_2] =
{
    .trainerName = _("Isaiah"),
    TRIATHLETE_M_SWIMMING_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 44,
        .species = SPECIES_LANTURN,
        IVS(1),
        }
    },
},

[TRAINER_ISAIAH_3] =
{
    .trainerName = _("Isaiah"),
    TRIATHLETE_M_SWIMMING_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 46,
        .species = SPECIES_LANTURN,
        IVS(2),
        }
    },
},

[TRAINER_ISAIAH_4] =
{
    .trainerName = _("Isaiah"),
    TRIATHLETE_M_SWIMMING_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 48,
        .species = SPECIES_LANTURN,
        IVS(3),
        }
    },
},

[TRAINER_ISAIAH_5] =
{
    .trainerName = _("Isaiah"),
    TRIATHLETE_M_SWIMMING_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 50,
        .species = SPECIES_LANTURN,
        IVS(4),
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
        .lvl = 42,
        .species = SPECIES_STARMIE,
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
        .lvl = 41,
        .species = SPECIES_PELIPPER,
        },
        {
        .lvl = 41,
        .species = SPECIES_STARMIE,
        IVS(19),
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
        .lvl = 42,
        .species = SPECIES_STARMIE,
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
        .lvl = 41,
        .species = SPECIES_PELIPPER,
        },
        {
        .lvl = 41,
        .species = SPECIES_STARMIE,
        IVS(29),
        }
    },
},

[TRAINER_KATELYN_1] =
{
    .trainerName = _("Katelyn"),
    TRIATHLETE_F_SWIMMING_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 42,
        .species = SPECIES_STARYU,
        }
    },
},

[TRAINER_KATELYN_2] =
{
    .trainerName = _("Katelyn"),
    TRIATHLETE_F_SWIMMING_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
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
    .trainerName = _("Katelyn"),
    TRIATHLETE_F_SWIMMING_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
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
    .trainerName = _("Katelyn"),
    TRIATHLETE_F_SWIMMING_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
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
    .trainerName = _("Katelyn"),
    TRIATHLETE_F_SWIMMING_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 50,
        .species = SPECIES_STARMIE,
        IVS(4),
        }
    },
},

[TRAINER_NICOLAS_1] =
{
    .trainerName = _("Nicolas"),
    TRAINER_CLASS_PIC(DRAGON_TAMER),
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
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
    .trainerName = _("Nicolas"),
    TRAINER_CLASS_PIC(DRAGON_TAMER),
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
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
    .trainerName = _("Nicolas"),
    TRAINER_CLASS_PIC(DRAGON_TAMER),
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
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
    .trainerName = _("Nicolas"),
    TRAINER_CLASS_PIC(DRAGON_TAMER),
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
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
    .trainerName = _("Nicolas"),
    TRAINER_CLASS_PIC(DRAGON_TAMER),
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
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

[TRAINER_AARON] =
{
    .trainerName = _("Aaron"),
    TRAINER_CLASS_PIC(DRAGON_TAMER),
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
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

[TRAINER_PERRY] =
{
    .trainerName = _("Perry"),
    BIRD_KEEPER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 30,
        .species = SPECIES_PELIPPER,
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
        .lvl = 30,
        .species = SPECIES_WINGULL,
        },
        {
        .lvl = 30,
        .species = SPECIES_TROPIUS,
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
        .lvl = 31,
        .species = SPECIES_SWELLOW,
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
        .lvl = 30,
        .species = SPECIES_DODUO,
        IVS(12),
        },
        {
        .lvl = 30,
        .species = SPECIES_SKARMORY,
        IVS(12),
        },
        {
        .lvl = 30,
        .species = SPECIES_TROPIUS,
        IVS(12),
        }
    },
},

[TRAINER_HUMBERTO] =
{
    .trainerName = _("Humberto"),
    BIRD_KEEPER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 32,
        .species = SPECIES_SKARMORY,
        IVS(30),
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

[TRAINER_EDWARDO] =
{
    .trainerName = _("Edwardo"),
    BIRD_KEEPER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 31,
        .species = SPECIES_DODRIO,
        IVS(18),
        },
        {
        .lvl = 31,
        .species = SPECIES_PELIPPER,
        IVS(18),
        }
    },
},

[TRAINER_COLIN] =
{
    .trainerName = _("Colin"),
    BIRD_KEEPER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 33,
        .species = SPECIES_PELIPPER,
        },
        {
        .lvl = 33,
        .species = SPECIES_XATU,
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

[TRAINER_CHESTER] =
{
    .trainerName = _("Chester"),
    BIRD_KEEPER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 29,
        .species = SPECIES_SWELLOW,
        },
        {
        .lvl = 29,
        .species = SPECIES_SWELLOW,
        }
    },
},

[TRAINER_ROBERT_1] =
{
    .trainerName = _("Robert"),
    BIRD_KEEPER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 32,
        .species = SPECIES_SWABLU,
        }
    },
},

[TRAINER_ROBERT_2] =
{
    .trainerName = _("Robert"),
    BIRD_KEEPER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 35,
        .species = SPECIES_NATU,
        IVS(1),
        },
        {
        .lvl = 35,
        .species = SPECIES_SWABLU,
        IVS(1),
        }
    },
},

[TRAINER_ROBERT_3] =
{
    .trainerName = _("Robert"),
    BIRD_KEEPER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = REMATCH_3_LEVEL_2,
        .species = SPECIES_XATU,
        IVS(3),
        },
        {
        .lvl = REMATCH_3_LEVEL_2,
        .species = SPECIES_ALTARIA,
        IVS(3),
        }
    },
},

[TRAINER_ROBERT_4] =
{
    .trainerName = _("Robert"),
    BIRD_KEEPER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 41,
        .species = SPECIES_XATU,
        IVS(3),
        },
        {
        .lvl = 41,
        .species = SPECIES_ALTARIA,
        IVS(3),
        }
    },
},

[TRAINER_ROBERT_5] =
{
    .trainerName = _("Robert"),
    BIRD_KEEPER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 44,
        .species = SPECIES_SWELLOW,
        IVS(4),
        },
        {
        .lvl = 44,
        .species = SPECIES_XATU,
        IVS(4),
        },
        {
        .lvl = 44,
        .species = SPECIES_ALTARIA,
        IVS(4),
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

[TRAINER_BECK] =
{
    .trainerName = _("Beck"),
    BIRD_KEEPER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 42,
        .species = SPECIES_TROPIUS,
        }
    },
},

[TRAINER_YASU] =
{
    .trainerName = _("Yasu"),
    TRAINER_CLASS_PIC(NINJA_BOY),
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 32,
        .species = SPECIES_NINJASK,
        }
    },
},

[TRAINER_TAKASHI] =
{
    .trainerName = _("Takashi"),
    TRAINER_CLASS_PIC(NINJA_BOY),
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 30,
        .species = SPECIES_NINJASK,
        },
        {
        .lvl = 30,
        .species = SPECIES_KOFFING,
        }
    },
},

[TRAINER_DIANNE] =
{
    .trainerName = _("Dianne"),
    .trainerClass = TRAINER_CLASS_COOLTRAINER,
    .trainerPic = TRAINER_PIC_COOLTRAINER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
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

[TRAINER_JANI] =
{
    .trainerName = _("Jani"),
    TUBER_F_INFO,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 30,
        .species = SPECIES_AZUMARILL,
        }
    },
},

[TRAINER_LUNG] =
{
    .trainerName = _("Lung"),
    TRAINER_CLASS_PIC(NINJA_BOY),
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 23,
        .species = SPECIES_KOFFING,
        },
        {
        .lvl = 23,
        .species = SPECIES_NINJASK,
        }
    },
},

[TRAINER_LAO_1] =
{
    .trainerName = _("Lao"),
    TRAINER_CLASS_PIC(NINJA_BOY),
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 22,
        .species = SPECIES_TORKOAL,
        .moves = {MOVE_FLAME_WHEEL, MOVE_SMOKESCREEN, MOVE_RAPID_SPIN, MOVE_SMOG}
        },
        {
        .lvl = 22,
        .species = SPECIES_NINCADA,
        .moves = {MOVE_DIG, MOVE_MUD_SLAP, MOVE_SCRATCH, MOVE_SAND_ATTACK}
        },
        {
        .lvl = 22,
        .species = SPECIES_KOFFING,
        .moves = {MOVE_SLUDGE, MOVE_SMOKESCREEN, MOVE_POISON_GAS, MOVE_ASSURANCE}
        }
    },
},

[TRAINER_LAO_2] =
{
    .trainerName = _("Lao"),
    TRAINER_CLASS_PIC(NINJA_BOY),
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
    .partySize = 4,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 32,
        .species = SPECIES_TORKOAL,
        .moves = {MOVE_LAVA_PLUME, MOVE_SMOKESCREEN, MOVE_RAPID_SPIN, MOVE_SMOG}
        },
        {
        .lvl = 32,
        .species = SPECIES_SHEDINJA,
        .moves = {MOVE_SHADOW_CLAW, MOVE_DIG, MOVE_CONFUSE_RAY, MOVE_MUD_SLAP}
        },
        {
        .lvl = 32,
        .species = SPECIES_NINJASK,
        .moves = {MOVE_AERIAL_ACE, MOVE_BATON_PASS, MOVE_AGILITY, MOVE_DOUBLE_TEAM}
        },
        {
        .lvl = 32,
        .species = SPECIES_KOFFING,
        .moves = {MOVE_SLUDGE, MOVE_SMOKESCREEN, MOVE_POISON_GAS, MOVE_ASSURANCE}
        }
    },
},

[TRAINER_LAO_3] =
{
    .trainerName = _("Lao"),
    TRAINER_CLASS_PIC(NINJA_BOY),
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
    .partySize = 4,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = REMATCH_3_LEVEL_4,
        .species = SPECIES_TORKOAL,
        IVS(3),
        .moves = {MOVE_LAVA_PLUME, MOVE_SMOKESCREEN, MOVE_RAPID_SPIN, MOVE_SMOG}
        },
        {
        .lvl = REMATCH_3_LEVEL_4,
        .species = SPECIES_SHEDINJA,
        IVS(3),
        .moves = {MOVE_SHADOW_SNEAK, MOVE_DIG, MOVE_CONFUSE_RAY, MOVE_MUD_SLAP}
        },
        {
        .lvl = REMATCH_3_LEVEL_4,
        .species = SPECIES_NINJASK,
        IVS(3),
        .moves = {MOVE_AERIAL_ACE, MOVE_BATON_PASS, MOVE_AGILITY, MOVE_DOUBLE_TEAM}
        },
        {
        .lvl = REMATCH_3_LEVEL_4,
        .species = SPECIES_KOFFING,
        IVS(3),
        .moves = {MOVE_SLUDGE_BOMB, MOVE_SMOKESCREEN, MOVE_POISON_GAS, MOVE_ASSURANCE}
        }
    },
},

[TRAINER_LAO_4] =
{
    .trainerName = _("Lao"),
    TRAINER_CLASS_PIC(NINJA_BOY),
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
    .partySize = 4,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 36,
        .species = SPECIES_TORKOAL,
        IVS(3),
        .moves = {MOVE_LAVA_PLUME, MOVE_SMOKESCREEN, MOVE_RAPID_SPIN, MOVE_SMOG}
        },
        {
        .lvl = 36,
        .species = SPECIES_SHEDINJA,
        IVS(3),
        .moves = {MOVE_SHADOW_SNEAK, MOVE_DIG, MOVE_CONFUSE_RAY, MOVE_MUD_SLAP}
        },
        {
        .lvl = 36,
        .species = SPECIES_NINJASK,
        IVS(3),
        .moves = {MOVE_AERIAL_ACE, MOVE_BATON_PASS, MOVE_AGILITY, MOVE_DOUBLE_TEAM}
        },
        {
        .lvl = 36,
        .species = SPECIES_WEEZING,
        IVS(3),
        .moves = {MOVE_SLUDGE_BOMB, MOVE_SMOKESCREEN, MOVE_POISON_GAS, MOVE_ASSURANCE}
        }
    },
},

[TRAINER_LAO_5] =
{
    .trainerName = _("Lao"),
    TRAINER_CLASS_PIC(NINJA_BOY),
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
    .partySize = 4,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 40,
        .species = SPECIES_TORKOAL,
        IVS(4),
        .moves = {MOVE_FLAMETHROWER, MOVE_SMOKESCREEN, MOVE_RAPID_SPIN, MOVE_SMOG}
        },
        {
        .lvl = 40,
        .species = SPECIES_SHEDINJA,
        IVS(4),
        .moves = {MOVE_SHADOW_SNEAK, MOVE_DIG, MOVE_CONFUSE_RAY, MOVE_MUD_SLAP}
        },
        {
        .lvl = 40,
        .species = SPECIES_NINJASK,
        IVS(4),
        .moves = {MOVE_AERIAL_ACE, MOVE_BATON_PASS, MOVE_AGILITY, MOVE_DOUBLE_TEAM}
        },
        {
        .lvl = 40,
        .species = SPECIES_WEEZING,
        IVS(4),
        .heldItem = ITEM_SMOKE_BALL,
        .moves = {MOVE_SLUDGE_BOMB, MOVE_SMOKESCREEN, MOVE_POISON_GAS, MOVE_ASSURANCE}
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
        .lvl = 30,
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
        .lvl = 30,
        .species = SPECIES_BRELOOM,
        IVS(12),
        }
    },
},

[TRAINER_CYNDY_1] =
{
    .trainerName = _("Cyndy"),
    BATTLE_GIRL_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 23,
        .species = SPECIES_MAKUHITA,
        IVS(12),
        },
        {
        .lvl = 23,
        .species = SPECIES_MEDITITE,
        IVS(12),
        }
    },
},

[TRAINER_CYNDY_2] =
{
    .trainerName = _("Cyndy"),
    BATTLE_GIRL_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 34,
        .species = SPECIES_HARIYAMA,
        IVS(13),
        },
        {
        .lvl = 34,
        .species = SPECIES_MEDITITE,
        IVS(13),
        }
    },
},

[TRAINER_CYNDY_3] =
{
    .trainerName = _("Cyndy"),
    BATTLE_GIRL_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
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
    .trainerName = _("Cyndy"),
    BATTLE_GIRL_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 38,
        .species = SPECIES_HARIYAMA,
        IVS(15),
        },
        {
        .lvl = 38,
        .species = SPECIES_MEDICHAM,
        IVS(15),
        }
    },
},

[TRAINER_CYNDY_5] =
{
    .trainerName = _("Cyndy"),
    BATTLE_GIRL_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 42,
        .species = SPECIES_HARIYAMA,
        IVS(17),
        },
        {
        .lvl = 42,
        .species = SPECIES_MEDICHAM,
        IVS(17),
        }
    },
},

[TRAINER_CLARISSA] =
{
    .trainerName = _("Clarissa"),
    TRAINER_CLASS_PIC(PARASOL_LADY),
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 31,
        .species = SPECIES_ROSELIA,
        },
        {
        .lvl = 31,
        .species = SPECIES_WAILMER,
        }
    },
},

[TRAINER_ANGELICA] =
{
    .trainerName = _("Angelica"),
    TRAINER_CLASS_PIC(PARASOL_LADY),
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 33,
        .species = SPECIES_CASTFORM_NORMAL,
        IVS(6),
        .moves = {MOVE_RAIN_DANCE, MOVE_WEATHER_BALL, MOVE_THUNDER, MOVE_WATER_PULSE}
        }
    },
},

[TRAINER_MADELINE_1] =
{
    .trainerName = _("Madeline"),
    TRAINER_CLASS_PIC(PARASOL_LADY),
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 24,
        .species = SPECIES_NUMEL,
        .moves = {MOVE_LAVA_PLUME, MOVE_BULLDOZE, MOVE_AMNESIA, MOVE_SUNNY_DAY}
        }
    },
},

[TRAINER_MADELINE_2] =
{
    .trainerName = _("Madeline"),
    TRAINER_CLASS_PIC(PARASOL_LADY),
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 35,
        .species = SPECIES_NUMEL,
        IVS(1),
        .moves = {MOVE_LAVA_PLUME, MOVE_EARTH_POWER, MOVE_AMNESIA, MOVE_SUNNY_DAY}
        }
    },
},

[TRAINER_MADELINE_3] =
{
    .trainerName = _("Madeline"),
    TRAINER_CLASS_PIC(PARASOL_LADY),
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = REMATCH_3_LEVEL_2,
        .species = SPECIES_ROSELIA,
        IVS(3),
        .moves = {MOVE_GIGA_DRAIN, MOVE_LEECH_SEED, MOVE_GRASS_WHISTLE, MOVE_SUNNY_DAY}
        },
        {
        .lvl = REMATCH_3_LEVEL_2,
        .species = SPECIES_CAMERUPT,
        IVS(3),
        .moves = {MOVE_LAVA_PLUME, MOVE_EARTH_POWER, MOVE_AMNESIA, MOVE_SUNNY_DAY}
        }
    },
},

[TRAINER_MADELINE_4] =
{
    .trainerName = _("Madeline"),
    TRAINER_CLASS_PIC(PARASOL_LADY),
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 40,
        .species = SPECIES_ROSELIA,
        IVS(3),
        .moves = {MOVE_GIGA_DRAIN, MOVE_LEECH_SEED, MOVE_GRASS_WHISTLE, MOVE_SUNNY_DAY}
        },
        {
        .lvl = 40,
        .species = SPECIES_CAMERUPT,
        IVS(3),
        .moves = {MOVE_LAVA_PLUME, MOVE_EARTH_POWER, MOVE_AMNESIA, MOVE_SUNNY_DAY}
        }
    },
},

[TRAINER_MADELINE_5] =
{
    .trainerName = _("Madeline"),
    TRAINER_CLASS_PIC(PARASOL_LADY),
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 42,
        .species = SPECIES_SOLROCK,
        IVS(4),
        .moves = {MOVE_ROCK_SLIDE, MOVE_SOLAR_BEAM, MOVE_MORNING_SUN, MOVE_SUNNY_DAY}
        },
        {
        .lvl = 42,
        .species = SPECIES_ROSERADE,
        IVS(4),
        .moves = {MOVE_GIGA_DRAIN, MOVE_LEECH_SEED, MOVE_GRASS_WHISTLE, MOVE_SUNNY_DAY}
        },
        {
        .lvl = 42,
        .species = SPECIES_CAMERUPT,
        IVS(4),
        .moves = {MOVE_LAVA_PLUME, MOVE_EARTH_POWER, MOVE_AMNESIA, MOVE_SUNNY_DAY}
        }
    },
},

[TRAINER_BEVERLY] =
{
    .trainerName = _("Beverly"),
    .trainerClass = TRAINER_CLASS_SWIMMER,
    .trainerPic = TRAINER_PIC_SWIMMER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 29,
        .species = SPECIES_PELIPPER,
        },
        {
        .lvl = 29,
        .species = SPECIES_WAILMER,
        }
    },
},

[TRAINER_IMANI] =
{
    .trainerName = _("Imani"),
    .trainerClass = TRAINER_CLASS_SWIMMER,
    .trainerPic = TRAINER_PIC_SWIMMER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 30,
        .species = SPECIES_AZUMARILL,
        }
    },
},

[TRAINER_KYLA] =
{
    .trainerName = _("Kyla"),
    .trainerClass = TRAINER_CLASS_SWIMMER,
    .trainerPic = TRAINER_PIC_SWIMMER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 29,
        .species = SPECIES_GOLDEEN,
        },
        {
        .lvl = 29,
        .species = SPECIES_WAILMER,
        }
    },
},

[TRAINER_DENISE] =
{
    .trainerName = _("Denise"),
    .trainerClass = TRAINER_CLASS_SWIMMER,
    .trainerPic = TRAINER_PIC_SWIMMER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 29,
        .species = SPECIES_WINGULL,
        },
        {
        .lvl = 29,
        .species = SPECIES_GOLDEEN,
        }
    },
},

[TRAINER_BETH] =
{
    .trainerName = _("Beth"),
    .trainerClass = TRAINER_CLASS_SWIMMER,
    .trainerPic = TRAINER_PIC_SWIMMER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 30,
        .species = SPECIES_GOLDEEN,
        }
    },
},

[TRAINER_TARA] =
{
    .trainerName = _("Tara"),
    .trainerClass = TRAINER_CLASS_SWIMMER,
    .trainerPic = TRAINER_PIC_SWIMMER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 29,
        .species = SPECIES_HORSEA,
        },
        {
        .lvl = 29,
        .species = SPECIES_WAILMER,
        }
    },
},

[TRAINER_MISSY] =
{
    .trainerName = _("Missy"),
    .trainerClass = TRAINER_CLASS_SWIMMER,
    .trainerPic = TRAINER_PIC_SWIMMER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 30,
        .species = SPECIES_GOLDEEN,
        }
    },
},

[TRAINER_ALICE] =
{
    .trainerName = _("Alice"),
    .trainerClass = TRAINER_CLASS_SWIMMER,
    .trainerPic = TRAINER_PIC_SWIMMER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 28,
        .species = SPECIES_STARYU,
        },
        {
        .lvl = 28,
        .species = SPECIES_WINGULL,
        },
        {
        .lvl = 28,
        .species = SPECIES_GOLDEEN,
        }
    },
},

[TRAINER_GRACE] =
{
    .trainerName = _("Grace"),
    .trainerClass = TRAINER_CLASS_SWIMMER,
    .trainerPic = TRAINER_PIC_SWIMMER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 38,
        .species = SPECIES_AZUMARILL,
        }
    },
},

[TRAINER_TANYA] =
{
    .trainerName = _("Tanya"),
    .trainerClass = TRAINER_CLASS_SWIMMER,
    .trainerPic = TRAINER_PIC_SWIMMER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 38,
        .species = SPECIES_LUVDISC,
        }
    },
},

[TRAINER_SHARON] =
{
    .trainerName = _("Sharon"),
    .trainerClass = TRAINER_CLASS_SWIMMER,
    .trainerPic = TRAINER_PIC_SWIMMER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 38,
        .species = SPECIES_SEAKING,
        }
    },
},

[TRAINER_NIKKI] =
{
    .trainerName = _("Nikki"),
    .trainerClass = TRAINER_CLASS_SWIMMER,
    .trainerPic = TRAINER_PIC_SWIMMER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
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

[TRAINER_BRENDA] =
{
    .trainerName = _("Brenda"),
    .trainerClass = TRAINER_CLASS_SWIMMER,
    .trainerPic = TRAINER_PIC_SWIMMER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 42,
        .species = SPECIES_SEAKING,
        }
    },
},

[TRAINER_KATIE] =
{
    .trainerName = _("Katie"),
    .trainerClass = TRAINER_CLASS_SWIMMER,
    .trainerPic = TRAINER_PIC_SWIMMER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
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

[TRAINER_SUSIE] =
{
    .trainerName = _("Susie"),
    .trainerClass = TRAINER_CLASS_SWIMMER,
    .trainerPic = TRAINER_PIC_SWIMMER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 42,
        .species = SPECIES_LUVDISC,
        }
    },
},

[TRAINER_KARA] =
{
    .trainerName = _("Kara"),
    .trainerClass = TRAINER_CLASS_SWIMMER,
    .trainerPic = TRAINER_PIC_SWIMMER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 42,
        .species = SPECIES_SEAKING,
        }
    },
},

[TRAINER_DANA] =
{
    .trainerName = _("Dana"),
    .trainerClass = TRAINER_CLASS_SWIMMER,
    .trainerPic = TRAINER_PIC_SWIMMER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 42,
        .species = SPECIES_AZUMARILL,
        }
    },
},

[TRAINER_SIENNA] =
{
    .trainerName = _("Sienna"),
    .trainerClass = TRAINER_CLASS_SWIMMER,
    .trainerPic = TRAINER_PIC_SWIMMER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
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

[TRAINER_DEBRA] =
{
    .trainerName = _("Debra"),
    .trainerClass = TRAINER_CLASS_SWIMMER,
    .trainerPic = TRAINER_PIC_SWIMMER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 42,
        .species = SPECIES_SEAKING,
        }
    },
},

[TRAINER_LINDA] =
{
    .trainerName = _("Linda"),
    .trainerClass = TRAINER_CLASS_SWIMMER,
    .trainerPic = TRAINER_PIC_SWIMMER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
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

[TRAINER_KAYLEE] =
{
    .trainerName = _("Kaylee"),
    .trainerClass = TRAINER_CLASS_SWIMMER,
    .trainerPic = TRAINER_PIC_SWIMMER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
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

[TRAINER_LAUREL] =
{
    .trainerName = _("Laurel"),
    .trainerClass = TRAINER_CLASS_SWIMMER,
    .trainerPic = TRAINER_PIC_SWIMMER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
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

[TRAINER_CARLEE] =
{
    .trainerName = _("Carlee"),
    .trainerClass = TRAINER_CLASS_SWIMMER,
    .trainerPic = TRAINER_PIC_SWIMMER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 42,
        .species = SPECIES_SEAKING,
        }
    },
},

[TRAINER_JENNY_1] =
{
    .trainerName = _("Jenny"),
    .trainerClass = TRAINER_CLASS_SWIMMER,
    .trainerPic = TRAINER_PIC_SWIMMER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
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
    .trainerName = _("Jenny"),
    .trainerClass = TRAINER_CLASS_SWIMMER,
    .trainerPic = TRAINER_PIC_SWIMMER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
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
    .trainerName = _("Jenny"),
    .trainerClass = TRAINER_CLASS_SWIMMER,
    .trainerPic = TRAINER_PIC_SWIMMER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
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
    .trainerName = _("Jenny"),
    .trainerClass = TRAINER_CLASS_SWIMMER,
    .trainerPic = TRAINER_PIC_SWIMMER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 44,
        .species = SPECIES_LUVDISC,
        },
        {
        .lvl = 44,
        .species = SPECIES_STARYU,
        },
        {
        .lvl = 44,
        .species = SPECIES_WAILORD,
        }
    },
},

[TRAINER_JENNY_5] =
{
    .trainerName = _("Jenny"),
    .trainerClass = TRAINER_CLASS_SWIMMER,
    .trainerPic = TRAINER_PIC_SWIMMER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 45,
        .species = SPECIES_LUVDISC,
        },
        {
        .lvl = 45,
        .species = SPECIES_STARMIE,
        },
        {
        .lvl = 45,
        .species = SPECIES_WAILORD,
        }
    },
},

[TRAINER_HEIDI] =
{
    .trainerName = _("Heidi"),
    TRAINER_CLASS_PIC(PICNICKER),
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 26,
        .species = SPECIES_SANDSHREW,
        .moves = {MOVE_BULLDOZE, MOVE_SAND_TOMB, MOVE_RAPID_SPIN, MOVE_FURY_SWIPES}
        },
        {
        .lvl = 26,
        .species = SPECIES_BALTOY,
        .moves = {MOVE_RAPID_SPIN, MOVE_MUD_SLAP, MOVE_PSYBEAM, MOVE_ROCK_TOMB}
        }
    },
},

[TRAINER_BECKY] =
{
    .trainerName = _("Becky"),
    TRAINER_CLASS_PIC(PICNICKER),
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 26,
        .species = SPECIES_SANDSHREW,
        .moves = {MOVE_BULLDOZE, MOVE_SAND_TOMB, MOVE_RAPID_SPIN, MOVE_FURY_SWIPES}
        },
        {
        .lvl = 26,
        .species = SPECIES_MARILL,
        .moves = {MOVE_AQUA_TAIL, MOVE_PLAY_ROUGH, MOVE_CHARM, MOVE_AQUA_RING}
        }
    },
},

[TRAINER_CAROL] =
{
    .trainerName = _("Carol"),
    TRAINER_CLASS_PIC(PICNICKER),
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 21,
        .species = SPECIES_TAILLOW,
        },
        {
        .lvl = 21,
        .species = SPECIES_LOMBRE,
        }
    },
},

[TRAINER_NANCY] =
{
    .trainerName = _("Nancy"),
    TRAINER_CLASS_PIC(PICNICKER),
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 23,
        .species = SPECIES_MARILL,
        },
        {
        .lvl = 23,
        .species = SPECIES_LOMBRE,
        }
    },
},

[TRAINER_MARTHA] =
{
    .trainerName = _("Martha"),
    TRAINER_CLASS_PIC(PICNICKER),
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 26,
        .species = SPECIES_SKITTY,
        },
        {
        .lvl = 26,
        .species = SPECIES_SWABLU,
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
        .lvl = 36,
        .species = SPECIES_WOBBUFFET,
        .moves = {MOVE_DESTINY_BOND, MOVE_SAFEGUARD, MOVE_COUNTER, MOVE_MIRROR_COAT}
        }
    },
},

[TRAINER_IRENE] =
{
    .trainerName = _("Irene"),
    TRAINER_CLASS_PIC(PICNICKER),
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 21,
        .species = SPECIES_NUMEL,
        },
        {
        .lvl = 21,
        .species = SPECIES_MARILL,
        }
    },
},

[TRAINER_DIANA_1] =
{
    .trainerName = _("Diana"),
    TRAINER_CLASS_PIC(PICNICKER),
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 24,
        .species = SPECIES_SHROOMISH,
        },
        {
        .lvl = 24,
        .species = SPECIES_ODDISH,
        },
        {
        .lvl = 24,
        .species = SPECIES_SWABLU,
        }
    },
},

[TRAINER_DIANA_2] =
{
    .trainerName = _("Diana"),
    TRAINER_CLASS_PIC(PICNICKER),
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 33,
        .species = SPECIES_BRELOOM,
        IVS(1),
        },
        {
        .lvl = 33,
        .species = SPECIES_GLOOM,
        IVS(1),
        },
        {
        .lvl = 33,
        .species = SPECIES_SWABLU,
        IVS(1),
        }
    },
},

[TRAINER_DIANA_3] =
{
    .trainerName = _("Diana"),
    TRAINER_CLASS_PIC(PICNICKER),
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = REMATCH_3_LEVEL_3,
        .species = SPECIES_BRELOOM,
        IVS(3),
        },
        {
        .lvl = REMATCH_3_LEVEL_3,
        .species = SPECIES_VILEPLUME,
        IVS(3),
        },
        {
        .lvl = REMATCH_3_LEVEL_3,
        .species = SPECIES_ALTARIA,
        IVS(3),
        }
    },
},

[TRAINER_DIANA_4] =
{
    .trainerName = _("Diana"),
    TRAINER_CLASS_PIC(PICNICKER),
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 40,
        .species = SPECIES_BRELOOM,
        IVS(3),
        },
        {
        .lvl = 40,
        .species = SPECIES_VILEPLUME,
        IVS(3),
        },
        {
        .lvl = 40,
        .species = SPECIES_ALTARIA,
        IVS(3),
        }
    },
},

[TRAINER_DIANA_5] =
{
    .trainerName = _("Diana"),
    TRAINER_CLASS_PIC(PICNICKER),
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 45,
        .species = SPECIES_BRELOOM,
        IVS(4),
        },
        {
        .lvl = 45,
        .species = SPECIES_VILEPLUME,
        IVS(4),
        },
        {
        .lvl = 45,
        .species = SPECIES_ALTARIA,
        IVS(4),
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
        .lvl = 29,
        .species = SPECIES_BEAUTIFLY,
        },
        {
        .lvl = 29,
        .species = SPECIES_DUSTOX,
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

[TRAINER_DUNCAN] =
{
    .trainerName = _("Duncan"),
    SAILOR_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 29,
        .species = SPECIES_SPHEAL,
        },
        {
        .lvl = 29,
        .species = SPECIES_MACHOKE,
        }
    },
},

[TRAINER_ERNEST_1] =
{
    .trainerName = _("Ernest"),
    SAILOR_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
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
    .trainerName = _("Ernest"),
    SAILOR_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
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
    .trainerName = _("Ernest"),
    SAILOR_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
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
    .trainerName = _("Ernest"),
    SAILOR_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 4,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 44,
        .species = SPECIES_TENTACRUEL,
        IVS(3),
        },
        {
        .lvl = 44,
        .species = SPECIES_PELIPPER,
        IVS(3),
        },
        {
        .lvl = 44,
        .species = SPECIES_WAILORD,
        IVS(3),
        },
        {
        .lvl = 44,
        .species = SPECIES_MACHOKE,
        IVS(3),
        }
    },
},

[TRAINER_ERNEST_5] =
{
    .trainerName = _("Ernest"),
    SAILOR_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 4,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 46,
        .species = SPECIES_TENTACRUEL,
        IVS(4),
        },
        {
        .lvl = 46,
        .species = SPECIES_PELIPPER,
        IVS(4),
        },
        {
        .lvl = 46,
        .species = SPECIES_WAILORD,
        IVS(4),
        },
        {
        .lvl = 46,
        .species = SPECIES_MACHAMP,
        IVS(4),
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
        .lvl = 26,
        .species = SPECIES_NUMEL,
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
        .lvl = 43,
        .species = SPECIES_MAGIKARP,
        IVS(12),
        .heldItem = ITEM_ORAN_BERRY,
        .moves = {MOVE_HYDRO_PUMP, MOVE_BOUNCE, MOVE_FLAIL, MOVE_TACKLE}
        },
        {
        .lvl = 43,
        .species = SPECIES_FEEBAS,
        IVS(12),
        .heldItem = ITEM_ORAN_BERRY,
        .moves = {MOVE_WATER_PULSE, MOVE_FLAIL, MOVE_RETURN, MOVE_ATTRACT}
        }
    },
},

[TRAINER_JAZMYN] =
{
    .trainerName = _("Jazmyn"),
    .trainerClass = TRAINER_CLASS_COOLTRAINER_2,
    .trainerPic = TRAINER_PIC_COOLTRAINER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
    .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 29,
        .species = SPECIES_ABSOL,
        },
        {
        .lvl = 29,
        .species = SPECIES_TROPIUS,
        }
    },
},

[TRAINER_JONAS] =
{
    .trainerName = _("Jonas"),
    TRAINER_CLASS_PIC(NINJA_BOY),
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
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
    TRAINER_CLASS_PIC(PARASOL_LADY),
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
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

[TRAINER_AURON] =
{
    .trainerName = _("Auron"),
    .trainerClass = TRAINER_CLASS_EXPERT,
    .trainerPic = TRAINER_PIC_EXPERT_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
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

[TRAINER_MARLEY] =
{
    .trainerName = _("Marley"),
    .trainerClass = TRAINER_CLASS_COOLTRAINER,
    .trainerPic = TRAINER_PIC_COOLTRAINER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
    .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
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

[TRAINER_CONOR] =
{
    .trainerName = _("Conor"),
    .trainerClass = TRAINER_CLASS_EXPERT,
    .trainerPic = TRAINER_PIC_EXPERT_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
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

[TRAINER_HECTOR] =
{
    .trainerName = _("Hector"),
    COLLECTOR_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 23,
        .species = SPECIES_ZANGOOSE,
        },
        {
        .lvl = 23,
        .species = SPECIES_SEVIPER,
        }
    },
},

[TRAINER_DAVIS] =
{
    .trainerName = _("Davis"),
    BUG_CATCHER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 30,
        .species = SPECIES_PINSIR,
        }
    },
},

[TRAINER_MITCHELL] =
{
    .trainerName = _("Mitchell"),
    .trainerClass = TRAINER_CLASS_COOLTRAINER,
    .trainerPic = TRAINER_PIC_COOLTRAINER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
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
    .trainerClass = TRAINER_CLASS_COOLTRAINER,
    .trainerPic = TRAINER_PIC_COOLTRAINER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
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

[TRAINER_GARRISON] =
{
    .trainerName = _("Garrison"),
    TRAINER_CLASS_PIC(RUIN_MANIAC),
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 30,
        .species = SPECIES_SANDSLASH,
        }
    },
},

[TRAINER_LORENZO] =
{
    .trainerName = _("Lorenzo"),
    .trainerClass = TRAINER_CLASS_PKMN_RANGER,
    .trainerPic = TRAINER_PIC_POKEMON_RANGER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
    .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 31,
        .species = SPECIES_SHROOMISH,
        IVS(6),
        },
        {
        .lvl = 31,
        .species = SPECIES_NUZLEAF,
        IVS(6),
        },
        {
        .lvl = 31,
        .species = SPECIES_LOMBRE,
        IVS(6),
        }
    },
},

[TRAINER_SEBASTIAN] =
{
    .trainerName = _("Sebastian"),
    .trainerClass = TRAINER_CLASS_PKMN_RANGER,
    .trainerPic = TRAINER_PIC_POKEMON_RANGER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
    .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
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

[TRAINER_JACKSON_1] =
{
    .trainerName = _("Jackson"),
    .trainerClass = TRAINER_CLASS_PKMN_RANGER,
    .trainerPic = TRAINER_PIC_POKEMON_RANGER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
    .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 30,
        .species = SPECIES_TREECKO,
        IVS(6),
        },
        {
        .lvl = 30,
        .species = SPECIES_BRELOOM,
        IVS(6),
        }
    },
},

[TRAINER_JACKSON_2] =
{
    .trainerName = _("Jackson"),
    .trainerClass = TRAINER_CLASS_PKMN_RANGER,
    .trainerPic = TRAINER_PIC_POKEMON_RANGER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
    .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_SETUP_FIRST_TURN,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 34,
        .species = SPECIES_GROVYLE,
        IVS(7),
        },
        {
        .lvl = 34,
        .species = SPECIES_BRELOOM,
        IVS(7),
        }
    },
},

[TRAINER_JACKSON_3] =
{
    .trainerName = _("Jackson"),
    .trainerClass = TRAINER_CLASS_PKMN_RANGER,
    .trainerPic = TRAINER_PIC_POKEMON_RANGER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
    .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = REMATCH_3_LEVEL_3,
        .species = SPECIES_KECLEON,
        IVS(3),
        },
        {
        .lvl = REMATCH_3_LEVEL_3,
        .species = SPECIES_GROVYLE,
        IVS(3),
        },
        {
        .lvl = REMATCH_3_LEVEL_3,
        .species = SPECIES_BRELOOM,
        IVS(3),
        }
    },
},

[TRAINER_JACKSON_4] =
{
    .trainerName = _("Jackson"),
    .trainerClass = TRAINER_CLASS_PKMN_RANGER,
    .trainerPic = TRAINER_PIC_POKEMON_RANGER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
    .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_SETUP_FIRST_TURN,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 39,
        .species = SPECIES_KECLEON,
        IVS(9),
        },
        {
        .lvl = 39,
        .species = SPECIES_SCEPTILE,
        IVS(9),
        },
        {
        .lvl = 39,
        .species = SPECIES_BRELOOM,
        IVS(9),
        }
    },
},

[TRAINER_JACKSON_5] =
{
    .trainerName = _("Jackson"),
    .trainerClass = TRAINER_CLASS_PKMN_RANGER,
    .trainerPic = TRAINER_PIC_POKEMON_RANGER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
    .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 42,
        .species = SPECIES_KECLEON,
        IVS(10),
        },
        {
        .lvl = 42,
        .species = SPECIES_SCEPTILE,
        IVS(10),
        },
        {
        .lvl = 42,
        .species = SPECIES_BRELOOM,
        IVS(10),
        }
    },
},

[TRAINER_JENNA] =
{
    .trainerName = _("Jenna"),
    .trainerClass = TRAINER_CLASS_PKMN_RANGER,
    .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
    .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_SETUP_FIRST_TURN,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 31,
        .species = SPECIES_SHROOMISH,
        IVS(6),
        },
        {
        .lvl = 31,
        .species = SPECIES_LOMBRE,
        IVS(6),
        },
        {
        .lvl = 31,
        .species = SPECIES_NUZLEAF,
        IVS(6),
        }
    },
},

[TRAINER_SOPHIA] =
{
    .trainerName = _("Sophia"),
    .trainerClass = TRAINER_CLASS_PKMN_RANGER,
    .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
    .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
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

[TRAINER_CATHERINE_1] =
{
    .trainerName = _("Catherine"),
    .trainerClass = TRAINER_CLASS_PKMN_RANGER,
    .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
    .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_SETUP_FIRST_TURN,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 30,
        .species = SPECIES_GLOOM,
        IVS(6),
        },
        {
        .lvl = 30,
        .species = SPECIES_ROSELIA,
        IVS(6),
        }
    },
},

[TRAINER_CATHERINE_2] =
{
    .trainerName = _("Catherine"),
    .trainerClass = TRAINER_CLASS_PKMN_RANGER,
    .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
    .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_SETUP_FIRST_TURN,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 34,
        .species = SPECIES_GLOOM,
        IVS(7),
        },
        {
        .lvl = 34,
        .species = SPECIES_ROSELIA,
        IVS(7),
        }
    },
},

[TRAINER_CATHERINE_3] =
{
    .trainerName = _("Catherine"),
    .trainerClass = TRAINER_CLASS_PKMN_RANGER,
    .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
    .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = REMATCH_3_LEVEL_2,
        .species = SPECIES_GLOOM,
        IVS(3),
        },
        {
        .lvl = REMATCH_3_LEVEL_2,
        .species = SPECIES_ROSELIA,
        IVS(3),
        }
    },
},

[TRAINER_CATHERINE_4] =
{
    .trainerName = _("Catherine"),
    .trainerClass = TRAINER_CLASS_PKMN_RANGER,
    .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
    .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_SETUP_FIRST_TURN,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 39,
        .species = SPECIES_GLOOM,
        IVS(9),
        },
        {
        .lvl = 39,
        .species = SPECIES_ROSELIA,
        IVS(9),
        }
    },
},

[TRAINER_CATHERINE_5] =
{
    .trainerName = _("Catherine"),
    .trainerClass = TRAINER_CLASS_PKMN_RANGER,
    .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
    .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 42,
        .species = SPECIES_BELLOSSOM,
        IVS(10),
        },
        {
        .lvl = 42,
        .species = SPECIES_ROSERADE,
        IVS(10),
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
        .lvl = 26,
        .species = SPECIES_MAGNEMITE,
        }
    },
},

[TRAINER_SYLVIA] =
{
    .trainerName = _("Sylvia"),
    TRAINER_CLASS_PIC(HEX_MANIAC),
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
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

[TRAINER_LEONARDO] =
{
    .trainerName = _("Leonardo"),
    .trainerClass = TRAINER_CLASS_SWIMMER,
    .trainerPic = TRAINER_PIC_SWIMMER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 42,
        .species = SPECIES_SHARPEDO,
        }
    },
},

[TRAINER_ATHENA] =
{
    .trainerName = _("Athena"),
    .trainerClass = TRAINER_CLASS_COOLTRAINER,
    .trainerPic = TRAINER_PIC_COOLTRAINER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
    .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
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

[TRAINER_HARRISON] =
{
    .trainerName = _("Harrison"),
    .trainerClass = TRAINER_CLASS_SWIMMER,
    .trainerPic = TRAINER_PIC_SWIMMER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 42,
        .species = SPECIES_TENTACRUEL,
        }
    },
},

[TRAINER_CLARENCE] =
{
    .trainerName = _("Clarence"),
    .trainerClass = TRAINER_CLASS_SWIMMER,
    .trainerPic = TRAINER_PIC_SWIMMER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 42,
        .species = SPECIES_SHARPEDO,
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

[TRAINER_NATE] =
{
    .trainerName = _("Nate"),
    TRAINER_CLASS_PIC(GENTLEMAN),
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_RICH,
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

[TRAINER_KATHLEEN] =
{
    .trainerName = _("Kathleen"),
    TRAINER_CLASS_PIC(HEX_MANIAC),
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
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

[TRAINER_CLIFFORD] =
{
    .trainerName = _("Clifford"),
    TRAINER_CLASS_PIC(GENTLEMAN),
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_RICH,
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

[TRAINER_PAXTON] =
{
    .trainerName = _("Paxton"),
    .trainerClass = TRAINER_CLASS_EXPERT,
    .trainerPic = TRAINER_PIC_EXPERT_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
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

[TRAINER_ISABELLA] =
{
    .trainerName = _("Isabella"),
    TRIATHLETE_F_SWIMMING_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 38,
        .species = SPECIES_STARMIE,
        }
    },
},

[TRAINER_JONATHAN] =
{
    .trainerName = _("Jonathan"),
    .trainerClass = TRAINER_CLASS_COOLTRAINER,
    .trainerPic = TRAINER_PIC_COOLTRAINER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
    .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
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
        .lvl = 18,
        .species = SPECIES_NUMEL,
        .ev = EV_SPREAD_SPA_SPE_HP,
        IVS(12),
        },
        {
        .lvl = 18,
        .species = SPECIES_SHROOMISH,
        .ev = EV_SPREAD_ATK_SPE_HP,
        IVS(12),
        },
        {
        .lvl = 18,
        .species = SPECIES_GOLDEEN,
        .ev = EV_SPREAD_ATK_SPE_HP,
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

[TRAINER_DOUG] =
{
    .trainerName = _("Doug"),
    BUG_CATCHER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 30,
        .species = SPECIES_SHEDINJA,
        },
        {
        .lvl = 30,
        .species = SPECIES_NINJASK,
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
        .lvl = 30,
        .species = SPECIES_VOLBEAT,
        },
        {
        .lvl = 30,
        .species = SPECIES_ILLUMISE,
        }
    },
},

[TRAINER_KENT] =
{
    .trainerName = _("Kent"),
    BUG_CATCHER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 31,
        .species = SPECIES_NINJASK,
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
        .lvl = 21,
        .species = SPECIES_NUMEL,
        },
        {
        .lvl = 21,
        .species = SPECIES_MACHOP,
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
        .lvl = 23,
        .species = SPECIES_GEODUDE,
        },
        {
        .lvl = 23,
        .species = SPECIES_MACHOP,
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
        .lvl = 23,
        .species = SPECIES_GEODUDE,
        },
        {
        .lvl = 23,
        .species = SPECIES_NUMEL,
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
        .lvl = 25,
        .species = SPECIES_RHYHORN,
        },
        {
        .lvl = 25,
        .species = SPECIES_NOSEPASS,
        },
        {
        .lvl = 25,
        .species = SPECIES_GRAVELER,
        }
    },
},

[TRAINER_ERIC] =
{
    .trainerName = _("Eric"),
    HIKER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 25,
        .species = SPECIES_MACHOP,
        },
        {
        .lvl = 25,
        .species = SPECIES_BALTOY,
        }
    },
},

[TRAINER_TRENT_1] =
{
    .trainerName = _("Trent"),
    HIKER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 20,
        .species = SPECIES_GEODUDE,
        },
        {
        .lvl = 20,
        .species = SPECIES_GEODUDE,
        },
        {
        .lvl = 20,
        .species = SPECIES_GEODUDE,
        }
    },
},

[TRAINER_TRENT_2] =
{
    .trainerName = _("Trent"),
    HIKER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 4,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 32,
        .species = SPECIES_GEODUDE,
        IVS(1),
        },
        {
        .lvl = 32,
        .species = SPECIES_GEODUDE,
        IVS(1),
        },
        {
        .lvl = 32,
        .species = SPECIES_GEODUDE,
        IVS(1),
        },
        {
        .lvl = 32,
        .species = SPECIES_GRAVELER,
        IVS(1),
        }
    },
},

[TRAINER_TRENT_3] =
{
    .trainerName = _("Trent"),
    HIKER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 4,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = REMATCH_3_LEVEL_4,
        .species = SPECIES_GRAVELER,
        IVS(3),
        },
        {
        .lvl = REMATCH_3_LEVEL_4,
        .species = SPECIES_GRAVELER,
        IVS(3),
        },
        {
        .lvl = REMATCH_3_LEVEL_4,
        .species = SPECIES_GRAVELER,
        IVS(3),
        },
        {
        .lvl = REMATCH_3_LEVEL_4,
        .species = SPECIES_GRAVELER,
        IVS(3),
        }
    },
},

[TRAINER_TRENT_4] =
{
    .trainerName = _("Trent"),
    HIKER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 4,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 36,
        .species = SPECIES_GRAVELER,
        IVS(3),
        },
        {
        .lvl = 36,
        .species = SPECIES_GRAVELER,
        IVS(3),
        },
        {
        .lvl = 36,
        .species = SPECIES_GRAVELER,
        IVS(3),
        },
        {
        .lvl = 36,
        .species = SPECIES_GOLEM,
        IVS(3),
        }
    },
},

[TRAINER_TRENT_5] =
{
    .trainerName = _("Trent"),
    HIKER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 4,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 40,
        .species = SPECIES_GOLEM,
        IVS(4),
        },
        {
        .lvl = 40,
        .species = SPECIES_GOLEM,
        IVS(4),
        },
        {
        .lvl = 40,
        .species = SPECIES_GOLEM,
        IVS(4),
        },
        {
        .lvl = 40,
        .species = SPECIES_GOLEM,
        IVS(4),
        }
    },
},

[TRAINER_DEZ_AND_LUKE] =
{
    .trainerName = _("Dez & Luke"),
    TRAINER_CLASS_PIC(YOUNG_COUPLE),
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL,
    .doubleBattle = TRUE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 35,
        .species = SPECIES_DELCATTY,
        },
        {
        .lvl = 35,
        .species = SPECIES_MANECTRIC,
        }
    },
},

[TRAINER_LEA_AND_JED] =
{
    .trainerName = _("Lea & Jed"),
    TRAINER_CLASS_PIC(YOUNG_COUPLE),
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL,
    .doubleBattle = TRUE,
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

[TRAINER_KIRA_AND_DAN_1] =
{
    .trainerName = _("Kira & Dan"),
    TRAINER_CLASS_PIC(YOUNG_COUPLE),
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL,
    .doubleBattle = TRUE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 30,
        .species = SPECIES_VOLBEAT,
        },
        {
        .lvl = 30,
        .species = SPECIES_ILLUMISE,
        }
    },
},

[TRAINER_KIRA_AND_DAN_2] =
{
    .trainerName = _("Kira & Dan"),
    TRAINER_CLASS_PIC(YOUNG_COUPLE),
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL,
    .doubleBattle = TRUE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 34,
        .species = SPECIES_VOLBEAT,
        IVS(1),
        },
        {
        .lvl = 34,
        .species = SPECIES_ILLUMISE,
        IVS(1),
        }
    },
},

[TRAINER_KIRA_AND_DAN_3] =
{
    .trainerName = _("Kira & Dan"),
    TRAINER_CLASS_PIC(YOUNG_COUPLE),
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL,
    .doubleBattle = TRUE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = REMATCH_3_LEVEL_2,
        .species = SPECIES_VOLBEAT,
        IVS(3),
        },
        {
        .lvl = REMATCH_3_LEVEL_2,
        .species = SPECIES_ILLUMISE,
        IVS(3),
        }
    },
},

[TRAINER_KIRA_AND_DAN_4] =
{
    .trainerName = _("Kira & Dan"),
    TRAINER_CLASS_PIC(YOUNG_COUPLE),
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL,
    .doubleBattle = TRUE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 39,
        .species = SPECIES_VOLBEAT,
        IVS(3),
        },
        {
        .lvl = 39,
        .species = SPECIES_ILLUMISE,
        IVS(3),
        }
    },
},

[TRAINER_KIRA_AND_DAN_5] =
{
    .trainerName = _("Kira & Dan"),
    TRAINER_CLASS_PIC(YOUNG_COUPLE),
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL,
    .doubleBattle = TRUE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 42,
        .species = SPECIES_VOLBEAT,
        IVS(4),
        },
        {
        .lvl = 42,
        .species = SPECIES_ILLUMISE,
        IVS(4),
        }
    },
},

[TRAINER_GERALD] =
{
    .trainerName = _("Gerald"),
    .trainerClass = TRAINER_CLASS_COOLTRAINER,
    .trainerPic = TRAINER_PIC_COOLTRAINER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
    .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 26,
        .species = SPECIES_TORCHIC,
        IVS(12),
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
        .lvl = 26,
        .species = SPECIES_COMBUSKEN,
        IVS(12),
        }
    },
},

[TRAINER_HIDEO] =
{
    .trainerName = _("Hideo"),
    TRAINER_CLASS_PIC(NINJA_BOY),
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 31,
        .species = SPECIES_KOFFING,
        .moves = {MOVE_TACKLE, MOVE_GYRO_BALL, MOVE_SLUDGE, MOVE_SMOKESCREEN}
        },
        {
        .lvl = 31,
        .species = SPECIES_KOFFING,
        .moves = {MOVE_TACKLE, MOVE_POISON_GAS, MOVE_SLUDGE, MOVE_SMOKESCREEN}
        }
    },
},

[TRAINER_KEIGO] =
{
    .trainerName = _("Keigo"),
    TRAINER_CLASS_PIC(NINJA_BOY),
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 32,
        .species = SPECIES_KOFFING,
        .moves = {MOVE_POISON_GAS, MOVE_SELF_DESTRUCT, MOVE_SLUDGE, MOVE_SMOKESCREEN}
        },
        {
        .lvl = 32,
        .species = SPECIES_NINJASK,
        .moves = {MOVE_SAND_ATTACK, MOVE_DOUBLE_TEAM, MOVE_FURY_CUTTER, MOVE_SWORDS_DANCE}
        }
    },
},

[TRAINER_RILEY] =
{
    .trainerName = _("Riley"),
    TRAINER_CLASS_PIC(NINJA_BOY),
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 32,
        .species = SPECIES_NINJASK,
        .moves = {MOVE_BUG_BITE, MOVE_FURY_SWIPES, MOVE_MIND_READER, MOVE_DIG}
        },
        {
        .lvl = 32,
        .species = SPECIES_KOFFING,
        .moves = {MOVE_TACKLE, MOVE_SELF_DESTRUCT, MOVE_SLUDGE, MOVE_SMOKESCREEN}
        }
    },
},

[TRAINER_FLINT] =
{
    .trainerName = _("Flint"),
    TRAINER_CLASS_PIC(CAMPER),
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 31,
        .species = SPECIES_SWELLOW,
        IVS(18),
        },
        {
        .lvl = 31,
        .species = SPECIES_XATU,
        IVS(18),
        }
    },
},

[TRAINER_ASHLEY] =
{
    .trainerName = _("Ashley"),
    TRAINER_CLASS_PIC(PICNICKER),
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 30,
        .species = SPECIES_SWABLU,
        IVS(12),
        },
        {
        .lvl = 30,
        .species = SPECIES_SWABLU,
        IVS(12),
        },
        {
        .lvl = 30,
        .species = SPECIES_SWABLU,
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

[TRAINER_ALEXA] =
{
    .trainerName = _("Alexa"),
    .trainerClass = TRAINER_CLASS_COOLTRAINER,
    .trainerPic = TRAINER_PIC_COOLTRAINER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
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

[TRAINER_RUBEN] =
{
    .trainerName = _("Ruben"),
    .trainerClass = TRAINER_CLASS_COOLTRAINER,
    .trainerPic = TRAINER_PIC_COOLTRAINER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
    .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
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

[TRAINER_REED] =
{
    .trainerName = _("Reed"),
    .trainerClass = TRAINER_CLASS_SWIMMER,
    .trainerPic = TRAINER_PIC_SWIMMER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
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

[TRAINER_TISHA] =
{
    .trainerName = _("Tisha"),
    .trainerClass = TRAINER_CLASS_SWIMMER,
    .trainerPic = TRAINER_PIC_SWIMMER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 42,
        .species = SPECIES_LANTURN,
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
        .lvl = 23,
        .species = SPECIES_SPINDA,
        .ability = ABILITY_TANGLED_FEET,
        .nature = NATURE_ADAMANT,
        .gender = TRAINER_MON_MALE,
        },
        {
        .lvl = 23,
        .species = SPECIES_SPINDA,
        .ability = ABILITY_OWN_TEMPO,
        .nature = NATURE_MODEST,
        .gender = TRAINER_MON_FEMALE,
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

[TRAINER_TYRA_AND_IVY] =
{
    .trainerName = _("Tyra & Ivy"),
    TEAMMATES_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 21,
        .species = SPECIES_ROSELIA,
        .moves = {MOVE_MAGICAL_LEAF, MOVE_STUN_SPORE, MOVE_GROWTH, MOVE_LEECH_SEED}
        },
        {
        .lvl = 23,
        .species = SPECIES_GEODUDE,
        .moves = {MOVE_SMACK_DOWN, MOVE_BULLDOZE, MOVE_DEFENSE_CURL, MOVE_ROLLOUT}
        }
    },
},

[TRAINER_MEL_AND_PAUL] =
{
    .trainerName = _("Mel & Paul"),
    TRAINER_CLASS_PIC(YOUNG_COUPLE),
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL,
    .doubleBattle = TRUE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 29,
        .species = SPECIES_DUSTOX,
        .moves = {MOVE_SILVER_WIND, MOVE_VENOSHOCK, MOVE_TOXIC, MOVE_PROTECT}
        },
        {
        .lvl = 29,
        .species = SPECIES_BEAUTIFLY,
        .moves = {MOVE_LEECH_LIFE, MOVE_AIR_CUTTER, MOVE_ATTRACT, MOVE_STUN_SPORE}
        }
    },
},

[TRAINER_JOHN_AND_JAY_1] =
{
    .trainerName = _("John & Jay"),
    TRAINER_CLASS_PIC(OLD_COUPLE),
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = TRUE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
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
    .trainerName = _("John & Jay"),
    TRAINER_CLASS_PIC(OLD_COUPLE),
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = TRUE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
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
    .trainerName = _("John & Jay"),
    TRAINER_CLASS_PIC(OLD_COUPLE),
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = TRUE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
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
    .trainerName = _("John & Jay"),
    TRAINER_CLASS_PIC(OLD_COUPLE),
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = TRUE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_SETUP_FIRST_TURN,
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
    .trainerName = _("John & Jay"),
    TRAINER_CLASS_PIC(OLD_COUPLE),
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = TRUE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
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

[TRAINER_RELI_AND_IAN] =
{
    .trainerName = _("Reli & Ian"),
    TRAINER_CLASS_PIC(SIS_AND_BRO),
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .doubleBattle = TRUE,
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

[TRAINER_LILA_AND_ROY_1] =
{
    .trainerName = _("Lila & Roy"),
    TRAINER_CLASS_PIC(SIS_AND_BRO),
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .doubleBattle = TRUE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
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
    .trainerName = _("Lila & Roy"),
    TRAINER_CLASS_PIC(SIS_AND_BRO),
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .doubleBattle = TRUE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
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
    .trainerName = _("Lila & Roy"),
    TRAINER_CLASS_PIC(SIS_AND_BRO),
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .doubleBattle = TRUE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
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
    .trainerName = _("Lila & Roy"),
    TRAINER_CLASS_PIC(SIS_AND_BRO),
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .doubleBattle = TRUE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 48,
        .species = SPECIES_LANTURN,
        },
        {
        .lvl = 46,
        .species = SPECIES_SEADRA,
        }
    },
},

[TRAINER_LILA_AND_ROY_5] =
{
    .trainerName = _("Lila & Roy"),
    TRAINER_CLASS_PIC(SIS_AND_BRO),
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .doubleBattle = TRUE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 51,
        .species = SPECIES_LANTURN,
        },
        {
        .lvl = 49,
        .species = SPECIES_KINGDRA,
        }
    },
},

[TRAINER_LISA_AND_RAY] =
{
    .trainerName = _("Lisa & Ray"),
    TRAINER_CLASS_PIC(SIS_AND_BRO),
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .doubleBattle = TRUE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 30,
        .species = SPECIES_GOLDEEN,
        },
        {
        .lvl = 28,
        .species = SPECIES_TENTACOOL,
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
        .lvl = 28,
        .species = SPECIES_GYARADOS,
        },
        {
        .lvl = 28,
        .species = SPECIES_TENTACOOL,
        },
        {
        .lvl = 28,
        .species = SPECIES_FEEBAS,
        },
        {
        .lvl = 28,
        .species = SPECIES_CARVANHA,
        }
    },
},

[TRAINER_TYRON] =
{
    .trainerName = _("Tyron"),
    TRAINER_CLASS_PIC(CAMPER),
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 19,
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
        .lvl = 19,
        .species = SPECIES_ROSELIA,
        }
    },
},

[TRAINER_BIANCA] =
{
    .trainerName = _("Bianca"),
    TRAINER_CLASS_PIC(PICNICKER),
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 19,
        .species = SPECIES_SHROOMISH,
        }
    },
},

[TRAINER_HAYDEN] =
{
    .trainerName = _("Hayden"),
    TRAINER_CLASS_PIC(KINDLER),
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 19,
        .species = SPECIES_NUMEL,
        }
    },
},

[TRAINER_SOPHIE] =
{
    .trainerName = _("Sophie"),
    TRAINER_CLASS_PIC(PICNICKER),
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 23,
        .species = SPECIES_AZUMARILL,
        },
        {
        .lvl = 23,
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
        .lvl = 23,
        .species = SPECIES_SWELLOW,
        },
        {
        .lvl = 23,
        .species = SPECIES_SKARMORY,
        }
    },
},

[TRAINER_LAWRENCE] =
{
    .trainerName = _("Lawrence"),
    TRAINER_CLASS_PIC(CAMPER),
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 23,
        .species = SPECIES_BALTOY,
        },
        {
        .lvl = 23,
        .species = SPECIES_SANDSHREW,
        }
    },
},

[TRAINER_WYATT] =
{
    .trainerName = _("Wyatt"),
    TRAINER_CLASS_PIC(POKEMANIAC),
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 23,
        .species = SPECIES_RHYHORN,
        },
        {
        .lvl = 23,
        .species = SPECIES_ARON,
        }
    },
},

[TRAINER_ANGELINA] =
{
    .trainerName = _("Angelina"),
    TRAINER_CLASS_PIC(PICNICKER),
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 23,
        .species = SPECIES_LOMBRE,
        },
        {
        .lvl = 23,
        .species = SPECIES_MARILL,
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
        .lvl = 24,
        .species = SPECIES_BARBOACH,
        }
    },
},

[TRAINER_CHARLOTTE] =
{
    .trainerName = _("Charlotte"),
    TRAINER_CLASS_PIC(PICNICKER),
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 24,
        .species = SPECIES_NUZLEAF,
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
        .lvl = 17,
        .species = SPECIES_ZIGZAGOON,
        },
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

[TRAINER_DARCY] =
{
    .trainerName = _("Darcy"),
    .trainerClass = TRAINER_CLASS_COOLTRAINER,
    .trainerPic = TRAINER_PIC_COOLTRAINER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
    .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
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

[TRAINER_PETE] =
{
    .trainerName = _("Pete"),
    .trainerClass = TRAINER_CLASS_SWIMMER,
    .trainerPic = TRAINER_PIC_SWIMMER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 30,
        .species = SPECIES_TENTACRUEL,
        }
    },
},

[TRAINER_ISABELLE] =
{
    .trainerName = _("Isabelle"),
    .trainerClass = TRAINER_CLASS_SWIMMER,
    .trainerPic = TRAINER_PIC_SWIMMER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 30,
        .species = SPECIES_AZUMARILL,
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
        .lvl = 29,
        .species = SPECIES_SWELLOW,
        IVS(6),
        },
        {
        .lvl = 29,
        .species = SPECIES_PELIPPER,
        IVS(6),
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
        .lvl = 30,
        .species = SPECIES_STARYU,
        }
    },
},

[TRAINER_CAROLINA] =
{
    .trainerName = _("Carolina"),
    .trainerClass = TRAINER_CLASS_COOLTRAINER,
    .trainerPic = TRAINER_PIC_COOLTRAINER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
    .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 28,
        .species = SPECIES_SEVIPER,
        IVS(6),
        },
        {
        .lvl = 28,
        .species = SPECIES_SWELLOW,
        IVS(6),
        },
        {
        .lvl = 28,
        .species = SPECIES_MANECTRIC,
        IVS(6),
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
        .lvl = 29,
        .species = SPECIES_PELIPPER,
        },
        {
        .lvl = 29,
        .species = SPECIES_SKARMORY,
        }
    },
},

[TRAINER_CELIA] =
{
    .trainerName = _("Celia"),
    TRAINER_CLASS_PIC(PICNICKER),
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 26,
        .species = SPECIES_AZUMARILL,
        },
        {
        .lvl = 26,
        .species = SPECIES_LOMBRE,
        }
    },
},

[TRAINER_BRYAN] =
{
    .trainerName = _("Bryan"),
    TRAINER_CLASS_PIC(RUIN_MANIAC),
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 26,
        .species = SPECIES_TRAPINCH,
        },
        {
        .lvl = 26,
        .species = SPECIES_SANDSHREW,
        }
    },
},

[TRAINER_BRANDEN] =
{
    .trainerName = _("Branden"),
    TRAINER_CLASS_PIC(CAMPER),
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 25,
        .species = SPECIES_TAILLOW,
        },
        {
        .lvl = 25,
        .species = SPECIES_NUZLEAF,
        },
        {
        .lvl = 25,
        .species = SPECIES_SANDSHREW,
        }
    },
},

[TRAINER_BRYANT] =
{
    .trainerName = _("Bryant"),
    TRAINER_CLASS_PIC(KINDLER),
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 23,
        .species = SPECIES_NUMEL,
        },
        {
        .lvl = 23,
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
        .lvl = 23,
        .species = SPECIES_SHROOMISH,
        },
        {
        .lvl = 23,
        .species = SPECIES_ROSELIA,
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
        .lvl = 29,
        .species = SPECIES_JIGGLYPUFF,
        },
        {
        .lvl = 29,
        .species = SPECIES_DODUO,
        }
    },
},

[TRAINER_JAIDEN] =
{
    .trainerName = _("Jaiden"),
    TRAINER_CLASS_PIC(NINJA_BOY),
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 29,
        .species = SPECIES_NINJASK,
        },
        {
        .lvl = 29,
        .species = SPECIES_GULPIN,
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
        .lvl = 29,
        .species = SPECIES_KADABRA,
        },
        {
        .lvl = 29,
        .species = SPECIES_KIRLIA,
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
        .lvl = 29,
        .species = SPECIES_MAKUHITA,
        },
        {
        .lvl = 29,
        .species = SPECIES_MEDITITE,
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
        .lvl = 23,
        .species = SPECIES_BALTOY,
        },
        {
        .lvl = 23,
        .species = SPECIES_SPOINK,
        }
    },
},

[TRAINER_MAKAYLA] =
{
    .trainerName = _("Makayla"),
    .trainerClass = TRAINER_CLASS_EXPERT,
    .trainerPic = TRAINER_PIC_EXPERT_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
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

[TRAINER_FABIAN] =
{
    .trainerName = _("Fabian"),
    GUITARIST_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 32,
        .species = SPECIES_MANECTRIC,
        }
    },
},

[TRAINER_DAYTON] =
{
    .trainerName = _("Dayton"),
    TRAINER_CLASS_PIC(KINDLER),
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 30,
        .species = SPECIES_SLUGMA,
        },
        {
        .lvl = 30,
        .species = SPECIES_NUMEL,
        }
    },
},

[TRAINER_RACHEL] =
{
    .trainerName = _("Rachel"),
    TRAINER_CLASS_PIC(PARASOL_LADY),
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 31,
        .species = SPECIES_GOLDEEN,
        }
    },
},

[TRAINER_LEONEL] =
{
    .trainerName = _("Leonel"),
    .trainerClass = TRAINER_CLASS_COOLTRAINER,
    .trainerPic = TRAINER_PIC_COOLTRAINER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
    .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 33,
        .species = SPECIES_MANECTRIC,
        IVS(12),
        .moves = {MOVE_THUNDER, MOVE_QUICK_ATTACK, MOVE_THUNDER_WAVE, MOVE_ROAR}
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
        .lvl = 32,
        .species = SPECIES_MEDITITE,
        },
        {
        .lvl = 32,
        .species = SPECIES_MAKUHITA,
        }
    },
},

[TRAINER_CALE] =
{
    .trainerName = _("Cale"),
    BUG_MANIAC_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 33,
        .species = SPECIES_DUSTOX,
        },
        {
        .lvl = 33,
        .species = SPECIES_BEAUTIFLY,
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
        .lvl = 29,
        .species = SPECIES_NUMEL,
        IVS(1),
        },
        {
        .lvl = 29,
        .species = SPECIES_HARIYAMA,
        IVS(1),
        },
        {
        .lvl = 29,
        .species = SPECIES_PELIPPER,
        IVS(1),
        },
        {
        .lvl = 29,
        .species = SPECIES_LINOONE,
        IVS(1),
        },
        {
        .lvl = 29,
        .species = SPECIES_MANECTRIC,
        IVS(1),
        },
        {
        .lvl = 29,
        .species = SPECIES_TROPIUS,
        IVS(1),
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
        .lvl = 29,
        .species = SPECIES_MIGHTYENA,
        IVS(1),
        },
        {
        .lvl = 29,
        .species = SPECIES_BRELOOM,
        IVS(1),
        },
        {
        .lvl = 29,
        .species = SPECIES_MANECTRIC,
        IVS(1),
        },
        {
        .lvl = 29,
        .species = SPECIES_AZUMARILL,
        IVS(1),
        },
        {
        .lvl = 29,
        .species = SPECIES_SANDSLASH,
        IVS(1),
        },
        {
        .lvl = 29,
        .species = SPECIES_SWALOT,
        IVS(1),
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
        .lvl = 32,
        .species = SPECIES_TROPIUS,
        IVS(24),
        }
    },
},

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

[TRAINER_ANDRES_1] =
{
    .trainerName = _("Andres"),
    TRAINER_CLASS_PIC(RUIN_MANIAC),
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 29,
        .species = SPECIES_BALTOY,
        IVS(6),
        },
        {
        .lvl = 29,
        .species = SPECIES_SANDSHREW,
        IVS(6),
        }
    },
},

[TRAINER_ANDRES_2] =
{
    .trainerName = _("Andres"),
    TRAINER_CLASS_PIC(RUIN_MANIAC),
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 34,
        .species = SPECIES_BALTOY,
        IVS(1),
        },
        {
        .lvl = 34,
        .species = SPECIES_SANDSLASH,
        IVS(1),
        }
    },
},

[TRAINER_ANDRES_3] =
{
    .trainerName = _("Andres"),
    TRAINER_CLASS_PIC(RUIN_MANIAC),
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = REMATCH_3_LEVEL_3,
        .species = SPECIES_NOSEPASS,
        IVS(3),
        },
        {
        .lvl = REMATCH_3_LEVEL_3,
        .species = SPECIES_CLAYDOL,
        IVS(3),
        },
        {
        .lvl = REMATCH_3_LEVEL_3,
        .species = SPECIES_SANDSLASH,
        IVS(3),
        }
    },
},

[TRAINER_ANDRES_4] =
{
    .trainerName = _("Andres"),
    TRAINER_CLASS_PIC(RUIN_MANIAC),
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 40,
        .species = SPECIES_NOSEPASS,
        IVS(3),
        },
        {
        .lvl = 40,
        .species = SPECIES_CLAYDOL,
        IVS(3),
        },
        {
        .lvl = 40,
        .species = SPECIES_SANDSLASH,
        IVS(3),
        }
    },
},

[TRAINER_ANDRES_5] =
{
    .trainerName = _("Andres"),
    TRAINER_CLASS_PIC(RUIN_MANIAC),
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 43,
        .species = SPECIES_NOSEPASS,
        IVS(4),
        },
        {
        .lvl = 43,
        .species = SPECIES_CLAYDOL,
        IVS(4),
        },
        {
        .lvl = 43,
        .species = SPECIES_SANDSLASH,
        IVS(4),
        }
    },
},

[TRAINER_CORY_1] =
{
    .trainerName = _("Cory"),
    SAILOR_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 28,
        .species = SPECIES_PELIPPER,
        },
        {
        .lvl = 28,
        .species = SPECIES_MACHOKE,
        },
        {
        .lvl = 28,
        .species = SPECIES_TENTACOOL,
        }
    },
},

[TRAINER_CORY_2] =
{
    .trainerName = _("Cory"),
    SAILOR_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 33,
        .species = SPECIES_PELIPPER,
        IVS(1),
        },
        {
        .lvl = 33,
        .species = SPECIES_MACHOKE,
        IVS(1),
        },
        {
        .lvl = 33,
        .species = SPECIES_TENTACRUEL,
        IVS(1),
        }
    },
},

[TRAINER_CORY_3] =
{
    .trainerName = _("Cory"),
    SAILOR_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = REMATCH_3_LEVEL_3,
        .species = SPECIES_PELIPPER,
        IVS(3),
        },
        {
        .lvl = REMATCH_3_LEVEL_3,
        .species = SPECIES_MACHOKE,
        IVS(3),
        },
        {
        .lvl = REMATCH_3_LEVEL_3,
        .species = SPECIES_TENTACRUEL,
        IVS(3),
        }
    },
},

[TRAINER_CORY_4] =
{
    .trainerName = _("Cory"),
    SAILOR_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 39,
        .species = SPECIES_PELIPPER,
        IVS(3),
        },
        {
        .lvl = 39,
        .species = SPECIES_MACHOKE,
        IVS(3),
        },
        {
        .lvl = 39,
        .species = SPECIES_TENTACRUEL,
        IVS(3),
        }
    },
},

[TRAINER_CORY_5] =
{
    .trainerName = _("Cory"),
    SAILOR_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 42,
        .species = SPECIES_PELIPPER,
        IVS(4),
        },
        {
        .lvl = 42,
        .species = SPECIES_MACHAMP,
        IVS(4),
        },
        {
        .lvl = 42,
        .species = SPECIES_TENTACRUEL,
        IVS(4),
        }
    },
},

[TRAINER_PABLO_1] =
{
    .trainerName = _("Pablo"),
    TRIATHLETE_M_SWIMMING_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 41,
        .species = SPECIES_CORPHISH,
        },
        {
        .lvl = 41,
        .species = SPECIES_STARYU,
        }
    },
},

[TRAINER_PABLO_2] =
{
    .trainerName = _("Pablo"),
    TRIATHLETE_M_SWIMMING_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
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
    .trainerName = _("Pablo"),
    TRIATHLETE_M_SWIMMING_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
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
    .trainerName = _("Pablo"),
    TRIATHLETE_M_SWIMMING_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
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
    .trainerName = _("Pablo"),
    TRIATHLETE_M_SWIMMING_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
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

[TRAINER_KOJI_1] =
{
    .trainerName = _("Koji"),
    BLACK_BELT_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
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
    .trainerName = _("Koji"),
    BLACK_BELT_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
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
    .trainerName = _("Koji"),
    BLACK_BELT_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
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
    .trainerName = _("Koji"),
    BLACK_BELT_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
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
    .trainerName = _("Koji"),
    BLACK_BELT_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 50,
        .species = SPECIES_HARIYAMA,
        IVS(4),
        },
        {
        .lvl = 50,
        .species = SPECIES_MACHAMP,
        IVS(4),
        },
        {
        .lvl = 50,
        .species = SPECIES_MEDICHAM,
        IVS(4),
        }
    },
},

[TRAINER_CRISTIN_1] =
{
    .trainerName = _("Cristin"),
    .trainerClass = TRAINER_CLASS_COOLTRAINER,
    .trainerPic = TRAINER_PIC_COOLTRAINER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
    .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 33,
        .species = SPECIES_LOUDRED,
        IVS(12),
        },
        {
        .lvl = 33,
        .species = SPECIES_VIGOROTH,
        IVS(12),
        }
    },
},

[TRAINER_CRISTIN_2] =
{
    .trainerName = _("Cristin"),
    .trainerClass = TRAINER_CLASS_COOLTRAINER,
    .trainerPic = TRAINER_PIC_COOLTRAINER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
    .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 36,
        .species = SPECIES_LOUDRED,
        IVS(13),
        },
        {
        .lvl = 36,
        .species = SPECIES_SLAKING,
        IVS(13),
        }
    },
},

[TRAINER_CRISTIN_3] =
{
    .trainerName = _("Cristin"),
    .trainerClass = TRAINER_CLASS_COOLTRAINER,
    .trainerPic = TRAINER_PIC_COOLTRAINER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
    .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = REMATCH_3_LEVEL_3,
        .species = SPECIES_SPINDA,
        IVS(14),
        },
        {
        .lvl = REMATCH_3_LEVEL_3,
        .species = SPECIES_LOUDRED,
        IVS(14),
        },
        {
        .lvl = REMATCH_3_LEVEL_3,
        .species = SPECIES_SLAKING,
        IVS(14),
        }
    },
},

[TRAINER_CRISTIN_4] =
{
    .trainerName = _("Cristin"),
    .trainerClass = TRAINER_CLASS_COOLTRAINER,
    .trainerPic = TRAINER_PIC_COOLTRAINER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
    .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 42,
        .species = SPECIES_SPINDA,
        IVS(15),
        },
        {
        .lvl = 42,
        .species = SPECIES_EXPLOUD,
        IVS(15),
        },
        {
        .lvl = 42,
        .species = SPECIES_SLAKING,
        IVS(12),
        }
    },
},

[TRAINER_CRISTIN_5] =
{
    .trainerName = _("Cristin"),
    .trainerClass = TRAINER_CLASS_COOLTRAINER,
    .trainerPic = TRAINER_PIC_COOLTRAINER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
    .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 45,
        .species = SPECIES_SPINDA,
        IVS(17),
        },
        {
        .lvl = 45,
        .species = SPECIES_EXPLOUD,
        IVS(17),
        },
        {
        .lvl = 45,
        .species = SPECIES_SLAKING,
        IVS(17),
        }
    },
},

[TRAINER_FERNANDO_1] =
{
    .trainerName = _("Fernando"),
    GUITARIST_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
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
    .trainerName = _("Fernando"),
    GUITARIST_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
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
    .trainerName = _("Fernando"),
    GUITARIST_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = REMATCH_3_LEVEL_3,
        .species = SPECIES_ELECTRODE,
        IVS(3),
        },
        {
        .lvl = REMATCH_3_LEVEL_3,
        .species = SPECIES_MANECTRIC,
        IVS(3),
        },
        {
        .lvl = REMATCH_3_LEVEL_3,
        .species = SPECIES_LOUDRED,
        IVS(3),
        }
    },
},

[TRAINER_FERNANDO_4] =
{
    .trainerName = _("Fernando"),
    GUITARIST_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 41,
        .species = SPECIES_ELECTRODE,
        IVS(3),
        },
        {
        .lvl = 41,
        .species = SPECIES_MANECTRIC,
        IVS(3),
        },
        {
        .lvl = 41,
        .species = SPECIES_EXPLOUD,
        IVS(3),
        }
    },
},

[TRAINER_FERNANDO_5] =
{
    .trainerName = _("Fernando"),
    GUITARIST_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 43,
        .species = SPECIES_ELECTRODE,
        IVS(4),
        },
        {
        .lvl = 43,
        .species = SPECIES_MANECTRIC,
        IVS(4),
        },
        {
        .lvl = 43,
        .species = SPECIES_EXPLOUD,
        IVS(4),
        }
    },
},

[TRAINER_THALIA_1] =
{
    .trainerName = _("Thalia"),
    BEAUTY_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 29,
        .species = SPECIES_WAILMER,
        },
        {
        .lvl = 29,
        .species = SPECIES_HORSEA,
        }
    },
},

[TRAINER_THALIA_2] =
{
    .trainerName = _("Thalia"),
    BEAUTY_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 35,
        .species = SPECIES_WAILMER,
        IVS(1),
        },
        {
        .lvl = 35,
        .species = SPECIES_SEADRA,
        IVS(1),
        }
    },
},

[TRAINER_THALIA_3] =
{
    .trainerName = _("Thalia"),
    BEAUTY_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = REMATCH_3_LEVEL_3,
        .species = SPECIES_LUVDISC,
        IVS(3),
        },
        {
        .lvl = REMATCH_3_LEVEL_3,
        .species = SPECIES_WAILMER,
        IVS(3),
        },
        {
        .lvl = REMATCH_3_LEVEL_3,
        .species = SPECIES_SEADRA,
        IVS(3),
        }
    },
},

[TRAINER_THALIA_4] =
{
    .trainerName = _("Thalia"),
    BEAUTY_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 39,
        .species = SPECIES_LUVDISC,
        IVS(3),
        },
        {
        .lvl = 39,
        .species = SPECIES_WAILMER,
        IVS(3),
        },
        {
        .lvl = 39,
        .species = SPECIES_SEADRA,
        IVS(3),
        }
    },
},

[TRAINER_THALIA_5] =
{
    .trainerName = _("Thalia"),
    BEAUTY_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 41,
        .species = SPECIES_LUVDISC,
        IVS(4),
        },
        {
        .lvl = 41,
        .species = SPECIES_WAILORD,
        IVS(4),
        },
        {
        .lvl = 41,
        .species = SPECIES_KINGDRA,
        IVS(4),
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

[TRAINER_EVERETT] =
{
    .trainerName = _("Everett"),
    TRAINER_CLASS_PIC(GENTLEMAN),
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_RICH,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 46,
        .species = SPECIES_WOBBUFFET,
        }
    },
},

[TRAINER_GRUNT_MT_CHIMNEY_1] =
{
    .trainerName = _("Grunt"),
    .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
    .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_MAGMA,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 24,
        .species = SPECIES_NUMEL,
        }
    },
},

[TRAINER_GRUNT_MT_CHIMNEY_2] =
{
    .trainerName = _("Grunt"),
    .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
    .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 24,
        .species = SPECIES_SLUGMA,
        }
    },
},

[TRAINER_TABITHA_MT_CHIMNEY] =
{
    .trainerName = _("Tabitha"),
    .trainerClass = TRAINER_CLASS_MAGMA_ADMIN,
    .trainerPic = TRAINER_PIC_MAGMA_ADMIN_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 26,
        .species = SPECIES_PHANPY,
        IVS(6),
        .gender = TRAINER_MON_MALE,
        },
        {
        .lvl = 26,
        .species = SPECIES_SLUGMA,
        IVS(6),
        .gender = TRAINER_MON_MALE,
        },
        {
        .lvl = 28,
        .species = SPECIES_HOUNDOUR,
        .ability = ABILITY_FLASH_FIRE,
        IVS(6),
        .gender = TRAINER_MON_MALE,
        }
    },
},

[TRAINER_MAXIE_MT_CHIMNEY] =
{
    .trainerName = _("Maxie"),
    .trainerClass = TRAINER_CLASS_MAGMA_LEADER,
    .trainerPic = TRAINER_PIC_MAGMA_LEADER_MAXIE,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
    .items = {ITEM_SUPER_POTION, ITEM_SUPER_POTION, ITEM_NONE, ITEM_NONE},
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
    .partySize = 4,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 28,
        .species = SPECIES_PHANPY,
        IVS(18),
        .gender = TRAINER_MON_MALE,
        },
        {
        .lvl = 28,
        .species = SPECIES_SANDSHREW,
        IVS(18),
        .gender = TRAINER_MON_MALE,
        },
        {
        .lvl = 28,
        .species = SPECIES_BALTOY,
        IVS(18),
        },
        {
        .lvl = 30,
        .species = SPECIES_NUMEL,
        .ability = ABILITY_SIMPLE,
        IVS(18),
        .gender = TRAINER_MON_MALE,
        .nickname = COMPOUND_STRING("Humphrey"),
        }
    },
},

[TRAINER_GRUNT_JAGGED_PASS] =
{
    .trainerName = _("Grunt"),
    .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
    .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 25,
        .species = SPECIES_BALTOY,
        IVS(6),
        },
        {
        .lvl = 25,
        .species = SPECIES_HOUNDOUR,
        IVS(6),
        }
    },
},

[TRAINER_GRUNT_WEATHER_INST_1] =
{
    AQUA_GRUNT_M_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 40,
        .species = SPECIES_CARVANHA,
        },
        {
        .lvl = 40,
        .species = SPECIES_CORPHISH,
        }
    },
},

[TRAINER_GRUNT_WEATHER_INST_2] =
{
    AQUA_GRUNT_M_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 40,
        .species = SPECIES_CARVANHA,
        },
        {
        .lvl = 40,
        .species = SPECIES_WAILMER,
        }
    },
},

[TRAINER_GRUNT_WEATHER_INST_3] =
{
    AQUA_GRUNT_M_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 39,
        .species = SPECIES_CARVANHA,
        },
        {
        .lvl = 39,
        .species = SPECIES_CLAMPERL,
        },
        {
        .lvl = 39,
        .species = SPECIES_TENTACOOL,
        }
    },
},

[TRAINER_GRUNT_WEATHER_INST_4] =
{
    .trainerName = _("Grunt"),
    .trainerClass = TRAINER_CLASS_TEAM_AQUA,
    .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_AQUA,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 41,
        .species = SPECIES_CARVANHA,
        }
    },
},

[TRAINER_GRUNT_WEATHER_INST_5] =
{
    .trainerName = _("Grunt"),
    .trainerClass = TRAINER_CLASS_TEAM_AQUA,
    .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_AQUA,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 40,
        .species = SPECIES_STARYU,
        },
        {
        .lvl = 40,
        .species = SPECIES_GOLDEEN,
        }
    },
},

[TRAINER_SHELLY_WEATHER_INSTITUTE] =
{
    .trainerName = _("Shelly"),
    .trainerClass = TRAINER_CLASS_AQUA_ADMIN,
    .trainerPic = TRAINER_PIC_AQUA_ADMIN_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_AQUA,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 41,
        .species = SPECIES_STARYU,
        IVS(6),
        },
        {
        .lvl = 41,
        .species = SPECIES_GOLDEEN,
        IVS(6),
        },
        {
        .lvl = 43,
        .species = SPECIES_GOREBYSS,
        IVS(6),
        }
    },
},

[TRAINER_GRUNT_MT_PYRE_1] =
{
    AQUA_GRUNT_M_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 42,
        .species = SPECIES_CORPHISH,
        }
    },
},

[TRAINER_GRUNT_MT_PYRE_2] =
{
    AQUA_GRUNT_M_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 42,
        .species = SPECIES_TENTACOOL,
        }
    },
},

[TRAINER_GRUNT_MT_PYRE_3] =
{
    AQUA_GRUNT_M_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 41,
        .species = SPECIES_CARVANHA,
        },
        {
        .lvl = 41,
        .species = SPECIES_WAILMER,
        }
    },
},

[TRAINER_GRUNT_MT_PYRE_4] =
{
    .trainerName = _("Grunt"),
    .trainerClass = TRAINER_CLASS_TEAM_AQUA,
    .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_AQUA,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 41,
        .species = SPECIES_STARYU,
        },
        {
        .lvl = 41,
        .species = SPECIES_GOLDEEN,
        }
    },
},

[TRAINER_GRUNT_MAGMA_HIDEOUT_1] =
{
    .trainerName = _("Grunt"),
    .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
    .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
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
    .trainerName = _("Grunt"),
    .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
    .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
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
    .trainerName = _("Grunt"),
    .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
    .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
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
    .trainerName = _("Grunt"),
    .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
    .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
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
    .trainerName = _("Grunt"),
    .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
    .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
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
    .trainerName = _("Grunt"),
    .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
    .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
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
    .trainerName = _("Grunt"),
    .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
    .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
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
    .trainerName = _("Grunt"),
    .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
    .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
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
    .trainerName = _("Grunt"),
    .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
    .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
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
    .trainerName = _("Grunt"),
    .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
    .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
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
    .trainerName = _("Grunt"),
    .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
    .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
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
    .trainerName = _("Grunt"),
    .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
    .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
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
    .trainerName = _("Grunt"),
    .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
    .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
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
    .trainerName = _("Grunt"),
    .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
    .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_MAGMA,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
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
    .trainerName = _("Grunt"),
    .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
    .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_MAGMA,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
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
    .trainerName = _("Grunt"),
    .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
    .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_MAGMA,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
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
    .trainerName = _("Tabitha"),
    .trainerClass = TRAINER_CLASS_MAGMA_ADMIN,
    .trainerPic = TRAINER_PIC_MAGMA_ADMIN_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 50,
        .species = SPECIES_DONPHAN,
        IVS(9),
        .gender = TRAINER_MON_MALE,
        },
        {
        .lvl = 51,
        .species = SPECIES_MAGCARGO,
        IVS(9),
        .gender = TRAINER_MON_MALE,
        },
        {
        .lvl = 52,
        .species = SPECIES_HOUNDOOM,
        .ability = ABILITY_FLASH_FIRE,
        IVS(9),
        .gender = TRAINER_MON_MALE,
        }
    },
},

[TRAINER_MAXIE_MAGMA_HIDEOUT] =
{
    .trainerName = _("Maxie"),
    .trainerClass = TRAINER_CLASS_MAGMA_LEADER,
    .trainerPic = TRAINER_PIC_MAGMA_LEADER_MAXIE,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
    .items = {ITEM_SUPER_POTION, ITEM_SUPER_POTION, ITEM_NONE, ITEM_NONE},
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
    .partySize = 4,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 51,
        .species = SPECIES_DONPHAN,
        IVS(18),
        .gender = TRAINER_MON_MALE,
        },
        {
        .lvl = 52,
        .species = SPECIES_SANDSLASH,
        IVS(18),
        .gender = TRAINER_MON_MALE,
        },
        {
        .lvl = 52,
        .species = SPECIES_CLAYDOL,
        IVS(18),
        },
        {
        .lvl = 53,
        .species = SPECIES_CAMERUPT,
        .ability = ABILITY_SOLID_ROCK,
        IVS(18),
        .gender = TRAINER_MON_MALE,
        .nickname = COMPOUND_STRING("Humphrey"),
        }
    },
},

[TRAINER_GRUNT_AQUA_HIDEOUT_1] =
{
    AQUA_GRUNT_M_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
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
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
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
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
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
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
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
    .trainerName = _("Grunt"),
    .trainerClass = TRAINER_CLASS_TEAM_AQUA,
    .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_AQUA,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
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
    .trainerName = _("Grunt"),
    .trainerClass = TRAINER_CLASS_TEAM_AQUA,
    .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_AQUA,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
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
    .trainerName = _("Grunt"),
    .trainerClass = TRAINER_CLASS_TEAM_AQUA,
    .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_AQUA,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
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
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
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
    .trainerName = _("Matt"),
    .trainerClass = TRAINER_CLASS_AQUA_ADMIN,
    .trainerPic = TRAINER_PIC_AQUA_ADMIN_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
    .items = {ITEM_SUPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
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

[TRAINER_GRUNT_SPACE_CENTER_1] =
{
    .trainerName = _("Grunt"),
    .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
    .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
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
    .trainerName = _("Grunt"),
    .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
    .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_MAGMA,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
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
    .trainerName = _("Grunt"),
    .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
    .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
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
    .trainerName = _("Grunt"),
    .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
    .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
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
    .trainerName = _("Grunt"),
    .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
    .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
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
    .trainerName = _("Grunt"),
    .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
    .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
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
    .trainerName = _("Courtney"),
    .trainerClass = TRAINER_CLASS_MAGMA_ADMIN,
    .trainerPic = TRAINER_PIC_MAGMA_ADMIN_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_MAGMA,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
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
    .trainerName = _("Tabitha"),
    .trainerClass = TRAINER_CLASS_MAGMA_ADMIN,
    .trainerPic = TRAINER_PIC_MAGMA_ADMIN_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 55,
        .species = SPECIES_DONPHAN,
        IVS(12),
        .gender = TRAINER_MON_MALE,
        },
        {
        .lvl = 55,
        .species = SPECIES_MAGCARGO,
        IVS(12),
        .gender = TRAINER_MON_MALE,
        },
        {
        .lvl = 57,
        .species = SPECIES_HOUNDOOM,
        .ability = ABILITY_FLASH_FIRE,
        IVS(12),
        .gender = TRAINER_MON_MALE,
        }
    },
},

[TRAINER_MAXIE_SPACE_CENTER] =
{
    .trainerName = _("Maxie"),
    .trainerClass = TRAINER_CLASS_MAGMA_LEADER,
    .trainerPic = TRAINER_PIC_MAGMA_LEADER_MAXIE,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 57,
        .species = SPECIES_SANDSLASH,
        IVS(18),
        .gender = TRAINER_MON_MALE,
        },
        {
        .lvl = 58,
        .species = SPECIES_CLAYDOL,
        IVS(18),
        },
        {
        .lvl = 60,
        .species = SPECIES_CAMERUPT,
        .ability = ABILITY_SOLID_ROCK,
        IVS(18),
        .gender = TRAINER_MON_MALE,
        .nickname = COMPOUND_STRING("Humphrey"),
        }
    },
},

[TRAINER_GRUNT_SEAFLOOR_CAVERN_1] =
{
    AQUA_GRUNT_M_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
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
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
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
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
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
    .trainerName = _("Grunt"),
    .trainerClass = TRAINER_CLASS_TEAM_AQUA,
    .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_AQUA,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
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
    .trainerName = _("Matt"),
    .trainerClass = TRAINER_CLASS_AQUA_ADMIN,
    .trainerPic = TRAINER_PIC_AQUA_ADMIN_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
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
    .trainerName = _("Shelly"),
    .trainerClass = TRAINER_CLASS_AQUA_ADMIN,
    .trainerPic = TRAINER_PIC_AQUA_ADMIN_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_AQUA,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 42,
        .species = SPECIES_STARMIE,
        IVS(12),
        },
        {
        .lvl = 42,
        .species = SPECIES_SEAKING,
        IVS(12),
        },
        {
        .lvl = 43,
        .species = SPECIES_GOREBYSS,
        IVS(12),
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
UNUSED_TRAINER(5),
