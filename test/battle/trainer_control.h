[0] =
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
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 4, 0), //EV_SPREAD_X
        .iv = TRAINER_PARTY_IVS(25, 26, 27, 28, 29, 30), //IVS(X)
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
