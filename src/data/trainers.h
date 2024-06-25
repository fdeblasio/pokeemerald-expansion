[TRAINER_NONE] =
{
    .trainerName = _(""),
    .trainerClass = TRAINER_CLASS_PKMN_TRAINER_1,
    .trainerPic = TRAINER_PIC_HIKER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .partySize = 0,
    .party = NULL,
},

#define RIVAL_ROUTE_103_STARTER_LEVEL 5

#define RIVAL_RUSTBORO_STARTER_LEVEL 15
#define RIVAL_RUSTBORO_WHISMUR                \
    .lvl = 13,                                \
    .species = SPECIES_WHISMUR,               \
    .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3) \

#define RIVAL_ROUTE_110_STARTER_LEVEL 20
#define RIVAL_ROUTE_110_MON(Species, Ability) \
    .lvl = 18,                                 \
    .species = SPECIES_##Species,              \
    .ability = ABILITY_##Ability,              \
    .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6)  \

#define RIVAL_ROUTE_119_STARTER_LEVEL 43
#define RIVAL_ROUTE_119_MON(Species, Ability)       \
    .lvl = 42,                                      \
    .species = SPECIES_##Species,                   \
    .ability = ABILITY_##Ability,                   \
    .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12) \

#define RIVAL_LILYCOVE_STARTER_LEVEL 50
#define RIVAL_LILYCOVE_LOUDRED(Ability)             \
    .lvl = RIVAL_LILYCOVE_STARTER_LEVEL - 1,        \
    .species = SPECIES_LOUDRED,                     \
    .ability = ABILITY_##Ability,                   \
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18) \

#define RIVAL_LILYCOVE_MON(Species, Ability)        \
    .lvl = RIVAL_LILYCOVE_STARTER_LEVEL - 2,        \
    .species = SPECIES_##Species,                   \
    .ability = ABILITY_##Ability,                   \
    .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18) \

#define BRENDAN                                            \
    .trainerName = _("Brendan"),                           \
    .trainerClass = TRAINER_CLASS_RIVAL,                   \
    .trainerPic = TRAINER_PIC_BRENDAN,                     \
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE, \
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON

#define BRENDAN_STARTER                              \
    .nature = NATURE_SERIOUS,                        \
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31), \
    .gender = TRAINER_MON_MALE,

[TRAINER_BRENDAN_ROUTE_103_MUDKIP] =
{
    BRENDAN,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = RIVAL_ROUTE_103_STARTER_LEVEL,
        .species = SPECIES_TREECKO,
        BRENDAN_STARTER
        }
    },
},

[TRAINER_BRENDAN_RUSTBORO_MUDKIP] =
{
    BRENDAN,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        RIVAL_RUSTBORO_WHISMUR,
        .gender = TRAINER_MON_MALE,
        },
        {
        .lvl = RIVAL_RUSTBORO_STARTER_LEVEL,
        .species = SPECIES_TREECKO,
        BRENDAN_STARTER
        }
    },
},

[TRAINER_BRENDAN_ROUTE_110_MUDKIP] =
{
    BRENDAN,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        RIVAL_ROUTE_110_MON(CORPHISH, HYPER_CUTTER),
        .gender = TRAINER_MON_MALE,
        },
        {
        RIVAL_ROUTE_110_MON(WHISMUR, SOUNDPROOF),
        .gender = TRAINER_MON_MALE,
        },
        {
        .lvl = RIVAL_ROUTE_110_STARTER_LEVEL,
        .species = SPECIES_GROVYLE,
        BRENDAN_STARTER
        }
    },
},

[TRAINER_BRENDAN_ROUTE_119_MUDKIP] =
{
    BRENDAN,
    .partySize = 4,
    .party = (const struct TrainerMon[]) {
        {
        RIVAL_ROUTE_119_MON(SLUGMA, FLAME_BODY),
        .gender = TRAINER_MON_MALE,
        },
        {
        RIVAL_ROUTE_119_MON(CRAWDAUNT, HYPER_CUTTER),
        .gender = TRAINER_MON_MALE,
        },
        {
        RIVAL_ROUTE_119_MON(LOUDRED, PUNK_ROCK),
        .gender = TRAINER_MON_MALE,
        },
        {
        .lvl = RIVAL_ROUTE_119_STARTER_LEVEL,
        .species = SPECIES_GROVYLE,
        BRENDAN_STARTER
        }
    },
},

[TRAINER_BRENDAN_LILYCOVE_MUDKIP] =
{
    BRENDAN,
    .partySize = 5,
    .party = (const struct TrainerMon[]) {
        {
        RIVAL_LILYCOVE_MON(VIBRAVA, LEVITATE),
        .gender = TRAINER_MON_MALE,
        },
        {
        RIVAL_LILYCOVE_MON(MAGCARGO, FLAME_BODY),
        .gender = TRAINER_MON_MALE,
        },
        {
        RIVAL_LILYCOVE_MON(CRAWDAUNT, HYPER_CUTTER),
        .gender = TRAINER_MON_MALE,
        },
        {
        RIVAL_LILYCOVE_LOUDRED(PUNK_ROCK),
        .gender = TRAINER_MON_MALE,
        },
        {
        .lvl = RIVAL_LILYCOVE_STARTER_LEVEL,
        .species = SPECIES_SCEPTILE,
        BRENDAN_STARTER
        }
    },
},

[TRAINER_BRENDAN_ROUTE_103_TREECKO] =
{
    BRENDAN,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = RIVAL_ROUTE_103_STARTER_LEVEL,
        .species = SPECIES_TORCHIC,
        BRENDAN_STARTER
        }
    },
},

[TRAINER_BRENDAN_RUSTBORO_TREECKO] =
{
    BRENDAN,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        RIVAL_RUSTBORO_WHISMUR,
        .gender = TRAINER_MON_MALE,
        },
        {
        .lvl = RIVAL_RUSTBORO_STARTER_LEVEL,
        .species = SPECIES_TORCHIC,
        BRENDAN_STARTER
        }
    },
},

[TRAINER_BRENDAN_ROUTE_110_TREECKO] =
{
    BRENDAN,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        RIVAL_ROUTE_110_MON(SHROOMISH, EFFECT_SPORE),
        .gender = TRAINER_MON_MALE,
        },
        {
        RIVAL_ROUTE_110_MON(WHISMUR, SOUNDPROOF),
        .gender = TRAINER_MON_MALE,
        },
        {
        .lvl = RIVAL_ROUTE_110_STARTER_LEVEL,
        .species = SPECIES_COMBUSKEN,
        BRENDAN_STARTER
        }
    },
},

[TRAINER_BRENDAN_ROUTE_119_TREECKO] =
{
    BRENDAN,
    .partySize = 4,
    .party = (const struct TrainerMon[]) {
        {
        RIVAL_ROUTE_119_MON(CORPHISH, HYPER_CUTTER),
        .gender = TRAINER_MON_MALE,
        },
        {
        RIVAL_ROUTE_119_MON(BRELOOM, EFFECT_SPORE),
        .gender = TRAINER_MON_MALE,
        },
        {
        RIVAL_ROUTE_119_MON(LOUDRED, PUNK_ROCK),
        .gender = TRAINER_MON_MALE,
        },
        {
        .lvl = RIVAL_ROUTE_119_STARTER_LEVEL,
        .species = SPECIES_COMBUSKEN,
        BRENDAN_STARTER
        }
    },
},

[TRAINER_BRENDAN_LILYCOVE_TREECKO] =
{
    BRENDAN,
    .partySize = 5,
    .party = (const struct TrainerMon[]) {
        {
        RIVAL_LILYCOVE_MON(VIBRAVA, LEVITATE),
        .gender = TRAINER_MON_MALE,
        },
        {
        RIVAL_LILYCOVE_MON(CRAWDAUNT, HYPER_CUTTER),
        .gender = TRAINER_MON_MALE,
        },
        {
        RIVAL_LILYCOVE_MON(BRELOOM, EFFECT_SPORE),
        .gender = TRAINER_MON_MALE,
        },
        {
        RIVAL_LILYCOVE_LOUDRED(PUNK_ROCK),
        .gender = TRAINER_MON_MALE,
        },
        {
        .lvl = RIVAL_LILYCOVE_STARTER_LEVEL,
        .species = SPECIES_BLAZIKEN,
        BRENDAN_STARTER
        }
    },
},

[TRAINER_BRENDAN_ROUTE_103_TORCHIC] =
{
    BRENDAN,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = RIVAL_ROUTE_103_STARTER_LEVEL,
        .species = SPECIES_MUDKIP,
        BRENDAN_STARTER
        }
    },
},

[TRAINER_BRENDAN_RUSTBORO_TORCHIC] =
{
    BRENDAN,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        RIVAL_RUSTBORO_WHISMUR,
        .gender = TRAINER_MON_MALE,
        },
        {
        .lvl = RIVAL_RUSTBORO_STARTER_LEVEL,
        .species = SPECIES_MUDKIP,
        BRENDAN_STARTER
        }
    },
},

[TRAINER_BRENDAN_ROUTE_110_TORCHIC] =
{
    BRENDAN,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        RIVAL_ROUTE_110_MON(SLUGMA, FLAME_BODY),
        .gender = TRAINER_MON_MALE,
        },
        {
        RIVAL_ROUTE_110_MON(WHISMUR, SOUNDPROOF),
        .gender = TRAINER_MON_MALE,
        },
        {
        .lvl = RIVAL_ROUTE_110_STARTER_LEVEL,
        .species = SPECIES_MARSHTOMP,
        BRENDAN_STARTER
        }
    },
},

[TRAINER_BRENDAN_ROUTE_119_TORCHIC] =
{
    BRENDAN,
    .partySize = 4,
    .party = (const struct TrainerMon[]) {
        {
        RIVAL_ROUTE_119_MON(SHROOMISH, EFFECT_SPORE),
        .gender = TRAINER_MON_MALE,
        },
        {
        RIVAL_ROUTE_119_MON(MAGCARGO, FLAME_BODY),
        .gender = TRAINER_MON_MALE,
        },
        {
        RIVAL_ROUTE_119_MON(LOUDRED, PUNK_ROCK),
        .gender = TRAINER_MON_MALE,
        },
        {
        .lvl = RIVAL_ROUTE_119_STARTER_LEVEL,
        .species = SPECIES_MARSHTOMP,
        BRENDAN_STARTER
        }
    },
},

[TRAINER_BRENDAN_LILYCOVE_TORCHIC] =
{
    BRENDAN,
    .partySize = 5,
    .party = (const struct TrainerMon[]) {
        {
        RIVAL_LILYCOVE_MON(VIBRAVA, LEVITATE),
        .gender = TRAINER_MON_MALE,
        },
        {
        RIVAL_LILYCOVE_MON(BRELOOM, EFFECT_SPORE),
        .gender = TRAINER_MON_MALE,
        },
        {
        RIVAL_LILYCOVE_MON(MAGCARGO, FLAME_BODY),
        .gender = TRAINER_MON_MALE,
        },
        {
        RIVAL_LILYCOVE_LOUDRED(PUNK_ROCK),
        .gender = TRAINER_MON_MALE,
        },
        {
        .lvl = RIVAL_LILYCOVE_STARTER_LEVEL,
        .species = SPECIES_SWAMPERT,
        BRENDAN_STARTER
        }
    },
},

#define MAY                                                                     \
    .trainerName = _("May"),                                                    \
    .trainerClass = TRAINER_CLASS_RIVAL,                                        \
    .trainerPic = TRAINER_PIC_MAY,                                              \
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE, \
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON

#define MAY_STARTER                                  \
    .nature = NATURE_QUIRKY,                         \
    .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31), \
    .gender = TRAINER_MON_FEMALE,

[TRAINER_MAY_ROUTE_103_MUDKIP] =
{
    MAY,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = RIVAL_ROUTE_103_STARTER_LEVEL,
        .species = SPECIES_TREECKO,
        .gender = TRAINER_MON_FEMALE,
        }
    },
},

[TRAINER_MAY_RUSTBORO_MUDKIP] =
{
    MAY,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        RIVAL_RUSTBORO_WHISMUR,
        .gender = TRAINER_MON_FEMALE,
        },
        {
        .lvl = RIVAL_RUSTBORO_STARTER_LEVEL,
        .species = SPECIES_TREECKO,
        MAY_STARTER
        }
    },
},

[TRAINER_MAY_ROUTE_110_MUDKIP] =
{
    MAY,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        RIVAL_ROUTE_110_MON(WINGULL, KEEN_EYE),
        .gender = TRAINER_MON_FEMALE,
        },
        {
        RIVAL_ROUTE_110_MON(WHISMUR, SOUNDPROOF),
        .gender = TRAINER_MON_FEMALE,
        },
        {
        .lvl = RIVAL_ROUTE_110_STARTER_LEVEL,
        .species = SPECIES_GROVYLE,
        MAY_STARTER
        }
    },
},

[TRAINER_MAY_ROUTE_119_MUDKIP] =
{
    MAY,
    .partySize = 4,
    .party = (const struct TrainerMon[]) {
        {
        RIVAL_ROUTE_119_MON(VULPIX, FLASH_FIRE),
        .gender = TRAINER_MON_FEMALE,
        },
        {
        RIVAL_ROUTE_119_MON(PELIPPER, KEEN_EYE),
        .gender = TRAINER_MON_FEMALE,
        },
        {
        RIVAL_ROUTE_119_MON(LOUDRED, SOUNDPROOF),
        .gender = TRAINER_MON_FEMALE,
        },
        {
        .lvl = RIVAL_ROUTE_119_STARTER_LEVEL,
        .species = SPECIES_GROVYLE,
        MAY_STARTER
        }
    },
},

[TRAINER_MAY_LILYCOVE_MUDKIP] =
{
    MAY,
    .partySize = 5,
    .party = (const struct TrainerMon[]) {
        {
        RIVAL_LILYCOVE_MON(VIBRAVA, LEVITATE),
        .gender = TRAINER_MON_FEMALE,
        },
        {
        RIVAL_LILYCOVE_MON(NINETALES, FLASH_FIRE),
        .gender = TRAINER_MON_FEMALE,
        },
        {
        RIVAL_LILYCOVE_MON(PELIPPER, KEEN_EYE),
        .gender = TRAINER_MON_FEMALE,
        },
        {
        RIVAL_LILYCOVE_LOUDRED(SOUNDPROOF),
        .gender = TRAINER_MON_FEMALE,
        },
        {
        .lvl = RIVAL_LILYCOVE_STARTER_LEVEL,
        .species = SPECIES_SCEPTILE,
        MAY_STARTER
        }
    },
},

[TRAINER_MAY_ROUTE_103_TREECKO] =
{
    MAY,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = RIVAL_ROUTE_103_STARTER_LEVEL,
        .species = SPECIES_TORCHIC,
        }
    },
},

[TRAINER_MAY_RUSTBORO_TREECKO] =
{
    MAY,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        RIVAL_RUSTBORO_WHISMUR,
        .gender = TRAINER_MON_FEMALE,
        },
        {
        .lvl = RIVAL_RUSTBORO_STARTER_LEVEL,
        .species = SPECIES_TORCHIC,
        MAY_STARTER
        }
    },
},

[TRAINER_MAY_ROUTE_110_TREECKO] =
{
    MAY,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        RIVAL_ROUTE_110_MON(CACNEA, SAND_VEIL),
        .gender = TRAINER_MON_FEMALE,
        },
        {
        RIVAL_ROUTE_110_MON(WHISMUR, SOUNDPROOF),
        .gender = TRAINER_MON_FEMALE,
        },
        {
        .lvl = RIVAL_ROUTE_110_STARTER_LEVEL,
        .species = SPECIES_COMBUSKEN,
        MAY_STARTER
        }
    },
},

[TRAINER_MAY_ROUTE_119_TREECKO] =
{
    MAY,
    .partySize = 4,
    .party = (const struct TrainerMon[]) {
        {
        RIVAL_ROUTE_119_MON(WINGULL, KEEN_EYE),
        .gender = TRAINER_MON_FEMALE,
        },
        {
        RIVAL_ROUTE_119_MON(CACTURNE, SAND_VEIL),
        .gender = TRAINER_MON_FEMALE,
        },
        {
        RIVAL_ROUTE_119_MON(LOUDRED, SOUNDPROOF),
        .gender = TRAINER_MON_FEMALE,
        },
        {
        .lvl = RIVAL_ROUTE_119_STARTER_LEVEL,
        .species = SPECIES_COMBUSKEN,
        MAY_STARTER
        }
    },
},

[TRAINER_MAY_LILYCOVE_TREECKO] =
{
    MAY,
    .partySize = 5,
    .party = (const struct TrainerMon[]) {
        {
        RIVAL_LILYCOVE_MON(VIBRAVA, LEVITATE),
        .gender = TRAINER_MON_FEMALE,
        },
        {
        RIVAL_LILYCOVE_MON(PELIPPER, KEEN_EYE),
        .gender = TRAINER_MON_FEMALE,
        },
        {
        RIVAL_LILYCOVE_MON(CACTURNE, SAND_VEIL),
        .gender = TRAINER_MON_FEMALE,
        },
        {
        RIVAL_LILYCOVE_LOUDRED(SOUNDPROOF),
        .gender = TRAINER_MON_FEMALE,
        },
        {
        .lvl = RIVAL_LILYCOVE_STARTER_LEVEL,
        .species = SPECIES_BLAZIKEN,
        MAY_STARTER
        }
    },
},

[TRAINER_MAY_ROUTE_103_TORCHIC] =
{
    MAY,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = RIVAL_ROUTE_103_STARTER_LEVEL,
        .species = SPECIES_MUDKIP,
        }
    },
},

[TRAINER_MAY_RUSTBORO_TORCHIC] =
{
    MAY,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        RIVAL_RUSTBORO_WHISMUR,
        .gender = TRAINER_MON_FEMALE,
        },
        {
        .lvl = RIVAL_RUSTBORO_STARTER_LEVEL,
        .species = SPECIES_MUDKIP,
        MAY_STARTER
        }
    },
},

[TRAINER_MAY_ROUTE_110_TORCHIC] =
{
    MAY,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        RIVAL_ROUTE_110_MON(VULPIX, FLASH_FIRE),
        .gender = TRAINER_MON_FEMALE,
        },
        {
        RIVAL_ROUTE_110_MON(WHISMUR, SOUNDPROOF),
        .gender = TRAINER_MON_FEMALE,
        },
        {
        .lvl = RIVAL_ROUTE_110_STARTER_LEVEL,
        .species = SPECIES_MARSHTOMP,
        MAY_STARTER
        }
    },
},

[TRAINER_MAY_ROUTE_119_TORCHIC] =
{
    MAY,
    .partySize = 4,
    .party = (const struct TrainerMon[]) {
        {
        RIVAL_ROUTE_119_MON(CACNEA, SAND_VEIL),
        .gender = TRAINER_MON_FEMALE,
        },
        {
        RIVAL_ROUTE_119_MON(NINETALES, FLASH_FIRE),
        .gender = TRAINER_MON_FEMALE,
        },
        {
        RIVAL_ROUTE_119_MON(LOUDRED, SOUNDPROOF),
        .gender = TRAINER_MON_FEMALE,
        },
        {
        .lvl = RIVAL_ROUTE_119_STARTER_LEVEL,
        .species = SPECIES_MARSHTOMP,
        MAY_STARTER
        }
    },
},

[TRAINER_MAY_LILYCOVE_TORCHIC] =
{
    MAY,
    .partySize = 5,
    .party = (const struct TrainerMon[]) {
        {
        RIVAL_LILYCOVE_MON(VIBRAVA, LEVITATE),
        .gender = TRAINER_MON_FEMALE,
        },
        {
        RIVAL_LILYCOVE_MON(CACTURNE, SAND_VEIL),
        .gender = TRAINER_MON_FEMALE,
        },
        {
        RIVAL_LILYCOVE_MON(NINETALES, FLASH_FIRE),
        .gender = TRAINER_MON_FEMALE,
        },
        {
        RIVAL_LILYCOVE_LOUDRED(SOUNDPROOF),
        .gender = TRAINER_MON_FEMALE,
        },
        {
        .lvl = RIVAL_LILYCOVE_STARTER_LEVEL,
        .species = SPECIES_SWAMPERT,
        MAY_STARTER
        }
    },
},

#define ENDGAME_REMATCH_LEVEL_2(REMATCH) ENDGAME_REMATCH_##REMATCH##_LEVEL - 2
#define ENDGAME_REMATCH_LEVEL_3(REMATCH) ENDGAME_REMATCH_##REMATCH##_LEVEL - 5

#define ENDGAME_REMATCH_2_LEVEL 65
#define ENDGAME_REMATCH_3_LEVEL 70
#define ENDGAME_REMATCH_4_LEVEL 75
#define ENDGAME_REMATCH_5_LEVEL 80

#define WALLY                                              \
    .trainerName = _("Wally"),                             \
    .trainerClass = TRAINER_CLASS_RIVAL,                   \
    .trainerPic = TRAINER_PIC_WALLY,                       \
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE, \
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON

[TRAINER_WALLY_MAUVILLE] =
{
    WALLY,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 20,
        .species = SPECIES_BUDEW,
        .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
        .gender = TRAINER_MON_FEMALE,
        },
        {
        .lvl = 22,
        .species = SPECIES_KIRLIA,
        .ability = ABILITY_TRACE,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .gender = TRAINER_MON_MALE,
        .nickname = COMPOUND_STRING("Ralph"),
        }
    },
},

[TRAINER_WALLY_VR_1] =
{
    WALLY,
    .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
    .partySize = 5,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 46,
        .species = SPECIES_DELCATTY,
        .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
        .moves = {MOVE_FAKE_OUT, MOVE_PLAY_ROUGH, MOVE_ASSIST, MOVE_CHARM},
        .gender = TRAINER_MON_FEMALE,
        },
        {
        .lvl = 46,
        .species = SPECIES_ALTARIA,
        .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
        .moves = {MOVE_DRAGON_PULSE, MOVE_AIR_SLASH, MOVE_MOONBLAST, MOVE_COTTON_GUARD},
        .gender = TRAINER_MON_MALE,
        },
        {
        .lvl = 47,
        .species = SPECIES_MAGNEZONE,
        .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
        .moves = {MOVE_THUNDERBOLT, MOVE_FLASH_CANNON, MOVE_TRI_ATTACK, MOVE_METAL_SOUND},
        },
        {
        .lvl = 47,
        .species = SPECIES_ROSERADE,
        .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
        .moves = {MOVE_GIGA_DRAIN, MOVE_SLUDGE_BOMB, MOVE_LEECH_SEED, MOVE_TOXIC},
        .gender = TRAINER_MON_FEMALE,
        },
        {
        .lvl = 49,
        .species = SPECIES_GALLADE,
        .ability = ABILITY_SHARPNESS,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .moves = {MOVE_PSYCHO_CUT, MOVE_SACRED_SWORD, MOVE_LEAF_BLADE, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_GALLADITE,
        .nickname = COMPOUND_STRING("Ralph"),
        }
    },
},

[TRAINER_WALLY_VR_2] =
{
    WALLY,
    .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
    .partySize = 5,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = ENDGAME_REMATCH_LEVEL_3(2),
        .species = SPECIES_DELCATTY,
        .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
        .moves = {MOVE_FAKE_OUT, MOVE_PLAY_ROUGH, MOVE_ASSIST, MOVE_CHARM},
        .gender = TRAINER_MON_FEMALE,
        },
        {
        .lvl = ENDGAME_REMATCH_LEVEL_3(2),
        .species = SPECIES_ALTARIA,
        .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
        .moves = {MOVE_DRAGON_PULSE, MOVE_AIR_SLASH, MOVE_MOONBLAST, MOVE_COTTON_GUARD},
        .gender = TRAINER_MON_MALE,
        },
        {
        .lvl = ENDGAME_REMATCH_LEVEL_2(2),
        .species = SPECIES_MAGNEZONE,
        .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
        .moves = {MOVE_THUNDERBOLT, MOVE_FLASH_CANNON, MOVE_TRI_ATTACK, MOVE_METAL_SOUND},
        },
        {
        .lvl = ENDGAME_REMATCH_LEVEL_2(2),
        .species = SPECIES_ROSERADE,
        .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
        .moves = {MOVE_GIGA_DRAIN, MOVE_SLUDGE_BOMB, MOVE_LEECH_SEED, MOVE_TOXIC},
        .gender = TRAINER_MON_FEMALE,
        },
        {
        .lvl = ENDGAME_REMATCH_2_LEVEL,
        .species = SPECIES_GALLADE,
        .ability = ABILITY_SHARPNESS,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .moves = {MOVE_PSYCHO_CUT, MOVE_SACRED_SWORD, MOVE_LEAF_BLADE, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_GALLADITE,
        .nickname = COMPOUND_STRING("Ralph"),
        }
    },
},

[TRAINER_WALLY_VR_3] =
{
    WALLY,
    .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
    .partySize = 5,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = ENDGAME_REMATCH_LEVEL_3(3),
        .species = SPECIES_DELCATTY,
        .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
        .moves = {MOVE_FAKE_OUT, MOVE_PLAY_ROUGH, MOVE_ASSIST, MOVE_CHARM},
        .gender = TRAINER_MON_FEMALE,
        },
        {
        .lvl = ENDGAME_REMATCH_LEVEL_3(3),
        .species = SPECIES_ALTARIA,
        .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
        .moves = {MOVE_DRAGON_PULSE, MOVE_AIR_SLASH, MOVE_MOONBLAST, MOVE_COTTON_GUARD},
        .gender = TRAINER_MON_MALE,
        },
        {
        .lvl = ENDGAME_REMATCH_LEVEL_2(3),
        .species = SPECIES_MAGNEZONE,
        .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
        .moves = {MOVE_THUNDERBOLT, MOVE_FLASH_CANNON, MOVE_TRI_ATTACK, MOVE_METAL_SOUND},
        },
        {
        .lvl = ENDGAME_REMATCH_LEVEL_2(3),
        .species = SPECIES_ROSERADE,
        .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
        .moves = {MOVE_GIGA_DRAIN, MOVE_SLUDGE_BOMB, MOVE_LEECH_SEED, MOVE_TOXIC},
        .gender = TRAINER_MON_FEMALE,
        },
        {
        .lvl = ENDGAME_REMATCH_3_LEVEL,
        .species = SPECIES_GALLADE,
        .ability = ABILITY_SHARPNESS,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .moves = {MOVE_PSYCHO_CUT, MOVE_SACRED_SWORD, MOVE_LEAF_BLADE, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_GALLADITE,
        .nickname = COMPOUND_STRING("Ralph"),
        }
    },
},

[TRAINER_WALLY_VR_4] =
{
    WALLY,
    .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
    .partySize = 5,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = ENDGAME_REMATCH_LEVEL_3(4),
        .species = SPECIES_DELCATTY,
        .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
        .moves = {MOVE_FAKE_OUT, MOVE_PLAY_ROUGH, MOVE_ASSIST, MOVE_CHARM},
        .gender = TRAINER_MON_FEMALE,
        },
        {
        .lvl = ENDGAME_REMATCH_LEVEL_3(4),
        .species = SPECIES_ALTARIA,
        .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
        .moves = {MOVE_DRAGON_PULSE, MOVE_AIR_SLASH, MOVE_MOONBLAST, MOVE_COTTON_GUARD},
        .gender = TRAINER_MON_MALE,
        },
        {
        .lvl = ENDGAME_REMATCH_LEVEL_2(4),
        .species = SPECIES_MAGNEZONE,
        .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
        .moves = {MOVE_THUNDERBOLT, MOVE_FLASH_CANNON, MOVE_TRI_ATTACK, MOVE_METAL_SOUND},
        },
        {
        .lvl = ENDGAME_REMATCH_LEVEL_2(4),
        .species = SPECIES_ROSERADE,
        .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
        .moves = {MOVE_GIGA_DRAIN, MOVE_SLUDGE_BOMB, MOVE_LEECH_SEED, MOVE_TOXIC},
        .gender = TRAINER_MON_FEMALE,
        },
        {
        .lvl = ENDGAME_REMATCH_4_LEVEL,
        .species = SPECIES_GALLADE,
        .ability = ABILITY_SHARPNESS,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .moves = {MOVE_PSYCHO_CUT, MOVE_SACRED_SWORD, MOVE_LEAF_BLADE, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_GALLADITE,
        .nickname = COMPOUND_STRING("Ralph"),
        }
    },
},

[TRAINER_WALLY_VR_5] =
{
    WALLY,
    .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
    .partySize = 6,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = ENDGAME_REMATCH_LEVEL_3(5),
        .species = SPECIES_GARDEVOIR,
        .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
        .moves = {MOVE_PSYCHIC, MOVE_MOONBLAST, MOVE_MYSTICAL_FIRE, MOVE_CALM_MIND},
        .gender = TRAINER_MON_FEMALE,
        },
        {
        .lvl = ENDGAME_REMATCH_LEVEL_3(5),
        .species = SPECIES_DELCATTY,
        .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
        .moves = {MOVE_FAKE_OUT, MOVE_PLAY_ROUGH, MOVE_ASSIST, MOVE_CHARM},
        .gender = TRAINER_MON_FEMALE,
        },
        {
        .lvl = ENDGAME_REMATCH_LEVEL_3(5),
        .species = SPECIES_ALTARIA,
        .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
        .moves = {MOVE_DRAGON_PULSE, MOVE_AIR_SLASH, MOVE_MOONBLAST, MOVE_COTTON_GUARD},
        .gender = TRAINER_MON_MALE,
        },
        {
        .lvl = ENDGAME_REMATCH_LEVEL_2(5),
        .species = SPECIES_MAGNEZONE,
        .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
        .moves = {MOVE_THUNDERBOLT, MOVE_FLASH_CANNON, MOVE_TRI_ATTACK, MOVE_METAL_SOUND},
        },
        {
        .lvl = ENDGAME_REMATCH_LEVEL_2(5),
        .species = SPECIES_ROSERADE,
        .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
        .moves = {MOVE_GIGA_DRAIN, MOVE_SLUDGE_BOMB, MOVE_LEECH_SEED, MOVE_TOXIC},
        .gender = TRAINER_MON_FEMALE,
        },
        {
        .lvl = ENDGAME_REMATCH_5_LEVEL,
        .species = SPECIES_GALLADE,
        .ability = ABILITY_SHARPNESS,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .moves = {MOVE_PSYCHO_CUT, MOVE_SACRED_SWORD, MOVE_LEAF_BLADE, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_GALLADITE,
        .nickname = COMPOUND_STRING("Ralph"),
        }
    },
},

#define ROXANNE_INFO                                                            \
    .trainerName = _("Roxanne"),                                                \
    .trainerClass = TRAINER_CLASS_LEADER,                                       \
    .trainerPic = TRAINER_PIC_LEADER_ROXANNE,                                   \
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE, \
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON

[TRAINER_ROXANNE_1] =
{
    ROXANNE_INFO,
    .items = {ITEM_POTION, ITEM_POTION, ITEM_NONE, ITEM_NONE},
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 12,
        .species = SPECIES_LILEEP,
        .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
        .moves = {MOVE_ROCK_TOMB, MOVE_ASTONISH, MOVE_CONSTRICT, MOVE_ACID},
        .gender = TRAINER_MON_FEMALE,
        },
        {
        .lvl = 12,
        .species = SPECIES_ANORITH,
        .ability = ABILITY_SWIFT_SWIM,
        .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
        .moves = {MOVE_ROCK_TOMB, MOVE_SCRATCH, MOVE_HARDEN, MOVE_WATER_GUN},
        .gender = TRAINER_MON_MALE,
        },
        {
        .lvl = 15,
        .species = SPECIES_NOSEPASS,
        .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
        .moves = {MOVE_ROCK_TOMB, MOVE_BLOCK, MOVE_HARDEN, MOVE_TACKLE},
        .gender = TRAINER_MON_FEMALE,
        .heldItem = ITEM_ORAN_BERRY,
        }
    },
},

[TRAINER_ROXANNE_2] =
{
    ROXANNE_INFO,
    .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
    .doubleBattle = TRUE,
    .partySize = 4,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = ENDGAME_REMATCH_LEVEL_3(2),
        .species = SPECIES_RELICANTH,
        .ability = ABILITY_ROCK_HEAD,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .moves = {MOVE_HEAD_SMASH, MOVE_AQUA_TAIL, MOVE_DOUBLE_EDGE, MOVE_REST},
        .gender = TRAINER_MON_FEMALE,
        },
        {
        .lvl = ENDGAME_REMATCH_LEVEL_2(2),
        .species = SPECIES_CRADILY,
        .ability = ABILITY_STORM_DRAIN,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .moves = {MOVE_GIGA_DRAIN, MOVE_ANCIENT_POWER, MOVE_INGRAIN, MOVE_AMNESIA},
        .gender = TRAINER_MON_FEMALE,
        .heldItem = ITEM_BIG_ROOT,
        },
        {
        .lvl = ENDGAME_REMATCH_LEVEL_2(2),
        .species = SPECIES_ARMALDO,
        .ability = ABILITY_BATTLE_ARMOR,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .moves = {MOVE_ROCK_SLIDE, MOVE_X_SCISSOR, MOVE_CRUSH_CLAW, MOVE_SWORDS_DANCE},
        .gender = TRAINER_MON_MALE,
        .heldItem = ITEM_QUICK_CLAW,
        },
        {
        .lvl = ENDGAME_REMATCH_2_LEVEL,
        .species = SPECIES_PROBOPASS,
        .ability = ABILITY_SAND_FORCE,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .moves = {MOVE_POWER_GEM, MOVE_FLASH_CANNON, MOVE_SANDSTORM, MOVE_IRON_DEFENSE},
        .gender = TRAINER_MON_FEMALE,
        .heldItem = ITEM_SITRUS_BERRY,
        }
    },
},

[TRAINER_ROXANNE_3] =
{
    ROXANNE_INFO,
    .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
    .doubleBattle = TRUE,
    .partySize = 5,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = ENDGAME_REMATCH_LEVEL_3(3),
        .species = SPECIES_AGGRON,
        .ability = ABILITY_ROCK_HEAD,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .moves = {MOVE_IRON_HEAD, MOVE_ROCK_SLIDE, MOVE_SANDSTORM, MOVE_STEALTH_ROCK},
        .gender = TRAINER_MON_FEMALE,
        },
        {
        .lvl = ENDGAME_REMATCH_LEVEL_3(3),
        .species = SPECIES_RELICANTH,
        .ability = ABILITY_ROCK_HEAD,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .moves = {MOVE_HEAD_SMASH, MOVE_AQUA_TAIL, MOVE_DOUBLE_EDGE, MOVE_REST},
        .gender = TRAINER_MON_FEMALE,
        },
        {
        .lvl = ENDGAME_REMATCH_LEVEL_2(3),
        .species = SPECIES_CRADILY,
        .ability = ABILITY_STORM_DRAIN,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .moves = {MOVE_GIGA_DRAIN, MOVE_ANCIENT_POWER, MOVE_INGRAIN, MOVE_AMNESIA},
        .gender = TRAINER_MON_FEMALE,
        .heldItem = ITEM_BIG_ROOT,
        },
        {
        .lvl = ENDGAME_REMATCH_LEVEL_2(3),
        .species = SPECIES_ARMALDO,
        .ability = ABILITY_BATTLE_ARMOR,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .moves = {MOVE_ROCK_SLIDE, MOVE_X_SCISSOR, MOVE_CRUSH_CLAW, MOVE_SWORDS_DANCE},
        .gender = TRAINER_MON_MALE,
        .heldItem = ITEM_QUICK_CLAW,
        },
        {
        .lvl = ENDGAME_REMATCH_3_LEVEL,
        .species = SPECIES_PROBOPASS,
        .ability = ABILITY_SAND_FORCE,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .moves = {MOVE_POWER_GEM, MOVE_FLASH_CANNON, MOVE_SANDSTORM, MOVE_IRON_DEFENSE},
        .gender = TRAINER_MON_FEMALE,
        .heldItem = ITEM_SITRUS_BERRY,
        }
    },
},

[TRAINER_ROXANNE_4] =
{
    ROXANNE_INFO,
    .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
    .doubleBattle = TRUE,
    .partySize = 5,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = ENDGAME_REMATCH_LEVEL_3(4),
        .species = SPECIES_AGGRON,
        .ability = ABILITY_ROCK_HEAD,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .moves = {MOVE_IRON_HEAD, MOVE_ROCK_SLIDE, MOVE_SANDSTORM, MOVE_STEALTH_ROCK},
        .gender = TRAINER_MON_FEMALE,
        },
        {
        .lvl = ENDGAME_REMATCH_LEVEL_3(4),
        .species = SPECIES_RELICANTH,
        .ability = ABILITY_ROCK_HEAD,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .moves = {MOVE_HEAD_SMASH, MOVE_AQUA_TAIL, MOVE_DOUBLE_EDGE, MOVE_REST},
        .gender = TRAINER_MON_FEMALE,
        },
        {
        .lvl = ENDGAME_REMATCH_LEVEL_2(4),
        .species = SPECIES_CRADILY,
        .ability = ABILITY_STORM_DRAIN,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .moves = {MOVE_GIGA_DRAIN, MOVE_ANCIENT_POWER, MOVE_INGRAIN, MOVE_AMNESIA},
        .gender = TRAINER_MON_FEMALE,
        .heldItem = ITEM_BIG_ROOT,
        },
        {
        .lvl = ENDGAME_REMATCH_LEVEL_2(4),
        .species = SPECIES_ARMALDO,
        .ability = ABILITY_BATTLE_ARMOR,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .moves = {MOVE_ROCK_SLIDE, MOVE_X_SCISSOR, MOVE_CRUSH_CLAW, MOVE_SWORDS_DANCE},
        .gender = TRAINER_MON_MALE,
        .heldItem = ITEM_QUICK_CLAW,
        },
        {
        .lvl = ENDGAME_REMATCH_4_LEVEL,
        .species = SPECIES_PROBOPASS,
        .ability = ABILITY_SAND_FORCE,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .moves = {MOVE_POWER_GEM, MOVE_FLASH_CANNON, MOVE_SANDSTORM, MOVE_IRON_DEFENSE},
        .gender = TRAINER_MON_FEMALE,
        .heldItem = ITEM_SITRUS_BERRY,
        }
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
        .lvl = ENDGAME_REMATCH_LEVEL_3(5),
        .species = SPECIES_RHYPERIOR,
        .ability = ABILITY_SOLID_ROCK,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .moves = {MOVE_ROCK_WRECKER, MOVE_DRILL_RUN, MOVE_POISON_JAB, MOVE_SANDSTORM},
        .gender = TRAINER_MON_FEMALE,
        },
        {
        .lvl = ENDGAME_REMATCH_LEVEL_3(5),
        .species = SPECIES_AGGRON,
        .ability = ABILITY_ROCK_HEAD,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .moves = {MOVE_HEAD_SMASH, MOVE_BODY_PRESS, MOVE_IRON_DEFENSE, MOVE_STEALTH_ROCK},
        .gender = TRAINER_MON_FEMALE,
        },
        {
        .lvl = ENDGAME_REMATCH_LEVEL_3(5),
        .species = SPECIES_RELICANTH,
        .ability = ABILITY_ROCK_HEAD,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .moves = {MOVE_HEAD_SMASH, MOVE_AQUA_TAIL, MOVE_BODY_PRESS, MOVE_IRON_DEFENSE},
        .gender = TRAINER_MON_FEMALE,
        },
        {
        .lvl = ENDGAME_REMATCH_LEVEL_2(5),
        .species = SPECIES_CRADILY,
        .ability = ABILITY_STORM_DRAIN,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .moves = {MOVE_GIGA_DRAIN, MOVE_ANCIENT_POWER, MOVE_INGRAIN, MOVE_AMNESIA},
        .gender = TRAINER_MON_FEMALE,
        .heldItem = ITEM_BIG_ROOT,
        },
        {
        .lvl = ENDGAME_REMATCH_LEVEL_2(5),
        .species = SPECIES_ARMALDO,
        .ability = ABILITY_BATTLE_ARMOR,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .moves = {MOVE_ROCK_SLIDE, MOVE_X_SCISSOR, MOVE_CRUSH_CLAW, MOVE_SWORDS_DANCE},
        .gender = TRAINER_MON_MALE,
        .heldItem = ITEM_QUICK_CLAW,
        },
        {
        .lvl = ENDGAME_REMATCH_5_LEVEL,
        .species = SPECIES_PROBOPASS,
        .ability = ABILITY_SAND_FORCE,
        .ev = TRAINER_PARTY_EVS(0, 0, 63, 63, 1, 0),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .moves = {MOVE_POWER_GEM, MOVE_FLASH_CANNON, MOVE_BODY_PRESS, MOVE_IRON_DEFENSE},
        .gender = TRAINER_MON_FEMALE,
        .heldItem = ITEM_SITRUS_BERRY,
        }
    },
},

[TRAINER_BRAWLY_1] =
{
    .trainerName = _("Brawly"),
    .trainerClass = TRAINER_CLASS_LEADER,
    .trainerPic = TRAINER_PIC_LEADER_BRAWLY,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .items = {ITEM_SUPER_POTION, ITEM_SUPER_POTION, ITEM_NONE, ITEM_NONE},
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 16,
        .species = SPECIES_MACHOP,
        .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
        .moves = {MOVE_BULK_UP, MOVE_KARATE_CHOP, MOVE_KNOCK_OFF, MOVE_FORESIGHT},
        .gender = TRAINER_MON_MALE,
        },
        {
        .lvl = 16,
        .species = SPECIES_MEDITITE,
        .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
        .moves = {MOVE_BULK_UP, MOVE_DETECT, MOVE_CONFUSION, MOVE_BIDE},
        .gender = TRAINER_MON_FEMALE,
        },
        {
        .lvl = 19,
        .species = SPECIES_MAKUHITA,
        .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
        .moves = {MOVE_BULK_UP, MOVE_ARM_THRUST, MOVE_FAKE_OUT, MOVE_WHIRLWIND},
        .gender = TRAINER_MON_MALE,
        .heldItem = ITEM_SITRUS_BERRY,
        }
    },
},

[TRAINER_BRAWLY_2] =
{
    .trainerName = _("Brawly"),
    .trainerClass = TRAINER_CLASS_LEADER,
    .trainerPic = TRAINER_PIC_LEADER_BRAWLY,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
    .doubleBattle = TRUE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
    .partySize = 4,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = ENDGAME_REMATCH_LEVEL_3(2),
        .species = SPECIES_BRELOOM,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .moves = {MOVE_BULK_UP, MOVE_DRAIN_PUNCH, MOVE_SEED_BOMB, MOVE_MACH_PUNCH},
        .gender = TRAINER_MON_MALE,
        },
        {
        .lvl = ENDGAME_REMATCH_LEVEL_2(2),
        .species = SPECIES_MACHAMP,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .moves = {MOVE_BULK_UP, MOVE_CROSS_CHOP, MOVE_KNOCK_OFF, MOVE_DUAL_CHOP},
        .gender = TRAINER_MON_MALE,
        .heldItem = ITEM_BLACK_BELT,
        },
        {
        .lvl = ENDGAME_REMATCH_LEVEL_2(2),
        .species = SPECIES_MEDICHAM,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .moves = {MOVE_BULK_UP, MOVE_HIGH_JUMP_KICK, MOVE_ZEN_HEADBUTT, MOVE_DETECT},
        .gender = TRAINER_MON_FEMALE,
        .heldItem = ITEM_MUSCLE_BAND,
        },
        {
        .lvl = ENDGAME_REMATCH_2_LEVEL,
        .species = SPECIES_HARIYAMA,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .moves = {MOVE_BULK_UP, MOVE_DRAIN_PUNCH, MOVE_BELLY_DRUM, MOVE_FAKE_OUT},
        .gender = TRAINER_MON_MALE,
        .heldItem = ITEM_SITRUS_BERRY,
        }
    },
},

[TRAINER_BRAWLY_3] =
{
    .trainerName = _("Brawly"),
    .trainerClass = TRAINER_CLASS_LEADER,
    .trainerPic = TRAINER_PIC_LEADER_BRAWLY,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
    .doubleBattle = TRUE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
    .partySize = 5,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = ENDGAME_REMATCH_LEVEL_3(3),
        .species = SPECIES_BLAZIKEN,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .moves = {MOVE_BULK_UP, MOVE_SKY_UPPERCUT, MOVE_BLAZE_KICK, MOVE_MIRROR_MOVE},
        .gender = TRAINER_MON_MALE,
        },
        {
        .lvl = ENDGAME_REMATCH_LEVEL_3(3),
        .species = SPECIES_BRELOOM,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .moves = {MOVE_BULK_UP, MOVE_DRAIN_PUNCH, MOVE_SEED_BOMB, MOVE_MACH_PUNCH},
        .gender = TRAINER_MON_MALE,
        },
        {
        .lvl = ENDGAME_REMATCH_LEVEL_2(3),
        .species = SPECIES_MACHAMP,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .moves = {MOVE_BULK_UP, MOVE_CROSS_CHOP, MOVE_KNOCK_OFF, MOVE_DUAL_CHOP},
        .gender = TRAINER_MON_MALE,
        .heldItem = ITEM_BLACK_BELT,
        },
        {
        .lvl = ENDGAME_REMATCH_LEVEL_2(3),
        .species = SPECIES_MEDICHAM,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .moves = {MOVE_BULK_UP, MOVE_HIGH_JUMP_KICK, MOVE_ZEN_HEADBUTT, MOVE_DETECT},
        .gender = TRAINER_MON_FEMALE,
        .heldItem = ITEM_MUSCLE_BAND,
        },
        {
        .lvl = ENDGAME_REMATCH_3_LEVEL,
        .species = SPECIES_HARIYAMA,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .moves = {MOVE_BULK_UP, MOVE_DRAIN_PUNCH, MOVE_BELLY_DRUM, MOVE_FAKE_OUT},
        .gender = TRAINER_MON_MALE,
        .heldItem = ITEM_SITRUS_BERRY,
        }
    },
},

[TRAINER_BRAWLY_4] =
{
    .trainerName = _("Brawly"),
    .trainerClass = TRAINER_CLASS_LEADER,
    .trainerPic = TRAINER_PIC_LEADER_BRAWLY,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
    .doubleBattle = TRUE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
    .partySize = 5,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = ENDGAME_REMATCH_LEVEL_3(4),
        .species = SPECIES_BLAZIKEN,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .moves = {MOVE_BULK_UP, MOVE_SKY_UPPERCUT, MOVE_BLAZE_KICK, MOVE_MIRROR_MOVE},
        .gender = TRAINER_MON_MALE,
        },
        {
        .lvl = ENDGAME_REMATCH_LEVEL_3(4),
        .species = SPECIES_BRELOOM,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .moves = {MOVE_BULK_UP, MOVE_DRAIN_PUNCH, MOVE_SEED_BOMB, MOVE_MACH_PUNCH},
        .gender = TRAINER_MON_MALE,
        },
        {
        .lvl = ENDGAME_REMATCH_LEVEL_2(4),
        .species = SPECIES_MACHAMP,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .moves = {MOVE_BULK_UP, MOVE_CROSS_CHOP, MOVE_KNOCK_OFF, MOVE_DUAL_CHOP},
        .gender = TRAINER_MON_MALE,
        .heldItem = ITEM_BLACK_BELT,
        },
        {
        .lvl = ENDGAME_REMATCH_LEVEL_2(4),
        .species = SPECIES_MEDICHAM,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .moves = {MOVE_BULK_UP, MOVE_HIGH_JUMP_KICK, MOVE_ZEN_HEADBUTT, MOVE_DETECT},
        .gender = TRAINER_MON_FEMALE,
        .heldItem = ITEM_MUSCLE_BAND,
        },
        {
        .lvl = ENDGAME_REMATCH_4_LEVEL,
        .species = SPECIES_HARIYAMA,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .moves = {MOVE_BULK_UP, MOVE_DRAIN_PUNCH, MOVE_BELLY_DRUM, MOVE_FAKE_OUT},
        .gender = TRAINER_MON_MALE,
        .heldItem = ITEM_SITRUS_BERRY,
        }
    },
},

[TRAINER_BRAWLY_5] =
{
    .trainerName = _("Brawly"),
    .trainerClass = TRAINER_CLASS_LEADER,
    .trainerPic = TRAINER_PIC_LEADER_BRAWLY,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
    .doubleBattle = TRUE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
    .partySize = 6,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = ENDGAME_REMATCH_LEVEL_3(5),
        .species = SPECIES_GALLADE,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .moves = {MOVE_BULK_UP, MOVE_DRAIN_PUNCH, MOVE_PSYCHO_CUT, MOVE_NIGHT_SLASH},
        },
        {
        .lvl = ENDGAME_REMATCH_LEVEL_3(5),
        .species = SPECIES_BLAZIKEN,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .moves = {MOVE_BULK_UP, MOVE_SKY_UPPERCUT, MOVE_BLAZE_KICK, MOVE_MIRROR_MOVE},
        .gender = TRAINER_MON_MALE,
        },
        {
        .lvl = ENDGAME_REMATCH_LEVEL_3(5),
        .species = SPECIES_BRELOOM,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .moves = {MOVE_BULK_UP, MOVE_DRAIN_PUNCH, MOVE_SEED_BOMB, MOVE_MACH_PUNCH},
        .gender = TRAINER_MON_MALE,
        },
        {
        .lvl = ENDGAME_REMATCH_LEVEL_2(5),
        .species = SPECIES_MACHAMP,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .moves = {MOVE_BULK_UP, MOVE_CROSS_CHOP, MOVE_KNOCK_OFF, MOVE_DUAL_CHOP},
        .gender = TRAINER_MON_MALE,
        .heldItem = ITEM_BLACK_BELT,
        },
        {
        .lvl = ENDGAME_REMATCH_LEVEL_2(5),
        .species = SPECIES_MEDICHAM,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .moves = {MOVE_BULK_UP, MOVE_HIGH_JUMP_KICK, MOVE_ZEN_HEADBUTT, MOVE_DETECT},
        .gender = TRAINER_MON_FEMALE,
        .heldItem = ITEM_MUSCLE_BAND,
        },
        {
        .lvl = ENDGAME_REMATCH_5_LEVEL,
        .species = SPECIES_HARIYAMA,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .moves = {MOVE_BULK_UP, MOVE_DRAIN_PUNCH, MOVE_BELLY_DRUM, MOVE_FAKE_OUT},
        .gender = TRAINER_MON_MALE,
        .heldItem = ITEM_SITRUS_BERRY,
        }
    },
},

[TRAINER_WATTSON_1] =
{
    .trainerName = _("Wattson"),
    .trainerClass = TRAINER_CLASS_LEADER,
    .trainerPic = TRAINER_PIC_LEADER_WATTSON,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .items = {ITEM_SUPER_POTION, ITEM_SUPER_POTION, ITEM_NONE, ITEM_NONE},
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
    .partySize = 4,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 22,
        .species = SPECIES_MAGNEMITE,
        .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
        .moves = {MOVE_SHOCK_WAVE, MOVE_SONIC_BOOM, MOVE_MAGNET_BOMB, MOVE_THUNDER_WAVE},
        },
        {
        .lvl = 24,
        .species = SPECIES_MINUN,
        .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
        .moves = {MOVE_SHOCK_WAVE, MOVE_SWIFT, MOVE_SKILL_SWAP, MOVE_NUZZLE},
        },
        {
        .lvl = 24,
        .species = SPECIES_PLUSLE,
        .iv = TRAINER_PARTY_IVS(26, 26, 26, 26, 26, 26),
        .moves = {MOVE_SHOCK_WAVE, MOVE_SWIFT, MOVE_SKILL_SWAP, MOVE_THUNDER_WAVE},
        },
        {
        .lvl = 26,
        .species = SPECIES_MANECTRIC,
        .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
        .moves = {MOVE_SHOCK_WAVE, MOVE_QUICK_ATTACK, MOVE_BITE, MOVE_THUNDER_WAVE},
        .heldItem = ITEM_SITRUS_BERRY,
        }
    },
},

[TRAINER_WATTSON_2] =
{
    .trainerName = _("Wattson"),
    .trainerClass = TRAINER_CLASS_LEADER,
    .trainerPic = TRAINER_PIC_LEADER_WATTSON,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
    .doubleBattle = TRUE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
    .partySize = 4,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = ENDGAME_REMATCH_LEVEL_3(2),
        .species = SPECIES_MAGNETON,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .moves = {MOVE_THUNDERBOLT, MOVE_FLASH_CANNON, MOVE_TRI_ATTACK, MOVE_ELECTRIC_TERRAIN},
        },
        {
        .lvl = ENDGAME_REMATCH_LEVEL_2(2),
        .species = SPECIES_MINUN,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .moves = {MOVE_THUNDERBOLT, MOVE_THUNDER_WAVE, MOVE_FAKE_TEARS, MOVE_NASTY_PLOT},
        .gender = TRAINER_MON_MALE,
        .heldItem = ITEM_MAGNET,
        },
        {
        .lvl = ENDGAME_REMATCH_LEVEL_2(2),
        .species = SPECIES_PLUSLE,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .moves = {MOVE_THUNDERBOLT, MOVE_SKILL_SWAP, MOVE_CHARM, MOVE_NASTY_PLOT},
        .gender = TRAINER_MON_FEMALE,
        .heldItem = ITEM_MAGNET,
        },
        {
        .lvl = ENDGAME_REMATCH_2_LEVEL,
        .species = SPECIES_MANECTRIC,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .moves = {MOVE_THUNDERBOLT, MOVE_FLAMETHROWER, MOVE_SIGNAL_BEAM, MOVE_ICE_FANG},
        .gender = TRAINER_MON_MALE,
        .heldItem = ITEM_SITRUS_BERRY,
        }
    },
},

[TRAINER_WATTSON_3] =
{
    .trainerName = _("Wattson"),
    .trainerClass = TRAINER_CLASS_LEADER,
    .trainerPic = TRAINER_PIC_LEADER_WATTSON,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
    .doubleBattle = TRUE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
    .partySize = 5,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = ENDGAME_REMATCH_LEVEL_3(3),
        .species = SPECIES_LANTURN,
        .ability = ABILITY_VOLT_ABSORB,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .moves = {MOVE_THUNDER, MOVE_HYDRO_PUMP, MOVE_ELECTRIC_TERRAIN, MOVE_RAIN_DANCE},
        .gender = TRAINER_MON_MALE,
        },
        {
        .lvl = ENDGAME_REMATCH_LEVEL_3(3),
        .species = SPECIES_MAGNEZONE,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .moves = {MOVE_THUNDERBOLT, MOVE_FLASH_CANNON, MOVE_TRI_ATTACK, MOVE_ELECTRIC_TERRAIN},
        },
        {
        .lvl = ENDGAME_REMATCH_LEVEL_2(3),
        .species = SPECIES_MINUN,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .moves = {MOVE_THUNDERBOLT, MOVE_THUNDER_WAVE, MOVE_FAKE_TEARS, MOVE_NASTY_PLOT},
        .gender = TRAINER_MON_MALE,
        .heldItem = ITEM_MAGNET,
        },
        {
        .lvl = ENDGAME_REMATCH_LEVEL_2(3),
        .species = SPECIES_PLUSLE,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .moves = {MOVE_THUNDERBOLT, MOVE_SKILL_SWAP, MOVE_CHARM, MOVE_NASTY_PLOT},
        .gender = TRAINER_MON_FEMALE,
        .heldItem = ITEM_MAGNET,
        },
        {
        .lvl = ENDGAME_REMATCH_3_LEVEL,
        .species = SPECIES_MANECTRIC,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .moves = {MOVE_THUNDERBOLT, MOVE_FLAMETHROWER, MOVE_SIGNAL_BEAM, MOVE_ICE_FANG},
        .gender = TRAINER_MON_MALE,
        .heldItem = ITEM_SITRUS_BERRY,
        }
    },
},

[TRAINER_WATTSON_4] =
{
    .trainerName = _("Wattson"),
    .trainerClass = TRAINER_CLASS_LEADER,
    .trainerPic = TRAINER_PIC_LEADER_WATTSON,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
    .doubleBattle = TRUE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
    .partySize = 5,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = ENDGAME_REMATCH_LEVEL_3(4),
        .species = SPECIES_LANTURN,
        .ability = ABILITY_VOLT_ABSORB,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .moves = {MOVE_THUNDER, MOVE_HYDRO_PUMP, MOVE_ELECTRIC_TERRAIN, MOVE_RAIN_DANCE},
        .gender = TRAINER_MON_MALE,
        },
        {
        .lvl = ENDGAME_REMATCH_LEVEL_3(4),
        .species = SPECIES_MAGNEZONE,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .moves = {MOVE_THUNDERBOLT, MOVE_FLASH_CANNON, MOVE_TRI_ATTACK, MOVE_ELECTRIC_TERRAIN},
        },
        {
        .lvl = ENDGAME_REMATCH_LEVEL_2(4),
        .species = SPECIES_MINUN,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .moves = {MOVE_THUNDERBOLT, MOVE_THUNDER_WAVE, MOVE_FAKE_TEARS, MOVE_NASTY_PLOT},
        .gender = TRAINER_MON_MALE,
        .heldItem = ITEM_MAGNET,
        },
        {
        .lvl = ENDGAME_REMATCH_LEVEL_2(4),
        .species = SPECIES_PLUSLE,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .moves = {MOVE_THUNDERBOLT, MOVE_SKILL_SWAP, MOVE_CHARM, MOVE_NASTY_PLOT},
        .gender = TRAINER_MON_FEMALE,
        .heldItem = ITEM_MAGNET,
        },
        {
        .lvl = ENDGAME_REMATCH_4_LEVEL,
        .species = SPECIES_MANECTRIC,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .moves = {MOVE_THUNDERBOLT, MOVE_FLAMETHROWER, MOVE_SIGNAL_BEAM, MOVE_ICE_FANG},
        .gender = TRAINER_MON_MALE,
        .heldItem = ITEM_SITRUS_BERRY,
        }
    },
},

[TRAINER_WATTSON_5] =
{
    .trainerName = _("Wattson"),
    .trainerClass = TRAINER_CLASS_LEADER,
    .trainerPic = TRAINER_PIC_LEADER_WATTSON,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
    .doubleBattle = TRUE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
    .partySize = 6,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = ENDGAME_REMATCH_LEVEL_3(5),
        .species = SPECIES_ELECTRODE,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .moves = {MOVE_THUNDERBOLT, MOVE_ROLLOUT, MOVE_LIGHT_SCREEN, MOVE_SCREECH},
        },
        {
        .lvl = ENDGAME_REMATCH_LEVEL_3(5),
        .species = SPECIES_LANTURN,
        .ability = ABILITY_VOLT_ABSORB,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .moves = {MOVE_THUNDER, MOVE_HYDRO_PUMP, MOVE_ELECTRIC_TERRAIN, MOVE_RAIN_DANCE},
        .gender = TRAINER_MON_MALE,
        },
        {
        .lvl = ENDGAME_REMATCH_LEVEL_3(5),
        .species = SPECIES_MAGNEZONE,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .moves = {MOVE_THUNDERBOLT, MOVE_FLASH_CANNON, MOVE_TRI_ATTACK, MOVE_ELECTRIC_TERRAIN},
        },
        {
        .lvl = ENDGAME_REMATCH_LEVEL_2(5),
        .species = SPECIES_MINUN,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .moves = {MOVE_THUNDERBOLT, MOVE_THUNDER_WAVE, MOVE_FAKE_TEARS, MOVE_NASTY_PLOT},
        .gender = TRAINER_MON_MALE,
        .heldItem = ITEM_MAGNET,
        },
        {
        .lvl = ENDGAME_REMATCH_LEVEL_2(5),
        .species = SPECIES_PLUSLE,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .moves = {MOVE_THUNDERBOLT, MOVE_SKILL_SWAP, MOVE_CHARM, MOVE_NASTY_PLOT},
        .gender = TRAINER_MON_FEMALE,
        .heldItem = ITEM_MAGNET,
        },
        {
        .lvl = ENDGAME_REMATCH_5_LEVEL,
        .species = SPECIES_MANECTRIC,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .moves = {MOVE_THUNDERBOLT, MOVE_FLAMETHROWER, MOVE_SIGNAL_BEAM, MOVE_ICE_FANG},
        .gender = TRAINER_MON_MALE,
        .heldItem = ITEM_MANECTITE,
        }
    },
},

#define FLANNERY_INFO                                                           \
    .trainerName = _("Flannery"),                                               \
    .trainerClass = TRAINER_CLASS_LEADER,                                       \
    .trainerPic = TRAINER_PIC_LEADER_FLANNERY,                                  \
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE, \
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON

[TRAINER_FLANNERY_1] =
{
    FLANNERY_INFO,
    .items = {ITEM_HYPER_POTION, ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE},
    .partySize = 4,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 28,
        .species = SPECIES_CASTFORM,
        .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
        .moves = {MOVE_OVERHEAT, MOVE_WEATHER_BALL, MOVE_HEADBUTT, MOVE_SUNNY_DAY},
        .gender = TRAINER_MON_FEMALE,
        },
        {
        .lvl = 30,
        .species = SPECIES_COMBUSKEN,
        .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
        .moves = {MOVE_OVERHEAT, MOVE_DOUBLE_KICK, MOVE_FEATHER_DANCE, MOVE_SUNNY_DAY},
        .gender = TRAINER_MON_FEMALE,
        },
        {
        .lvl = 30,
        .species = SPECIES_NUMEL,
        .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
        .moves = {MOVE_OVERHEAT, MOVE_EARTH_POWER, MOVE_SUNNY_DAY, MOVE_AMNESIA},
        .gender = TRAINER_MON_FEMALE,
        },
        {
        .lvl = 32,
        .species = SPECIES_TORKOAL,
        .ability = ABILITY_DROUGHT,
        .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
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
        .lvl = ENDGAME_REMATCH_LEVEL_3(2),
        .species = SPECIES_CASTFORM,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .moves = {MOVE_OVERHEAT, MOVE_SOLAR_BEAM, MOVE_WEATHER_BALL, MOVE_SUNNY_DAY},
        .gender = TRAINER_MON_FEMALE,
        },
        {
        .lvl = ENDGAME_REMATCH_LEVEL_2(2),
        .species = SPECIES_BLAZIKEN,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .moves = {MOVE_OVERHEAT, MOVE_AURA_SPHERE, MOVE_FOCUS_ENERGY, MOVE_SUNNY_DAY},
        .gender = TRAINER_MON_FEMALE,
        .heldItem = ITEM_WHITE_HERB,
        },
        {
        .lvl = ENDGAME_REMATCH_LEVEL_2(2),
        .species = SPECIES_CAMERUPT,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .moves = {MOVE_OVERHEAT, MOVE_EARTH_POWER, MOVE_AMNESIA, MOVE_SUNNY_DAY},
        .gender = TRAINER_MON_FEMALE,
        .heldItem = ITEM_WHITE_HERB,
        },
        {
        .lvl = ENDGAME_REMATCH_2_LEVEL,
        .species = SPECIES_TORKOAL,
        .ability = ABILITY_DROUGHT,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
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
        .lvl = ENDGAME_REMATCH_LEVEL_3(3),
        .species = SPECIES_MAGCARGO,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .moves = {MOVE_OVERHEAT, MOVE_YAWN, MOVE_AMNESIA, MOVE_SHELL_SMASH},
        .gender = TRAINER_MON_FEMALE,
        },
        {
        .lvl = ENDGAME_REMATCH_LEVEL_3(3),
        .species = SPECIES_CASTFORM,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .moves = {MOVE_OVERHEAT, MOVE_SOLAR_BEAM, MOVE_WEATHER_BALL, MOVE_SUNNY_DAY},
        .gender = TRAINER_MON_FEMALE,
        },
        {
        .lvl = ENDGAME_REMATCH_LEVEL_2(3),
        .species = SPECIES_BLAZIKEN,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .moves = {MOVE_OVERHEAT, MOVE_AURA_SPHERE, MOVE_FOCUS_ENERGY, MOVE_SUNNY_DAY},
        .gender = TRAINER_MON_FEMALE,
        .heldItem = ITEM_WHITE_HERB,
        },
        {
        .lvl = ENDGAME_REMATCH_LEVEL_2(3),
        .species = SPECIES_CAMERUPT,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .moves = {MOVE_OVERHEAT, MOVE_EARTH_POWER, MOVE_AMNESIA, MOVE_SUNNY_DAY},
        .gender = TRAINER_MON_FEMALE,
        .heldItem = ITEM_WHITE_HERB,
        },
        {
        .lvl = ENDGAME_REMATCH_3_LEVEL,
        .species = SPECIES_TORKOAL,
        .ability = ABILITY_DROUGHT,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
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
        .lvl = ENDGAME_REMATCH_LEVEL_3(4),
        .species = SPECIES_NINETALES,
        .ability = ABILITY_DROUGHT,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .moves = {MOVE_OVERHEAT, MOVE_GRUDGE, MOVE_NASTY_PLOT, MOVE_SUNNY_DAY},
        .gender = TRAINER_MON_FEMALE,
        },
        {
        .lvl = ENDGAME_REMATCH_LEVEL_3(4),
        .species = SPECIES_MAGCARGO,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .moves = {MOVE_OVERHEAT, MOVE_YAWN, MOVE_SHELL_SMASH, MOVE_SUNNY_DAY},
        .gender = TRAINER_MON_FEMALE,
        },
        {
        .lvl = ENDGAME_REMATCH_LEVEL_3(4),
        .species = SPECIES_CASTFORM,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .moves = {MOVE_OVERHEAT, MOVE_SOLAR_BEAM, MOVE_WEATHER_BALL, MOVE_SUNNY_DAY},
        .gender = TRAINER_MON_FEMALE,
        },
        {
        .lvl = ENDGAME_REMATCH_LEVEL_2(4),
        .species = SPECIES_BLAZIKEN,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .moves = {MOVE_OVERHEAT, MOVE_AURA_SPHERE, MOVE_FOCUS_ENERGY, MOVE_SUNNY_DAY},
        .gender = TRAINER_MON_FEMALE,
        .heldItem = ITEM_WHITE_HERB,
        },
        {
        .lvl = ENDGAME_REMATCH_LEVEL_2(4),
        .species = SPECIES_CAMERUPT,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .moves = {MOVE_OVERHEAT, MOVE_EARTH_POWER, MOVE_AMNESIA, MOVE_SUNNY_DAY},
        .gender = TRAINER_MON_FEMALE,
        .heldItem = ITEM_WHITE_HERB,
        },
        {
        .lvl = ENDGAME_REMATCH_4_LEVEL,
        .species = SPECIES_TORKOAL,
        .ability = ABILITY_DROUGHT,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
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
        .lvl = ENDGAME_REMATCH_LEVEL_3(5),
        .species = SPECIES_NINETALES,
        .ability = ABILITY_DROUGHT,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .moves = {MOVE_OVERHEAT, MOVE_GRUDGE, MOVE_NASTY_PLOT, MOVE_SUNNY_DAY},
        .gender = TRAINER_MON_FEMALE,
        },
        {
        .lvl = ENDGAME_REMATCH_LEVEL_3(5),
        .species = SPECIES_MAGCARGO,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .moves = {MOVE_OVERHEAT, MOVE_YAWN, MOVE_AMNESIA, MOVE_SHELL_SMASH},
        .gender = TRAINER_MON_FEMALE,
        },
        {
        .lvl = ENDGAME_REMATCH_LEVEL_3(5),
        .species = SPECIES_CASTFORM,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .moves = {MOVE_OVERHEAT, MOVE_SOLAR_BEAM, MOVE_WEATHER_BALL, MOVE_SUNNY_DAY},
        .gender = TRAINER_MON_FEMALE,
        },
        {
        .lvl = ENDGAME_REMATCH_LEVEL_2(5),
        .species = SPECIES_BLAZIKEN,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .moves = {MOVE_OVERHEAT, MOVE_AURA_SPHERE, MOVE_FOCUS_ENERGY, MOVE_SUNNY_DAY},
        .gender = TRAINER_MON_FEMALE,
        .heldItem = ITEM_WHITE_HERB,
        },
        {
        .lvl = ENDGAME_REMATCH_LEVEL_2(5),
        .species = SPECIES_CAMERUPT,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .moves = {MOVE_OVERHEAT, MOVE_EARTH_POWER, MOVE_AMNESIA, MOVE_SUNNY_DAY},
        .gender = TRAINER_MON_FEMALE,
        .heldItem = ITEM_WHITE_HERB,
        },
        {
        .lvl = ENDGAME_REMATCH_5_LEVEL,
        .species = SPECIES_TORKOAL,
        .ability = ABILITY_DROUGHT,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .moves = {MOVE_OVERHEAT, MOVE_IRON_DEFENSE, MOVE_SHELL_SMASH, MOVE_SUNNY_DAY},
        .gender = TRAINER_MON_FEMALE,
        .heldItem = ITEM_WHITE_HERB,
        }
    },
},

[TRAINER_NORMAN_1] =
{
    .trainerName = _("Norman"),
    .trainerClass = TRAINER_CLASS_LEADER,
    .trainerPic = TRAINER_PIC_LEADER_NORMAN,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .items = {ITEM_HYPER_POTION, ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE},
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
    .partySize = 4,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 32,
        .species = SPECIES_LINOONE,
        .ability = ABILITY_QUICK_FEET,
        .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
        .moves = {MOVE_FACADE, MOVE_SLASH, MOVE_PLAY_ROUGH, MOVE_HONE_CLAWS},
        .gender = TRAINER_MON_MALE,
        },
        {
        .lvl = 34,
        .species = SPECIES_ZANGOOSE,
        .ability = ABILITY_POISON_HEAL,
        .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
        .moves = {MOVE_FACADE, MOVE_CRUSH_CLAW, MOVE_NIGHT_SLASH, MOVE_HONE_CLAWS},
        .gender = TRAINER_MON_MALE,
        },
        {
        .lvl = 34,
        .species = SPECIES_SPINDA,
        .ability = ABILITY_OWN_TEMPO,
        .nature = NATURE_QUIRKY,
        .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
        .moves = {MOVE_FACADE, MOVE_TEETER_DANCE, MOVE_FEINT_ATTACK, MOVE_DIZZY_PUNCH},
        .gender = TRAINER_MON_MALE,
        },
        {
        .lvl = 36,
        .species = SPECIES_SLAKING,
        .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
        .moves = {MOVE_FACADE, MOVE_THROAT_CHOP, MOVE_SLACK_OFF, MOVE_FOCUS_ENERGY},
        .gender = TRAINER_MON_MALE,
        .heldItem = ITEM_SITRUS_BERRY,
        }
    },
},

[TRAINER_NORMAN_2] =
{
    .trainerName = _("Norman"),
    .trainerClass = TRAINER_CLASS_LEADER,
    .trainerPic = TRAINER_PIC_LEADER_NORMAN,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
    .doubleBattle = TRUE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
    .partySize = 4,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = ENDGAME_REMATCH_LEVEL_3(2),
        .species = SPECIES_LINOONE,
        .ability = ABILITY_QUICK_FEET,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .moves = {MOVE_SLASH, MOVE_PLAY_ROUGH, MOVE_PIN_MISSILE, MOVE_BELLY_DRUM},
        .gender = TRAINER_MON_MALE,
        },
        {
        .lvl = ENDGAME_REMATCH_LEVEL_2(2),
        .species = SPECIES_ZANGOOSE,
        .ability = ABILITY_POISON_HEAL,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .moves = {MOVE_FACADE, MOVE_X_SCISSOR, MOVE_NIGHT_SLASH, MOVE_SWORDS_DANCE},
        .gender = TRAINER_MON_MALE,
        .heldItem = ITEM_TOXIC_ORB,
        },
        {
        .lvl = ENDGAME_REMATCH_LEVEL_2(2),
        .species = SPECIES_SPINDA,
        .ability = ABILITY_OWN_TEMPO,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .moves = {MOVE_THRASH, MOVE_TEETER_DANCE, MOVE_HYPNOSIS, MOVE_SKILL_SWAP},
        .gender = TRAINER_MON_MALE,
        .heldItem = ITEM_LIECHI_BERRY,
        },
        {
        .lvl = ENDGAME_REMATCH_2_LEVEL,
        .species = SPECIES_SLAKING,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .moves = {MOVE_GIGA_IMPACT, MOVE_HAMMER_ARM, MOVE_THROAT_CHOP, MOVE_SUCKER_PUNCH},
        .gender = TRAINER_MON_MALE,
        .heldItem = ITEM_SITRUS_BERRY,
        }
    },
},

[TRAINER_NORMAN_3] =
{
    .trainerName = _("Norman"),
    .trainerClass = TRAINER_CLASS_LEADER,
    .trainerPic = TRAINER_PIC_LEADER_NORMAN,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
    .doubleBattle = TRUE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
    .partySize = 5,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = ENDGAME_REMATCH_LEVEL_3(3),
        .species = SPECIES_LINOONE,
        .ability = ABILITY_QUICK_FEET,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .moves = {MOVE_SLASH, MOVE_PLAY_ROUGH, MOVE_PIN_MISSILE, MOVE_BELLY_DRUM},
        .gender = TRAINER_MON_MALE,
        },
        {
        .lvl = ENDGAME_REMATCH_LEVEL_3(3),
        .species = SPECIES_EXPLOUD,
        .ability = ABILITY_PUNK_ROCK,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .moves = {MOVE_HYPER_VOICE, MOVE_CRUNCH, MOVE_SCREECH, MOVE_SUPERSONIC},
        .gender = TRAINER_MON_MALE,
        },
        {
        .lvl = ENDGAME_REMATCH_LEVEL_2(3),
        .species = SPECIES_ZANGOOSE,
        .ability = ABILITY_POISON_HEAL,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .moves = {MOVE_FACADE, MOVE_X_SCISSOR, MOVE_NIGHT_SLASH, MOVE_SWORDS_DANCE},
        .gender = TRAINER_MON_MALE,
        .heldItem = ITEM_TOXIC_ORB,
        },
        {
        .lvl = ENDGAME_REMATCH_LEVEL_2(3),
        .species = SPECIES_SPINDA,
        .ability = ABILITY_OWN_TEMPO,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .moves = {MOVE_THRASH, MOVE_TEETER_DANCE, MOVE_HYPNOSIS, MOVE_SKILL_SWAP},
        .gender = TRAINER_MON_MALE,
        .heldItem = ITEM_LIECHI_BERRY,
        },
        {
        .lvl = ENDGAME_REMATCH_3_LEVEL,
        .species = SPECIES_SLAKING,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .moves = {MOVE_GIGA_IMPACT, MOVE_HAMMER_ARM, MOVE_THROAT_CHOP, MOVE_SUCKER_PUNCH},
        .gender = TRAINER_MON_MALE,
        .heldItem = ITEM_SITRUS_BERRY,
        }
    },
},

[TRAINER_NORMAN_4] =
{
    .trainerName = _("Norman"),
    .trainerClass = TRAINER_CLASS_LEADER,
    .trainerPic = TRAINER_PIC_LEADER_NORMAN,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
    .doubleBattle = TRUE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
    .partySize = 5,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = ENDGAME_REMATCH_LEVEL_3(4),
        .species = SPECIES_LINOONE,
        .ability = ABILITY_QUICK_FEET,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .moves = {MOVE_SLASH, MOVE_PLAY_ROUGH, MOVE_PIN_MISSILE, MOVE_BELLY_DRUM},
        .gender = TRAINER_MON_MALE,
        },
        {
        .lvl = ENDGAME_REMATCH_LEVEL_3(4),
        .species = SPECIES_EXPLOUD,
        .ability = ABILITY_PUNK_ROCK,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .moves = {MOVE_HYPER_VOICE, MOVE_CRUNCH, MOVE_SCREECH, MOVE_SUPERSONIC},
        .gender = TRAINER_MON_MALE,
        },
        {
        .lvl = ENDGAME_REMATCH_LEVEL_2(4),
        .species = SPECIES_ZANGOOSE,
        .ability = ABILITY_POISON_HEAL,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .moves = {MOVE_FACADE, MOVE_X_SCISSOR, MOVE_NIGHT_SLASH, MOVE_SWORDS_DANCE},
        .gender = TRAINER_MON_MALE,
        .heldItem = ITEM_TOXIC_ORB,
        },
        {
        .lvl = ENDGAME_REMATCH_LEVEL_2(4),
        .species = SPECIES_SPINDA,
        .ability = ABILITY_OWN_TEMPO,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .moves = {MOVE_THRASH, MOVE_TEETER_DANCE, MOVE_HYPNOSIS, MOVE_SKILL_SWAP},
        .gender = TRAINER_MON_MALE,
        .heldItem = ITEM_LIECHI_BERRY,
        },
        {
        .lvl = ENDGAME_REMATCH_4_LEVEL,
        .species = SPECIES_SLAKING,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .moves = {MOVE_GIGA_IMPACT, MOVE_HAMMER_ARM, MOVE_THROAT_CHOP, MOVE_SUCKER_PUNCH},
        .gender = TRAINER_MON_MALE,
        .heldItem = ITEM_SITRUS_BERRY,
        }
    },
},

[TRAINER_NORMAN_5] =
{
    .trainerName = _("Norman"),
    .trainerClass = TRAINER_CLASS_LEADER,
    .trainerPic = TRAINER_PIC_LEADER_NORMAN,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
    .doubleBattle = TRUE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
    .partySize = 6,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = ENDGAME_REMATCH_LEVEL_3(5),
        .species = SPECIES_LINOONE,
        .ability = ABILITY_QUICK_FEET,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .moves = {MOVE_SLASH, MOVE_PLAY_ROUGH, MOVE_PIN_MISSILE, MOVE_BELLY_DRUM},
        .gender = TRAINER_MON_MALE,
        },
        {
        .lvl = ENDGAME_REMATCH_LEVEL_3(5),
        .species = SPECIES_KECLEON,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .moves = {MOVE_FACADE, MOVE_SHADOW_CLAW, MOVE_SUCKER_PUNCH, MOVE_DISABLE},
        .gender = TRAINER_MON_MALE,
        },
        {
        .lvl = ENDGAME_REMATCH_LEVEL_3(5),
        .species = SPECIES_EXPLOUD,
        .ability = ABILITY_PUNK_ROCK,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .moves = {MOVE_HYPER_VOICE, MOVE_CRUNCH, MOVE_SCREECH, MOVE_SUPERSONIC},
        .gender = TRAINER_MON_MALE,
        },
        {
        .lvl = ENDGAME_REMATCH_LEVEL_2(5),
        .species = SPECIES_ZANGOOSE,
        .ability = ABILITY_POISON_HEAL,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .moves = {MOVE_FACADE, MOVE_X_SCISSOR, MOVE_NIGHT_SLASH, MOVE_SWORDS_DANCE},
        .gender = TRAINER_MON_MALE,
        .heldItem = ITEM_TOXIC_ORB,
        },
        {
        .lvl = ENDGAME_REMATCH_LEVEL_2(5),
        .species = SPECIES_SPINDA,
        .ability = ABILITY_OWN_TEMPO,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .moves = {MOVE_THRASH, MOVE_TEETER_DANCE, MOVE_HYPNOSIS, MOVE_SKILL_SWAP},
        .gender = TRAINER_MON_MALE,
        .heldItem = ITEM_LIECHI_BERRY,
        },
        {
        .lvl = ENDGAME_REMATCH_5_LEVEL,
        .species = SPECIES_SLAKING,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .moves = {MOVE_GIGA_IMPACT, MOVE_HAMMER_ARM, MOVE_THROAT_CHOP, MOVE_SUCKER_PUNCH},
        .gender = TRAINER_MON_MALE,
        .heldItem = ITEM_SITRUS_BERRY,
        }
    },
},

#define WINONA_INFO                                                             \
    .trainerName = _("Winona"),                                                 \
    .trainerClass = TRAINER_CLASS_LEADER,                                       \
    .trainerPic = TRAINER_PIC_LEADER_WINONA,                                    \
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE, \
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON

[TRAINER_WINONA_1] =
{
    .trainerName = _("Winona"),
    .trainerClass = TRAINER_CLASS_LEADER,
    .trainerPic = TRAINER_PIC_LEADER_WINONA,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .items = {ITEM_HYPER_POTION, ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE},
    .partySize = 5,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 43,
        .species = SPECIES_MASQUERAIN,
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
        .moves = {MOVE_AERIAL_ACE, MOVE_SILVER_WIND, MOVE_SCARY_FACE, MOVE_STUN_SPORE},
        .gender = TRAINER_MON_FEMALE,
        },
        {
        .lvl = 43,
        .species = SPECIES_TROPIUS,
        .ability = ABILITY_CHLOROPHYLL,
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
        .moves = {MOVE_AERIAL_ACE, MOVE_LEAF_TORNADO, MOVE_STOMP, MOVE_SWEET_SCENT},
        .gender = TRAINER_MON_FEMALE,
        },
        {
        .lvl = 44,
        .species = SPECIES_PELIPPER,
        .ability = ABILITY_DRIZZLE,
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
        .moves = {MOVE_AERIAL_ACE, MOVE_WATER_PULSE, MOVE_SUPERSONIC, MOVE_TAILWIND},
        .gender = TRAINER_MON_FEMALE,
        },
        {
        .lvl = 44,
        .species = SPECIES_SWELLOW,
        .ability = ABILITY_SCRAPPY,
        .iv = TRAINER_PARTY_IVS(26, 26, 26, 26, 26, 26),
        .moves = {MOVE_AERIAL_ACE, MOVE_QUICK_ATTACK, MOVE_QUICK_GUARD, MOVE_AGILITY},
        .gender = TRAINER_MON_FEMALE,
        },
        {
        .lvl = 46,
        .species = SPECIES_ALTARIA,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .moves = {MOVE_AERIAL_ACE, MOVE_DRAGON_BREATH, MOVE_COTTON_GUARD, MOVE_DRAGON_DANCE},
        .gender = TRAINER_MON_FEMALE,
        .heldItem = ITEM_SITRUS_BERRY,
        }
    },
},

[TRAINER_WINONA_2] =
{
    .trainerName = _("Winona"),
    .trainerClass = TRAINER_CLASS_LEADER,
    .trainerPic = TRAINER_PIC_LEADER_WINONA,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
    .doubleBattle = TRUE,
    .partySize = 5,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = ENDGAME_REMATCH_LEVEL_3(2),
        .species = SPECIES_MASQUERAIN,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .moves = {MOVE_AIR_SLASH, MOVE_BUG_BUZZ, MOVE_GIGA_DRAIN, MOVE_QUIVER_DANCE},
        .gender = TRAINER_MON_FEMALE,
        },
        {
        .lvl = ENDGAME_REMATCH_LEVEL_3(2),
        .species = SPECIES_TROPIUS,
        .ability = ABILITY_CHLOROPHYLL,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .moves = {MOVE_AIR_SLASH, MOVE_ENERGY_BALL, MOVE_BODY_SLAM, MOVE_SYNTHESIS},
        .gender = TRAINER_MON_FEMALE,
        },
        {
        .lvl = ENDGAME_REMATCH_LEVEL_2(2),
        .species = SPECIES_PELIPPER,
        .ability = ABILITY_DRIZZLE,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .moves = {MOVE_HURRICANE, MOVE_HYDRO_PUMP, MOVE_TAILWIND, MOVE_ROOST},
        .gender = TRAINER_MON_FEMALE,
        .heldItem = ITEM_DAMP_ROCK,
        },
        {
        .lvl = ENDGAME_REMATCH_LEVEL_2(2),
        .species = SPECIES_SWELLOW,
        .ability = ABILITY_SCRAPPY,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .moves = {MOVE_BRAVE_BIRD, MOVE_ENDEAVOR, MOVE_REVERSAL, MOVE_DOUBLE_TEAM},
        .gender = TRAINER_MON_FEMALE,
        .heldItem = ITEM_SHARP_BEAK,
        },
        {
        .lvl = ENDGAME_REMATCH_2_LEVEL,
        .species = SPECIES_ALTARIA,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .moves = {MOVE_AIR_SLASH, MOVE_DRAGON_PULSE, MOVE_MOONBLAST, MOVE_COTTON_GUARD},
        .gender = TRAINER_MON_FEMALE,
        .heldItem = ITEM_SITRUS_BERRY,
        }
    },
},

[TRAINER_WINONA_3] =
{
    .trainerName = _("Winona"),
    .trainerClass = TRAINER_CLASS_LEADER,
    .trainerPic = TRAINER_PIC_LEADER_WINONA,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
    .doubleBattle = TRUE,
    .partySize = 6,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = ENDGAME_REMATCH_LEVEL_3(3),
        .species = SPECIES_NINJASK,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .moves = {MOVE_AERIAL_ACE, MOVE_LEECH_LIFE, MOVE_BATON_PASS, MOVE_SWORDS_DANCE},
        .gender = TRAINER_MON_FEMALE,
        },
        {
        .lvl = ENDGAME_REMATCH_LEVEL_3(3),
        .species = SPECIES_MASQUERAIN,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .moves = {MOVE_AIR_SLASH, MOVE_BUG_BUZZ, MOVE_GIGA_DRAIN, MOVE_QUIVER_DANCE},
        .gender = TRAINER_MON_FEMALE,
        },
        {
        .lvl = ENDGAME_REMATCH_LEVEL_3(3),
        .species = SPECIES_TROPIUS,
        .ability = ABILITY_CHLOROPHYLL,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .moves = {MOVE_AIR_SLASH, MOVE_ENERGY_BALL, MOVE_BODY_SLAM, MOVE_SYNTHESIS},
        .gender = TRAINER_MON_FEMALE,
        },
        {
        .lvl = ENDGAME_REMATCH_LEVEL_2(3),
        .species = SPECIES_PELIPPER,
        .ability = ABILITY_DRIZZLE,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .moves = {MOVE_HURRICANE, MOVE_HYDRO_PUMP, MOVE_TAILWIND, MOVE_ROOST},
        .gender = TRAINER_MON_FEMALE,
        .heldItem = ITEM_DAMP_ROCK,
        },
        {
        .lvl = ENDGAME_REMATCH_LEVEL_2(3),
        .species = SPECIES_SWELLOW,
        .ability = ABILITY_SCRAPPY,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .moves = {MOVE_BRAVE_BIRD, MOVE_ENDEAVOR, MOVE_REVERSAL, MOVE_DOUBLE_TEAM},
        .gender = TRAINER_MON_FEMALE,
        .heldItem = ITEM_SHARP_BEAK,
        },
        {
        .lvl = ENDGAME_REMATCH_3_LEVEL,
        .species = SPECIES_ALTARIA,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .moves = {MOVE_AIR_SLASH, MOVE_DRAGON_PULSE, MOVE_MOONBLAST, MOVE_COTTON_GUARD},
        .gender = TRAINER_MON_FEMALE,
        .heldItem = ITEM_SITRUS_BERRY,
        }
    },
},

[TRAINER_WINONA_4] =
{
    .trainerName = _("Winona"),
    .trainerClass = TRAINER_CLASS_LEADER,
    .trainerPic = TRAINER_PIC_LEADER_WINONA,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
    .doubleBattle = TRUE,
    .partySize = 6,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = ENDGAME_REMATCH_LEVEL_3(4),
        .species = SPECIES_NINJASK,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .moves = {MOVE_AERIAL_ACE, MOVE_LEECH_LIFE, MOVE_BATON_PASS, MOVE_SWORDS_DANCE},
        .gender = TRAINER_MON_FEMALE,
        },
        {
        .lvl = ENDGAME_REMATCH_LEVEL_3(4),
        .species = SPECIES_MASQUERAIN,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .moves = {MOVE_AIR_SLASH, MOVE_BUG_BUZZ, MOVE_GIGA_DRAIN, MOVE_QUIVER_DANCE},
        .gender = TRAINER_MON_FEMALE,
        },
        {
        .lvl = ENDGAME_REMATCH_LEVEL_3(4),
        .species = SPECIES_TROPIUS,
        .ability = ABILITY_CHLOROPHYLL,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .moves = {MOVE_AIR_SLASH, MOVE_ENERGY_BALL, MOVE_BODY_SLAM, MOVE_SYNTHESIS},
        .gender = TRAINER_MON_FEMALE,
        },
        {
        .lvl = ENDGAME_REMATCH_LEVEL_2(4),
        .species = SPECIES_PELIPPER,
        .ability = ABILITY_DRIZZLE,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .moves = {MOVE_HURRICANE, MOVE_HYDRO_PUMP, MOVE_TAILWIND, MOVE_ROOST},
        .gender = TRAINER_MON_FEMALE,
        .heldItem = ITEM_DAMP_ROCK,
        },
        {
        .lvl = ENDGAME_REMATCH_LEVEL_2(4),
        .species = SPECIES_SWELLOW,
        .ability = ABILITY_SCRAPPY,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .moves = {MOVE_BRAVE_BIRD, MOVE_ENDEAVOR, MOVE_REVERSAL, MOVE_DOUBLE_TEAM},
        .gender = TRAINER_MON_FEMALE,
        .heldItem = ITEM_SHARP_BEAK,
        },
        {
        .lvl = ENDGAME_REMATCH_4_LEVEL,
        .species = SPECIES_ALTARIA,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .moves = {MOVE_AIR_SLASH, MOVE_DRAGON_PULSE, MOVE_MOONBLAST, MOVE_COTTON_GUARD},
        .gender = TRAINER_MON_FEMALE,
        .heldItem = ITEM_SITRUS_BERRY,
        }
    },
},

[TRAINER_WINONA_5] =
{
    .trainerName = _("Winona"),
    .trainerClass = TRAINER_CLASS_LEADER,
    .trainerPic = TRAINER_PIC_LEADER_WINONA,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
    .doubleBattle = TRUE,
    .partySize = 6,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = ENDGAME_REMATCH_LEVEL_3(5),
        .species = SPECIES_NINJASK,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .moves = {MOVE_ACROBATICS, MOVE_LEECH_LIFE, MOVE_BATON_PASS, MOVE_SWORDS_DANCE},
        .gender = TRAINER_MON_FEMALE,
        },
        {
        .lvl = ENDGAME_REMATCH_LEVEL_3(5),
        .species = SPECIES_MASQUERAIN,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .moves = {MOVE_AIR_SLASH, MOVE_BUG_BUZZ, MOVE_GIGA_DRAIN, MOVE_QUIVER_DANCE},
        .gender = TRAINER_MON_FEMALE,
        },
        {
        .lvl = ENDGAME_REMATCH_LEVEL_3(5),
        .species = SPECIES_TROPIUS,
        .ability = ABILITY_CHLOROPHYLL,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .moves = {MOVE_AIR_SLASH, MOVE_ENERGY_BALL, MOVE_BODY_SLAM, MOVE_SYNTHESIS},
        .gender = TRAINER_MON_FEMALE,
        },
        {
        .lvl = ENDGAME_REMATCH_LEVEL_2(5),
        .species = SPECIES_PELIPPER,
        .ability = ABILITY_DRIZZLE,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .moves = {MOVE_HURRICANE, MOVE_HYDRO_PUMP, MOVE_TAILWIND, MOVE_ROOST},
        .gender = TRAINER_MON_FEMALE,
        .heldItem = ITEM_DAMP_ROCK,
        },
        {
        .lvl = ENDGAME_REMATCH_LEVEL_2(5),
        .species = SPECIES_SWELLOW,
        .ability = ABILITY_SCRAPPY,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .moves = {MOVE_BRAVE_BIRD, MOVE_ENDEAVOR, MOVE_REVERSAL, MOVE_DOUBLE_TEAM},
        .gender = TRAINER_MON_FEMALE,
        .heldItem = ITEM_SHARP_BEAK,
        },
        {
        .lvl = ENDGAME_REMATCH_5_LEVEL,
        .species = SPECIES_ALTARIA,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .moves = {MOVE_AIR_SLASH, MOVE_DRAGON_PULSE, MOVE_MOONBLAST, MOVE_COTTON_GUARD},
        .gender = TRAINER_MON_FEMALE,
        .heldItem = ITEM_SITRUS_BERRY,
        }
    },
},

[TRAINER_TATE_AND_LIZA_1] =
{
    .trainerName = _("Tate&Liza"),
    .trainerClass = TRAINER_CLASS_LEADER,
    .trainerPic = TRAINER_PIC_LEADER_TATE_AND_LIZA,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .items = {ITEM_HYPER_POTION, ITEM_HYPER_POTION, ITEM_HYPER_POTION, ITEM_HYPER_POTION},
    .doubleBattle = TRUE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
    .partySize = 4,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 55,
        .species = SPECIES_CLAYDOL,
        .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
        .moves = {MOVE_PSYCHIC, MOVE_EARTH_POWER, MOVE_COSMIC_POWER, MOVE_LIGHT_SCREEN},
        },
        {
        .lvl = 55,
        .species = SPECIES_GRUMPIG,
        .ability = ABILITY_THICK_FAT,
        .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
        .moves = {MOVE_PSYCHIC, MOVE_POWER_GEM, MOVE_CONFUSE_RAY, MOVE_MAGIC_COAT},
        .gender = TRAINER_MON_MALE,
        },
        {
        .lvl = 57,
        .species = SPECIES_LUNATONE,
        .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
        .moves = {MOVE_PSYCHIC, MOVE_MOONBLAST, MOVE_POWER_GEM, MOVE_ICY_WIND},
        .heldItem = ITEM_SITRUS_BERRY,
        },
        {
        .lvl = 57,
        .species = SPECIES_SOLROCK,
        .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
        .moves = {MOVE_PSYCHIC, MOVE_ROCK_SLIDE, MOVE_FLARE_BLITZ, MOVE_MORNING_SUN},
        .heldItem = ITEM_SITRUS_BERRY,
        }
    },
},

[TRAINER_TATE_AND_LIZA_2] =
{
    .trainerName = _("Tate&Liza"),
    .trainerClass = TRAINER_CLASS_LEADER,
    .trainerPic = TRAINER_PIC_LEADER_TATE_AND_LIZA,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
    .doubleBattle = TRUE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
    .partySize = 5,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = ENDGAME_REMATCH_LEVEL_3(2),
        .species = SPECIES_CHIMECHO,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .moves = {MOVE_PSYCHIC, MOVE_HEAL_PULSE, MOVE_LIGHT_SCREEN, MOVE_HEAL_BELL},
        .gender = TRAINER_MON_MALE,
        },
        {
        .lvl = ENDGAME_REMATCH_LEVEL_2(2),
        .species = SPECIES_CLAYDOL,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .moves = {MOVE_PSYCHIC, MOVE_EARTH_POWER, MOVE_POWER_SPLIT, MOVE_COSMIC_POWER},
        },
        {
        .lvl = ENDGAME_REMATCH_LEVEL_2(2),
        .species = SPECIES_GRUMPIG,
        .ability = ABILITY_THICK_FAT,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .moves = {MOVE_PSYCHIC, MOVE_POWER_GEM, MOVE_CONFUSE_RAY, MOVE_MAGIC_COAT},
        .gender = TRAINER_MON_MALE,
        },
        {
        .lvl = ENDGAME_REMATCH_2_LEVEL,
        .species = SPECIES_LUNATONE,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .moves = {MOVE_PSYCHIC, MOVE_MOONBLAST, MOVE_ICY_WIND, MOVE_COSMIC_POWER},
        .heldItem = ITEM_SITRUS_BERRY,
        },
        {
        .lvl = ENDGAME_REMATCH_2_LEVEL,
        .species = SPECIES_SOLROCK,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .moves = {MOVE_PSYCHIC, MOVE_ROCK_SLIDE, MOVE_FLARE_BLITZ, MOVE_MORNING_SUN},
        .heldItem = ITEM_SITRUS_BERRY,
        }
    },
},

[TRAINER_TATE_AND_LIZA_3] =
{
    .trainerName = _("Tate&Liza"),
    .trainerClass = TRAINER_CLASS_LEADER,
    .trainerPic = TRAINER_PIC_LEADER_TATE_AND_LIZA,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
    .doubleBattle = TRUE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
    .partySize = 6,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = ENDGAME_REMATCH_LEVEL_3(3),
        .species = SPECIES_GARDEVOIR,
        .ability = ABILITY_SYNCHRONIZE,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .moves = {MOVE_PSYCHIC, MOVE_DAZZLING_GLEAM, MOVE_MYSTICAL_FIRE, MOVE_CALM_MIND},
        .gender = TRAINER_MON_FEMALE,
        },
        {
        .lvl = ENDGAME_REMATCH_LEVEL_3(3),
        .species = SPECIES_CHIMECHO,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .moves = {MOVE_PSYCHIC, MOVE_HEAL_PULSE, MOVE_LIGHT_SCREEN, MOVE_HEAL_BELL},
        .gender = TRAINER_MON_MALE,
        },
        {
        .lvl = ENDGAME_REMATCH_LEVEL_2(3),
        .species = SPECIES_CLAYDOL,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .moves = {MOVE_PSYCHIC, MOVE_EARTH_POWER, MOVE_POWER_SPLIT, MOVE_COSMIC_POWER},
        },
        {
        .lvl = ENDGAME_REMATCH_LEVEL_2(3),
        .species = SPECIES_GRUMPIG,
        .ability = ABILITY_THICK_FAT,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .moves = {MOVE_PSYCHIC, MOVE_POWER_GEM, MOVE_CONFUSE_RAY, MOVE_MAGIC_COAT},
        .gender = TRAINER_MON_MALE,
        },
        {
        .lvl = ENDGAME_REMATCH_3_LEVEL,
        .species = SPECIES_LUNATONE,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .moves = {MOVE_PSYCHIC, MOVE_MOONBLAST, MOVE_ICY_WIND, MOVE_COSMIC_POWER},
        .heldItem = ITEM_SITRUS_BERRY,
        },
        {
        .lvl = ENDGAME_REMATCH_3_LEVEL,
        .species = SPECIES_SOLROCK,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .moves = {MOVE_PSYCHIC, MOVE_ROCK_SLIDE, MOVE_FLARE_BLITZ, MOVE_MORNING_SUN},
        .heldItem = ITEM_SITRUS_BERRY,
        }
    },
},

[TRAINER_TATE_AND_LIZA_4] =
{
    .trainerName = _("Tate&Liza"),
    .trainerClass = TRAINER_CLASS_LEADER,
    .trainerPic = TRAINER_PIC_LEADER_TATE_AND_LIZA,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
    .doubleBattle = TRUE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
    .partySize = 6,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = ENDGAME_REMATCH_LEVEL_3(4),
        .species = SPECIES_GARDEVOIR,
        .ability = ABILITY_SYNCHRONIZE,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .moves = {MOVE_PSYCHIC, MOVE_DAZZLING_GLEAM, MOVE_MYSTICAL_FIRE, MOVE_CALM_MIND},
        .gender = TRAINER_MON_FEMALE,
        },
        {
        .lvl = ENDGAME_REMATCH_LEVEL_3(4),
        .species = SPECIES_CHIMECHO,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .moves = {MOVE_PSYCHIC, MOVE_HEAL_PULSE, MOVE_LIGHT_SCREEN, MOVE_HEAL_BELL},
        .gender = TRAINER_MON_MALE,
        },
        {
        .lvl = ENDGAME_REMATCH_LEVEL_2(4),
        .species = SPECIES_CLAYDOL,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .moves = {MOVE_PSYCHIC, MOVE_EARTH_POWER, MOVE_POWER_SPLIT, MOVE_COSMIC_POWER},
        },
        {
        .lvl = ENDGAME_REMATCH_LEVEL_2(4),
        .species = SPECIES_GRUMPIG,
        .ability = ABILITY_THICK_FAT,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .moves = {MOVE_PSYCHIC, MOVE_POWER_GEM, MOVE_CONFUSE_RAY, MOVE_MAGIC_COAT},
        .gender = TRAINER_MON_MALE,
        },
        {
        .lvl = ENDGAME_REMATCH_4_LEVEL,
        .species = SPECIES_LUNATONE,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .moves = {MOVE_PSYCHIC, MOVE_MOONBLAST, MOVE_ICY_WIND, MOVE_COSMIC_POWER},
        .heldItem = ITEM_SITRUS_BERRY,
        },
        {
        .lvl = ENDGAME_REMATCH_4_LEVEL,
        .species = SPECIES_SOLROCK,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .moves = {MOVE_PSYCHIC, MOVE_ROCK_SLIDE, MOVE_FLARE_BLITZ, MOVE_MORNING_SUN},
        .heldItem = ITEM_SITRUS_BERRY,
        }
    },
},

[TRAINER_TATE_AND_LIZA_5] =
{
    .trainerName = _("Tate&Liza"),
    .trainerClass = TRAINER_CLASS_LEADER,
    .trainerPic = TRAINER_PIC_LEADER_TATE_AND_LIZA,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
    .doubleBattle = TRUE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
    .partySize = 6,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = ENDGAME_REMATCH_LEVEL_3(5),
        .species = SPECIES_GARDEVOIR,
        .ability = ABILITY_SYNCHRONIZE,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .moves = {MOVE_PSYCHIC, MOVE_DAZZLING_GLEAM, MOVE_MYSTICAL_FIRE, MOVE_CALM_MIND},
        .gender = TRAINER_MON_FEMALE,
        },
        {
        .lvl = ENDGAME_REMATCH_LEVEL_3(5),
        .species = SPECIES_CHIMECHO,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .moves = {MOVE_PSYCHIC, MOVE_HEAL_PULSE, MOVE_LIGHT_SCREEN, MOVE_HEAL_BELL},
        .gender = TRAINER_MON_MALE,
        },
        {
        .lvl = ENDGAME_REMATCH_LEVEL_2(5),
        .species = SPECIES_CLAYDOL,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .moves = {MOVE_PSYCHIC, MOVE_EARTH_POWER, MOVE_POWER_SPLIT, MOVE_COSMIC_POWER},
        },
        {
        .lvl = ENDGAME_REMATCH_LEVEL_2(5),
        .species = SPECIES_GRUMPIG,
        .ability = ABILITY_THICK_FAT,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .moves = {MOVE_PSYCHIC, MOVE_POWER_GEM, MOVE_CONFUSE_RAY, MOVE_MAGIC_COAT},
        .gender = TRAINER_MON_MALE,
        },
        {
        .lvl = ENDGAME_REMATCH_5_LEVEL,
        .species = SPECIES_LUNATONE,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .moves = {MOVE_PSYCHIC, MOVE_MOONBLAST, MOVE_ICY_WIND, MOVE_COSMIC_POWER},
        .heldItem = ITEM_SITRUS_BERRY,
        },
        {
        .lvl = ENDGAME_REMATCH_5_LEVEL,
        .species = SPECIES_SOLROCK,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .moves = {MOVE_PSYCHIC, MOVE_ROCK_SLIDE, MOVE_FLARE_BLITZ, MOVE_MORNING_SUN},
        .heldItem = ITEM_SITRUS_BERRY,
        }
    },
},

[TRAINER_JUAN_1] =
{
    .trainerName = _("Juan"),
    .trainerClass = TRAINER_CLASS_LEADER,
    .trainerPic = TRAINER_PIC_LEADER_JUAN,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .items = {ITEM_HYPER_POTION, ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE},
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
    .partySize = 5,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 44,
        .species = SPECIES_CASTFORM,
        .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
        .moves = {MOVE_WATER_PULSE, MOVE_WEATHER_BALL, MOVE_POWDER_SNOW, MOVE_RAIN_DANCE},
        },
        {
        .lvl = 44,
        .species = SPECIES_HUNTAIL,
        .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
        .moves = {MOVE_WATER_PULSE, MOVE_CRUNCH, MOVE_ICE_FANG, MOVE_RAIN_DANCE},
        },
        {
        .lvl = 45,
        .species = SPECIES_CRAWDAUNT,
        .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
        .moves = {MOVE_WATER_PULSE, MOVE_NIGHT_SLASH, MOVE_TAUNT, MOVE_SWORDS_DANCE},
        },
        {
        .lvl = 45,
        .species = SPECIES_LUVDISC,
        .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
        .moves = {MOVE_WATER_PULSE, MOVE_ATTRACT, MOVE_BABY_DOLL_EYES, MOVE_WISH},
        },
        {
        .lvl = 47,
        .species = SPECIES_WHISCASH,
        .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
        .moves = {MOVE_WATER_PULSE, MOVE_EARTHQUAKE, MOVE_AMNESIA, MOVE_DRAGON_DANCE},
        .heldItem = ITEM_SITRUS_BERRY,
        }
    },
},

[TRAINER_JUAN_2] =
{
    .trainerName = _("Juan"),
    .trainerClass = TRAINER_CLASS_LEADER,
    .trainerPic = TRAINER_PIC_LEADER_JUAN,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
    .doubleBattle = TRUE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
    .partySize = 5,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = ENDGAME_REMATCH_LEVEL_3(2),
        .species = SPECIES_CASTFORM,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .moves = {MOVE_WEATHER_BALL, MOVE_THUNDER, MOVE_HURRICANE, MOVE_RAIN_DANCE},
        },
        {
        .lvl = ENDGAME_REMATCH_LEVEL_3(2),
        .species = SPECIES_HUNTAIL,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .moves = {MOVE_AQUA_TAIL, MOVE_CRUNCH, MOVE_BATON_PASS, MOVE_COIL},
        },
        {
        .lvl = ENDGAME_REMATCH_LEVEL_2(2),
        .species = SPECIES_CRAWDAUNT,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .moves = {MOVE_CRABHAMMER, MOVE_CRUNCH, MOVE_ENDEAVOR, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_MYSTIC_WATER,
        },
        {
        .lvl = ENDGAME_REMATCH_LEVEL_2(2),
        .species = SPECIES_LUVDISC,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .moves = {MOVE_HYDRO_PUMP, MOVE_WISH, MOVE_BABY_DOLL_EYES, MOVE_RAIN_DANCE},
        .heldItem = ITEM_DAMP_ROCK,
        },
        {
        .lvl = ENDGAME_REMATCH_2_LEVEL,
        .species = SPECIES_WHISCASH,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .moves = {MOVE_AQUA_TAIL, MOVE_EARTHQUAKE, MOVE_ZEN_HEADBUTT, MOVE_DRAGON_DANCE},
        .heldItem = ITEM_SITRUS_BERRY,
        }
    },
},

[TRAINER_JUAN_3] =
{
    .trainerName = _("Juan"),
    .trainerClass = TRAINER_CLASS_LEADER,
    .trainerPic = TRAINER_PIC_LEADER_JUAN,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
    .doubleBattle = TRUE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
    .partySize = 6,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = ENDGAME_REMATCH_LEVEL_3(3),
        .species = SPECIES_SWAMPERT,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .moves = {MOVE_LIQUIDATION, MOVE_EARTHQUAKE, MOVE_HAMMER_ARM, MOVE_ROCK_SLIDE},
        },
        {
        .lvl = ENDGAME_REMATCH_LEVEL_3(3),
        .species = SPECIES_CASTFORM,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .moves = {MOVE_WEATHER_BALL, MOVE_THUNDER, MOVE_HURRICANE, MOVE_RAIN_DANCE},
        },
        {
        .lvl = ENDGAME_REMATCH_LEVEL_3(3),
        .species = SPECIES_HUNTAIL,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .moves = {MOVE_AQUA_TAIL, MOVE_CRUNCH, MOVE_BATON_PASS, MOVE_COIL},
        },
        {
        .lvl = ENDGAME_REMATCH_LEVEL_2(3),
        .species = SPECIES_CRAWDAUNT,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .moves = {MOVE_CRABHAMMER, MOVE_CRUNCH, MOVE_ENDEAVOR, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_MYSTIC_WATER,
        },
        {
        .lvl = ENDGAME_REMATCH_LEVEL_2(3),
        .species = SPECIES_LUVDISC,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .moves = {MOVE_HYDRO_PUMP, MOVE_WISH, MOVE_BABY_DOLL_EYES, MOVE_RAIN_DANCE},
        .heldItem = ITEM_DAMP_ROCK,
        },
        {
        .lvl = ENDGAME_REMATCH_3_LEVEL,
        .species = SPECIES_WHISCASH,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .moves = {MOVE_AQUA_TAIL, MOVE_EARTHQUAKE, MOVE_ZEN_HEADBUTT, MOVE_DRAGON_DANCE},
        .heldItem = ITEM_SITRUS_BERRY,
        }
    },
},

[TRAINER_JUAN_4] =
{
    .trainerName = _("Juan"),
    .trainerClass = TRAINER_CLASS_LEADER,
    .trainerPic = TRAINER_PIC_LEADER_JUAN,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
    .doubleBattle = TRUE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
    .partySize = 6,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = ENDGAME_REMATCH_LEVEL_3(4),
        .species = SPECIES_SWAMPERT,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .moves = {MOVE_LIQUIDATION, MOVE_EARTHQUAKE, MOVE_HAMMER_ARM, MOVE_ROCK_SLIDE},
        },
        {
        .lvl = ENDGAME_REMATCH_LEVEL_3(4),
        .species = SPECIES_CASTFORM,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .moves = {MOVE_WEATHER_BALL, MOVE_THUNDER, MOVE_HURRICANE, MOVE_RAIN_DANCE},
        },
        {
        .lvl = ENDGAME_REMATCH_LEVEL_3(4),
        .species = SPECIES_HUNTAIL,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .moves = {MOVE_AQUA_TAIL, MOVE_CRUNCH, MOVE_BATON_PASS, MOVE_COIL},
        },
        {
        .lvl = ENDGAME_REMATCH_LEVEL_2(4),
        .species = SPECIES_CRAWDAUNT,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .moves = {MOVE_CRABHAMMER, MOVE_CRUNCH, MOVE_ENDEAVOR, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_MYSTIC_WATER,
        },
        {
        .lvl = ENDGAME_REMATCH_LEVEL_2(4),
        .species = SPECIES_LUVDISC,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .moves = {MOVE_HYDRO_PUMP, MOVE_WISH, MOVE_BABY_DOLL_EYES, MOVE_RAIN_DANCE},
        .heldItem = ITEM_DAMP_ROCK,
        },
        {
        .lvl = ENDGAME_REMATCH_4_LEVEL,
        .species = SPECIES_WHISCASH,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .moves = {MOVE_AQUA_TAIL, MOVE_EARTHQUAKE, MOVE_ZEN_HEADBUTT, MOVE_DRAGON_DANCE},
        .heldItem = ITEM_SITRUS_BERRY,
        }
    },
},

[TRAINER_JUAN_5] =
{
    .trainerName = _("Juan"),
    .trainerClass = TRAINER_CLASS_LEADER,
    .trainerPic = TRAINER_PIC_LEADER_JUAN,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
    .doubleBattle = TRUE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
    .partySize = 6,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = ENDGAME_REMATCH_LEVEL_3(5),
        .species = SPECIES_SWAMPERT,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .moves = {MOVE_LIQUIDATION, MOVE_EARTHQUAKE, MOVE_HAMMER_ARM, MOVE_ROCK_SLIDE},
        },
        {
        .lvl = ENDGAME_REMATCH_LEVEL_3(5),
        .species = SPECIES_CASTFORM,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .moves = {MOVE_WEATHER_BALL, MOVE_THUNDER, MOVE_HURRICANE, MOVE_RAIN_DANCE},
        },
        {
        .lvl = ENDGAME_REMATCH_LEVEL_3(5),
        .species = SPECIES_HUNTAIL,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .moves = {MOVE_AQUA_TAIL, MOVE_CRUNCH, MOVE_BATON_PASS, MOVE_COIL},
        },
        {
        .lvl = ENDGAME_REMATCH_LEVEL_2(5),
        .species = SPECIES_CRAWDAUNT,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .moves = {MOVE_CRABHAMMER, MOVE_CRUNCH, MOVE_ENDEAVOR, MOVE_SWORDS_DANCE},
        .heldItem = ITEM_MYSTIC_WATER,
        },
        {
        .lvl = ENDGAME_REMATCH_LEVEL_2(5),
        .species = SPECIES_LUVDISC,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .moves = {MOVE_HYDRO_PUMP, MOVE_WISH, MOVE_BABY_DOLL_EYES, MOVE_RAIN_DANCE},
        .heldItem = ITEM_DAMP_ROCK,
        },
        {
        .lvl = ENDGAME_REMATCH_5_LEVEL,
        .species = SPECIES_WHISCASH,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
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
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SETUP_FIRST_TURN,
    .partySize = 5,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 50,
        .species = SPECIES_MIGHTYENA,
        .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
        .moves = {MOVE_CRUNCH, MOVE_FIRE_FANG, MOVE_THUNDER_FANG, MOVE_YAWN},
        },
        {
        .lvl = 50,
        .species = SPECIES_SHIFTRY,
        .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
        .moves = {MOVE_NIGHT_SLASH, MOVE_LEAF_BLADE, MOVE_FAKE_OUT, MOVE_DOUBLE_SLAP},
        },
        {
        .lvl = 51,
        .species = SPECIES_CRAWDAUNT,
        .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
        .moves = {MOVE_CRUNCH, MOVE_CRABHAMMER, MOVE_KNOCK_OFF, MOVE_SWORDS_DANCE},
        },
        {
        .lvl = 51,
        .species = SPECIES_CACTURNE,
        .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
        .moves = {MOVE_ENERGY_BALL, MOVE_DARK_PULSE, MOVE_LEECH_SEED, MOVE_SPIKY_SHIELD},
        },
        {
        .lvl = 52,
        .species = SPECIES_ABSOL,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
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
        .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
        .moves = {MOVE_HEX, MOVE_CONFUSE_RAY, MOVE_CURSE, MOVE_WILL_O_WISP},
        },
        {
        .lvl = 51,
        .species = SPECIES_SHEDINJA,
        .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
        .moves = {MOVE_SHADOW_CLAW, MOVE_LEECH_LIFE, MOVE_HEAL_BLOCK, MOVE_SPITE},
        },
        {
        .lvl = 52,
        .species = SPECIES_SABLEYE,
        .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
        .moves = {MOVE_SHADOW_CLAW, MOVE_FOUL_PLAY, MOVE_POWER_GEM, MOVE_FAKE_OUT},
        },
        {
        .lvl = 52,
        .species = SPECIES_BANETTE,
        .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
        .moves = {MOVE_SHADOW_CLAW, MOVE_BODY_SLAM, MOVE_SHADOW_SNEAK, MOVE_SWORDS_DANCE},
        },
        {
        .lvl = 53,
        .species = SPECIES_DUSKNOIR,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
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
        .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
        .moves = {MOVE_ICE_BALL, MOVE_ROLLOUT, MOVE_DEFENSE_CURL, MOVE_HAIL},
        },
        {
        .lvl = 52,
        .species = SPECIES_CASTFORM,
        .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
        .moves = {MOVE_BLIZZARD, MOVE_WEATHER_BALL, MOVE_HYDRO_PUMP, MOVE_HAIL},
        },
        {
        .lvl = 53,
        .species = SPECIES_GLALIE,
        .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
        .moves = {MOVE_FREEZE_DRY, MOVE_ICE_SHARD, MOVE_PROTECT, MOVE_HAIL},
        },
        {
        .lvl = 53,
        .species = SPECIES_FROSLASS,
        .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
        .moves = {MOVE_BLIZZARD, MOVE_SHADOW_BALL, MOVE_DRAINING_KISS, MOVE_HAIL},
        },
        {
        .lvl = 54,
        .species = SPECIES_WALREIN,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
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
        .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
        .moves = {MOVE_DRAGON_CLAW, MOVE_ZEN_HEADBUTT, MOVE_DOUBLE_EDGE, MOVE_PROTECT},
        },
        {
        .lvl = 53,
        .species = SPECIES_KINGDRA,
        .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
        .moves = {MOVE_DRAGON_PULSE, MOVE_SURF, MOVE_SMOKESCREEN, MOVE_YAWN},
        },
        {
        .lvl = 54,
        .species = SPECIES_ALTARIA,
        .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
        .moves = {MOVE_DRAGON_PULSE, MOVE_AIR_SLASH, MOVE_MOONBLAST, MOVE_COTTON_GUARD},
        },
        {
        .lvl = 54,
        .species = SPECIES_FLYGON,
        .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
        .moves = {MOVE_DRAGON_CLAW, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE},
        },
        {
        .lvl = 56,
        .species = SPECIES_SALAMENCE,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
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
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .moves = {MOVE_HYDRO_PUMP, MOVE_HURRICANE, MOVE_ROOST, MOVE_SUPERSONIC},
        .gender = TRAINER_MON_MALE,
        .heldItem = ITEM_DAMP_ROCK,
        },
        {
        .lvl = 56,
        .species = SPECIES_GOREBYSS,
        .ability = ABILITY_SWIFT_SWIM,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .moves = {MOVE_SURF, MOVE_PSYCHIC, MOVE_DRAINING_KISS, MOVE_SHELL_SMASH},
        .gender = TRAINER_MON_FEMALE,
        },
        {
        .lvl = 56,
        .species = SPECIES_RELICANTH,
        .ability = ABILITY_SWIFT_SWIM,
        .nature = NATURE_IMPISH,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .moves = {MOVE_AQUA_TAIL, MOVE_ROCK_TOMB, MOVE_YAWN, MOVE_REST},
        .gender = TRAINER_MON_MALE,
        .heldItem = ITEM_CHESTO_BERRY,
        .isShiny = TRUE,
        },
        {
        .lvl = 57,
        .species = SPECIES_LUDICOLO,
        .ability = ABILITY_SWIFT_SWIM,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .moves = {MOVE_SURF, MOVE_GIGA_DRAIN, MOVE_LEECH_SEED, MOVE_RAIN_DANCE},
        .gender = TRAINER_MON_MALE,
        },
        {
        .lvl = 57,
        .species = SPECIES_WAILORD,
        .ability = ABILITY_OBLIVIOUS,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .moves = {MOVE_WATER_SPOUT, MOVE_ICE_BEAM, MOVE_AQUA_RING, MOVE_AMNESIA},
        .gender = TRAINER_MON_MALE,
        .heldItem = ITEM_LEFTOVERS,
        },
        {
        .lvl = 59,
        .species = SPECIES_MILOTIC,
        .ability = ABILITY_MARVEL_SCALE,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
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
        .ev = TRAINER_PARTY_EVS(1, 63, 63, 0, 0, 0),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
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
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .moves = {MOVE_REFLECT, MOVE_LIGHT_SCREEN, MOVE_ANCIENT_POWER, MOVE_EARTHQUAKE},
        },
        {
        .lvl = 78,
        .species = SPECIES_JIRACHI,
        .nature = NATURE_MODEST,
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 63, 63, 1),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
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
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
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
        .ev = TRAINER_PARTY_EVS(1, 63, 63, 0, 0, 0),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
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
        .ev = TRAINER_PARTY_EVS(1, 63, 63, 0, 0, 0),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
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
        .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
        },
        {
        .lvl = 21,
        .species = SPECIES_WHISMUR,
        .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
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
        .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
        },
        {
        .lvl = 34,
        .species = SPECIES_LOUDRED,
        .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
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
        .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
        },
        {
        .lvl = 40,
        .species = SPECIES_LOUDRED,
        .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
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
        .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
        },
        {
        .lvl = 45,
        .species = SPECIES_LOUDRED,
        .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
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
        .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
        },
        {
        .lvl = 50,
        .species = SPECIES_LOUDRED,
        .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
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
        .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
        .moves = {MOVE_THUNDERBOLT, MOVE_FLASH_CANNON, MOVE_METAL_SOUND, MOVE_BARRIER},
        },
        {
        .lvl = 55,
        .species = SPECIES_EXPLOUD,
        .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
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

#define RICH_BOY_INFO            \
    TRAINER_CLASS_PIC(RICH_BOY), \
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_RICH

#define FISHERMAN_INFO            \
    TRAINER_CLASS_PIC(FISHERMAN), \
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER

#define LADY_INFO            \
    TRAINER_CLASS_PIC(LADY), \
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE

#define TWINS_INFO                                          \
    TRAINER_CLASS_PIC(TWINS),                               \
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS, \
    .doubleBattle = TRUE

#define HIKER_INFO            \
    TRAINER_CLASS_PIC(HIKER), \
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER

#define SCHOOL_KID_M_INFO                     \
    .trainerClass = TRAINER_CLASS_SCHOOL_KID, \
    .trainerPic = TRAINER_PIC_SCHOOL_KID_M,   \
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE

#define SCHOOL_KID_F_INFO                     \
    .trainerClass = TRAINER_CLASS_SCHOOL_KID, \
    .trainerPic = TRAINER_PIC_SCHOOL_KID_F,   \
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL

#define AQUA_GRUNT_M_INFO                    \
    .trainerName = _("Grunt"),               \
    .trainerClass = TRAINER_CLASS_TEAM_AQUA, \
    .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,  \
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA

#define BIRD_KEEPER_INFO            \
    TRAINER_CLASS_PIC(BIRD_KEEPER), \
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL

#define COLLECTOR_INFO            \
    TRAINER_CLASS_PIC(COLLECTOR), \
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS

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
#define REMATCH_5_LEVEL_2 REMATCH_5_LEVEL_1 - 1
#define REMATCH_5_LEVEL_3 REMATCH_5_LEVEL_1 - 2
#define REMATCH_5_LEVEL_4 REMATCH_5_LEVEL_1 - 3
#define REMATCH_5_LEVEL_5 REMATCH_5_LEVEL_1 - 4
#define REMATCH_5_LEVEL_6 REMATCH_5_LEVEL_1 - 5



#define LINUS                    \
    .ability = ABILITY_GLUTTONY, \
    .nature = NATURE_JOLLY,      \
    .gender = TRAINER_MON_MALE,  \
    .nickname = COMPOUND_STRING("Linus")

[TRAINER_CALVIN_1] =
{
    .trainerName = _("Calvin"),
    YOUNGSTER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 5,
        .species = SPECIES_ZIGZAGOON,
        LINUS,
        }
    },
},

[TRAINER_CALVIN_2] =
{
    .trainerName = _("Calvin"),
    YOUNGSTER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = REMATCH_2_LEVEL_1,
        .species = SPECIES_TAILLOW,
        .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
        },
        {
        .lvl = REMATCH_2_LEVEL_1,
        .species = SPECIES_LINOONE,
        .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
        LINUS,
        }
    },
},

[TRAINER_CALVIN_3] =
{
    .trainerName = _("Calvin"),
    YOUNGSTER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = REMATCH_3_LEVEL_1,
        .species = SPECIES_SWELLOW,
        .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
        },
        {
        .lvl = REMATCH_3_LEVEL_1,
        .species = SPECIES_LINOONE,
        .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
        LINUS,
        }
    },
},

[TRAINER_CALVIN_4] =
{
    .trainerName = _("Calvin"),
    YOUNGSTER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = REMATCH_4_LEVEL_1,
        .species = SPECIES_MIGHTYENA,
        .ability = ABILITY_INTIMIDATE,
        .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
        },
        {
        .lvl = REMATCH_4_LEVEL_1,
        .species = SPECIES_SWELLOW,
        .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
        },
        {
        .lvl = REMATCH_4_LEVEL_1,
        .species = SPECIES_LINOONE,
        .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
        LINUS,
        }
    },
},

[TRAINER_CALVIN_5] =
{
    .trainerName = _("Calvin"),
    YOUNGSTER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
    .partySize = 4,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = REMATCH_5_LEVEL_2,
        .species = SPECIES_FLYGON,
        .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
        },
        {
        .lvl = REMATCH_5_LEVEL_2,
        .species = SPECIES_MIGHTYENA,
        .ability = ABILITY_INTIMIDATE,
        .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
        },
        {
        .lvl = REMATCH_5_LEVEL_2,
        .species = SPECIES_SWELLOW,
        .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
        },
        {
        .lvl = REMATCH_5_LEVEL_1,
        .species = SPECIES_LINOONE,
        .ev = TRAINER_PARTY_EVS(1, 63, 0, 63, 0, 0),
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .moves = {MOVE_BODY_SLAM, MOVE_PLAY_ROUGH, MOVE_PIN_MISSILE, MOVE_HONE_CLAWS},
        .heldItem = ITEM_FIGY_BERRY,
        LINUS,
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

[TRAINER_WINSTON_1] =
{
    .trainerName = _("Winston"),
    RICH_BOY_INFO,
    .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 8,
        .species = SPECIES_ZIGZAGOON,
        .ability = ABILITY_QUICK_FEET,
        .gender = TRAINER_MON_MALE,
        .heldItem = ITEM_NUGGET,
        .isShiny = TRUE,
        .nickname = COMPOUND_STRING("Mr. Zig")
        }
    },
},

[TRAINER_WINSTON_2] =
{
    .trainerName = _("Winston"),
    RICH_BOY_INFO,
    .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = REMATCH_2_LEVEL_1,
        .species = SPECIES_SPOINK,
        .ability = ABILITY_THICK_FAT,
        .gender = TRAINER_MON_MALE,
        .heldItem = ITEM_NUGGET,
        .isShiny = TRUE,
        .nickname = COMPOUND_STRING("Mr. Pig")
        },
        {
        .lvl = REMATCH_2_LEVEL_1,
        .species = SPECIES_LINOONE,
        .ability = ABILITY_QUICK_FEET,
        .gender = TRAINER_MON_MALE,
        .heldItem = ITEM_NUGGET,
        .isShiny = TRUE,
        .nickname = COMPOUND_STRING("Mr. Zig")
        }
    },
},

[TRAINER_WINSTON_3] =
{
    .trainerName = _("Winston"),
    RICH_BOY_INFO,
    .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = REMATCH_3_LEVEL_1,
        .species = SPECIES_TRAPINCH,
        .gender = TRAINER_MON_MALE,
        .heldItem = ITEM_NUGGET,
        .isShiny = TRUE,
        .nickname = COMPOUND_STRING("Mr. Dig")
        },
        {
        .lvl = REMATCH_3_LEVEL_1,
        .species = SPECIES_GRUMPIG,
        .ability = ABILITY_THICK_FAT,
        .gender = TRAINER_MON_MALE,
        .heldItem = ITEM_NUGGET,
        .isShiny = TRUE,
        .nickname = COMPOUND_STRING("Mr. Pig")
        },
        {
        .lvl = REMATCH_3_LEVEL_1,
        .species = SPECIES_LINOONE,
        .ability = ABILITY_QUICK_FEET,
        .gender = TRAINER_MON_MALE,
        .heldItem = ITEM_NUGGET,
        .isShiny = TRUE,
        .nickname = COMPOUND_STRING("Mr. Zig")
        }
    },
},

[TRAINER_WINSTON_4] =
{
    .trainerName = _("Winston"),
    RICH_BOY_INFO,
    .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
    .partySize = 4,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = REMATCH_4_LEVEL_1,
        .species = SPECIES_GIRAFARIG,
        .ability = ABILITY_SAP_SIPPER,
        .gender = TRAINER_MON_MALE,
        .heldItem = ITEM_NUGGET,
        .isShiny = TRUE,
        .nickname = COMPOUND_STRING("Mr. Gig")
        },
        {
        .lvl = REMATCH_4_LEVEL_1,
        .species = SPECIES_VIBRAVA,
        .gender = TRAINER_MON_MALE,
        .heldItem = ITEM_NUGGET,
        .isShiny = TRUE,
        .nickname = COMPOUND_STRING("Mr. Dig")
        },
        {
        .lvl = REMATCH_4_LEVEL_1,
        .species = SPECIES_GRUMPIG,
        .ability = ABILITY_THICK_FAT,
        .gender = TRAINER_MON_MALE,
        .heldItem = ITEM_NUGGET,
        .isShiny = TRUE,
        .nickname = COMPOUND_STRING("Mr. Pig")
        },
        {
        .lvl = REMATCH_4_LEVEL_1,
        .species = SPECIES_LINOONE,
        .ability = ABILITY_QUICK_FEET,
        .gender = TRAINER_MON_MALE,
        .heldItem = ITEM_NUGGET,
        .isShiny = TRUE,
        .nickname = COMPOUND_STRING("Mr. Zig")
        }
    },
},

[TRAINER_WINSTON_5] =
{
    .trainerName = _("Winston"),
    RICH_BOY_INFO,
    .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
    .partySize = 4,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = REMATCH_5_LEVEL_2,
        .species = SPECIES_FARIGIRAF,
        .ability = ABILITY_SAP_SIPPER,
        .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
        .moves = {MOVE_TWIN_BEAM, MOVE_ENERGY_BALL, MOVE_SHADOW_BALL, MOVE_NASTY_PLOT},
        .gender = TRAINER_MON_MALE,
        .heldItem = ITEM_BIG_NUGGET,
        .isShiny = TRUE,
        .nickname = COMPOUND_STRING("Mr. Gig")
        },
        {
        .lvl = REMATCH_5_LEVEL_1,
        .species = SPECIES_FLYGON,
        .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
        .moves = {MOVE_DIG, MOVE_DRAGON_CLAW, MOVE_CRUNCH, MOVE_DRAGON_DANCE},
        .gender = TRAINER_MON_MALE,
        .heldItem = ITEM_NUGGET,
        .isShiny = TRUE,
        .nickname = COMPOUND_STRING("Mr. Dig")
        },
        {
        .lvl = REMATCH_5_LEVEL_2,
        .species = SPECIES_GRUMPIG,
        .ability = ABILITY_THICK_FAT,
        .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
        .moves = {MOVE_PSYCHIC, MOVE_POWER_GEM, MOVE_DAZZLING_GLEAM, MOVE_FLASH_CANNON},
        .gender = TRAINER_MON_MALE,
        .heldItem = ITEM_BIG_NUGGET,
        .isShiny = TRUE,
        .nickname = COMPOUND_STRING("Mr. Pig")
        },
        {
        .lvl = REMATCH_5_LEVEL_1,
        .species = SPECIES_LINOONE,
        .ability = ABILITY_QUICK_FEET,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .moves = {MOVE_BODY_SLAM, MOVE_PLAY_ROUGH, MOVE_SEED_BOMB, MOVE_HONE_CLAWS},
        .gender = TRAINER_MON_MALE,
        .heldItem = ITEM_BIG_NUGGET,
        .isShiny = TRUE,
        .nickname = COMPOUND_STRING("Mr. Zig")
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
        .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
        },
        {
        .lvl = REMATCH_2_LEVEL_2,
        .species = SPECIES_NINJASK,
        .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
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
        .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
        .gender = TRAINER_MON_MALE,
        },
        {
        .lvl = REMATCH_3_LEVEL_3,
        .species = SPECIES_SHEDINJA,
        .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
        },
        {
        .lvl = REMATCH_3_LEVEL_3,
        .species = SPECIES_NINJASK,
        .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
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
        .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
        .gender = TRAINER_MON_FEMALE,
        },
        {
        .lvl = REMATCH_4_LEVEL_4,
        .species = SPECIES_DUSTOX,
        .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
        .gender = TRAINER_MON_MALE,
        },
        {
        .lvl = REMATCH_4_LEVEL_4,
        .species = SPECIES_SHEDINJA,
        .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
        },
        {
        .lvl = REMATCH_4_LEVEL_4,
        .species = SPECIES_NINJASK,
        .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
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
        .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
        .gender = TRAINER_MON_FEMALE,
        },
        {
        .lvl = REMATCH_5_LEVEL_5,
        .species = SPECIES_BEAUTIFLY,
        .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
        .gender = TRAINER_MON_FEMALE,
        },
        {
        .lvl = REMATCH_5_LEVEL_5,
        .species = SPECIES_DUSTOX,
        .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
        .gender = TRAINER_MON_MALE,
        },
        {
        .lvl = REMATCH_5_LEVEL_4,
        .species = SPECIES_SHEDINJA,
        .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
        },
        {
        .lvl = REMATCH_5_LEVEL_4,
        .species = SPECIES_NINJASK,
        .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
        .gender = TRAINER_MON_MALE,
        }
    },
},

#define CINDY_INFO                                                 \
    .trainerName = _("Cindy"),                                     \
    LADY_INFO,                                                     \
    .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE}, \
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE

#define CINDY_ZIGZAGOON            \
    .ability = ABILITY_QUICK_FEET, \
    .gender = TRAINER_MON_FEMALE 

[TRAINER_CINDY_1] =
{
    CINDY_INFO,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 8,
        .species = SPECIES_ZIGZAGOON,
        .heldItem = ITEM_NUGGET,
        CINDY_ZIGZAGOON,
        }
    },
},

[TRAINER_CINDY_2] =
{
    CINDY_INFO,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = REMATCH_2_LEVEL_1,
        .species = SPECIES_LINOONE,
        .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
        .heldItem = ITEM_NUGGET,
        CINDY_ZIGZAGOON,
        }
    },
},

[TRAINER_CINDY_3] =
{
    CINDY_INFO,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = REMATCH_3_LEVEL_1,
        .species = SPECIES_LINOONE,
        .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
        .heldItem = ITEM_NUGGET,
        CINDY_ZIGZAGOON,
        }
    },
},

[TRAINER_CINDY_4] =
{
    CINDY_INFO,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = REMATCH_4_LEVEL_1,
        .species = SPECIES_LINOONE,
        .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
        .heldItem = ITEM_NUGGET,
        CINDY_ZIGZAGOON,
        }
    },
},

[TRAINER_CINDY_5] =
{
    CINDY_INFO,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = REMATCH_5_LEVEL_1,
        .species = SPECIES_LINOONE,
        .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
        .moves = {MOVE_HEADBUTT, MOVE_PLAY_ROUGH, MOVE_PIN_MISSILE, MOVE_BESTOW},
        .heldItem = ITEM_BIG_NUGGET,
        CINDY_ZIGZAGOON,
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
        .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
        .gender = TRAINER_MON_FEMALE,
        },
        {
        .lvl = REMATCH_2_LEVEL_3,
        .species = SPECIES_LOMBRE,
        .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
        HALEY_LOTAD,
        },
        {
        .lvl = REMATCH_2_LEVEL_3,
        .species = SPECIES_SHROOMISH,
        .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
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
        .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
        .gender = TRAINER_MON_FEMALE,
        },
        {
        .lvl = REMATCH_3_LEVEL_3,
        .species = SPECIES_LOMBRE,
        .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
        HALEY_LOTAD,
        },
        {
        .lvl = REMATCH_3_LEVEL_3,
        .species = SPECIES_BRELOOM,
        .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
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
        .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
        .gender = TRAINER_MON_FEMALE,
        },
        {
        .lvl = REMATCH_4_LEVEL_3,
        .species = SPECIES_LOMBRE,
        .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
        HALEY_LOTAD,
        },
        {
        .lvl = REMATCH_4_LEVEL_3,
        .species = SPECIES_BRELOOM,
        .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
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
        .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
        .gender = TRAINER_MON_FEMALE,
        },
        {
        .lvl = REMATCH_5_LEVEL_3,
        .species = SPECIES_LUDICOLO,
        .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
        HALEY_LOTAD,
        },
        {
        .lvl = REMATCH_5_LEVEL_3,
        .species = SPECIES_BRELOOM,
        .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
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
        .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
        },
        {
        .lvl = 8,
        .species = SPECIES_NINCADA,
        .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
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
        .lvl = 8,
        .species = SPECIES_ABRA,
        .heldItem = ITEM_NUGGET,
        .isShiny = TRUE,
        },
        {
        .lvl = 8,
        .species = SPECIES_POOCHYENA,
        .heldItem = ITEM_NUGGET,
        .isShiny = TRUE,
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
        .lvl = 8,
        .species = SPECIES_LOTAD,
        .heldItem = ITEM_NUGGET,
        },
        {
        .lvl = 8,
        .species = SPECIES_ZIGZAGOON,
        .heldItem = ITEM_NUGGET,
        }
    },
},

#define JERRY_INFO             \
    .trainerName = _("Jerry"), \
    SCHOOL_KID_M_INFO,         \
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
        .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
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
        .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
        .gender = TRAINER_MON_MALE,
        },
        {
        .lvl = REMATCH_2_LEVEL_2,
        .species = SPECIES_KIRLIA,
        .ability = ABILITY_SYNCHRONIZE,
        .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
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
        .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
        JERRY_SHUPPET,
        },
        {
        .lvl = REMATCH_3_LEVEL_3,
        .species = SPECIES_MEDITITE,
        .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
        .gender = TRAINER_MON_MALE,
        },
        {
        .lvl = REMATCH_3_LEVEL_3,
        .species = SPECIES_GALLADE,
        .ability = ABILITY_STEADFAST,
        .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
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
        .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
        JERRY_SHUPPET,
        },
        {
        .lvl = REMATCH_4_LEVEL_3,
        .species = SPECIES_MEDITITE,
        .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
        .gender = TRAINER_MON_MALE,
        },
        {
        .lvl = REMATCH_4_LEVEL_3,
        .species = SPECIES_GALLADE,
        .ability = ABILITY_STEADFAST,
        .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
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
        .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
        JERRY_SHUPPET,
        },
        {
        .lvl = REMATCH_5_LEVEL_3,
        .species = SPECIES_MEDICHAM,
        .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
        .gender = TRAINER_MON_MALE,
        },
        {
        .lvl = REMATCH_5_LEVEL_3,
        .species = SPECIES_GALLADE,
        .ability = ABILITY_STEADFAST,
        .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
        }
    },
},

#define KAREN_INFO             \
    .trainerName = _("Karen"), \
    SCHOOL_KID_F_INFO,         \
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
        .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
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
        .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
        KAREN_WHISMUR,
        },
        {
        .lvl = REMATCH_2_LEVEL_2,
        .species = SPECIES_SHROOMISH,
        .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
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
        .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
        KAREN_SKITTY,
        },
        {
        .lvl = REMATCH_3_LEVEL_3,
        .species = SPECIES_LOUDRED,
        .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
        KAREN_WHISMUR,
        },
        {
        .lvl = REMATCH_3_LEVEL_3,
        .species = SPECIES_BRELOOM,
        .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
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
        .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
        KAREN_SKITTY,
        },
        {
        .lvl = REMATCH_4_LEVEL_3,
        .species = SPECIES_LOUDRED,
        .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
        KAREN_WHISMUR,
        },
        {
        .lvl = REMATCH_4_LEVEL_3,
        .species = SPECIES_BRELOOM,
        .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
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
        .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
        KAREN_SKITTY,
        },
        {
        .lvl = REMATCH_5_LEVEL_3,
        .species = SPECIES_EXPLOUD,
        .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
        KAREN_WHISMUR,
        },
        {
        .lvl = REMATCH_5_LEVEL_3,
        .species = SPECIES_BRELOOM,
        .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
        KAREN_SHROOMISH,
        }
    },
},

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
        .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
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
        .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
        },
        {
        .lvl = 9,
        .species = SPECIES_ARON,
        .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
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
        .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
        },
        {
        .lvl = 9,
        .species = SPECIES_RHYHORN,
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
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

[TRAINER_GABRIELLE_1] =
{
    .trainerName = _("Gabrielle"),
    .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
    .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 6,
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
        .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
        },
        {
        .lvl = 33,
        .species = SPECIES_SHIFTRY,
        .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
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

[TRAINER_GRUNT_MUSEUM_1] =
{
    AQUA_GRUNT_M_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 19,
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
        .lvl = 18,
        .species = SPECIES_TENTACOOL,
        },
        {
        .lvl = 18,
        .species = SPECIES_CORPHISH,
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
        .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
        },
        {
        .lvl = 35,
        .species = SPECIES_MACHOKE,
        .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
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
        .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
        },
        {
        .lvl = 52,
        .species = SPECIES_CRAWDAUNT,
        .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
        },
        {
        .lvl = 54,
        .species = SPECIES_HUNTAIL,
        .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
        }
    },
},

[TRAINER_ZANDER] =
{
    .trainerName = _("Zander"),
    .trainerClass = TRAINER_CLASS_BLACK_BELT,
    .trainerPic = TRAINER_PIC_BLACK_BELT,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 36,
        .species = SPECIES_HARIYAMA,
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
        .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
        },
        {
        .lvl = 41,
        .species = SPECIES_GOLDEEN,
        .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
        },
        {
        .lvl = 43,
        .species = SPECIES_GOREBYSS,
        .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
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
        .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
        },
        {
        .lvl = 42,
        .species = SPECIES_SEAKING,
        .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
        },
        {
        .lvl = 43,
        .species = SPECIES_GOREBYSS,
        .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
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
        .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
        },
        {
        .lvl = 43,
        .species = SPECIES_TENTACRUEL,
        .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
        },
        {
        .lvl = 44,
        .species = SPECIES_WAILORD,
        .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
        },
        {
        .lvl = 45,
        .species = SPECIES_SHARPEDO,
        .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
        }
    },
},

[TRAINER_LEAH] =
{
    .trainerName = _("Leah"),
    .trainerClass = TRAINER_CLASS_HEX_MANIAC,
    .trainerPic = TRAINER_PIC_HEX_MANIAC,
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

[TRAINER_DAISY] =
{
    .trainerName = _("Daisy"),
    .trainerClass = TRAINER_CLASS_AROMA_LADY,
    .trainerPic = TRAINER_PIC_AROMA_LADY,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 18,
        .species = SPECIES_SHROOMISH,
        },
        {
        .lvl = 18,
        .species = SPECIES_ROSELIA,
        }
    },
},

[TRAINER_ROSE_1] =
{
    .trainerName = _("Rose"),
    .trainerClass = TRAINER_CLASS_AROMA_LADY,
    .trainerPic = TRAINER_PIC_AROMA_LADY,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
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
    .trainerClass = TRAINER_CLASS_AROMA_LADY,
    .trainerPic = TRAINER_PIC_AROMA_LADY,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
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

[TRAINER_ROSE_2] =
{
    .trainerName = _("Rose"),
    .trainerClass = TRAINER_CLASS_AROMA_LADY,
    .trainerPic = TRAINER_PIC_AROMA_LADY,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 33,
        .species = SPECIES_SHROOMISH,
        .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
        },
        {
        .lvl = 33,
        .species = SPECIES_GLOOM,
        .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
        },
        {
        .lvl = 33,
        .species = SPECIES_ROSELIA,
        .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
        }
    },
},

[TRAINER_ROSE_3] =
{
    .trainerName = _("Rose"),
    .trainerClass = TRAINER_CLASS_AROMA_LADY,
    .trainerPic = TRAINER_PIC_AROMA_LADY,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = REMATCH_3_LEVEL_3,
        .species = SPECIES_BRELOOM,
        .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
        },
        {
        .lvl = REMATCH_3_LEVEL_3,
        .species = SPECIES_BELLOSSOM,
        .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
        },
        {
        .lvl = REMATCH_3_LEVEL_3,
        .species = SPECIES_ROSELIA,
        .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
        }
    },
},

[TRAINER_ROSE_4] =
{
    .trainerName = _("Rose"),
    .trainerClass = TRAINER_CLASS_AROMA_LADY,
    .trainerPic = TRAINER_PIC_AROMA_LADY,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 36,
        .species = SPECIES_BRELOOM,
        .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
        },
        {
        .lvl = 36,
        .species = SPECIES_BELLOSSOM,
        .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
        },
        {
        .lvl = 36,
        .species = SPECIES_ROSERADE,
        .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
        }
    },
},

[TRAINER_ROSE_5] =
{
    .trainerName = _("Rose"),
    .trainerClass = TRAINER_CLASS_AROMA_LADY,
    .trainerPic = TRAINER_PIC_AROMA_LADY,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 4,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 40,
        .species = SPECIES_TROPIUS,
        .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
        },
        {
        .lvl = 40,
        .species = SPECIES_BRELOOM,
        .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
        },
        {
        .lvl = 40,
        .species = SPECIES_BELLOSSOM,
        .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
        },
        {
        .lvl = 40,
        .species = SPECIES_ROSERADE,
        .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
        }
    },
},

[TRAINER_DUSTY_1] =
{
    .trainerName = _("Dusty"),
    .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
    .trainerPic = TRAINER_PIC_RUIN_MANIAC,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 26,
        .species = SPECIES_SANDSLASH,
        .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
        .moves = {MOVE_BULLDOZE, MOVE_CRUSH_CLAW, MOVE_SAND_ATTACK, MOVE_RAPID_SPIN}
        },
        {
        .lvl = 26,
        .species = SPECIES_BALTOY,
        .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
        .moves = {MOVE_PSYBEAM, MOVE_ANCIENT_POWER, MOVE_RAPID_SPIN, MOVE_COSMIC_POWER}
        }
    },
},

[TRAINER_CHIP] =
{
    .trainerName = _("Chip"),
    .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
    .trainerPic = TRAINER_PIC_RUIN_MANIAC,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 31,
        .species = SPECIES_BALTOY,
        .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
        .moves = {MOVE_PSYBEAM, MOVE_SELF_DESTRUCT, MOVE_SANDSTORM, MOVE_ANCIENT_POWER}
        },
        {
        .lvl = 31,
        .species = SPECIES_SANDSHREW,
        .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
        .moves = {MOVE_DIG, MOVE_SLASH, MOVE_SAND_ATTACK, MOVE_POISON_STING}
        },
        {
        .lvl = 31,
        .species = SPECIES_SANDSLASH,
        .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
        .moves = {MOVE_DIG, MOVE_SLASH, MOVE_SAND_ATTACK, MOVE_POISON_STING}
        }
    },
},

[TRAINER_FOSTER] =
{
    .trainerName = _("Foster"),
    .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
    .trainerPic = TRAINER_PIC_RUIN_MANIAC,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 29,
        .species = SPECIES_NOSEPASS,
        .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
        .moves = {MOVE_POWER_GEM, MOVE_SPARK, MOVE_THUNDER_WAVE, MOVE_HARDEN}
        },
        {
        .lvl = 29,
        .species = SPECIES_SANDSLASH,
        .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
        .moves = {MOVE_BULLDOZE, MOVE_CRUSH_CLAW, MOVE_SAND_ATTACK, MOVE_FURY_SWIPES}
        }
    },
},

[TRAINER_DUSTY_2] =
{
    .trainerName = _("Dusty"),
    .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
    .trainerPic = TRAINER_PIC_RUIN_MANIAC,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 34,
        .species = SPECIES_SANDSLASH,
        .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
        .moves = {MOVE_BULLDOZE, MOVE_CRUSH_CLAW, MOVE_SAND_TOMB, MOVE_RAPID_SPIN}
        },
        {
        .lvl = 34,
        .species = SPECIES_BALTOY,
        .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
        .moves = {MOVE_EARTH_POWER, MOVE_PSYBEAM, MOVE_ANCIENT_POWER, MOVE_COSMIC_POWER}
        }
    },
},

[TRAINER_DUSTY_3] =
{
    .trainerName = _("Dusty"),
    .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
    .trainerPic = TRAINER_PIC_RUIN_MANIAC,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = REMATCH_3_LEVEL_2,
        .species = SPECIES_SANDSLASH,
        .iv = TRAINER_PARTY_IVS(8, 8, 8, 8, 8, 8),
        .moves = {MOVE_BULLDOZE, MOVE_CRUSH_CLAW, MOVE_SAND_TOMB, MOVE_RAPID_SPIN}
        },
        {
        .lvl = REMATCH_3_LEVEL_2,
        .species = SPECIES_CLAYDOL,
        .iv = TRAINER_PARTY_IVS(8, 8, 8, 8, 8, 8),
        .moves = {MOVE_EARTH_POWER, MOVE_PSYBEAM, MOVE_ANCIENT_POWER, MOVE_COSMIC_POWER}
        }
    },
},

[TRAINER_DUSTY_4] =
{
    .trainerName = _("Dusty"),
    .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
    .trainerPic = TRAINER_PIC_RUIN_MANIAC,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 42,
        .species = SPECIES_SANDSLASH,
        .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
        .moves = {MOVE_BULLDOZE, MOVE_CRUSH_CLAW, MOVE_SAND_TOMB, MOVE_RAPID_SPIN}
        },
        {
        .lvl = 42,
        .species = SPECIES_CLAYDOL,
        .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
        .moves = {MOVE_EARTH_POWER, MOVE_PSYBEAM, MOVE_ANCIENT_POWER, MOVE_COSMIC_POWER}
        }
    },
},

[TRAINER_DUSTY_5] =
{
    .trainerName = _("Dusty"),
    .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
    .trainerPic = TRAINER_PIC_RUIN_MANIAC,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 46,
        .species = SPECIES_RELICANTH,
        .iv = TRAINER_PARTY_IVS(10, 10, 10, 10, 10, 10),
        .moves = {MOVE_AQUA_TAIL, MOVE_ROCK_TOMB, MOVE_TAKE_DOWN, MOVE_YAWN}
        },
        {
        .lvl = 46,
        .species = SPECIES_SANDSLASH,
        .iv = TRAINER_PARTY_IVS(10, 10, 10, 10, 10, 10),
        .moves = {MOVE_BULLDOZE, MOVE_CRUSH_CLAW, MOVE_SAND_TOMB, MOVE_RAPID_SPIN}
        },
        {
        .lvl = 46,
        .species = SPECIES_CLAYDOL,
        .iv = TRAINER_PARTY_IVS(10, 10, 10, 10, 10, 10),
        .moves = {MOVE_EARTH_POWER, MOVE_PSYBEAM, MOVE_ANCIENT_POWER, MOVE_COSMIC_POWER}
        }
    },
},

[TRAINER_LOLA_1] =
{
    .trainerName = _("Lola"),
    .trainerClass = TRAINER_CLASS_TUBER,
    .trainerPic = TRAINER_PIC_TUBER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 19,
        .species = SPECIES_AZUMARILL,
        .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
        }
    },
},

[TRAINER_AUSTINA] =
{
    .trainerName = _("Austina"),
    .trainerClass = TRAINER_CLASS_TUBER,
    .trainerPic = TRAINER_PIC_TUBER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
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
    .trainerClass = TRAINER_CLASS_TUBER,
    .trainerPic = TRAINER_PIC_TUBER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 30,
        .species = SPECIES_SPHEAL,
        }
    },
},

[TRAINER_LOLA_2] =
{
    .trainerName = _("Lola"),
    .trainerClass = TRAINER_CLASS_TUBER,
    .trainerPic = TRAINER_PIC_TUBER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 34,
        .species = SPECIES_WAILMER,
        .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
        },
        {
        .lvl = 34,
        .species = SPECIES_AZUMARILL,
        .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
        }
    },
},

[TRAINER_LOLA_3] =
{
    .trainerName = _("Lola"),
    .trainerClass = TRAINER_CLASS_TUBER,
    .trainerPic = TRAINER_PIC_TUBER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = REMATCH_3_LEVEL_2,
        .species = SPECIES_WAILMER,
        .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
        },
        {
        .lvl = REMATCH_3_LEVEL_2,
        .species = SPECIES_AZUMARILL,
        .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
        }
    },
},

[TRAINER_LOLA_4] =
{
    .trainerName = _("Lola"),
    .trainerClass = TRAINER_CLASS_TUBER,
    .trainerPic = TRAINER_PIC_TUBER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 36,
        .species = SPECIES_WAILMER,
        .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
        },
        {
        .lvl = 36,
        .species = SPECIES_AZUMARILL,
        .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
        }
    },
},

[TRAINER_LOLA_5] =
{
    .trainerName = _("Lola"),
    .trainerClass = TRAINER_CLASS_TUBER,
    .trainerPic = TRAINER_PIC_TUBER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 40,
        .species = SPECIES_WAILORD,
        .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
        },
        {
        .lvl = 40,
        .species = SPECIES_AZUMARILL,
        .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
        }
    },
},

[TRAINER_RICKY_1] =
{
    .trainerName = _("Ricky"),
    .trainerClass = TRAINER_CLASS_TUBER,
    .trainerPic = TRAINER_PIC_TUBER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 19,
        .species = SPECIES_ZIGZAGOON,
        .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
        .moves = {MOVE_SURF, MOVE_HEADBUTT, MOVE_SAND_ATTACK, MOVE_ODOR_SLEUTH}
        }
    },
},

[TRAINER_SIMON] =
{
    .trainerName = _("Simon"),
    .trainerClass = TRAINER_CLASS_TUBER,
    .trainerPic = TRAINER_PIC_TUBER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 17,
        .species = SPECIES_AZURILL,
        },
        {
        .lvl = 17,
        .species = SPECIES_AZURILL,
        }
    },
},

[TRAINER_CHARLIE] =
{
    .trainerName = _("Charlie"),
    .trainerClass = TRAINER_CLASS_TUBER,
    .trainerPic = TRAINER_PIC_TUBER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 30,
        .species = SPECIES_WAILMER,
        }
    },
},

[TRAINER_RICKY_2] =
{
    .trainerName = _("Ricky"),
    .trainerClass = TRAINER_CLASS_TUBER,
    .trainerPic = TRAINER_PIC_TUBER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 34,
        .species = SPECIES_LOMBRE,
        .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
        .moves = {MOVE_SURF, MOVE_MEGA_DRAIN, MOVE_TEETER_DANCE, MOVE_FAKE_OUT}
        },
        {
        .lvl = 34,
        .species = SPECIES_LINOONE,
        .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
        .moves = {MOVE_SURF, MOVE_SLASH, MOVE_PIN_MISSILE, MOVE_SAND_ATTACK}
        }
    },
},

[TRAINER_RICKY_3] =
{
    .trainerName = _("Ricky"),
    .trainerClass = TRAINER_CLASS_TUBER,
    .trainerPic = TRAINER_PIC_TUBER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = REMATCH_3_LEVEL_2,
        .species = SPECIES_LUDICOLO,
        .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
        .moves = {MOVE_SURF, MOVE_GIGA_DRAIN, MOVE_NATURE_POWER, MOVE_FAKE_OUT}
        },
        {
        .lvl = REMATCH_3_LEVEL_2,
        .species = SPECIES_LINOONE,
        .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
        .moves = {MOVE_SURF, MOVE_SLASH, MOVE_PIN_MISSILE, MOVE_SAND_ATTACK}
        }
    },
},

[TRAINER_RICKY_4] =
{
    .trainerName = _("Ricky"),
    .trainerClass = TRAINER_CLASS_TUBER,
    .trainerPic = TRAINER_PIC_TUBER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 36,
        .species = SPECIES_LUDICOLO,
        .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
        .moves = {MOVE_SURF, MOVE_GIGA_DRAIN, MOVE_NATURE_POWER, MOVE_FAKE_OUT}
        },
        {
        .lvl = 36,
        .species = SPECIES_LINOONE,
        .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
        .moves = {MOVE_SURF, MOVE_SLASH, MOVE_PIN_MISSILE, MOVE_SAND_ATTACK}
        }
    },
},

[TRAINER_RICKY_5] =
{
    .trainerName = _("Ricky"),
    .trainerClass = TRAINER_CLASS_TUBER,
    .trainerPic = TRAINER_PIC_TUBER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 40,
        .species = SPECIES_LUDICOLO,
        .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
        .moves = {MOVE_SURF, MOVE_GIGA_DRAIN, MOVE_NATURE_POWER, MOVE_FAKE_OUT}
        },
        {
        .lvl = 40,
        .species = SPECIES_LINOONE,
        .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
        .moves = {MOVE_SURF, MOVE_SLASH, MOVE_PIN_MISSILE, MOVE_SAND_ATTACK}
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
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
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
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
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
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
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
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
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
        .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
        .moves = {MOVE_AERIAL_ACE, MOVE_QUICK_ATTACK, MOVE_FOCUS_ENERGY, MOVE_ENDEAVOR}
        },
        {
        .lvl = 32,
        .species = SPECIES_TRAPINCH,
        .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
        .moves = {MOVE_BULLDOZE, MOVE_CRUNCH, MOVE_ROCK_SLIDE, MOVE_SAND_TOMB}
        },
        {
        .lvl = 32,
        .species = SPECIES_WAILMER,
        .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
        .moves = {MOVE_ROLLOUT, MOVE_WHIRLPOOL, MOVE_DIVE, MOVE_WATER_PULSE}
        },
        {
        .lvl = 32,
        .species = SPECIES_MAGNETON,
        .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
        .moves = {MOVE_THUNDERBOLT, MOVE_SUPERSONIC, MOVE_THUNDER_WAVE, MOVE_MIRROR_SHOT}
        },
        {
        .lvl = 32,
        .species = SPECIES_SHIFTRY,
        .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
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
        .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
        },
        {
        .lvl = 58,
        .species = SPECIES_MEDICHAM,
        .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
        },
        {
        .lvl = 58,
        .species = SPECIES_SHARPEDO,
        .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
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
        .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
        },
        {
        .lvl = 59,
        .species = SPECIES_STARMIE,
        .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
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
        .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
        },
        {
        .lvl = 22,
        .species = SPECIES_WAILMER,
        .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
        },
        {
        .lvl = 22,
        .species = SPECIES_MAKUHITA,
        .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
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
        .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
        },
        {
        .lvl = 46,
        .species = SPECIES_PELIPPER,
        .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
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
        .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
        },
        {
        .lvl = 45,
        .species = SPECIES_MUK,
        .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
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
        .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
        },
        {
        .lvl = 45,
        .species = SPECIES_MAWILE,
        .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
        },
        {
        .lvl = 45,
        .species = SPECIES_ALAKAZAM,
        .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
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
        .ev = TRAINER_PARTY_EVS(1, 63, 0, 63, 0, 0),
        .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
        },
        {
        .lvl = 44,
        .species = SPECIES_DODRIO,
        .ev = TRAINER_PARTY_EVS(1, 63, 0, 63, 0, 0),
        .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
        },
        {
        .lvl = 44,
        .species = SPECIES_ALAKAZAM,
        .ev = TRAINER_PARTY_EVS(1, 0, 0, 63, 63, 0),
        .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
        },
        {
        .lvl = 44,
        .species = SPECIES_ELECTRODE,
        .ev = TRAINER_PARTY_EVS(1, 0, 0, 63, 63, 0),
        .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
        },
        {
        .lvl = 44,
        .species = SPECIES_SHIFTRY,
        .ev = TRAINER_PARTY_EVS(1, 63, 0, 63, 0, 0),
        .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
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
        .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
        },
        {
        .lvl = 45,
        .species = SPECIES_GOLEM,
        .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
        },
        {
        .lvl = 45,
        .species = SPECIES_WAILORD,
        .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
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
        .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
        },
        {
        .lvl = 33,
        .species = SPECIES_WAILMER,
        .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
        },
        {
        .lvl = 33,
        .species = SPECIES_HARIYAMA,
        .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
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
        .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
        },
        {
        .lvl = REMATCH_3_LEVEL_3,
        .species = SPECIES_WAILMER,
        .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
        },
        {
        .lvl = REMATCH_3_LEVEL_3,
        .species = SPECIES_HARIYAMA,
        .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
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
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        },
        {
        .lvl = 38,
        .species = SPECIES_WAILMER,
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        },
        {
        .lvl = 38,
        .species = SPECIES_HARIYAMA,
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
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
        .iv = TRAINER_PARTY_IVS(17, 17, 17, 17, 17, 17),
        },
        {
        .lvl = 42,
        .species = SPECIES_WAILORD,
        .iv = TRAINER_PARTY_IVS(17, 17, 17, 17, 17, 17),
        },
        {
        .lvl = 42,
        .species = SPECIES_HARIYAMA,
        .iv = TRAINER_PARTY_IVS(17, 17, 17, 17, 17, 17),
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
        .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
        },
        {
        .lvl = 41,
        .species = SPECIES_LUDICOLO,
        .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
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
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
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
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
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
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
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
        .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
        .moves = {MOVE_FAIRY_WIND, MOVE_METAL_CLAW, MOVE_BATON_PASS, MOVE_IRON_DEFENSE}
        },
        {
        .lvl = 34,
        .species = SPECIES_ROSELIA,
        .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
        .moves = {MOVE_GIGA_DRAIN, MOVE_TOXIC_SPIKES, MOVE_GRASS_WHISTLE, MOVE_LEECH_SEED}
        },
        {
        .lvl = 34,
        .species = SPECIES_PELIPPER,
        .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
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
        .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
        },
        {
        .lvl = 59,
        .species = SPECIES_MANECTRIC,
        .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
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
        .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
        },
        {
        .lvl = 22,
        .species = SPECIES_NUMEL,
        .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
        },
        {
        .lvl = 22,
        .species = SPECIES_ROSELIA,
        .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
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
        .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
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
        .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
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
        .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
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
        .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
        },
        {
        .lvl = 45,
        .species = SPECIES_MEDICHAM,
        .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
        },
        {
        .lvl = 45,
        .species = SPECIES_LUDICOLO,
        .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
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
        .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
        },
        {
        .lvl = 46,
        .species = SPECIES_SABLEYE,
        .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
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
        .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
        },
        {
        .lvl = 45,
        .species = SPECIES_NINETALES,
        .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
        },
        {
        .lvl = 45,
        .species = SPECIES_TROPIUS,
        .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
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
        .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
        },
        {
        .lvl = 33,
        .species = SPECIES_NUMEL,
        .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
        },
        {
        .lvl = 33,
        .species = SPECIES_ROSELIA,
        .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
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
        .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
        },
        {
        .lvl = REMATCH_3_LEVEL_3,
        .species = SPECIES_CAMERUPT,
        .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
        },
        {
        .lvl = REMATCH_3_LEVEL_3,
        .species = SPECIES_ROSELIA,
        .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
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
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        },
        {
        .lvl = 38,
        .species = SPECIES_CAMERUPT,
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        },
        {
        .lvl = 38,
        .species = SPECIES_ROSELIA,
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
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
        .iv = TRAINER_PARTY_IVS(17, 17, 17, 17, 17, 17),
        },
        {
        .lvl = 42,
        .species = SPECIES_CAMERUPT,
        .iv = TRAINER_PARTY_IVS(17, 17, 17, 17, 17, 17),
        },
        {
        .lvl = 42,
        .species = SPECIES_ROSERADE,
        .iv = TRAINER_PARTY_IVS(17, 17, 17, 17, 17, 17),
        }
    },
},

[TRAINER_PATRICIA] =
{
    .trainerName = _("Patricia"),
    .trainerClass = TRAINER_CLASS_HEX_MANIAC,
    .trainerPic = TRAINER_PIC_HEX_MANIAC,
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
    .trainerClass = TRAINER_CLASS_HEX_MANIAC,
    .trainerPic = TRAINER_PIC_HEX_MANIAC,
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
    .trainerClass = TRAINER_CLASS_HEX_MANIAC,
    .trainerPic = TRAINER_PIC_HEX_MANIAC,
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

[TRAINER_VALERIE_1] =
{
    .trainerName = _("Valerie"),
    .trainerClass = TRAINER_CLASS_HEX_MANIAC,
    .trainerPic = TRAINER_PIC_HEX_MANIAC,
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

[TRAINER_TASHA] =
{
    .trainerName = _("Tasha"),
    .trainerClass = TRAINER_CLASS_HEX_MANIAC,
    .trainerPic = TRAINER_PIC_HEX_MANIAC,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 36,
        .species = SPECIES_SHUPPET,
        .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
        }
    },
},

[TRAINER_VALERIE_2] =
{
    .trainerName = _("Valerie"),
    .trainerClass = TRAINER_CLASS_HEX_MANIAC,
    .trainerPic = TRAINER_PIC_HEX_MANIAC,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 38,
        .species = SPECIES_DUSKULL,
        .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
        },
        {
        .lvl = 38,
        .species = SPECIES_SHUPPET,
        .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
        },
        {
        .lvl = 38,
        .species = SPECIES_SABLEYE,
        .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
        }
    },
},

[TRAINER_VALERIE_3] =
{
    .trainerName = _("Valerie"),
    .trainerClass = TRAINER_CLASS_HEX_MANIAC,
    .trainerPic = TRAINER_PIC_HEX_MANIAC,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = REMATCH_3_LEVEL_3,
        .species = SPECIES_DUSCLOPS,
        .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
        },
        {
        .lvl = REMATCH_3_LEVEL_3,
        .species = SPECIES_BANETTE,
        .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
        },
        {
        .lvl = REMATCH_3_LEVEL_3,
        .species = SPECIES_SABLEYE,
        .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
        }
    },
},

[TRAINER_VALERIE_4] =
{
    .trainerName = _("Valerie"),
    .trainerClass = TRAINER_CLASS_HEX_MANIAC,
    .trainerPic = TRAINER_PIC_HEX_MANIAC,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 42,
        .species = SPECIES_DUSCLOPS,
        .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
        },
        {
        .lvl = 42,
        .species = SPECIES_BANETTE,
        .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
        },
        {
        .lvl = 42,
        .species = SPECIES_SABLEYE,
        .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
        }
    },
},

[TRAINER_VALERIE_5] =
{
    .trainerName = _("Valerie"),
    .trainerClass = TRAINER_CLASS_HEX_MANIAC,
    .trainerPic = TRAINER_PIC_HEX_MANIAC,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 44,
        .species = SPECIES_DUSKNOIR,
        .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
        },
        {
        .lvl = 44,
        .species = SPECIES_BANETTE,
        .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
        },
        {
        .lvl = 44,
        .species = SPECIES_SABLEYE,
        .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
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
        .lvl = 43,
        .species = SPECIES_CORSOLA,
        .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
        .heldItem = ITEM_NUGGET,
        .moves = {MOVE_WATER_PULSE, MOVE_ATTRACT, MOVE_POWER_GEM, MOVE_LIFE_DEW}
        },
        {
        .lvl = 43,
        .species = SPECIES_LUVDISC,
        .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
        .heldItem = ITEM_NUGGET,
        .moves = {MOVE_WATER_PULSE, MOVE_ATTRACT, MOVE_CAPTIVATE, MOVE_AQUA_RING}
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
        .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
        },
        {
        .lvl = 55,
        .species = SPECIES_TORKOAL,
        .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
        },
        {
        .lvl = 57,
        .species = SPECIES_NINETALES,
        .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
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
        .lvl = 44,
        .species = SPECIES_MARSHTOMP,
        .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
        .heldItem = ITEM_BIG_NUGGET
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
        .lvl = 60,
        .species = SPECIES_ROSERADE,
        .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
        .heldItem = ITEM_BIG_NUGGET
        }
    },
},

[TRAINER_MELISSA] =
{
    .trainerName = _("Melissa"),
    .trainerClass = TRAINER_CLASS_BEAUTY,
    .trainerPic = TRAINER_PIC_BEAUTY,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
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
    .trainerClass = TRAINER_CLASS_BEAUTY,
    .trainerPic = TRAINER_PIC_BEAUTY,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
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
    .trainerClass = TRAINER_CLASS_BEAUTY,
    .trainerPic = TRAINER_PIC_BEAUTY,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 26,
        .species = SPECIES_NUMEL,
        }
    },
},

[TRAINER_JESSICA_1] =
{
    .trainerName = _("Jessica"),
    .trainerClass = TRAINER_CLASS_BEAUTY,
    .trainerPic = TRAINER_PIC_BEAUTY,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
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

[TRAINER_CONNIE] =
{
    .trainerName = _("Connie"),
    .trainerClass = TRAINER_CLASS_BEAUTY,
    .trainerPic = TRAINER_PIC_BEAUTY,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 44,
        .species = SPECIES_SEAKING,
        .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
        }
    },
},

[TRAINER_BRIDGET] =
{
    .trainerName = _("Bridget"),
    .trainerClass = TRAINER_CLASS_BEAUTY,
    .trainerPic = TRAINER_PIC_BEAUTY,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 44,
        .species = SPECIES_AZUMARILL,
        .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
        }
    },
},

[TRAINER_OLIVIA] =
{
    .trainerName = _("Olivia"),
    .trainerClass = TRAINER_CLASS_BEAUTY,
    .trainerPic = TRAINER_PIC_BEAUTY,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 42,
        .species = SPECIES_CLAMPERL,
        .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
        .moves = {MOVE_WATER_PULSE, MOVE_WHIRLPOOL, MOVE_RAIN_DANCE, MOVE_IRON_DEFENSE}
        },
        {
        .lvl = 42,
        .species = SPECIES_CRAWDAUNT,
        .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
        .moves = {MOVE_WATER_PULSE, MOVE_NIGHT_SLASH, MOVE_PROTECT, MOVE_TAUNT}
        },
        {
        .lvl = 42,
        .species = SPECIES_LUDICOLO,
        .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
        .moves = {MOVE_WATER_PULSE, MOVE_GIGA_DRAIN, MOVE_NATURE_POWER, MOVE_TEETER_DANCE}
        }
    },
},

[TRAINER_TIFFANY] =
{
    .trainerName = _("Tiffany"),
    .trainerClass = TRAINER_CLASS_BEAUTY,
    .trainerPic = TRAINER_PIC_BEAUTY,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 43,
        .species = SPECIES_TENTACRUEL,
        .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
        },
        {
        .lvl = 43,
        .species = SPECIES_SHARPEDO,
        .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
        }
    },
},

[TRAINER_JESSICA_2] =
{
    .trainerName = _("Jessica"),
    .trainerClass = TRAINER_CLASS_BEAUTY,
    .trainerPic = TRAINER_PIC_BEAUTY,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 36,
        .species = SPECIES_KECLEON,
        .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
        .moves = {MOVE_SLASH, MOVE_SHADOW_CLAW, MOVE_DETECT, MOVE_PSYBEAM}
        },
        {
        .lvl = 36,
        .species = SPECIES_SEVIPER,
        .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
        .moves = {MOVE_POISON_JAB, MOVE_NIGHT_SLASH, MOVE_GLARE, MOVE_SWORDS_DANCE}
        }
    },
},

[TRAINER_JESSICA_3] =
{
    .trainerName = _("Jessica"),
    .trainerClass = TRAINER_CLASS_BEAUTY,
    .trainerPic = TRAINER_PIC_BEAUTY,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = REMATCH_3_LEVEL_2,
        .species = SPECIES_KECLEON,
        .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
        .moves = {MOVE_SLASH, MOVE_SHADOW_CLAW, MOVE_DETECT, MOVE_SCREECH}
        },
        {
        .lvl = REMATCH_3_LEVEL_2,
        .species = SPECIES_SEVIPER,
        .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
        .moves = {MOVE_POISON_JAB, MOVE_CRUNCH, MOVE_GLARE, MOVE_SWORDS_DANCE}
        }
    },
},

[TRAINER_JESSICA_4] =
{
    .trainerName = _("Jessica"),
    .trainerClass = TRAINER_CLASS_BEAUTY,
    .trainerPic = TRAINER_PIC_BEAUTY,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 42,
        .species = SPECIES_KECLEON,
        .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
        .moves = {MOVE_SLASH, MOVE_SHADOW_CLAW, MOVE_DETECT, MOVE_SCREECH}
        },
        {
        .lvl = 42,
        .species = SPECIES_SEVIPER,
        .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
        .moves = {MOVE_POISON_JAB, MOVE_CRUNCH, MOVE_GLARE, MOVE_SWORDS_DANCE}
        }
    },
},

[TRAINER_JESSICA_5] =
{
    .trainerName = _("Jessica"),
    .trainerClass = TRAINER_CLASS_BEAUTY,
    .trainerPic = TRAINER_PIC_BEAUTY,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 45,
        .species = SPECIES_KECLEON,
        .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
        .moves = {MOVE_SLASH, MOVE_SHADOW_CLAW, MOVE_DETECT, MOVE_SCREECH}
        },
        {
        .lvl = 45,
        .species = SPECIES_SEVIPER,
        .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
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
        .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
        }
    },
},

[TRAINER_GARRET] =
{
    .trainerName = _("Garret"),
    RICH_BOY_INFO,
    .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 60,
        .species = SPECIES_AZUMARILL,
        .heldItem = ITEM_BIG_NUGGET,
        .isShiny = TRUE,
        }
    },
},

[TRAINER_STEVE_1] =
{
    .trainerName = _("Steve"),
    .trainerClass = TRAINER_CLASS_POKEMANIAC,
    .trainerPic = TRAINER_PIC_POKEMANIAC,
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

[TRAINER_THALIA_1] =
{
    .trainerName = _("Thalia"),
    .trainerClass = TRAINER_CLASS_BEAUTY,
    .trainerPic = TRAINER_PIC_BEAUTY,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
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

[TRAINER_MARK] =
{
    .trainerName = _("Mark"),
    .trainerClass = TRAINER_CLASS_POKEMANIAC,
    .trainerPic = TRAINER_PIC_POKEMANIAC,
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

[TRAINER_STEVE_2] =
{
    .trainerName = _("Steve"),
    .trainerClass = TRAINER_CLASS_POKEMANIAC,
    .trainerPic = TRAINER_PIC_POKEMANIAC,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 35,
        .species = SPECIES_LAIRON,
        .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
        }
    },
},

[TRAINER_STEVE_3] =
{
    .trainerName = _("Steve"),
    .trainerClass = TRAINER_CLASS_POKEMANIAC,
    .trainerPic = TRAINER_PIC_POKEMANIAC,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = REMATCH_3_LEVEL_2,
        .species = SPECIES_RHYHORN,
        .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
        },
        {
        .lvl = REMATCH_3_LEVEL_2,
        .species = SPECIES_LAIRON,
        .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
        }
    },
},

[TRAINER_STEVE_4] =
{
    .trainerName = _("Steve"),
    .trainerClass = TRAINER_CLASS_POKEMANIAC,
    .trainerPic = TRAINER_PIC_POKEMANIAC,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 42,
        .species = SPECIES_RHYDON,
        .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
        },
        {
        .lvl = 42,
        .species = SPECIES_AGGRON,
        .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
        }
    },
},

[TRAINER_STEVE_5] =
{
    .trainerName = _("Steve"),
    .trainerClass = TRAINER_CLASS_POKEMANIAC,
    .trainerPic = TRAINER_PIC_POKEMANIAC,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 46,
        .species = SPECIES_RHYPERIOR,
        .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
        },
        {
        .lvl = 46,
        .species = SPECIES_AGGRON,
        .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
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
        .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
        },
        {
        .lvl = 29,
        .species = SPECIES_HORSEA,
        .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
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
        .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
        },
        {
        .lvl = 28,
        .species = SPECIES_WINGULL,
        .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
        },
        {
        .lvl = 28,
        .species = SPECIES_TENTACOOL,
        .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
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
        .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
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
        .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
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
        .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
        },
        {
        .lvl = 39,
        .species = SPECIES_SHARPEDO,
        .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
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
        .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
        },
        {
        .lvl = 42,
        .species = SPECIES_SHARPEDO,
        .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
        }
    },
},

[TRAINER_TAKAO] =
{
    .trainerName = _("Takao"),
    .trainerClass = TRAINER_CLASS_BLACK_BELT,
    .trainerPic = TRAINER_PIC_BLACK_BELT,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 15,
        .species = SPECIES_MACHOP,
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        }
    },
},

[TRAINER_HITOSHI] =
{
    .trainerName = _("Hitoshi"),
    .trainerClass = TRAINER_CLASS_BLACK_BELT,
    .trainerPic = TRAINER_PIC_BLACK_BELT,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 41,
        .species = SPECIES_HARIYAMA,
        .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
        },
        {
        .lvl = 41,
        .species = SPECIES_MACHOKE,
        .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
        }
    },
},

[TRAINER_KIYO] =
{
    .trainerName = _("Kiyo"),
    .trainerClass = TRAINER_CLASS_BLACK_BELT,
    .trainerPic = TRAINER_PIC_BLACK_BELT,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 42,
        .species = SPECIES_HARIYAMA,
        .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
        }
    },
},

[TRAINER_KOICHI] =
{
    .trainerName = _("Koichi"),
    .trainerClass = TRAINER_CLASS_BLACK_BELT,
    .trainerPic = TRAINER_PIC_BLACK_BELT,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 29,
        .species = SPECIES_MACHOKE,
        .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
        },
        {
        .lvl = 29,
        .species = SPECIES_MACHOKE,
        .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
        }
    },
},

[TRAINER_NOB_1] =
{
    .trainerName = _("Nob"),
    .trainerClass = TRAINER_CLASS_BLACK_BELT,
    .trainerPic = TRAINER_PIC_BLACK_BELT,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 25,
        .species = SPECIES_MACHOP,
        .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
        }
    },
},

[TRAINER_NOB_2] =
{
    .trainerName = _("Nob"),
    .trainerClass = TRAINER_CLASS_BLACK_BELT,
    .trainerPic = TRAINER_PIC_BLACK_BELT,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 35,
        .species = SPECIES_MACHOKE,
        .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
        }
    },
},

[TRAINER_NOB_3] =
{
    .trainerName = _("Nob"),
    .trainerClass = TRAINER_CLASS_BLACK_BELT,
    .trainerPic = TRAINER_PIC_BLACK_BELT,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = REMATCH_3_LEVEL_1,
        .species = SPECIES_BRELOOM,
        .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
        },
        {
        .lvl = REMATCH_3_LEVEL_1,
        .species = SPECIES_MACHOKE,
        .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
        }
    },
},

[TRAINER_NOB_4] =
{
    .trainerName = _("Nob"),
    .trainerClass = TRAINER_CLASS_BLACK_BELT,
    .trainerPic = TRAINER_PIC_BLACK_BELT,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 45,
        .species = SPECIES_HERACROSS,
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        },
        {
        .lvl = 45,
        .species = SPECIES_BRELOOM,
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        },
        {
        .lvl = 45,
        .species = SPECIES_MACHAMP,
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        }
    },
},

[TRAINER_NOB_5] =
{
    .trainerName = _("Nob"),
    .trainerClass = TRAINER_CLASS_BLACK_BELT,
    .trainerPic = TRAINER_PIC_BLACK_BELT,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 4,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 50,
        .species = SPECIES_BLAZIKEN,
        .iv = TRAINER_PARTY_IVS(17, 17, 17, 17, 17, 17),
        },
        {
        .lvl = 50,
        .species = SPECIES_HERACROSS,
        .iv = TRAINER_PARTY_IVS(17, 17, 17, 17, 17, 17),
        },
        {
        .lvl = 50,
        .species = SPECIES_BRELOOM,
        .iv = TRAINER_PARTY_IVS(17, 17, 17, 17, 17, 17),
        },
        {
        .lvl = 50,
        .species = SPECIES_MACHAMP,
        .iv = TRAINER_PARTY_IVS(17, 17, 17, 17, 17, 17),
        .heldItem = ITEM_BLACK_BELT
        }
    },
},

[TRAINER_YUJI] =
{
    .trainerName = _("Yuji"),
    .trainerClass = TRAINER_CLASS_BLACK_BELT,
    .trainerPic = TRAINER_PIC_BLACK_BELT,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 29,
        .species = SPECIES_MAKUHITA,
        .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
        },
        {
        .lvl = 29,
        .species = SPECIES_MACHOKE,
        .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
        }
    },
},

[TRAINER_DAISUKE] =
{
    .trainerName = _("Daisuke"),
    .trainerClass = TRAINER_CLASS_BLACK_BELT,
    .trainerPic = TRAINER_PIC_BLACK_BELT,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 24,
        .species = SPECIES_MACHOP,
        .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
        }
    },
},

[TRAINER_ATSUSHI] =
{
    .trainerName = _("Atsushi"),
    .trainerClass = TRAINER_CLASS_BLACK_BELT,
    .trainerPic = TRAINER_PIC_BLACK_BELT,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 36,
        .species = SPECIES_HARIYAMA,
        .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
        }
    },
},

[TRAINER_KIRK] =
{
    .trainerName = _("Kirk"),
    .trainerClass = TRAINER_CLASS_GUITARIST,
    .trainerPic = TRAINER_PIC_GUITARIST,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 20,
        .species = SPECIES_ELECTRIKE,
        .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
        .moves = {MOVE_SHOCK_WAVE, MOVE_THUNDER_WAVE, MOVE_QUICK_ATTACK, MOVE_LEER}
        },
        {
        .lvl = 20,
        .species = SPECIES_VOLTORB,
        .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
        .moves = {MOVE_SHOCK_WAVE, MOVE_CHARGE, MOVE_SCREECH, MOVE_ROLLOUT}
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

[TRAINER_SHAWN] =
{
    .trainerName = _("Shawn"),
    .trainerClass = TRAINER_CLASS_GUITARIST,
    .trainerPic = TRAINER_PIC_GUITARIST,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 20,
        .species = SPECIES_MAGNEMITE,
        .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
        },
        {
        .lvl = 20,
        .species = SPECIES_ELECTRIKE,
        .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
        }
    },
},

[TRAINER_FERNANDO_1] =
{
    .trainerName = _("Fernando"),
    .trainerClass = TRAINER_CLASS_GUITARIST,
    .trainerPic = TRAINER_PIC_GUITARIST,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
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

[TRAINER_DALTON_1] =
{
    .trainerName = _("Dalton"),
    .trainerClass = TRAINER_CLASS_GUITARIST,
    .trainerPic = TRAINER_PIC_GUITARIST,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
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
    .trainerClass = TRAINER_CLASS_GUITARIST,
    .trainerPic = TRAINER_PIC_GUITARIST,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 33,
        .species = SPECIES_MAGNEMITE,
        .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
        },
        {
        .lvl = 33,
        .species = SPECIES_LOUDRED,
        .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
        },
        {
        .lvl = 33,
        .species = SPECIES_VOLTORB,
        .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
        }
    },
},

[TRAINER_DALTON_3] =
{
    .trainerName = _("Dalton"),
    .trainerClass = TRAINER_CLASS_GUITARIST,
    .trainerPic = TRAINER_PIC_GUITARIST,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = REMATCH_3_LEVEL_3,
        .species = SPECIES_MAGNETON,
        .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
        },
        {
        .lvl = REMATCH_3_LEVEL_3,
        .species = SPECIES_LOUDRED,
        .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
        },
        {
        .lvl = REMATCH_3_LEVEL_3,
        .species = SPECIES_ELECTRODE,
        .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
        }
    },
},

[TRAINER_DALTON_4] =
{
    .trainerName = _("Dalton"),
    .trainerClass = TRAINER_CLASS_GUITARIST,
    .trainerPic = TRAINER_PIC_GUITARIST,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 36,
        .species = SPECIES_MAGNETON,
        .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
        },
        {
        .lvl = 36,
        .species = SPECIES_LOUDRED,
        .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
        },
        {
        .lvl = 36,
        .species = SPECIES_ELECTRODE,
        .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
        }
    },
},

[TRAINER_DALTON_5] =
{
    .trainerName = _("Dalton"),
    .trainerClass = TRAINER_CLASS_GUITARIST,
    .trainerPic = TRAINER_PIC_GUITARIST,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 40,
        .species = SPECIES_MAGNEZONE,
        .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
        },
        {
        .lvl = 40,
        .species = SPECIES_EXPLOUD,
        .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
        },
        {
        .lvl = 40,
        .species = SPECIES_ELECTRODE,
        .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
        }
    },
},

[TRAINER_COLE] =
{
    .trainerName = _("Cole"),
    .trainerClass = TRAINER_CLASS_KINDLER,
    .trainerPic = TRAINER_PIC_KINDLER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 26,
        .species = SPECIES_TORKOAL,
        .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
        }
    },
},

[TRAINER_JEFF] =
{
    .trainerName = _("Jeff"),
    .trainerClass = TRAINER_CLASS_KINDLER,
    .trainerPic = TRAINER_PIC_KINDLER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 25,
        .species = SPECIES_NUMEL,
        .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
        },
        {
        .lvl = 25,
        .species = SPECIES_SLUGMA,
        .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
        }
    },
},

[TRAINER_AXLE] =
{
    .trainerName = _("Axle"),
    .trainerClass = TRAINER_CLASS_KINDLER,
    .trainerPic = TRAINER_PIC_KINDLER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 26,
        .species = SPECIES_NUMEL,
        .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
        }
    },
},

[TRAINER_JACE] =
{
    .trainerName = _("Jace"),
    .trainerClass = TRAINER_CLASS_KINDLER,
    .trainerPic = TRAINER_PIC_KINDLER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 26,
        .species = SPECIES_VULPIX,
        .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
        }
    },
},

[TRAINER_KEEGAN] =
{
    .trainerName = _("Keegan"),
    .trainerClass = TRAINER_CLASS_KINDLER,
    .trainerPic = TRAINER_PIC_KINDLER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 26,
        .species = SPECIES_HOUNDOUR,
        .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
        }
    },
},

[TRAINER_BERNIE_1] =
{
    .trainerName = _("Bernie"),
    .trainerClass = TRAINER_CLASS_KINDLER,
    .trainerPic = TRAINER_PIC_KINDLER,
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
    .trainerClass = TRAINER_CLASS_KINDLER,
    .trainerPic = TRAINER_PIC_KINDLER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 33,
        .species = SPECIES_NUMEL,
        .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
        },
        {
        .lvl = 33,
        .species = SPECIES_SLUGMA,
        .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
        },
        {
        .lvl = 33,
        .species = SPECIES_PELIPPER,
        .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
        }
    },
},

[TRAINER_BERNIE_3] =
{
    .trainerName = _("Bernie"),
    .trainerClass = TRAINER_CLASS_KINDLER,
    .trainerPic = TRAINER_PIC_KINDLER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = REMATCH_3_LEVEL_3,
        .species = SPECIES_CAMERUPT,
        .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
        },
        {
        .lvl = REMATCH_3_LEVEL_3,
        .species = SPECIES_SLUGMA,
        .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
        },
        {
        .lvl = REMATCH_3_LEVEL_3,
        .species = SPECIES_PELIPPER,
        .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
        }
    },
},

[TRAINER_BERNIE_4] =
{
    .trainerName = _("Bernie"),
    .trainerClass = TRAINER_CLASS_KINDLER,
    .trainerPic = TRAINER_PIC_KINDLER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 38,
        .species = SPECIES_CAMERUPT,
        .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
        },
        {
        .lvl = 38,
        .species = SPECIES_MAGCARGO,
        .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
        },
        {
        .lvl = 38,
        .species = SPECIES_PELIPPER,
        .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
        }
    },
},

[TRAINER_BERNIE_5] =
{
    .trainerName = _("Bernie"),
    .trainerClass = TRAINER_CLASS_KINDLER,
    .trainerPic = TRAINER_PIC_KINDLER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 42,
        .species = SPECIES_CAMERUPT,
        .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
        },
        {
        .lvl = 42,
        .species = SPECIES_MAGCARGO,
        .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
        },
        {
        .lvl = 42,
        .species = SPECIES_PELIPPER,
        .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
        }
    },
},

[TRAINER_DREW] =
{
    .trainerName = _("Drew"),
    .trainerClass = TRAINER_CLASS_CAMPER,
    .trainerPic = TRAINER_PIC_CAMPER,
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
    .trainerClass = TRAINER_CLASS_CAMPER,
    .trainerPic = TRAINER_PIC_CAMPER,
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
    .trainerClass = TRAINER_CLASS_CAMPER,
    .trainerPic = TRAINER_PIC_CAMPER,
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
    .trainerClass = TRAINER_CLASS_CAMPER,
    .trainerPic = TRAINER_PIC_CAMPER,
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
    .trainerClass = TRAINER_CLASS_CAMPER,
    .trainerPic = TRAINER_PIC_CAMPER,
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

[TRAINER_ETHAN_1] =
{
    .trainerName = _("Ethan"),
    .trainerClass = TRAINER_CLASS_CAMPER,
    .trainerPic = TRAINER_PIC_CAMPER,
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

[TRAINER_AUTUMN] =
{
    .trainerName = _("Autumn"),
    .trainerClass = TRAINER_CLASS_PICNICKER,
    .trainerPic = TRAINER_PIC_PICNICKER,
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
    .trainerClass = TRAINER_CLASS_CAMPER,
    .trainerPic = TRAINER_PIC_CAMPER,
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

[TRAINER_ETHAN_2] =
{
    .trainerName = _("Ethan"),
    .trainerClass = TRAINER_CLASS_CAMPER,
    .trainerPic = TRAINER_PIC_CAMPER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 33,
        .species = SPECIES_ZIGZAGOON,
        .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
        },
        {
        .lvl = 33,
        .species = SPECIES_SWALOT,
        .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
        },
        {
        .lvl = 33,
        .species = SPECIES_SWELLOW,
        .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
        }
    },
},

[TRAINER_ETHAN_3] =
{
    .trainerName = _("Ethan"),
    .trainerClass = TRAINER_CLASS_CAMPER,
    .trainerPic = TRAINER_PIC_CAMPER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 4,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = REMATCH_3_LEVEL_4,
        .species = SPECIES_GOLBAT,
        .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
        },
        {
        .lvl = REMATCH_3_LEVEL_4,
        .species = SPECIES_LINOONE,
        .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
        },
        {
        .lvl = REMATCH_3_LEVEL_4,
        .species = SPECIES_SWALOT,
        .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
        },
        {
        .lvl = REMATCH_3_LEVEL_4,
        .species = SPECIES_SWELLOW,
        .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
        }
    },
},

[TRAINER_ETHAN_4] =
{
    .trainerName = _("Ethan"),
    .trainerClass = TRAINER_CLASS_CAMPER,
    .trainerPic = TRAINER_PIC_CAMPER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 5,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 40,
        .species = SPECIES_SANDSLASH,
        .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
        },
        {
        .lvl = 40,
        .species = SPECIES_GOLBAT,
        .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
        },
        {
        .lvl = 40,
        .species = SPECIES_LINOONE,
        .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
        },
        {
        .lvl = 40,
        .species = SPECIES_SWALOT,
        .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
        },
        {
        .lvl = 40,
        .species = SPECIES_SWELLOW,
        .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
        }
    },
},

[TRAINER_ETHAN_5] =
{
    .trainerName = _("Ethan"),
    .trainerClass = TRAINER_CLASS_CAMPER,
    .trainerPic = TRAINER_PIC_CAMPER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 5,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 45,
        .species = SPECIES_SANDSLASH,
        .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
        },
        {
        .lvl = 45,
        .species = SPECIES_CROBAT,
        .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
        },
        {
        .lvl = 45,
        .species = SPECIES_LINOONE,
        .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
        },
        {
        .lvl = 45,
        .species = SPECIES_SWALOT,
        .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
        },
        {
        .lvl = 45,
        .species = SPECIES_SWELLOW,
        .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
        }
    },
},

[TRAINER_BRENT] =
{
    .trainerName = _("Brent"),
    .trainerClass = TRAINER_CLASS_BUG_MANIAC,
    .trainerPic = TRAINER_PIC_BUG_MANIAC,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 31,
        .species = SPECIES_MASQUERAIN,
        .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
        }
    },
},

[TRAINER_DONALD] =
{
    .trainerName = _("Donald"),
    .trainerClass = TRAINER_CLASS_BUG_MANIAC,
    .trainerPic = TRAINER_PIC_BUG_MANIAC,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 29,
        .species = SPECIES_WURMPLE,
        .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
        },
        {
        .lvl = 29,
        .species = SPECIES_SILCOON,
        .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
        },
        {
        .lvl = 29,
        .species = SPECIES_BEAUTIFLY,
        .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
        }
    },
},

[TRAINER_TAYLOR] =
{
    .trainerName = _("Taylor"),
    .trainerClass = TRAINER_CLASS_BUG_MANIAC,
    .trainerPic = TRAINER_PIC_BUG_MANIAC,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 29,
        .species = SPECIES_WURMPLE,
        .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
        },
        {
        .lvl = 29,
        .species = SPECIES_CASCOON,
        .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
        },
        {
        .lvl = 29,
        .species = SPECIES_DUSTOX,
        .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
        }
    },
},

[TRAINER_JEFFREY_1] =
{
    .trainerName = _("Jeffrey"),
    .trainerClass = TRAINER_CLASS_BUG_MANIAC,
    .trainerPic = TRAINER_PIC_BUG_MANIAC,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
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

[TRAINER_DEREK] =
{
    .trainerName = _("Derek"),
    .trainerClass = TRAINER_CLASS_BUG_MANIAC,
    .trainerPic = TRAINER_PIC_BUG_MANIAC,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 18,
        .species = SPECIES_DUSTOX,
        .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
        },
        {
        .lvl = 18,
        .species = SPECIES_BEAUTIFLY,
        .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
        }
    },
},

[TRAINER_JEFFREY_2] =
{
    .trainerName = _("Jeffrey"),
    .trainerClass = TRAINER_CLASS_BUG_MANIAC,
    .trainerPic = TRAINER_PIC_BUG_MANIAC,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 4,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 34,
        .species = SPECIES_WURMPLE,
        .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
        },
        {
        .lvl = 34,
        .species = SPECIES_HERACROSS,
        .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
        },
        {
        .lvl = 34,
        .species = SPECIES_PINSIR,
        .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
        },
        {
        .lvl = 34,
        .species = SPECIES_MASQUERAIN,
        .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
        }
    },
},

[TRAINER_JEFFREY_3] =
{
    .trainerName = _("Jeffrey"),
    .trainerClass = TRAINER_CLASS_BUG_MANIAC,
    .trainerPic = TRAINER_PIC_BUG_MANIAC,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 5,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = REMATCH_3_LEVEL_5,
        .species = SPECIES_WURMPLE,
        .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
        },
        {
        .lvl = REMATCH_3_LEVEL_5,
        .species = SPECIES_SILCOON,
        .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
        },
        {
        .lvl = REMATCH_3_LEVEL_5,
        .species = SPECIES_HERACROSS,
        .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
        },
        {
        .lvl = REMATCH_3_LEVEL_5,
        .species = SPECIES_PINSIR,
        .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
        },
        {
        .lvl = REMATCH_3_LEVEL_5,
        .species = SPECIES_MASQUERAIN,
        .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
        }
    },
},

[TRAINER_JEFFREY_4] =
{
    .trainerName = _("Jeffrey"),
    .trainerClass = TRAINER_CLASS_BUG_MANIAC,
    .trainerPic = TRAINER_PIC_BUG_MANIAC,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 5,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 40,
        .species = SPECIES_CASCOON,
        .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
        },
        {
        .lvl = 40,
        .species = SPECIES_SILCOON,
        .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
        },
        {
        .lvl = 40,
        .species = SPECIES_HERACROSS,
        .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
        },
        {
        .lvl = 40,
        .species = SPECIES_PINSIR,
        .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
        },
        {
        .lvl = 40,
        .species = SPECIES_MASQUERAIN,
        .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
        }
    },
},

[TRAINER_JEFFREY_5] =
{
    .trainerName = _("Jeffrey"),
    .trainerClass = TRAINER_CLASS_BUG_MANIAC,
    .trainerPic = TRAINER_PIC_BUG_MANIAC,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 5,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 43,
        .species = SPECIES_DUSTOX,
        .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
        },
        {
        .lvl = 43,
        .species = SPECIES_BEAUTIFLY,
        .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
        },
        {
        .lvl = 43,
        .species = SPECIES_HERACROSS,
        .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
        },
        {
        .lvl = 43,
        .species = SPECIES_PINSIR,
        .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
        },
        {
        .lvl = 43,
        .species = SPECIES_MASQUERAIN,
        .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
        .heldItem = ITEM_SILVER_POWDER
        }
    },
},

[TRAINER_EDWARD] =
{
    .trainerName = _("Edward"),
    .trainerClass = TRAINER_CLASS_PSYCHIC,
    .trainerPic = TRAINER_PIC_PSYCHIC_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
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

[TRAINER_PRESTON] =
{
    .trainerName = _("Preston"),
    .trainerClass = TRAINER_CLASS_PSYCHIC,
    .trainerPic = TRAINER_PIC_PSYCHIC_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 40,
        .species = SPECIES_GALLADE,
        .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
        }
    },
},

[TRAINER_VIRGIL] =
{
    .trainerName = _("Virgil"),
    .trainerClass = TRAINER_CLASS_PSYCHIC,
    .trainerPic = TRAINER_PIC_PSYCHIC_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 40,
        .species = SPECIES_METANG,
        .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
        }
    },
},

[TRAINER_BLAKE] =
{
    .trainerName = _("Blake"),
    .trainerClass = TRAINER_CLASS_PSYCHIC,
    .trainerPic = TRAINER_PIC_PSYCHIC_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 40,
        .species = SPECIES_CLAYDOL,
        .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
        }
    },
},

[TRAINER_WILLIAM] =
{
    .trainerName = _("William"),
    .trainerClass = TRAINER_CLASS_PSYCHIC,
    .trainerPic = TRAINER_PIC_PSYCHIC_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
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
    .trainerClass = TRAINER_CLASS_PSYCHIC,
    .trainerPic = TRAINER_PIC_PSYCHIC_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
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
    .trainerClass = TRAINER_CLASS_PSYCHIC,
    .trainerPic = TRAINER_PIC_PSYCHIC_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
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
    .trainerClass = TRAINER_CLASS_PSYCHIC,
    .trainerPic = TRAINER_PIC_PSYCHIC_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 39,
        .species = SPECIES_ALAKAZAM,
        .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
        },
        {
        .lvl = 39,
        .species = SPECIES_SOLROCK,
        .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
        }
    },
},

[TRAINER_CAMERON_3] =
{
    .trainerName = _("Cameron"),
    .trainerClass = TRAINER_CLASS_PSYCHIC,
    .trainerPic = TRAINER_PIC_PSYCHIC_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = REMATCH_3_LEVEL_2,
        .species = SPECIES_ALAKAZAM,
        .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
        },
        {
        .lvl = REMATCH_3_LEVEL_2,
        .species = SPECIES_SOLROCK,
        .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
        }
    },
},

[TRAINER_CAMERON_4] =
{
    .trainerName = _("Cameron"),
    .trainerClass = TRAINER_CLASS_PSYCHIC,
    .trainerPic = TRAINER_PIC_PSYCHIC_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 43,
        .species = SPECIES_ALAKAZAM,
        .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
        },
        {
        .lvl = 43,
        .species = SPECIES_SOLROCK,
        .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
        }
    },
},

[TRAINER_CAMERON_5] =
{
    .trainerName = _("Cameron"),
    .trainerClass = TRAINER_CLASS_PSYCHIC,
    .trainerPic = TRAINER_PIC_PSYCHIC_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 45,
        .species = SPECIES_ALAKAZAM,
        .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
        },
        {
        .lvl = 45,
        .species = SPECIES_SOLROCK,
        .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
        }
    },
},

[TRAINER_JACLYN] =
{
    .trainerName = _("Jaclyn"),
    .trainerClass = TRAINER_CLASS_PSYCHIC,
    .trainerPic = TRAINER_PIC_PSYCHIC_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
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
    .trainerClass = TRAINER_CLASS_PSYCHIC,
    .trainerPic = TRAINER_PIC_PSYCHIC_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 40,
        .species = SPECIES_GARDEVOIR,
        .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
        }
    },
},

[TRAINER_SAMANTHA] =
{
    .trainerName = _("Samantha"),
    .trainerClass = TRAINER_CLASS_PSYCHIC,
    .trainerPic = TRAINER_PIC_PSYCHIC_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 40,
        .species = SPECIES_XATU,
        .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
        }
    },
},

[TRAINER_MAURA] =
{
    .trainerName = _("Maura"),
    .trainerClass = TRAINER_CLASS_PSYCHIC,
    .trainerPic = TRAINER_PIC_PSYCHIC_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 40,
        .species = SPECIES_ALAKAZAM,
        .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
        }
    },
},

[TRAINER_KAYLA] =
{
    .trainerName = _("Kayla"),
    .trainerClass = TRAINER_CLASS_PSYCHIC,
    .trainerPic = TRAINER_PIC_PSYCHIC_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
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
    .trainerClass = TRAINER_CLASS_PSYCHIC,
    .trainerPic = TRAINER_PIC_PSYCHIC_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
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
    .trainerClass = TRAINER_CLASS_PSYCHIC,
    .trainerPic = TRAINER_PIC_PSYCHIC_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
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
    .trainerClass = TRAINER_CLASS_PSYCHIC,
    .trainerPic = TRAINER_PIC_PSYCHIC_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 39,
        .species = SPECIES_ALAKAZAM,
        .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
        },
        {
        .lvl = 39,
        .species = SPECIES_LUNATONE,
        .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
        }
    },
},

[TRAINER_JACKI_3] =
{
    .trainerName = _("Jacki"),
    .trainerClass = TRAINER_CLASS_PSYCHIC,
    .trainerPic = TRAINER_PIC_PSYCHIC_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = REMATCH_3_LEVEL_2,
        .species = SPECIES_ALAKAZAM,
        .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
        },
        {
        .lvl = REMATCH_3_LEVEL_2,
        .species = SPECIES_LUNATONE,
        .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
        }
    },
},

[TRAINER_JACKI_4] =
{
    .trainerName = _("Jacki"),
    .trainerClass = TRAINER_CLASS_PSYCHIC,
    .trainerPic = TRAINER_PIC_PSYCHIC_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 43,
        .species = SPECIES_ALAKAZAM,
        .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
        },
        {
        .lvl = 43,
        .species = SPECIES_LUNATONE,
        .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
        }
    },
},

[TRAINER_JACKI_5] =
{
    .trainerName = _("Jacki"),
    .trainerClass = TRAINER_CLASS_PSYCHIC,
    .trainerPic = TRAINER_PIC_PSYCHIC_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 45,
        .species = SPECIES_ALAKAZAM,
        .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
        },
        {
        .lvl = 45,
        .species = SPECIES_LUNATONE,
        .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
        }
    },
},

[TRAINER_WALTER_1] =
{
    .trainerName = _("Walter"),
    .trainerClass = TRAINER_CLASS_GENTLEMAN,
    .trainerPic = TRAINER_PIC_GENTLEMAN,
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

[TRAINER_MICAH] =
{
    .trainerName = _("Micah"),
    .trainerClass = TRAINER_CLASS_GENTLEMAN,
    .trainerPic = TRAINER_PIC_GENTLEMAN,
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
    .trainerClass = TRAINER_CLASS_GENTLEMAN,
    .trainerPic = TRAINER_PIC_GENTLEMAN,
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

[TRAINER_WALTER_2] =
{
    .trainerName = _("Walter"),
    .trainerClass = TRAINER_CLASS_GENTLEMAN,
    .trainerPic = TRAINER_PIC_GENTLEMAN,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_RICH,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 36,
        .species = SPECIES_MANECTRIC,
        .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
        }
    },
},

[TRAINER_WALTER_3] =
{
    .trainerName = _("Walter"),
    .trainerClass = TRAINER_CLASS_GENTLEMAN,
    .trainerPic = TRAINER_PIC_GENTLEMAN,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_RICH,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = REMATCH_3_LEVEL_2,
        .species = SPECIES_LINOONE,
        .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
        .moves = {MOVE_HEADBUTT, MOVE_PLAY_ROUGH, MOVE_PIN_MISSILE, MOVE_HONE_CLAWS}
        },
        {
        .lvl = REMATCH_3_LEVEL_2,
        .species = SPECIES_MANECTRIC,
        .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
        .moves = {MOVE_DISCHARGE, MOVE_BITE, MOVE_ODOR_SLEUTH, MOVE_ROAR}
        }
    },
},

[TRAINER_WALTER_4] =
{
    .trainerName = _("Walter"),
    .trainerClass = TRAINER_CLASS_GENTLEMAN,
    .trainerPic = TRAINER_PIC_GENTLEMAN,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_RICH,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 42,
        .species = SPECIES_LINOONE,
        .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
        .moves = {MOVE_HEADBUTT, MOVE_PLAY_ROUGH, MOVE_PIN_MISSILE, MOVE_BELLY_DRUM}
        },
        {
        .lvl = 42,
        .species = SPECIES_MANECTRIC,
        .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
        .moves = {MOVE_DISCHARGE, MOVE_BITE, MOVE_CHARGE, MOVE_ROAR}
        }
    },
},

[TRAINER_WALTER_5] =
{
    .trainerName = _("Walter"),
    .trainerClass = TRAINER_CLASS_GENTLEMAN,
    .trainerPic = TRAINER_PIC_GENTLEMAN,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_RICH,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 45,
        .species = SPECIES_LINOONE,
        .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
        .moves = {MOVE_HEADBUTT, MOVE_PLAY_ROUGH, MOVE_PIN_MISSILE, MOVE_BELLY_DRUM}
        },
        {
        .lvl = 45,
        .species = SPECIES_GOLDUCK,
        .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
        .moves = {MOVE_HYDRO_PUMP, MOVE_CONFUSION, MOVE_POWER_GEM, MOVE_AMNESIA}
        },
        {
        .lvl = 45,
        .species = SPECIES_MANECTRIC,
        .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
        .moves = {MOVE_DISCHARGE, MOVE_BITE, MOVE_CHARGE, MOVE_ROAR}
        }
    },
},

[TRAINER_TED] =
{
    .trainerName = _("Ted"),
    SCHOOL_KID_M_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 22,
        .species = SPECIES_KADABRA,
        .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
        }
    },
},

[TRAINER_PAUL] =
{
    .trainerName = _("Paul"),
    SCHOOL_KID_M_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 20,
        .species = SPECIES_NUMEL,
        .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
        },
        {
        .lvl = 20,
        .species = SPECIES_ODDISH,
        .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
        },
        {
        .lvl = 20,
        .species = SPECIES_WINGULL,
        .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
        }
    },
},

[TRAINER_GEORGIA] =
{
    .trainerName = _("Georgia"),
    SCHOOL_KID_F_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 21,
        .species = SPECIES_SHROOMISH,
        .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
        },
        {
        .lvl = 21,
        .species = SPECIES_BEAUTIFLY,
        .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
        }
    },
},

[TRAINER_KATE_AND_JOY] =
{
    .trainerName = _("Kate & Joy"),
    .trainerClass = TRAINER_CLASS_SR_AND_JR,
    .trainerPic = TRAINER_PIC_SR_AND_JR,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
    .doubleBattle = TRUE,
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

[TRAINER_ANNA_AND_MEG_1] =
{
    .trainerName = _("Anna & Meg"),
    .trainerClass = TRAINER_CLASS_SR_AND_JR,
    .trainerPic = TRAINER_PIC_SR_AND_JR,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
    .doubleBattle = TRUE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 17,
        .species = SPECIES_ZIGZAGOON,
        .moves = {MOVE_HEADBUTT, MOVE_GROWL, MOVE_HEADBUTT, MOVE_ODOR_SLEUTH}
        },
        {
        .lvl = 19,
        .species = SPECIES_MAKUHITA,
        .moves = {MOVE_ARM_THRUST, MOVE_FOCUS_ENERGY, MOVE_FAKE_OUT, MOVE_WHIRLWIND}
        }
    },
},

[TRAINER_ANNA_AND_MEG_2] =
{
    .trainerName = _("Anna & Meg"),
    .trainerClass = TRAINER_CLASS_SR_AND_JR,
    .trainerPic = TRAINER_PIC_SR_AND_JR,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
    .doubleBattle = TRUE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 33,
        .species = SPECIES_LINOONE,
        .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
        .moves = {MOVE_SLASH, MOVE_TAIL_WHIP, MOVE_HONE_CLAWS, MOVE_ODOR_SLEUTH}
        },
        {
        .lvl = 35,
        .species = SPECIES_HARIYAMA,
        .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
        .moves = {MOVE_VITAL_THROW, MOVE_BULK_UP, MOVE_SMELLING_SALTS, MOVE_DETECT}
        }
    },
},

[TRAINER_ANNA_AND_MEG_3] =
{
    .trainerName = _("Anna & Meg"),
    .trainerClass = TRAINER_CLASS_SR_AND_JR,
    .trainerPic = TRAINER_PIC_SR_AND_JR,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
    .doubleBattle = TRUE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = REMATCH_3_LEVEL_3,
        .species = SPECIES_LINOONE,
        .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
        .moves = {MOVE_SLASH, MOVE_TAIL_WHIP, MOVE_HONE_CLAWS, MOVE_ODOR_SLEUTH}
        },
        {
        .lvl = REMATCH_3_LEVEL_1,
        .species = SPECIES_HARIYAMA,
        .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
        .moves = {MOVE_WAKE_UP_SLAP, MOVE_BELLY_DRUM, MOVE_FAKE_OUT, MOVE_DETECT}
        }
    },
},

[TRAINER_ANNA_AND_MEG_4] =
{
    .trainerName = _("Anna & Meg"),
    .trainerClass = TRAINER_CLASS_SR_AND_JR,
    .trainerPic = TRAINER_PIC_SR_AND_JR,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
    .doubleBattle = TRUE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 36,
        .species = SPECIES_LINOONE,
        .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
        .moves = {MOVE_SLASH, MOVE_TAIL_WHIP, MOVE_HONE_CLAWS, MOVE_ODOR_SLEUTH}
        },
        {
        .lvl = 38,
        .species = SPECIES_HARIYAMA,
        .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
        .moves = {MOVE_WAKE_UP_SLAP, MOVE_BELLY_DRUM, MOVE_FAKE_OUT, MOVE_DETECT}
        }
    },
},

[TRAINER_ANNA_AND_MEG_5] =
{
    .trainerName = _("Anna & Meg"),
    .trainerClass = TRAINER_CLASS_SR_AND_JR,
    .trainerPic = TRAINER_PIC_SR_AND_JR,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
    .doubleBattle = TRUE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 38,
        .species = SPECIES_LINOONE,
        .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
        .moves = {MOVE_SLASH, MOVE_TAIL_WHIP, MOVE_HONE_CLAWS, MOVE_ODOR_SLEUTH}
        },
        {
        .lvl = 40,
        .species = SPECIES_HARIYAMA,
        .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
        .moves = {MOVE_WAKE_UP_SLAP, MOVE_BELLY_DRUM, MOVE_FAKE_OUT, MOVE_DETECT}
        }
    },
},

[TRAINER_VICTOR] =
{
    .trainerName = _("Victor"),
    .trainerClass = TRAINER_CLASS_WINSTRATE,
    .trainerPic = TRAINER_PIC_POKEFAN_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 19,
        .species = SPECIES_TAILLOW,
        .ev = TRAINER_PARTY_EVS(1, 63, 0, 63, 0, 0),
        .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
        .heldItem = ITEM_ORAN_BERRY
        },
        {
        .lvl = 19,
        .species = SPECIES_ZIGZAGOON,
        .ev = TRAINER_PARTY_EVS(1, 63, 0, 63, 0, 0),
        .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
        .heldItem = ITEM_ORAN_BERRY
        }
    },
},

[TRAINER_MIGUEL_1] =
{
    .trainerName = _("Miguel"),
    .trainerClass = TRAINER_CLASS_POKEFAN,
    .trainerPic = TRAINER_PIC_POKEFAN_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 19,
        .species = SPECIES_SKITTY,
        .heldItem = ITEM_ORAN_BERRY
        }
    },
},

[TRAINER_COLTON] =
{
    .trainerName = _("Colton"),
    .trainerClass = TRAINER_CLASS_POKEFAN,
    .trainerPic = TRAINER_PIC_POKEFAN_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
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

[TRAINER_MIGUEL_2] =
{
    .trainerName = _("Miguel"),
    .trainerClass = TRAINER_CLASS_POKEFAN,
    .trainerPic = TRAINER_PIC_POKEFAN_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 35,
        .species = SPECIES_SKITTY,
        .heldItem = ITEM_ORAN_BERRY
        }
    },
},

[TRAINER_MIGUEL_3] =
{
    .trainerName = _("Miguel"),
    .trainerClass = TRAINER_CLASS_POKEFAN,
    .trainerPic = TRAINER_PIC_POKEFAN_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = REMATCH_3_LEVEL_1,
        .species = SPECIES_SKITTY,
        .heldItem = ITEM_ORAN_BERRY
        }
    },
},

[TRAINER_MIGUEL_4] =
{
    .trainerName = _("Miguel"),
    .trainerClass = TRAINER_CLASS_POKEFAN,
    .trainerPic = TRAINER_PIC_POKEFAN_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 38,
        .species = SPECIES_DELCATTY,
        .heldItem = ITEM_ORAN_BERRY
        }
    },
},

[TRAINER_MIGUEL_5] =
{
    .trainerName = _("Miguel"),
    .trainerClass = TRAINER_CLASS_POKEFAN,
    .trainerPic = TRAINER_PIC_POKEFAN_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 42,
        .species = SPECIES_DELCATTY,
        .heldItem = ITEM_SITRUS_BERRY
        }
    },
},

[TRAINER_VICTORIA] =
{
    .trainerName = _("Victoria"),
    .trainerClass = TRAINER_CLASS_WINSTRATE,
    .trainerPic = TRAINER_PIC_POKEFAN_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_TWINS,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 20,
        .species = SPECIES_ROSELIA,
        .ev = TRAINER_PARTY_EVS(1, 0, 0, 63, 63, 0),
        .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
        .heldItem = ITEM_ORAN_BERRY
        }
    },
},

[TRAINER_VANESSA] =
{
    .trainerName = _("Vanessa"),
    .trainerClass = TRAINER_CLASS_POKEFAN,
    .trainerPic = TRAINER_PIC_POKEFAN_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_TWINS,
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
    .trainerClass = TRAINER_CLASS_POKEFAN,
    .trainerPic = TRAINER_PIC_POKEFAN_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_TWINS,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 42,
        .species = SPECIES_AZURILL,
        .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
        .heldItem = ITEM_ORAN_BERRY
        },
        {
        .lvl = 42,
        .species = SPECIES_MARILL,
        .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
        .heldItem = ITEM_ORAN_BERRY
        },
        {
        .lvl = 42,
        .species = SPECIES_AZUMARILL,
        .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
        .heldItem = ITEM_ORAN_BERRY
        }
    },
},

[TRAINER_ISABEL_1] =
{
    .trainerName = _("Isabel"),
    .trainerClass = TRAINER_CLASS_POKEFAN,
    .trainerPic = TRAINER_PIC_POKEFAN_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_TWINS,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 18,
        .species = SPECIES_PLUSLE,
        .heldItem = ITEM_ORAN_BERRY
        },
        {
        .lvl = 18,
        .species = SPECIES_MINUN,
        .heldItem = ITEM_ORAN_BERRY
        }
    },
},

[TRAINER_ISABEL_2] =
{
    .trainerName = _("Isabel"),
    .trainerClass = TRAINER_CLASS_POKEFAN,
    .trainerPic = TRAINER_PIC_POKEFAN_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_TWINS,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 34,
        .species = SPECIES_PLUSLE,
        .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
        .heldItem = ITEM_ORAN_BERRY
        },
        {
        .lvl = 34,
        .species = SPECIES_MINUN,
        .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
        .heldItem = ITEM_ORAN_BERRY
        }
    },
},

[TRAINER_ISABEL_3] =
{
    .trainerName = _("Isabel"),
    .trainerClass = TRAINER_CLASS_POKEFAN,
    .trainerPic = TRAINER_PIC_POKEFAN_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_TWINS,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = REMATCH_3_LEVEL_2,
        .species = SPECIES_PLUSLE,
        .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
        .heldItem = ITEM_ORAN_BERRY
        },
        {
        .lvl = REMATCH_3_LEVEL_2,
        .species = SPECIES_MINUN,
        .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
        .heldItem = ITEM_ORAN_BERRY
        }
    },
},

[TRAINER_ISABEL_4] =
{
    .trainerName = _("Isabel"),
    .trainerClass = TRAINER_CLASS_POKEFAN,
    .trainerPic = TRAINER_PIC_POKEFAN_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_TWINS,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 36,
        .species = SPECIES_PLUSLE,
        .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
        .heldItem = ITEM_ORAN_BERRY
        },
        {
        .lvl = 36,
        .species = SPECIES_MINUN,
        .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
        .heldItem = ITEM_ORAN_BERRY
        }
    },
},

[TRAINER_ISABEL_5] =
{
    .trainerName = _("Isabel"),
    .trainerClass = TRAINER_CLASS_POKEFAN,
    .trainerPic = TRAINER_PIC_POKEFAN_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_TWINS,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 40,
        .species = SPECIES_PLUSLE,
        .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
        .heldItem = ITEM_SITRUS_BERRY
        },
        {
        .lvl = 40,
        .species = SPECIES_MINUN,
        .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
        .heldItem = ITEM_SITRUS_BERRY
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
        .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
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
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
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
        .iv = TRAINER_PARTY_IVS(26, 26, 26, 26, 26, 26),
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
        .iv = TRAINER_PARTY_IVS(27, 27, 27, 27, 27, 27),
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
        .iv = TRAINER_PARTY_IVS(29, 29, 29, 29, 29, 29),
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
        .ev = TRAINER_PARTY_EVS(1, 63, 0, 63, 0, 0),
        .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
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
        .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
        },
        {
        .lvl = 25,
        .species = SPECIES_MEDITITE,
        .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
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
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
        },
        {
        .lvl = 34,
        .species = SPECIES_MEDITITE,
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
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
        .iv = TRAINER_PARTY_IVS(26, 26, 26, 26, 26, 26),
        },
        {
        .lvl = REMATCH_3_LEVEL_2,
        .species = SPECIES_MEDICHAM,
        .iv = TRAINER_PARTY_IVS(26, 26, 26, 26, 26, 26),
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
        .iv = TRAINER_PARTY_IVS(27, 27, 27, 27, 27, 27),
        },
        {
        .lvl = 41,
        .species = SPECIES_MEDICHAM,
        .iv = TRAINER_PARTY_IVS(27, 27, 27, 27, 27, 27),
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
        .iv = TRAINER_PARTY_IVS(29, 29, 29, 29, 29, 29),
        },
        {
        .lvl = 45,
        .species = SPECIES_MEDICHAM,
        .iv = TRAINER_PARTY_IVS(29, 29, 29, 29, 29, 29),
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
        .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
        .moves = {MOVE_SHOCK_WAVE, MOVE_NASTY_PLOT, MOVE_NUZZLE, MOVE_SWEET_KISS}
        },
        {
        .lvl = 20,
        .species = SPECIES_ELECTRIKE,
        .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
        .moves = {MOVE_SHOCK_WAVE, MOVE_QUICK_ATTACK, MOVE_THUNDER_WAVE, MOVE_HOWL}
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
        .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
        .moves = {MOVE_ATTRACT, MOVE_MEGA_KICK, MOVE_HAMMER_ARM, MOVE_THROAT_CHOP}
        },
        {
        .lvl = 46,
        .species = SPECIES_DUSCLOPS,
        .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
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
        .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
        .moves = {MOVE_SKILL_SWAP, MOVE_PSYCHIC, MOVE_THUNDERBOLT, MOVE_CALM_MIND}
        },
        {
        .lvl = 46,
        .species = SPECIES_SLAKING,
        .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
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

[TRAINER_EDDIE] =
{
    .trainerName = _("Eddie"),
    YOUNGSTER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 18,
        .species = SPECIES_POOCHYENA,
        },
        {
        .lvl = 18,
        .species = SPECIES_ZIGZAGOON,
        }
    },
},

[TRAINER_TIMMY] =
{
    .trainerName = _("Timmy"),
    YOUNGSTER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 18,
        .species = SPECIES_ARON,
        },
        {
        .lvl = 18,
        .species = SPECIES_ELECTRIKE,
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
        .lvl = 17,
        .species = SPECIES_MAGIKARP,
        },
        {
        .lvl = 17,
        .species = SPECIES_TENTACOOL,
        },
        {
        .lvl = 17,
        .species = SPECIES_MAGIKARP,
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

[TRAINER_ELLIOT_1] =
{
    .trainerName = _("Elliot"),
    FISHERMAN_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 12,
        .species = SPECIES_MAGIKARP,
        },
        {
        .lvl = 12,
        .species = SPECIES_TENTACOOL,
        },
        {
        .lvl = 14,
        .species = SPECIES_WAILMER,
        }
    },
},

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
        .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
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
        .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
        },
        {
        .lvl = 29,
        .species = SPECIES_TENTACRUEL,
        .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
        }
    },
},

[TRAINER_ELLIOT_2] =
{
    .trainerName = _("Elliot"),
    FISHERMAN_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 5,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 31,
        .species = SPECIES_BARBOACH,
        .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
        },
        {
        .lvl = 31,
        .species = SPECIES_CARVANHA,
        .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
        },
        {
        .lvl = 31,
        .species = SPECIES_GYARADOS,
        .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
        },
        {
        .lvl = 31,
        .species = SPECIES_TENTACRUEL,
        .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
        },
        {
        .lvl = 31,
        .species = SPECIES_WAILMER,
        .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
        }
    },
},

[TRAINER_ELLIOT_3] =
{
    .trainerName = _("Elliot"),
    FISHERMAN_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 5,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = REMATCH_3_LEVEL_5,
        .species = SPECIES_WHISCASH,
        .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
        },
        {
        .lvl = REMATCH_3_LEVEL_5,
        .species = SPECIES_SHARPEDO,
        .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
        },
        {
        .lvl = REMATCH_3_LEVEL_5,
        .species = SPECIES_GYARADOS,
        .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
        },
        {
        .lvl = REMATCH_3_LEVEL_5,
        .species = SPECIES_TENTACRUEL,
        .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
        },
        {
        .lvl = REMATCH_3_LEVEL_5,
        .species = SPECIES_WAILMER,
        .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
        }
    },
},

[TRAINER_ELLIOT_4] =
{
    .trainerName = _("Elliot"),
    FISHERMAN_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 5,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 36,
        .species = SPECIES_WHISCASH,
        .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
        },
        {
        .lvl = 36,
        .species = SPECIES_SHARPEDO,
        .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
        },
        {
        .lvl = 36,
        .species = SPECIES_GYARADOS,
        .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
        },
        {
        .lvl = 36,
        .species = SPECIES_TENTACRUEL,
        .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
        },
        {
        .lvl = 36,
        .species = SPECIES_WAILMER,
        .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
        }
    },
},

[TRAINER_ELLIOT_5] =
{
    .trainerName = _("Elliot"),
    FISHERMAN_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
    .partySize = 5,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 40,
        .species = SPECIES_WHISCASH,
        .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
        },
        {
        .lvl = 40,
        .species = SPECIES_SHARPEDO,
        .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
        },
        {
        .lvl = 40,
        .species = SPECIES_GYARADOS,
        .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
        },
        {
        .lvl = 40,
        .species = SPECIES_TENTACRUEL,
        .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
        },
        {
        .lvl = 40,
        .species = SPECIES_WAILORD,
        .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
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
    .trainerClass = TRAINER_CLASS_TRIATHLETE,
    .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 17,
        .species = SPECIES_VOLTORB,
        .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
        },
        {
        .lvl = 17,
        .species = SPECIES_VOLTORB,
        .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
        },
        {
        .lvl = 17,
        .species = SPECIES_MAGNEMITE,
        .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
        }
    },
},

[TRAINER_ANTHONY] =
{
    .trainerName = _("Anthony"),
    .trainerClass = TRAINER_CLASS_TRIATHLETE,
    .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
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
    .trainerClass = TRAINER_CLASS_TRIATHLETE,
    .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
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
    .trainerClass = TRAINER_CLASS_TRIATHLETE,
    .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 34,
        .species = SPECIES_MINUN,
        .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
        },
        {
        .lvl = 34,
        .species = SPECIES_MAGNETON,
        .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
        }
    },
},

[TRAINER_BENJAMIN_3] =
{
    .trainerName = _("Benjamin"),
    .trainerClass = TRAINER_CLASS_TRIATHLETE,
    .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = REMATCH_3_LEVEL_3,
        .species = SPECIES_VOLTORB,
        .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
        },
        {
        .lvl = REMATCH_3_LEVEL_3,
        .species = SPECIES_MINUN,
        .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
        },
        {
        .lvl = REMATCH_3_LEVEL_3,
        .species = SPECIES_MAGNETON,
        .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
        }
    },
},

[TRAINER_BENJAMIN_4] =
{
    .trainerName = _("Benjamin"),
    .trainerClass = TRAINER_CLASS_TRIATHLETE,
    .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 36,
        .species = SPECIES_ELECTRODE,
        .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
        },
        {
        .lvl = 36,
        .species = SPECIES_MINUN,
        .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
        },
        {
        .lvl = 36,
        .species = SPECIES_MAGNETON,
        .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
        }
    },
},

[TRAINER_BENJAMIN_5] =
{
    .trainerName = _("Benjamin"),
    .trainerClass = TRAINER_CLASS_TRIATHLETE,
    .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 40,
        .species = SPECIES_ELECTRODE,
        .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
        },
        {
        .lvl = 40,
        .species = SPECIES_MINUN,
        .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
        },
        {
        .lvl = 40,
        .species = SPECIES_MAGNETON,
        .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
        }
    },
},

[TRAINER_ABIGAIL_1] =
{
    .trainerName = _("Abigail"),
    .trainerClass = TRAINER_CLASS_TRIATHLETE,
    .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 20,
        .species = SPECIES_MAGNEMITE,
        }
    },
},

[TRAINER_JASMINE] =
{
    .trainerName = _("Jasmine"),
    .trainerClass = TRAINER_CLASS_TRIATHLETE,
    .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 17,
        .species = SPECIES_MAGNEMITE,
        .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
        },
        {
        .lvl = 17,
        .species = SPECIES_MAGNEMITE,
        .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
        },
        {
        .lvl = 17,
        .species = SPECIES_VOLTORB,
        }
    },
},

[TRAINER_ABIGAIL_2] =
{
    .trainerName = _("Abigail"),
    .trainerClass = TRAINER_CLASS_TRIATHLETE,
    .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 34,
        .species = SPECIES_PLUSLE,
        .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
        },
        {
        .lvl = 34,
        .species = SPECIES_MAGNETON,
        .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
        }
    },
},

[TRAINER_ABIGAIL_3] =
{
    .trainerName = _("Abigail"),
    .trainerClass = TRAINER_CLASS_TRIATHLETE,
    .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = REMATCH_3_LEVEL_3,
        .species = SPECIES_ELECTRIKE,
        .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
        },
        {
        .lvl = REMATCH_3_LEVEL_3,
        .species = SPECIES_PLUSLE,
        .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
        },
        {
        .lvl = REMATCH_3_LEVEL_3,
        .species = SPECIES_MAGNETON,
        .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
        }
    },
},

[TRAINER_ABIGAIL_4] =
{
    .trainerName = _("Abigail"),
    .trainerClass = TRAINER_CLASS_TRIATHLETE,
    .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 36,
        .species = SPECIES_MANECTRIC,
        .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
        },
        {
        .lvl = 36,
        .species = SPECIES_PLUSLE,
        .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
        },
        {
        .lvl = 36,
        .species = SPECIES_MAGNETON,
        .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
        }
    },
},

[TRAINER_ABIGAIL_5] =
{
    .trainerName = _("Abigail"),
    .trainerClass = TRAINER_CLASS_TRIATHLETE,
    .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 40,
        .species = SPECIES_MANECTRIC,
        .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
        },
        {
        .lvl = 40,
        .species = SPECIES_PLUSLE,
        .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
        },
        {
        .lvl = 40,
        .species = SPECIES_MAGNETON,
        .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
        }
    },
},

[TRAINER_DYLAN_1] =
{
    .trainerName = _("Dylan"),
    .trainerClass = TRAINER_CLASS_TRIATHLETE,
    .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 20,
        .species = SPECIES_DODUO,
        }
    },
},

[TRAINER_DYLAN_2] =
{
    .trainerName = _("Dylan"),
    .trainerClass = TRAINER_CLASS_TRIATHLETE,
    .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 35,
        .species = SPECIES_DODRIO,
        .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
        }
    },
},

[TRAINER_DYLAN_3] =
{
    .trainerName = _("Dylan"),
    .trainerClass = TRAINER_CLASS_TRIATHLETE,
    .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = REMATCH_3_LEVEL_1,
        .species = SPECIES_DODRIO,
        .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
        }
    },
},

[TRAINER_DYLAN_4] =
{
    .trainerName = _("Dylan"),
    .trainerClass = TRAINER_CLASS_TRIATHLETE,
    .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 42,
        .species = SPECIES_DODRIO,
        .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
        }
    },
},

[TRAINER_DYLAN_5] =
{
    .trainerName = _("Dylan"),
    .trainerClass = TRAINER_CLASS_TRIATHLETE,
    .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 50,
        .species = SPECIES_ELECTRODE,
        .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
        },
        {
        .lvl = 50,
        .species = SPECIES_SHARPEDO,
        .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
        },
        {
        .lvl = 50,
        .species = SPECIES_DODRIO,
        .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
        }
    },
},

[TRAINER_MARIA_1] =
{
    .trainerName = _("Maria"),
    .trainerClass = TRAINER_CLASS_TRIATHLETE,
    .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 20,
        .species = SPECIES_DODUO,
        }
    },
},

[TRAINER_MARIA_2] =
{
    .trainerName = _("Maria"),
    .trainerClass = TRAINER_CLASS_TRIATHLETE,
    .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 35,
        .species = SPECIES_DODRIO,
        .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
        }
    },
},

[TRAINER_MARIA_3] =
{
    .trainerName = _("Maria"),
    .trainerClass = TRAINER_CLASS_TRIATHLETE,
    .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = REMATCH_3_LEVEL_1,
        .species = SPECIES_DODRIO,
        .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
        }
    },
},

[TRAINER_MARIA_4] =
{
    .trainerName = _("Maria"),
    .trainerClass = TRAINER_CLASS_TRIATHLETE,
    .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 42,
        .species = SPECIES_DODRIO,
        .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
        }
    },
},

[TRAINER_MARIA_5] =
{
    .trainerName = _("Maria"),
    .trainerClass = TRAINER_CLASS_TRIATHLETE,
    .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 50,
        .species = SPECIES_RAICHU,
        .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
        },
        {
        .lvl = 50,
        .species = SPECIES_STARMIE,
        .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
        },
        {
        .lvl = 50,
        .species = SPECIES_DODRIO,
        .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
        }
    },
},

[TRAINER_CAMDEN] =
{
    .trainerName = _("Camden"),
    .trainerClass = TRAINER_CLASS_TRIATHLETE,
    .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
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

[TRAINER_ISAIAH_1] =
{
    .trainerName = _("Isaiah"),
    .trainerClass = TRAINER_CLASS_TRIATHLETE,
    .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 42,
        .species = SPECIES_CHINCHOU,
        }
    },
},

[TRAINER_PABLO_1] =
{
    .trainerName = _("Pablo"),
    .trainerClass = TRAINER_CLASS_TRIATHLETE,
    .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
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

[TRAINER_CHASE] =
{
    .trainerName = _("Chase"),
    .trainerClass = TRAINER_CLASS_TRIATHLETE,
    .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
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
        .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
        }
    },
},

[TRAINER_ISAIAH_2] =
{
    .trainerName = _("Isaiah"),
    .trainerClass = TRAINER_CLASS_TRIATHLETE,
    .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 44,
        .species = SPECIES_LANTURN,
        .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
        }
    },
},

[TRAINER_ISAIAH_3] =
{
    .trainerName = _("Isaiah"),
    .trainerClass = TRAINER_CLASS_TRIATHLETE,
    .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 46,
        .species = SPECIES_LANTURN,
        .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
        }
    },
},

[TRAINER_ISAIAH_4] =
{
    .trainerName = _("Isaiah"),
    .trainerClass = TRAINER_CLASS_TRIATHLETE,
    .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 48,
        .species = SPECIES_LANTURN,
        .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
        }
    },
},

[TRAINER_ISAIAH_5] =
{
    .trainerName = _("Isaiah"),
    .trainerClass = TRAINER_CLASS_TRIATHLETE,
    .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 50,
        .species = SPECIES_LANTURN,
        .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
        }
    },
},

[TRAINER_ISOBEL] =
{
    .trainerName = _("Isobel"),
    .trainerClass = TRAINER_CLASS_TRIATHLETE,
    .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
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
    .trainerClass = TRAINER_CLASS_TRIATHLETE,
    .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
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
        .iv = TRAINER_PARTY_IVS(19, 19, 19, 19, 19, 19),
        }
    },
},

[TRAINER_TALIA] =
{
    .trainerName = _("Talia"),
    .trainerClass = TRAINER_CLASS_TRIATHLETE,
    .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 42,
        .species = SPECIES_STARMIE,
        }
    },
},

[TRAINER_KATELYN_1] =
{
    .trainerName = _("Katelyn"),
    .trainerClass = TRAINER_CLASS_TRIATHLETE,
    .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 42,
        .species = SPECIES_STARYU,
        }
    },
},

[TRAINER_ALLISON] =
{
    .trainerName = _("Allison"),
    .trainerClass = TRAINER_CLASS_TRIATHLETE,
    .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
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
        .iv = TRAINER_PARTY_IVS(29, 29, 29, 29, 29, 29),
        }
    },
},

[TRAINER_KATELYN_2] =
{
    .trainerName = _("Katelyn"),
    .trainerClass = TRAINER_CLASS_TRIATHLETE,
    .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 44,
        .species = SPECIES_STARMIE,
        .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
        }
    },
},

[TRAINER_KATELYN_3] =
{
    .trainerName = _("Katelyn"),
    .trainerClass = TRAINER_CLASS_TRIATHLETE,
    .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 46,
        .species = SPECIES_STARMIE,
        .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
        }
    },
},

[TRAINER_KATELYN_4] =
{
    .trainerName = _("Katelyn"),
    .trainerClass = TRAINER_CLASS_TRIATHLETE,
    .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 48,
        .species = SPECIES_STARMIE,
        .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
        }
    },
},

[TRAINER_KATELYN_5] =
{
    .trainerName = _("Katelyn"),
    .trainerClass = TRAINER_CLASS_TRIATHLETE,
    .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 50,
        .species = SPECIES_STARMIE,
        .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
        }
    },
},

[TRAINER_NICOLAS_1] =
{
    .trainerName = _("Nicolas"),
    .trainerClass = TRAINER_CLASS_DRAGON_TAMER,
    .trainerPic = TRAINER_PIC_DRAGON_TAMER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 45,
        .species = SPECIES_BAGON,
        .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
        },
        {
        .lvl = 45,
        .species = SPECIES_ALTARIA,
        .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
        }
    },
},

[TRAINER_NICOLAS_2] =
{
    .trainerName = _("Nicolas"),
    .trainerClass = TRAINER_CLASS_DRAGON_TAMER,
    .trainerPic = TRAINER_PIC_DRAGON_TAMER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 47,
        .species = SPECIES_SHELGON,
        .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
        },
        {
        .lvl = 47,
        .species = SPECIES_ALTARIA,
        .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
        }
    },
},

[TRAINER_NICOLAS_3] =
{
    .trainerName = _("Nicolas"),
    .trainerClass = TRAINER_CLASS_DRAGON_TAMER,
    .trainerPic = TRAINER_PIC_DRAGON_TAMER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 49,
        .species = SPECIES_SHELGON,
        .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
        },
        {
        .lvl = 49,
        .species = SPECIES_ALTARIA,
        .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
        }
    },
},

[TRAINER_NICOLAS_4] =
{
    .trainerName = _("Nicolas"),
    .trainerClass = TRAINER_CLASS_DRAGON_TAMER,
    .trainerPic = TRAINER_PIC_DRAGON_TAMER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 51,
        .species = SPECIES_FLYGON,
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        },
        {
        .lvl = 51,
        .species = SPECIES_SHELGON,
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        },
        {
        .lvl = 51,
        .species = SPECIES_ALTARIA,
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        }
    },
},

[TRAINER_NICOLAS_5] =
{
    .trainerName = _("Nicolas"),
    .trainerClass = TRAINER_CLASS_DRAGON_TAMER,
    .trainerPic = TRAINER_PIC_DRAGON_TAMER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 53,
        .species = SPECIES_FLYGON,
        .iv = TRAINER_PARTY_IVS(17, 17, 17, 17, 17, 17),
        },
        {
        .lvl = 53,
        .species = SPECIES_SALAMENCE,
        .iv = TRAINER_PARTY_IVS(17, 17, 17, 17, 17, 17),
        },
        {
        .lvl = 53,
        .species = SPECIES_ALTARIA,
        .iv = TRAINER_PARTY_IVS(17, 17, 17, 17, 17, 17),
        .heldItem = ITEM_DRAGON_FANG
        }
    },
},

[TRAINER_AARON] =
{
    .trainerName = _("Aaron"),
    .trainerClass = TRAINER_CLASS_DRAGON_TAMER,
    .trainerPic = TRAINER_PIC_DRAGON_TAMER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 42,
        .species = SPECIES_SHELGON,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
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
        .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
        },
        {
        .lvl = 30,
        .species = SPECIES_SKARMORY,
        .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
        },
        {
        .lvl = 30,
        .species = SPECIES_TROPIUS,
        .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
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
        .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
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
        .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
        },
        {
        .lvl = 31,
        .species = SPECIES_PELIPPER,
        .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
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
        .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
        },
        {
        .lvl = 35,
        .species = SPECIES_SWABLU,
        .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
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
        .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
        },
        {
        .lvl = REMATCH_3_LEVEL_2,
        .species = SPECIES_ALTARIA,
        .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
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
        .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
        },
        {
        .lvl = 41,
        .species = SPECIES_ALTARIA,
        .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
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
        .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
        },
        {
        .lvl = 44,
        .species = SPECIES_XATU,
        .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
        },
        {
        .lvl = 44,
        .species = SPECIES_ALTARIA,
        .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
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
        .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
        },
        {
        .lvl = 41,
        .species = SPECIES_SWELLOW,
        .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
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
    .trainerClass = TRAINER_CLASS_NINJA_BOY,
    .trainerPic = TRAINER_PIC_NINJA_BOY,
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
    .trainerClass = TRAINER_CLASS_NINJA_BOY,
    .trainerPic = TRAINER_PIC_NINJA_BOY,
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
    .trainerClass = TRAINER_CLASS_TUBER,
    .trainerPic = TRAINER_PIC_TUBER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 30,
        .species = SPECIES_AZUMARILL,
        }
    },
},

[TRAINER_LAO_1] =
{
    .trainerName = _("Lao"),
    .trainerClass = TRAINER_CLASS_NINJA_BOY,
    .trainerPic = TRAINER_PIC_NINJA_BOY,
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

[TRAINER_LUNG] =
{
    .trainerName = _("Lung"),
    .trainerClass = TRAINER_CLASS_NINJA_BOY,
    .trainerPic = TRAINER_PIC_NINJA_BOY,
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

[TRAINER_LAO_2] =
{
    .trainerName = _("Lao"),
    .trainerClass = TRAINER_CLASS_NINJA_BOY,
    .trainerPic = TRAINER_PIC_NINJA_BOY,
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
    .trainerClass = TRAINER_CLASS_NINJA_BOY,
    .trainerPic = TRAINER_PIC_NINJA_BOY,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
    .partySize = 4,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = REMATCH_3_LEVEL_4,
        .species = SPECIES_TORKOAL,
        .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
        .moves = {MOVE_LAVA_PLUME, MOVE_SMOKESCREEN, MOVE_RAPID_SPIN, MOVE_SMOG}
        },
        {
        .lvl = REMATCH_3_LEVEL_4,
        .species = SPECIES_SHEDINJA,
        .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
        .moves = {MOVE_SHADOW_SNEAK, MOVE_DIG, MOVE_CONFUSE_RAY, MOVE_MUD_SLAP}
        },
        {
        .lvl = REMATCH_3_LEVEL_4,
        .species = SPECIES_NINJASK,
        .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
        .moves = {MOVE_AERIAL_ACE, MOVE_BATON_PASS, MOVE_AGILITY, MOVE_DOUBLE_TEAM}
        },
        {
        .lvl = REMATCH_3_LEVEL_4,
        .species = SPECIES_KOFFING,
        .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
        .moves = {MOVE_SLUDGE_BOMB, MOVE_SMOKESCREEN, MOVE_POISON_GAS, MOVE_ASSURANCE}
        }
    },
},

[TRAINER_LAO_4] =
{
    .trainerName = _("Lao"),
    .trainerClass = TRAINER_CLASS_NINJA_BOY,
    .trainerPic = TRAINER_PIC_NINJA_BOY,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
    .partySize = 4,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 36,
        .species = SPECIES_TORKOAL,
        .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
        .moves = {MOVE_LAVA_PLUME, MOVE_SMOKESCREEN, MOVE_RAPID_SPIN, MOVE_SMOG}
        },
        {
        .lvl = 36,
        .species = SPECIES_SHEDINJA,
        .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
        .moves = {MOVE_SHADOW_SNEAK, MOVE_DIG, MOVE_CONFUSE_RAY, MOVE_MUD_SLAP}
        },
        {
        .lvl = 36,
        .species = SPECIES_NINJASK,
        .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
        .moves = {MOVE_AERIAL_ACE, MOVE_BATON_PASS, MOVE_AGILITY, MOVE_DOUBLE_TEAM}
        },
        {
        .lvl = 36,
        .species = SPECIES_WEEZING,
        .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
        .moves = {MOVE_SLUDGE_BOMB, MOVE_SMOKESCREEN, MOVE_POISON_GAS, MOVE_ASSURANCE}
        }
    },
},

[TRAINER_LAO_5] =
{
    .trainerName = _("Lao"),
    .trainerClass = TRAINER_CLASS_NINJA_BOY,
    .trainerPic = TRAINER_PIC_NINJA_BOY,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
    .partySize = 4,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 40,
        .species = SPECIES_TORKOAL,
        .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
        .moves = {MOVE_FLAMETHROWER, MOVE_SMOKESCREEN, MOVE_RAPID_SPIN, MOVE_SMOG}
        },
        {
        .lvl = 40,
        .species = SPECIES_SHEDINJA,
        .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
        .moves = {MOVE_SHADOW_SNEAK, MOVE_DIG, MOVE_CONFUSE_RAY, MOVE_MUD_SLAP}
        },
        {
        .lvl = 40,
        .species = SPECIES_NINJASK,
        .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
        .moves = {MOVE_AERIAL_ACE, MOVE_BATON_PASS, MOVE_AGILITY, MOVE_DOUBLE_TEAM}
        },
        {
        .lvl = 40,
        .species = SPECIES_WEEZING,
        .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
        .heldItem = ITEM_SMOKE_BALL,
        .moves = {MOVE_SLUDGE_BOMB, MOVE_SMOKESCREEN, MOVE_POISON_GAS, MOVE_ASSURANCE}
        }
    },
},

[TRAINER_JOCELYN] =
{
    .trainerName = _("Jocelyn"),
    .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
    .trainerPic = TRAINER_PIC_BATTLE_GIRL,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 16,
        .species = SPECIES_MEDITITE,
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        }
    },
},

[TRAINER_LAURA] =
{
    .trainerName = _("Laura"),
    .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
    .trainerPic = TRAINER_PIC_BATTLE_GIRL,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 16,
        .species = SPECIES_COMBUSKEN,
        .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
        }
    },
},

[TRAINER_CYNDY_1] =
{
    .trainerName = _("Cyndy"),
    .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
    .trainerPic = TRAINER_PIC_BATTLE_GIRL,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 23,
        .species = SPECIES_MAKUHITA,
        .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
        },
        {
        .lvl = 23,
        .species = SPECIES_MEDITITE,
        .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
        }
    },
},

[TRAINER_CORA] =
{
    .trainerName = _("Cora"),
    .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
    .trainerPic = TRAINER_PIC_BATTLE_GIRL,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 30,
        .species = SPECIES_MEDITITE,
        .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
        }
    },
},

[TRAINER_PAULA] =
{
    .trainerName = _("Paula"),
    .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
    .trainerPic = TRAINER_PIC_BATTLE_GIRL,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 30,
        .species = SPECIES_BRELOOM,
        .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
        }
    },
},

[TRAINER_CYNDY_2] =
{
    .trainerName = _("Cyndy"),
    .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
    .trainerPic = TRAINER_PIC_BATTLE_GIRL,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 34,
        .species = SPECIES_HARIYAMA,
        .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
        },
        {
        .lvl = 34,
        .species = SPECIES_MEDITITE,
        .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
        }
    },
},

[TRAINER_CYNDY_3] =
{
    .trainerName = _("Cyndy"),
    .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
    .trainerPic = TRAINER_PIC_BATTLE_GIRL,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = REMATCH_3_LEVEL_2,
        .species = SPECIES_HARIYAMA,
        .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
        },
        {
        .lvl = REMATCH_3_LEVEL_2,
        .species = SPECIES_MEDITITE,
        .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
        }
    },
},

[TRAINER_CYNDY_4] =
{
    .trainerName = _("Cyndy"),
    .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
    .trainerPic = TRAINER_PIC_BATTLE_GIRL,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 38,
        .species = SPECIES_HARIYAMA,
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        },
        {
        .lvl = 38,
        .species = SPECIES_MEDICHAM,
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        }
    },
},

[TRAINER_CYNDY_5] =
{
    .trainerName = _("Cyndy"),
    .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
    .trainerPic = TRAINER_PIC_BATTLE_GIRL,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 42,
        .species = SPECIES_HARIYAMA,
        .iv = TRAINER_PARTY_IVS(17, 17, 17, 17, 17, 17),
        },
        {
        .lvl = 42,
        .species = SPECIES_MEDICHAM,
        .iv = TRAINER_PARTY_IVS(17, 17, 17, 17, 17, 17),
        }
    },
},

[TRAINER_MADELINE_1] =
{
    .trainerName = _("Madeline"),
    .trainerClass = TRAINER_CLASS_PARASOL_LADY,
    .trainerPic = TRAINER_PIC_PARASOL_LADY,
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

[TRAINER_CLARISSA] =
{
    .trainerName = _("Clarissa"),
    .trainerClass = TRAINER_CLASS_PARASOL_LADY,
    .trainerPic = TRAINER_PIC_PARASOL_LADY,
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
    .trainerClass = TRAINER_CLASS_PARASOL_LADY,
    .trainerPic = TRAINER_PIC_PARASOL_LADY,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 33,
        .species = SPECIES_CASTFORM_NORMAL,
        .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
        .moves = {MOVE_RAIN_DANCE, MOVE_WEATHER_BALL, MOVE_THUNDER, MOVE_WATER_PULSE}
        }
    },
},

[TRAINER_MADELINE_2] =
{
    .trainerName = _("Madeline"),
    .trainerClass = TRAINER_CLASS_PARASOL_LADY,
    .trainerPic = TRAINER_PIC_PARASOL_LADY,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 35,
        .species = SPECIES_NUMEL,
        .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
        .moves = {MOVE_LAVA_PLUME, MOVE_EARTH_POWER, MOVE_AMNESIA, MOVE_SUNNY_DAY}
        }
    },
},

[TRAINER_MADELINE_3] =
{
    .trainerName = _("Madeline"),
    .trainerClass = TRAINER_CLASS_PARASOL_LADY,
    .trainerPic = TRAINER_PIC_PARASOL_LADY,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = REMATCH_3_LEVEL_2,
        .species = SPECIES_ROSELIA,
        .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
        .moves = {MOVE_GIGA_DRAIN, MOVE_LEECH_SEED, MOVE_GRASS_WHISTLE, MOVE_SUNNY_DAY}
        },
        {
        .lvl = REMATCH_3_LEVEL_2,
        .species = SPECIES_CAMERUPT,
        .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
        .moves = {MOVE_LAVA_PLUME, MOVE_EARTH_POWER, MOVE_AMNESIA, MOVE_SUNNY_DAY}
        }
    },
},

[TRAINER_MADELINE_4] =
{
    .trainerName = _("Madeline"),
    .trainerClass = TRAINER_CLASS_PARASOL_LADY,
    .trainerPic = TRAINER_PIC_PARASOL_LADY,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 40,
        .species = SPECIES_ROSELIA,
        .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
        .moves = {MOVE_GIGA_DRAIN, MOVE_LEECH_SEED, MOVE_GRASS_WHISTLE, MOVE_SUNNY_DAY}
        },
        {
        .lvl = 40,
        .species = SPECIES_CAMERUPT,
        .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
        .moves = {MOVE_LAVA_PLUME, MOVE_EARTH_POWER, MOVE_AMNESIA, MOVE_SUNNY_DAY}
        }
    },
},

[TRAINER_MADELINE_5] =
{
    .trainerName = _("Madeline"),
    .trainerClass = TRAINER_CLASS_PARASOL_LADY,
    .trainerPic = TRAINER_PIC_PARASOL_LADY,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 42,
        .species = SPECIES_SOLROCK,
        .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
        .moves = {MOVE_ROCK_SLIDE, MOVE_SOLAR_BEAM, MOVE_MORNING_SUN, MOVE_SUNNY_DAY}
        },
        {
        .lvl = 42,
        .species = SPECIES_ROSERADE,
        .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
        .moves = {MOVE_GIGA_DRAIN, MOVE_LEECH_SEED, MOVE_GRASS_WHISTLE, MOVE_SUNNY_DAY}
        },
        {
        .lvl = 42,
        .species = SPECIES_CAMERUPT,
        .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
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
    .trainerClass = TRAINER_CLASS_PICNICKER,
    .trainerPic = TRAINER_PIC_PICNICKER,
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
    .trainerClass = TRAINER_CLASS_PICNICKER,
    .trainerPic = TRAINER_PIC_PICNICKER,
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
    .trainerClass = TRAINER_CLASS_PICNICKER,
    .trainerPic = TRAINER_PIC_PICNICKER,
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
    .trainerClass = TRAINER_CLASS_PICNICKER,
    .trainerPic = TRAINER_PIC_PICNICKER,
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
    .trainerClass = TRAINER_CLASS_PICNICKER,
    .trainerPic = TRAINER_PIC_PICNICKER,
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

[TRAINER_DIANA_1] =
{
    .trainerName = _("Diana"),
    .trainerClass = TRAINER_CLASS_PICNICKER,
    .trainerPic = TRAINER_PIC_PICNICKER,
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

[TRAINER_CEDRIC] =
{
    .trainerName = _("Cedric"),
    .trainerClass = TRAINER_CLASS_PSYCHIC,
    .trainerPic = TRAINER_PIC_PSYCHIC_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
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
    .trainerClass = TRAINER_CLASS_PICNICKER,
    .trainerPic = TRAINER_PIC_PICNICKER,
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

[TRAINER_DIANA_2] =
{
    .trainerName = _("Diana"),
    .trainerClass = TRAINER_CLASS_PICNICKER,
    .trainerPic = TRAINER_PIC_PICNICKER,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 33,
        .species = SPECIES_BRELOOM,
        .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
        },
        {
        .lvl = 33,
        .species = SPECIES_GLOOM,
        .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
        },
        {
        .lvl = 33,
        .species = SPECIES_SWABLU,
        .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
        }
    },
},

[TRAINER_DIANA_3] =
{
    .trainerName = _("Diana"),
    .trainerClass = TRAINER_CLASS_PICNICKER,
    .trainerPic = TRAINER_PIC_PICNICKER,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = REMATCH_3_LEVEL_3,
        .species = SPECIES_BRELOOM,
        .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
        },
        {
        .lvl = REMATCH_3_LEVEL_3,
        .species = SPECIES_VILEPLUME,
        .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
        },
        {
        .lvl = REMATCH_3_LEVEL_3,
        .species = SPECIES_ALTARIA,
        .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
        }
    },
},

[TRAINER_DIANA_4] =
{
    .trainerName = _("Diana"),
    .trainerClass = TRAINER_CLASS_PICNICKER,
    .trainerPic = TRAINER_PIC_PICNICKER,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 40,
        .species = SPECIES_BRELOOM,
        .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
        },
        {
        .lvl = 40,
        .species = SPECIES_VILEPLUME,
        .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
        },
        {
        .lvl = 40,
        .species = SPECIES_ALTARIA,
        .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
        }
    },
},

[TRAINER_DIANA_5] =
{
    .trainerName = _("Diana"),
    .trainerClass = TRAINER_CLASS_PICNICKER,
    .trainerPic = TRAINER_PIC_PICNICKER,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 45,
        .species = SPECIES_BRELOOM,
        .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
        },
        {
        .lvl = 45,
        .species = SPECIES_VILEPLUME,
        .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
        },
        {
        .lvl = 45,
        .species = SPECIES_ALTARIA,
        .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
        }
    },
},

[TRAINER_AMY_AND_LIV_1] =
{
    .trainerName = _("Amy & Liv"),
    TWINS_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 18,
        .species = SPECIES_PLUSLE,
        },
        {
        .lvl = 18,
        .species = SPECIES_MINUN,
        }
    },
},

[TRAINER_AMY_AND_LIV_2] =
{
    .trainerName = _("Amy & Liv"),
    TWINS_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 34,
        .species = SPECIES_PLUSLE,
        .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
        },
        {
        .lvl = 34,
        .species = SPECIES_MINUN,
        .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
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

[TRAINER_AMY_AND_LIV_3] =
{
    .trainerName = _("Amy & Liv"),
    TWINS_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 35,
        .species = SPECIES_PLUSLE,
        .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
        },
        {
        .lvl = 35,
        .species = SPECIES_MINUN,
        .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
        }
    },
},

[TRAINER_AMY_AND_LIV_4] =
{
    .trainerName = _("Amy & Liv"),
    TWINS_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 40,
        .species = SPECIES_PLUSLE,
        .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
        .moves = {MOVE_SHOCK_WAVE, MOVE_CHARGE, MOVE_FAKE_TEARS, MOVE_HELPING_HAND}
        },
        {
        .lvl = 40,
        .species = SPECIES_MINUN,
        .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
        .moves = {MOVE_SHOCK_WAVE, MOVE_CHARGE, MOVE_CHARM, MOVE_HELPING_HAND}
        }
    },
},

[TRAINER_AMY_AND_LIV_5] =
{
    .trainerName = _("Amy & Liv"),
    TWINS_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 40,
        .species = SPECIES_PLUSLE,
        .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
        .moves = {MOVE_THUNDERBOLT, MOVE_CHARGE, MOVE_FAKE_TEARS, MOVE_HELPING_HAND}
        },
        {
        .lvl = 40,
        .species = SPECIES_MINUN,
        .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
        .moves = {MOVE_THUNDERBOLT, MOVE_CHARGE, MOVE_CHARM, MOVE_HELPING_HAND}
        }
    },
},

[TRAINER_HUEY] =
{
    .trainerName = _("Huey"),
    .trainerClass = TRAINER_CLASS_SAILOR,
    .trainerPic = TRAINER_PIC_SAILOR,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 17,
        .species = SPECIES_WINGULL,
        .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
        },
        {
        .lvl = 17,
        .species = SPECIES_MACHOP,
        .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
        }
    },
},

[TRAINER_EDMOND] =
{
    .trainerName = _("Edmond"),
    .trainerClass = TRAINER_CLASS_SAILOR,
    .trainerPic = TRAINER_PIC_SAILOR,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 18,
        .species = SPECIES_BARBOACH,
        }
    },
},

[TRAINER_ERNEST_1] =
{
    .trainerName = _("Ernest"),
    .trainerClass = TRAINER_CLASS_SAILOR,
    .trainerPic = TRAINER_PIC_SAILOR,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
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

[TRAINER_DWAYNE] =
{
    .trainerName = _("Dwayne"),
    .trainerClass = TRAINER_CLASS_SAILOR,
    .trainerPic = TRAINER_PIC_SAILOR,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 16,
        .species = SPECIES_WINGULL,
        },
        {
        .lvl = 16,
        .species = SPECIES_MACHOP,
        },
        {
        .lvl = 16,
        .species = SPECIES_TENTACOOL,
        }
    },
},

[TRAINER_PHILLIP] =
{
    .trainerName = _("Phillip"),
    .trainerClass = TRAINER_CLASS_SAILOR,
    .trainerPic = TRAINER_PIC_SAILOR,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
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
    .trainerClass = TRAINER_CLASS_SAILOR,
    .trainerPic = TRAINER_PIC_SAILOR,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
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
    .trainerClass = TRAINER_CLASS_SAILOR,
    .trainerPic = TRAINER_PIC_SAILOR,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
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

[TRAINER_ERNEST_2] =
{
    .trainerName = _("Ernest"),
    .trainerClass = TRAINER_CLASS_SAILOR,
    .trainerPic = TRAINER_PIC_SAILOR,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 4,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 40,
        .species = SPECIES_TENTACRUEL,
        .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
        },
        {
        .lvl = 40,
        .species = SPECIES_PELIPPER,
        .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
        },
        {
        .lvl = 40,
        .species = SPECIES_WAILMER,
        .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
        },
        {
        .lvl = 40,
        .species = SPECIES_MACHOKE,
        .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
        }
    },
},

[TRAINER_ERNEST_3] =
{
    .trainerName = _("Ernest"),
    .trainerClass = TRAINER_CLASS_SAILOR,
    .trainerPic = TRAINER_PIC_SAILOR,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 4,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 42,
        .species = SPECIES_TENTACRUEL,
        .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
        },
        {
        .lvl = 42,
        .species = SPECIES_PELIPPER,
        .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
        },
        {
        .lvl = 42,
        .species = SPECIES_WAILORD,
        .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
        },
        {
        .lvl = 42,
        .species = SPECIES_MACHOKE,
        .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
        }
    },
},

[TRAINER_ERNEST_4] =
{
    .trainerName = _("Ernest"),
    .trainerClass = TRAINER_CLASS_SAILOR,
    .trainerPic = TRAINER_PIC_SAILOR,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 4,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 44,
        .species = SPECIES_TENTACRUEL,
        .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
        },
        {
        .lvl = 44,
        .species = SPECIES_PELIPPER,
        .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
        },
        {
        .lvl = 44,
        .species = SPECIES_WAILORD,
        .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
        },
        {
        .lvl = 44,
        .species = SPECIES_MACHOKE,
        .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
        }
    },
},

[TRAINER_ERNEST_5] =
{
    .trainerName = _("Ernest"),
    .trainerClass = TRAINER_CLASS_SAILOR,
    .trainerPic = TRAINER_PIC_SAILOR,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 4,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 46,
        .species = SPECIES_TENTACRUEL,
        .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
        },
        {
        .lvl = 46,
        .species = SPECIES_PELIPPER,
        .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
        },
        {
        .lvl = 46,
        .species = SPECIES_WAILORD,
        .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
        },
        {
        .lvl = 46,
        .species = SPECIES_MACHAMP,
        .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
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
        .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
        }
    },
},

[TRAINER_ANNIKA] =
{
    .trainerName = _("Annika"),
    .trainerClass = TRAINER_CLASS_POKEFAN,
    .trainerPic = TRAINER_PIC_POKEFAN_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_TWINS,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 43,
        .species = SPECIES_MAGIKARP,
        .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
        .heldItem = ITEM_ORAN_BERRY,
        .moves = {MOVE_HYDRO_PUMP, MOVE_BOUNCE, MOVE_FLAIL, MOVE_TACKLE}
        },
        {
        .lvl = 43,
        .species = SPECIES_FEEBAS,
        .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
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
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 30,
        .species = SPECIES_ABSOL,
        }
    },
},

[TRAINER_JONAS] =
{
    .trainerName = _("Jonas"),
    .trainerClass = TRAINER_CLASS_NINJA_BOY,
    .trainerPic = TRAINER_PIC_NINJA_BOY,
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
    .trainerClass = TRAINER_CLASS_PARASOL_LADY,
    .trainerPic = TRAINER_PIC_PARASOL_LADY,
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
    .trainerClass = TRAINER_CLASS_SAILOR,
    .trainerPic = TRAINER_PIC_SAILOR,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 41,
        .species = SPECIES_MACHOKE,
        .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
        },
        {
        .lvl = 41,
        .species = SPECIES_SEALEO,
        .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
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
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .moves = {MOVE_BITE, MOVE_ROAR, MOVE_THUNDER_WAVE, MOVE_THUNDERBOLT}
        }
    },
},

[TRAINER_REYNA] =
{
    .trainerName = _("Reyna"),
    .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
    .trainerPic = TRAINER_PIC_BATTLE_GIRL,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 41,
        .species = SPECIES_MEDICHAM,
        .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
        },
        {
        .lvl = 41,
        .species = SPECIES_HARIYAMA,
        .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
        }
    },
},

[TRAINER_HUDSON] =
{
    .trainerName = _("Hudson"),
    .trainerClass = TRAINER_CLASS_SAILOR,
    .trainerPic = TRAINER_PIC_SAILOR,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
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
        .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
        }
    },
},

[TRAINER_EDWIN_1] =
{
    .trainerName = _("Edwin"),
    COLLECTOR_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 18,
        .species = SPECIES_LOMBRE,
        },
        {
        .lvl = 18,
        .species = SPECIES_NUZLEAF,
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
        .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
        .gender = TRAINER_MON_MALE,
        },
        {
        .lvl = 55,
        .species = SPECIES_MAGCARGO,
        .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
        .gender = TRAINER_MON_MALE,
        },
        {
        .lvl = 57,
        .species = SPECIES_HOUNDOOM,
        .ability = ABILITY_FLASH_FIRE,
        .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
        .gender = TRAINER_MON_MALE,
        }
    },
},

[TRAINER_EDWIN_2] =
{
    .trainerName = _("Edwin"),
    COLLECTOR_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 34,
        .species = SPECIES_LOMBRE,
        },
        {
        .lvl = 34,
        .species = SPECIES_NUZLEAF,
        }
    },
},

[TRAINER_EDWIN_3] =
{
    .trainerName = _("Edwin"),
    COLLECTOR_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = REMATCH_3_LEVEL_2,
        .species = SPECIES_LOMBRE,
        },
        {
        .lvl = REMATCH_3_LEVEL_2,
        .species = SPECIES_NUZLEAF,
        }
    },
},

[TRAINER_EDWIN_4] =
{
    .trainerName = _("Edwin"),
    COLLECTOR_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 36,
        .species = SPECIES_LOMBRE,
        },
        {
        .lvl = 36,
        .species = SPECIES_NUZLEAF,
        }
    },
},

[TRAINER_EDWIN_5] =
{
    .trainerName = _("Edwin"),
    COLLECTOR_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 40,
        .species = SPECIES_LUDICOLO,
        },
        {
        .lvl = 40,
        .species = SPECIES_SHIFTRY,
        }
    },
},

[TRAINER_ISAAC_1] =
{
    .trainerName = _("Isaac"),
    .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
    .trainerPic = TRAINER_PIC_POKEMON_BREEDER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 6,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 15,
        .species = SPECIES_WHISMUR,
        },
        {
        .lvl = 15,
        .species = SPECIES_ZIGZAGOON,
        },
        {
        .lvl = 15,
        .species = SPECIES_ARON,
        },
        {
        .lvl = 15,
        .species = SPECIES_POOCHYENA,
        },
        {
        .lvl = 15,
        .species = SPECIES_TAILLOW,
        },
        {
        .lvl = 15,
        .species = SPECIES_MAKUHITA,
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

[TRAINER_ISAAC_2] =
{
    .trainerName = _("Isaac"),
    .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
    .trainerPic = TRAINER_PIC_POKEMON_BREEDER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 6,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 30,
        .species = SPECIES_LOUDRED,
        .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
        },
        {
        .lvl = 30,
        .species = SPECIES_LINOONE,
        .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
        },
        {
        .lvl = 30,
        .species = SPECIES_ARON,
        .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
        },
        {
        .lvl = 30,
        .species = SPECIES_MIGHTYENA,
        .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
        },
        {
        .lvl = 30,
        .species = SPECIES_SWELLOW,
        .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
        },
        {
        .lvl = 30,
        .species = SPECIES_MAKUHITA,
        .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
        }
    },
},

[TRAINER_ISAAC_3] =
{
    .trainerName = _("Isaac"),
    .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
    .trainerPic = TRAINER_PIC_POKEMON_BREEDER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 6,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = REMATCH_3_LEVEL_6,
        .species = SPECIES_LOUDRED,
        .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
        },
        {
        .lvl = REMATCH_3_LEVEL_6,
        .species = SPECIES_LINOONE,
        .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
        },
        {
        .lvl = REMATCH_3_LEVEL_6,
        .species = SPECIES_LAIRON,
        .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
        },
        {
        .lvl = REMATCH_3_LEVEL_6,
        .species = SPECIES_MIGHTYENA,
        .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
        },
        {
        .lvl = REMATCH_3_LEVEL_6,
        .species = SPECIES_SWELLOW,
        .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
        },
        {
        .lvl = REMATCH_3_LEVEL_6,
        .species = SPECIES_HARIYAMA,
        .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
        }
    },
},

[TRAINER_ISAAC_4] =
{
    .trainerName = _("Isaac"),
    .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
    .trainerPic = TRAINER_PIC_POKEMON_BREEDER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 6,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 38,
        .species = SPECIES_LOUDRED,
        .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
        },
        {
        .lvl = 38,
        .species = SPECIES_LINOONE,
        .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
        },
        {
        .lvl = 38,
        .species = SPECIES_LAIRON,
        .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
        },
        {
        .lvl = 38,
        .species = SPECIES_MIGHTYENA,
        .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
        },
        {
        .lvl = 38,
        .species = SPECIES_SWELLOW,
        .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
        },
        {
        .lvl = 38,
        .species = SPECIES_HARIYAMA,
        .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
        }
    },
},

[TRAINER_ISAAC_5] =
{
    .trainerName = _("Isaac"),
    .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
    .trainerPic = TRAINER_PIC_POKEMON_BREEDER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 6,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 42,
        .species = SPECIES_EXPLOUD,
        .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
        },
        {
        .lvl = 42,
        .species = SPECIES_LINOONE,
        .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
        },
        {
        .lvl = 42,
        .species = SPECIES_AGGRON,
        .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
        },
        {
        .lvl = 42,
        .species = SPECIES_MIGHTYENA,
        .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
        },
        {
        .lvl = 42,
        .species = SPECIES_SWELLOW,
        .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
        },
        {
        .lvl = 42,
        .species = SPECIES_HARIYAMA,
        .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
        }
    },
},

[TRAINER_LYDIA_1] =
{
    .trainerName = _("Lydia"),
    .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
    .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 6,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 15,
        .species = SPECIES_WINGULL,
        },
        {
        .lvl = 15,
        .species = SPECIES_SHROOMISH,
        },
        {
        .lvl = 15,
        .species = SPECIES_AZURILL,
        },
        {
        .lvl = 15,
        .species = SPECIES_BUDEW,
        },
        {
        .lvl = 15,
        .species = SPECIES_SKITTY,
        },
        {
        .lvl = 15,
        .species = SPECIES_GOLDEEN,
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
    .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
    .trainerPic = TRAINER_PIC_RUIN_MANIAC,
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

[TRAINER_LYDIA_2] =
{
    .trainerName = _("Lydia"),
    .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
    .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 6,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 30,
        .species = SPECIES_WINGULL,
        .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
        },
        {
        .lvl = 30,
        .species = SPECIES_SHROOMISH,
        .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
        },
        {
        .lvl = 30,
        .species = SPECIES_MARILL,
        .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
        },
        {
        .lvl = 30,
        .species = SPECIES_ROSELIA,
        .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
        },
        {
        .lvl = 30,
        .species = SPECIES_SKITTY,
        .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
        },
        {
        .lvl = 30,
        .species = SPECIES_GOLDEEN,
        .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
        }
    },
},

[TRAINER_LYDIA_3] =
{
    .trainerName = _("Lydia"),
    .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
    .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 6,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = REMATCH_3_LEVEL_6,
        .species = SPECIES_PELIPPER,
        .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
        },
        {
        .lvl = REMATCH_3_LEVEL_6,
        .species = SPECIES_BRELOOM,
        .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
        },
        {
        .lvl = REMATCH_3_LEVEL_6,
        .species = SPECIES_AZUMARILL,
        .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
        },
        {
        .lvl = REMATCH_3_LEVEL_6,
        .species = SPECIES_ROSELIA,
        .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
        },
        {
        .lvl = REMATCH_3_LEVEL_6,
        .species = SPECIES_DELCATTY,
        .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
        },
        {
        .lvl = REMATCH_3_LEVEL_6,
        .species = SPECIES_GOLDEEN,
        .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
        }
    },
},

[TRAINER_LYDIA_4] =
{
    .trainerName = _("Lydia"),
    .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
    .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 6,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 38,
        .species = SPECIES_PELIPPER,
        .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
        },
        {
        .lvl = 38,
        .species = SPECIES_BRELOOM,
        .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
        },
        {
        .lvl = 38,
        .species = SPECIES_AZUMARILL,
        .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
        },
        {
        .lvl = 38,
        .species = SPECIES_ROSELIA,
        .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
        },
        {
        .lvl = 38,
        .species = SPECIES_DELCATTY,
        .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
        },
        {
        .lvl = 38,
        .species = SPECIES_SEAKING,
        .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
        }
    },
},

[TRAINER_LYDIA_5] =
{
    .trainerName = _("Lydia"),
    .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
    .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 6,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 42,
        .species = SPECIES_PELIPPER,
        .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
        },
        {
        .lvl = 42,
        .species = SPECIES_BRELOOM,
        .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
        },
        {
        .lvl = 42,
        .species = SPECIES_AZUMARILL,
        .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
        },
        {
        .lvl = 42,
        .species = SPECIES_ROSERADE,
        .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
        },
        {
        .lvl = 42,
        .species = SPECIES_DELCATTY,
        .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
        },
        {
        .lvl = 42,
        .species = SPECIES_SEAKING,
        .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
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
        .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
        },
        {
        .lvl = 30,
        .species = SPECIES_BRELOOM,
        .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
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
        .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
        },
        {
        .lvl = 31,
        .species = SPECIES_NUZLEAF,
        .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
        },
        {
        .lvl = 31,
        .species = SPECIES_LOMBRE,
        .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
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
        .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
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
        .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
        },
        {
        .lvl = 34,
        .species = SPECIES_BRELOOM,
        .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
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
        .iv = TRAINER_PARTY_IVS(8, 8, 8, 8, 8, 8),
        },
        {
        .lvl = REMATCH_3_LEVEL_3,
        .species = SPECIES_GROVYLE,
        .iv = TRAINER_PARTY_IVS(8, 8, 8, 8, 8, 8),
        },
        {
        .lvl = REMATCH_3_LEVEL_3,
        .species = SPECIES_BRELOOM,
        .iv = TRAINER_PARTY_IVS(8, 8, 8, 8, 8, 8),
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
        .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
        },
        {
        .lvl = 39,
        .species = SPECIES_SCEPTILE,
        .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
        },
        {
        .lvl = 39,
        .species = SPECIES_BRELOOM,
        .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
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
        .iv = TRAINER_PARTY_IVS(10, 10, 10, 10, 10, 10),
        },
        {
        .lvl = 42,
        .species = SPECIES_SCEPTILE,
        .iv = TRAINER_PARTY_IVS(10, 10, 10, 10, 10, 10),
        },
        {
        .lvl = 42,
        .species = SPECIES_BRELOOM,
        .iv = TRAINER_PARTY_IVS(10, 10, 10, 10, 10, 10),
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
        .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
        },
        {
        .lvl = 30,
        .species = SPECIES_ROSELIA,
        .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
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
        .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
        },
        {
        .lvl = 31,
        .species = SPECIES_LOMBRE,
        .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
        },
        {
        .lvl = 31,
        .species = SPECIES_NUZLEAF,
        .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
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
        .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
        },
        {
        .lvl = 40,
        .species = SPECIES_ROSELIA,
        .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
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
        .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
        },
        {
        .lvl = 34,
        .species = SPECIES_ROSELIA,
        .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
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
        .iv = TRAINER_PARTY_IVS(8, 8, 8, 8, 8, 8),
        },
        {
        .lvl = REMATCH_3_LEVEL_2,
        .species = SPECIES_ROSELIA,
        .iv = TRAINER_PARTY_IVS(8, 8, 8, 8, 8, 8),
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
        .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
        },
        {
        .lvl = 39,
        .species = SPECIES_ROSELIA,
        .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
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
        .iv = TRAINER_PARTY_IVS(10, 10, 10, 10, 10, 10),
        },
        {
        .lvl = 42,
        .species = SPECIES_ROSERADE,
        .iv = TRAINER_PARTY_IVS(10, 10, 10, 10, 10, 10),
        }
    },
},

[TRAINER_JULIO] =
{
    .trainerName = _("Julio"),
    .trainerClass = TRAINER_CLASS_TRIATHLETE,
    .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 26,
        .species = SPECIES_MAGNEMITE,
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
        .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
        },
        {
        .lvl = 42,
        .species = SPECIES_CRAWDAUNT,
        .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
        },
        {
        .lvl = 43,
        .species = SPECIES_HUNTAIL,
        .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
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
        .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
        },
        {
        .lvl = 25,
        .species = SPECIES_HOUNDOUR,
        .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
        }
    },
},

[TRAINER_BRENDEN] =
{
    .trainerName = _("Brenden"),
    .trainerClass = TRAINER_CLASS_SAILOR,
    .trainerPic = TRAINER_PIC_SAILOR,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 13,
        .species = SPECIES_HERACROSS,
        .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
        }
    },
},

[TRAINER_LILITH] =
{
    .trainerName = _("Lilith"),
    .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
    .trainerPic = TRAINER_PIC_BATTLE_GIRL,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 15,
        .species = SPECIES_MEDITITE,
        .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
        }
    },
},

[TRAINER_CRISTIAN] =
{
    .trainerName = _("Cristian"),
    .trainerClass = TRAINER_CLASS_BLACK_BELT,
    .trainerPic = TRAINER_PIC_BLACK_BELT,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 15,
        .species = SPECIES_MAKUHITA,
        .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
        }
    },
},

[TRAINER_SYLVIA] =
{
    .trainerName = _("Sylvia"),
    .trainerClass = TRAINER_CLASS_HEX_MANIAC,
    .trainerPic = TRAINER_PIC_HEX_MANIAC,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 40,
        .species = SPECIES_MEDICHAM,
        .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
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
        .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
        .moves = {MOVE_THUNDER, MOVE_THUNDER_WAVE, MOVE_QUICK_ATTACK, MOVE_NONE}
        },
        {
        .lvl = 41,
        .species = SPECIES_LINOONE,
        .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
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
    .trainerClass = TRAINER_CLASS_PSYCHIC,
    .trainerPic = TRAINER_PIC_PSYCHIC_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
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
    .trainerClass = TRAINER_CLASS_GENTLEMAN,
    .trainerPic = TRAINER_PIC_GENTLEMAN,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_RICH,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 40,
        .species = SPECIES_GRUMPIG,
        .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
        }
    },
},

[TRAINER_KATHLEEN] =
{
    .trainerName = _("Kathleen"),
    .trainerClass = TRAINER_CLASS_HEX_MANIAC,
    .trainerPic = TRAINER_PIC_HEX_MANIAC,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 40,
        .species = SPECIES_CHIMECHO,
        .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
        }
    },
},

[TRAINER_CLIFFORD] =
{
    .trainerName = _("Clifford"),
    .trainerClass = TRAINER_CLASS_GENTLEMAN,
    .trainerPic = TRAINER_PIC_GENTLEMAN,
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
    .trainerClass = TRAINER_CLASS_PSYCHIC,
    .trainerPic = TRAINER_PIC_PSYCHIC_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 40,
        .species = SPECIES_WOBBUFFET,
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

[TRAINER_MACEY] =
{
    .trainerName = _("Macey"),
    .trainerClass = TRAINER_CLASS_PSYCHIC,
    .trainerPic = TRAINER_PIC_PSYCHIC_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
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
    .trainerClass = TRAINER_CLASS_TRIATHLETE,
    .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 38,
        .species = SPECIES_STARMIE,
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
        .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
        .gender = TRAINER_MON_MALE,
        },
        {
        .lvl = 26,
        .species = SPECIES_SLUGMA,
        .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
        .gender = TRAINER_MON_MALE,
        },
        {
        .lvl = 28,
        .species = SPECIES_HOUNDOUR,
        .ability = ABILITY_FLASH_FIRE,
        .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
        .gender = TRAINER_MON_MALE,
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
        .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
        .gender = TRAINER_MON_MALE,
        },
        {
        .lvl = 52,
        .species = SPECIES_SANDSLASH,
        .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
        .gender = TRAINER_MON_MALE,
        },
        {
        .lvl = 52,
        .species = SPECIES_CLAYDOL,
        .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
        },
        {
        .lvl = 53,
        .species = SPECIES_CAMERUPT,
        .ability = ABILITY_SOLID_ROCK,
        .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
        .gender = TRAINER_MON_MALE,
        .nickname = COMPOUND_STRING("Humphrey"),
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
        .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
        .gender = TRAINER_MON_MALE,
        },
        {
        .lvl = 28,
        .species = SPECIES_SANDSHREW,
        .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
        .gender = TRAINER_MON_MALE,
        },
        {
        .lvl = 28,
        .species = SPECIES_BALTOY,
        .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
        },
        {
        .lvl = 30,
        .species = SPECIES_NUMEL,
        .ability = ABILITY_SIMPLE,
        .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
        .gender = TRAINER_MON_MALE,
        .nickname = COMPOUND_STRING("Humphrey"),
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
        .ev = TRAINER_PARTY_EVS(1, 0, 0, 63, 63, 0),
        .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
        },
        {
        .lvl = 18,
        .species = SPECIES_SHROOMISH,
        .ev = TRAINER_PARTY_EVS(1, 63, 0, 63, 0, 0),
        .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
        },
        {
        .lvl = 18,
        .species = SPECIES_GOLDEEN,
        .ev = TRAINER_PARTY_EVS(1, 63, 0, 63, 0, 0),
        .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
        }
    },
},

[TRAINER_SALLY] =
{
    .trainerName = _("Sally"),
    LASS_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 19,
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
        .lvl = 17,
        .species = SPECIES_SKITTY,
        },
        {
        .lvl = 17,
        .species = SPECIES_SHROOMISH,
        },
        {
        .lvl = 17,
        .species = SPECIES_MARILL,
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
        .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
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
        .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
        },
        {
        .lvl = 43,
        .species = SPECIES_WAILORD,
        .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
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
        .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
        },
        {
        .lvl = 32,
        .species = SPECIES_GEODUDE,
        .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
        },
        {
        .lvl = 32,
        .species = SPECIES_GEODUDE,
        .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
        },
        {
        .lvl = 32,
        .species = SPECIES_GRAVELER,
        .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
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
        .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
        },
        {
        .lvl = REMATCH_3_LEVEL_4,
        .species = SPECIES_GRAVELER,
        .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
        },
        {
        .lvl = REMATCH_3_LEVEL_4,
        .species = SPECIES_GRAVELER,
        .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
        },
        {
        .lvl = REMATCH_3_LEVEL_4,
        .species = SPECIES_GRAVELER,
        .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
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
        .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
        },
        {
        .lvl = 36,
        .species = SPECIES_GRAVELER,
        .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
        },
        {
        .lvl = 36,
        .species = SPECIES_GRAVELER,
        .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
        },
        {
        .lvl = 36,
        .species = SPECIES_GOLEM,
        .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
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
        .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
        },
        {
        .lvl = 40,
        .species = SPECIES_GOLEM,
        .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
        },
        {
        .lvl = 40,
        .species = SPECIES_GOLEM,
        .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
        },
        {
        .lvl = 40,
        .species = SPECIES_GOLEM,
        .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
        }
    },
},

[TRAINER_DEZ_AND_LUKE] =
{
    .trainerName = _("Dez & Luke"),
    .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
    .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
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
    .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
    .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
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
    .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
    .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
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
    .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
    .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL,
    .doubleBattle = TRUE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 34,
        .species = SPECIES_VOLBEAT,
        .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
        },
        {
        .lvl = 34,
        .species = SPECIES_ILLUMISE,
        .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
        }
    },
},

[TRAINER_KIRA_AND_DAN_3] =
{
    .trainerName = _("Kira & Dan"),
    .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
    .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL,
    .doubleBattle = TRUE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = REMATCH_3_LEVEL_2,
        .species = SPECIES_VOLBEAT,
        .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
        },
        {
        .lvl = REMATCH_3_LEVEL_2,
        .species = SPECIES_ILLUMISE,
        .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
        }
    },
},

[TRAINER_KIRA_AND_DAN_4] =
{
    .trainerName = _("Kira & Dan"),
    .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
    .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL,
    .doubleBattle = TRUE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 39,
        .species = SPECIES_VOLBEAT,
        .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
        },
        {
        .lvl = 39,
        .species = SPECIES_ILLUMISE,
        .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
        }
    },
},

[TRAINER_KIRA_AND_DAN_5] =
{
    .trainerName = _("Kira & Dan"),
    .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
    .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL,
    .doubleBattle = TRUE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 42,
        .species = SPECIES_VOLBEAT,
        .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
        },
        {
        .lvl = 42,
        .species = SPECIES_ILLUMISE,
        .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
        }
    },
},

[TRAINER_JOHANNA] =
{
    .trainerName = _("Johanna"),
    .trainerClass = TRAINER_CLASS_BEAUTY,
    .trainerPic = TRAINER_PIC_BEAUTY,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 18,
        .species = SPECIES_GOLDEEN,
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
        .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
        }
    },
},

[TRAINER_VIVIAN] =
{
    .trainerName = _("Vivian"),
    .trainerClass = TRAINER_CLASS_BEAUTY,
    .trainerPic = TRAINER_PIC_BEAUTY,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 20,
        .species = SPECIES_MINUN,
        .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
        .moves = {MOVE_SHOCK_WAVE, MOVE_SWIFT, MOVE_NUZZLE, MOVE_ENCORE}
        },
        {
        .lvl = 20,
        .species = SPECIES_PLUSLE,
        .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
        .moves = {MOVE_SHOCK_WAVE, MOVE_SWIFT, MOVE_NUZZLE, MOVE_SKILL_SWAP}
        }
    },
},

[TRAINER_DANIELLE] =
{
    .trainerName = _("Danielle"),
    .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
    .trainerPic = TRAINER_PIC_BATTLE_GIRL,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 26,
        .species = SPECIES_COMBUSKEN,
        .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
        }
    },
},

[TRAINER_HIDEO] =
{
    .trainerName = _("Hideo"),
    .trainerClass = TRAINER_CLASS_NINJA_BOY,
    .trainerPic = TRAINER_PIC_NINJA_BOY,
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
    .trainerClass = TRAINER_CLASS_NINJA_BOY,
    .trainerPic = TRAINER_PIC_NINJA_BOY,
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
    .trainerClass = TRAINER_CLASS_NINJA_BOY,
    .trainerPic = TRAINER_PIC_NINJA_BOY,
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
    .trainerClass = TRAINER_CLASS_CAMPER,
    .trainerPic = TRAINER_PIC_CAMPER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 31,
        .species = SPECIES_SWELLOW,
        .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
        },
        {
        .lvl = 31,
        .species = SPECIES_XATU,
        .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
        }
    },
},

[TRAINER_ASHLEY] =
{
    .trainerName = _("Ashley"),
    .trainerClass = TRAINER_CLASS_PICNICKER,
    .trainerPic = TRAINER_PIC_PICNICKER,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 30,
        .species = SPECIES_SWABLU,
        .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
        },
        {
        .lvl = 30,
        .species = SPECIES_SWABLU,
        .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
        },
        {
        .lvl = 30,
        .species = SPECIES_SWABLU,
        .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
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
        .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
        },
        {
        .lvl = 41,
        .species = SPECIES_AZUMARILL,
        .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
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
        .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
        },
        {
        .lvl = 41,
        .species = SPECIES_PROBOPASS,
        .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
        }
    },
},

[TRAINER_KOJI_1] =
{
    .trainerName = _("Koji"),
    .trainerClass = TRAINER_CLASS_BLACK_BELT,
    .trainerPic = TRAINER_PIC_BLACK_BELT,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 42,
        .species = SPECIES_MEDICHAM,
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
    .trainerClass = TRAINER_CLASS_SR_AND_JR,
    .trainerPic = TRAINER_PIC_SR_AND_JR,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
    .doubleBattle = TRUE,
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
    .trainerClass = TRAINER_CLASS_SR_AND_JR,
    .trainerPic = TRAINER_PIC_SR_AND_JR,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
    .doubleBattle = TRUE,
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
    .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
    .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
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
    .trainerClass = TRAINER_CLASS_OLD_COUPLE,
    .trainerPic = TRAINER_PIC_OLD_COUPLE,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = TRUE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 45,
        .species = SPECIES_MEDICHAM,
        .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
        .moves = {MOVE_ZEN_HEADBUTT, MOVE_HIGH_JUMP_KICK, MOVE_FIRE_PUNCH, MOVE_ICE_PUNCH}
        },
        {
        .lvl = 45,
        .species = SPECIES_HARIYAMA,
        .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
        .moves = {MOVE_CLOSE_COMBAT, MOVE_ROCK_SLIDE, MOVE_REST, MOVE_BELLY_DRUM}
        }
    },
},

[TRAINER_JOHN_AND_JAY_2] =
{
    .trainerName = _("John & Jay"),
    .trainerClass = TRAINER_CLASS_OLD_COUPLE,
    .trainerPic = TRAINER_PIC_OLD_COUPLE,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = TRUE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 48,
        .species = SPECIES_MEDICHAM,
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
        .moves = {MOVE_ZEN_HEADBUTT, MOVE_HIGH_JUMP_KICK, MOVE_FIRE_PUNCH, MOVE_ICE_PUNCH}
        },
        {
        .lvl = 48,
        .species = SPECIES_HARIYAMA,
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
        .moves = {MOVE_CLOSE_COMBAT, MOVE_ROCK_SLIDE, MOVE_REST, MOVE_BELLY_DRUM}
        }
    },
},

[TRAINER_JOHN_AND_JAY_3] =
{
    .trainerName = _("John & Jay"),
    .trainerClass = TRAINER_CLASS_OLD_COUPLE,
    .trainerPic = TRAINER_PIC_OLD_COUPLE,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = TRUE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 51,
        .species = SPECIES_MEDICHAM,
        .iv = TRAINER_PARTY_IVS(26, 26, 26, 26, 26, 26),
        .moves = {MOVE_ZEN_HEADBUTT, MOVE_HIGH_JUMP_KICK, MOVE_FIRE_PUNCH, MOVE_ICE_PUNCH}
        },
        {
        .lvl = 51,
        .species = SPECIES_HARIYAMA,
        .iv = TRAINER_PARTY_IVS(26, 26, 26, 26, 26, 26),
        .moves = {MOVE_CLOSE_COMBAT, MOVE_ROCK_SLIDE, MOVE_REST, MOVE_BELLY_DRUM}
        }
    },
},

[TRAINER_JOHN_AND_JAY_4] =
{
    .trainerName = _("John & Jay"),
    .trainerClass = TRAINER_CLASS_OLD_COUPLE,
    .trainerPic = TRAINER_PIC_OLD_COUPLE,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = TRUE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_SETUP_FIRST_TURN,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 54,
        .species = SPECIES_MEDICHAM,
        .iv = TRAINER_PARTY_IVS(27, 27, 27, 27, 27, 27),
        .moves = {MOVE_ZEN_HEADBUTT, MOVE_HIGH_JUMP_KICK, MOVE_FIRE_PUNCH, MOVE_ICE_PUNCH}
        },
        {
        .lvl = 54,
        .species = SPECIES_HARIYAMA,
        .iv = TRAINER_PARTY_IVS(27, 27, 27, 27, 27, 27),
        .moves = {MOVE_CLOSE_COMBAT, MOVE_ROCK_SLIDE, MOVE_REST, MOVE_BELLY_DRUM}
        }
    },
},

[TRAINER_JOHN_AND_JAY_5] =
{
    .trainerName = _("John & Jay"),
    .trainerClass = TRAINER_CLASS_OLD_COUPLE,
    .trainerPic = TRAINER_PIC_OLD_COUPLE,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = TRUE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 57,
        .species = SPECIES_MEDICHAM,
        .iv = TRAINER_PARTY_IVS(29, 29, 29, 29, 29, 29),
        .moves = {MOVE_ZEN_HEADBUTT, MOVE_HIGH_JUMP_KICK, MOVE_FIRE_PUNCH, MOVE_ICE_PUNCH}
        },
        {
        .lvl = 57,
        .species = SPECIES_HARIYAMA,
        .iv = TRAINER_PARTY_IVS(29, 29, 29, 29, 29, 29),
        .moves = {MOVE_CLOSE_COMBAT, MOVE_ROCK_SLIDE, MOVE_REST, MOVE_BELLY_DRUM}
        }
    },
},

[TRAINER_RELI_AND_IAN] =
{
    .trainerName = _("Reli & Ian"),
    .trainerClass = TRAINER_CLASS_SIS_AND_BRO,
    .trainerPic = TRAINER_PIC_SIS_AND_BRO,
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
    .trainerClass = TRAINER_CLASS_SIS_AND_BRO,
    .trainerPic = TRAINER_PIC_SIS_AND_BRO,
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
    .trainerClass = TRAINER_CLASS_SIS_AND_BRO,
    .trainerPic = TRAINER_PIC_SIS_AND_BRO,
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
    .trainerClass = TRAINER_CLASS_SIS_AND_BRO,
    .trainerPic = TRAINER_PIC_SIS_AND_BRO,
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
    .trainerClass = TRAINER_CLASS_SIS_AND_BRO,
    .trainerPic = TRAINER_PIC_SIS_AND_BRO,
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
    .trainerClass = TRAINER_CLASS_SIS_AND_BRO,
    .trainerPic = TRAINER_PIC_SIS_AND_BRO,
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
    .trainerClass = TRAINER_CLASS_SIS_AND_BRO,
    .trainerPic = TRAINER_PIC_SIS_AND_BRO,
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

[TRAINER_HAILEY] =
{
    .trainerName = _("Hailey"),
    .trainerClass = TRAINER_CLASS_TUBER,
    .trainerPic = TRAINER_PIC_TUBER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 18,
        .species = SPECIES_AZURILL,
        }
    },
},

[TRAINER_CHANDLER] =
{
    .trainerName = _("Chandler"),
    .trainerClass = TRAINER_CLASS_TUBER,
    .trainerPic = TRAINER_PIC_TUBER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 17,
        .species = SPECIES_TENTACOOL,
        },
        {
        .lvl = 17,
        .species = SPECIES_TENTACOOL,
        }
    },
},

[TRAINER_KALEB] =
{
    .trainerName = _("Kaleb"),
    .trainerClass = TRAINER_CLASS_POKEFAN,
    .trainerPic = TRAINER_PIC_POKEFAN_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 18,
        .species = SPECIES_MINUN,
        .heldItem = ITEM_ORAN_BERRY
        },
        {
        .lvl = 18,
        .species = SPECIES_PLUSLE,
        .heldItem = ITEM_ORAN_BERRY
        }
    },
},

[TRAINER_JOSEPH] =
{
    .trainerName = _("Joseph"),
    .trainerClass = TRAINER_CLASS_GUITARIST,
    .trainerPic = TRAINER_PIC_GUITARIST,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
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

[TRAINER_ALYSSA] =
{
    .trainerName = _("Alyssa"),
    .trainerClass = TRAINER_CLASS_TRIATHLETE,
    .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 19,
        .species = SPECIES_MAGNEMITE,
        }
    },
},

[TRAINER_MARCOS] =
{
    .trainerName = _("Marcos"),
    .trainerClass = TRAINER_CLASS_GUITARIST,
    .trainerPic = TRAINER_PIC_GUITARIST,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 19,
        .species = SPECIES_VOLTORB,
        .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
        }
    },
},

[TRAINER_RHETT] =
{
    .trainerName = _("Rhett"),
    .trainerClass = TRAINER_CLASS_BLACK_BELT,
    .trainerPic = TRAINER_PIC_BLACK_BELT,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 19,
        .species = SPECIES_MAKUHITA,
        .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
        }
    },
},

[TRAINER_TYRON] =
{
    .trainerName = _("Tyron"),
    .trainerClass = TRAINER_CLASS_CAMPER,
    .trainerPic = TRAINER_PIC_CAMPER,
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
    .trainerClass = TRAINER_CLASS_AROMA_LADY,
    .trainerPic = TRAINER_PIC_AROMA_LADY,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
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
    .trainerClass = TRAINER_CLASS_PICNICKER,
    .trainerPic = TRAINER_PIC_PICNICKER,
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
    .trainerClass = TRAINER_CLASS_KINDLER,
    .trainerPic = TRAINER_PIC_KINDLER,
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
    .trainerClass = TRAINER_CLASS_PICNICKER,
    .trainerPic = TRAINER_PIC_PICNICKER,
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
    .trainerClass = TRAINER_CLASS_CAMPER,
    .trainerPic = TRAINER_PIC_CAMPER,
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
    .trainerClass = TRAINER_CLASS_POKEMANIAC,
    .trainerPic = TRAINER_PIC_POKEMANIAC,
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
    .trainerClass = TRAINER_CLASS_PICNICKER,
    .trainerPic = TRAINER_PIC_PICNICKER,
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
    .trainerClass = TRAINER_CLASS_PICNICKER,
    .trainerPic = TRAINER_PIC_PICNICKER,
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
        .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
        .gender = TRAINER_MON_MALE,
        },
        {
        .lvl = 51,
        .species = SPECIES_MAGCARGO,
        .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
        .gender = TRAINER_MON_MALE,
        },
        {
        .lvl = 52,
        .species = SPECIES_HOUNDOOM,
        .ability = ABILITY_FLASH_FIRE,
        .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
        .gender = TRAINER_MON_MALE,
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
        .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
        .gender = TRAINER_MON_MALE,
        },
        {
        .lvl = 58,
        .species = SPECIES_CLAYDOL,
        .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
        },
        {
        .lvl = 60,
        .species = SPECIES_CAMERUPT,
        .ability = ABILITY_SOLID_ROCK,
        .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
        .gender = TRAINER_MON_MALE,
        .nickname = COMPOUND_STRING("Humphrey"),
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

[TRAINER_ANDRES_1] =
{
    .trainerName = _("Andres"),
    .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
    .trainerPic = TRAINER_PIC_RUIN_MANIAC,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 29,
        .species = SPECIES_BALTOY,
        .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
        },
        {
        .lvl = 29,
        .species = SPECIES_SANDSHREW,
        .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
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
        .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
        },
        {
        .lvl = 29,
        .species = SPECIES_PELIPPER,
        .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
        }
    },
},

[TRAINER_CAMRON] =
{
    .trainerName = _("Camron"),
    .trainerClass = TRAINER_CLASS_TRIATHLETE,
    .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 30,
        .species = SPECIES_STARYU,
        }
    },
},

[TRAINER_CORY_1] =
{
    .trainerName = _("Cory"),
    .trainerClass = TRAINER_CLASS_SAILOR,
    .trainerPic = TRAINER_PIC_SAILOR,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
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
        .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
        },
        {
        .lvl = 28,
        .species = SPECIES_SWELLOW,
        .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
        },
        {
        .lvl = 28,
        .species = SPECIES_MANECTRIC,
        .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
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
    .trainerClass = TRAINER_CLASS_PICNICKER,
    .trainerPic = TRAINER_PIC_PICNICKER,
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
    .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
    .trainerPic = TRAINER_PIC_RUIN_MANIAC,
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
    .trainerClass = TRAINER_CLASS_CAMPER,
    .trainerPic = TRAINER_PIC_CAMPER,
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
    .trainerClass = TRAINER_CLASS_KINDLER,
    .trainerPic = TRAINER_PIC_KINDLER,
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
    .trainerClass = TRAINER_CLASS_AROMA_LADY,
    .trainerPic = TRAINER_PIC_AROMA_LADY,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
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
    .trainerClass = TRAINER_CLASS_TRIATHLETE,
    .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 29,
        .species = SPECIES_DODUO,
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
    .trainerClass = TRAINER_CLASS_NINJA_BOY,
    .trainerPic = TRAINER_PIC_NINJA_BOY,
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
    .trainerClass = TRAINER_CLASS_PSYCHIC,
    .trainerPic = TRAINER_PIC_PSYCHIC_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
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
    .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
    .trainerPic = TRAINER_PIC_BATTLE_GIRL,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
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
    .trainerClass = TRAINER_CLASS_PSYCHIC,
    .trainerPic = TRAINER_PIC_PSYCHIC_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
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

[TRAINER_MELINA] =
{
    .trainerName = _("Melina"),
    .trainerClass = TRAINER_CLASS_TRIATHLETE,
    .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 19,
        .species = SPECIES_DODUO,
        }
    },
},

[TRAINER_BRANDI] =
{
    .trainerName = _("Brandi"),
    .trainerClass = TRAINER_CLASS_PSYCHIC,
    .trainerPic = TRAINER_PIC_PSYCHIC_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 19,
        .species = SPECIES_RALTS,
        }
    },
},

[TRAINER_AISHA] =
{
    .trainerName = _("Aisha"),
    .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
    .trainerPic = TRAINER_PIC_BATTLE_GIRL,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 19,
        .species = SPECIES_MEDITITE,
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
    .trainerClass = TRAINER_CLASS_GUITARIST,
    .trainerPic = TRAINER_PIC_GUITARIST,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
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
    .trainerClass = TRAINER_CLASS_KINDLER,
    .trainerPic = TRAINER_PIC_KINDLER,
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
    .trainerClass = TRAINER_CLASS_PARASOL_LADY,
    .trainerPic = TRAINER_PIC_PARASOL_LADY,
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
        .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
        .moves = {MOVE_THUNDER, MOVE_QUICK_ATTACK, MOVE_THUNDER_WAVE, MOVE_ROAR}
        }
    },
},

[TRAINER_CALLIE] =
{
    .trainerName = _("Callie"),
    .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
    .trainerPic = TRAINER_PIC_BATTLE_GIRL,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
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
    .trainerClass = TRAINER_CLASS_BUG_MANIAC,
    .trainerPic = TRAINER_PIC_BUG_MANIAC,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
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
    .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
    .trainerPic = TRAINER_PIC_POKEMON_BREEDER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 6,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 29,
        .species = SPECIES_NUMEL,
        .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
        },
        {
        .lvl = 29,
        .species = SPECIES_HARIYAMA,
        .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
        },
        {
        .lvl = 29,
        .species = SPECIES_PELIPPER,
        .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
        },
        {
        .lvl = 29,
        .species = SPECIES_LINOONE,
        .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
        },
        {
        .lvl = 29,
        .species = SPECIES_MANECTRIC,
        .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
        },
        {
        .lvl = 29,
        .species = SPECIES_TROPIUS,
        .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
        }
    },
},

[TRAINER_PAT] =
{
    .trainerName = _("Pat"),
    .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
    .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 6,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 29,
        .species = SPECIES_MIGHTYENA,
        .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
        },
        {
        .lvl = 29,
        .species = SPECIES_BRELOOM,
        .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
        },
        {
        .lvl = 29,
        .species = SPECIES_MANECTRIC,
        .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
        },
        {
        .lvl = 29,
        .species = SPECIES_AZUMARILL,
        .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
        },
        {
        .lvl = 29,
        .species = SPECIES_SANDSLASH,
        .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
        },
        {
        .lvl = 29,
        .species = SPECIES_SWALOT,
        .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
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
        .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
        },
        {
        .lvl = 33,
        .species = SPECIES_VIGOROTH,
        .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
        }
    },
},

[TRAINER_ANGELO] =
{
    .trainerName = _("Angelo"),
    .trainerClass = TRAINER_CLASS_POKEMANIAC,
    .trainerPic = TRAINER_PIC_POKEMANIAC,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 20,
        .species = SPECIES_CHINCHOU,
        .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
        .moves = {MOVE_SHOCK_WAVE, MOVE_BUBBLE_BEAM, MOVE_THUNDER_WAVE, MOVE_CONFUSE_RAY}
        },
        {
        .lvl = 20,
        .species = SPECIES_MAGNEMITE,
        .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
        .moves = {MOVE_SHOCK_WAVE, MOVE_MAGNET_BOMB, MOVE_THUNDER_WAVE, MOVE_SUPERSONIC}
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
        .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
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
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
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
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
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
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        },
        {
        .lvl = 5,
        .species = SPECIES_UNOWN,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        },
        {
        .lvl = 40,
        .species = SPECIES_DUSCLOPS,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        },
        {
        .lvl = 70,
        .species = SPECIES_KYOGRE,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
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
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        },
        {
        .lvl = 50,
        .species = SPECIES_MIENSHAO,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        },
        {
        .lvl = 50,
        .species = SPECIES_BRELOOM,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        },
        {
        .lvl = 50,
        .species = SPECIES_MEDICHAM,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
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
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
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
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
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
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        },
        {
        .lvl = 50,
        .species = SPECIES_REGIELEKI,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        },
        {
        .lvl = 50,
        .species = SPECIES_REGIROCK,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        },
        {
        .lvl = 50,
        .species = SPECIES_REGICE,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        },
        {
        .lvl = 50,
        .species = SPECIES_REGISTEEL,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        },
        {
        .lvl = 70,
        .species = SPECIES_REGIGIGAS,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        }
    },
},

[TRAINER_ANDRES_2] =
{
    .trainerName = _("Andres"),
    .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
    .trainerPic = TRAINER_PIC_RUIN_MANIAC,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 34,
        .species = SPECIES_BALTOY,
        .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
        },
        {
        .lvl = 34,
        .species = SPECIES_SANDSLASH,
        .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
        }
    },
},

[TRAINER_ANDRES_3] =
{
    .trainerName = _("Andres"),
    .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
    .trainerPic = TRAINER_PIC_RUIN_MANIAC,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = REMATCH_3_LEVEL_3,
        .species = SPECIES_NOSEPASS,
        .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
        },
        {
        .lvl = REMATCH_3_LEVEL_3,
        .species = SPECIES_CLAYDOL,
        .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
        },
        {
        .lvl = REMATCH_3_LEVEL_3,
        .species = SPECIES_SANDSLASH,
        .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
        }
    },
},

[TRAINER_ANDRES_4] =
{
    .trainerName = _("Andres"),
    .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
    .trainerPic = TRAINER_PIC_RUIN_MANIAC,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 40,
        .species = SPECIES_NOSEPASS,
        .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
        },
        {
        .lvl = 40,
        .species = SPECIES_CLAYDOL,
        .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
        },
        {
        .lvl = 40,
        .species = SPECIES_SANDSLASH,
        .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
        }
    },
},

[TRAINER_ANDRES_5] =
{
    .trainerName = _("Andres"),
    .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
    .trainerPic = TRAINER_PIC_RUIN_MANIAC,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 43,
        .species = SPECIES_NOSEPASS,
        .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
        },
        {
        .lvl = 43,
        .species = SPECIES_CLAYDOL,
        .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
        },
        {
        .lvl = 43,
        .species = SPECIES_SANDSLASH,
        .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
        }
    },
},

[TRAINER_CORY_2] =
{
    .trainerName = _("Cory"),
    .trainerClass = TRAINER_CLASS_SAILOR,
    .trainerPic = TRAINER_PIC_SAILOR,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 33,
        .species = SPECIES_PELIPPER,
        .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
        },
        {
        .lvl = 33,
        .species = SPECIES_MACHOKE,
        .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
        },
        {
        .lvl = 33,
        .species = SPECIES_TENTACRUEL,
        .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
        }
    },
},

[TRAINER_CORY_3] =
{
    .trainerName = _("Cory"),
    .trainerClass = TRAINER_CLASS_SAILOR,
    .trainerPic = TRAINER_PIC_SAILOR,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = REMATCH_3_LEVEL_3,
        .species = SPECIES_PELIPPER,
        .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
        },
        {
        .lvl = REMATCH_3_LEVEL_3,
        .species = SPECIES_MACHOKE,
        .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
        },
        {
        .lvl = REMATCH_3_LEVEL_3,
        .species = SPECIES_TENTACRUEL,
        .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
        }
    },
},

[TRAINER_CORY_4] =
{
    .trainerName = _("Cory"),
    .trainerClass = TRAINER_CLASS_SAILOR,
    .trainerPic = TRAINER_PIC_SAILOR,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 39,
        .species = SPECIES_PELIPPER,
        .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
        },
        {
        .lvl = 39,
        .species = SPECIES_MACHOKE,
        .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
        },
        {
        .lvl = 39,
        .species = SPECIES_TENTACRUEL,
        .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
        }
    },
},

[TRAINER_CORY_5] =
{
    .trainerName = _("Cory"),
    .trainerClass = TRAINER_CLASS_SAILOR,
    .trainerPic = TRAINER_PIC_SAILOR,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 42,
        .species = SPECIES_PELIPPER,
        .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
        },
        {
        .lvl = 42,
        .species = SPECIES_MACHAMP,
        .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
        },
        {
        .lvl = 42,
        .species = SPECIES_TENTACRUEL,
        .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
        }
    },
},

[TRAINER_PABLO_2] =
{
    .trainerName = _("Pablo"),
    .trainerClass = TRAINER_CLASS_TRIATHLETE,
    .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 43,
        .species = SPECIES_CRAWDAUNT,
        .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
        },
        {
        .lvl = 43,
        .species = SPECIES_STARMIE,
        .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
        }
    },
},

[TRAINER_PABLO_3] =
{
    .trainerName = _("Pablo"),
    .trainerClass = TRAINER_CLASS_TRIATHLETE,
    .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 45,
        .species = SPECIES_PELIPPER,
        .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
        },
        {
        .lvl = 45,
        .species = SPECIES_CRAWDAUNT,
        .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
        },
        {
        .lvl = 45,
        .species = SPECIES_STARMIE,
        .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
        }
    },
},

[TRAINER_PABLO_4] =
{
    .trainerName = _("Pablo"),
    .trainerClass = TRAINER_CLASS_TRIATHLETE,
    .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 47,
        .species = SPECIES_PELIPPER,
        .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
        },
        {
        .lvl = 47,
        .species = SPECIES_CRAWDAUNT,
        .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
        },
        {
        .lvl = 47,
        .species = SPECIES_STARMIE,
        .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
        }
    },
},

[TRAINER_PABLO_5] =
{
    .trainerName = _("Pablo"),
    .trainerClass = TRAINER_CLASS_TRIATHLETE,
    .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 49,
        .species = SPECIES_PELIPPER,
        .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
        },
        {
        .lvl = 49,
        .species = SPECIES_CRAWDAUNT,
        .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
        },
        {
        .lvl = 49,
        .species = SPECIES_STARMIE,
        .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
        }
    },
},

[TRAINER_KOJI_2] =
{
    .trainerName = _("Koji"),
    .trainerClass = TRAINER_CLASS_BLACK_BELT,
    .trainerPic = TRAINER_PIC_BLACK_BELT,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 44,
        .species = SPECIES_MACHOKE,
        .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
        },
        {
        .lvl = 44,
        .species = SPECIES_MEDICHAM,
        .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
        }
    },
},

[TRAINER_KOJI_3] =
{
    .trainerName = _("Koji"),
    .trainerClass = TRAINER_CLASS_BLACK_BELT,
    .trainerPic = TRAINER_PIC_BLACK_BELT,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 46,
        .species = SPECIES_MAKUHITA,
        .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
        },
        {
        .lvl = 46,
        .species = SPECIES_MACHOKE,
        .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
        },
        {
        .lvl = 46,
        .species = SPECIES_MEDICHAM,
        .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
        }
    },
},

[TRAINER_KOJI_4] =
{
    .trainerName = _("Koji"),
    .trainerClass = TRAINER_CLASS_BLACK_BELT,
    .trainerPic = TRAINER_PIC_BLACK_BELT,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 48,
        .species = SPECIES_HARIYAMA,
        .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
        },
        {
        .lvl = 48,
        .species = SPECIES_MACHOKE,
        .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
        },
        {
        .lvl = 48,
        .species = SPECIES_MEDICHAM,
        .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
        }
    },
},

[TRAINER_KOJI_5] =
{
    .trainerName = _("Koji"),
    .trainerClass = TRAINER_CLASS_BLACK_BELT,
    .trainerPic = TRAINER_PIC_BLACK_BELT,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 50,
        .species = SPECIES_HARIYAMA,
        .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
        },
        {
        .lvl = 50,
        .species = SPECIES_MACHAMP,
        .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
        },
        {
        .lvl = 50,
        .species = SPECIES_MEDICHAM,
        .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
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
        .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
        },
        {
        .lvl = 36,
        .species = SPECIES_SLAKING,
        .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
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
        .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
        },
        {
        .lvl = REMATCH_3_LEVEL_3,
        .species = SPECIES_LOUDRED,
        .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
        },
        {
        .lvl = REMATCH_3_LEVEL_3,
        .species = SPECIES_SLAKING,
        .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
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
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        },
        {
        .lvl = 42,
        .species = SPECIES_EXPLOUD,
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        },
        {
        .lvl = 42,
        .species = SPECIES_SLAKING,
        .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
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
        .iv = TRAINER_PARTY_IVS(17, 17, 17, 17, 17, 17),
        },
        {
        .lvl = 45,
        .species = SPECIES_EXPLOUD,
        .iv = TRAINER_PARTY_IVS(17, 17, 17, 17, 17, 17),
        },
        {
        .lvl = 45,
        .species = SPECIES_SLAKING,
        .iv = TRAINER_PARTY_IVS(17, 17, 17, 17, 17, 17),
        }
    },
},

[TRAINER_FERNANDO_2] =
{
    .trainerName = _("Fernando"),
    .trainerClass = TRAINER_CLASS_GUITARIST,
    .trainerPic = TRAINER_PIC_GUITARIST,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 37,
        .species = SPECIES_ELECTRODE,
        .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
        },
        {
        .lvl = 37,
        .species = SPECIES_MANECTRIC,
        .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
        },
        {
        .lvl = 37,
        .species = SPECIES_LOUDRED,
        .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
        }
    },
},

[TRAINER_FERNANDO_3] =
{
    .trainerName = _("Fernando"),
    .trainerClass = TRAINER_CLASS_GUITARIST,
    .trainerPic = TRAINER_PIC_GUITARIST,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = REMATCH_3_LEVEL_3,
        .species = SPECIES_ELECTRODE,
        .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
        },
        {
        .lvl = REMATCH_3_LEVEL_3,
        .species = SPECIES_MANECTRIC,
        .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
        },
        {
        .lvl = REMATCH_3_LEVEL_3,
        .species = SPECIES_LOUDRED,
        .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
        }
    },
},

[TRAINER_FERNANDO_4] =
{
    .trainerName = _("Fernando"),
    .trainerClass = TRAINER_CLASS_GUITARIST,
    .trainerPic = TRAINER_PIC_GUITARIST,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 41,
        .species = SPECIES_ELECTRODE,
        .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
        },
        {
        .lvl = 41,
        .species = SPECIES_MANECTRIC,
        .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
        },
        {
        .lvl = 41,
        .species = SPECIES_EXPLOUD,
        .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
        }
    },
},

[TRAINER_FERNANDO_5] =
{
    .trainerName = _("Fernando"),
    .trainerClass = TRAINER_CLASS_GUITARIST,
    .trainerPic = TRAINER_PIC_GUITARIST,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 43,
        .species = SPECIES_ELECTRODE,
        .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
        },
        {
        .lvl = 43,
        .species = SPECIES_MANECTRIC,
        .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
        },
        {
        .lvl = 43,
        .species = SPECIES_EXPLOUD,
        .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
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
        .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
        },
        {
        .lvl = 34,
        .species = SPECIES_GEODUDE,
        .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
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
        .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
        },
        {
        .lvl = REMATCH_3_LEVEL_3,
        .species = SPECIES_CAMERUPT,
        .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
        },
        {
        .lvl = REMATCH_3_LEVEL_3,
        .species = SPECIES_GRAVELER,
        .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
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
        .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
        },
        {
        .lvl = 40,
        .species = SPECIES_CAMERUPT,
        .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
        },
        {
        .lvl = 40,
        .species = SPECIES_GOLEM,
        .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
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
        .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
        },
        {
        .lvl = 42,
        .species = SPECIES_CAMERUPT,
        .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
        },
        {
        .lvl = 42,
        .species = SPECIES_GOLEM,
        .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
        }
    },
},

[TRAINER_GABRIELLE_2] =
{
    .trainerName = _("Gabrielle"),
    .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
    .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 6,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 34,
        .species = SPECIES_SKITTY,
        .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
        },
        {
        .lvl = 34,
        .species = SPECIES_MIGHTYENA,
        .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
        },
        {
        .lvl = 34,
        .species = SPECIES_ZIGZAGOON,
        .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
        },
        {
        .lvl = 34,
        .species = SPECIES_LOTAD,
        .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
        },
        {
        .lvl = 34,
        .species = SPECIES_SEEDOT,
        .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
        },
        {
        .lvl = 34,
        .species = SPECIES_TAILLOW,
        .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
        }
    },
},

[TRAINER_GABRIELLE_3] =
{
    .trainerName = _("Gabrielle"),
    .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
    .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 6,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = REMATCH_3_LEVEL_6,
        .species = SPECIES_SKITTY,
        .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
        },
        {
        .lvl = REMATCH_3_LEVEL_6,
        .species = SPECIES_MIGHTYENA,
        .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
        },
        {
        .lvl = REMATCH_3_LEVEL_6,
        .species = SPECIES_LINOONE,
        .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
        },
        {
        .lvl = REMATCH_3_LEVEL_6,
        .species = SPECIES_LOMBRE,
        .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
        },
        {
        .lvl = REMATCH_3_LEVEL_6,
        .species = SPECIES_NUZLEAF,
        .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
        },
        {
        .lvl = REMATCH_3_LEVEL_6,
        .species = SPECIES_TAILLOW,
        .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
        }
    },
},

[TRAINER_GABRIELLE_4] =
{
    .trainerName = _("Gabrielle"),
    .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
    .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 6,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 38,
        .species = SPECIES_DELCATTY,
        .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
        },
        {
        .lvl = 38,
        .species = SPECIES_MIGHTYENA,
        .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
        },
        {
        .lvl = 38,
        .species = SPECIES_LINOONE,
        .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
        },
        {
        .lvl = 38,
        .species = SPECIES_LOMBRE,
        .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
        },
        {
        .lvl = 38,
        .species = SPECIES_NUZLEAF,
        .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
        },
        {
        .lvl = 38,
        .species = SPECIES_SWELLOW,
        .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
        }
    },
},

[TRAINER_GABRIELLE_5] =
{
    .trainerName = _("Gabrielle"),
    .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
    .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 6,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 40,
        .species = SPECIES_DELCATTY,
        .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
        },
        {
        .lvl = 40,
        .species = SPECIES_MIGHTYENA,
        .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
        },
        {
        .lvl = 40,
        .species = SPECIES_LINOONE,
        .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
        },
        {
        .lvl = 40,
        .species = SPECIES_LUDICOLO,
        .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
        },
        {
        .lvl = 40,
        .species = SPECIES_SHIFTRY,
        .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
        },
        {
        .lvl = 40,
        .species = SPECIES_SWELLOW,
        .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
        }
    },
},

[TRAINER_THALIA_2] =
{
    .trainerName = _("Thalia"),
    .trainerClass = TRAINER_CLASS_BEAUTY,
    .trainerPic = TRAINER_PIC_BEAUTY,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 35,
        .species = SPECIES_WAILMER,
        .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
        },
        {
        .lvl = 35,
        .species = SPECIES_SEADRA,
        .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
        }
    },
},

[TRAINER_THALIA_3] =
{
    .trainerName = _("Thalia"),
    .trainerClass = TRAINER_CLASS_BEAUTY,
    .trainerPic = TRAINER_PIC_BEAUTY,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = REMATCH_3_LEVEL_3,
        .species = SPECIES_LUVDISC,
        .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
        },
        {
        .lvl = REMATCH_3_LEVEL_3,
        .species = SPECIES_WAILMER,
        .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
        },
        {
        .lvl = REMATCH_3_LEVEL_3,
        .species = SPECIES_SEADRA,
        .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
        }
    },
},

[TRAINER_THALIA_4] =
{
    .trainerName = _("Thalia"),
    .trainerClass = TRAINER_CLASS_BEAUTY,
    .trainerPic = TRAINER_PIC_BEAUTY,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 39,
        .species = SPECIES_LUVDISC,
        .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
        },
        {
        .lvl = 39,
        .species = SPECIES_WAILMER,
        .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
        },
        {
        .lvl = 39,
        .species = SPECIES_SEADRA,
        .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
        }
    },
},

[TRAINER_THALIA_5] =
{
    .trainerName = _("Thalia"),
    .trainerClass = TRAINER_CLASS_BEAUTY,
    .trainerPic = TRAINER_PIC_BEAUTY,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 3,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 41,
        .species = SPECIES_LUVDISC,
        .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
        },
        {
        .lvl = 41,
        .species = SPECIES_WAILORD,
        .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
        },
        {
        .lvl = 41,
        .species = SPECIES_KINGDRA,
        .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
        }
    },
},

[TRAINER_MARIELA] =
{
    .trainerName = _("Mariela"),
    .trainerClass = TRAINER_CLASS_PSYCHIC,
    .trainerPic = TRAINER_PIC_PSYCHIC_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
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
    .trainerClass = TRAINER_CLASS_PSYCHIC,
    .trainerPic = TRAINER_PIC_PSYCHIC_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
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
    .trainerClass = TRAINER_CLASS_GENTLEMAN,
    .trainerPic = TRAINER_PIC_GENTLEMAN,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_RICH,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 46,
        .species = SPECIES_WOBBUFFET,
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

[TRAINER_GRUNT_UNUSED] =
{
    .trainerName = _("Unused"),
    .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
    .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_AQUA,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 31,
        .species = SPECIES_WAILMER,
        },
        {
        .lvl = 31,
        .species = SPECIES_ZUBAT,
        }
    },
},

[TRAINER_UNUSED_1] =
{
    .trainerName = _("Unused"),
    LADY_INFO,
    .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 11,
        .species = SPECIES_ZIGZAGOON,
        .heldItem = ITEM_NUGGET,
        .moves = {MOVE_TACKLE, MOVE_TAIL_WHIP, MOVE_NONE, MOVE_NONE}
        }
    },
},

[TRAINER_UNUSED_2] =
{
    .trainerName = _("Unused"),
    TWINS_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 9,
        .species = SPECIES_PLUSLE,
        },
        {
        .lvl = 9,
        .species = SPECIES_MINUN,
        }
    },
},

[TRAINER_UNUSED_3] =
{
    .trainerName = _("Unused"),
    TWINS_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 10,
        .species = SPECIES_DUSKULL,
        .moves = {MOVE_NIGHT_SHADE, MOVE_DISABLE, MOVE_NONE, MOVE_NONE}
        },
        {
        .lvl = 10,
        .species = SPECIES_SHROOMISH,
        .moves = {MOVE_ABSORB, MOVE_LEECH_SEED, MOVE_NONE, MOVE_NONE}
        }
    },
},

[TRAINER_UNUSED_4] =
{
    .trainerName = _("Unused"),
    HIKER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 1,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 9,
        .species = SPECIES_WAILMER,
        .moves = {MOVE_SPLASH, MOVE_WATER_GUN, MOVE_NONE, MOVE_NONE}
        }
    },
},

[TRAINER_UNUSED_5] =
{
    .trainerName = _("Unused"),
    HIKER_INFO,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .partySize = 2,
    .party = (const struct TrainerMon[]) {
        {
        .lvl = 10,
        .species = SPECIES_PELIPPER,
        .moves = {MOVE_GUST, MOVE_GROWL, MOVE_NONE, MOVE_NONE}
        },
        {
        .lvl = 10,
        .species = SPECIES_POOCHYENA,
        .moves = {MOVE_BITE, MOVE_SCARY_FACE, MOVE_NONE, MOVE_NONE}
        }
    },
},
