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
        STEVEN_MAWILE(MAXIE_SPACE_CENTER_ACE_LEVEL - 2),
        },
        {
        STEVEN_AGGRON(MAXIE_SPACE_CENTER_ACE_LEVEL - 1),
        },
        {
        STEVEN_METAGROSS(MAXIE_SPACE_CENTER_ACE_LEVEL),
        .moves = {MOVE_METEOR_MASH, MOVE_ZEN_HEADBUTT, MOVE_PURSUIT, MOVE_BULLET_PUNCH},
        },
    },
},
