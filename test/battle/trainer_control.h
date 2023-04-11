    [DIFFICULTY_NORMAL][0] =
    {
        .trainerName = _("Test1"),
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_1,
        .trainerPic = TRAINER_PIC_RED,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .doubleBattle = FALSE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
                .lvl = 67,
                .species = SPECIES_WOBBUFFET,
                .ability = ABILITY_TELEPATHY,
                .nature = NATURE_HASTY,
                .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 4, 0),
                .iv = TRAINER_PARTY_IVS(25, 26, 27, 28, 29, 30),
                .moves = {MOVE_AIR_SLASH, MOVE_BARRIER, MOVE_SOLAR_BEAM, MOVE_EXPLOSION},
                .gender = TRAINER_MON_FEMALE,
                .heldItem = ITEM_ASSAULT_VEST,
                .ball = ITEM_MASTER_BALL,
                .isShiny = TRUE,
                .nickname = COMPOUND_STRING("Bubbles"),
                .friendship = 42,
                .useGimmick = GIMMICK_DYNAMAX,
                .dynamaxLevel = 5,
                .shouldDynamax = TRUE,
            },
            {
                .lvl = 5,
                .species = SPECIES_WOBBUFFET,
                .ability = ABILITY_SHADOW_TAG,
            },
            {
                .species = SPECIES_WYNAUT,
                .lvl = 5,
            },
        },
    },
#line 33
#line 40
    [DIFFICULTY_NORMAL][1] =
    {
#line 34
        .trainerName = _("Test2"),
#line 35
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_1,
#line 36
        .trainerPic = TRAINER_PIC_RED,
        .encounterMusic_gender =
#line 38
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 39
        .doubleBattle = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 42
            .species = SPECIES_MEWTWO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 44
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 43
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 45
#line 52
    [DIFFICULTY_HARD][1] =
    {
#line 46
        .trainerName = _("Test2"),
#line 47
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_1,
#line 48
        .trainerPic = TRAINER_PIC_RED,
        .encounterMusic_gender =
#line 50
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 51
        .doubleBattle = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 54
            .species = SPECIES_YVELTAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 56
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 55
            .lvl = 99,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 57
#line 64
    [DIFFICULTY_NORMAL][2] =
    {
#line 58
        .trainerName = _("Test2"),
#line 59
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_1,
#line 60
        .trainerPic = TRAINER_PIC_RED,
        .encounterMusic_gender =
#line 62
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 63
        .doubleBattle = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 66
            .species = SPECIES_MEWTWO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 68
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 67
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 69
#line 76
    [DIFFICULTY_EASY][2] =
    {
#line 70
        .trainerName = _("Test2"),
#line 71
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_1,
#line 72
        .trainerPic = TRAINER_PIC_RED,
        .encounterMusic_gender =
#line 74
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 75
        .doubleBattle = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 78
            .species = SPECIES_METAPOD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 80
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 79
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 81
#line 88
    [DIFFICULTY_HARD][2] =
    {
#line 82
        .trainerName = _("Test2"),
#line 83
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_1,
#line 84
        .trainerPic = TRAINER_PIC_RED,
        .encounterMusic_gender =
#line 86
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 87
        .doubleBattle = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 90
            .species = SPECIES_ARCEUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 92
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 91
            .lvl = 99,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
