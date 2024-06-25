    [PARTNER_NONE] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_1,
        .trainerPic = TRAINER_BACK_PIC_BRENDAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 0,
        .party = (const struct TrainerMon[])
        {
        },
    },
    [PARTNER_STEVEN] =
    {
        .trainerName = _("Steven"),
        .trainerClass = TRAINER_CLASS_RIVAL,
        .trainerPic = TRAINER_BACK_PIC_STEVEN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
            .lvl = 57,
            .species = SPECIES_MAWILE,
            .ability = ABILITY_SHEER_FORCE,
            .nature = NATURE_ADAMANT,
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
            .ev = TRAINER_PARTY_EVS(0, 252, 6, 252, 0, 0),
            .moves = {MOVE_IRON_HEAD, MOVE_CRUNCH, MOVE_SWORDS_DANCE, MOVE_IRON_DEFENSE},
            .gender = TRAINER_MON_FEMALE,
            },
            {
            .lvl = 58,
            .species = SPECIES_AGGRON,
            .ability = ABILITY_STURDY,
            .nature = NATURE_IMPISH,
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
            .ev = TRAINER_PARTY_EVS(6, 252, 252, 0, 0, 0),
            .moves = {MOVE_IRON_HEAD, MOVE_ROCK_SLIDE, MOVE_BODY_PRESS, MOVE_HARDEN},
            .gender = TRAINER_MON_MALE,
            },
            {
            .lvl = 59,
            .species = SPECIES_METANG,
            .ability = ABILITY_CLEAR_BODY,
            .nature = NATURE_ADAMANT,
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
            .ev = TRAINER_PARTY_EVS(6, 252, 252, 0, 0, 0),
            .moves = {MOVE_BULLET_PUNCH, MOVE_ZEN_HEADBUTT, MOVE_PURSUIT, MOVE_MAGNET_RISE},
            },
        },
    },
