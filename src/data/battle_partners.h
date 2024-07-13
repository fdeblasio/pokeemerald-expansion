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
        STEVEN_INFO,
        .trainerPic = TRAINER_BACK_PIC_STEVEN,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
            STEVEN_MAWILE(52),
            },
            {
            STEVEN_AGGRON(53),
            .moves = {MOVE_IRON_HEAD, MOVE_ROCK_SLIDE, MOVE_BODY_PRESS, MOVE_HARDEN},
            },
            {
            STEVEN_METAGROSS(54),
            .moves = {MOVE_BULLET_PUNCH, MOVE_ZEN_HEADBUTT, MOVE_PURSUIT, MOVE_MAGNET_RISE},
            },
        },
    },
