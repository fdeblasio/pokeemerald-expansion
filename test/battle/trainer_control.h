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
[DIFFICULTY_NORMAL][1] =
{
    .trainerName = _("Test2"),
    .trainerClass = TRAINER_CLASS_PKMN_TRAINER_1,
    .trainerPic = TRAINER_PIC_RED,
    .encounterMusic_gender =
        TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .partySize = 1,
    .party = (const struct TrainerMon[])
    {
        {
        .species = SPECIES_MEWTWO,
        .gender = TRAINER_MON_RANDOM_GENDER,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 5,
        .nature = NATURE_HARDY,
        .dynamaxLevel = MAX_DYNAMAX_LEVEL,
        },
    },
},
[DIFFICULTY_HARD][1] =
{
    .trainerName = _("Test2"),
    .trainerClass = TRAINER_CLASS_PKMN_TRAINER_1,
    .trainerPic = TRAINER_PIC_RED,
    .encounterMusic_gender =
        TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .partySize = 1,
    .party = (const struct TrainerMon[])
    {
        {
        .species = SPECIES_YVELTAL,
        .gender = TRAINER_MON_RANDOM_GENDER,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 99,
        .nature = NATURE_HARDY,
        .dynamaxLevel = MAX_DYNAMAX_LEVEL,
        },
    },
},
[DIFFICULTY_NORMAL][2] =
{
    .trainerName = _("Test2"),
    .trainerClass = TRAINER_CLASS_PKMN_TRAINER_1,
    .trainerPic = TRAINER_PIC_RED,
    .encounterMusic_gender =
        TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .partySize = 1,
    .party = (const struct TrainerMon[])
    {
        {
        .species = SPECIES_MEWTWO,
        .gender = TRAINER_MON_RANDOM_GENDER,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 50,
        .nature = NATURE_HARDY,
        .dynamaxLevel = MAX_DYNAMAX_LEVEL,
        },
    },
},
[DIFFICULTY_EASY][2] =
{
    .trainerName = _("Test2"),
    .trainerClass = TRAINER_CLASS_PKMN_TRAINER_1,
    .trainerPic = TRAINER_PIC_RED,
    .encounterMusic_gender =
        TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .partySize = 1,
    .party = (const struct TrainerMon[])
    {
        {
        .species = SPECIES_METAPOD,
        .gender = TRAINER_MON_RANDOM_GENDER,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 1,
        .nature = NATURE_HARDY,
        .dynamaxLevel = MAX_DYNAMAX_LEVEL,
        },
    },
},
[DIFFICULTY_HARD][2] =
{
    .trainerName = _("Test2"),
    .trainerClass = TRAINER_CLASS_PKMN_TRAINER_1,
    .trainerPic = TRAINER_PIC_RED,
    .encounterMusic_gender =
        TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .partySize = 1,
    .party = (const struct TrainerMon[])
    {
        {
        .species = SPECIES_ARCEUS,
        .gender = TRAINER_MON_RANDOM_GENDER,
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 99,
        .nature = NATURE_HARDY,
        .dynamaxLevel = MAX_DYNAMAX_LEVEL,
        },
    },
},
