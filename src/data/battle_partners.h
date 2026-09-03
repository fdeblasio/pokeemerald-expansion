[DIFFICULTY_NORMAL][PARTNER_NONE] =
{
    .trainerClass = TRAINER_CLASS_PKMN_TRAINER_1,
    .trainerPic = TRAINER_PIC_BRENDAN,
    .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
    .partySize = 0,
    .party = (const struct TrainerMon[])
    {
    },
},

[DIFFICULTY_NORMAL][PARTNER_STEVEN] =
{
    STEVEN_INFO,
    .trainerPic = TRAINER_PIC_STEVEN,
    .partySize = 3,
    .party = (const struct TrainerMon[])
    {
        {
        STEVEN_MAWILE(CAP_SPACE_CENTER - 2),
        },
        {
        STEVEN_AGGRON(CAP_SPACE_CENTER - 1),
        },
        {
        STEVEN_METAGROSS(CAP_SPACE_CENTER),
        .moves = {MOVE_METEOR_MASH, MOVE_ZEN_HEADBUTT, MOVE_PURSUIT, MOVE_BULLET_PUNCH},
        },
    },
},
