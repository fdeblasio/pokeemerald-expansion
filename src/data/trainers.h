[DIFFICULTY_NORMAL][TRAINER_NONE] =
{
    .trainerName = _(""),
    .trainerClass = TRAINER_CLASS_PKMN_TRAINER_1,
    .trainerPic = TRAINER_PIC_HIKER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .partySize = 0,
    .party = NULL,
},

[DIFFICULTY_NORMAL][TRAINER_SAWYER_1] =
{
    .trainerName = _("Sawyer"),
    .trainerClass = TRAINER_CLASS_HIKER,
    .trainerPic = TRAINER_PIC_HIKER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .party = TRAINER_PARTY(sParty_Sawyer1),
},

[DIFFICULTY_NORMAL][TRAINER_GRUNT_AQUA_HIDEOUT_1] =
{
    .trainerName = _("Grunt"),
    .trainerClass = TRAINER_CLASS_TEAM_AQUA,
    .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_GruntAquaHideout1),
},

[DIFFICULTY_NORMAL][TRAINER_GRUNT_AQUA_HIDEOUT_2] =
{
    .trainerName = _("Grunt"),
    .trainerClass = TRAINER_CLASS_TEAM_AQUA,
    .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_GruntAquaHideout2),
},

[DIFFICULTY_NORMAL][TRAINER_GRUNT_AQUA_HIDEOUT_3] =
{
    .trainerName = _("Grunt"),
    .trainerClass = TRAINER_CLASS_TEAM_AQUA,
    .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_GruntAquaHideout3),
},

[DIFFICULTY_NORMAL][TRAINER_GRUNT_AQUA_HIDEOUT_4] =
{
    .trainerName = _("Grunt"),
    .trainerClass = TRAINER_CLASS_TEAM_AQUA,
    .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_GruntAquaHideout4),
},

[DIFFICULTY_NORMAL][TRAINER_GRUNT_SEAFLOOR_CAVERN_1] =
{
    .trainerName = _("Grunt"),
    .trainerClass = TRAINER_CLASS_TEAM_AQUA,
    .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_GruntSeafloorCavern1),
},

[DIFFICULTY_NORMAL][TRAINER_GRUNT_SEAFLOOR_CAVERN_2] =
{
    .trainerName = _("Grunt"),
    .trainerClass = TRAINER_CLASS_TEAM_AQUA,
    .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_GruntSeafloorCavern2),
},

[DIFFICULTY_NORMAL][TRAINER_GRUNT_SEAFLOOR_CAVERN_3] =
{
    .trainerName = _("Grunt"),
    .trainerClass = TRAINER_CLASS_TEAM_AQUA,
    .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_GruntSeafloorCavern3),
},

[DIFFICULTY_NORMAL][TRAINER_GABRIELLE_1] =
{
    .trainerName = _("Gabrielle"),
    .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
    .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Gabrielle1),
},

[DIFFICULTY_NORMAL][TRAINER_GRUNT_PETALBURG_WOODS] =
{
    .trainerName = _("Grunt"),
    .trainerClass = TRAINER_CLASS_TEAM_AQUA,
    .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_GruntPetalburgWoods),
},

[DIFFICULTY_NORMAL][TRAINER_MARCEL] =
{
    .trainerName = _("Marcel"),
    .trainerClass = TRAINER_CLASS_COOLTRAINER,
    .trainerPic = TRAINER_PIC_COOLTRAINER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
    .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .party = TRAINER_PARTY(sParty_Marcel),
},

[DIFFICULTY_NORMAL][TRAINER_ALBERTO] =
{
    .trainerName = _("Alberto"),
    .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
    .trainerPic = TRAINER_PIC_BIRD_KEEPER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Alberto),
},

[DIFFICULTY_NORMAL][TRAINER_ED] =
{
    .trainerName = _("Ed"),
    .trainerClass = TRAINER_CLASS_COLLECTOR,
    .trainerPic = TRAINER_PIC_COLLECTOR,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Ed),
},

[DIFFICULTY_NORMAL][TRAINER_GRUNT_SEAFLOOR_CAVERN_4] =
{
    .trainerName = _("Grunt"),
    .trainerClass = TRAINER_CLASS_TEAM_AQUA,
    .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_AQUA,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_GruntSeafloorCavern4),
},

[DIFFICULTY_NORMAL][TRAINER_DECLAN] =
{
    .trainerName = _("Declan"),
    .trainerClass = TRAINER_CLASS_SWIMMER,
    .trainerPic = TRAINER_PIC_SWIMMER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Declan),
},

[DIFFICULTY_NORMAL][TRAINER_GRUNT_RUSTURF_TUNNEL] =
{
    .trainerName = _("Grunt"),
    .trainerClass = TRAINER_CLASS_TEAM_AQUA,
    .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_GruntRusturfTunnel),
},

[DIFFICULTY_NORMAL][TRAINER_GRUNT_WEATHER_INST_1] =
{
    .trainerName = _("Grunt"),
    .trainerClass = TRAINER_CLASS_TEAM_AQUA,
    .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_GruntWeatherInst1),
},

[DIFFICULTY_NORMAL][TRAINER_GRUNT_WEATHER_INST_2] =
{
    .trainerName = _("Grunt"),
    .trainerClass = TRAINER_CLASS_TEAM_AQUA,
    .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_GruntWeatherInst2),
},

[DIFFICULTY_NORMAL][TRAINER_GRUNT_WEATHER_INST_3] =
{
    .trainerName = _("Grunt"),
    .trainerClass = TRAINER_CLASS_TEAM_AQUA,
    .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_GruntWeatherInst3),
},

[DIFFICULTY_NORMAL][TRAINER_GRUNT_MUSEUM_1] =
{
    .trainerName = _("Grunt"),
    .trainerClass = TRAINER_CLASS_TEAM_AQUA,
    .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_GruntMuseum1),
},

[DIFFICULTY_NORMAL][TRAINER_GRUNT_MUSEUM_2] =
{
    .trainerName = _("Grunt"),
    .trainerClass = TRAINER_CLASS_TEAM_AQUA,
    .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_GruntMuseum2),
},

[DIFFICULTY_NORMAL][TRAINER_GRUNT_SPACE_CENTER_1] =
{
    .trainerName = _("Grunt"),
    .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
    .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_GruntSpaceCenter1),
},

[DIFFICULTY_NORMAL][TRAINER_GRUNT_MT_PYRE_1] =
{
    .trainerName = _("Grunt"),
    .trainerClass = TRAINER_CLASS_TEAM_AQUA,
    .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_GruntMtPyre1),
},

[DIFFICULTY_NORMAL][TRAINER_GRUNT_MT_PYRE_2] =
{
    .trainerName = _("Grunt"),
    .trainerClass = TRAINER_CLASS_TEAM_AQUA,
    .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_GruntMtPyre2),
},

[DIFFICULTY_NORMAL][TRAINER_GRUNT_MT_PYRE_3] =
{
    .trainerName = _("Grunt"),
    .trainerClass = TRAINER_CLASS_TEAM_AQUA,
    .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_GruntMtPyre3),
},

[DIFFICULTY_NORMAL][TRAINER_GRUNT_WEATHER_INST_4] =
{
    .trainerName = _("Grunt"),
    .trainerClass = TRAINER_CLASS_TEAM_AQUA,
    .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_AQUA,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_GruntWeatherInst4),
},

[DIFFICULTY_NORMAL][TRAINER_GRUNT_AQUA_HIDEOUT_5] =
{
    .trainerName = _("Grunt"),
    .trainerClass = TRAINER_CLASS_TEAM_AQUA,
    .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_AQUA,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_GruntAquaHideout5),
},

[DIFFICULTY_NORMAL][TRAINER_GRUNT_AQUA_HIDEOUT_6] =
{
    .trainerName = _("Grunt"),
    .trainerClass = TRAINER_CLASS_TEAM_AQUA,
    .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_AQUA,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_GruntAquaHideout6),
},

[DIFFICULTY_NORMAL][TRAINER_FREDRICK] =
{
    .trainerName = _("Fredrick"),
    .trainerClass = TRAINER_CLASS_EXPERT,
    .trainerPic = TRAINER_PIC_EXPERT_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .party = TRAINER_PARTY(sParty_Fredrick),
},

[DIFFICULTY_NORMAL][TRAINER_MATT] =
{
    .trainerName = _("Matt"),
    .trainerClass = TRAINER_CLASS_AQUA_ADMIN,
    .trainerPic = TRAINER_PIC_AQUA_ADMIN_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
    .items = {ITEM_SUPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
    .party = TRAINER_PARTY(sParty_MattAquaHideout),
},

[DIFFICULTY_NORMAL][TRAINER_ZANDER] =
{
    .trainerName = _("Zander"),
    .trainerClass = TRAINER_CLASS_BLACK_BELT,
    .trainerPic = TRAINER_PIC_BLACK_BELT,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Zander),
},

[DIFFICULTY_NORMAL][TRAINER_SHELLY_WEATHER_INSTITUTE] =
{
    .trainerName = _("Shelly"),
    .trainerClass = TRAINER_CLASS_AQUA_ADMIN,
    .trainerPic = TRAINER_PIC_AQUA_ADMIN_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_AQUA,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
    .party = TRAINER_PARTY(sParty_ShellyWeatherInstitute),
},

[DIFFICULTY_NORMAL][TRAINER_SHELLY_SEAFLOOR_CAVERN] =
{
    .trainerName = _("Shelly"),
    .trainerClass = TRAINER_CLASS_AQUA_ADMIN,
    .trainerPic = TRAINER_PIC_AQUA_ADMIN_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_AQUA,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
    .party = TRAINER_PARTY(sParty_ShellySeafloorCavern),
},

[DIFFICULTY_NORMAL][TRAINER_ARCHIE] =
{
    .trainerName = _("Archie"),
    .trainerClass = TRAINER_CLASS_AQUA_LEADER,
    .trainerPic = TRAINER_PIC_AQUA_LEADER_ARCHIE,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
    .items = {ITEM_SUPER_POTION, ITEM_SUPER_POTION, ITEM_NONE, ITEM_NONE},
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
    .party = TRAINER_PARTY(sParty_Archie),
},

[DIFFICULTY_NORMAL][TRAINER_LEAH] =
{
    .trainerName = _("Leah"),
    .trainerClass = TRAINER_CLASS_HEX_MANIAC,
    .trainerPic = TRAINER_PIC_HEX_MANIAC,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Leah),
},

[DIFFICULTY_NORMAL][TRAINER_DAISY] =
{
    .trainerName = _("Daisy"),
    .trainerClass = TRAINER_CLASS_AROMA_LADY,
    .trainerPic = TRAINER_PIC_AROMA_LADY,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Daisy),
},

[DIFFICULTY_NORMAL][TRAINER_ROSE_1] =
{
    .trainerName = _("Rose"),
    .trainerClass = TRAINER_CLASS_AROMA_LADY,
    .trainerPic = TRAINER_PIC_AROMA_LADY,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Rose1),
},

[DIFFICULTY_NORMAL][TRAINER_FELIX] =
{
    .trainerName = _("Felix"),
    .trainerClass = TRAINER_CLASS_COOLTRAINER,
    .trainerPic = TRAINER_PIC_COOLTRAINER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
    .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .party = TRAINER_PARTY(sParty_Felix),
},

[DIFFICULTY_NORMAL][TRAINER_VIOLET] =
{
    .trainerName = _("Violet"),
    .trainerClass = TRAINER_CLASS_AROMA_LADY,
    .trainerPic = TRAINER_PIC_AROMA_LADY,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Violet),
},

[DIFFICULTY_NORMAL][TRAINER_ROSE_2] =
{
    .trainerName = _("Rose"),
    .trainerClass = TRAINER_CLASS_AROMA_LADY,
    .trainerPic = TRAINER_PIC_AROMA_LADY,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Rose2),
},

[DIFFICULTY_NORMAL][TRAINER_ROSE_3] =
{
    .trainerName = _("Rose"),
    .trainerClass = TRAINER_CLASS_AROMA_LADY,
    .trainerPic = TRAINER_PIC_AROMA_LADY,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Rose3),
},

[DIFFICULTY_NORMAL][TRAINER_ROSE_4] =
{
    .trainerName = _("Rose"),
    .trainerClass = TRAINER_CLASS_AROMA_LADY,
    .trainerPic = TRAINER_PIC_AROMA_LADY,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Rose4),
},

[DIFFICULTY_NORMAL][TRAINER_ROSE_5] =
{
    .trainerName = _("Rose"),
    .trainerClass = TRAINER_CLASS_AROMA_LADY,
    .trainerPic = TRAINER_PIC_AROMA_LADY,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Rose5),
},

[DIFFICULTY_NORMAL][TRAINER_DUSTY_1] =
{
    .trainerName = _("Dusty"),
    .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
    .trainerPic = TRAINER_PIC_RUIN_MANIAC,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Dusty1),
},

[DIFFICULTY_NORMAL][TRAINER_CHIP] =
{
    .trainerName = _("Chip"),
    .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
    .trainerPic = TRAINER_PIC_RUIN_MANIAC,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Chip),
},

[DIFFICULTY_NORMAL][TRAINER_FOSTER] =
{
    .trainerName = _("Foster"),
    .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
    .trainerPic = TRAINER_PIC_RUIN_MANIAC,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Foster),
},

[DIFFICULTY_NORMAL][TRAINER_DUSTY_2] =
{
    .trainerName = _("Dusty"),
    .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
    .trainerPic = TRAINER_PIC_RUIN_MANIAC,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Dusty2),
},

[DIFFICULTY_NORMAL][TRAINER_DUSTY_3] =
{
    .trainerName = _("Dusty"),
    .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
    .trainerPic = TRAINER_PIC_RUIN_MANIAC,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Dusty3),
},

[DIFFICULTY_NORMAL][TRAINER_DUSTY_4] =
{
    .trainerName = _("Dusty"),
    .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
    .trainerPic = TRAINER_PIC_RUIN_MANIAC,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Dusty4),
},

[DIFFICULTY_NORMAL][TRAINER_DUSTY_5] =
{
    .trainerName = _("Dusty"),
    .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
    .trainerPic = TRAINER_PIC_RUIN_MANIAC,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Dusty5),
},

[DIFFICULTY_NORMAL][TRAINER_GABBY_AND_TY_1] =
{
    .trainerName = _("Gabby & Ty"),
    .trainerClass = TRAINER_CLASS_INTERVIEWER,
    .trainerPic = TRAINER_PIC_INTERVIEWER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTERVIEWER,
    .doubleBattle = TRUE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_GabbyAndTy1),
},

[DIFFICULTY_NORMAL][TRAINER_GABBY_AND_TY_2] =
{
    .trainerName = _("Gabby & Ty"),
    .trainerClass = TRAINER_CLASS_INTERVIEWER,
    .trainerPic = TRAINER_PIC_INTERVIEWER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTERVIEWER,
    .doubleBattle = TRUE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_GabbyAndTy2),
},

[DIFFICULTY_NORMAL][TRAINER_GABBY_AND_TY_3] =
{
    .trainerName = _("Gabby & Ty"),
    .trainerClass = TRAINER_CLASS_INTERVIEWER,
    .trainerPic = TRAINER_PIC_INTERVIEWER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTERVIEWER,
    .doubleBattle = TRUE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_GabbyAndTy3),
},

[DIFFICULTY_NORMAL][TRAINER_GABBY_AND_TY_4] =
{
    .trainerName = _("Gabby & Ty"),
    .trainerClass = TRAINER_CLASS_INTERVIEWER,
    .trainerPic = TRAINER_PIC_INTERVIEWER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTERVIEWER,
    .doubleBattle = TRUE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_GabbyAndTy4),
},

[DIFFICULTY_NORMAL][TRAINER_GABBY_AND_TY_5] =
{
    .trainerName = _("Gabby & Ty"),
    .trainerClass = TRAINER_CLASS_INTERVIEWER,
    .trainerPic = TRAINER_PIC_INTERVIEWER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTERVIEWER,
    .doubleBattle = TRUE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_GabbyAndTy5),
},

[DIFFICULTY_NORMAL][TRAINER_GABBY_AND_TY_6] =
{
    .trainerName = _("Gabby & Ty"),
    .trainerClass = TRAINER_CLASS_INTERVIEWER,
    .trainerPic = TRAINER_PIC_INTERVIEWER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTERVIEWER,
    .doubleBattle = TRUE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_GabbyAndTy6),
},

[DIFFICULTY_NORMAL][TRAINER_LOLA_1] =
{
    .trainerName = _("Lola"),
    .trainerClass = TRAINER_CLASS_TUBER,
    .trainerPic = TRAINER_PIC_TUBER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Lola1),
},

[DIFFICULTY_NORMAL][TRAINER_AUSTINA] =
{
    .trainerName = _("Austina"),
    .trainerClass = TRAINER_CLASS_TUBER,
    .trainerPic = TRAINER_PIC_TUBER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Austina),
},

[DIFFICULTY_NORMAL][TRAINER_GWEN] =
{
    .trainerName = _("Gwen"),
    .trainerClass = TRAINER_CLASS_TUBER,
    .trainerPic = TRAINER_PIC_TUBER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Gwen),
},

[DIFFICULTY_NORMAL][TRAINER_LOLA_2] =
{
    .trainerName = _("Lola"),
    .trainerClass = TRAINER_CLASS_TUBER,
    .trainerPic = TRAINER_PIC_TUBER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Lola2),
},

[DIFFICULTY_NORMAL][TRAINER_LOLA_3] =
{
    .trainerName = _("Lola"),
    .trainerClass = TRAINER_CLASS_TUBER,
    .trainerPic = TRAINER_PIC_TUBER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Lola3),
},

[DIFFICULTY_NORMAL][TRAINER_LOLA_4] =
{
    .trainerName = _("Lola"),
    .trainerClass = TRAINER_CLASS_TUBER,
    .trainerPic = TRAINER_PIC_TUBER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Lola4),
},

[DIFFICULTY_NORMAL][TRAINER_LOLA_5] =
{
    .trainerName = _("Lola"),
    .trainerClass = TRAINER_CLASS_TUBER,
    .trainerPic = TRAINER_PIC_TUBER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Lola5),
},

[DIFFICULTY_NORMAL][TRAINER_RICKY_1] =
{
    .trainerName = _("Ricky"),
    .trainerClass = TRAINER_CLASS_TUBER,
    .trainerPic = TRAINER_PIC_TUBER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Ricky1),
},

[DIFFICULTY_NORMAL][TRAINER_SIMON] =
{
    .trainerName = _("Simon"),
    .trainerClass = TRAINER_CLASS_TUBER,
    .trainerPic = TRAINER_PIC_TUBER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Simon),
},

[DIFFICULTY_NORMAL][TRAINER_CHARLIE] =
{
    .trainerName = _("Charlie"),
    .trainerClass = TRAINER_CLASS_TUBER,
    .trainerPic = TRAINER_PIC_TUBER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Charlie),
},

[DIFFICULTY_NORMAL][TRAINER_RICKY_2] =
{
    .trainerName = _("Ricky"),
    .trainerClass = TRAINER_CLASS_TUBER,
    .trainerPic = TRAINER_PIC_TUBER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Ricky2),
},

[DIFFICULTY_NORMAL][TRAINER_RICKY_3] =
{
    .trainerName = _("Ricky"),
    .trainerClass = TRAINER_CLASS_TUBER,
    .trainerPic = TRAINER_PIC_TUBER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Ricky3),
},

[DIFFICULTY_NORMAL][TRAINER_RICKY_4] =
{
    .trainerName = _("Ricky"),
    .trainerClass = TRAINER_CLASS_TUBER,
    .trainerPic = TRAINER_PIC_TUBER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Ricky4),
},

[DIFFICULTY_NORMAL][TRAINER_RICKY_5] =
{
    .trainerName = _("Ricky"),
    .trainerClass = TRAINER_CLASS_TUBER,
    .trainerPic = TRAINER_PIC_TUBER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Ricky5),
},

[DIFFICULTY_NORMAL][TRAINER_RANDALL] =
{
    .trainerName = _("Randall"),
    .trainerClass = TRAINER_CLASS_COOLTRAINER,
    .trainerPic = TRAINER_PIC_COOLTRAINER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
    .items = {ITEM_X_SPEED, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .party = TRAINER_PARTY(sParty_Randall),
},

[DIFFICULTY_NORMAL][TRAINER_PARKER] =
{
    .trainerName = _("Parker"),
    .trainerClass = TRAINER_CLASS_COOLTRAINER,
    .trainerPic = TRAINER_PIC_COOLTRAINER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
    .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .party = TRAINER_PARTY(sParty_Parker),
},

[DIFFICULTY_NORMAL][TRAINER_GEORGE] =
{
    .trainerName = _("George"),
    .trainerClass = TRAINER_CLASS_COOLTRAINER,
    .trainerPic = TRAINER_PIC_COOLTRAINER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
    .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .party = TRAINER_PARTY(sParty_George),
},

[DIFFICULTY_NORMAL][TRAINER_BERKE] =
{
    .trainerName = _("Berke"),
    .trainerClass = TRAINER_CLASS_COOLTRAINER,
    .trainerPic = TRAINER_PIC_COOLTRAINER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
    .items = {ITEM_DIRE_HIT, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .party = TRAINER_PARTY(sParty_Berke),
},

[DIFFICULTY_NORMAL][TRAINER_BRAXTON] =
{
    .trainerName = _("Braxton"),
    .trainerClass = TRAINER_CLASS_COOLTRAINER,
    .trainerPic = TRAINER_PIC_COOLTRAINER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
    .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .party = TRAINER_PARTY(sParty_Braxton),
},

[DIFFICULTY_NORMAL][TRAINER_VINCENT] =
{
    .trainerName = _("Vincent"),
    .trainerClass = TRAINER_CLASS_COOLTRAINER,
    .trainerPic = TRAINER_PIC_COOLTRAINER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
    .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .party = TRAINER_PARTY(sParty_Vincent),
},

[DIFFICULTY_NORMAL][TRAINER_LEROY] =
{
    .trainerName = _("Leroy"),
    .trainerClass = TRAINER_CLASS_COOLTRAINER,
    .trainerPic = TRAINER_PIC_COOLTRAINER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
    .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .party = TRAINER_PARTY(sParty_Leroy),
},

[DIFFICULTY_NORMAL][TRAINER_WILTON_1] =
{
    .trainerName = _("Wilton"),
    .trainerClass = TRAINER_CLASS_COOLTRAINER,
    .trainerPic = TRAINER_PIC_COOLTRAINER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
    .items = {ITEM_SUPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .party = TRAINER_PARTY(sParty_Wilton1),
},

[DIFFICULTY_NORMAL][TRAINER_EDGAR] =
{
    .trainerName = _("Edgar"),
    .trainerClass = TRAINER_CLASS_COOLTRAINER,
    .trainerPic = TRAINER_PIC_COOLTRAINER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
    .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .party = TRAINER_PARTY(sParty_Edgar),
},

[DIFFICULTY_NORMAL][TRAINER_ALBERT] =
{
    .trainerName = _("Albert"),
    .trainerClass = TRAINER_CLASS_COOLTRAINER,
    .trainerPic = TRAINER_PIC_COOLTRAINER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
    .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .party = TRAINER_PARTY(sParty_Albert),
},

[DIFFICULTY_NORMAL][TRAINER_SAMUEL] =
{
    .trainerName = _("Samuel"),
    .trainerClass = TRAINER_CLASS_COOLTRAINER,
    .trainerPic = TRAINER_PIC_COOLTRAINER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
    .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .party = TRAINER_PARTY(sParty_Samuel),
},

[DIFFICULTY_NORMAL][TRAINER_VITO] =
{
    .trainerName = _("Vito"),
    .trainerClass = TRAINER_CLASS_WINSTRATE,
    .trainerPic = TRAINER_PIC_COOLTRAINER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
    .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .party = TRAINER_PARTY(sParty_Vito),
},

[DIFFICULTY_NORMAL][TRAINER_OWEN] =
{
    .trainerName = _("Owen"),
    .trainerClass = TRAINER_CLASS_COOLTRAINER,
    .trainerPic = TRAINER_PIC_COOLTRAINER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
    .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .party = TRAINER_PARTY(sParty_Owen),
},

[DIFFICULTY_NORMAL][TRAINER_WILTON_2] =
{
    .trainerName = _("Wilton"),
    .trainerClass = TRAINER_CLASS_COOLTRAINER,
    .trainerPic = TRAINER_PIC_COOLTRAINER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
    .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .party = TRAINER_PARTY(sParty_Wilton2),
},

[DIFFICULTY_NORMAL][TRAINER_WILTON_3] =
{
    .trainerName = _("Wilton"),
    .trainerClass = TRAINER_CLASS_COOLTRAINER,
    .trainerPic = TRAINER_PIC_COOLTRAINER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
    .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .party = TRAINER_PARTY(sParty_Wilton3),
},

[DIFFICULTY_NORMAL][TRAINER_WILTON_4] =
{
    .trainerName = _("Wilton"),
    .trainerClass = TRAINER_CLASS_COOLTRAINER,
    .trainerPic = TRAINER_PIC_COOLTRAINER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
    .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .party = TRAINER_PARTY(sParty_Wilton4),
},

[DIFFICULTY_NORMAL][TRAINER_WILTON_5] =
{
    .trainerName = _("Wilton"),
    .trainerClass = TRAINER_CLASS_COOLTRAINER,
    .trainerPic = TRAINER_PIC_COOLTRAINER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
    .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .party = TRAINER_PARTY(sParty_Wilton5),
},

[DIFFICULTY_NORMAL][TRAINER_WARREN] =
{
    .trainerName = _("Warren"),
    .trainerClass = TRAINER_CLASS_COOLTRAINER,
    .trainerPic = TRAINER_PIC_COOLTRAINER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
    .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .party = TRAINER_PARTY(sParty_Warren),
},

[DIFFICULTY_NORMAL][TRAINER_MARY] =
{
    .trainerName = _("Mary"),
    .trainerClass = TRAINER_CLASS_COOLTRAINER,
    .trainerPic = TRAINER_PIC_COOLTRAINER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
    .items = {ITEM_X_ACCURACY, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .party = TRAINER_PARTY(sParty_Mary),
},

[DIFFICULTY_NORMAL][TRAINER_ALEXIA] =
{
    .trainerName = _("Alexia"),
    .trainerClass = TRAINER_CLASS_COOLTRAINER,
    .trainerPic = TRAINER_PIC_COOLTRAINER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
    .items = {ITEM_X_DEFENSE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .party = TRAINER_PARTY(sParty_Alexia),
},

[DIFFICULTY_NORMAL][TRAINER_JODY] =
{
    .trainerName = _("Jody"),
    .trainerClass = TRAINER_CLASS_COOLTRAINER,
    .trainerPic = TRAINER_PIC_COOLTRAINER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
    .items = {ITEM_X_ATTACK, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_SETUP_FIRST_TURN,
    .party = TRAINER_PARTY(sParty_Jody),
},

[DIFFICULTY_NORMAL][TRAINER_WENDY] =
{
    .trainerName = _("Wendy"),
    .trainerClass = TRAINER_CLASS_COOLTRAINER,
    .trainerPic = TRAINER_PIC_COOLTRAINER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
    .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_SETUP_FIRST_TURN,
    .party = TRAINER_PARTY(sParty_Wendy),
},

[DIFFICULTY_NORMAL][TRAINER_KEIRA] =
{
    .trainerName = _("Keira"),
    .trainerClass = TRAINER_CLASS_COOLTRAINER,
    .trainerPic = TRAINER_PIC_COOLTRAINER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
    .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_SETUP_FIRST_TURN,
    .party = TRAINER_PARTY(sParty_Keira),
},

[DIFFICULTY_NORMAL][TRAINER_BROOKE_1] =
{
    .trainerName = _("Brooke"),
    .trainerClass = TRAINER_CLASS_COOLTRAINER,
    .trainerPic = TRAINER_PIC_COOLTRAINER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
    .items = {ITEM_SUPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .party = TRAINER_PARTY(sParty_Brooke1),
},

[DIFFICULTY_NORMAL][TRAINER_JENNIFER] =
{
    .trainerName = _("Jennifer"),
    .trainerClass = TRAINER_CLASS_COOLTRAINER,
    .trainerPic = TRAINER_PIC_COOLTRAINER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
    .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .party = TRAINER_PARTY(sParty_Jennifer),
},

[DIFFICULTY_NORMAL][TRAINER_HOPE] =
{
    .trainerName = _("Hope"),
    .trainerClass = TRAINER_CLASS_COOLTRAINER,
    .trainerPic = TRAINER_PIC_COOLTRAINER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
    .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .party = TRAINER_PARTY(sParty_Hope),
},

[DIFFICULTY_NORMAL][TRAINER_SHANNON] =
{
    .trainerName = _("Shannon"),
    .trainerClass = TRAINER_CLASS_COOLTRAINER,
    .trainerPic = TRAINER_PIC_COOLTRAINER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
    .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .party = TRAINER_PARTY(sParty_Shannon),
},

[DIFFICULTY_NORMAL][TRAINER_MICHELLE] =
{
    .trainerName = _("Michelle"),
    .trainerClass = TRAINER_CLASS_COOLTRAINER,
    .trainerPic = TRAINER_PIC_COOLTRAINER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
    .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .party = TRAINER_PARTY(sParty_Michelle),
},

[DIFFICULTY_NORMAL][TRAINER_CAROLINE] =
{
    .trainerName = _("Caroline"),
    .trainerClass = TRAINER_CLASS_COOLTRAINER,
    .trainerPic = TRAINER_PIC_COOLTRAINER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
    .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .party = TRAINER_PARTY(sParty_Caroline),
},

[DIFFICULTY_NORMAL][TRAINER_JULIE] =
{
    .trainerName = _("Julie"),
    .trainerClass = TRAINER_CLASS_COOLTRAINER,
    .trainerPic = TRAINER_PIC_COOLTRAINER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
    .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .party = TRAINER_PARTY(sParty_Julie),
},

[DIFFICULTY_NORMAL][TRAINER_BROOKE_2] =
{
    .trainerName = _("Brooke"),
    .trainerClass = TRAINER_CLASS_COOLTRAINER,
    .trainerPic = TRAINER_PIC_COOLTRAINER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
    .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .party = TRAINER_PARTY(sParty_Brooke2),
},

[DIFFICULTY_NORMAL][TRAINER_BROOKE_3] =
{
    .trainerName = _("Brooke"),
    .trainerClass = TRAINER_CLASS_COOLTRAINER,
    .trainerPic = TRAINER_PIC_COOLTRAINER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
    .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .party = TRAINER_PARTY(sParty_Brooke3),
},

[DIFFICULTY_NORMAL][TRAINER_BROOKE_4] =
{
    .trainerName = _("Brooke"),
    .trainerClass = TRAINER_CLASS_COOLTRAINER,
    .trainerPic = TRAINER_PIC_COOLTRAINER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
    .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .party = TRAINER_PARTY(sParty_Brooke4),
},

[DIFFICULTY_NORMAL][TRAINER_BROOKE_5] =
{
    .trainerName = _("Brooke"),
    .trainerClass = TRAINER_CLASS_COOLTRAINER,
    .trainerPic = TRAINER_PIC_COOLTRAINER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
    .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .party = TRAINER_PARTY(sParty_Brooke5),
},

[DIFFICULTY_NORMAL][TRAINER_PATRICIA] =
{
    .trainerName = _("Patricia"),
    .trainerClass = TRAINER_CLASS_HEX_MANIAC,
    .trainerPic = TRAINER_PIC_HEX_MANIAC,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Patricia),
},

[DIFFICULTY_NORMAL][TRAINER_KINDRA] =
{
    .trainerName = _("Kindra"),
    .trainerClass = TRAINER_CLASS_HEX_MANIAC,
    .trainerPic = TRAINER_PIC_HEX_MANIAC,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Kindra),
},

[DIFFICULTY_NORMAL][TRAINER_TAMMY] =
{
    .trainerName = _("Tammy"),
    .trainerClass = TRAINER_CLASS_HEX_MANIAC,
    .trainerPic = TRAINER_PIC_HEX_MANIAC,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Tammy),
},

[DIFFICULTY_NORMAL][TRAINER_VALERIE_1] =
{
    .trainerName = _("Valerie"),
    .trainerClass = TRAINER_CLASS_HEX_MANIAC,
    .trainerPic = TRAINER_PIC_HEX_MANIAC,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Valerie1),
},

[DIFFICULTY_NORMAL][TRAINER_TASHA] =
{
    .trainerName = _("Tasha"),
    .trainerClass = TRAINER_CLASS_HEX_MANIAC,
    .trainerPic = TRAINER_PIC_HEX_MANIAC,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Tasha),
},

[DIFFICULTY_NORMAL][TRAINER_VALERIE_2] =
{
    .trainerName = _("Valerie"),
    .trainerClass = TRAINER_CLASS_HEX_MANIAC,
    .trainerPic = TRAINER_PIC_HEX_MANIAC,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Valerie2),
},

[DIFFICULTY_NORMAL][TRAINER_VALERIE_3] =
{
    .trainerName = _("Valerie"),
    .trainerClass = TRAINER_CLASS_HEX_MANIAC,
    .trainerPic = TRAINER_PIC_HEX_MANIAC,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Valerie3),
},

[DIFFICULTY_NORMAL][TRAINER_VALERIE_4] =
{
    .trainerName = _("Valerie"),
    .trainerClass = TRAINER_CLASS_HEX_MANIAC,
    .trainerPic = TRAINER_PIC_HEX_MANIAC,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Valerie4),
},

[DIFFICULTY_NORMAL][TRAINER_VALERIE_5] =
{
    .trainerName = _("Valerie"),
    .trainerClass = TRAINER_CLASS_HEX_MANIAC,
    .trainerPic = TRAINER_PIC_HEX_MANIAC,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Valerie5),
},

[DIFFICULTY_NORMAL][TRAINER_CINDY_1] =
{
    .trainerName = _("Cindy"),
    .trainerClass = TRAINER_CLASS_LADY,
    .trainerPic = TRAINER_PIC_LADY,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Cindy1),
},

[DIFFICULTY_NORMAL][TRAINER_DAPHNE] =
{
    .trainerName = _("Daphne"),
    .trainerClass = TRAINER_CLASS_LADY,
    .trainerPic = TRAINER_PIC_LADY,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Daphne),
},

[DIFFICULTY_NORMAL][TRAINER_COURTNEY] =
{
    .trainerName = _("Courtney"),
    .trainerClass = TRAINER_CLASS_MAGMA_ADMIN,
    .trainerPic = TRAINER_PIC_MAGMA_ADMIN_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_MAGMA,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
    .party = TRAINER_PARTY(sParty_Courtney),
},

[DIFFICULTY_NORMAL][TRAINER_UNUSED_1] =
{
    .trainerName = _("Cindy"),
    .trainerClass = TRAINER_CLASS_LADY,
    .trainerPic = TRAINER_PIC_LADY,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Unused1),
},

[DIFFICULTY_NORMAL][TRAINER_BRIANNA] =
{
    .trainerName = _("Brianna"),
    .trainerClass = TRAINER_CLASS_LADY,
    .trainerPic = TRAINER_PIC_LADY,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Brianna),
},

[DIFFICULTY_NORMAL][TRAINER_NAOMI] =
{
    .trainerName = _("Naomi"),
    .trainerClass = TRAINER_CLASS_LADY,
    .trainerPic = TRAINER_PIC_LADY,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Naomi),
},

[DIFFICULTY_NORMAL][TRAINER_CINDY_2] =
{
    .trainerName = _("Cindy"),
    .trainerClass = TRAINER_CLASS_LADY,
    .trainerPic = TRAINER_PIC_LADY,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Cindy2),
},

[DIFFICULTY_NORMAL][TRAINER_CINDY_3] =
{
    .trainerName = _("Cindy"),
    .trainerClass = TRAINER_CLASS_LADY,
    .trainerPic = TRAINER_PIC_LADY,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Cindy3),
},

[DIFFICULTY_NORMAL][TRAINER_CINDY_4] =
{
    .trainerName = _("Cindy"),
    .trainerClass = TRAINER_CLASS_LADY,
    .trainerPic = TRAINER_PIC_LADY,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Cindy4),
},

[DIFFICULTY_NORMAL][TRAINER_CINDY_5] =
{
    .trainerName = _("Cindy"),
    .trainerClass = TRAINER_CLASS_LADY,
    .trainerPic = TRAINER_PIC_LADY,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Cindy5),
},

[DIFFICULTY_NORMAL][TRAINER_MELISSA] =
{
    .trainerName = _("Melissa"),
    .trainerClass = TRAINER_CLASS_BEAUTY,
    .trainerPic = TRAINER_PIC_BEAUTY,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Melissa),
},

[DIFFICULTY_NORMAL][TRAINER_SHEILA] =
{
    .trainerName = _("Sheila"),
    .trainerClass = TRAINER_CLASS_BEAUTY,
    .trainerPic = TRAINER_PIC_BEAUTY,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Sheila),
},

[DIFFICULTY_NORMAL][TRAINER_SHIRLEY] =
{
    .trainerName = _("Shirley"),
    .trainerClass = TRAINER_CLASS_BEAUTY,
    .trainerPic = TRAINER_PIC_BEAUTY,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Shirley),
},

[DIFFICULTY_NORMAL][TRAINER_JESSICA_1] =
{
    .trainerName = _("Jessica"),
    .trainerClass = TRAINER_CLASS_BEAUTY,
    .trainerPic = TRAINER_PIC_BEAUTY,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Jessica1),
},

[DIFFICULTY_NORMAL][TRAINER_CONNIE] =
{
    .trainerName = _("Connie"),
    .trainerClass = TRAINER_CLASS_BEAUTY,
    .trainerPic = TRAINER_PIC_BEAUTY,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Connie),
},

[DIFFICULTY_NORMAL][TRAINER_BRIDGET] =
{
    .trainerName = _("Bridget"),
    .trainerClass = TRAINER_CLASS_BEAUTY,
    .trainerPic = TRAINER_PIC_BEAUTY,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Bridget),
},

[DIFFICULTY_NORMAL][TRAINER_OLIVIA] =
{
    .trainerName = _("Olivia"),
    .trainerClass = TRAINER_CLASS_BEAUTY,
    .trainerPic = TRAINER_PIC_BEAUTY,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Olivia),
},

[DIFFICULTY_NORMAL][TRAINER_TIFFANY] =
{
    .trainerName = _("Tiffany"),
    .trainerClass = TRAINER_CLASS_BEAUTY,
    .trainerPic = TRAINER_PIC_BEAUTY,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Tiffany),
},

[DIFFICULTY_NORMAL][TRAINER_JESSICA_2] =
{
    .trainerName = _("Jessica"),
    .trainerClass = TRAINER_CLASS_BEAUTY,
    .trainerPic = TRAINER_PIC_BEAUTY,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Jessica2),
},

[DIFFICULTY_NORMAL][TRAINER_JESSICA_3] =
{
    .trainerName = _("Jessica"),
    .trainerClass = TRAINER_CLASS_BEAUTY,
    .trainerPic = TRAINER_PIC_BEAUTY,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Jessica3),
},

[DIFFICULTY_NORMAL][TRAINER_JESSICA_4] =
{
    .trainerName = _("Jessica"),
    .trainerClass = TRAINER_CLASS_BEAUTY,
    .trainerPic = TRAINER_PIC_BEAUTY,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Jessica4),
},

[DIFFICULTY_NORMAL][TRAINER_JESSICA_5] =
{
    .trainerName = _("Jessica"),
    .trainerClass = TRAINER_CLASS_BEAUTY,
    .trainerPic = TRAINER_PIC_BEAUTY,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Jessica5),
},

[DIFFICULTY_NORMAL][TRAINER_WINSTON_1] =
{
    .trainerName = _("Winston"),
    .trainerClass = TRAINER_CLASS_RICH_BOY,
    .trainerPic = TRAINER_PIC_RICH_BOY,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_RICH,
    .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Winston1),
},

[DIFFICULTY_NORMAL][TRAINER_MOLLIE] =
{
    .trainerName = _("Mollie"),
    .trainerClass = TRAINER_CLASS_EXPERT,
    .trainerPic = TRAINER_PIC_EXPERT_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Mollie),
},

[DIFFICULTY_NORMAL][TRAINER_GARRET] =
{
    .trainerName = _("Garret"),
    .trainerClass = TRAINER_CLASS_RICH_BOY,
    .trainerPic = TRAINER_PIC_RICH_BOY,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_RICH,
    .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Garret),
},

[DIFFICULTY_NORMAL][TRAINER_WINSTON_2] =
{
    .trainerName = _("Winston"),
    .trainerClass = TRAINER_CLASS_RICH_BOY,
    .trainerPic = TRAINER_PIC_RICH_BOY,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_RICH,
    .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Winston2),
},

[DIFFICULTY_NORMAL][TRAINER_WINSTON_3] =
{
    .trainerName = _("Winston"),
    .trainerClass = TRAINER_CLASS_RICH_BOY,
    .trainerPic = TRAINER_PIC_RICH_BOY,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_RICH,
    .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Winston3),
},

[DIFFICULTY_NORMAL][TRAINER_WINSTON_4] =
{
    .trainerName = _("Winston"),
    .trainerClass = TRAINER_CLASS_RICH_BOY,
    .trainerPic = TRAINER_PIC_RICH_BOY,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_RICH,
    .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Winston4),
},

[DIFFICULTY_NORMAL][TRAINER_WINSTON_5] =
{
    .trainerName = _("Winston"),
    .trainerClass = TRAINER_CLASS_RICH_BOY,
    .trainerPic = TRAINER_PIC_RICH_BOY,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_RICH,
    .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Winston5),
},

[DIFFICULTY_NORMAL][TRAINER_STEVE_1] =
{
    .trainerName = _("Steve"),
    .trainerClass = TRAINER_CLASS_POKEMANIAC,
    .trainerPic = TRAINER_PIC_POKEMANIAC,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Steve1),
},

[DIFFICULTY_NORMAL][TRAINER_THALIA_1] =
{
    .trainerName = _("Thalia"),
    .trainerClass = TRAINER_CLASS_BEAUTY,
    .trainerPic = TRAINER_PIC_BEAUTY,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Thalia1),
},

[DIFFICULTY_NORMAL][TRAINER_MARK] =
{
    .trainerName = _("Mark"),
    .trainerClass = TRAINER_CLASS_POKEMANIAC,
    .trainerPic = TRAINER_PIC_POKEMANIAC,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Mark),
},

[DIFFICULTY_NORMAL][TRAINER_GRUNT_MT_CHIMNEY_1] =
{
    .trainerName = _("Grunt"),
    .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
    .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_MAGMA,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_GruntMtChimney1),
},

[DIFFICULTY_NORMAL][TRAINER_STEVE_2] =
{
    .trainerName = _("Steve"),
    .trainerClass = TRAINER_CLASS_POKEMANIAC,
    .trainerPic = TRAINER_PIC_POKEMANIAC,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Steve2),
},

[DIFFICULTY_NORMAL][TRAINER_STEVE_3] =
{
    .trainerName = _("Steve"),
    .trainerClass = TRAINER_CLASS_POKEMANIAC,
    .trainerPic = TRAINER_PIC_POKEMANIAC,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Steve3),
},

[DIFFICULTY_NORMAL][TRAINER_STEVE_4] =
{
    .trainerName = _("Steve"),
    .trainerClass = TRAINER_CLASS_POKEMANIAC,
    .trainerPic = TRAINER_PIC_POKEMANIAC,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Steve4),
},

[DIFFICULTY_NORMAL][TRAINER_STEVE_5] =
{
    .trainerName = _("Steve"),
    .trainerClass = TRAINER_CLASS_POKEMANIAC,
    .trainerPic = TRAINER_PIC_POKEMANIAC,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Steve5),
},

[DIFFICULTY_NORMAL][TRAINER_LUIS] =
{
    .trainerName = _("Luis"),
    .trainerClass = TRAINER_CLASS_SWIMMER,
    .trainerPic = TRAINER_PIC_SWIMMER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Luis),
},

[DIFFICULTY_NORMAL][TRAINER_DOMINIK] =
{
    .trainerName = _("Dominik"),
    .trainerClass = TRAINER_CLASS_SWIMMER,
    .trainerPic = TRAINER_PIC_SWIMMER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Dominik),
},

[DIFFICULTY_NORMAL][TRAINER_DOUGLAS] =
{
    .trainerName = _("Douglas"),
    .trainerClass = TRAINER_CLASS_SWIMMER,
    .trainerPic = TRAINER_PIC_SWIMMER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Douglas),
},

[DIFFICULTY_NORMAL][TRAINER_DARRIN] =
{
    .trainerName = _("Darrin"),
    .trainerClass = TRAINER_CLASS_SWIMMER,
    .trainerPic = TRAINER_PIC_SWIMMER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Darrin),
},

[DIFFICULTY_NORMAL][TRAINER_TONY_1] =
{
    .trainerName = _("Tony"),
    .trainerClass = TRAINER_CLASS_SWIMMER,
    .trainerPic = TRAINER_PIC_SWIMMER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Tony1),
},

[DIFFICULTY_NORMAL][TRAINER_JEROME] =
{
    .trainerName = _("Jerome"),
    .trainerClass = TRAINER_CLASS_SWIMMER,
    .trainerPic = TRAINER_PIC_SWIMMER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Jerome),
},

[DIFFICULTY_NORMAL][TRAINER_MATTHEW] =
{
    .trainerName = _("Matthew"),
    .trainerClass = TRAINER_CLASS_SWIMMER,
    .trainerPic = TRAINER_PIC_SWIMMER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Matthew),
},

[DIFFICULTY_NORMAL][TRAINER_DAVID] =
{
    .trainerName = _("David"),
    .trainerClass = TRAINER_CLASS_SWIMMER,
    .trainerPic = TRAINER_PIC_SWIMMER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_David),
},

[DIFFICULTY_NORMAL][TRAINER_SPENCER] =
{
    .trainerName = _("Spencer"),
    .trainerClass = TRAINER_CLASS_SWIMMER,
    .trainerPic = TRAINER_PIC_SWIMMER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Spencer),
},

[DIFFICULTY_NORMAL][TRAINER_ROLAND] =
{
    .trainerName = _("Roland"),
    .trainerClass = TRAINER_CLASS_SWIMMER,
    .trainerPic = TRAINER_PIC_SWIMMER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Roland),
},

[DIFFICULTY_NORMAL][TRAINER_NOLEN] =
{
    .trainerName = _("Nolen"),
    .trainerClass = TRAINER_CLASS_SWIMMER,
    .trainerPic = TRAINER_PIC_SWIMMER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Nolen),
},

[DIFFICULTY_NORMAL][TRAINER_STAN] =
{
    .trainerName = _("Stan"),
    .trainerClass = TRAINER_CLASS_SWIMMER,
    .trainerPic = TRAINER_PIC_SWIMMER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Stan),
},

[DIFFICULTY_NORMAL][TRAINER_BARRY] =
{
    .trainerName = _("Barry"),
    .trainerClass = TRAINER_CLASS_SWIMMER,
    .trainerPic = TRAINER_PIC_SWIMMER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Barry),
},

[DIFFICULTY_NORMAL][TRAINER_DEAN] =
{
    .trainerName = _("Dean"),
    .trainerClass = TRAINER_CLASS_SWIMMER,
    .trainerPic = TRAINER_PIC_SWIMMER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Dean),
},

[DIFFICULTY_NORMAL][TRAINER_RODNEY] =
{
    .trainerName = _("Rodney"),
    .trainerClass = TRAINER_CLASS_SWIMMER,
    .trainerPic = TRAINER_PIC_SWIMMER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Rodney),
},

[DIFFICULTY_NORMAL][TRAINER_RICHARD] =
{
    .trainerName = _("Richard"),
    .trainerClass = TRAINER_CLASS_SWIMMER,
    .trainerPic = TRAINER_PIC_SWIMMER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Richard),
},

[DIFFICULTY_NORMAL][TRAINER_HERMAN] =
{
    .trainerName = _("Herman"),
    .trainerClass = TRAINER_CLASS_SWIMMER,
    .trainerPic = TRAINER_PIC_SWIMMER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Herman),
},

[DIFFICULTY_NORMAL][TRAINER_SANTIAGO] =
{
    .trainerName = _("Santiago"),
    .trainerClass = TRAINER_CLASS_SWIMMER,
    .trainerPic = TRAINER_PIC_SWIMMER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Santiago),
},

[DIFFICULTY_NORMAL][TRAINER_GILBERT] =
{
    .trainerName = _("Gilbert"),
    .trainerClass = TRAINER_CLASS_SWIMMER,
    .trainerPic = TRAINER_PIC_SWIMMER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Gilbert),
},

[DIFFICULTY_NORMAL][TRAINER_FRANKLIN] =
{
    .trainerName = _("Franklin"),
    .trainerClass = TRAINER_CLASS_SWIMMER,
    .trainerPic = TRAINER_PIC_SWIMMER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Franklin),
},

[DIFFICULTY_NORMAL][TRAINER_KEVIN] =
{
    .trainerName = _("Kevin"),
    .trainerClass = TRAINER_CLASS_SWIMMER,
    .trainerPic = TRAINER_PIC_SWIMMER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Kevin),
},

[DIFFICULTY_NORMAL][TRAINER_JACK] =
{
    .trainerName = _("Jack"),
    .trainerClass = TRAINER_CLASS_SWIMMER,
    .trainerPic = TRAINER_PIC_SWIMMER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Jack),
},

[DIFFICULTY_NORMAL][TRAINER_DUDLEY] =
{
    .trainerName = _("Dudley"),
    .trainerClass = TRAINER_CLASS_SWIMMER,
    .trainerPic = TRAINER_PIC_SWIMMER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Dudley),
},

[DIFFICULTY_NORMAL][TRAINER_CHAD] =
{
    .trainerName = _("Chad"),
    .trainerClass = TRAINER_CLASS_SWIMMER,
    .trainerPic = TRAINER_PIC_SWIMMER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Chad),
},

[DIFFICULTY_NORMAL][TRAINER_TONY_2] =
{
    .trainerName = _("Tony"),
    .trainerClass = TRAINER_CLASS_SWIMMER,
    .trainerPic = TRAINER_PIC_SWIMMER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Tony2),
},

[DIFFICULTY_NORMAL][TRAINER_TONY_3] =
{
    .trainerName = _("Tony"),
    .trainerClass = TRAINER_CLASS_SWIMMER,
    .trainerPic = TRAINER_PIC_SWIMMER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Tony3),
},

[DIFFICULTY_NORMAL][TRAINER_TONY_4] =
{
    .trainerName = _("Tony"),
    .trainerClass = TRAINER_CLASS_SWIMMER,
    .trainerPic = TRAINER_PIC_SWIMMER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Tony4),
},

[DIFFICULTY_NORMAL][TRAINER_TONY_5] =
{
    .trainerName = _("Tony"),
    .trainerClass = TRAINER_CLASS_SWIMMER,
    .trainerPic = TRAINER_PIC_SWIMMER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Tony5),
},

[DIFFICULTY_NORMAL][TRAINER_TAKAO] =
{
    .trainerName = _("Takao"),
    .trainerClass = TRAINER_CLASS_BLACK_BELT,
    .trainerPic = TRAINER_PIC_BLACK_BELT,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Takao),
},

[DIFFICULTY_NORMAL][TRAINER_HITOSHI] =
{
    .trainerName = _("Hitoshi"),
    .trainerClass = TRAINER_CLASS_BLACK_BELT,
    .trainerPic = TRAINER_PIC_BLACK_BELT,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Hitoshi),
},

[DIFFICULTY_NORMAL][TRAINER_KIYO] =
{
    .trainerName = _("Kiyo"),
    .trainerClass = TRAINER_CLASS_BLACK_BELT,
    .trainerPic = TRAINER_PIC_BLACK_BELT,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Kiyo),
},

[DIFFICULTY_NORMAL][TRAINER_KOICHI] =
{
    .trainerName = _("Koichi"),
    .trainerClass = TRAINER_CLASS_BLACK_BELT,
    .trainerPic = TRAINER_PIC_BLACK_BELT,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Koichi),
},

[DIFFICULTY_NORMAL][TRAINER_NOB_1] =
{
    .trainerName = _("Nob"),
    .trainerClass = TRAINER_CLASS_BLACK_BELT,
    .trainerPic = TRAINER_PIC_BLACK_BELT,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Nob1),
},

[DIFFICULTY_NORMAL][TRAINER_NOB_2] =
{
    .trainerName = _("Nob"),
    .trainerClass = TRAINER_CLASS_BLACK_BELT,
    .trainerPic = TRAINER_PIC_BLACK_BELT,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Nob2),
},

[DIFFICULTY_NORMAL][TRAINER_NOB_3] =
{
    .trainerName = _("Nob"),
    .trainerClass = TRAINER_CLASS_BLACK_BELT,
    .trainerPic = TRAINER_PIC_BLACK_BELT,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Nob3),
},

[DIFFICULTY_NORMAL][TRAINER_NOB_4] =
{
    .trainerName = _("Nob"),
    .trainerClass = TRAINER_CLASS_BLACK_BELT,
    .trainerPic = TRAINER_PIC_BLACK_BELT,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Nob4),
},

[DIFFICULTY_NORMAL][TRAINER_NOB_5] =
{
    .trainerName = _("Nob"),
    .trainerClass = TRAINER_CLASS_BLACK_BELT,
    .trainerPic = TRAINER_PIC_BLACK_BELT,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Nob5),
},

[DIFFICULTY_NORMAL][TRAINER_YUJI] =
{
    .trainerName = _("Yuji"),
    .trainerClass = TRAINER_CLASS_BLACK_BELT,
    .trainerPic = TRAINER_PIC_BLACK_BELT,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Yuji),
},

[DIFFICULTY_NORMAL][TRAINER_DAISUKE] =
{
    .trainerName = _("Daisuke"),
    .trainerClass = TRAINER_CLASS_BLACK_BELT,
    .trainerPic = TRAINER_PIC_BLACK_BELT,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Daisuke),
},

[DIFFICULTY_NORMAL][TRAINER_ATSUSHI] =
{
    .trainerName = _("Atsushi"),
    .trainerClass = TRAINER_CLASS_BLACK_BELT,
    .trainerPic = TRAINER_PIC_BLACK_BELT,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Atsushi),
},

[DIFFICULTY_NORMAL][TRAINER_KIRK] =
{
    .trainerName = _("Kirk"),
    .trainerClass = TRAINER_CLASS_GUITARIST,
    .trainerPic = TRAINER_PIC_GUITARIST,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Kirk),
},

[DIFFICULTY_NORMAL][TRAINER_GRUNT_AQUA_HIDEOUT_7] =
{
    .trainerName = _("Grunt"),
    .trainerClass = TRAINER_CLASS_TEAM_AQUA,
    .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_AQUA,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_GruntAquaHideout7),
},

[DIFFICULTY_NORMAL][TRAINER_GRUNT_AQUA_HIDEOUT_8] =
{
    .trainerName = _("Grunt"),
    .trainerClass = TRAINER_CLASS_TEAM_AQUA,
    .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_GruntAquaHideout8),
},

[DIFFICULTY_NORMAL][TRAINER_SHAWN] =
{
    .trainerName = _("Shawn"),
    .trainerClass = TRAINER_CLASS_GUITARIST,
    .trainerPic = TRAINER_PIC_GUITARIST,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Shawn),
},

[DIFFICULTY_NORMAL][TRAINER_FERNANDO_1] =
{
    .trainerName = _("Fernando"),
    .trainerClass = TRAINER_CLASS_GUITARIST,
    .trainerPic = TRAINER_PIC_GUITARIST,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Fernando1),
},

[DIFFICULTY_NORMAL][TRAINER_DALTON_1] =
{
    .trainerName = _("Dalton"),
    .trainerClass = TRAINER_CLASS_GUITARIST,
    .trainerPic = TRAINER_PIC_GUITARIST,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Dalton1),
},

[DIFFICULTY_NORMAL][TRAINER_DALTON_2] =
{
    .trainerName = _("Dalton"),
    .trainerClass = TRAINER_CLASS_GUITARIST,
    .trainerPic = TRAINER_PIC_GUITARIST,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Dalton2),
},

[DIFFICULTY_NORMAL][TRAINER_DALTON_3] =
{
    .trainerName = _("Dalton"),
    .trainerClass = TRAINER_CLASS_GUITARIST,
    .trainerPic = TRAINER_PIC_GUITARIST,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Dalton3),
},

[DIFFICULTY_NORMAL][TRAINER_DALTON_4] =
{
    .trainerName = _("Dalton"),
    .trainerClass = TRAINER_CLASS_GUITARIST,
    .trainerPic = TRAINER_PIC_GUITARIST,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Dalton4),
},

[DIFFICULTY_NORMAL][TRAINER_DALTON_5] =
{
    .trainerName = _("Dalton"),
    .trainerClass = TRAINER_CLASS_GUITARIST,
    .trainerPic = TRAINER_PIC_GUITARIST,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Dalton5),
},

[DIFFICULTY_NORMAL][TRAINER_COLE] =
{
    .trainerName = _("Cole"),
    .trainerClass = TRAINER_CLASS_KINDLER,
    .trainerPic = TRAINER_PIC_KINDLER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Cole),
},

[DIFFICULTY_NORMAL][TRAINER_JEFF] =
{
    .trainerName = _("Jeff"),
    .trainerClass = TRAINER_CLASS_KINDLER,
    .trainerPic = TRAINER_PIC_KINDLER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Jeff),
},

[DIFFICULTY_NORMAL][TRAINER_AXLE] =
{
    .trainerName = _("Axle"),
    .trainerClass = TRAINER_CLASS_KINDLER,
    .trainerPic = TRAINER_PIC_KINDLER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Axle),
},

[DIFFICULTY_NORMAL][TRAINER_JACE] =
{
    .trainerName = _("Jace"),
    .trainerClass = TRAINER_CLASS_KINDLER,
    .trainerPic = TRAINER_PIC_KINDLER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Jace),
},

[DIFFICULTY_NORMAL][TRAINER_KEEGAN] =
{
    .trainerName = _("Keegan"),
    .trainerClass = TRAINER_CLASS_KINDLER,
    .trainerPic = TRAINER_PIC_KINDLER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Keegan),
},

[DIFFICULTY_NORMAL][TRAINER_BERNIE_1] =
{
    .trainerName = _("Bernie"),
    .trainerClass = TRAINER_CLASS_KINDLER,
    .trainerPic = TRAINER_PIC_KINDLER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Bernie1),
},

[DIFFICULTY_NORMAL][TRAINER_BERNIE_2] =
{
    .trainerName = _("Bernie"),
    .trainerClass = TRAINER_CLASS_KINDLER,
    .trainerPic = TRAINER_PIC_KINDLER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Bernie2),
},

[DIFFICULTY_NORMAL][TRAINER_BERNIE_3] =
{
    .trainerName = _("Bernie"),
    .trainerClass = TRAINER_CLASS_KINDLER,
    .trainerPic = TRAINER_PIC_KINDLER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Bernie3),
},

[DIFFICULTY_NORMAL][TRAINER_BERNIE_4] =
{
    .trainerName = _("Bernie"),
    .trainerClass = TRAINER_CLASS_KINDLER,
    .trainerPic = TRAINER_PIC_KINDLER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Bernie4),
},

[DIFFICULTY_NORMAL][TRAINER_BERNIE_5] =
{
    .trainerName = _("Bernie"),
    .trainerClass = TRAINER_CLASS_KINDLER,
    .trainerPic = TRAINER_PIC_KINDLER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Bernie5),
},

[DIFFICULTY_NORMAL][TRAINER_DREW] =
{
    .trainerName = _("Drew"),
    .trainerClass = TRAINER_CLASS_CAMPER,
    .trainerPic = TRAINER_PIC_CAMPER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Drew),
},

[DIFFICULTY_NORMAL][TRAINER_BEAU] =
{
    .trainerName = _("Beau"),
    .trainerClass = TRAINER_CLASS_CAMPER,
    .trainerPic = TRAINER_PIC_CAMPER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Beau),
},

[DIFFICULTY_NORMAL][TRAINER_LARRY] =
{
    .trainerName = _("Larry"),
    .trainerClass = TRAINER_CLASS_CAMPER,
    .trainerPic = TRAINER_PIC_CAMPER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Larry),
},

[DIFFICULTY_NORMAL][TRAINER_SHANE] =
{
    .trainerName = _("Shane"),
    .trainerClass = TRAINER_CLASS_CAMPER,
    .trainerPic = TRAINER_PIC_CAMPER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Shane),
},

[DIFFICULTY_NORMAL][TRAINER_JUSTIN] =
{
    .trainerName = _("Justin"),
    .trainerClass = TRAINER_CLASS_CAMPER,
    .trainerPic = TRAINER_PIC_CAMPER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Justin),
},

[DIFFICULTY_NORMAL][TRAINER_ETHAN_1] =
{
    .trainerName = _("Ethan"),
    .trainerClass = TRAINER_CLASS_CAMPER,
    .trainerPic = TRAINER_PIC_CAMPER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Ethan1),
},

[DIFFICULTY_NORMAL][TRAINER_AUTUMN] =
{
    .trainerName = _("Autumn"),
    .trainerClass = TRAINER_CLASS_PICNICKER,
    .trainerPic = TRAINER_PIC_PICNICKER,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Autumn),
},

[DIFFICULTY_NORMAL][TRAINER_TRAVIS] =
{
    .trainerName = _("Travis"),
    .trainerClass = TRAINER_CLASS_CAMPER,
    .trainerPic = TRAINER_PIC_CAMPER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Travis),
},

[DIFFICULTY_NORMAL][TRAINER_ETHAN_2] =
{
    .trainerName = _("Ethan"),
    .trainerClass = TRAINER_CLASS_CAMPER,
    .trainerPic = TRAINER_PIC_CAMPER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Ethan2),
},

[DIFFICULTY_NORMAL][TRAINER_ETHAN_3] =
{
    .trainerName = _("Ethan"),
    .trainerClass = TRAINER_CLASS_CAMPER,
    .trainerPic = TRAINER_PIC_CAMPER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Ethan3),
},

[DIFFICULTY_NORMAL][TRAINER_ETHAN_4] =
{
    .trainerName = _("Ethan"),
    .trainerClass = TRAINER_CLASS_CAMPER,
    .trainerPic = TRAINER_PIC_CAMPER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Ethan4),
},

[DIFFICULTY_NORMAL][TRAINER_ETHAN_5] =
{
    .trainerName = _("Ethan"),
    .trainerClass = TRAINER_CLASS_CAMPER,
    .trainerPic = TRAINER_PIC_CAMPER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Ethan5),
},

[DIFFICULTY_NORMAL][TRAINER_BRENT] =
{
    .trainerName = _("Brent"),
    .trainerClass = TRAINER_CLASS_BUG_MANIAC,
    .trainerPic = TRAINER_PIC_BUG_MANIAC,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Brent),
},

[DIFFICULTY_NORMAL][TRAINER_DONALD] =
{
    .trainerName = _("Donald"),
    .trainerClass = TRAINER_CLASS_BUG_MANIAC,
    .trainerPic = TRAINER_PIC_BUG_MANIAC,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Donald),
},

[DIFFICULTY_NORMAL][TRAINER_TAYLOR] =
{
    .trainerName = _("Taylor"),
    .trainerClass = TRAINER_CLASS_BUG_MANIAC,
    .trainerPic = TRAINER_PIC_BUG_MANIAC,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Taylor),
},

[DIFFICULTY_NORMAL][TRAINER_JEFFREY_1] =
{
    .trainerName = _("Jeffrey"),
    .trainerClass = TRAINER_CLASS_BUG_MANIAC,
    .trainerPic = TRAINER_PIC_BUG_MANIAC,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Jeffrey1),
},

[DIFFICULTY_NORMAL][TRAINER_DEREK] =
{
    .trainerName = _("Derek"),
    .trainerClass = TRAINER_CLASS_BUG_MANIAC,
    .trainerPic = TRAINER_PIC_BUG_MANIAC,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Derek),
},

[DIFFICULTY_NORMAL][TRAINER_JEFFREY_2] =
{
    .trainerName = _("Jeffrey"),
    .trainerClass = TRAINER_CLASS_BUG_MANIAC,
    .trainerPic = TRAINER_PIC_BUG_MANIAC,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Jeffrey2),
},

[DIFFICULTY_NORMAL][TRAINER_JEFFREY_3] =
{
    .trainerName = _("Jeffrey"),
    .trainerClass = TRAINER_CLASS_BUG_MANIAC,
    .trainerPic = TRAINER_PIC_BUG_MANIAC,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Jeffrey3),
},

[DIFFICULTY_NORMAL][TRAINER_JEFFREY_4] =
{
    .trainerName = _("Jeffrey"),
    .trainerClass = TRAINER_CLASS_BUG_MANIAC,
    .trainerPic = TRAINER_PIC_BUG_MANIAC,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Jeffrey4),
},

[DIFFICULTY_NORMAL][TRAINER_JEFFREY_5] =
{
    .trainerName = _("Jeffrey"),
    .trainerClass = TRAINER_CLASS_BUG_MANIAC,
    .trainerPic = TRAINER_PIC_BUG_MANIAC,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Jeffrey5),
},

[DIFFICULTY_NORMAL][TRAINER_EDWARD] =
{
    .trainerName = _("Edward"),
    .trainerClass = TRAINER_CLASS_PSYCHIC,
    .trainerPic = TRAINER_PIC_PSYCHIC_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Edward),
},

[DIFFICULTY_NORMAL][TRAINER_PRESTON] =
{
    .trainerName = _("Preston"),
    .trainerClass = TRAINER_CLASS_PSYCHIC,
    .trainerPic = TRAINER_PIC_PSYCHIC_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Preston),
},

[DIFFICULTY_NORMAL][TRAINER_VIRGIL] =
{
    .trainerName = _("Virgil"),
    .trainerClass = TRAINER_CLASS_PSYCHIC,
    .trainerPic = TRAINER_PIC_PSYCHIC_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Virgil),
},

[DIFFICULTY_NORMAL][TRAINER_BLAKE] =
{
    .trainerName = _("Blake"),
    .trainerClass = TRAINER_CLASS_PSYCHIC,
    .trainerPic = TRAINER_PIC_PSYCHIC_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Blake),
},

[DIFFICULTY_NORMAL][TRAINER_WILLIAM] =
{
    .trainerName = _("William"),
    .trainerClass = TRAINER_CLASS_PSYCHIC,
    .trainerPic = TRAINER_PIC_PSYCHIC_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_William),
},

[DIFFICULTY_NORMAL][TRAINER_JOSHUA] =
{
    .trainerName = _("Joshua"),
    .trainerClass = TRAINER_CLASS_PSYCHIC,
    .trainerPic = TRAINER_PIC_PSYCHIC_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Joshua),
},

[DIFFICULTY_NORMAL][TRAINER_CAMERON_1] =
{
    .trainerName = _("Cameron"),
    .trainerClass = TRAINER_CLASS_PSYCHIC,
    .trainerPic = TRAINER_PIC_PSYCHIC_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Cameron1),
},

[DIFFICULTY_NORMAL][TRAINER_CAMERON_2] =
{
    .trainerName = _("Cameron"),
    .trainerClass = TRAINER_CLASS_PSYCHIC,
    .trainerPic = TRAINER_PIC_PSYCHIC_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Cameron2),
},

[DIFFICULTY_NORMAL][TRAINER_CAMERON_3] =
{
    .trainerName = _("Cameron"),
    .trainerClass = TRAINER_CLASS_PSYCHIC,
    .trainerPic = TRAINER_PIC_PSYCHIC_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Cameron3),
},

[DIFFICULTY_NORMAL][TRAINER_CAMERON_4] =
{
    .trainerName = _("Cameron"),
    .trainerClass = TRAINER_CLASS_PSYCHIC,
    .trainerPic = TRAINER_PIC_PSYCHIC_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Cameron4),
},

[DIFFICULTY_NORMAL][TRAINER_CAMERON_5] =
{
    .trainerName = _("Cameron"),
    .trainerClass = TRAINER_CLASS_PSYCHIC,
    .trainerPic = TRAINER_PIC_PSYCHIC_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Cameron5),
},

[DIFFICULTY_NORMAL][TRAINER_JACLYN] =
{
    .trainerName = _("Jaclyn"),
    .trainerClass = TRAINER_CLASS_PSYCHIC,
    .trainerPic = TRAINER_PIC_PSYCHIC_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Jaclyn),
},

[DIFFICULTY_NORMAL][TRAINER_HANNAH] =
{
    .trainerName = _("Hannah"),
    .trainerClass = TRAINER_CLASS_PSYCHIC,
    .trainerPic = TRAINER_PIC_PSYCHIC_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Hannah),
},

[DIFFICULTY_NORMAL][TRAINER_SAMANTHA] =
{
    .trainerName = _("Samantha"),
    .trainerClass = TRAINER_CLASS_PSYCHIC,
    .trainerPic = TRAINER_PIC_PSYCHIC_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Samantha),
},

[DIFFICULTY_NORMAL][TRAINER_MAURA] =
{
    .trainerName = _("Maura"),
    .trainerClass = TRAINER_CLASS_PSYCHIC,
    .trainerPic = TRAINER_PIC_PSYCHIC_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Maura),
},

[DIFFICULTY_NORMAL][TRAINER_KAYLA] =
{
    .trainerName = _("Kayla"),
    .trainerClass = TRAINER_CLASS_PSYCHIC,
    .trainerPic = TRAINER_PIC_PSYCHIC_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Kayla),
},

[DIFFICULTY_NORMAL][TRAINER_ALEXIS] =
{
    .trainerName = _("Alexis"),
    .trainerClass = TRAINER_CLASS_PSYCHIC,
    .trainerPic = TRAINER_PIC_PSYCHIC_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Alexis),
},

[DIFFICULTY_NORMAL][TRAINER_JACKI_1] =
{
    .trainerName = _("Jacki"),
    .trainerClass = TRAINER_CLASS_PSYCHIC,
    .trainerPic = TRAINER_PIC_PSYCHIC_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Jacki1),
},

[DIFFICULTY_NORMAL][TRAINER_JACKI_2] =
{
    .trainerName = _("Jacki"),
    .trainerClass = TRAINER_CLASS_PSYCHIC,
    .trainerPic = TRAINER_PIC_PSYCHIC_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Jacki2),
},

[DIFFICULTY_NORMAL][TRAINER_JACKI_3] =
{
    .trainerName = _("Jacki"),
    .trainerClass = TRAINER_CLASS_PSYCHIC,
    .trainerPic = TRAINER_PIC_PSYCHIC_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Jacki3),
},

[DIFFICULTY_NORMAL][TRAINER_JACKI_4] =
{
    .trainerName = _("Jacki"),
    .trainerClass = TRAINER_CLASS_PSYCHIC,
    .trainerPic = TRAINER_PIC_PSYCHIC_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Jacki4),
},

[DIFFICULTY_NORMAL][TRAINER_JACKI_5] =
{
    .trainerName = _("Jacki"),
    .trainerClass = TRAINER_CLASS_PSYCHIC,
    .trainerPic = TRAINER_PIC_PSYCHIC_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Jacki5),
},

[DIFFICULTY_NORMAL][TRAINER_WALTER_1] =
{
    .trainerName = _("Walter"),
    .trainerClass = TRAINER_CLASS_GENTLEMAN,
    .trainerPic = TRAINER_PIC_GENTLEMAN,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_RICH,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Walter1),
},

[DIFFICULTY_NORMAL][TRAINER_MICAH] =
{
    .trainerName = _("Micah"),
    .trainerClass = TRAINER_CLASS_GENTLEMAN,
    .trainerPic = TRAINER_PIC_GENTLEMAN,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_RICH,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Micah),
},

[DIFFICULTY_NORMAL][TRAINER_THOMAS] =
{
    .trainerName = _("Thomas"),
    .trainerClass = TRAINER_CLASS_GENTLEMAN,
    .trainerPic = TRAINER_PIC_GENTLEMAN,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_RICH,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Thomas),
},

[DIFFICULTY_NORMAL][TRAINER_WALTER_2] =
{
    .trainerName = _("Walter"),
    .trainerClass = TRAINER_CLASS_GENTLEMAN,
    .trainerPic = TRAINER_PIC_GENTLEMAN,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_RICH,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Walter2),
},

[DIFFICULTY_NORMAL][TRAINER_WALTER_3] =
{
    .trainerName = _("Walter"),
    .trainerClass = TRAINER_CLASS_GENTLEMAN,
    .trainerPic = TRAINER_PIC_GENTLEMAN,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_RICH,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Walter3),
},

[DIFFICULTY_NORMAL][TRAINER_WALTER_4] =
{
    .trainerName = _("Walter"),
    .trainerClass = TRAINER_CLASS_GENTLEMAN,
    .trainerPic = TRAINER_PIC_GENTLEMAN,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_RICH,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Walter4),
},

[DIFFICULTY_NORMAL][TRAINER_WALTER_5] =
{
    .trainerName = _("Walter"),
    .trainerClass = TRAINER_CLASS_GENTLEMAN,
    .trainerPic = TRAINER_PIC_GENTLEMAN,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_RICH,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Walter5),
},

[DIFFICULTY_NORMAL][TRAINER_SIDNEY] =
{
    .trainerName = _("Sidney"),
    .trainerClass = TRAINER_CLASS_ELITE_FOUR,
    .trainerPic = TRAINER_PIC_ELITE_FOUR_SIDNEY,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
    .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
    .doubleBattle = FALSE,
    .mugshotEnabled = TRUE,
    .mugshotColor = MUGSHOT_COLOR_PURPLE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_SETUP_FIRST_TURN,
    .party = TRAINER_PARTY(sParty_Sidney),
},

[DIFFICULTY_NORMAL][TRAINER_PHOEBE] =
{
    .trainerName = _("Phoebe"),
    .trainerClass = TRAINER_CLASS_ELITE_FOUR,
    .trainerPic = TRAINER_PIC_ELITE_FOUR_PHOEBE,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
    .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
    .doubleBattle = FALSE,
    .mugshotEnabled = TRUE,
    .mugshotColor = MUGSHOT_COLOR_GREEN,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
    .party = TRAINER_PARTY(sParty_Phoebe),
},

[DIFFICULTY_NORMAL][TRAINER_GLACIA] =
{
    .trainerName = _("Glacia"),
    .trainerClass = TRAINER_CLASS_ELITE_FOUR,
    .trainerPic = TRAINER_PIC_ELITE_FOUR_GLACIA,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
    .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
    .doubleBattle = FALSE,
    .mugshotEnabled = TRUE,
    .mugshotColor = MUGSHOT_COLOR_PINK,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
    .party = TRAINER_PARTY(sParty_Glacia),
},

[DIFFICULTY_NORMAL][TRAINER_DRAKE] =
{
    .trainerName = _("Drake"),
    .trainerClass = TRAINER_CLASS_ELITE_FOUR,
    .trainerPic = TRAINER_PIC_ELITE_FOUR_DRAKE,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
    .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
    .doubleBattle = FALSE,
    .mugshotEnabled = TRUE,
    .mugshotColor = MUGSHOT_COLOR_BLUE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
    .party = TRAINER_PARTY(sParty_Drake),
},

[DIFFICULTY_NORMAL][TRAINER_ROXANNE_1] =
{
    .trainerName = _("Roxanne"),
    .trainerClass = TRAINER_CLASS_LEADER,
    .trainerPic = TRAINER_PIC_LEADER_ROXANNE,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .items = {ITEM_POTION, ITEM_POTION, ITEM_NONE, ITEM_NONE},
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
    .party = TRAINER_PARTY(sParty_Roxanne1),
},

[DIFFICULTY_NORMAL][TRAINER_BRAWLY_1] =
{
    .trainerName = _("Brawly"),
    .trainerClass = TRAINER_CLASS_LEADER,
    .trainerPic = TRAINER_PIC_LEADER_BRAWLY,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .items = {ITEM_SUPER_POTION, ITEM_SUPER_POTION, ITEM_NONE, ITEM_NONE},
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
    .party = TRAINER_PARTY(sParty_Brawly1),
},

[DIFFICULTY_NORMAL][TRAINER_WATTSON_1] =
{
    .trainerName = _("Wattson"),
    .trainerClass = TRAINER_CLASS_LEADER,
    .trainerPic = TRAINER_PIC_LEADER_WATTSON,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .items = {ITEM_SUPER_POTION, ITEM_SUPER_POTION, ITEM_NONE, ITEM_NONE},
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
    .party = TRAINER_PARTY(sParty_Wattson1),
},

[DIFFICULTY_NORMAL][TRAINER_FLANNERY_1] =
{
    .trainerName = _("Flannery"),
    .trainerClass = TRAINER_CLASS_LEADER,
    .trainerPic = TRAINER_PIC_LEADER_FLANNERY,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .items = {ITEM_HYPER_POTION, ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE},
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
    .party = TRAINER_PARTY(sParty_Flannery1),
},

[DIFFICULTY_NORMAL][TRAINER_NORMAN_1] =
{
    .trainerName = _("Norman"),
    .trainerClass = TRAINER_CLASS_LEADER,
    .trainerPic = TRAINER_PIC_LEADER_NORMAN,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .items = {ITEM_HYPER_POTION, ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE},
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
    .party = TRAINER_PARTY(sParty_Norman1),
},

[DIFFICULTY_NORMAL][TRAINER_WINONA_1] =
{
    .trainerName = _("Winona"),
    .trainerClass = TRAINER_CLASS_LEADER,
    .trainerPic = TRAINER_PIC_LEADER_WINONA,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .items = {ITEM_HYPER_POTION, ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE},
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
    .party = TRAINER_PARTY(sParty_Winona1),
},

[DIFFICULTY_NORMAL][TRAINER_TATE_AND_LIZA_1] =
{
    .trainerName = _("Tate&Liza"),
    .trainerClass = TRAINER_CLASS_LEADER,
    .trainerPic = TRAINER_PIC_LEADER_TATE_AND_LIZA,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .items = {ITEM_HYPER_POTION, ITEM_HYPER_POTION, ITEM_HYPER_POTION, ITEM_HYPER_POTION},
    .doubleBattle = TRUE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
    .party = TRAINER_PARTY(sParty_TateAndLiza1),
},

[DIFFICULTY_NORMAL][TRAINER_JUAN_1] =
{
    .trainerName = _("Juan"),
    .trainerClass = TRAINER_CLASS_LEADER,
    .trainerPic = TRAINER_PIC_LEADER_JUAN,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .items = {ITEM_HYPER_POTION, ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE},
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
    .party = TRAINER_PARTY(sParty_Juan1),
},

[DIFFICULTY_NORMAL][TRAINER_JERRY_1] =
{
    .trainerName = _("Jerry"),
    .trainerClass = TRAINER_CLASS_SCHOOL_KID,
    .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Jerry1),
},

[DIFFICULTY_NORMAL][TRAINER_TED] =
{
    .trainerName = _("Ted"),
    .trainerClass = TRAINER_CLASS_SCHOOL_KID,
    .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Ted),
},

[DIFFICULTY_NORMAL][TRAINER_PAUL] =
{
    .trainerName = _("Paul"),
    .trainerClass = TRAINER_CLASS_SCHOOL_KID,
    .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Paul),
},

[DIFFICULTY_NORMAL][TRAINER_JERRY_2] =
{
    .trainerName = _("Jerry"),
    .trainerClass = TRAINER_CLASS_SCHOOL_KID,
    .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Jerry2),
},

[DIFFICULTY_NORMAL][TRAINER_JERRY_3] =
{
    .trainerName = _("Jerry"),
    .trainerClass = TRAINER_CLASS_SCHOOL_KID,
    .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Jerry3),
},

[DIFFICULTY_NORMAL][TRAINER_JERRY_4] =
{
    .trainerName = _("Jerry"),
    .trainerClass = TRAINER_CLASS_SCHOOL_KID,
    .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Jerry4),
},

[DIFFICULTY_NORMAL][TRAINER_JERRY_5] =
{
    .trainerName = _("Jerry"),
    .trainerClass = TRAINER_CLASS_SCHOOL_KID,
    .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Jerry5),
},

[DIFFICULTY_NORMAL][TRAINER_KAREN_1] =
{
    .trainerName = _("Karen"),
    .trainerClass = TRAINER_CLASS_SCHOOL_KID,
    .trainerPic = TRAINER_PIC_SCHOOL_KID_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Karen1),
},

[DIFFICULTY_NORMAL][TRAINER_GEORGIA] =
{
    .trainerName = _("Georgia"),
    .trainerClass = TRAINER_CLASS_SCHOOL_KID,
    .trainerPic = TRAINER_PIC_SCHOOL_KID_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Georgia),
},

[DIFFICULTY_NORMAL][TRAINER_KAREN_2] =
{
    .trainerName = _("Karen"),
    .trainerClass = TRAINER_CLASS_SCHOOL_KID,
    .trainerPic = TRAINER_PIC_SCHOOL_KID_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Karen2),
},

[DIFFICULTY_NORMAL][TRAINER_KAREN_3] =
{
    .trainerName = _("Karen"),
    .trainerClass = TRAINER_CLASS_SCHOOL_KID,
    .trainerPic = TRAINER_PIC_SCHOOL_KID_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Karen3),
},

[DIFFICULTY_NORMAL][TRAINER_KAREN_4] =
{
    .trainerName = _("Karen"),
    .trainerClass = TRAINER_CLASS_SCHOOL_KID,
    .trainerPic = TRAINER_PIC_SCHOOL_KID_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Karen4),
},

[DIFFICULTY_NORMAL][TRAINER_KAREN_5] =
{
    .trainerName = _("Karen"),
    .trainerClass = TRAINER_CLASS_SCHOOL_KID,
    .trainerPic = TRAINER_PIC_SCHOOL_KID_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Karen5),
},

[DIFFICULTY_NORMAL][TRAINER_KATE_AND_JOY] =
{
    .trainerName = _("Kate & Joy"),
    .trainerClass = TRAINER_CLASS_SR_AND_JR,
    .trainerPic = TRAINER_PIC_SR_AND_JR,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
    .doubleBattle = TRUE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_KateAndJoy),
},

[DIFFICULTY_NORMAL][TRAINER_ANNA_AND_MEG_1] =
{
    .trainerName = _("Anna & Meg"),
    .trainerClass = TRAINER_CLASS_SR_AND_JR,
    .trainerPic = TRAINER_PIC_SR_AND_JR,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
    .doubleBattle = TRUE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_AnnaAndMeg1),
},

[DIFFICULTY_NORMAL][TRAINER_ANNA_AND_MEG_2] =
{
    .trainerName = _("Anna & Meg"),
    .trainerClass = TRAINER_CLASS_SR_AND_JR,
    .trainerPic = TRAINER_PIC_SR_AND_JR,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
    .doubleBattle = TRUE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_AnnaAndMeg2),
},

[DIFFICULTY_NORMAL][TRAINER_ANNA_AND_MEG_3] =
{
    .trainerName = _("Anna & Meg"),
    .trainerClass = TRAINER_CLASS_SR_AND_JR,
    .trainerPic = TRAINER_PIC_SR_AND_JR,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
    .doubleBattle = TRUE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_AnnaAndMeg3),
},

[DIFFICULTY_NORMAL][TRAINER_ANNA_AND_MEG_4] =
{
    .trainerName = _("Anna & Meg"),
    .trainerClass = TRAINER_CLASS_SR_AND_JR,
    .trainerPic = TRAINER_PIC_SR_AND_JR,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
    .doubleBattle = TRUE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_AnnaAndMeg4),
},

[DIFFICULTY_NORMAL][TRAINER_ANNA_AND_MEG_5] =
{
    .trainerName = _("Anna & Meg"),
    .trainerClass = TRAINER_CLASS_SR_AND_JR,
    .trainerPic = TRAINER_PIC_SR_AND_JR,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
    .doubleBattle = TRUE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_AnnaAndMeg5),
},

[DIFFICULTY_NORMAL][TRAINER_VICTOR] =
{
    .trainerName = _("Victor"),
    .trainerClass = TRAINER_CLASS_WINSTRATE,
    .trainerPic = TRAINER_PIC_POKEFAN_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Victor),
},

[DIFFICULTY_NORMAL][TRAINER_MIGUEL_1] =
{
    .trainerName = _("Miguel"),
    .trainerClass = TRAINER_CLASS_POKEFAN,
    .trainerPic = TRAINER_PIC_POKEFAN_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Miguel1),
},

[DIFFICULTY_NORMAL][TRAINER_COLTON] =
{
    .trainerName = _("Colton"),
    .trainerClass = TRAINER_CLASS_POKEFAN,
    .trainerPic = TRAINER_PIC_POKEFAN_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Colton),
},

[DIFFICULTY_NORMAL][TRAINER_MIGUEL_2] =
{
    .trainerName = _("Miguel"),
    .trainerClass = TRAINER_CLASS_POKEFAN,
    .trainerPic = TRAINER_PIC_POKEFAN_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Miguel2),
},

[DIFFICULTY_NORMAL][TRAINER_MIGUEL_3] =
{
    .trainerName = _("Miguel"),
    .trainerClass = TRAINER_CLASS_POKEFAN,
    .trainerPic = TRAINER_PIC_POKEFAN_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Miguel3),
},

[DIFFICULTY_NORMAL][TRAINER_MIGUEL_4] =
{
    .trainerName = _("Miguel"),
    .trainerClass = TRAINER_CLASS_POKEFAN,
    .trainerPic = TRAINER_PIC_POKEFAN_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Miguel4),
},

[DIFFICULTY_NORMAL][TRAINER_MIGUEL_5] =
{
    .trainerName = _("Miguel"),
    .trainerClass = TRAINER_CLASS_POKEFAN,
    .trainerPic = TRAINER_PIC_POKEFAN_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Miguel5),
},

[DIFFICULTY_NORMAL][TRAINER_VICTORIA] =
{
    .trainerName = _("Victoria"),
    .trainerClass = TRAINER_CLASS_WINSTRATE,
    .trainerPic = TRAINER_PIC_POKEFAN_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_TWINS,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
    .party = TRAINER_PARTY(sParty_Victoria),
},

[DIFFICULTY_NORMAL][TRAINER_VANESSA] =
{
    .trainerName = _("Vanessa"),
    .trainerClass = TRAINER_CLASS_POKEFAN,
    .trainerPic = TRAINER_PIC_POKEFAN_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_TWINS,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Vanessa),
},

[DIFFICULTY_NORMAL][TRAINER_BETHANY] =
{
    .trainerName = _("Bethany"),
    .trainerClass = TRAINER_CLASS_POKEFAN,
    .trainerPic = TRAINER_PIC_POKEFAN_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_TWINS,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Bethany),
},

[DIFFICULTY_NORMAL][TRAINER_ISABEL_1] =
{
    .trainerName = _("Isabel"),
    .trainerClass = TRAINER_CLASS_POKEFAN,
    .trainerPic = TRAINER_PIC_POKEFAN_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_TWINS,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Isabel1),
},

[DIFFICULTY_NORMAL][TRAINER_ISABEL_2] =
{
    .trainerName = _("Isabel"),
    .trainerClass = TRAINER_CLASS_POKEFAN,
    .trainerPic = TRAINER_PIC_POKEFAN_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_TWINS,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Isabel2),
},

[DIFFICULTY_NORMAL][TRAINER_ISABEL_3] =
{
    .trainerName = _("Isabel"),
    .trainerClass = TRAINER_CLASS_POKEFAN,
    .trainerPic = TRAINER_PIC_POKEFAN_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_TWINS,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Isabel3),
},

[DIFFICULTY_NORMAL][TRAINER_ISABEL_4] =
{
    .trainerName = _("Isabel"),
    .trainerClass = TRAINER_CLASS_POKEFAN,
    .trainerPic = TRAINER_PIC_POKEFAN_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_TWINS,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Isabel4),
},

[DIFFICULTY_NORMAL][TRAINER_ISABEL_5] =
{
    .trainerName = _("Isabel"),
    .trainerClass = TRAINER_CLASS_POKEFAN,
    .trainerPic = TRAINER_PIC_POKEFAN_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_TWINS,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Isabel5),
},

[DIFFICULTY_NORMAL][TRAINER_TIMOTHY_1] =
{
    .trainerName = _("Timothy"),
    .trainerClass = TRAINER_CLASS_EXPERT,
    .trainerPic = TRAINER_PIC_EXPERT_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .party = TRAINER_PARTY(sParty_Timothy1),
},

[DIFFICULTY_NORMAL][TRAINER_TIMOTHY_2] =
{
    .trainerName = _("Timothy"),
    .trainerClass = TRAINER_CLASS_EXPERT,
    .trainerPic = TRAINER_PIC_EXPERT_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .party = TRAINER_PARTY(sParty_Timothy2),
},

[DIFFICULTY_NORMAL][TRAINER_TIMOTHY_3] =
{
    .trainerName = _("Timothy"),
    .trainerClass = TRAINER_CLASS_EXPERT,
    .trainerPic = TRAINER_PIC_EXPERT_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .party = TRAINER_PARTY(sParty_Timothy3),
},

[DIFFICULTY_NORMAL][TRAINER_TIMOTHY_4] =
{
    .trainerName = _("Timothy"),
    .trainerClass = TRAINER_CLASS_EXPERT,
    .trainerPic = TRAINER_PIC_EXPERT_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .party = TRAINER_PARTY(sParty_Timothy4),
},

[DIFFICULTY_NORMAL][TRAINER_TIMOTHY_5] =
{
    .trainerName = _("Timothy"),
    .trainerClass = TRAINER_CLASS_EXPERT,
    .trainerPic = TRAINER_PIC_EXPERT_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .party = TRAINER_PARTY(sParty_Timothy5),
},

[DIFFICULTY_NORMAL][TRAINER_VICKY] =
{
    .trainerName = _("Vicky"),
    .trainerClass = TRAINER_CLASS_WINSTRATE,
    .trainerPic = TRAINER_PIC_EXPERT_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .party = TRAINER_PARTY(sParty_Vicky),
},

[DIFFICULTY_NORMAL][TRAINER_SHELBY_1] =
{
    .trainerName = _("Shelby"),
    .trainerClass = TRAINER_CLASS_EXPERT,
    .trainerPic = TRAINER_PIC_EXPERT_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .party = TRAINER_PARTY(sParty_Shelby1),
},

[DIFFICULTY_NORMAL][TRAINER_SHELBY_2] =
{
    .trainerName = _("Shelby"),
    .trainerClass = TRAINER_CLASS_EXPERT,
    .trainerPic = TRAINER_PIC_EXPERT_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .party = TRAINER_PARTY(sParty_Shelby2),
},

[DIFFICULTY_NORMAL][TRAINER_SHELBY_3] =
{
    .trainerName = _("Shelby"),
    .trainerClass = TRAINER_CLASS_EXPERT,
    .trainerPic = TRAINER_PIC_EXPERT_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .party = TRAINER_PARTY(sParty_Shelby3),
},

[DIFFICULTY_NORMAL][TRAINER_SHELBY_4] =
{
    .trainerName = _("Shelby"),
    .trainerClass = TRAINER_CLASS_EXPERT,
    .trainerPic = TRAINER_PIC_EXPERT_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .party = TRAINER_PARTY(sParty_Shelby4),
},

[DIFFICULTY_NORMAL][TRAINER_SHELBY_5] =
{
    .trainerName = _("Shelby"),
    .trainerClass = TRAINER_CLASS_EXPERT,
    .trainerPic = TRAINER_PIC_EXPERT_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .party = TRAINER_PARTY(sParty_Shelby5),
},

[DIFFICULTY_NORMAL][TRAINER_CALVIN_1] =
{
    .trainerName = _("Calvin"),
    .trainerClass = TRAINER_CLASS_YOUNGSTER,
    .trainerPic = TRAINER_PIC_YOUNGSTER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Calvin1),
},

[DIFFICULTY_NORMAL][TRAINER_BILLY] =
{
    .trainerName = _("Billy"),
    .trainerClass = TRAINER_CLASS_YOUNGSTER,
    .trainerPic = TRAINER_PIC_YOUNGSTER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Billy),
},

[DIFFICULTY_NORMAL][TRAINER_JOSH] =
{
    .trainerName = _("Josh"),
    .trainerClass = TRAINER_CLASS_YOUNGSTER,
    .trainerPic = TRAINER_PIC_YOUNGSTER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Josh),
},

[DIFFICULTY_NORMAL][TRAINER_TOMMY] =
{
    .trainerName = _("Tommy"),
    .trainerClass = TRAINER_CLASS_YOUNGSTER,
    .trainerPic = TRAINER_PIC_YOUNGSTER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Tommy),
},

[DIFFICULTY_NORMAL][TRAINER_JOEY] =
{
    .trainerName = _("Joey"),
    .trainerClass = TRAINER_CLASS_YOUNGSTER,
    .trainerPic = TRAINER_PIC_YOUNGSTER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Joey),
},

[DIFFICULTY_NORMAL][TRAINER_BEN] =
{
    .trainerName = _("Ben"),
    .trainerClass = TRAINER_CLASS_YOUNGSTER,
    .trainerPic = TRAINER_PIC_YOUNGSTER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Ben),
},

[DIFFICULTY_NORMAL][TRAINER_QUINCY] =
{
    .trainerName = _("Quincy"),
    .trainerClass = TRAINER_CLASS_COOLTRAINER,
    .trainerPic = TRAINER_PIC_COOLTRAINER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
    .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .party = TRAINER_PARTY(sParty_Quincy),
},

[DIFFICULTY_NORMAL][TRAINER_KATELYNN] =
{
    .trainerName = _("Katelynn"),
    .trainerClass = TRAINER_CLASS_COOLTRAINER,
    .trainerPic = TRAINER_PIC_COOLTRAINER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
    .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .party = TRAINER_PARTY(sParty_Katelynn),
},

[DIFFICULTY_NORMAL][TRAINER_JAYLEN] =
{
    .trainerName = _("Jaylen"),
    .trainerClass = TRAINER_CLASS_YOUNGSTER,
    .trainerPic = TRAINER_PIC_YOUNGSTER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Jaylen),
},

[DIFFICULTY_NORMAL][TRAINER_DILLON] =
{
    .trainerName = _("Dillon"),
    .trainerClass = TRAINER_CLASS_YOUNGSTER,
    .trainerPic = TRAINER_PIC_YOUNGSTER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Dillon),
},

[DIFFICULTY_NORMAL][TRAINER_CALVIN_2] =
{
    .trainerName = _("Calvin"),
    .trainerClass = TRAINER_CLASS_YOUNGSTER,
    .trainerPic = TRAINER_PIC_YOUNGSTER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Calvin2),
},

[DIFFICULTY_NORMAL][TRAINER_CALVIN_3] =
{
    .trainerName = _("Calvin"),
    .trainerClass = TRAINER_CLASS_YOUNGSTER,
    .trainerPic = TRAINER_PIC_YOUNGSTER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Calvin3),
},

[DIFFICULTY_NORMAL][TRAINER_CALVIN_4] =
{
    .trainerName = _("Calvin"),
    .trainerClass = TRAINER_CLASS_YOUNGSTER,
    .trainerPic = TRAINER_PIC_YOUNGSTER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Calvin4),
},

[DIFFICULTY_NORMAL][TRAINER_CALVIN_5] =
{
    .trainerName = _("Calvin"),
    .trainerClass = TRAINER_CLASS_YOUNGSTER,
    .trainerPic = TRAINER_PIC_YOUNGSTER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Calvin5),
},

[DIFFICULTY_NORMAL][TRAINER_EDDIE] =
{
    .trainerName = _("Eddie"),
    .trainerClass = TRAINER_CLASS_YOUNGSTER,
    .trainerPic = TRAINER_PIC_YOUNGSTER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Eddie),
},

[DIFFICULTY_NORMAL][TRAINER_ALLEN] =
{
    .trainerName = _("Allen"),
    .trainerClass = TRAINER_CLASS_YOUNGSTER,
    .trainerPic = TRAINER_PIC_YOUNGSTER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Allen),
},

[DIFFICULTY_NORMAL][TRAINER_TIMMY] =
{
    .trainerName = _("Timmy"),
    .trainerClass = TRAINER_CLASS_YOUNGSTER,
    .trainerPic = TRAINER_PIC_YOUNGSTER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Timmy),
},

[DIFFICULTY_NORMAL][TRAINER_WALLACE] =
{
    .trainerName = _("Wallace"),
    .trainerClass = TRAINER_CLASS_CHAMPION,
    .trainerPic = TRAINER_PIC_CHAMPION_WALLACE,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE},
    .doubleBattle = FALSE,
    .mugshotEnabled = TRUE,
    .mugshotColor = MUGSHOT_COLOR_YELLOW,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
    .party = TRAINER_PARTY(sParty_Wallace),
},

[DIFFICULTY_NORMAL][TRAINER_ANDREW] =
{
    .trainerName = _("Andrew"),
    .trainerClass = TRAINER_CLASS_FISHERMAN,
    .trainerPic = TRAINER_PIC_FISHERMAN,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Andrew),
},

[DIFFICULTY_NORMAL][TRAINER_IVAN] =
{
    .trainerName = _("Ivan"),
    .trainerClass = TRAINER_CLASS_FISHERMAN,
    .trainerPic = TRAINER_PIC_FISHERMAN,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Ivan),
},

[DIFFICULTY_NORMAL][TRAINER_CLAUDE] =
{
    .trainerName = _("Claude"),
    .trainerClass = TRAINER_CLASS_FISHERMAN,
    .trainerPic = TRAINER_PIC_FISHERMAN,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Claude),
},

[DIFFICULTY_NORMAL][TRAINER_ELLIOT_1] =
{
    .trainerName = _("Elliot"),
    .trainerClass = TRAINER_CLASS_FISHERMAN,
    .trainerPic = TRAINER_PIC_FISHERMAN,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Elliot1),
},

[DIFFICULTY_NORMAL][TRAINER_NED] =
{
    .trainerName = _("Ned"),
    .trainerClass = TRAINER_CLASS_FISHERMAN,
    .trainerPic = TRAINER_PIC_FISHERMAN,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Ned),
},

[DIFFICULTY_NORMAL][TRAINER_DALE] =
{
    .trainerName = _("Dale"),
    .trainerClass = TRAINER_CLASS_FISHERMAN,
    .trainerPic = TRAINER_PIC_FISHERMAN,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Dale),
},

[DIFFICULTY_NORMAL][TRAINER_NOLAN] =
{
    .trainerName = _("Nolan"),
    .trainerClass = TRAINER_CLASS_FISHERMAN,
    .trainerPic = TRAINER_PIC_FISHERMAN,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Nolan),
},

[DIFFICULTY_NORMAL][TRAINER_BARNY] =
{
    .trainerName = _("Barny"),
    .trainerClass = TRAINER_CLASS_FISHERMAN,
    .trainerPic = TRAINER_PIC_FISHERMAN,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Barny),
},

[DIFFICULTY_NORMAL][TRAINER_WADE] =
{
    .trainerName = _("Wade"),
    .trainerClass = TRAINER_CLASS_FISHERMAN,
    .trainerPic = TRAINER_PIC_FISHERMAN,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Wade),
},

[DIFFICULTY_NORMAL][TRAINER_CARTER] =
{
    .trainerName = _("Carter"),
    .trainerClass = TRAINER_CLASS_FISHERMAN,
    .trainerPic = TRAINER_PIC_FISHERMAN,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Carter),
},

[DIFFICULTY_NORMAL][TRAINER_ELLIOT_2] =
{
    .trainerName = _("Elliot"),
    .trainerClass = TRAINER_CLASS_FISHERMAN,
    .trainerPic = TRAINER_PIC_FISHERMAN,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Elliot2),
},

[DIFFICULTY_NORMAL][TRAINER_ELLIOT_3] =
{
    .trainerName = _("Elliot"),
    .trainerClass = TRAINER_CLASS_FISHERMAN,
    .trainerPic = TRAINER_PIC_FISHERMAN,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Elliot3),
},

[DIFFICULTY_NORMAL][TRAINER_ELLIOT_4] =
{
    .trainerName = _("Elliot"),
    .trainerClass = TRAINER_CLASS_FISHERMAN,
    .trainerPic = TRAINER_PIC_FISHERMAN,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Elliot4),
},

[DIFFICULTY_NORMAL][TRAINER_ELLIOT_5] =
{
    .trainerName = _("Elliot"),
    .trainerClass = TRAINER_CLASS_FISHERMAN,
    .trainerPic = TRAINER_PIC_FISHERMAN,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
    .party = TRAINER_PARTY(sParty_Elliot5),
},

[DIFFICULTY_NORMAL][TRAINER_RONALD] =
{
    .trainerName = _("Ronald"),
    .trainerClass = TRAINER_CLASS_FISHERMAN,
    .trainerPic = TRAINER_PIC_FISHERMAN,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Ronald),
},

[DIFFICULTY_NORMAL][TRAINER_JACOB] =
{
    .trainerName = _("Jacob"),
    .trainerClass = TRAINER_CLASS_TRIATHLETE,
    .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Jacob),
},

[DIFFICULTY_NORMAL][TRAINER_ANTHONY] =
{
    .trainerName = _("Anthony"),
    .trainerClass = TRAINER_CLASS_TRIATHLETE,
    .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Anthony),
},

[DIFFICULTY_NORMAL][TRAINER_BENJAMIN_1] =
{
    .trainerName = _("Benjamin"),
    .trainerClass = TRAINER_CLASS_TRIATHLETE,
    .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Benjamin1),
},

[DIFFICULTY_NORMAL][TRAINER_BENJAMIN_2] =
{
    .trainerName = _("Benjamin"),
    .trainerClass = TRAINER_CLASS_TRIATHLETE,
    .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Benjamin2),
},

[DIFFICULTY_NORMAL][TRAINER_BENJAMIN_3] =
{
    .trainerName = _("Benjamin"),
    .trainerClass = TRAINER_CLASS_TRIATHLETE,
    .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Benjamin3),
},

[DIFFICULTY_NORMAL][TRAINER_BENJAMIN_4] =
{
    .trainerName = _("Benjamin"),
    .trainerClass = TRAINER_CLASS_TRIATHLETE,
    .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Benjamin4),
},

[DIFFICULTY_NORMAL][TRAINER_BENJAMIN_5] =
{
    .trainerName = _("Benjamin"),
    .trainerClass = TRAINER_CLASS_TRIATHLETE,
    .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Benjamin5),
},

[DIFFICULTY_NORMAL][TRAINER_ABIGAIL_1] =
{
    .trainerName = _("Abigail"),
    .trainerClass = TRAINER_CLASS_TRIATHLETE,
    .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Abigail1),
},

[DIFFICULTY_NORMAL][TRAINER_JASMINE] =
{
    .trainerName = _("Jasmine"),
    .trainerClass = TRAINER_CLASS_TRIATHLETE,
    .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Jasmine),
},

[DIFFICULTY_NORMAL][TRAINER_ABIGAIL_2] =
{
    .trainerName = _("Abigail"),
    .trainerClass = TRAINER_CLASS_TRIATHLETE,
    .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Abigail2),
},

[DIFFICULTY_NORMAL][TRAINER_ABIGAIL_3] =
{
    .trainerName = _("Abigail"),
    .trainerClass = TRAINER_CLASS_TRIATHLETE,
    .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Abigail3),
},

[DIFFICULTY_NORMAL][TRAINER_ABIGAIL_4] =
{
    .trainerName = _("Abigail"),
    .trainerClass = TRAINER_CLASS_TRIATHLETE,
    .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Abigail4),
},

[DIFFICULTY_NORMAL][TRAINER_ABIGAIL_5] =
{
    .trainerName = _("Abigail"),
    .trainerClass = TRAINER_CLASS_TRIATHLETE,
    .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Abigail5),
},

[DIFFICULTY_NORMAL][TRAINER_DYLAN_1] =
{
    .trainerName = _("Dylan"),
    .trainerClass = TRAINER_CLASS_TRIATHLETE,
    .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Dylan1),
},

[DIFFICULTY_NORMAL][TRAINER_DYLAN_2] =
{
    .trainerName = _("Dylan"),
    .trainerClass = TRAINER_CLASS_TRIATHLETE,
    .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Dylan2),
},

[DIFFICULTY_NORMAL][TRAINER_DYLAN_3] =
{
    .trainerName = _("Dylan"),
    .trainerClass = TRAINER_CLASS_TRIATHLETE,
    .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Dylan3),
},

[DIFFICULTY_NORMAL][TRAINER_DYLAN_4] =
{
    .trainerName = _("Dylan"),
    .trainerClass = TRAINER_CLASS_TRIATHLETE,
    .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Dylan4),
},

[DIFFICULTY_NORMAL][TRAINER_DYLAN_5] =
{
    .trainerName = _("Dylan"),
    .trainerClass = TRAINER_CLASS_TRIATHLETE,
    .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Dylan5),
},

[DIFFICULTY_NORMAL][TRAINER_MARIA_1] =
{
    .trainerName = _("Maria"),
    .trainerClass = TRAINER_CLASS_TRIATHLETE,
    .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Maria1),
},

[DIFFICULTY_NORMAL][TRAINER_MARIA_2] =
{
    .trainerName = _("Maria"),
    .trainerClass = TRAINER_CLASS_TRIATHLETE,
    .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Maria2),
},

[DIFFICULTY_NORMAL][TRAINER_MARIA_3] =
{
    .trainerName = _("Maria"),
    .trainerClass = TRAINER_CLASS_TRIATHLETE,
    .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Maria3),
},

[DIFFICULTY_NORMAL][TRAINER_MARIA_4] =
{
    .trainerName = _("Maria"),
    .trainerClass = TRAINER_CLASS_TRIATHLETE,
    .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Maria4),
},

[DIFFICULTY_NORMAL][TRAINER_MARIA_5] =
{
    .trainerName = _("Maria"),
    .trainerClass = TRAINER_CLASS_TRIATHLETE,
    .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Maria5),
},

[DIFFICULTY_NORMAL][TRAINER_CAMDEN] =
{
    .trainerName = _("Camden"),
    .trainerClass = TRAINER_CLASS_TRIATHLETE,
    .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Camden),
},

[DIFFICULTY_NORMAL][TRAINER_DEMETRIUS] =
{
    .trainerName = _("Demetrius"),
    .trainerClass = TRAINER_CLASS_YOUNGSTER,
    .trainerPic = TRAINER_PIC_YOUNGSTER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Demetrius),
},

[DIFFICULTY_NORMAL][TRAINER_ISAIAH_1] =
{
    .trainerName = _("Isaiah"),
    .trainerClass = TRAINER_CLASS_TRIATHLETE,
    .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Isaiah1),
},

[DIFFICULTY_NORMAL][TRAINER_PABLO_1] =
{
    .trainerName = _("Pablo"),
    .trainerClass = TRAINER_CLASS_TRIATHLETE,
    .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Pablo1),
},

[DIFFICULTY_NORMAL][TRAINER_CHASE] =
{
    .trainerName = _("Chase"),
    .trainerClass = TRAINER_CLASS_TRIATHLETE,
    .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Chase),
},

[DIFFICULTY_NORMAL][TRAINER_ISAIAH_2] =
{
    .trainerName = _("Isaiah"),
    .trainerClass = TRAINER_CLASS_TRIATHLETE,
    .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Isaiah2),
},

[DIFFICULTY_NORMAL][TRAINER_ISAIAH_3] =
{
    .trainerName = _("Isaiah"),
    .trainerClass = TRAINER_CLASS_TRIATHLETE,
    .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Isaiah3),
},

[DIFFICULTY_NORMAL][TRAINER_ISAIAH_4] =
{
    .trainerName = _("Isaiah"),
    .trainerClass = TRAINER_CLASS_TRIATHLETE,
    .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Isaiah4),
},

[DIFFICULTY_NORMAL][TRAINER_ISAIAH_5] =
{
    .trainerName = _("Isaiah"),
    .trainerClass = TRAINER_CLASS_TRIATHLETE,
    .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Isaiah5),
},

[DIFFICULTY_NORMAL][TRAINER_ISOBEL] =
{
    .trainerName = _("Isobel"),
    .trainerClass = TRAINER_CLASS_TRIATHLETE,
    .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Isobel),
},

[DIFFICULTY_NORMAL][TRAINER_DONNY] =
{
    .trainerName = _("Donny"),
    .trainerClass = TRAINER_CLASS_TRIATHLETE,
    .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Donny),
},

[DIFFICULTY_NORMAL][TRAINER_TALIA] =
{
    .trainerName = _("Talia"),
    .trainerClass = TRAINER_CLASS_TRIATHLETE,
    .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Talia),
},

[DIFFICULTY_NORMAL][TRAINER_KATELYN_1] =
{
    .trainerName = _("Katelyn"),
    .trainerClass = TRAINER_CLASS_TRIATHLETE,
    .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Katelyn1),
},

[DIFFICULTY_NORMAL][TRAINER_ALLISON] =
{
    .trainerName = _("Allison"),
    .trainerClass = TRAINER_CLASS_TRIATHLETE,
    .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Allison),
},

[DIFFICULTY_NORMAL][TRAINER_KATELYN_2] =
{
    .trainerName = _("Katelyn"),
    .trainerClass = TRAINER_CLASS_TRIATHLETE,
    .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Katelyn2),
},

[DIFFICULTY_NORMAL][TRAINER_KATELYN_3] =
{
    .trainerName = _("Katelyn"),
    .trainerClass = TRAINER_CLASS_TRIATHLETE,
    .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Katelyn3),
},

[DIFFICULTY_NORMAL][TRAINER_KATELYN_4] =
{
    .trainerName = _("Katelyn"),
    .trainerClass = TRAINER_CLASS_TRIATHLETE,
    .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Katelyn4),
},

[DIFFICULTY_NORMAL][TRAINER_KATELYN_5] =
{
    .trainerName = _("Katelyn"),
    .trainerClass = TRAINER_CLASS_TRIATHLETE,
    .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Katelyn5),
},

[DIFFICULTY_NORMAL][TRAINER_NICOLAS_1] =
{
    .trainerName = _("Nicolas"),
    .trainerClass = TRAINER_CLASS_DRAGON_TAMER,
    .trainerPic = TRAINER_PIC_DRAGON_TAMER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Nicolas1),
},

[DIFFICULTY_NORMAL][TRAINER_NICOLAS_2] =
{
    .trainerName = _("Nicolas"),
    .trainerClass = TRAINER_CLASS_DRAGON_TAMER,
    .trainerPic = TRAINER_PIC_DRAGON_TAMER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Nicolas2),
},

[DIFFICULTY_NORMAL][TRAINER_NICOLAS_3] =
{
    .trainerName = _("Nicolas"),
    .trainerClass = TRAINER_CLASS_DRAGON_TAMER,
    .trainerPic = TRAINER_PIC_DRAGON_TAMER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Nicolas3),
},

[DIFFICULTY_NORMAL][TRAINER_NICOLAS_4] =
{
    .trainerName = _("Nicolas"),
    .trainerClass = TRAINER_CLASS_DRAGON_TAMER,
    .trainerPic = TRAINER_PIC_DRAGON_TAMER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Nicolas4),
},

[DIFFICULTY_NORMAL][TRAINER_NICOLAS_5] =
{
    .trainerName = _("Nicolas"),
    .trainerClass = TRAINER_CLASS_DRAGON_TAMER,
    .trainerPic = TRAINER_PIC_DRAGON_TAMER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Nicolas5),
},

[DIFFICULTY_NORMAL][TRAINER_AARON] =
{
    .trainerName = _("Aaron"),
    .trainerClass = TRAINER_CLASS_DRAGON_TAMER,
    .trainerPic = TRAINER_PIC_DRAGON_TAMER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Aaron),
},

[DIFFICULTY_NORMAL][TRAINER_PERRY] =
{
    .trainerName = _("Perry"),
    .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
    .trainerPic = TRAINER_PIC_BIRD_KEEPER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Perry),
},

[DIFFICULTY_NORMAL][TRAINER_HUGH] =
{
    .trainerName = _("Hugh"),
    .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
    .trainerPic = TRAINER_PIC_BIRD_KEEPER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Hugh),
},

[DIFFICULTY_NORMAL][TRAINER_PHIL] =
{
    .trainerName = _("Phil"),
    .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
    .trainerPic = TRAINER_PIC_BIRD_KEEPER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Phil),
},

[DIFFICULTY_NORMAL][TRAINER_JARED] =
{
    .trainerName = _("Jared"),
    .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
    .trainerPic = TRAINER_PIC_BIRD_KEEPER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Jared),
},

[DIFFICULTY_NORMAL][TRAINER_HUMBERTO] =
{
    .trainerName = _("Humberto"),
    .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
    .trainerPic = TRAINER_PIC_BIRD_KEEPER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Humberto),
},

[DIFFICULTY_NORMAL][TRAINER_PRESLEY] =
{
    .trainerName = _("Presley"),
    .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
    .trainerPic = TRAINER_PIC_BIRD_KEEPER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Presley),
},

[DIFFICULTY_NORMAL][TRAINER_EDWARDO] =
{
    .trainerName = _("Edwardo"),
    .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
    .trainerPic = TRAINER_PIC_BIRD_KEEPER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Edwardo),
},

[DIFFICULTY_NORMAL][TRAINER_COLIN] =
{
    .trainerName = _("Colin"),
    .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
    .trainerPic = TRAINER_PIC_BIRD_KEEPER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Colin),
},

[DIFFICULTY_NORMAL][TRAINER_ROBERT_1] =
{
    .trainerName = _("Robert"),
    .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
    .trainerPic = TRAINER_PIC_BIRD_KEEPER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Robert1),
},

[DIFFICULTY_NORMAL][TRAINER_BENNY] =
{
    .trainerName = _("Benny"),
    .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
    .trainerPic = TRAINER_PIC_BIRD_KEEPER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Benny),
},

[DIFFICULTY_NORMAL][TRAINER_CHESTER] =
{
    .trainerName = _("Chester"),
    .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
    .trainerPic = TRAINER_PIC_BIRD_KEEPER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Chester),
},

[DIFFICULTY_NORMAL][TRAINER_ROBERT_2] =
{
    .trainerName = _("Robert"),
    .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
    .trainerPic = TRAINER_PIC_BIRD_KEEPER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Robert2),
},

[DIFFICULTY_NORMAL][TRAINER_ROBERT_3] =
{
    .trainerName = _("Robert"),
    .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
    .trainerPic = TRAINER_PIC_BIRD_KEEPER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Robert3),
},

[DIFFICULTY_NORMAL][TRAINER_ROBERT_4] =
{
    .trainerName = _("Robert"),
    .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
    .trainerPic = TRAINER_PIC_BIRD_KEEPER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Robert4),
},

[DIFFICULTY_NORMAL][TRAINER_ROBERT_5] =
{
    .trainerName = _("Robert"),
    .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
    .trainerPic = TRAINER_PIC_BIRD_KEEPER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Robert5),
},

[DIFFICULTY_NORMAL][TRAINER_ALEX] =
{
    .trainerName = _("Alex"),
    .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
    .trainerPic = TRAINER_PIC_BIRD_KEEPER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Alex),
},

[DIFFICULTY_NORMAL][TRAINER_BECK] =
{
    .trainerName = _("Beck"),
    .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
    .trainerPic = TRAINER_PIC_BIRD_KEEPER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Beck),
},

[DIFFICULTY_NORMAL][TRAINER_YASU] =
{
    .trainerName = _("Yasu"),
    .trainerClass = TRAINER_CLASS_NINJA_BOY,
    .trainerPic = TRAINER_PIC_NINJA_BOY,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
    .party = TRAINER_PARTY(sParty_Yasu),
},

[DIFFICULTY_NORMAL][TRAINER_TAKASHI] =
{
    .trainerName = _("Takashi"),
    .trainerClass = TRAINER_CLASS_NINJA_BOY,
    .trainerPic = TRAINER_PIC_NINJA_BOY,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
    .party = TRAINER_PARTY(sParty_Takashi),
},

[DIFFICULTY_NORMAL][TRAINER_DIANNE] =
{
    .trainerName = _("Dianne"),
    .trainerClass = TRAINER_CLASS_COOLTRAINER,
    .trainerPic = TRAINER_PIC_COOLTRAINER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
    .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .doubleBattle = FALSE,
    .party = TRAINER_PARTY(sParty_Dianne),
},

[DIFFICULTY_NORMAL][TRAINER_JANI] =
{
    .trainerName = _("Jani"),
    .trainerClass = TRAINER_CLASS_TUBER,
    .trainerPic = TRAINER_PIC_TUBER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
    .doubleBattle = FALSE,
    .party = TRAINER_PARTY(sParty_Jani),
},

[DIFFICULTY_NORMAL][TRAINER_LAO_1] =
{
    .trainerName = _("Lao"),
    .trainerClass = TRAINER_CLASS_NINJA_BOY,
    .trainerPic = TRAINER_PIC_NINJA_BOY,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
    .doubleBattle = FALSE,
    .party = TRAINER_PARTY(sParty_Lao1),
},

[DIFFICULTY_NORMAL][TRAINER_LUNG] =
{
    .trainerName = _("Lung"),
    .trainerClass = TRAINER_CLASS_NINJA_BOY,
    .trainerPic = TRAINER_PIC_NINJA_BOY,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
    .doubleBattle = FALSE,
    .party = TRAINER_PARTY(sParty_Lung),
},

[DIFFICULTY_NORMAL][TRAINER_LAO_2] =
{
    .trainerName = _("Lao"),
    .trainerClass = TRAINER_CLASS_NINJA_BOY,
    .trainerPic = TRAINER_PIC_NINJA_BOY,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
    .doubleBattle = FALSE,
    .party = TRAINER_PARTY(sParty_Lao2),
},

[DIFFICULTY_NORMAL][TRAINER_LAO_3] =
{
    .trainerName = _("Lao"),
    .trainerClass = TRAINER_CLASS_NINJA_BOY,
    .trainerPic = TRAINER_PIC_NINJA_BOY,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
    .doubleBattle = FALSE,
    .party = TRAINER_PARTY(sParty_Lao3),
},

[DIFFICULTY_NORMAL][TRAINER_LAO_4] =
{
    .trainerName = _("Lao"),
    .trainerClass = TRAINER_CLASS_NINJA_BOY,
    .trainerPic = TRAINER_PIC_NINJA_BOY,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
    .doubleBattle = FALSE,
    .party = TRAINER_PARTY(sParty_Lao4),
},

[DIFFICULTY_NORMAL][TRAINER_LAO_5] =
{
    .trainerName = _("Lao"),
    .trainerClass = TRAINER_CLASS_NINJA_BOY,
    .trainerPic = TRAINER_PIC_NINJA_BOY,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
    .doubleBattle = FALSE,
    .party = TRAINER_PARTY(sParty_Lao5),
},

[DIFFICULTY_NORMAL][TRAINER_JOCELYN] =
{
    .trainerName = _("Jocelyn"),
    .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
    .trainerPic = TRAINER_PIC_BATTLE_GIRL,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Jocelyn),
},

[DIFFICULTY_NORMAL][TRAINER_LAURA] =
{
    .trainerName = _("Laura"),
    .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
    .trainerPic = TRAINER_PIC_BATTLE_GIRL,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Laura),
},

[DIFFICULTY_NORMAL][TRAINER_CYNDY_1] =
{
    .trainerName = _("Cyndy"),
    .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
    .trainerPic = TRAINER_PIC_BATTLE_GIRL,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Cyndy1),
},

[DIFFICULTY_NORMAL][TRAINER_CORA] =
{
    .trainerName = _("Cora"),
    .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
    .trainerPic = TRAINER_PIC_BATTLE_GIRL,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Cora),
},

[DIFFICULTY_NORMAL][TRAINER_PAULA] =
{
    .trainerName = _("Paula"),
    .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
    .trainerPic = TRAINER_PIC_BATTLE_GIRL,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Paula),
},

[DIFFICULTY_NORMAL][TRAINER_CYNDY_2] =
{
    .trainerName = _("Cyndy"),
    .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
    .trainerPic = TRAINER_PIC_BATTLE_GIRL,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Cyndy2),
},

[DIFFICULTY_NORMAL][TRAINER_CYNDY_3] =
{
    .trainerName = _("Cyndy"),
    .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
    .trainerPic = TRAINER_PIC_BATTLE_GIRL,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Cyndy3),
},

[DIFFICULTY_NORMAL][TRAINER_CYNDY_4] =
{
    .trainerName = _("Cyndy"),
    .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
    .trainerPic = TRAINER_PIC_BATTLE_GIRL,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Cyndy4),
},

[DIFFICULTY_NORMAL][TRAINER_CYNDY_5] =
{
    .trainerName = _("Cyndy"),
    .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
    .trainerPic = TRAINER_PIC_BATTLE_GIRL,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Cyndy5),
},

[DIFFICULTY_NORMAL][TRAINER_MADELINE_1] =
{
    .trainerName = _("Madeline"),
    .trainerClass = TRAINER_CLASS_PARASOL_LADY,
    .trainerPic = TRAINER_PIC_PARASOL_LADY,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Madeline1),
},

[DIFFICULTY_NORMAL][TRAINER_CLARISSA] =
{
    .trainerName = _("Clarissa"),
    .trainerClass = TRAINER_CLASS_PARASOL_LADY,
    .trainerPic = TRAINER_PIC_PARASOL_LADY,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Clarissa),
},

[DIFFICULTY_NORMAL][TRAINER_ANGELICA] =
{
    .trainerName = _("Angelica"),
    .trainerClass = TRAINER_CLASS_PARASOL_LADY,
    .trainerPic = TRAINER_PIC_PARASOL_LADY,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Angelica),
},

[DIFFICULTY_NORMAL][TRAINER_MADELINE_2] =
{
    .trainerName = _("Madeline"),
    .trainerClass = TRAINER_CLASS_PARASOL_LADY,
    .trainerPic = TRAINER_PIC_PARASOL_LADY,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Madeline2),
},

[DIFFICULTY_NORMAL][TRAINER_MADELINE_3] =
{
    .trainerName = _("Madeline"),
    .trainerClass = TRAINER_CLASS_PARASOL_LADY,
    .trainerPic = TRAINER_PIC_PARASOL_LADY,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Madeline3),
},

[DIFFICULTY_NORMAL][TRAINER_MADELINE_4] =
{
    .trainerName = _("Madeline"),
    .trainerClass = TRAINER_CLASS_PARASOL_LADY,
    .trainerPic = TRAINER_PIC_PARASOL_LADY,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Madeline4),
},

[DIFFICULTY_NORMAL][TRAINER_MADELINE_5] =
{
    .trainerName = _("Madeline"),
    .trainerClass = TRAINER_CLASS_PARASOL_LADY,
    .trainerPic = TRAINER_PIC_PARASOL_LADY,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Madeline5),
},

[DIFFICULTY_NORMAL][TRAINER_BEVERLY] =
{
    .trainerName = _("Beverly"),
    .trainerClass = TRAINER_CLASS_SWIMMER,
    .trainerPic = TRAINER_PIC_SWIMMER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Beverly),
},

[DIFFICULTY_NORMAL][TRAINER_IMANI] =
{
    .trainerName = _("Imani"),
    .trainerClass = TRAINER_CLASS_SWIMMER,
    .trainerPic = TRAINER_PIC_SWIMMER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Imani),
},

[DIFFICULTY_NORMAL][TRAINER_KYLA] =
{
    .trainerName = _("Kyla"),
    .trainerClass = TRAINER_CLASS_SWIMMER,
    .trainerPic = TRAINER_PIC_SWIMMER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Kyla),
},

[DIFFICULTY_NORMAL][TRAINER_DENISE] =
{
    .trainerName = _("Denise"),
    .trainerClass = TRAINER_CLASS_SWIMMER,
    .trainerPic = TRAINER_PIC_SWIMMER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Denise),
},

[DIFFICULTY_NORMAL][TRAINER_BETH] =
{
    .trainerName = _("Beth"),
    .trainerClass = TRAINER_CLASS_SWIMMER,
    .trainerPic = TRAINER_PIC_SWIMMER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Beth),
},

[DIFFICULTY_NORMAL][TRAINER_TARA] =
{
    .trainerName = _("Tara"),
    .trainerClass = TRAINER_CLASS_SWIMMER,
    .trainerPic = TRAINER_PIC_SWIMMER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Tara),
},

[DIFFICULTY_NORMAL][TRAINER_MISSY] =
{
    .trainerName = _("Missy"),
    .trainerClass = TRAINER_CLASS_SWIMMER,
    .trainerPic = TRAINER_PIC_SWIMMER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Missy),
},

[DIFFICULTY_NORMAL][TRAINER_ALICE] =
{
    .trainerName = _("Alice"),
    .trainerClass = TRAINER_CLASS_SWIMMER,
    .trainerPic = TRAINER_PIC_SWIMMER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Alice),
},

[DIFFICULTY_NORMAL][TRAINER_JENNY_1] =
{
    .trainerName = _("Jenny"),
    .trainerClass = TRAINER_CLASS_SWIMMER,
    .trainerPic = TRAINER_PIC_SWIMMER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Jenny1),
},

[DIFFICULTY_NORMAL][TRAINER_GRACE] =
{
    .trainerName = _("Grace"),
    .trainerClass = TRAINER_CLASS_SWIMMER,
    .trainerPic = TRAINER_PIC_SWIMMER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Grace),
},

[DIFFICULTY_NORMAL][TRAINER_TANYA] =
{
    .trainerName = _("Tanya"),
    .trainerClass = TRAINER_CLASS_SWIMMER,
    .trainerPic = TRAINER_PIC_SWIMMER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Tanya),
},

[DIFFICULTY_NORMAL][TRAINER_SHARON] =
{
    .trainerName = _("Sharon"),
    .trainerClass = TRAINER_CLASS_SWIMMER,
    .trainerPic = TRAINER_PIC_SWIMMER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Sharon),
},

[DIFFICULTY_NORMAL][TRAINER_NIKKI] =
{
    .trainerName = _("Nikki"),
    .trainerClass = TRAINER_CLASS_SWIMMER,
    .trainerPic = TRAINER_PIC_SWIMMER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Nikki),
},

[DIFFICULTY_NORMAL][TRAINER_BRENDA] =
{
    .trainerName = _("Brenda"),
    .trainerClass = TRAINER_CLASS_SWIMMER,
    .trainerPic = TRAINER_PIC_SWIMMER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Brenda),
},

[DIFFICULTY_NORMAL][TRAINER_KATIE] =
{
    .trainerName = _("Katie"),
    .trainerClass = TRAINER_CLASS_SWIMMER,
    .trainerPic = TRAINER_PIC_SWIMMER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Katie),
},

[DIFFICULTY_NORMAL][TRAINER_SUSIE] =
{
    .trainerName = _("Susie"),
    .trainerClass = TRAINER_CLASS_SWIMMER,
    .trainerPic = TRAINER_PIC_SWIMMER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Susie),
},

[DIFFICULTY_NORMAL][TRAINER_KARA] =
{
    .trainerName = _("Kara"),
    .trainerClass = TRAINER_CLASS_SWIMMER,
    .trainerPic = TRAINER_PIC_SWIMMER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Kara),
},

[DIFFICULTY_NORMAL][TRAINER_DANA] =
{
    .trainerName = _("Dana"),
    .trainerClass = TRAINER_CLASS_SWIMMER,
    .trainerPic = TRAINER_PIC_SWIMMER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Dana),
},

[DIFFICULTY_NORMAL][TRAINER_SIENNA] =
{
    .trainerName = _("Sienna"),
    .trainerClass = TRAINER_CLASS_SWIMMER,
    .trainerPic = TRAINER_PIC_SWIMMER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Sienna),
},

[DIFFICULTY_NORMAL][TRAINER_DEBRA] =
{
    .trainerName = _("Debra"),
    .trainerClass = TRAINER_CLASS_SWIMMER,
    .trainerPic = TRAINER_PIC_SWIMMER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Debra),
},

[DIFFICULTY_NORMAL][TRAINER_LINDA] =
{
    .trainerName = _("Linda"),
    .trainerClass = TRAINER_CLASS_SWIMMER,
    .trainerPic = TRAINER_PIC_SWIMMER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Linda),
},

[DIFFICULTY_NORMAL][TRAINER_KAYLEE] =
{
    .trainerName = _("Kaylee"),
    .trainerClass = TRAINER_CLASS_SWIMMER,
    .trainerPic = TRAINER_PIC_SWIMMER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Kaylee),
},

[DIFFICULTY_NORMAL][TRAINER_LAUREL] =
{
    .trainerName = _("Laurel"),
    .trainerClass = TRAINER_CLASS_SWIMMER,
    .trainerPic = TRAINER_PIC_SWIMMER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Laurel),
},

[DIFFICULTY_NORMAL][TRAINER_CARLEE] =
{
    .trainerName = _("Carlee"),
    .trainerClass = TRAINER_CLASS_SWIMMER,
    .trainerPic = TRAINER_PIC_SWIMMER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Carlee),
},

[DIFFICULTY_NORMAL][TRAINER_JENNY_2] =
{
    .trainerName = _("Jenny"),
    .trainerClass = TRAINER_CLASS_SWIMMER,
    .trainerPic = TRAINER_PIC_SWIMMER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Jenny2),
},

[DIFFICULTY_NORMAL][TRAINER_JENNY_3] =
{
    .trainerName = _("Jenny"),
    .trainerClass = TRAINER_CLASS_SWIMMER,
    .trainerPic = TRAINER_PIC_SWIMMER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Jenny3),
},

[DIFFICULTY_NORMAL][TRAINER_JENNY_4] =
{
    .trainerName = _("Jenny"),
    .trainerClass = TRAINER_CLASS_SWIMMER,
    .trainerPic = TRAINER_PIC_SWIMMER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Jenny4),
},

[DIFFICULTY_NORMAL][TRAINER_JENNY_5] =
{
    .trainerName = _("Jenny"),
    .trainerClass = TRAINER_CLASS_SWIMMER,
    .trainerPic = TRAINER_PIC_SWIMMER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Jenny5),
},

[DIFFICULTY_NORMAL][TRAINER_HEIDI] =
{
    .trainerName = _("Heidi"),
    .trainerClass = TRAINER_CLASS_PICNICKER,
    .trainerPic = TRAINER_PIC_PICNICKER,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Heidi),
},

[DIFFICULTY_NORMAL][TRAINER_BECKY] =
{
    .trainerName = _("Becky"),
    .trainerClass = TRAINER_CLASS_PICNICKER,
    .trainerPic = TRAINER_PIC_PICNICKER,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Becky),
},

[DIFFICULTY_NORMAL][TRAINER_CAROL] =
{
    .trainerName = _("Carol"),
    .trainerClass = TRAINER_CLASS_PICNICKER,
    .trainerPic = TRAINER_PIC_PICNICKER,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Carol),
},

[DIFFICULTY_NORMAL][TRAINER_NANCY] =
{
    .trainerName = _("Nancy"),
    .trainerClass = TRAINER_CLASS_PICNICKER,
    .trainerPic = TRAINER_PIC_PICNICKER,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Nancy),
},

[DIFFICULTY_NORMAL][TRAINER_MARTHA] =
{
    .trainerName = _("Martha"),
    .trainerClass = TRAINER_CLASS_PICNICKER,
    .trainerPic = TRAINER_PIC_PICNICKER,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Martha),
},

[DIFFICULTY_NORMAL][TRAINER_DIANA_1] =
{
    .trainerName = _("Diana"),
    .trainerClass = TRAINER_CLASS_PICNICKER,
    .trainerPic = TRAINER_PIC_PICNICKER,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Diana1),
},

[DIFFICULTY_NORMAL][TRAINER_CEDRIC] =
{
    .trainerName = _("Cedric"),
    .trainerClass = TRAINER_CLASS_PSYCHIC,
    .trainerPic = TRAINER_PIC_PSYCHIC_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Cedric),
},

[DIFFICULTY_NORMAL][TRAINER_IRENE] =
{
    .trainerName = _("Irene"),
    .trainerClass = TRAINER_CLASS_PICNICKER,
    .trainerPic = TRAINER_PIC_PICNICKER,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Irene),
},

[DIFFICULTY_NORMAL][TRAINER_DIANA_2] =
{
    .trainerName = _("Diana"),
    .trainerClass = TRAINER_CLASS_PICNICKER,
    .trainerPic = TRAINER_PIC_PICNICKER,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Diana2),
},

[DIFFICULTY_NORMAL][TRAINER_DIANA_3] =
{
    .trainerName = _("Diana"),
    .trainerClass = TRAINER_CLASS_PICNICKER,
    .trainerPic = TRAINER_PIC_PICNICKER,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Diana3),
},

[DIFFICULTY_NORMAL][TRAINER_DIANA_4] =
{
    .trainerName = _("Diana"),
    .trainerClass = TRAINER_CLASS_PICNICKER,
    .trainerPic = TRAINER_PIC_PICNICKER,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Diana4),
},

[DIFFICULTY_NORMAL][TRAINER_DIANA_5] =
{
    .trainerName = _("Diana"),
    .trainerClass = TRAINER_CLASS_PICNICKER,
    .trainerPic = TRAINER_PIC_PICNICKER,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Diana5),
},

[DIFFICULTY_NORMAL][TRAINER_AMY_AND_LIV_1] =
{
    .trainerName = _("Amy & Liv"),
    .trainerClass = TRAINER_CLASS_TWINS,
    .trainerPic = TRAINER_PIC_TWINS,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
    .doubleBattle = TRUE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_AmyAndLiv1),
},

[DIFFICULTY_NORMAL][TRAINER_AMY_AND_LIV_2] =
{
    .trainerName = _("Amy & Liv"),
    .trainerClass = TRAINER_CLASS_TWINS,
    .trainerPic = TRAINER_PIC_TWINS,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
    .doubleBattle = TRUE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_AmyAndLiv2),
},

[DIFFICULTY_NORMAL][TRAINER_GINA_AND_MIA_1] =
{
    .trainerName = _("Gina & Mia"),
    .trainerClass = TRAINER_CLASS_TWINS,
    .trainerPic = TRAINER_PIC_TWINS,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
    .doubleBattle = TRUE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_GinaAndMia1),
},

[DIFFICULTY_NORMAL][TRAINER_MIU_AND_YUKI] =
{
    .trainerName = _("Miu & Yuki"),
    .trainerClass = TRAINER_CLASS_TWINS,
    .trainerPic = TRAINER_PIC_TWINS,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
    .doubleBattle = TRUE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_MiuAndYuki),
},

[DIFFICULTY_NORMAL][TRAINER_UNUSED_2] =
{
    .trainerName = _("Amy & Liv"),
    .trainerClass = TRAINER_CLASS_TWINS,
    .trainerPic = TRAINER_PIC_TWINS,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
    .doubleBattle = TRUE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Unused2),
},

[DIFFICULTY_NORMAL][TRAINER_GINA_AND_MIA_2] =
{
    .trainerName = _("Gina & Mia"),
    .trainerClass = TRAINER_CLASS_TWINS,
    .trainerPic = TRAINER_PIC_TWINS,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
    .doubleBattle = TRUE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_GinaAndMia2),
},

[DIFFICULTY_NORMAL][TRAINER_AMY_AND_LIV_3] =
{
    .trainerName = _("Amy & Liv"),
    .trainerClass = TRAINER_CLASS_TWINS,
    .trainerPic = TRAINER_PIC_TWINS,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
    .doubleBattle = TRUE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_AmyAndLiv3),
},

[DIFFICULTY_NORMAL][TRAINER_AMY_AND_LIV_4] =
{
    .trainerName = _("Amy & Liv"),
    .trainerClass = TRAINER_CLASS_TWINS,
    .trainerPic = TRAINER_PIC_TWINS,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
    .doubleBattle = TRUE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_AmyAndLiv4),
},

[DIFFICULTY_NORMAL][TRAINER_AMY_AND_LIV_5] =
{
    .trainerName = _("Amy & Liv"),
    .trainerClass = TRAINER_CLASS_TWINS,
    .trainerPic = TRAINER_PIC_TWINS,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
    .doubleBattle = TRUE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_AmyAndLiv5),
},

[DIFFICULTY_NORMAL][TRAINER_HUEY] =
{
    .trainerName = _("Huey"),
    .trainerClass = TRAINER_CLASS_SAILOR,
    .trainerPic = TRAINER_PIC_SAILOR,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Huey),
},

[DIFFICULTY_NORMAL][TRAINER_EDMOND] =
{
    .trainerName = _("Edmond"),
    .trainerClass = TRAINER_CLASS_SAILOR,
    .trainerPic = TRAINER_PIC_SAILOR,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Edmond),
},

[DIFFICULTY_NORMAL][TRAINER_ERNEST_1] =
{
    .trainerName = _("Ernest"),
    .trainerClass = TRAINER_CLASS_SAILOR,
    .trainerPic = TRAINER_PIC_SAILOR,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Ernest1),
},

[DIFFICULTY_NORMAL][TRAINER_DWAYNE] =
{
    .trainerName = _("Dwayne"),
    .trainerClass = TRAINER_CLASS_SAILOR,
    .trainerPic = TRAINER_PIC_SAILOR,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Dwayne),
},

[DIFFICULTY_NORMAL][TRAINER_PHILLIP] =
{
    .trainerName = _("Phillip"),
    .trainerClass = TRAINER_CLASS_SAILOR,
    .trainerPic = TRAINER_PIC_SAILOR,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Phillip),
},

[DIFFICULTY_NORMAL][TRAINER_LEONARD] =
{
    .trainerName = _("Leonard"),
    .trainerClass = TRAINER_CLASS_SAILOR,
    .trainerPic = TRAINER_PIC_SAILOR,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Leonard),
},

[DIFFICULTY_NORMAL][TRAINER_DUNCAN] =
{
    .trainerName = _("Duncan"),
    .trainerClass = TRAINER_CLASS_SAILOR,
    .trainerPic = TRAINER_PIC_SAILOR,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Duncan),
},

[DIFFICULTY_NORMAL][TRAINER_ERNEST_2] =
{
    .trainerName = _("Ernest"),
    .trainerClass = TRAINER_CLASS_SAILOR,
    .trainerPic = TRAINER_PIC_SAILOR,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Ernest2),
},

[DIFFICULTY_NORMAL][TRAINER_ERNEST_3] =
{
    .trainerName = _("Ernest"),
    .trainerClass = TRAINER_CLASS_SAILOR,
    .trainerPic = TRAINER_PIC_SAILOR,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Ernest3),
},

[DIFFICULTY_NORMAL][TRAINER_ERNEST_4] =
{
    .trainerName = _("Ernest"),
    .trainerClass = TRAINER_CLASS_SAILOR,
    .trainerPic = TRAINER_PIC_SAILOR,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Ernest4),
},

[DIFFICULTY_NORMAL][TRAINER_ERNEST_5] =
{
    .trainerName = _("Ernest"),
    .trainerClass = TRAINER_CLASS_SAILOR,
    .trainerPic = TRAINER_PIC_SAILOR,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Ernest5),
},

[DIFFICULTY_NORMAL][TRAINER_ELI] =
{
    .trainerName = _("Eli"),
    .trainerClass = TRAINER_CLASS_HIKER,
    .trainerPic = TRAINER_PIC_HIKER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Eli),
},

[DIFFICULTY_NORMAL][TRAINER_ANNIKA] =
{
    .trainerName = _("Annika"),
    .trainerClass = TRAINER_CLASS_POKEFAN,
    .trainerPic = TRAINER_PIC_POKEFAN_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_TWINS,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Annika),
},

[DIFFICULTY_NORMAL][TRAINER_JAZMYN] =
{
    .trainerName = _("Jazmyn"),
    .trainerClass = TRAINER_CLASS_COOLTRAINER_2,
    .trainerPic = TRAINER_PIC_COOLTRAINER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
    .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .party = TRAINER_PARTY(sParty_Jazmyn),
},

[DIFFICULTY_NORMAL][TRAINER_JONAS] =
{
    .trainerName = _("Jonas"),
    .trainerClass = TRAINER_CLASS_NINJA_BOY,
    .trainerPic = TRAINER_PIC_NINJA_BOY,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .party = TRAINER_PARTY(sParty_Jonas),
},

[DIFFICULTY_NORMAL][TRAINER_KAYLEY] =
{
    .trainerName = _("Kayley"),
    .trainerClass = TRAINER_CLASS_PARASOL_LADY,
    .trainerPic = TRAINER_PIC_PARASOL_LADY,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Kayley),
},

[DIFFICULTY_NORMAL][TRAINER_AURON] =
{
    .trainerName = _("Auron"),
    .trainerClass = TRAINER_CLASS_EXPERT,
    .trainerPic = TRAINER_PIC_EXPERT_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Auron),
},

[DIFFICULTY_NORMAL][TRAINER_KELVIN] =
{
    .trainerName = _("Kelvin"),
    .trainerClass = TRAINER_CLASS_SAILOR,
    .trainerPic = TRAINER_PIC_SAILOR,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Kelvin),
},

[DIFFICULTY_NORMAL][TRAINER_MARLEY] =
{
    .trainerName = _("Marley"),
    .trainerClass = TRAINER_CLASS_COOLTRAINER,
    .trainerPic = TRAINER_PIC_COOLTRAINER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
    .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .party = TRAINER_PARTY(sParty_Marley),
},

[DIFFICULTY_NORMAL][TRAINER_REYNA] =
{
    .trainerName = _("Reyna"),
    .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
    .trainerPic = TRAINER_PIC_BATTLE_GIRL,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Reyna),
},

[DIFFICULTY_NORMAL][TRAINER_HUDSON] =
{
    .trainerName = _("Hudson"),
    .trainerClass = TRAINER_CLASS_SAILOR,
    .trainerPic = TRAINER_PIC_SAILOR,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Hudson),
},

[DIFFICULTY_NORMAL][TRAINER_CONOR] =
{
    .trainerName = _("Conor"),
    .trainerClass = TRAINER_CLASS_EXPERT,
    .trainerPic = TRAINER_PIC_EXPERT_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Conor),
},

[DIFFICULTY_NORMAL][TRAINER_EDWIN_1] =
{
    .trainerName = _("Edwin"),
    .trainerClass = TRAINER_CLASS_COLLECTOR,
    .trainerPic = TRAINER_PIC_COLLECTOR,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Edwin1),
},

[DIFFICULTY_NORMAL][TRAINER_HECTOR] =
{
    .trainerName = _("Hector"),
    .trainerClass = TRAINER_CLASS_COLLECTOR,
    .trainerPic = TRAINER_PIC_COLLECTOR,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Hector),
},

[DIFFICULTY_NORMAL][TRAINER_TABITHA_MOSSDEEP] =
{
    .trainerName = _("Tabitha"),
    .trainerClass = TRAINER_CLASS_MAGMA_ADMIN,
    .trainerPic = TRAINER_PIC_MAGMA_ADMIN_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
    .party = TRAINER_PARTY(sParty_TabithaMossdeep),
},

[DIFFICULTY_NORMAL][TRAINER_EDWIN_2] =
{
    .trainerName = _("Edwin"),
    .trainerClass = TRAINER_CLASS_COLLECTOR,
    .trainerPic = TRAINER_PIC_COLLECTOR,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Edwin2),
},

[DIFFICULTY_NORMAL][TRAINER_EDWIN_3] =
{
    .trainerName = _("Edwin"),
    .trainerClass = TRAINER_CLASS_COLLECTOR,
    .trainerPic = TRAINER_PIC_COLLECTOR,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Edwin3),
},

[DIFFICULTY_NORMAL][TRAINER_EDWIN_4] =
{
    .trainerName = _("Edwin"),
    .trainerClass = TRAINER_CLASS_COLLECTOR,
    .trainerPic = TRAINER_PIC_COLLECTOR,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Edwin4),
},

[DIFFICULTY_NORMAL][TRAINER_EDWIN_5] =
{
    .trainerName = _("Edwin"),
    .trainerClass = TRAINER_CLASS_COLLECTOR,
    .trainerPic = TRAINER_PIC_COLLECTOR,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Edwin5),
},

[DIFFICULTY_NORMAL][TRAINER_WALLY_VR_1] =
{
    .trainerName = _("Wally"),
    .trainerClass = TRAINER_CLASS_RIVAL,
    .trainerPic = TRAINER_PIC_WALLY,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
    .party = TRAINER_PARTY(sParty_WallyVR1),
},

[DIFFICULTY_NORMAL][TRAINER_BRENDAN_ROUTE_103_MUDKIP] =
{
    .trainerName = _("Brendan"),
    .trainerClass = TRAINER_CLASS_RIVAL,
    .trainerPic = TRAINER_PIC_BRENDAN,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
    .party = TRAINER_PARTY(sParty_BrendanRoute103Mudkip),
},

[DIFFICULTY_NORMAL][TRAINER_BRENDAN_ROUTE_110_MUDKIP] =
{
    .trainerName = _("Brendan"),
    .trainerClass = TRAINER_CLASS_RIVAL,
    .trainerPic = TRAINER_PIC_BRENDAN,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
    .party = TRAINER_PARTY(sParty_BrendanRoute110Mudkip),
},

[DIFFICULTY_NORMAL][TRAINER_BRENDAN_ROUTE_119_MUDKIP] =
{
    .trainerName = _("Brendan"),
    .trainerClass = TRAINER_CLASS_RIVAL,
    .trainerPic = TRAINER_PIC_BRENDAN,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
    .party = TRAINER_PARTY(sParty_BrendanRoute119Mudkip),
},

[DIFFICULTY_NORMAL][TRAINER_BRENDAN_ROUTE_103_TREECKO] =
{
    .trainerName = _("Brendan"),
    .trainerClass = TRAINER_CLASS_RIVAL,
    .trainerPic = TRAINER_PIC_BRENDAN,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
    .party = TRAINER_PARTY(sParty_BrendanRoute103Treecko),
},

[DIFFICULTY_NORMAL][TRAINER_BRENDAN_ROUTE_110_TREECKO] =
{
    .trainerName = _("Brendan"),
    .trainerClass = TRAINER_CLASS_RIVAL,
    .trainerPic = TRAINER_PIC_BRENDAN,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
    .party = TRAINER_PARTY(sParty_BrendanRoute110Treecko),
},

[DIFFICULTY_NORMAL][TRAINER_BRENDAN_ROUTE_119_TREECKO] =
{
    .trainerName = _("Brendan"),
    .trainerClass = TRAINER_CLASS_RIVAL,
    .trainerPic = TRAINER_PIC_BRENDAN,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
    .party = TRAINER_PARTY(sParty_BrendanRoute119Treecko),
},

[DIFFICULTY_NORMAL][TRAINER_BRENDAN_ROUTE_103_TORCHIC] =
{
    .trainerName = _("Brendan"),
    .trainerClass = TRAINER_CLASS_RIVAL,
    .trainerPic = TRAINER_PIC_BRENDAN,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
    .party = TRAINER_PARTY(sParty_BrendanRoute103Torchic),
},

[DIFFICULTY_NORMAL][TRAINER_BRENDAN_ROUTE_110_TORCHIC] =
{
    .trainerName = _("Brendan"),
    .trainerClass = TRAINER_CLASS_RIVAL,
    .trainerPic = TRAINER_PIC_BRENDAN,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
    .party = TRAINER_PARTY(sParty_BrendanRoute110Torchic),
},

[DIFFICULTY_NORMAL][TRAINER_BRENDAN_ROUTE_119_TORCHIC] =
{
    .trainerName = _("Brendan"),
    .trainerClass = TRAINER_CLASS_RIVAL,
    .trainerPic = TRAINER_PIC_BRENDAN,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
    .party = TRAINER_PARTY(sParty_BrendanRoute119Torchic),
},

[DIFFICULTY_NORMAL][TRAINER_MAY_ROUTE_103_MUDKIP] =
{
    .trainerName = _("May"),
    .trainerClass = TRAINER_CLASS_RIVAL,
    .trainerPic = TRAINER_PIC_MAY,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
    .party = TRAINER_PARTY(sParty_MayRoute103Mudkip),
},

[DIFFICULTY_NORMAL][TRAINER_MAY_ROUTE_110_MUDKIP] =
{
    .trainerName = _("May"),
    .trainerClass = TRAINER_CLASS_RIVAL,
    .trainerPic = TRAINER_PIC_MAY,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
    .party = TRAINER_PARTY(sParty_MayRoute110Mudkip),
},

[DIFFICULTY_NORMAL][TRAINER_MAY_ROUTE_119_MUDKIP] =
{
    .trainerName = _("May"),
    .trainerClass = TRAINER_CLASS_RIVAL,
    .trainerPic = TRAINER_PIC_MAY,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
    .party = TRAINER_PARTY(sParty_MayRoute119Mudkip),
},

[DIFFICULTY_NORMAL][TRAINER_MAY_ROUTE_103_TREECKO] =
{
    .trainerName = _("May"),
    .trainerClass = TRAINER_CLASS_RIVAL,
    .trainerPic = TRAINER_PIC_MAY,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
    .party = TRAINER_PARTY(sParty_MayRoute103Treecko),
},

[DIFFICULTY_NORMAL][TRAINER_MAY_ROUTE_110_TREECKO] =
{
    .trainerName = _("May"),
    .trainerClass = TRAINER_CLASS_RIVAL,
    .trainerPic = TRAINER_PIC_MAY,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
    .party = TRAINER_PARTY(sParty_MayRoute110Treecko),
},

[DIFFICULTY_NORMAL][TRAINER_MAY_ROUTE_119_TREECKO] =
{
    .trainerName = _("May"),
    .trainerClass = TRAINER_CLASS_RIVAL,
    .trainerPic = TRAINER_PIC_MAY,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
    .party = TRAINER_PARTY(sParty_MayRoute119Treecko),
},

[DIFFICULTY_NORMAL][TRAINER_MAY_ROUTE_103_TORCHIC] =
{
    .trainerName = _("May"),
    .trainerClass = TRAINER_CLASS_RIVAL,
    .trainerPic = TRAINER_PIC_MAY,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
    .party = TRAINER_PARTY(sParty_MayRoute103Torchic),
},

[DIFFICULTY_NORMAL][TRAINER_MAY_ROUTE_110_TORCHIC] =
{
    .trainerName = _("May"),
    .trainerClass = TRAINER_CLASS_RIVAL,
    .trainerPic = TRAINER_PIC_MAY,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
    .party = TRAINER_PARTY(sParty_MayRoute110Torchic),
},

[DIFFICULTY_NORMAL][TRAINER_MAY_ROUTE_119_TORCHIC] =
{
    .trainerName = _("May"),
    .trainerClass = TRAINER_CLASS_RIVAL,
    .trainerPic = TRAINER_PIC_MAY,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
    .party = TRAINER_PARTY(sParty_MayRoute119Torchic),
},

[DIFFICULTY_NORMAL][TRAINER_ISAAC_1] =
{
    .trainerName = _("Isaac"),
    .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
    .trainerPic = TRAINER_PIC_POKEMON_BREEDER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Isaac1),
},

[DIFFICULTY_NORMAL][TRAINER_DAVIS] =
{
    .trainerName = _("Davis"),
    .trainerClass = TRAINER_CLASS_BUG_CATCHER,
    .trainerPic = TRAINER_PIC_BUG_CATCHER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Davis),
},

[DIFFICULTY_NORMAL][TRAINER_MITCHELL] =
{
    .trainerName = _("Mitchell"),
    .trainerClass = TRAINER_CLASS_COOLTRAINER,
    .trainerPic = TRAINER_PIC_COOLTRAINER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .party = TRAINER_PARTY(sParty_Mitchell),
},

[DIFFICULTY_NORMAL][TRAINER_ISAAC_2] =
{
    .trainerName = _("Isaac"),
    .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
    .trainerPic = TRAINER_PIC_POKEMON_BREEDER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Isaac2),
},

[DIFFICULTY_NORMAL][TRAINER_ISAAC_3] =
{
    .trainerName = _("Isaac"),
    .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
    .trainerPic = TRAINER_PIC_POKEMON_BREEDER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Isaac3),
},

[DIFFICULTY_NORMAL][TRAINER_ISAAC_4] =
{
    .trainerName = _("Isaac"),
    .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
    .trainerPic = TRAINER_PIC_POKEMON_BREEDER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Isaac4),
},

[DIFFICULTY_NORMAL][TRAINER_ISAAC_5] =
{
    .trainerName = _("Isaac"),
    .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
    .trainerPic = TRAINER_PIC_POKEMON_BREEDER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Isaac5),
},

[DIFFICULTY_NORMAL][TRAINER_LYDIA_1] =
{
    .trainerName = _("Lydia"),
    .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
    .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Lydia1),
},

[DIFFICULTY_NORMAL][TRAINER_HALLE] =
{
    .trainerName = _("Halle"),
    .trainerClass = TRAINER_CLASS_COOLTRAINER,
    .trainerPic = TRAINER_PIC_COOLTRAINER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
    .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .party = TRAINER_PARTY(sParty_Halle),
},

[DIFFICULTY_NORMAL][TRAINER_GARRISON] =
{
    .trainerName = _("Garrison"),
    .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
    .trainerPic = TRAINER_PIC_RUIN_MANIAC,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Garrison),
},

[DIFFICULTY_NORMAL][TRAINER_LYDIA_2] =
{
    .trainerName = _("Lydia"),
    .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
    .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Lydia2),
},

[DIFFICULTY_NORMAL][TRAINER_LYDIA_3] =
{
    .trainerName = _("Lydia"),
    .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
    .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Lydia3),
},

[DIFFICULTY_NORMAL][TRAINER_LYDIA_4] =
{
    .trainerName = _("Lydia"),
    .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
    .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Lydia4),
},

[DIFFICULTY_NORMAL][TRAINER_LYDIA_5] =
{
    .trainerName = _("Lydia"),
    .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
    .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Lydia5),
},

[DIFFICULTY_NORMAL][TRAINER_JACKSON_1] =
{
    .trainerName = _("Jackson"),
    .trainerClass = TRAINER_CLASS_PKMN_RANGER,
    .trainerPic = TRAINER_PIC_POKEMON_RANGER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
    .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .party = TRAINER_PARTY(sParty_Jackson1),
},

[DIFFICULTY_NORMAL][TRAINER_LORENZO] =
{
    .trainerName = _("Lorenzo"),
    .trainerClass = TRAINER_CLASS_PKMN_RANGER,
    .trainerPic = TRAINER_PIC_POKEMON_RANGER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
    .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .party = TRAINER_PARTY(sParty_Lorenzo),
},

[DIFFICULTY_NORMAL][TRAINER_SEBASTIAN] =
{
    .trainerName = _("Sebastian"),
    .trainerClass = TRAINER_CLASS_PKMN_RANGER,
    .trainerPic = TRAINER_PIC_POKEMON_RANGER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
    .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .party = TRAINER_PARTY(sParty_Sebastian),
},

[DIFFICULTY_NORMAL][TRAINER_JACKSON_2] =
{
    .trainerName = _("Jackson"),
    .trainerClass = TRAINER_CLASS_PKMN_RANGER,
    .trainerPic = TRAINER_PIC_POKEMON_RANGER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
    .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_SETUP_FIRST_TURN,
    .party = TRAINER_PARTY(sParty_Jackson2),
},

[DIFFICULTY_NORMAL][TRAINER_JACKSON_3] =
{
    .trainerName = _("Jackson"),
    .trainerClass = TRAINER_CLASS_PKMN_RANGER,
    .trainerPic = TRAINER_PIC_POKEMON_RANGER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
    .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .party = TRAINER_PARTY(sParty_Jackson3),
},

[DIFFICULTY_NORMAL][TRAINER_JACKSON_4] =
{
    .trainerName = _("Jackson"),
    .trainerClass = TRAINER_CLASS_PKMN_RANGER,
    .trainerPic = TRAINER_PIC_POKEMON_RANGER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
    .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_SETUP_FIRST_TURN,
    .party = TRAINER_PARTY(sParty_Jackson4),
},

[DIFFICULTY_NORMAL][TRAINER_JACKSON_5] =
{
    .trainerName = _("Jackson"),
    .trainerClass = TRAINER_CLASS_PKMN_RANGER,
    .trainerPic = TRAINER_PIC_POKEMON_RANGER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
    .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .party = TRAINER_PARTY(sParty_Jackson5),
},

[DIFFICULTY_NORMAL][TRAINER_CATHERINE_1] =
{
    .trainerName = _("Catherine"),
    .trainerClass = TRAINER_CLASS_PKMN_RANGER,
    .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
    .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_SETUP_FIRST_TURN,
    .party = TRAINER_PARTY(sParty_Catherine1),
},

[DIFFICULTY_NORMAL][TRAINER_JENNA] =
{
    .trainerName = _("Jenna"),
    .trainerClass = TRAINER_CLASS_PKMN_RANGER,
    .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
    .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_SETUP_FIRST_TURN,
    .party = TRAINER_PARTY(sParty_Jenna),
},

[DIFFICULTY_NORMAL][TRAINER_SOPHIA] =
{
    .trainerName = _("Sophia"),
    .trainerClass = TRAINER_CLASS_PKMN_RANGER,
    .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
    .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .party = TRAINER_PARTY(sParty_Sophia),
},

[DIFFICULTY_NORMAL][TRAINER_CATHERINE_2] =
{
    .trainerName = _("Catherine"),
    .trainerClass = TRAINER_CLASS_PKMN_RANGER,
    .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
    .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_SETUP_FIRST_TURN,
    .party = TRAINER_PARTY(sParty_Catherine2),
},

[DIFFICULTY_NORMAL][TRAINER_CATHERINE_3] =
{
    .trainerName = _("Catherine"),
    .trainerClass = TRAINER_CLASS_PKMN_RANGER,
    .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
    .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .party = TRAINER_PARTY(sParty_Catherine3),
},

[DIFFICULTY_NORMAL][TRAINER_CATHERINE_4] =
{
    .trainerName = _("Catherine"),
    .trainerClass = TRAINER_CLASS_PKMN_RANGER,
    .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
    .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_SETUP_FIRST_TURN,
    .party = TRAINER_PARTY(sParty_Catherine4),
},

[DIFFICULTY_NORMAL][TRAINER_CATHERINE_5] =
{
    .trainerName = _("Catherine"),
    .trainerClass = TRAINER_CLASS_PKMN_RANGER,
    .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
    .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .party = TRAINER_PARTY(sParty_Catherine5),
},

[DIFFICULTY_NORMAL][TRAINER_JULIO] =
{
    .trainerName = _("Julio"),
    .trainerClass = TRAINER_CLASS_TRIATHLETE,
    .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Julio),
},

[DIFFICULTY_NORMAL][TRAINER_GRUNT_SEAFLOOR_CAVERN_5] =
{
    .trainerName = _("Matt"),
    .trainerClass = TRAINER_CLASS_AQUA_ADMIN,
    .trainerPic = TRAINER_PIC_AQUA_ADMIN_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .party = TRAINER_PARTY(sParty_MattSeafloorCavern),
},

[DIFFICULTY_NORMAL][TRAINER_GRUNT_UNUSED] =
{
    .trainerName = _("Grunt"),
    .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
    .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_AQUA,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_GruntUnused),
},

[DIFFICULTY_NORMAL][TRAINER_GRUNT_MT_PYRE_4] =
{
    .trainerName = _("Grunt"),
    .trainerClass = TRAINER_CLASS_TEAM_AQUA,
    .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_AQUA,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_GruntMtPyre4),
},

[DIFFICULTY_NORMAL][TRAINER_GRUNT_JAGGED_PASS] =
{
    .trainerName = _("Grunt"),
    .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
    .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_GruntJaggedPass),
},

[DIFFICULTY_NORMAL][TRAINER_MARC] =
{
    .trainerName = _("Marc"),
    .trainerClass = TRAINER_CLASS_HIKER,
    .trainerPic = TRAINER_PIC_HIKER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Marc),
},

[DIFFICULTY_NORMAL][TRAINER_BRENDEN] =
{
    .trainerName = _("Brenden"),
    .trainerClass = TRAINER_CLASS_SAILOR,
    .trainerPic = TRAINER_PIC_SAILOR,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Brenden),
},

[DIFFICULTY_NORMAL][TRAINER_LILITH] =
{
    .trainerName = _("Lilith"),
    .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
    .trainerPic = TRAINER_PIC_BATTLE_GIRL,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Lilith),
},

[DIFFICULTY_NORMAL][TRAINER_CRISTIAN] =
{
    .trainerName = _("Cristian"),
    .trainerClass = TRAINER_CLASS_BLACK_BELT,
    .trainerPic = TRAINER_PIC_BLACK_BELT,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Cristian),
},

[DIFFICULTY_NORMAL][TRAINER_SYLVIA] =
{
    .trainerName = _("Sylvia"),
    .trainerClass = TRAINER_CLASS_HEX_MANIAC,
    .trainerPic = TRAINER_PIC_HEX_MANIAC,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Sylvia),
},

[DIFFICULTY_NORMAL][TRAINER_LEONARDO] =
{
    .trainerName = _("Leonardo"),
    .trainerClass = TRAINER_CLASS_SWIMMER,
    .trainerPic = TRAINER_PIC_SWIMMER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Leonardo),
},

[DIFFICULTY_NORMAL][TRAINER_ATHENA] =
{
    .trainerName = _("Athena"),
    .trainerClass = TRAINER_CLASS_COOLTRAINER,
    .trainerPic = TRAINER_PIC_COOLTRAINER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
    .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .party = TRAINER_PARTY(sParty_Athena),
},

[DIFFICULTY_NORMAL][TRAINER_HARRISON] =
{
    .trainerName = _("Harrison"),
    .trainerClass = TRAINER_CLASS_SWIMMER,
    .trainerPic = TRAINER_PIC_SWIMMER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Harrison),
},

[DIFFICULTY_NORMAL][TRAINER_GRUNT_MT_CHIMNEY_2] =
{
    .trainerName = _("Grunt"),
    .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
    .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_GruntMtChimney2),
},

[DIFFICULTY_NORMAL][TRAINER_CLARENCE] =
{
    .trainerName = _("Clarence"),
    .trainerClass = TRAINER_CLASS_SWIMMER,
    .trainerPic = TRAINER_PIC_SWIMMER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Clarence),
},

[DIFFICULTY_NORMAL][TRAINER_TERRY] =
{
    .trainerName = _("Terry"),
    .trainerClass = TRAINER_CLASS_PSYCHIC,
    .trainerPic = TRAINER_PIC_PSYCHIC_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Terry),
},

[DIFFICULTY_NORMAL][TRAINER_NATE] =
{
    .trainerName = _("Nate"),
    .trainerClass = TRAINER_CLASS_GENTLEMAN,
    .trainerPic = TRAINER_PIC_GENTLEMAN,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_RICH,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Nate),
},

[DIFFICULTY_NORMAL][TRAINER_KATHLEEN] =
{
    .trainerName = _("Kathleen"),
    .trainerClass = TRAINER_CLASS_HEX_MANIAC,
    .trainerPic = TRAINER_PIC_HEX_MANIAC,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Kathleen),
},

[DIFFICULTY_NORMAL][TRAINER_CLIFFORD] =
{
    .trainerName = _("Clifford"),
    .trainerClass = TRAINER_CLASS_GENTLEMAN,
    .trainerPic = TRAINER_PIC_GENTLEMAN,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_RICH,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Clifford),
},

[DIFFICULTY_NORMAL][TRAINER_NICHOLAS] =
{
    .trainerName = _("Nicholas"),
    .trainerClass = TRAINER_CLASS_PSYCHIC,
    .trainerPic = TRAINER_PIC_PSYCHIC_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Nicholas),
},

[DIFFICULTY_NORMAL][TRAINER_GRUNT_SPACE_CENTER_2] =
{
    .trainerName = _("Grunt"),
    .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
    .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_MAGMA,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_GruntSpaceCenter2),
},

[DIFFICULTY_NORMAL][TRAINER_GRUNT_SPACE_CENTER_3] =
{
    .trainerName = _("Grunt"),
    .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
    .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_GruntSpaceCenter3),
},

[DIFFICULTY_NORMAL][TRAINER_GRUNT_SPACE_CENTER_4] =
{
    .trainerName = _("Grunt"),
    .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
    .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_GruntSpaceCenter4),
},

[DIFFICULTY_NORMAL][TRAINER_GRUNT_SPACE_CENTER_5] =
{
    .trainerName = _("Grunt"),
    .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
    .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_GruntSpaceCenter5),
},

[DIFFICULTY_NORMAL][TRAINER_GRUNT_SPACE_CENTER_6] =
{
    .trainerName = _("Grunt"),
    .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
    .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_GruntSpaceCenter6),
},

[DIFFICULTY_NORMAL][TRAINER_MACEY] =
{
    .trainerName = _("Macey"),
    .trainerClass = TRAINER_CLASS_PSYCHIC,
    .trainerPic = TRAINER_PIC_PSYCHIC_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Macey),
},

[DIFFICULTY_NORMAL][TRAINER_BRENDAN_RUSTBORO_TREECKO] =
{
    .trainerName = _("Brendan"),
    .trainerClass = TRAINER_CLASS_RIVAL,
    .trainerPic = TRAINER_PIC_BRENDAN,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
    .party = TRAINER_PARTY(sParty_BrendanRustboroTreecko),
},

[DIFFICULTY_NORMAL][TRAINER_BRENDAN_RUSTBORO_MUDKIP] =
{
    .trainerName = _("Brendan"),
    .trainerClass = TRAINER_CLASS_RIVAL,
    .trainerPic = TRAINER_PIC_BRENDAN,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
    .party = TRAINER_PARTY(sParty_BrendanRustboroMudkip),
},

[DIFFICULTY_NORMAL][TRAINER_PAXTON] =
{
    .trainerName = _("Paxton"),
    .trainerClass = TRAINER_CLASS_EXPERT,
    .trainerPic = TRAINER_PIC_EXPERT_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .party = TRAINER_PARTY(sParty_Paxton),
},

[DIFFICULTY_NORMAL][TRAINER_ISABELLA] =
{
    .trainerName = _("Isabella"),
    .trainerClass = TRAINER_CLASS_TRIATHLETE,
    .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Isabella),
},

[DIFFICULTY_NORMAL][TRAINER_GRUNT_WEATHER_INST_5] =
{
    .trainerName = _("Grunt"),
    .trainerClass = TRAINER_CLASS_TEAM_AQUA,
    .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_AQUA,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_GruntWeatherInst5),
},

[DIFFICULTY_NORMAL][TRAINER_TABITHA_MT_CHIMNEY] =
{
    .trainerName = _("Tabitha"),
    .trainerClass = TRAINER_CLASS_MAGMA_ADMIN,
    .trainerPic = TRAINER_PIC_MAGMA_ADMIN_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
    .party = TRAINER_PARTY(sParty_TabithaMtChimney),
},

[DIFFICULTY_NORMAL][TRAINER_JONATHAN] =
{
    .trainerName = _("Jonathan"),
    .trainerClass = TRAINER_CLASS_COOLTRAINER,
    .trainerPic = TRAINER_PIC_COOLTRAINER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
    .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_SETUP_FIRST_TURN,
    .party = TRAINER_PARTY(sParty_Jonathan),
},

[DIFFICULTY_NORMAL][TRAINER_BRENDAN_RUSTBORO_TORCHIC] =
{
    .trainerName = _("Brendan"),
    .trainerClass = TRAINER_CLASS_RIVAL,
    .trainerPic = TRAINER_PIC_BRENDAN,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
    .party = TRAINER_PARTY(sParty_BrendanRustboroTorchic),
},

[DIFFICULTY_NORMAL][TRAINER_MAY_RUSTBORO_MUDKIP] =
{
    .trainerName = _("May"),
    .trainerClass = TRAINER_CLASS_RIVAL,
    .trainerPic = TRAINER_PIC_MAY,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
    .party = TRAINER_PARTY(sParty_MayRustboroMudkip),
},

[DIFFICULTY_NORMAL][TRAINER_MAXIE_MAGMA_HIDEOUT] =
{
    .trainerName = _("Maxie"),
    .trainerClass = TRAINER_CLASS_MAGMA_LEADER,
    .trainerPic = TRAINER_PIC_MAGMA_LEADER_MAXIE,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
    .items = {ITEM_SUPER_POTION, ITEM_SUPER_POTION, ITEM_NONE, ITEM_NONE},
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
    .party = TRAINER_PARTY(sParty_MaxieMagmaHideout),
},

[DIFFICULTY_NORMAL][TRAINER_MAXIE_MT_CHIMNEY] =
{
    .trainerName = _("Maxie"),
    .trainerClass = TRAINER_CLASS_MAGMA_LEADER,
    .trainerPic = TRAINER_PIC_MAGMA_LEADER_MAXIE,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
    .items = {ITEM_SUPER_POTION, ITEM_SUPER_POTION, ITEM_NONE, ITEM_NONE},
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
    .party = TRAINER_PARTY(sParty_MaxieMtChimney),
},

[DIFFICULTY_NORMAL][TRAINER_TIANA] =
{
    .trainerName = _("Tiana"),
    .trainerClass = TRAINER_CLASS_LASS,
    .trainerPic = TRAINER_PIC_LASS,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Tiana),
},

[DIFFICULTY_NORMAL][TRAINER_HALEY_1] =
{
    .trainerName = _("Haley"),
    .trainerClass = TRAINER_CLASS_LASS,
    .trainerPic = TRAINER_PIC_LASS,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Haley1),
},

[DIFFICULTY_NORMAL][TRAINER_JANICE] =
{
    .trainerName = _("Janice"),
    .trainerClass = TRAINER_CLASS_LASS,
    .trainerPic = TRAINER_PIC_LASS,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Janice),
},

[DIFFICULTY_NORMAL][TRAINER_VIVI] =
{
    .trainerName = _("Vivi"),
    .trainerClass = TRAINER_CLASS_WINSTRATE,
    .trainerPic = TRAINER_PIC_LASS,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .party = TRAINER_PARTY(sParty_Vivi),
},

[DIFFICULTY_NORMAL][TRAINER_HALEY_2] =
{
    .trainerName = _("Haley"),
    .trainerClass = TRAINER_CLASS_LASS,
    .trainerPic = TRAINER_PIC_LASS,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Haley2),
},

[DIFFICULTY_NORMAL][TRAINER_HALEY_3] =
{
    .trainerName = _("Haley"),
    .trainerClass = TRAINER_CLASS_LASS,
    .trainerPic = TRAINER_PIC_LASS,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Haley3),
},

[DIFFICULTY_NORMAL][TRAINER_HALEY_4] =
{
    .trainerName = _("Haley"),
    .trainerClass = TRAINER_CLASS_LASS,
    .trainerPic = TRAINER_PIC_LASS,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Haley4),
},

[DIFFICULTY_NORMAL][TRAINER_HALEY_5] =
{
    .trainerName = _("Haley"),
    .trainerClass = TRAINER_CLASS_LASS,
    .trainerPic = TRAINER_PIC_LASS,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Haley5),
},

[DIFFICULTY_NORMAL][TRAINER_SALLY] =
{
    .trainerName = _("Sally"),
    .trainerClass = TRAINER_CLASS_LASS,
    .trainerPic = TRAINER_PIC_LASS,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Sally),
},

[DIFFICULTY_NORMAL][TRAINER_ROBIN] =
{
    .trainerName = _("Robin"),
    .trainerClass = TRAINER_CLASS_LASS,
    .trainerPic = TRAINER_PIC_LASS,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Robin),
},

[DIFFICULTY_NORMAL][TRAINER_ANDREA] =
{
    .trainerName = _("Andrea"),
    .trainerClass = TRAINER_CLASS_LASS,
    .trainerPic = TRAINER_PIC_LASS,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Andrea),
},

[DIFFICULTY_NORMAL][TRAINER_CRISSY] =
{
    .trainerName = _("Crissy"),
    .trainerClass = TRAINER_CLASS_LASS,
    .trainerPic = TRAINER_PIC_LASS,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Crissy),
},

[DIFFICULTY_NORMAL][TRAINER_RICK] =
{
    .trainerName = _("Rick"),
    .trainerClass = TRAINER_CLASS_BUG_CATCHER,
    .trainerPic = TRAINER_PIC_BUG_CATCHER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Rick),
},

[DIFFICULTY_NORMAL][TRAINER_LYLE] =
{
    .trainerName = _("Lyle"),
    .trainerClass = TRAINER_CLASS_BUG_CATCHER,
    .trainerPic = TRAINER_PIC_BUG_CATCHER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Lyle),
},

[DIFFICULTY_NORMAL][TRAINER_JOSE] =
{
    .trainerName = _("Jose"),
    .trainerClass = TRAINER_CLASS_BUG_CATCHER,
    .trainerPic = TRAINER_PIC_BUG_CATCHER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Jose),
},

[DIFFICULTY_NORMAL][TRAINER_DOUG] =
{
    .trainerName = _("Doug"),
    .trainerClass = TRAINER_CLASS_BUG_CATCHER,
    .trainerPic = TRAINER_PIC_BUG_CATCHER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Doug),
},

[DIFFICULTY_NORMAL][TRAINER_GREG] =
{
    .trainerName = _("Greg"),
    .trainerClass = TRAINER_CLASS_BUG_CATCHER,
    .trainerPic = TRAINER_PIC_BUG_CATCHER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Greg),
},

[DIFFICULTY_NORMAL][TRAINER_KENT] =
{
    .trainerName = _("Kent"),
    .trainerClass = TRAINER_CLASS_BUG_CATCHER,
    .trainerPic = TRAINER_PIC_BUG_CATCHER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Kent),
},

[DIFFICULTY_NORMAL][TRAINER_JAMES_1] =
{
    .trainerName = _("James"),
    .trainerClass = TRAINER_CLASS_BUG_CATCHER,
    .trainerPic = TRAINER_PIC_BUG_CATCHER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_James1),
},

[DIFFICULTY_NORMAL][TRAINER_JAMES_2] =
{
    .trainerName = _("James"),
    .trainerClass = TRAINER_CLASS_BUG_CATCHER,
    .trainerPic = TRAINER_PIC_BUG_CATCHER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_James2),
},

[DIFFICULTY_NORMAL][TRAINER_JAMES_3] =
{
    .trainerName = _("James"),
    .trainerClass = TRAINER_CLASS_BUG_CATCHER,
    .trainerPic = TRAINER_PIC_BUG_CATCHER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_James3),
},

[DIFFICULTY_NORMAL][TRAINER_JAMES_4] =
{
    .trainerName = _("James"),
    .trainerClass = TRAINER_CLASS_BUG_CATCHER,
    .trainerPic = TRAINER_PIC_BUG_CATCHER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_James4),
},

[DIFFICULTY_NORMAL][TRAINER_JAMES_5] =
{
    .trainerName = _("James"),
    .trainerClass = TRAINER_CLASS_BUG_CATCHER,
    .trainerPic = TRAINER_PIC_BUG_CATCHER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_James5),
},

[DIFFICULTY_NORMAL][TRAINER_BRICE] =
{
    .trainerName = _("Brice"),
    .trainerClass = TRAINER_CLASS_HIKER,
    .trainerPic = TRAINER_PIC_HIKER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Brice),
},

[DIFFICULTY_NORMAL][TRAINER_TRENT_1] =
{
    .trainerName = _("Trent"),
    .trainerClass = TRAINER_CLASS_HIKER,
    .trainerPic = TRAINER_PIC_HIKER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Trent1),
},

[DIFFICULTY_NORMAL][TRAINER_LENNY] =
{
    .trainerName = _("Lenny"),
    .trainerClass = TRAINER_CLASS_HIKER,
    .trainerPic = TRAINER_PIC_HIKER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Lenny),
},

[DIFFICULTY_NORMAL][TRAINER_LUCAS_1] =
{
    .trainerName = _("Lucas"),
    .trainerClass = TRAINER_CLASS_HIKER,
    .trainerPic = TRAINER_PIC_HIKER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Lucas1),
},

[DIFFICULTY_NORMAL][TRAINER_ALAN] =
{
    .trainerName = _("Alan"),
    .trainerClass = TRAINER_CLASS_HIKER,
    .trainerPic = TRAINER_PIC_HIKER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Alan),
},

[DIFFICULTY_NORMAL][TRAINER_CLARK] =
{
    .trainerName = _("Clark"),
    .trainerClass = TRAINER_CLASS_HIKER,
    .trainerPic = TRAINER_PIC_HIKER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Clark),
},

[DIFFICULTY_NORMAL][TRAINER_ERIC] =
{
    .trainerName = _("Eric"),
    .trainerClass = TRAINER_CLASS_HIKER,
    .trainerPic = TRAINER_PIC_HIKER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Eric),
},

[DIFFICULTY_NORMAL][TRAINER_LUCAS_2] =
{
    .trainerName = _("Lucas"),
    .trainerClass = TRAINER_CLASS_HIKER,
    .trainerPic = TRAINER_PIC_HIKER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Lucas2),
},

[DIFFICULTY_NORMAL][TRAINER_MIKE_1] =
{
    .trainerName = _("Mike"),
    .trainerClass = TRAINER_CLASS_HIKER,
    .trainerPic = TRAINER_PIC_HIKER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Mike1),
},

[DIFFICULTY_NORMAL][TRAINER_MIKE_2] =
{
    .trainerName = _("Mike"),
    .trainerClass = TRAINER_CLASS_HIKER,
    .trainerPic = TRAINER_PIC_HIKER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Mike2),
},

[DIFFICULTY_NORMAL][TRAINER_TRENT_2] =
{
    .trainerName = _("Trent"),
    .trainerClass = TRAINER_CLASS_HIKER,
    .trainerPic = TRAINER_PIC_HIKER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Trent2),
},

[DIFFICULTY_NORMAL][TRAINER_TRENT_3] =
{
    .trainerName = _("Trent"),
    .trainerClass = TRAINER_CLASS_HIKER,
    .trainerPic = TRAINER_PIC_HIKER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Trent3),
},

[DIFFICULTY_NORMAL][TRAINER_TRENT_4] =
{
    .trainerName = _("Trent"),
    .trainerClass = TRAINER_CLASS_HIKER,
    .trainerPic = TRAINER_PIC_HIKER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Trent4),
},

[DIFFICULTY_NORMAL][TRAINER_TRENT_5] =
{
    .trainerName = _("Trent"),
    .trainerClass = TRAINER_CLASS_HIKER,
    .trainerPic = TRAINER_PIC_HIKER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Trent5),
},

[DIFFICULTY_NORMAL][TRAINER_DEZ_AND_LUKE] =
{
    .trainerName = _("Dez & Luke"),
    .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
    .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL,
    .doubleBattle = TRUE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_DezAndLuke),
},

[DIFFICULTY_NORMAL][TRAINER_LEA_AND_JED] =
{
    .trainerName = _("Lea & Jed"),
    .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
    .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL,
    .doubleBattle = TRUE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_LeaAndJed),
},

[DIFFICULTY_NORMAL][TRAINER_KIRA_AND_DAN_1] =
{
    .trainerName = _("Kira & Dan"),
    .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
    .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL,
    .doubleBattle = TRUE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_KiraAndDan1),
},

[DIFFICULTY_NORMAL][TRAINER_KIRA_AND_DAN_2] =
{
    .trainerName = _("Kira & Dan"),
    .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
    .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL,
    .doubleBattle = TRUE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_KiraAndDan2),
},

[DIFFICULTY_NORMAL][TRAINER_KIRA_AND_DAN_3] =
{
    .trainerName = _("Kira & Dan"),
    .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
    .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL,
    .doubleBattle = TRUE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_KiraAndDan3),
},

[DIFFICULTY_NORMAL][TRAINER_KIRA_AND_DAN_4] =
{
    .trainerName = _("Kira & Dan"),
    .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
    .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL,
    .doubleBattle = TRUE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_KiraAndDan4),
},

[DIFFICULTY_NORMAL][TRAINER_KIRA_AND_DAN_5] =
{
    .trainerName = _("Kira & Dan"),
    .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
    .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL,
    .doubleBattle = TRUE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_KiraAndDan5),
},

[DIFFICULTY_NORMAL][TRAINER_JOHANNA] =
{
    .trainerName = _("Johanna"),
    .trainerClass = TRAINER_CLASS_BEAUTY,
    .trainerPic = TRAINER_PIC_BEAUTY,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Johanna),
},

[DIFFICULTY_NORMAL][TRAINER_GERALD] =
{
    .trainerName = _("Gerald"),
    .trainerClass = TRAINER_CLASS_COOLTRAINER,
    .trainerPic = TRAINER_PIC_COOLTRAINER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
    .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .party = TRAINER_PARTY(sParty_Gerald),
},

[DIFFICULTY_NORMAL][TRAINER_VIVIAN] =
{
    .trainerName = _("Vivian"),
    .trainerClass = TRAINER_CLASS_BEAUTY,
    .trainerPic = TRAINER_PIC_BEAUTY,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Vivian),
},

[DIFFICULTY_NORMAL][TRAINER_DANIELLE] =
{
    .trainerName = _("Danielle"),
    .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
    .trainerPic = TRAINER_PIC_BATTLE_GIRL,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Danielle),
},

[DIFFICULTY_NORMAL][TRAINER_HIDEO] =
{
    .trainerName = _("Hideo"),
    .trainerClass = TRAINER_CLASS_NINJA_BOY,
    .trainerPic = TRAINER_PIC_NINJA_BOY,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
    .party = TRAINER_PARTY(sParty_Hideo),
},

[DIFFICULTY_NORMAL][TRAINER_KEIGO] =
{
    .trainerName = _("Keigo"),
    .trainerClass = TRAINER_CLASS_NINJA_BOY,
    .trainerPic = TRAINER_PIC_NINJA_BOY,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
    .party = TRAINER_PARTY(sParty_Keigo),
},

[DIFFICULTY_NORMAL][TRAINER_RILEY] =
{
    .trainerName = _("Riley"),
    .trainerClass = TRAINER_CLASS_NINJA_BOY,
    .trainerPic = TRAINER_PIC_NINJA_BOY,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
    .party = TRAINER_PARTY(sParty_Riley),
},

[DIFFICULTY_NORMAL][TRAINER_FLINT] =
{
    .trainerName = _("Flint"),
    .trainerClass = TRAINER_CLASS_CAMPER,
    .trainerPic = TRAINER_PIC_CAMPER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Flint),
},

[DIFFICULTY_NORMAL][TRAINER_ASHLEY] =
{
    .trainerName = _("Ashley"),
    .trainerClass = TRAINER_CLASS_PICNICKER,
    .trainerPic = TRAINER_PIC_PICNICKER,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Ashley),
},

[DIFFICULTY_NORMAL][TRAINER_WALLY_MAUVILLE] =
{
    .trainerName = _("Wally"),
    .trainerClass = TRAINER_CLASS_RIVAL,
    .trainerPic = TRAINER_PIC_WALLY,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
    .party = TRAINER_PARTY(sParty_WallyMauville),
},

[DIFFICULTY_NORMAL][TRAINER_WALLY_VR_2] =
{
    .trainerName = _("Wally"),
    .trainerClass = TRAINER_CLASS_RIVAL,
    .trainerPic = TRAINER_PIC_WALLY,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
    .party = TRAINER_PARTY(sParty_WallyVR2),
},

[DIFFICULTY_NORMAL][TRAINER_WALLY_VR_3] =
{
    .trainerName = _("Wally"),
    .trainerClass = TRAINER_CLASS_RIVAL,
    .trainerPic = TRAINER_PIC_WALLY,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
    .party = TRAINER_PARTY(sParty_WallyVR3),
},

[DIFFICULTY_NORMAL][TRAINER_WALLY_VR_4] =
{
    .trainerName = _("Wally"),
    .trainerClass = TRAINER_CLASS_RIVAL,
    .trainerPic = TRAINER_PIC_WALLY,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
    .party = TRAINER_PARTY(sParty_WallyVR4),
},

[DIFFICULTY_NORMAL][TRAINER_WALLY_VR_5] =
{
    .trainerName = _("Wally"),
    .trainerClass = TRAINER_CLASS_RIVAL,
    .trainerPic = TRAINER_PIC_WALLY,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
    .party = TRAINER_PARTY(sParty_WallyVR5),
},

[DIFFICULTY_NORMAL][TRAINER_BRENDAN_LILYCOVE_MUDKIP] =
{
    .trainerName = _("Brendan"),
    .trainerClass = TRAINER_CLASS_RIVAL,
    .trainerPic = TRAINER_PIC_BRENDAN,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
    .party = TRAINER_PARTY(sParty_BrendanLilycoveMudkip),
},

[DIFFICULTY_NORMAL][TRAINER_BRENDAN_LILYCOVE_TREECKO] =
{
    .trainerName = _("Brendan"),
    .trainerClass = TRAINER_CLASS_RIVAL,
    .trainerPic = TRAINER_PIC_BRENDAN,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
    .party = TRAINER_PARTY(sParty_BrendanLilycoveTreecko),
},

[DIFFICULTY_NORMAL][TRAINER_BRENDAN_LILYCOVE_TORCHIC] =
{
    .trainerName = _("Brendan"),
    .trainerClass = TRAINER_CLASS_RIVAL,
    .trainerPic = TRAINER_PIC_BRENDAN,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
    .party = TRAINER_PARTY(sParty_BrendanLilycoveTorchic),
},

[DIFFICULTY_NORMAL][TRAINER_MAY_LILYCOVE_MUDKIP] =
{
    .trainerName = _("May"),
    .trainerClass = TRAINER_CLASS_RIVAL,
    .trainerPic = TRAINER_PIC_MAY,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
    .party = TRAINER_PARTY(sParty_MayLilycoveMudkip),
},

[DIFFICULTY_NORMAL][TRAINER_MAY_LILYCOVE_TREECKO] =
{
    .trainerName = _("May"),
    .trainerClass = TRAINER_CLASS_RIVAL,
    .trainerPic = TRAINER_PIC_MAY,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
    .party = TRAINER_PARTY(sParty_MayLilycoveTreecko),
},

[DIFFICULTY_NORMAL][TRAINER_MAY_LILYCOVE_TORCHIC] =
{
    .trainerName = _("May"),
    .trainerClass = TRAINER_CLASS_RIVAL,
    .trainerPic = TRAINER_PIC_MAY,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
    .party = TRAINER_PARTY(sParty_MayLilycoveTorchic),
},

[DIFFICULTY_NORMAL][TRAINER_JONAH] =
{
    .trainerName = _("Jonah"),
    .trainerClass = TRAINER_CLASS_FISHERMAN,
    .trainerPic = TRAINER_PIC_FISHERMAN,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Jonah),
},

[DIFFICULTY_NORMAL][TRAINER_HENRY] =
{
    .trainerName = _("Henry"),
    .trainerClass = TRAINER_CLASS_FISHERMAN,
    .trainerPic = TRAINER_PIC_FISHERMAN,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Henry),
},

[DIFFICULTY_NORMAL][TRAINER_ROGER] =
{
    .trainerName = _("Roger"),
    .trainerClass = TRAINER_CLASS_FISHERMAN,
    .trainerPic = TRAINER_PIC_FISHERMAN,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Roger),
},

[DIFFICULTY_NORMAL][TRAINER_ALEXA] =
{
    .trainerName = _("Alexa"),
    .trainerClass = TRAINER_CLASS_COOLTRAINER,
    .trainerPic = TRAINER_PIC_COOLTRAINER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
    .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .party = TRAINER_PARTY(sParty_Alexa),
},

[DIFFICULTY_NORMAL][TRAINER_RUBEN] =
{
    .trainerName = _("Ruben"),
    .trainerClass = TRAINER_CLASS_COOLTRAINER,
    .trainerPic = TRAINER_PIC_COOLTRAINER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
    .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .party = TRAINER_PARTY(sParty_Ruben),
},

[DIFFICULTY_NORMAL][TRAINER_KOJI_1] =
{
    .trainerName = _("Koji"),
    .trainerClass = TRAINER_CLASS_BLACK_BELT,
    .trainerPic = TRAINER_PIC_BLACK_BELT,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Koji1),
},

[DIFFICULTY_NORMAL][TRAINER_WAYNE] =
{
    .trainerName = _("Wayne"),
    .trainerClass = TRAINER_CLASS_FISHERMAN,
    .trainerPic = TRAINER_PIC_FISHERMAN,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Wayne),
},

[DIFFICULTY_NORMAL][TRAINER_AIDAN] =
{
    .trainerName = _("Aidan"),
    .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
    .trainerPic = TRAINER_PIC_BIRD_KEEPER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Aidan),
},

[DIFFICULTY_NORMAL][TRAINER_REED] =
{
    .trainerName = _("Reed"),
    .trainerClass = TRAINER_CLASS_SWIMMER,
    .trainerPic = TRAINER_PIC_SWIMMER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Reed),
},

[DIFFICULTY_NORMAL][TRAINER_TISHA] =
{
    .trainerName = _("Tisha"),
    .trainerClass = TRAINER_CLASS_SWIMMER,
    .trainerPic = TRAINER_PIC_SWIMMER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Tisha),
},

[DIFFICULTY_NORMAL][TRAINER_TORI_AND_TIA] =
{
    .trainerName = _("Tori & Tia"),
    .trainerClass = TRAINER_CLASS_TWINS,
    .trainerPic = TRAINER_PIC_TWINS,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
    .doubleBattle = TRUE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_ToriAndTia),
},

[DIFFICULTY_NORMAL][TRAINER_KIM_AND_IRIS] =
{
    .trainerName = _("Kim & Iris"),
    .trainerClass = TRAINER_CLASS_SR_AND_JR,
    .trainerPic = TRAINER_PIC_SR_AND_JR,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
    .doubleBattle = TRUE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_KimAndIris),
},

[DIFFICULTY_NORMAL][TRAINER_TYRA_AND_IVY] =
{
    .trainerName = _("Tyra & Ivy"),
    .trainerClass = TRAINER_CLASS_SR_AND_JR,
    .trainerPic = TRAINER_PIC_SR_AND_JR,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
    .doubleBattle = TRUE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_TyraAndIvy),
},

[DIFFICULTY_NORMAL][TRAINER_MEL_AND_PAUL] =
{
    .trainerName = _("Mel & Paul"),
    .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
    .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL,
    .doubleBattle = TRUE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_MelAndPaul),
},

[DIFFICULTY_NORMAL][TRAINER_JOHN_AND_JAY_1] =
{
    .trainerName = _("John & Jay"),
    .trainerClass = TRAINER_CLASS_OLD_COUPLE,
    .trainerPic = TRAINER_PIC_OLD_COUPLE,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = TRUE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .party = TRAINER_PARTY(sParty_JohnAndJay1),
},

[DIFFICULTY_NORMAL][TRAINER_JOHN_AND_JAY_2] =
{
    .trainerName = _("John & Jay"),
    .trainerClass = TRAINER_CLASS_OLD_COUPLE,
    .trainerPic = TRAINER_PIC_OLD_COUPLE,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = TRUE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .party = TRAINER_PARTY(sParty_JohnAndJay2),
},

[DIFFICULTY_NORMAL][TRAINER_JOHN_AND_JAY_3] =
{
    .trainerName = _("John & Jay"),
    .trainerClass = TRAINER_CLASS_OLD_COUPLE,
    .trainerPic = TRAINER_PIC_OLD_COUPLE,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = TRUE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .party = TRAINER_PARTY(sParty_JohnAndJay3),
},

[DIFFICULTY_NORMAL][TRAINER_JOHN_AND_JAY_4] =
{
    .trainerName = _("John & Jay"),
    .trainerClass = TRAINER_CLASS_OLD_COUPLE,
    .trainerPic = TRAINER_PIC_OLD_COUPLE,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = TRUE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_SETUP_FIRST_TURN,
    .party = TRAINER_PARTY(sParty_JohnAndJay4),
},

[DIFFICULTY_NORMAL][TRAINER_JOHN_AND_JAY_5] =
{
    .trainerName = _("John & Jay"),
    .trainerClass = TRAINER_CLASS_OLD_COUPLE,
    .trainerPic = TRAINER_PIC_OLD_COUPLE,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = TRUE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .party = TRAINER_PARTY(sParty_JohnAndJay5),
},

[DIFFICULTY_NORMAL][TRAINER_RELI_AND_IAN] =
{
    .trainerName = _("Reli & Ian"),
    .trainerClass = TRAINER_CLASS_SIS_AND_BRO,
    .trainerPic = TRAINER_PIC_SIS_AND_BRO,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .doubleBattle = TRUE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_ReliAndIan),
},

[DIFFICULTY_NORMAL][TRAINER_LILA_AND_ROY_1] =
{
    .trainerName = _("Lila & Roy"),
    .trainerClass = TRAINER_CLASS_SIS_AND_BRO,
    .trainerPic = TRAINER_PIC_SIS_AND_BRO,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .doubleBattle = TRUE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_LilaAndRoy1),
},

[DIFFICULTY_NORMAL][TRAINER_LILA_AND_ROY_2] =
{
    .trainerName = _("Lila & Roy"),
    .trainerClass = TRAINER_CLASS_SIS_AND_BRO,
    .trainerPic = TRAINER_PIC_SIS_AND_BRO,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .doubleBattle = TRUE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_LilaAndRoy2),
},

[DIFFICULTY_NORMAL][TRAINER_LILA_AND_ROY_3] =
{
    .trainerName = _("Lila & Roy"),
    .trainerClass = TRAINER_CLASS_SIS_AND_BRO,
    .trainerPic = TRAINER_PIC_SIS_AND_BRO,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .doubleBattle = TRUE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_LilaAndRoy3),
},

[DIFFICULTY_NORMAL][TRAINER_LILA_AND_ROY_4] =
{
    .trainerName = _("Lila & Roy"),
    .trainerClass = TRAINER_CLASS_SIS_AND_BRO,
    .trainerPic = TRAINER_PIC_SIS_AND_BRO,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .doubleBattle = TRUE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_LilaAndRoy4),
},

[DIFFICULTY_NORMAL][TRAINER_LILA_AND_ROY_5] =
{
    .trainerName = _("Lila & Roy"),
    .trainerClass = TRAINER_CLASS_SIS_AND_BRO,
    .trainerPic = TRAINER_PIC_SIS_AND_BRO,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .doubleBattle = TRUE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_LilaAndRoy5),
},

[DIFFICULTY_NORMAL][TRAINER_LISA_AND_RAY] =
{
    .trainerName = _("Lisa & Ray"),
    .trainerClass = TRAINER_CLASS_SIS_AND_BRO,
    .trainerPic = TRAINER_PIC_SIS_AND_BRO,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .doubleBattle = TRUE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_LisaAndRay),
},

[DIFFICULTY_NORMAL][TRAINER_CHRIS] =
{
    .trainerName = _("Chris"),
    .trainerClass = TRAINER_CLASS_FISHERMAN,
    .trainerPic = TRAINER_PIC_FISHERMAN,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Chris),
},

[DIFFICULTY_NORMAL][TRAINER_DAWSON] =
{
    .trainerName = _("Dawson"),
    .trainerClass = TRAINER_CLASS_RICH_BOY,
    .trainerPic = TRAINER_PIC_RICH_BOY,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_RICH,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Dawson),
},

[DIFFICULTY_NORMAL][TRAINER_SARAH] =
{
    .trainerName = _("Sarah"),
    .trainerClass = TRAINER_CLASS_LADY,
    .trainerPic = TRAINER_PIC_LADY,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Sarah),
},

[DIFFICULTY_NORMAL][TRAINER_DARIAN] =
{
    .trainerName = _("Darian"),
    .trainerClass = TRAINER_CLASS_FISHERMAN,
    .trainerPic = TRAINER_PIC_FISHERMAN,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Darian),
},

[DIFFICULTY_NORMAL][TRAINER_HAILEY] =
{
    .trainerName = _("Hailey"),
    .trainerClass = TRAINER_CLASS_TUBER,
    .trainerPic = TRAINER_PIC_TUBER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Hailey),
},

[DIFFICULTY_NORMAL][TRAINER_CHANDLER] =
{
    .trainerName = _("Chandler"),
    .trainerClass = TRAINER_CLASS_TUBER,
    .trainerPic = TRAINER_PIC_TUBER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Chandler),
},

[DIFFICULTY_NORMAL][TRAINER_KALEB] =
{
    .trainerName = _("Kaleb"),
    .trainerClass = TRAINER_CLASS_POKEFAN,
    .trainerPic = TRAINER_PIC_POKEFAN_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Kaleb),
},

[DIFFICULTY_NORMAL][TRAINER_JOSEPH] =
{
    .trainerName = _("Joseph"),
    .trainerClass = TRAINER_CLASS_GUITARIST,
    .trainerPic = TRAINER_PIC_GUITARIST,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Joseph),
},

[DIFFICULTY_NORMAL][TRAINER_ALYSSA] =
{
    .trainerName = _("Alyssa"),
    .trainerClass = TRAINER_CLASS_TRIATHLETE,
    .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Alyssa),
},

[DIFFICULTY_NORMAL][TRAINER_MARCOS] =
{
    .trainerName = _("Marcos"),
    .trainerClass = TRAINER_CLASS_GUITARIST,
    .trainerPic = TRAINER_PIC_GUITARIST,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Marcos),
},

[DIFFICULTY_NORMAL][TRAINER_RHETT] =
{
    .trainerName = _("Rhett"),
    .trainerClass = TRAINER_CLASS_BLACK_BELT,
    .trainerPic = TRAINER_PIC_BLACK_BELT,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Rhett),
},

[DIFFICULTY_NORMAL][TRAINER_TYRON] =
{
    .trainerName = _("Tyron"),
    .trainerClass = TRAINER_CLASS_CAMPER,
    .trainerPic = TRAINER_PIC_CAMPER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Tyron),
},

[DIFFICULTY_NORMAL][TRAINER_LILY] =
{
    .trainerName = _("Lily"),
    .trainerClass = TRAINER_CLASS_AROMA_LADY,
    .trainerPic = TRAINER_PIC_AROMA_LADY,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Lily),
},

[DIFFICULTY_NORMAL][TRAINER_BIANCA] =
{
    .trainerName = _("Bianca"),
    .trainerClass = TRAINER_CLASS_PICNICKER,
    .trainerPic = TRAINER_PIC_PICNICKER,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Bianca),
},

[DIFFICULTY_NORMAL][TRAINER_HAYDEN] =
{
    .trainerName = _("Hayden"),
    .trainerClass = TRAINER_CLASS_KINDLER,
    .trainerPic = TRAINER_PIC_KINDLER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Hayden),
},

[DIFFICULTY_NORMAL][TRAINER_SOPHIE] =
{
    .trainerName = _("Sophie"),
    .trainerClass = TRAINER_CLASS_PICNICKER,
    .trainerPic = TRAINER_PIC_PICNICKER,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Sophie),
},

[DIFFICULTY_NORMAL][TRAINER_COBY] =
{
    .trainerName = _("Coby"),
    .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
    .trainerPic = TRAINER_PIC_BIRD_KEEPER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Coby),
},

[DIFFICULTY_NORMAL][TRAINER_LAWRENCE] =
{
    .trainerName = _("Lawrence"),
    .trainerClass = TRAINER_CLASS_CAMPER,
    .trainerPic = TRAINER_PIC_CAMPER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Lawrence),
},

[DIFFICULTY_NORMAL][TRAINER_WYATT] =
{
    .trainerName = _("Wyatt"),
    .trainerClass = TRAINER_CLASS_POKEMANIAC,
    .trainerPic = TRAINER_PIC_POKEMANIAC,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Wyatt),
},

[DIFFICULTY_NORMAL][TRAINER_ANGELINA] =
{
    .trainerName = _("Angelina"),
    .trainerClass = TRAINER_CLASS_PICNICKER,
    .trainerPic = TRAINER_PIC_PICNICKER,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Angelina),
},

[DIFFICULTY_NORMAL][TRAINER_KAI] =
{
    .trainerName = _("Kai"),
    .trainerClass = TRAINER_CLASS_FISHERMAN,
    .trainerPic = TRAINER_PIC_FISHERMAN,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Kai),
},

[DIFFICULTY_NORMAL][TRAINER_CHARLOTTE] =
{
    .trainerName = _("Charlotte"),
    .trainerClass = TRAINER_CLASS_PICNICKER,
    .trainerPic = TRAINER_PIC_PICNICKER,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Charlotte),
},

[DIFFICULTY_NORMAL][TRAINER_DEANDRE] =
{
    .trainerName = _("Deandre"),
    .trainerClass = TRAINER_CLASS_YOUNGSTER,
    .trainerPic = TRAINER_PIC_YOUNGSTER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Deandre),
},

[DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_1] =
{
    .trainerName = _("Grunt"),
    .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
    .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_GruntMagmaHideout1),
},

[DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_2] =
{
    .trainerName = _("Grunt"),
    .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
    .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_GruntMagmaHideout2),
},

[DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_3] =
{
    .trainerName = _("Grunt"),
    .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
    .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_GruntMagmaHideout3),
},

[DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_4] =
{
    .trainerName = _("Grunt"),
    .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
    .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_GruntMagmaHideout4),
},

[DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_5] =
{
    .trainerName = _("Grunt"),
    .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
    .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_GruntMagmaHideout5),
},

[DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_6] =
{
    .trainerName = _("Grunt"),
    .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
    .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_GruntMagmaHideout6),
},

[DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_7] =
{
    .trainerName = _("Grunt"),
    .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
    .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_GruntMagmaHideout7),
},

[DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_8] =
{
    .trainerName = _("Grunt"),
    .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
    .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_GruntMagmaHideout8),
},

[DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_9] =
{
    .trainerName = _("Grunt"),
    .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
    .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_GruntMagmaHideout9),
},

[DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_10] =
{
    .trainerName = _("Grunt"),
    .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
    .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_GruntMagmaHideout10),
},

[DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_11] =
{
    .trainerName = _("Grunt"),
    .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
    .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_GruntMagmaHideout11),
},

[DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_12] =
{
    .trainerName = _("Grunt"),
    .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
    .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_GruntMagmaHideout12),
},

[DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_13] =
{
    .trainerName = _("Grunt"),
    .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
    .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_GruntMagmaHideout13),
},

[DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_14] =
{
    .trainerName = _("Grunt"),
    .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
    .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_MAGMA,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_GruntMagmaHideout14),
},

[DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_15] =
{
    .trainerName = _("Grunt"),
    .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
    .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_MAGMA,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_GruntMagmaHideout15),
},

[DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_16] =
{
    .trainerName = _("Grunt"),
    .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
    .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_MAGMA,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_GruntMagmaHideout16),
},

[DIFFICULTY_NORMAL][TRAINER_TABITHA_MAGMA_HIDEOUT] =
{
    .trainerName = _("Tabitha"),
    .trainerClass = TRAINER_CLASS_MAGMA_ADMIN,
    .trainerPic = TRAINER_PIC_MAGMA_ADMIN_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
    .party = TRAINER_PARTY(sParty_TabithaMagmaHideout),
},

[DIFFICULTY_NORMAL][TRAINER_DARCY] =
{
    .trainerName = _("Darcy"),
    .trainerClass = TRAINER_CLASS_COOLTRAINER,
    .trainerPic = TRAINER_PIC_COOLTRAINER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
    .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .party = TRAINER_PARTY(sParty_Darcy),
},

[DIFFICULTY_NORMAL][TRAINER_MAXIE_MOSSDEEP] =
{
    .trainerName = _("Maxie"),
    .trainerClass = TRAINER_CLASS_MAGMA_LEADER,
    .trainerPic = TRAINER_PIC_MAGMA_LEADER_MAXIE,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
    .party = TRAINER_PARTY(sParty_MaxieMossdeep),
},

[DIFFICULTY_NORMAL][TRAINER_PETE] =
{
    .trainerName = _("Pete"),
    .trainerClass = TRAINER_CLASS_SWIMMER,
    .trainerPic = TRAINER_PIC_SWIMMER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Pete),
},

[DIFFICULTY_NORMAL][TRAINER_ISABELLE] =
{
    .trainerName = _("Isabelle"),
    .trainerClass = TRAINER_CLASS_SWIMMER,
    .trainerPic = TRAINER_PIC_SWIMMER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Isabelle),
},

[DIFFICULTY_NORMAL][TRAINER_ANDRES_1] =
{
    .trainerName = _("Andres"),
    .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
    .trainerPic = TRAINER_PIC_RUIN_MANIAC,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Andres1),
},

[DIFFICULTY_NORMAL][TRAINER_JOSUE] =
{
    .trainerName = _("Josue"),
    .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
    .trainerPic = TRAINER_PIC_BIRD_KEEPER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Josue),
},

[DIFFICULTY_NORMAL][TRAINER_CAMRON] =
{
    .trainerName = _("Camron"),
    .trainerClass = TRAINER_CLASS_TRIATHLETE,
    .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Camron),
},

[DIFFICULTY_NORMAL][TRAINER_CORY_1] =
{
    .trainerName = _("Cory"),
    .trainerClass = TRAINER_CLASS_SAILOR,
    .trainerPic = TRAINER_PIC_SAILOR,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Cory1),
},

[DIFFICULTY_NORMAL][TRAINER_CAROLINA] =
{
    .trainerName = _("Carolina"),
    .trainerClass = TRAINER_CLASS_COOLTRAINER,
    .trainerPic = TRAINER_PIC_COOLTRAINER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
    .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .party = TRAINER_PARTY(sParty_Carolina),
},

[DIFFICULTY_NORMAL][TRAINER_ELIJAH] =
{
    .trainerName = _("Elijah"),
    .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
    .trainerPic = TRAINER_PIC_BIRD_KEEPER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Elijah),
},

[DIFFICULTY_NORMAL][TRAINER_CELIA] =
{
    .trainerName = _("Celia"),
    .trainerClass = TRAINER_CLASS_PICNICKER,
    .trainerPic = TRAINER_PIC_PICNICKER,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Celia),
},

[DIFFICULTY_NORMAL][TRAINER_BRYAN] =
{
    .trainerName = _("Bryan"),
    .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
    .trainerPic = TRAINER_PIC_RUIN_MANIAC,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Bryan),
},

[DIFFICULTY_NORMAL][TRAINER_BRANDEN] =
{
    .trainerName = _("Branden"),
    .trainerClass = TRAINER_CLASS_CAMPER,
    .trainerPic = TRAINER_PIC_CAMPER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Branden),
},

[DIFFICULTY_NORMAL][TRAINER_BRYANT] =
{
    .trainerName = _("Bryant"),
    .trainerClass = TRAINER_CLASS_KINDLER,
    .trainerPic = TRAINER_PIC_KINDLER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Bryant),
},

[DIFFICULTY_NORMAL][TRAINER_SHAYLA] =
{
    .trainerName = _("Shayla"),
    .trainerClass = TRAINER_CLASS_AROMA_LADY,
    .trainerPic = TRAINER_PIC_AROMA_LADY,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Shayla),
},

[DIFFICULTY_NORMAL][TRAINER_KYRA] =
{
    .trainerName = _("Kyra"),
    .trainerClass = TRAINER_CLASS_TRIATHLETE,
    .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Kyra),
},

[DIFFICULTY_NORMAL][TRAINER_JAIDEN] =
{
    .trainerName = _("Jaiden"),
    .trainerClass = TRAINER_CLASS_NINJA_BOY,
    .trainerPic = TRAINER_PIC_NINJA_BOY,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Jaiden),
},

[DIFFICULTY_NORMAL][TRAINER_ALIX] =
{
    .trainerName = _("Alix"),
    .trainerClass = TRAINER_CLASS_PSYCHIC,
    .trainerPic = TRAINER_PIC_PSYCHIC_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Alix),
},

[DIFFICULTY_NORMAL][TRAINER_HELENE] =
{
    .trainerName = _("Helene"),
    .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
    .trainerPic = TRAINER_PIC_BATTLE_GIRL,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Helene),
},

[DIFFICULTY_NORMAL][TRAINER_MARLENE] =
{
    .trainerName = _("Marlene"),
    .trainerClass = TRAINER_CLASS_PSYCHIC,
    .trainerPic = TRAINER_PIC_PSYCHIC_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Marlene),
},

[DIFFICULTY_NORMAL][TRAINER_DEVAN] =
{
    .trainerName = _("Devan"),
    .trainerClass = TRAINER_CLASS_HIKER,
    .trainerPic = TRAINER_PIC_HIKER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Devan),
},

[DIFFICULTY_NORMAL][TRAINER_JOHNSON] =
{
    .trainerName = _("Johnson"),
    .trainerClass = TRAINER_CLASS_YOUNGSTER,
    .trainerPic = TRAINER_PIC_YOUNGSTER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Johnson),
},

[DIFFICULTY_NORMAL][TRAINER_MELINA] =
{
    .trainerName = _("Melina"),
    .trainerClass = TRAINER_CLASS_TRIATHLETE,
    .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Melina),
},

[DIFFICULTY_NORMAL][TRAINER_BRANDI] =
{
    .trainerName = _("Brandi"),
    .trainerClass = TRAINER_CLASS_PSYCHIC,
    .trainerPic = TRAINER_PIC_PSYCHIC_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Brandi),
},

[DIFFICULTY_NORMAL][TRAINER_AISHA] =
{
    .trainerName = _("Aisha"),
    .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
    .trainerPic = TRAINER_PIC_BATTLE_GIRL,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Aisha),
},

[DIFFICULTY_NORMAL][TRAINER_MAKAYLA] =
{
    .trainerName = _("Makayla"),
    .trainerClass = TRAINER_CLASS_EXPERT,
    .trainerPic = TRAINER_PIC_EXPERT_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .party = TRAINER_PARTY(sParty_Makayla),
},

[DIFFICULTY_NORMAL][TRAINER_FABIAN] =
{
    .trainerName = _("Fabian"),
    .trainerClass = TRAINER_CLASS_GUITARIST,
    .trainerPic = TRAINER_PIC_GUITARIST,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Fabian),
},

[DIFFICULTY_NORMAL][TRAINER_DAYTON] =
{
    .trainerName = _("Dayton"),
    .trainerClass = TRAINER_CLASS_KINDLER,
    .trainerPic = TRAINER_PIC_KINDLER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Dayton),
},

[DIFFICULTY_NORMAL][TRAINER_RACHEL] =
{
    .trainerName = _("Rachel"),
    .trainerClass = TRAINER_CLASS_PARASOL_LADY,
    .trainerPic = TRAINER_PIC_PARASOL_LADY,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Rachel),
},

[DIFFICULTY_NORMAL][TRAINER_LEONEL] =
{
    .trainerName = _("Leonel"),
    .trainerClass = TRAINER_CLASS_COOLTRAINER,
    .trainerPic = TRAINER_PIC_COOLTRAINER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
    .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .party = TRAINER_PARTY(sParty_Leonel),
},

[DIFFICULTY_NORMAL][TRAINER_CALLIE] =
{
    .trainerName = _("Callie"),
    .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
    .trainerPic = TRAINER_PIC_BATTLE_GIRL,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Callie),
},

[DIFFICULTY_NORMAL][TRAINER_CALE] =
{
    .trainerName = _("Cale"),
    .trainerClass = TRAINER_CLASS_BUG_MANIAC,
    .trainerPic = TRAINER_PIC_BUG_MANIAC,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Cale),
},

[DIFFICULTY_NORMAL][TRAINER_MYLES] =
{
    .trainerName = _("Myles"),
    .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
    .trainerPic = TRAINER_PIC_POKEMON_BREEDER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Myles),
},

[DIFFICULTY_NORMAL][TRAINER_PAT] =
{
    .trainerName = _("Pat"),
    .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
    .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Pat),
},

[DIFFICULTY_NORMAL][TRAINER_CRISTIN_1] =
{
    .trainerName = _("Cristin"),
    .trainerClass = TRAINER_CLASS_COOLTRAINER,
    .trainerPic = TRAINER_PIC_COOLTRAINER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
    .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .party = TRAINER_PARTY(sParty_Cristin1),
},

[DIFFICULTY_NORMAL][TRAINER_MAY_RUSTBORO_TREECKO] =
{
    .trainerName = _("May"),
    .trainerClass = TRAINER_CLASS_RIVAL,
    .trainerPic = TRAINER_PIC_MAY,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
    .party = TRAINER_PARTY(sParty_MayRustboroTreecko),
},

[DIFFICULTY_NORMAL][TRAINER_MAY_RUSTBORO_TORCHIC] =
{
    .trainerName = _("May"),
    .trainerClass = TRAINER_CLASS_RIVAL,
    .trainerPic = TRAINER_PIC_MAY,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
    .party = TRAINER_PARTY(sParty_MayRustboroTorchic),
},

[DIFFICULTY_NORMAL][TRAINER_ROXANNE_2] =
{
    .trainerName = _("Roxanne"),
    .trainerClass = TRAINER_CLASS_LEADER,
    .trainerPic = TRAINER_PIC_LEADER_ROXANNE,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
    .doubleBattle = TRUE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
    .party = TRAINER_PARTY(sParty_Roxanne2),
},

[DIFFICULTY_NORMAL][TRAINER_ROXANNE_3] =
{
    .trainerName = _("Roxanne"),
    .trainerClass = TRAINER_CLASS_LEADER,
    .trainerPic = TRAINER_PIC_LEADER_ROXANNE,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
    .doubleBattle = TRUE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
    .party = TRAINER_PARTY(sParty_Roxanne3),
},

[DIFFICULTY_NORMAL][TRAINER_ROXANNE_4] =
{
    .trainerName = _("Roxanne"),
    .trainerClass = TRAINER_CLASS_LEADER,
    .trainerPic = TRAINER_PIC_LEADER_ROXANNE,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
    .doubleBattle = TRUE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
    .party = TRAINER_PARTY(sParty_Roxanne4),
},

[DIFFICULTY_NORMAL][TRAINER_ROXANNE_5] =
{
    .trainerName = _("Roxanne"),
    .trainerClass = TRAINER_CLASS_LEADER,
    .trainerPic = TRAINER_PIC_LEADER_ROXANNE,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
    .doubleBattle = TRUE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
    .party = TRAINER_PARTY(sParty_Roxanne5),
},

[DIFFICULTY_NORMAL][TRAINER_BRAWLY_2] =
{
    .trainerName = _("Brawly"),
    .trainerClass = TRAINER_CLASS_LEADER,
    .trainerPic = TRAINER_PIC_LEADER_BRAWLY,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
    .doubleBattle = TRUE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
    .party = TRAINER_PARTY(sParty_Brawly2),
},

[DIFFICULTY_NORMAL][TRAINER_BRAWLY_3] =
{
    .trainerName = _("Brawly"),
    .trainerClass = TRAINER_CLASS_LEADER,
    .trainerPic = TRAINER_PIC_LEADER_BRAWLY,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
    .doubleBattle = TRUE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
    .party = TRAINER_PARTY(sParty_Brawly3),
},

[DIFFICULTY_NORMAL][TRAINER_BRAWLY_4] =
{
    .trainerName = _("Brawly"),
    .trainerClass = TRAINER_CLASS_LEADER,
    .trainerPic = TRAINER_PIC_LEADER_BRAWLY,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
    .doubleBattle = TRUE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
    .party = TRAINER_PARTY(sParty_Brawly4),
},

[DIFFICULTY_NORMAL][TRAINER_BRAWLY_5] =
{
    .trainerName = _("Brawly"),
    .trainerClass = TRAINER_CLASS_LEADER,
    .trainerPic = TRAINER_PIC_LEADER_BRAWLY,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
    .doubleBattle = TRUE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
    .party = TRAINER_PARTY(sParty_Brawly5),
},

[DIFFICULTY_NORMAL][TRAINER_WATTSON_2] =
{
    .trainerName = _("Wattson"),
    .trainerClass = TRAINER_CLASS_LEADER,
    .trainerPic = TRAINER_PIC_LEADER_WATTSON,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
    .doubleBattle = TRUE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
    .party = TRAINER_PARTY(sParty_Wattson2),
},

[DIFFICULTY_NORMAL][TRAINER_WATTSON_3] =
{
    .trainerName = _("Wattson"),
    .trainerClass = TRAINER_CLASS_LEADER,
    .trainerPic = TRAINER_PIC_LEADER_WATTSON,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
    .doubleBattle = TRUE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
    .party = TRAINER_PARTY(sParty_Wattson3),
},

[DIFFICULTY_NORMAL][TRAINER_WATTSON_4] =
{
    .trainerName = _("Wattson"),
    .trainerClass = TRAINER_CLASS_LEADER,
    .trainerPic = TRAINER_PIC_LEADER_WATTSON,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
    .doubleBattle = TRUE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
    .party = TRAINER_PARTY(sParty_Wattson4),
},

[DIFFICULTY_NORMAL][TRAINER_WATTSON_5] =
{
    .trainerName = _("Wattson"),
    .trainerClass = TRAINER_CLASS_LEADER,
    .trainerPic = TRAINER_PIC_LEADER_WATTSON,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
    .doubleBattle = TRUE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
    .party = TRAINER_PARTY(sParty_Wattson5),
},

[DIFFICULTY_NORMAL][TRAINER_FLANNERY_2] =
{
    .trainerName = _("Flannery"),
    .trainerClass = TRAINER_CLASS_LEADER,
    .trainerPic = TRAINER_PIC_LEADER_FLANNERY,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
    .doubleBattle = TRUE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
    .party = TRAINER_PARTY(sParty_Flannery2),
},

[DIFFICULTY_NORMAL][TRAINER_FLANNERY_3] =
{
    .trainerName = _("Flannery"),
    .trainerClass = TRAINER_CLASS_LEADER,
    .trainerPic = TRAINER_PIC_LEADER_FLANNERY,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
    .doubleBattle = TRUE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
    .party = TRAINER_PARTY(sParty_Flannery3),
},

[DIFFICULTY_NORMAL][TRAINER_FLANNERY_4] =
{
    .trainerName = _("Flannery"),
    .trainerClass = TRAINER_CLASS_LEADER,
    .trainerPic = TRAINER_PIC_LEADER_FLANNERY,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
    .doubleBattle = TRUE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
    .party = TRAINER_PARTY(sParty_Flannery4),
},

[DIFFICULTY_NORMAL][TRAINER_FLANNERY_5] =
{
    .trainerName = _("Flannery"),
    .trainerClass = TRAINER_CLASS_LEADER,
    .trainerPic = TRAINER_PIC_LEADER_FLANNERY,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
    .doubleBattle = TRUE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
    .party = TRAINER_PARTY(sParty_Flannery5),
},

[DIFFICULTY_NORMAL][TRAINER_NORMAN_2] =
{
    .trainerName = _("Norman"),
    .trainerClass = TRAINER_CLASS_LEADER,
    .trainerPic = TRAINER_PIC_LEADER_NORMAN,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
    .doubleBattle = TRUE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
    .party = TRAINER_PARTY(sParty_Norman2),
},

[DIFFICULTY_NORMAL][TRAINER_NORMAN_3] =
{
    .trainerName = _("Norman"),
    .trainerClass = TRAINER_CLASS_LEADER,
    .trainerPic = TRAINER_PIC_LEADER_NORMAN,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
    .doubleBattle = TRUE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
    .party = TRAINER_PARTY(sParty_Norman3),
},

[DIFFICULTY_NORMAL][TRAINER_NORMAN_4] =
{
    .trainerName = _("Norman"),
    .trainerClass = TRAINER_CLASS_LEADER,
    .trainerPic = TRAINER_PIC_LEADER_NORMAN,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
    .doubleBattle = TRUE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
    .party = TRAINER_PARTY(sParty_Norman4),
},

[DIFFICULTY_NORMAL][TRAINER_NORMAN_5] =
{
    .trainerName = _("Norman"),
    .trainerClass = TRAINER_CLASS_LEADER,
    .trainerPic = TRAINER_PIC_LEADER_NORMAN,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
    .doubleBattle = TRUE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
    .party = TRAINER_PARTY(sParty_Norman5),
},

[DIFFICULTY_NORMAL][TRAINER_WINONA_2] =
{
    .trainerName = _("Winona"),
    .trainerClass = TRAINER_CLASS_LEADER,
    .trainerPic = TRAINER_PIC_LEADER_WINONA,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
    .doubleBattle = TRUE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
    .party = TRAINER_PARTY(sParty_Winona2),
},

[DIFFICULTY_NORMAL][TRAINER_WINONA_3] =
{
    .trainerName = _("Winona"),
    .trainerClass = TRAINER_CLASS_LEADER,
    .trainerPic = TRAINER_PIC_LEADER_WINONA,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
    .doubleBattle = TRUE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
    .party = TRAINER_PARTY(sParty_Winona3),
},

[DIFFICULTY_NORMAL][TRAINER_WINONA_4] =
{
    .trainerName = _("Winona"),
    .trainerClass = TRAINER_CLASS_LEADER,
    .trainerPic = TRAINER_PIC_LEADER_WINONA,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
    .doubleBattle = TRUE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
    .party = TRAINER_PARTY(sParty_Winona4),
},

[DIFFICULTY_NORMAL][TRAINER_WINONA_5] =
{
    .trainerName = _("Winona"),
    .trainerClass = TRAINER_CLASS_LEADER,
    .trainerPic = TRAINER_PIC_LEADER_WINONA,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
    .doubleBattle = TRUE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
    .party = TRAINER_PARTY(sParty_Winona5),
},

[DIFFICULTY_NORMAL][TRAINER_TATE_AND_LIZA_2] =
{
    .trainerName = _("Tate&Liza"),
    .trainerClass = TRAINER_CLASS_LEADER,
    .trainerPic = TRAINER_PIC_LEADER_TATE_AND_LIZA,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
    .doubleBattle = TRUE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
    .party = TRAINER_PARTY(sParty_TateAndLiza2),
},

[DIFFICULTY_NORMAL][TRAINER_TATE_AND_LIZA_3] =
{
    .trainerName = _("Tate&Liza"),
    .trainerClass = TRAINER_CLASS_LEADER,
    .trainerPic = TRAINER_PIC_LEADER_TATE_AND_LIZA,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
    .doubleBattle = TRUE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
    .party = TRAINER_PARTY(sParty_TateAndLiza3),
},

[DIFFICULTY_NORMAL][TRAINER_TATE_AND_LIZA_4] =
{
    .trainerName = _("Tate&Liza"),
    .trainerClass = TRAINER_CLASS_LEADER,
    .trainerPic = TRAINER_PIC_LEADER_TATE_AND_LIZA,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
    .doubleBattle = TRUE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
    .party = TRAINER_PARTY(sParty_TateAndLiza4),
},

[DIFFICULTY_NORMAL][TRAINER_TATE_AND_LIZA_5] =
{
    .trainerName = _("Tate&Liza"),
    .trainerClass = TRAINER_CLASS_LEADER,
    .trainerPic = TRAINER_PIC_LEADER_TATE_AND_LIZA,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
    .doubleBattle = TRUE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
    .party = TRAINER_PARTY(sParty_TateAndLiza5),
},

[DIFFICULTY_NORMAL][TRAINER_JUAN_2] =
{
    .trainerName = _("Juan"),
    .trainerClass = TRAINER_CLASS_LEADER,
    .trainerPic = TRAINER_PIC_LEADER_JUAN,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
    .doubleBattle = TRUE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
    .party = TRAINER_PARTY(sParty_Juan2),
},

[DIFFICULTY_NORMAL][TRAINER_JUAN_3] =
{
    .trainerName = _("Juan"),
    .trainerClass = TRAINER_CLASS_LEADER,
    .trainerPic = TRAINER_PIC_LEADER_JUAN,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
    .doubleBattle = TRUE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
    .party = TRAINER_PARTY(sParty_Juan3),
},

[DIFFICULTY_NORMAL][TRAINER_JUAN_4] =
{
    .trainerName = _("Juan"),
    .trainerClass = TRAINER_CLASS_LEADER,
    .trainerPic = TRAINER_PIC_LEADER_JUAN,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
    .doubleBattle = TRUE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
    .party = TRAINER_PARTY(sParty_Juan4),
},

[DIFFICULTY_NORMAL][TRAINER_JUAN_5] =
{
    .trainerName = _("Juan"),
    .trainerClass = TRAINER_CLASS_LEADER,
    .trainerPic = TRAINER_PIC_LEADER_JUAN,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
    .doubleBattle = TRUE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
    .party = TRAINER_PARTY(sParty_Juan5),
},

[DIFFICULTY_NORMAL][TRAINER_ANGELO] =
{
    .trainerName = _("Angelo"),
    .trainerClass = TRAINER_CLASS_POKEMANIAC,
    .trainerPic = TRAINER_PIC_POKEMANIAC,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .party = TRAINER_PARTY(sParty_Angelo),
},

[DIFFICULTY_NORMAL][TRAINER_DARIUS] =
{
    .trainerName = _("Darius"),
    .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
    .trainerPic = TRAINER_PIC_BIRD_KEEPER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .party = TRAINER_PARTY(sParty_Darius),
},

[DIFFICULTY_NORMAL][TRAINER_STEVEN] =
{
    .trainerName = _("Steven"),
    .trainerClass = TRAINER_CLASS_RIVAL,
    .trainerPic = TRAINER_PIC_STEVEN,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE},
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
    .party = TRAINER_PARTY(sParty_Steven),
},

[DIFFICULTY_NORMAL][TRAINER_ANABEL] =
{
    .trainerName = _("Anabel"),
    .trainerClass = TRAINER_CLASS_SALON_MAIDEN,
    .trainerPic = TRAINER_PIC_SALON_MAIDEN_ANABEL,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .party = TRAINER_PARTY(sParty_Anabel),
},

[DIFFICULTY_NORMAL][TRAINER_TUCKER] =
{
    .trainerName = _("Tucker"),
    .trainerClass = TRAINER_CLASS_DOME_ACE,
    .trainerPic = TRAINER_PIC_DOME_ACE_TUCKER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .party = TRAINER_PARTY(sParty_Tucker),
},

[DIFFICULTY_NORMAL][TRAINER_SPENSER] =
{
    .trainerName = _("Spenser"),
    .trainerClass = TRAINER_CLASS_PALACE_MAVEN,
    .trainerPic = TRAINER_PIC_PALACE_MAVEN_SPENSER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .party = TRAINER_PARTY(sParty_Spenser),
},

[DIFFICULTY_NORMAL][TRAINER_GRETA] =
{
    .trainerName = _("Greta"),
    .trainerClass = TRAINER_CLASS_ARENA_TYCOON,
    .trainerPic = TRAINER_PIC_ARENA_TYCOON_GRETA,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .party = TRAINER_PARTY(sParty_Greta),
},

[DIFFICULTY_NORMAL][TRAINER_NOLAND] =
{
    .trainerName = _("Noland"),
    .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
    .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .party = TRAINER_PARTY(sParty_Noland),
},

[DIFFICULTY_NORMAL][TRAINER_LUCY] =
{
    .trainerName = _("Lucy"),
    .trainerClass = TRAINER_CLASS_PIKE_QUEEN,
    .trainerPic = TRAINER_PIC_PIKE_QUEEN_LUCY,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .party = TRAINER_PARTY(sParty_Lucy),
},

[DIFFICULTY_NORMAL][TRAINER_BRANDON] =
{
    .trainerName = _("Brandon"),
    .trainerClass = TRAINER_CLASS_PYRAMID_KING,
    .trainerPic = TRAINER_PIC_PYRAMID_KING_BRANDON,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .party = TRAINER_PARTY(sParty_Brandon),
},

[DIFFICULTY_NORMAL][TRAINER_ANDRES_2] =
{
    .trainerName = _("Andres"),
    .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
    .trainerPic = TRAINER_PIC_RUIN_MANIAC,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Andres2),
},

[DIFFICULTY_NORMAL][TRAINER_ANDRES_3] =
{
    .trainerName = _("Andres"),
    .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
    .trainerPic = TRAINER_PIC_RUIN_MANIAC,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Andres3),
},

[DIFFICULTY_NORMAL][TRAINER_ANDRES_4] =
{
    .trainerName = _("Andres"),
    .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
    .trainerPic = TRAINER_PIC_RUIN_MANIAC,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Andres4),
},

[DIFFICULTY_NORMAL][TRAINER_ANDRES_5] =
{
    .trainerName = _("Andres"),
    .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
    .trainerPic = TRAINER_PIC_RUIN_MANIAC,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Andres5),
},

[DIFFICULTY_NORMAL][TRAINER_CORY_2] =
{
    .trainerName = _("Cory"),
    .trainerClass = TRAINER_CLASS_SAILOR,
    .trainerPic = TRAINER_PIC_SAILOR,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Cory2),
},

[DIFFICULTY_NORMAL][TRAINER_CORY_3] =
{
    .trainerName = _("Cory"),
    .trainerClass = TRAINER_CLASS_SAILOR,
    .trainerPic = TRAINER_PIC_SAILOR,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Cory3),
},

[DIFFICULTY_NORMAL][TRAINER_CORY_4] =
{
    .trainerName = _("Cory"),
    .trainerClass = TRAINER_CLASS_SAILOR,
    .trainerPic = TRAINER_PIC_SAILOR,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Cory4),
},

[DIFFICULTY_NORMAL][TRAINER_CORY_5] =
{
    .trainerName = _("Cory"),
    .trainerClass = TRAINER_CLASS_SAILOR,
    .trainerPic = TRAINER_PIC_SAILOR,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Cory5),
},

[DIFFICULTY_NORMAL][TRAINER_PABLO_2] =
{
    .trainerName = _("Pablo"),
    .trainerClass = TRAINER_CLASS_TRIATHLETE,
    .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Pablo2),
},

[DIFFICULTY_NORMAL][TRAINER_PABLO_3] =
{
    .trainerName = _("Pablo"),
    .trainerClass = TRAINER_CLASS_TRIATHLETE,
    .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Pablo3),
},

[DIFFICULTY_NORMAL][TRAINER_PABLO_4] =
{
    .trainerName = _("Pablo"),
    .trainerClass = TRAINER_CLASS_TRIATHLETE,
    .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Pablo4),
},

[DIFFICULTY_NORMAL][TRAINER_PABLO_5] =
{
    .trainerName = _("Pablo"),
    .trainerClass = TRAINER_CLASS_TRIATHLETE,
    .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Pablo5),
},

[DIFFICULTY_NORMAL][TRAINER_KOJI_2] =
{
    .trainerName = _("Koji"),
    .trainerClass = TRAINER_CLASS_BLACK_BELT,
    .trainerPic = TRAINER_PIC_BLACK_BELT,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Koji2),
},

[DIFFICULTY_NORMAL][TRAINER_KOJI_3] =
{
    .trainerName = _("Koji"),
    .trainerClass = TRAINER_CLASS_BLACK_BELT,
    .trainerPic = TRAINER_PIC_BLACK_BELT,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Koji3),
},

[DIFFICULTY_NORMAL][TRAINER_KOJI_4] =
{
    .trainerName = _("Koji"),
    .trainerClass = TRAINER_CLASS_BLACK_BELT,
    .trainerPic = TRAINER_PIC_BLACK_BELT,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Koji4),
},

[DIFFICULTY_NORMAL][TRAINER_KOJI_5] =
{
    .trainerName = _("Koji"),
    .trainerClass = TRAINER_CLASS_BLACK_BELT,
    .trainerPic = TRAINER_PIC_BLACK_BELT,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Koji5),
},

[DIFFICULTY_NORMAL][TRAINER_CRISTIN_2] =
{
    .trainerName = _("Cristin"),
    .trainerClass = TRAINER_CLASS_COOLTRAINER,
    .trainerPic = TRAINER_PIC_COOLTRAINER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
    .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .party = TRAINER_PARTY(sParty_Cristin2),
},

[DIFFICULTY_NORMAL][TRAINER_CRISTIN_3] =
{
    .trainerName = _("Cristin"),
    .trainerClass = TRAINER_CLASS_COOLTRAINER,
    .trainerPic = TRAINER_PIC_COOLTRAINER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
    .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .party = TRAINER_PARTY(sParty_Cristin3),
},

[DIFFICULTY_NORMAL][TRAINER_CRISTIN_4] =
{
    .trainerName = _("Cristin"),
    .trainerClass = TRAINER_CLASS_COOLTRAINER,
    .trainerPic = TRAINER_PIC_COOLTRAINER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
    .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .party = TRAINER_PARTY(sParty_Cristin4),
},

[DIFFICULTY_NORMAL][TRAINER_CRISTIN_5] =
{
    .trainerName = _("Cristin"),
    .trainerClass = TRAINER_CLASS_COOLTRAINER,
    .trainerPic = TRAINER_PIC_COOLTRAINER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
    .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .party = TRAINER_PARTY(sParty_Cristin5),
},

[DIFFICULTY_NORMAL][TRAINER_FERNANDO_2] =
{
    .trainerName = _("Fernando"),
    .trainerClass = TRAINER_CLASS_GUITARIST,
    .trainerPic = TRAINER_PIC_GUITARIST,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Fernando2),
},

[DIFFICULTY_NORMAL][TRAINER_FERNANDO_3] =
{
    .trainerName = _("Fernando"),
    .trainerClass = TRAINER_CLASS_GUITARIST,
    .trainerPic = TRAINER_PIC_GUITARIST,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Fernando3),
},

[DIFFICULTY_NORMAL][TRAINER_FERNANDO_4] =
{
    .trainerName = _("Fernando"),
    .trainerClass = TRAINER_CLASS_GUITARIST,
    .trainerPic = TRAINER_PIC_GUITARIST,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Fernando4),
},

[DIFFICULTY_NORMAL][TRAINER_FERNANDO_5] =
{
    .trainerName = _("Fernando"),
    .trainerClass = TRAINER_CLASS_GUITARIST,
    .trainerPic = TRAINER_PIC_GUITARIST,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Fernando5),
},

[DIFFICULTY_NORMAL][TRAINER_SAWYER_2] =
{
    .trainerName = _("Sawyer"),
    .trainerClass = TRAINER_CLASS_HIKER,
    .trainerPic = TRAINER_PIC_HIKER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .party = TRAINER_PARTY(sParty_Sawyer2),
},

[DIFFICULTY_NORMAL][TRAINER_SAWYER_3] =
{
    .trainerName = _("Sawyer"),
    .trainerClass = TRAINER_CLASS_HIKER,
    .trainerPic = TRAINER_PIC_HIKER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .party = TRAINER_PARTY(sParty_Sawyer3),
},

[DIFFICULTY_NORMAL][TRAINER_SAWYER_4] =
{
    .trainerName = _("Sawyer"),
    .trainerClass = TRAINER_CLASS_HIKER,
    .trainerPic = TRAINER_PIC_HIKER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .party = TRAINER_PARTY(sParty_Sawyer4),
},

[DIFFICULTY_NORMAL][TRAINER_SAWYER_5] =
{
    .trainerName = _("Sawyer"),
    .trainerClass = TRAINER_CLASS_HIKER,
    .trainerPic = TRAINER_PIC_HIKER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .party = TRAINER_PARTY(sParty_Sawyer5),
},

[DIFFICULTY_NORMAL][TRAINER_GABRIELLE_2] =
{
    .trainerName = _("Gabrielle"),
    .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
    .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Gabrielle2),
},

[DIFFICULTY_NORMAL][TRAINER_GABRIELLE_3] =
{
    .trainerName = _("Gabrielle"),
    .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
    .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Gabrielle3),
},

[DIFFICULTY_NORMAL][TRAINER_GABRIELLE_4] =
{
    .trainerName = _("Gabrielle"),
    .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
    .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Gabrielle4),
},

[DIFFICULTY_NORMAL][TRAINER_GABRIELLE_5] =
{
    .trainerName = _("Gabrielle"),
    .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
    .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Gabrielle5),
},

[DIFFICULTY_NORMAL][TRAINER_THALIA_2] =
{
    .trainerName = _("Thalia"),
    .trainerClass = TRAINER_CLASS_BEAUTY,
    .trainerPic = TRAINER_PIC_BEAUTY,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Thalia2),
},

[DIFFICULTY_NORMAL][TRAINER_THALIA_3] =
{
    .trainerName = _("Thalia"),
    .trainerClass = TRAINER_CLASS_BEAUTY,
    .trainerPic = TRAINER_PIC_BEAUTY,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Thalia3),
},

[DIFFICULTY_NORMAL][TRAINER_THALIA_4] =
{
    .trainerName = _("Thalia"),
    .trainerClass = TRAINER_CLASS_BEAUTY,
    .trainerPic = TRAINER_PIC_BEAUTY,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Thalia4),
},

[DIFFICULTY_NORMAL][TRAINER_THALIA_5] =
{
    .trainerName = _("Thalia"),
    .trainerClass = TRAINER_CLASS_BEAUTY,
    .trainerPic = TRAINER_PIC_BEAUTY,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Thalia5),
},

[DIFFICULTY_NORMAL][TRAINER_MARIELA] =
{
    .trainerName = _("Mariela"),
    .trainerClass = TRAINER_CLASS_PSYCHIC,
    .trainerPic = TRAINER_PIC_PSYCHIC_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .party = TRAINER_PARTY(sParty_Mariela),
},

[DIFFICULTY_NORMAL][TRAINER_ALVARO] =
{
    .trainerName = _("Alvaro"),
    .trainerClass = TRAINER_CLASS_PSYCHIC,
    .trainerPic = TRAINER_PIC_PSYCHIC_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .party = TRAINER_PARTY(sParty_Alvaro),
},

[DIFFICULTY_NORMAL][TRAINER_EVERETT] =
{
    .trainerName = _("Everett"),
    .trainerClass = TRAINER_CLASS_GENTLEMAN,
    .trainerPic = TRAINER_PIC_GENTLEMAN,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_RICH,
    .doubleBattle = FALSE,
    .party = TRAINER_PARTY(sParty_Everett),
},

[DIFFICULTY_NORMAL][TRAINER_RED] =
{
    .trainerName = _("Red"),
    .trainerClass = TRAINER_CLASS_RIVAL,
    .trainerPic = TRAINER_PIC_RED,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .party = TRAINER_PARTY(sParty_Red),
},

[DIFFICULTY_NORMAL][TRAINER_LEAF] =
{
    .trainerName = _("Leaf"),
    .trainerClass = TRAINER_CLASS_RIVAL,
    .trainerPic = TRAINER_PIC_LEAF,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .party = TRAINER_PARTY(sParty_Leaf),
},

[DIFFICULTY_NORMAL][TRAINER_BRENDAN_PLACEHOLDER] =
{
    .trainerName = _("Brendan"),
    .trainerClass = TRAINER_CLASS_RS_PROTAG,
    .trainerPic = TRAINER_PIC_RS_BRENDAN,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .party = TRAINER_PARTY(sParty_BrendanLinkPlaceholder),
},

[DIFFICULTY_NORMAL][TRAINER_MAY_PLACEHOLDER] =
{
    .trainerName = _("May"),
    .trainerClass = TRAINER_CLASS_RS_PROTAG,
    .trainerPic = TRAINER_PIC_RS_MAY,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .party = TRAINER_PARTY(sParty_MayLinkPlaceholder),
},
