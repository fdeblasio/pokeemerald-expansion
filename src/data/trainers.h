[TRAINER_NONE] =
{
    .trainerName = _(""),
    .trainerClass = TRAINER_CLASS_PKMN_TRAINER_1,
    .trainerPic = TRAINER_PIC_HIKER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .partySize = 0,
    .party = NULL,
},

[TRAINER_SAWYER_1] =
{
    .trainerName = _("Sawyer"),
    .trainerClass = TRAINER_CLASS_HIKER,
    .trainerPic = TRAINER_PIC_HIKER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .party = TRAINER_PARTY(sParty_Sawyer1),
},

[TRAINER_GRUNT_AQUA_HIDEOUT_1] =
{
    .trainerName = _("Grunt"),
    .trainerClass = TRAINER_CLASS_TEAM_AQUA,
    .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_GruntAquaHideout1),
},

[TRAINER_GRUNT_AQUA_HIDEOUT_2] =
{
    .trainerName = _("Grunt"),
    .trainerClass = TRAINER_CLASS_TEAM_AQUA,
    .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_GruntAquaHideout2),
},

[TRAINER_GRUNT_AQUA_HIDEOUT_3] =
{
    .trainerName = _("Grunt"),
    .trainerClass = TRAINER_CLASS_TEAM_AQUA,
    .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_GruntAquaHideout3),
},

[TRAINER_GRUNT_AQUA_HIDEOUT_4] =
{
    .trainerName = _("Grunt"),
    .trainerClass = TRAINER_CLASS_TEAM_AQUA,
    .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_GruntAquaHideout4),
},

[TRAINER_GRUNT_SEAFLOOR_CAVERN_1] =
{
    .trainerName = _("Grunt"),
    .trainerClass = TRAINER_CLASS_TEAM_AQUA,
    .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_GruntSeafloorCavern1),
},

[TRAINER_GRUNT_SEAFLOOR_CAVERN_2] =
{
    .trainerName = _("Grunt"),
    .trainerClass = TRAINER_CLASS_TEAM_AQUA,
    .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_GruntSeafloorCavern2),
},

[TRAINER_GRUNT_SEAFLOOR_CAVERN_3] =
{
    .trainerName = _("Grunt"),
    .trainerClass = TRAINER_CLASS_TEAM_AQUA,
    .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_GruntSeafloorCavern3),
},

[TRAINER_GABRIELLE_1] =
{
    .trainerName = _("Gabrielle"),
    .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
    .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Gabrielle1),
},

[TRAINER_GRUNT_PETALBURG_WOODS] =
{
    .trainerName = _("Grunt"),
    .trainerClass = TRAINER_CLASS_TEAM_AQUA,
    .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_GruntPetalburgWoods),
},

[TRAINER_MARCEL] =
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

[TRAINER_ALBERTO] =
{
    .trainerName = _("Alberto"),
    .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
    .trainerPic = TRAINER_PIC_BIRD_KEEPER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Alberto),
},

[TRAINER_ED] =
{
    .trainerName = _("Ed"),
    .trainerClass = TRAINER_CLASS_COLLECTOR,
    .trainerPic = TRAINER_PIC_COLLECTOR,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Ed),
},

[TRAINER_GRUNT_SEAFLOOR_CAVERN_4] =
{
    .trainerName = _("Grunt"),
    .trainerClass = TRAINER_CLASS_TEAM_AQUA,
    .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_AQUA,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_GruntSeafloorCavern4),
},

[TRAINER_DECLAN] =
{
    .trainerName = _("Declan"),
    .trainerClass = TRAINER_CLASS_SWIMMER,
    .trainerPic = TRAINER_PIC_SWIMMER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Declan),
},

[TRAINER_GRUNT_RUSTURF_TUNNEL] =
{
    .trainerName = _("Grunt"),
    .trainerClass = TRAINER_CLASS_TEAM_AQUA,
    .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_GruntRusturfTunnel),
},

[TRAINER_GRUNT_WEATHER_INST_1] =
{
    .trainerName = _("Grunt"),
    .trainerClass = TRAINER_CLASS_TEAM_AQUA,
    .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_GruntWeatherInst1),
},

[TRAINER_GRUNT_WEATHER_INST_2] =
{
    .trainerName = _("Grunt"),
    .trainerClass = TRAINER_CLASS_TEAM_AQUA,
    .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_GruntWeatherInst2),
},

[TRAINER_GRUNT_WEATHER_INST_3] =
{
    .trainerName = _("Grunt"),
    .trainerClass = TRAINER_CLASS_TEAM_AQUA,
    .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_GruntWeatherInst3),
},

[TRAINER_GRUNT_MUSEUM_1] =
{
    .trainerName = _("Grunt"),
    .trainerClass = TRAINER_CLASS_TEAM_AQUA,
    .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_GruntMuseum1),
},

[TRAINER_GRUNT_MUSEUM_2] =
{
    .trainerName = _("Grunt"),
    .trainerClass = TRAINER_CLASS_TEAM_AQUA,
    .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_GruntMuseum2),
},

[TRAINER_GRUNT_SPACE_CENTER_1] =
{
    .trainerName = _("Grunt"),
    .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
    .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_GruntSpaceCenter1),
},

[TRAINER_GRUNT_MT_PYRE_1] =
{
    .trainerName = _("Grunt"),
    .trainerClass = TRAINER_CLASS_TEAM_AQUA,
    .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_GruntMtPyre1),
},

[TRAINER_GRUNT_MT_PYRE_2] =
{
    .trainerName = _("Grunt"),
    .trainerClass = TRAINER_CLASS_TEAM_AQUA,
    .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_GruntMtPyre2),
},

[TRAINER_GRUNT_MT_PYRE_3] =
{
    .trainerName = _("Grunt"),
    .trainerClass = TRAINER_CLASS_TEAM_AQUA,
    .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_GruntMtPyre3),
},

[TRAINER_GRUNT_WEATHER_INST_4] =
{
    .trainerName = _("Grunt"),
    .trainerClass = TRAINER_CLASS_TEAM_AQUA,
    .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_AQUA,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_GruntWeatherInst4),
},

[TRAINER_GRUNT_AQUA_HIDEOUT_5] =
{
    .trainerName = _("Grunt"),
    .trainerClass = TRAINER_CLASS_TEAM_AQUA,
    .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_AQUA,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_GruntAquaHideout5),
},

[TRAINER_GRUNT_AQUA_HIDEOUT_6] =
{
    .trainerName = _("Grunt"),
    .trainerClass = TRAINER_CLASS_TEAM_AQUA,
    .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_AQUA,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_GruntAquaHideout6),
},

[TRAINER_FREDRICK] =
{
    .trainerName = _("Fredrick"),
    .trainerClass = TRAINER_CLASS_EXPERT,
    .trainerPic = TRAINER_PIC_EXPERT_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .party = TRAINER_PARTY(sParty_Fredrick),
},

[TRAINER_MATT] =
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

[TRAINER_ZANDER] =
{
    .trainerName = _("Zander"),
    .trainerClass = TRAINER_CLASS_BLACK_BELT,
    .trainerPic = TRAINER_PIC_BLACK_BELT,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Zander),
},

[TRAINER_SHELLY_WEATHER_INSTITUTE] =
{
    .trainerName = _("Shelly"),
    .trainerClass = TRAINER_CLASS_AQUA_ADMIN,
    .trainerPic = TRAINER_PIC_AQUA_ADMIN_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_AQUA,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
    .party = TRAINER_PARTY(sParty_ShellyWeatherInstitute),
},

[TRAINER_SHELLY_SEAFLOOR_CAVERN] =
{
    .trainerName = _("Shelly"),
    .trainerClass = TRAINER_CLASS_AQUA_ADMIN,
    .trainerPic = TRAINER_PIC_AQUA_ADMIN_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_AQUA,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
    .party = TRAINER_PARTY(sParty_ShellySeafloorCavern),
},

[TRAINER_ARCHIE] =
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

[TRAINER_LEAH] =
{
    .trainerName = _("Leah"),
    .trainerClass = TRAINER_CLASS_HEX_MANIAC,
    .trainerPic = TRAINER_PIC_HEX_MANIAC,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Leah),
},

[TRAINER_DAISY] =
{
    .trainerName = _("Daisy"),
    .trainerClass = TRAINER_CLASS_AROMA_LADY,
    .trainerPic = TRAINER_PIC_AROMA_LADY,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Daisy),
},

[TRAINER_ROSE_1] =
{
    .trainerName = _("Rose"),
    .trainerClass = TRAINER_CLASS_AROMA_LADY,
    .trainerPic = TRAINER_PIC_AROMA_LADY,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Rose1),
},

[TRAINER_FELIX] =
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

[TRAINER_VIOLET] =
{
    .trainerName = _("Violet"),
    .trainerClass = TRAINER_CLASS_AROMA_LADY,
    .trainerPic = TRAINER_PIC_AROMA_LADY,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Violet),
},

[TRAINER_ROSE_2] =
{
    .trainerName = _("Rose"),
    .trainerClass = TRAINER_CLASS_AROMA_LADY,
    .trainerPic = TRAINER_PIC_AROMA_LADY,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Rose2),
},

[TRAINER_ROSE_3] =
{
    .trainerName = _("Rose"),
    .trainerClass = TRAINER_CLASS_AROMA_LADY,
    .trainerPic = TRAINER_PIC_AROMA_LADY,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Rose3),
},

[TRAINER_ROSE_4] =
{
    .trainerName = _("Rose"),
    .trainerClass = TRAINER_CLASS_AROMA_LADY,
    .trainerPic = TRAINER_PIC_AROMA_LADY,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Rose4),
},

[TRAINER_ROSE_5] =
{
    .trainerName = _("Rose"),
    .trainerClass = TRAINER_CLASS_AROMA_LADY,
    .trainerPic = TRAINER_PIC_AROMA_LADY,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Rose5),
},

[TRAINER_DUSTY_1] =
{
    .trainerName = _("Dusty"),
    .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
    .trainerPic = TRAINER_PIC_RUIN_MANIAC,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Dusty1),
},

[TRAINER_CHIP] =
{
    .trainerName = _("Chip"),
    .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
    .trainerPic = TRAINER_PIC_RUIN_MANIAC,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Chip),
},

[TRAINER_FOSTER] =
{
    .trainerName = _("Foster"),
    .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
    .trainerPic = TRAINER_PIC_RUIN_MANIAC,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Foster),
},

[TRAINER_DUSTY_2] =
{
    .trainerName = _("Dusty"),
    .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
    .trainerPic = TRAINER_PIC_RUIN_MANIAC,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Dusty2),
},

[TRAINER_DUSTY_3] =
{
    .trainerName = _("Dusty"),
    .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
    .trainerPic = TRAINER_PIC_RUIN_MANIAC,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Dusty3),
},

[TRAINER_DUSTY_4] =
{
    .trainerName = _("Dusty"),
    .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
    .trainerPic = TRAINER_PIC_RUIN_MANIAC,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Dusty4),
},

[TRAINER_DUSTY_5] =
{
    .trainerName = _("Dusty"),
    .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
    .trainerPic = TRAINER_PIC_RUIN_MANIAC,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Dusty5),
},

[TRAINER_GABBY_AND_TY_1] =
{
    .trainerName = _("Gabby & Ty"),
    .trainerClass = TRAINER_CLASS_INTERVIEWER,
    .trainerPic = TRAINER_PIC_INTERVIEWER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTERVIEWER,
    .doubleBattle = TRUE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_GabbyAndTy1),
},

[TRAINER_GABBY_AND_TY_2] =
{
    .trainerName = _("Gabby & Ty"),
    .trainerClass = TRAINER_CLASS_INTERVIEWER,
    .trainerPic = TRAINER_PIC_INTERVIEWER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTERVIEWER,
    .doubleBattle = TRUE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_GabbyAndTy2),
},

[TRAINER_GABBY_AND_TY_3] =
{
    .trainerName = _("Gabby & Ty"),
    .trainerClass = TRAINER_CLASS_INTERVIEWER,
    .trainerPic = TRAINER_PIC_INTERVIEWER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTERVIEWER,
    .doubleBattle = TRUE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_GabbyAndTy3),
},

[TRAINER_GABBY_AND_TY_4] =
{
    .trainerName = _("Gabby & Ty"),
    .trainerClass = TRAINER_CLASS_INTERVIEWER,
    .trainerPic = TRAINER_PIC_INTERVIEWER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTERVIEWER,
    .doubleBattle = TRUE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_GabbyAndTy4),
},

[TRAINER_GABBY_AND_TY_5] =
{
    .trainerName = _("Gabby & Ty"),
    .trainerClass = TRAINER_CLASS_INTERVIEWER,
    .trainerPic = TRAINER_PIC_INTERVIEWER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTERVIEWER,
    .doubleBattle = TRUE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_GabbyAndTy5),
},

[TRAINER_GABBY_AND_TY_6] =
{
    .trainerName = _("Gabby & Ty"),
    .trainerClass = TRAINER_CLASS_INTERVIEWER,
    .trainerPic = TRAINER_PIC_INTERVIEWER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTERVIEWER,
    .doubleBattle = TRUE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_GabbyAndTy6),
},

[TRAINER_LOLA_1] =
{
    .trainerName = _("Lola"),
    .trainerClass = TRAINER_CLASS_TUBER,
    .trainerPic = TRAINER_PIC_TUBER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Lola1),
},

[TRAINER_AUSTINA] =
{
    .trainerName = _("Austina"),
    .trainerClass = TRAINER_CLASS_TUBER,
    .trainerPic = TRAINER_PIC_TUBER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Austina),
},

[TRAINER_GWEN] =
{
    .trainerName = _("Gwen"),
    .trainerClass = TRAINER_CLASS_TUBER,
    .trainerPic = TRAINER_PIC_TUBER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Gwen),
},

[TRAINER_LOLA_2] =
{
    .trainerName = _("Lola"),
    .trainerClass = TRAINER_CLASS_TUBER,
    .trainerPic = TRAINER_PIC_TUBER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Lola2),
},

[TRAINER_LOLA_3] =
{
    .trainerName = _("Lola"),
    .trainerClass = TRAINER_CLASS_TUBER,
    .trainerPic = TRAINER_PIC_TUBER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Lola3),
},

[TRAINER_LOLA_4] =
{
    .trainerName = _("Lola"),
    .trainerClass = TRAINER_CLASS_TUBER,
    .trainerPic = TRAINER_PIC_TUBER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Lola4),
},

[TRAINER_LOLA_5] =
{
    .trainerName = _("Lola"),
    .trainerClass = TRAINER_CLASS_TUBER,
    .trainerPic = TRAINER_PIC_TUBER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Lola5),
},

[TRAINER_RICKY_1] =
{
    .trainerName = _("Ricky"),
    .trainerClass = TRAINER_CLASS_TUBER,
    .trainerPic = TRAINER_PIC_TUBER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Ricky1),
},

[TRAINER_SIMON] =
{
    .trainerName = _("Simon"),
    .trainerClass = TRAINER_CLASS_TUBER,
    .trainerPic = TRAINER_PIC_TUBER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Simon),
},

[TRAINER_CHARLIE] =
{
    .trainerName = _("Charlie"),
    .trainerClass = TRAINER_CLASS_TUBER,
    .trainerPic = TRAINER_PIC_TUBER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Charlie),
},

[TRAINER_RICKY_2] =
{
    .trainerName = _("Ricky"),
    .trainerClass = TRAINER_CLASS_TUBER,
    .trainerPic = TRAINER_PIC_TUBER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Ricky2),
},

[TRAINER_RICKY_3] =
{
    .trainerName = _("Ricky"),
    .trainerClass = TRAINER_CLASS_TUBER,
    .trainerPic = TRAINER_PIC_TUBER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Ricky3),
},

[TRAINER_RICKY_4] =
{
    .trainerName = _("Ricky"),
    .trainerClass = TRAINER_CLASS_TUBER,
    .trainerPic = TRAINER_PIC_TUBER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Ricky4),
},

[TRAINER_RICKY_5] =
{
    .trainerName = _("Ricky"),
    .trainerClass = TRAINER_CLASS_TUBER,
    .trainerPic = TRAINER_PIC_TUBER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Ricky5),
},

[TRAINER_RANDALL] =
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

[TRAINER_PARKER] =
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

[TRAINER_GEORGE] =
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

[TRAINER_BERKE] =
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

[TRAINER_BRAXTON] =
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

[TRAINER_VINCENT] =
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

[TRAINER_LEROY] =
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

[TRAINER_WILTON_1] =
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

[TRAINER_EDGAR] =
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

[TRAINER_ALBERT] =
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

[TRAINER_SAMUEL] =
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

[TRAINER_VITO] =
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

[TRAINER_OWEN] =
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

[TRAINER_WILTON_2] =
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

[TRAINER_WILTON_3] =
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

[TRAINER_WILTON_4] =
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

[TRAINER_WILTON_5] =
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

[TRAINER_WARREN] =
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

[TRAINER_MARY] =
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

[TRAINER_ALEXIA] =
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

[TRAINER_JODY] =
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

[TRAINER_WENDY] =
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

[TRAINER_KEIRA] =
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

[TRAINER_BROOKE_1] =
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

[TRAINER_JENNIFER] =
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

[TRAINER_HOPE] =
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

[TRAINER_SHANNON] =
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

[TRAINER_MICHELLE] =
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

[TRAINER_CAROLINE] =
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

[TRAINER_JULIE] =
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

[TRAINER_BROOKE_2] =
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

[TRAINER_BROOKE_3] =
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

[TRAINER_BROOKE_4] =
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

[TRAINER_BROOKE_5] =
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

[TRAINER_PATRICIA] =
{
    .trainerName = _("Patricia"),
    .trainerClass = TRAINER_CLASS_HEX_MANIAC,
    .trainerPic = TRAINER_PIC_HEX_MANIAC,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Patricia),
},

[TRAINER_KINDRA] =
{
    .trainerName = _("Kindra"),
    .trainerClass = TRAINER_CLASS_HEX_MANIAC,
    .trainerPic = TRAINER_PIC_HEX_MANIAC,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Kindra),
},

[TRAINER_TAMMY] =
{
    .trainerName = _("Tammy"),
    .trainerClass = TRAINER_CLASS_HEX_MANIAC,
    .trainerPic = TRAINER_PIC_HEX_MANIAC,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Tammy),
},

[TRAINER_VALERIE_1] =
{
    .trainerName = _("Valerie"),
    .trainerClass = TRAINER_CLASS_HEX_MANIAC,
    .trainerPic = TRAINER_PIC_HEX_MANIAC,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Valerie1),
},

[TRAINER_TASHA] =
{
    .trainerName = _("Tasha"),
    .trainerClass = TRAINER_CLASS_HEX_MANIAC,
    .trainerPic = TRAINER_PIC_HEX_MANIAC,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Tasha),
},

[TRAINER_VALERIE_2] =
{
    .trainerName = _("Valerie"),
    .trainerClass = TRAINER_CLASS_HEX_MANIAC,
    .trainerPic = TRAINER_PIC_HEX_MANIAC,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Valerie2),
},

[TRAINER_VALERIE_3] =
{
    .trainerName = _("Valerie"),
    .trainerClass = TRAINER_CLASS_HEX_MANIAC,
    .trainerPic = TRAINER_PIC_HEX_MANIAC,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Valerie3),
},

[TRAINER_VALERIE_4] =
{
    .trainerName = _("Valerie"),
    .trainerClass = TRAINER_CLASS_HEX_MANIAC,
    .trainerPic = TRAINER_PIC_HEX_MANIAC,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Valerie4),
},

[TRAINER_VALERIE_5] =
{
    .trainerName = _("Valerie"),
    .trainerClass = TRAINER_CLASS_HEX_MANIAC,
    .trainerPic = TRAINER_PIC_HEX_MANIAC,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Valerie5),
},

[TRAINER_CINDY_1] =
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

[TRAINER_DAPHNE] =
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

[TRAINER_COURTNEY] =
{
    .trainerName = _("Courtney"),
    .trainerClass = TRAINER_CLASS_MAGMA_ADMIN,
    .trainerPic = TRAINER_PIC_MAGMA_ADMIN_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_MAGMA,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
    .party = TRAINER_PARTY(sParty_Courtney),
},

[TRAINER_UNUSED_1] =
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

[TRAINER_BRIANNA] =
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

[TRAINER_NAOMI] =
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

[TRAINER_CINDY_2] =
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

[TRAINER_CINDY_3] =
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

[TRAINER_CINDY_4] =
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

[TRAINER_CINDY_5] =
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

[TRAINER_MELISSA] =
{
    .trainerName = _("Melissa"),
    .trainerClass = TRAINER_CLASS_BEAUTY,
    .trainerPic = TRAINER_PIC_BEAUTY,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Melissa),
},

[TRAINER_SHEILA] =
{
    .trainerName = _("Sheila"),
    .trainerClass = TRAINER_CLASS_BEAUTY,
    .trainerPic = TRAINER_PIC_BEAUTY,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Sheila),
},

[TRAINER_SHIRLEY] =
{
    .trainerName = _("Shirley"),
    .trainerClass = TRAINER_CLASS_BEAUTY,
    .trainerPic = TRAINER_PIC_BEAUTY,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Shirley),
},

[TRAINER_JESSICA_1] =
{
    .trainerName = _("Jessica"),
    .trainerClass = TRAINER_CLASS_BEAUTY,
    .trainerPic = TRAINER_PIC_BEAUTY,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Jessica1),
},

[TRAINER_CONNIE] =
{
    .trainerName = _("Connie"),
    .trainerClass = TRAINER_CLASS_BEAUTY,
    .trainerPic = TRAINER_PIC_BEAUTY,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Connie),
},

[TRAINER_BRIDGET] =
{
    .trainerName = _("Bridget"),
    .trainerClass = TRAINER_CLASS_BEAUTY,
    .trainerPic = TRAINER_PIC_BEAUTY,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Bridget),
},

[TRAINER_OLIVIA] =
{
    .trainerName = _("Olivia"),
    .trainerClass = TRAINER_CLASS_BEAUTY,
    .trainerPic = TRAINER_PIC_BEAUTY,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Olivia),
},

[TRAINER_TIFFANY] =
{
    .trainerName = _("Tiffany"),
    .trainerClass = TRAINER_CLASS_BEAUTY,
    .trainerPic = TRAINER_PIC_BEAUTY,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Tiffany),
},

[TRAINER_JESSICA_2] =
{
    .trainerName = _("Jessica"),
    .trainerClass = TRAINER_CLASS_BEAUTY,
    .trainerPic = TRAINER_PIC_BEAUTY,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Jessica2),
},

[TRAINER_JESSICA_3] =
{
    .trainerName = _("Jessica"),
    .trainerClass = TRAINER_CLASS_BEAUTY,
    .trainerPic = TRAINER_PIC_BEAUTY,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Jessica3),
},

[TRAINER_JESSICA_4] =
{
    .trainerName = _("Jessica"),
    .trainerClass = TRAINER_CLASS_BEAUTY,
    .trainerPic = TRAINER_PIC_BEAUTY,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Jessica4),
},

[TRAINER_JESSICA_5] =
{
    .trainerName = _("Jessica"),
    .trainerClass = TRAINER_CLASS_BEAUTY,
    .trainerPic = TRAINER_PIC_BEAUTY,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Jessica5),
},

[TRAINER_WINSTON_1] =
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

[TRAINER_MOLLIE] =
{
    .trainerName = _("Mollie"),
    .trainerClass = TRAINER_CLASS_EXPERT,
    .trainerPic = TRAINER_PIC_EXPERT_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Mollie),
},

[TRAINER_GARRET] =
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

[TRAINER_WINSTON_2] =
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

[TRAINER_WINSTON_3] =
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

[TRAINER_WINSTON_4] =
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

[TRAINER_WINSTON_5] =
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

[TRAINER_STEVE_1] =
{
    .trainerName = _("Steve"),
    .trainerClass = TRAINER_CLASS_POKEMANIAC,
    .trainerPic = TRAINER_PIC_POKEMANIAC,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Steve1),
},

[TRAINER_THALIA_1] =
{
    .trainerName = _("Thalia"),
    .trainerClass = TRAINER_CLASS_BEAUTY,
    .trainerPic = TRAINER_PIC_BEAUTY,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Thalia1),
},

[TRAINER_MARK] =
{
    .trainerName = _("Mark"),
    .trainerClass = TRAINER_CLASS_POKEMANIAC,
    .trainerPic = TRAINER_PIC_POKEMANIAC,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Mark),
},

[TRAINER_GRUNT_MT_CHIMNEY_1] =
{
    .trainerName = _("Grunt"),
    .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
    .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_MAGMA,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_GruntMtChimney1),
},

[TRAINER_STEVE_2] =
{
    .trainerName = _("Steve"),
    .trainerClass = TRAINER_CLASS_POKEMANIAC,
    .trainerPic = TRAINER_PIC_POKEMANIAC,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Steve2),
},

[TRAINER_STEVE_3] =
{
    .trainerName = _("Steve"),
    .trainerClass = TRAINER_CLASS_POKEMANIAC,
    .trainerPic = TRAINER_PIC_POKEMANIAC,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Steve3),
},

[TRAINER_STEVE_4] =
{
    .trainerName = _("Steve"),
    .trainerClass = TRAINER_CLASS_POKEMANIAC,
    .trainerPic = TRAINER_PIC_POKEMANIAC,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Steve4),
},

[TRAINER_STEVE_5] =
{
    .trainerName = _("Steve"),
    .trainerClass = TRAINER_CLASS_POKEMANIAC,
    .trainerPic = TRAINER_PIC_POKEMANIAC,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Steve5),
},

[TRAINER_LUIS] =
{
    .trainerName = _("Luis"),
    .trainerClass = TRAINER_CLASS_SWIMMER,
    .trainerPic = TRAINER_PIC_SWIMMER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Luis),
},

[TRAINER_DOMINIK] =
{
    .trainerName = _("Dominik"),
    .trainerClass = TRAINER_CLASS_SWIMMER,
    .trainerPic = TRAINER_PIC_SWIMMER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Dominik),
},

[TRAINER_DOUGLAS] =
{
    .trainerName = _("Douglas"),
    .trainerClass = TRAINER_CLASS_SWIMMER,
    .trainerPic = TRAINER_PIC_SWIMMER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Douglas),
},

[TRAINER_DARRIN] =
{
    .trainerName = _("Darrin"),
    .trainerClass = TRAINER_CLASS_SWIMMER,
    .trainerPic = TRAINER_PIC_SWIMMER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Darrin),
},

[TRAINER_TONY_1] =
{
    .trainerName = _("Tony"),
    .trainerClass = TRAINER_CLASS_SWIMMER,
    .trainerPic = TRAINER_PIC_SWIMMER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Tony1),
},

[TRAINER_JEROME] =
{
    .trainerName = _("Jerome"),
    .trainerClass = TRAINER_CLASS_SWIMMER,
    .trainerPic = TRAINER_PIC_SWIMMER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Jerome),
},

[TRAINER_MATTHEW] =
{
    .trainerName = _("Matthew"),
    .trainerClass = TRAINER_CLASS_SWIMMER,
    .trainerPic = TRAINER_PIC_SWIMMER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Matthew),
},

[TRAINER_DAVID] =
{
    .trainerName = _("David"),
    .trainerClass = TRAINER_CLASS_SWIMMER,
    .trainerPic = TRAINER_PIC_SWIMMER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_David),
},

[TRAINER_SPENCER] =
{
    .trainerName = _("Spencer"),
    .trainerClass = TRAINER_CLASS_SWIMMER,
    .trainerPic = TRAINER_PIC_SWIMMER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Spencer),
},

[TRAINER_ROLAND] =
{
    .trainerName = _("Roland"),
    .trainerClass = TRAINER_CLASS_SWIMMER,
    .trainerPic = TRAINER_PIC_SWIMMER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Roland),
},

[TRAINER_NOLEN] =
{
    .trainerName = _("Nolen"),
    .trainerClass = TRAINER_CLASS_SWIMMER,
    .trainerPic = TRAINER_PIC_SWIMMER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Nolen),
},

[TRAINER_STAN] =
{
    .trainerName = _("Stan"),
    .trainerClass = TRAINER_CLASS_SWIMMER,
    .trainerPic = TRAINER_PIC_SWIMMER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Stan),
},

[TRAINER_BARRY] =
{
    .trainerName = _("Barry"),
    .trainerClass = TRAINER_CLASS_SWIMMER,
    .trainerPic = TRAINER_PIC_SWIMMER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Barry),
},

[TRAINER_DEAN] =
{
    .trainerName = _("Dean"),
    .trainerClass = TRAINER_CLASS_SWIMMER,
    .trainerPic = TRAINER_PIC_SWIMMER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Dean),
},

[TRAINER_RODNEY] =
{
    .trainerName = _("Rodney"),
    .trainerClass = TRAINER_CLASS_SWIMMER,
    .trainerPic = TRAINER_PIC_SWIMMER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Rodney),
},

[TRAINER_RICHARD] =
{
    .trainerName = _("Richard"),
    .trainerClass = TRAINER_CLASS_SWIMMER,
    .trainerPic = TRAINER_PIC_SWIMMER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Richard),
},

[TRAINER_HERMAN] =
{
    .trainerName = _("Herman"),
    .trainerClass = TRAINER_CLASS_SWIMMER,
    .trainerPic = TRAINER_PIC_SWIMMER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Herman),
},

[TRAINER_SANTIAGO] =
{
    .trainerName = _("Santiago"),
    .trainerClass = TRAINER_CLASS_SWIMMER,
    .trainerPic = TRAINER_PIC_SWIMMER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Santiago),
},

[TRAINER_GILBERT] =
{
    .trainerName = _("Gilbert"),
    .trainerClass = TRAINER_CLASS_SWIMMER,
    .trainerPic = TRAINER_PIC_SWIMMER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Gilbert),
},

[TRAINER_FRANKLIN] =
{
    .trainerName = _("Franklin"),
    .trainerClass = TRAINER_CLASS_SWIMMER,
    .trainerPic = TRAINER_PIC_SWIMMER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Franklin),
},

[TRAINER_KEVIN] =
{
    .trainerName = _("Kevin"),
    .trainerClass = TRAINER_CLASS_SWIMMER,
    .trainerPic = TRAINER_PIC_SWIMMER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Kevin),
},

[TRAINER_JACK] =
{
    .trainerName = _("Jack"),
    .trainerClass = TRAINER_CLASS_SWIMMER,
    .trainerPic = TRAINER_PIC_SWIMMER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Jack),
},

[TRAINER_DUDLEY] =
{
    .trainerName = _("Dudley"),
    .trainerClass = TRAINER_CLASS_SWIMMER,
    .trainerPic = TRAINER_PIC_SWIMMER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Dudley),
},

[TRAINER_CHAD] =
{
    .trainerName = _("Chad"),
    .trainerClass = TRAINER_CLASS_SWIMMER,
    .trainerPic = TRAINER_PIC_SWIMMER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Chad),
},

[TRAINER_TONY_2] =
{
    .trainerName = _("Tony"),
    .trainerClass = TRAINER_CLASS_SWIMMER,
    .trainerPic = TRAINER_PIC_SWIMMER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Tony2),
},

[TRAINER_TONY_3] =
{
    .trainerName = _("Tony"),
    .trainerClass = TRAINER_CLASS_SWIMMER,
    .trainerPic = TRAINER_PIC_SWIMMER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Tony3),
},

[TRAINER_TONY_4] =
{
    .trainerName = _("Tony"),
    .trainerClass = TRAINER_CLASS_SWIMMER,
    .trainerPic = TRAINER_PIC_SWIMMER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Tony4),
},

[TRAINER_TONY_5] =
{
    .trainerName = _("Tony"),
    .trainerClass = TRAINER_CLASS_SWIMMER,
    .trainerPic = TRAINER_PIC_SWIMMER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Tony5),
},

[TRAINER_TAKAO] =
{
    .trainerName = _("Takao"),
    .trainerClass = TRAINER_CLASS_BLACK_BELT,
    .trainerPic = TRAINER_PIC_BLACK_BELT,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Takao),
},

[TRAINER_HITOSHI] =
{
    .trainerName = _("Hitoshi"),
    .trainerClass = TRAINER_CLASS_BLACK_BELT,
    .trainerPic = TRAINER_PIC_BLACK_BELT,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Hitoshi),
},

[TRAINER_KIYO] =
{
    .trainerName = _("Kiyo"),
    .trainerClass = TRAINER_CLASS_BLACK_BELT,
    .trainerPic = TRAINER_PIC_BLACK_BELT,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Kiyo),
},

[TRAINER_KOICHI] =
{
    .trainerName = _("Koichi"),
    .trainerClass = TRAINER_CLASS_BLACK_BELT,
    .trainerPic = TRAINER_PIC_BLACK_BELT,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Koichi),
},

[TRAINER_NOB_1] =
{
    .trainerName = _("Nob"),
    .trainerClass = TRAINER_CLASS_BLACK_BELT,
    .trainerPic = TRAINER_PIC_BLACK_BELT,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Nob1),
},

[TRAINER_NOB_2] =
{
    .trainerName = _("Nob"),
    .trainerClass = TRAINER_CLASS_BLACK_BELT,
    .trainerPic = TRAINER_PIC_BLACK_BELT,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Nob2),
},

[TRAINER_NOB_3] =
{
    .trainerName = _("Nob"),
    .trainerClass = TRAINER_CLASS_BLACK_BELT,
    .trainerPic = TRAINER_PIC_BLACK_BELT,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Nob3),
},

[TRAINER_NOB_4] =
{
    .trainerName = _("Nob"),
    .trainerClass = TRAINER_CLASS_BLACK_BELT,
    .trainerPic = TRAINER_PIC_BLACK_BELT,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Nob4),
},

[TRAINER_NOB_5] =
{
    .trainerName = _("Nob"),
    .trainerClass = TRAINER_CLASS_BLACK_BELT,
    .trainerPic = TRAINER_PIC_BLACK_BELT,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Nob5),
},

[TRAINER_YUJI] =
{
    .trainerName = _("Yuji"),
    .trainerClass = TRAINER_CLASS_BLACK_BELT,
    .trainerPic = TRAINER_PIC_BLACK_BELT,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Yuji),
},

[TRAINER_DAISUKE] =
{
    .trainerName = _("Daisuke"),
    .trainerClass = TRAINER_CLASS_BLACK_BELT,
    .trainerPic = TRAINER_PIC_BLACK_BELT,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Daisuke),
},

[TRAINER_ATSUSHI] =
{
    .trainerName = _("Atsushi"),
    .trainerClass = TRAINER_CLASS_BLACK_BELT,
    .trainerPic = TRAINER_PIC_BLACK_BELT,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Atsushi),
},

[TRAINER_KIRK] =
{
    .trainerName = _("Kirk"),
    .trainerClass = TRAINER_CLASS_GUITARIST,
    .trainerPic = TRAINER_PIC_GUITARIST,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Kirk),
},

[TRAINER_GRUNT_AQUA_HIDEOUT_7] =
{
    .trainerName = _("Grunt"),
    .trainerClass = TRAINER_CLASS_TEAM_AQUA,
    .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_AQUA,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_GruntAquaHideout7),
},

[TRAINER_GRUNT_AQUA_HIDEOUT_8] =
{
    .trainerName = _("Grunt"),
    .trainerClass = TRAINER_CLASS_TEAM_AQUA,
    .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_GruntAquaHideout8),
},

[TRAINER_SHAWN] =
{
    .trainerName = _("Shawn"),
    .trainerClass = TRAINER_CLASS_GUITARIST,
    .trainerPic = TRAINER_PIC_GUITARIST,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Shawn),
},

[TRAINER_FERNANDO_1] =
{
    .trainerName = _("Fernando"),
    .trainerClass = TRAINER_CLASS_GUITARIST,
    .trainerPic = TRAINER_PIC_GUITARIST,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Fernando1),
},

[TRAINER_DALTON_1] =
{
    .trainerName = _("Dalton"),
    .trainerClass = TRAINER_CLASS_GUITARIST,
    .trainerPic = TRAINER_PIC_GUITARIST,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Dalton1),
},

[TRAINER_DALTON_2] =
{
    .trainerName = _("Dalton"),
    .trainerClass = TRAINER_CLASS_GUITARIST,
    .trainerPic = TRAINER_PIC_GUITARIST,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Dalton2),
},

[TRAINER_DALTON_3] =
{
    .trainerName = _("Dalton"),
    .trainerClass = TRAINER_CLASS_GUITARIST,
    .trainerPic = TRAINER_PIC_GUITARIST,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Dalton3),
},

[TRAINER_DALTON_4] =
{
    .trainerName = _("Dalton"),
    .trainerClass = TRAINER_CLASS_GUITARIST,
    .trainerPic = TRAINER_PIC_GUITARIST,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Dalton4),
},

[TRAINER_DALTON_5] =
{
    .trainerName = _("Dalton"),
    .trainerClass = TRAINER_CLASS_GUITARIST,
    .trainerPic = TRAINER_PIC_GUITARIST,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Dalton5),
},

[TRAINER_COLE] =
{
    .trainerName = _("Cole"),
    .trainerClass = TRAINER_CLASS_KINDLER,
    .trainerPic = TRAINER_PIC_KINDLER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Cole),
},

[TRAINER_JEFF] =
{
    .trainerName = _("Jeff"),
    .trainerClass = TRAINER_CLASS_KINDLER,
    .trainerPic = TRAINER_PIC_KINDLER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Jeff),
},

[TRAINER_AXLE] =
{
    .trainerName = _("Axle"),
    .trainerClass = TRAINER_CLASS_KINDLER,
    .trainerPic = TRAINER_PIC_KINDLER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Axle),
},

[TRAINER_JACE] =
{
    .trainerName = _("Jace"),
    .trainerClass = TRAINER_CLASS_KINDLER,
    .trainerPic = TRAINER_PIC_KINDLER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Jace),
},

[TRAINER_KEEGAN] =
{
    .trainerName = _("Keegan"),
    .trainerClass = TRAINER_CLASS_KINDLER,
    .trainerPic = TRAINER_PIC_KINDLER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Keegan),
},

[TRAINER_BERNIE_1] =
{
    .trainerName = _("Bernie"),
    .trainerClass = TRAINER_CLASS_KINDLER,
    .trainerPic = TRAINER_PIC_KINDLER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Bernie1),
},

[TRAINER_BERNIE_2] =
{
    .trainerName = _("Bernie"),
    .trainerClass = TRAINER_CLASS_KINDLER,
    .trainerPic = TRAINER_PIC_KINDLER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Bernie2),
},

[TRAINER_BERNIE_3] =
{
    .trainerName = _("Bernie"),
    .trainerClass = TRAINER_CLASS_KINDLER,
    .trainerPic = TRAINER_PIC_KINDLER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Bernie3),
},

[TRAINER_BERNIE_4] =
{
    .trainerName = _("Bernie"),
    .trainerClass = TRAINER_CLASS_KINDLER,
    .trainerPic = TRAINER_PIC_KINDLER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Bernie4),
},

[TRAINER_BERNIE_5] =
{
    .trainerName = _("Bernie"),
    .trainerClass = TRAINER_CLASS_KINDLER,
    .trainerPic = TRAINER_PIC_KINDLER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Bernie5),
},

[TRAINER_DREW] =
{
    .trainerName = _("Drew"),
    .trainerClass = TRAINER_CLASS_CAMPER,
    .trainerPic = TRAINER_PIC_CAMPER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Drew),
},

[TRAINER_BEAU] =
{
    .trainerName = _("Beau"),
    .trainerClass = TRAINER_CLASS_CAMPER,
    .trainerPic = TRAINER_PIC_CAMPER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Beau),
},

[TRAINER_LARRY] =
{
    .trainerName = _("Larry"),
    .trainerClass = TRAINER_CLASS_CAMPER,
    .trainerPic = TRAINER_PIC_CAMPER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Larry),
},

[TRAINER_SHANE] =
{
    .trainerName = _("Shane"),
    .trainerClass = TRAINER_CLASS_CAMPER,
    .trainerPic = TRAINER_PIC_CAMPER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Shane),
},

[TRAINER_JUSTIN] =
{
    .trainerName = _("Justin"),
    .trainerClass = TRAINER_CLASS_CAMPER,
    .trainerPic = TRAINER_PIC_CAMPER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Justin),
},

[TRAINER_ETHAN_1] =
{
    .trainerName = _("Ethan"),
    .trainerClass = TRAINER_CLASS_CAMPER,
    .trainerPic = TRAINER_PIC_CAMPER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Ethan1),
},

[TRAINER_AUTUMN] =
{
    .trainerName = _("Autumn"),
    .trainerClass = TRAINER_CLASS_PICNICKER,
    .trainerPic = TRAINER_PIC_PICNICKER,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Autumn),
},

[TRAINER_TRAVIS] =
{
    .trainerName = _("Travis"),
    .trainerClass = TRAINER_CLASS_CAMPER,
    .trainerPic = TRAINER_PIC_CAMPER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Travis),
},

[TRAINER_ETHAN_2] =
{
    .trainerName = _("Ethan"),
    .trainerClass = TRAINER_CLASS_CAMPER,
    .trainerPic = TRAINER_PIC_CAMPER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Ethan2),
},

[TRAINER_ETHAN_3] =
{
    .trainerName = _("Ethan"),
    .trainerClass = TRAINER_CLASS_CAMPER,
    .trainerPic = TRAINER_PIC_CAMPER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Ethan3),
},

[TRAINER_ETHAN_4] =
{
    .trainerName = _("Ethan"),
    .trainerClass = TRAINER_CLASS_CAMPER,
    .trainerPic = TRAINER_PIC_CAMPER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Ethan4),
},

[TRAINER_ETHAN_5] =
{
    .trainerName = _("Ethan"),
    .trainerClass = TRAINER_CLASS_CAMPER,
    .trainerPic = TRAINER_PIC_CAMPER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Ethan5),
},

[TRAINER_BRENT] =
{
    .trainerName = _("Brent"),
    .trainerClass = TRAINER_CLASS_BUG_MANIAC,
    .trainerPic = TRAINER_PIC_BUG_MANIAC,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Brent),
},

[TRAINER_DONALD] =
{
    .trainerName = _("Donald"),
    .trainerClass = TRAINER_CLASS_BUG_MANIAC,
    .trainerPic = TRAINER_PIC_BUG_MANIAC,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Donald),
},

[TRAINER_TAYLOR] =
{
    .trainerName = _("Taylor"),
    .trainerClass = TRAINER_CLASS_BUG_MANIAC,
    .trainerPic = TRAINER_PIC_BUG_MANIAC,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Taylor),
},

[TRAINER_JEFFREY_1] =
{
    .trainerName = _("Jeffrey"),
    .trainerClass = TRAINER_CLASS_BUG_MANIAC,
    .trainerPic = TRAINER_PIC_BUG_MANIAC,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Jeffrey1),
},

[TRAINER_DEREK] =
{
    .trainerName = _("Derek"),
    .trainerClass = TRAINER_CLASS_BUG_MANIAC,
    .trainerPic = TRAINER_PIC_BUG_MANIAC,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Derek),
},

[TRAINER_JEFFREY_2] =
{
    .trainerName = _("Jeffrey"),
    .trainerClass = TRAINER_CLASS_BUG_MANIAC,
    .trainerPic = TRAINER_PIC_BUG_MANIAC,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Jeffrey2),
},

[TRAINER_JEFFREY_3] =
{
    .trainerName = _("Jeffrey"),
    .trainerClass = TRAINER_CLASS_BUG_MANIAC,
    .trainerPic = TRAINER_PIC_BUG_MANIAC,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Jeffrey3),
},

[TRAINER_JEFFREY_4] =
{
    .trainerName = _("Jeffrey"),
    .trainerClass = TRAINER_CLASS_BUG_MANIAC,
    .trainerPic = TRAINER_PIC_BUG_MANIAC,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Jeffrey4),
},

[TRAINER_JEFFREY_5] =
{
    .trainerName = _("Jeffrey"),
    .trainerClass = TRAINER_CLASS_BUG_MANIAC,
    .trainerPic = TRAINER_PIC_BUG_MANIAC,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Jeffrey5),
},

[TRAINER_EDWARD] =
{
    .trainerName = _("Edward"),
    .trainerClass = TRAINER_CLASS_PSYCHIC,
    .trainerPic = TRAINER_PIC_PSYCHIC_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Edward),
},

[TRAINER_PRESTON] =
{
    .trainerName = _("Preston"),
    .trainerClass = TRAINER_CLASS_PSYCHIC,
    .trainerPic = TRAINER_PIC_PSYCHIC_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Preston),
},

[TRAINER_VIRGIL] =
{
    .trainerName = _("Virgil"),
    .trainerClass = TRAINER_CLASS_PSYCHIC,
    .trainerPic = TRAINER_PIC_PSYCHIC_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Virgil),
},

[TRAINER_BLAKE] =
{
    .trainerName = _("Blake"),
    .trainerClass = TRAINER_CLASS_PSYCHIC,
    .trainerPic = TRAINER_PIC_PSYCHIC_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Blake),
},

[TRAINER_WILLIAM] =
{
    .trainerName = _("William"),
    .trainerClass = TRAINER_CLASS_PSYCHIC,
    .trainerPic = TRAINER_PIC_PSYCHIC_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_William),
},

[TRAINER_JOSHUA] =
{
    .trainerName = _("Joshua"),
    .trainerClass = TRAINER_CLASS_PSYCHIC,
    .trainerPic = TRAINER_PIC_PSYCHIC_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Joshua),
},

[TRAINER_CAMERON_1] =
{
    .trainerName = _("Cameron"),
    .trainerClass = TRAINER_CLASS_PSYCHIC,
    .trainerPic = TRAINER_PIC_PSYCHIC_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Cameron1),
},

[TRAINER_CAMERON_2] =
{
    .trainerName = _("Cameron"),
    .trainerClass = TRAINER_CLASS_PSYCHIC,
    .trainerPic = TRAINER_PIC_PSYCHIC_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Cameron2),
},

[TRAINER_CAMERON_3] =
{
    .trainerName = _("Cameron"),
    .trainerClass = TRAINER_CLASS_PSYCHIC,
    .trainerPic = TRAINER_PIC_PSYCHIC_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Cameron3),
},

[TRAINER_CAMERON_4] =
{
    .trainerName = _("Cameron"),
    .trainerClass = TRAINER_CLASS_PSYCHIC,
    .trainerPic = TRAINER_PIC_PSYCHIC_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Cameron4),
},

[TRAINER_CAMERON_5] =
{
    .trainerName = _("Cameron"),
    .trainerClass = TRAINER_CLASS_PSYCHIC,
    .trainerPic = TRAINER_PIC_PSYCHIC_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Cameron5),
},

[TRAINER_JACLYN] =
{
    .trainerName = _("Jaclyn"),
    .trainerClass = TRAINER_CLASS_PSYCHIC,
    .trainerPic = TRAINER_PIC_PSYCHIC_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Jaclyn),
},

[TRAINER_HANNAH] =
{
    .trainerName = _("Hannah"),
    .trainerClass = TRAINER_CLASS_PSYCHIC,
    .trainerPic = TRAINER_PIC_PSYCHIC_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Hannah),
},

[TRAINER_SAMANTHA] =
{
    .trainerName = _("Samantha"),
    .trainerClass = TRAINER_CLASS_PSYCHIC,
    .trainerPic = TRAINER_PIC_PSYCHIC_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Samantha),
},

[TRAINER_MAURA] =
{
    .trainerName = _("Maura"),
    .trainerClass = TRAINER_CLASS_PSYCHIC,
    .trainerPic = TRAINER_PIC_PSYCHIC_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Maura),
},

[TRAINER_KAYLA] =
{
    .trainerName = _("Kayla"),
    .trainerClass = TRAINER_CLASS_PSYCHIC,
    .trainerPic = TRAINER_PIC_PSYCHIC_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Kayla),
},

[TRAINER_ALEXIS] =
{
    .trainerName = _("Alexis"),
    .trainerClass = TRAINER_CLASS_PSYCHIC,
    .trainerPic = TRAINER_PIC_PSYCHIC_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Alexis),
},

[TRAINER_JACKI_1] =
{
    .trainerName = _("Jacki"),
    .trainerClass = TRAINER_CLASS_PSYCHIC,
    .trainerPic = TRAINER_PIC_PSYCHIC_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Jacki1),
},

[TRAINER_JACKI_2] =
{
    .trainerName = _("Jacki"),
    .trainerClass = TRAINER_CLASS_PSYCHIC,
    .trainerPic = TRAINER_PIC_PSYCHIC_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Jacki2),
},

[TRAINER_JACKI_3] =
{
    .trainerName = _("Jacki"),
    .trainerClass = TRAINER_CLASS_PSYCHIC,
    .trainerPic = TRAINER_PIC_PSYCHIC_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Jacki3),
},

[TRAINER_JACKI_4] =
{
    .trainerName = _("Jacki"),
    .trainerClass = TRAINER_CLASS_PSYCHIC,
    .trainerPic = TRAINER_PIC_PSYCHIC_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Jacki4),
},

[TRAINER_JACKI_5] =
{
    .trainerName = _("Jacki"),
    .trainerClass = TRAINER_CLASS_PSYCHIC,
    .trainerPic = TRAINER_PIC_PSYCHIC_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Jacki5),
},

[TRAINER_WALTER_1] =
{
    .trainerName = _("Walter"),
    .trainerClass = TRAINER_CLASS_GENTLEMAN,
    .trainerPic = TRAINER_PIC_GENTLEMAN,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_RICH,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Walter1),
},

[TRAINER_MICAH] =
{
    .trainerName = _("Micah"),
    .trainerClass = TRAINER_CLASS_GENTLEMAN,
    .trainerPic = TRAINER_PIC_GENTLEMAN,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_RICH,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Micah),
},

[TRAINER_THOMAS] =
{
    .trainerName = _("Thomas"),
    .trainerClass = TRAINER_CLASS_GENTLEMAN,
    .trainerPic = TRAINER_PIC_GENTLEMAN,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_RICH,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Thomas),
},

[TRAINER_WALTER_2] =
{
    .trainerName = _("Walter"),
    .trainerClass = TRAINER_CLASS_GENTLEMAN,
    .trainerPic = TRAINER_PIC_GENTLEMAN,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_RICH,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Walter2),
},

[TRAINER_WALTER_3] =
{
    .trainerName = _("Walter"),
    .trainerClass = TRAINER_CLASS_GENTLEMAN,
    .trainerPic = TRAINER_PIC_GENTLEMAN,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_RICH,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Walter3),
},

[TRAINER_WALTER_4] =
{
    .trainerName = _("Walter"),
    .trainerClass = TRAINER_CLASS_GENTLEMAN,
    .trainerPic = TRAINER_PIC_GENTLEMAN,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_RICH,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Walter4),
},

[TRAINER_WALTER_5] =
{
    .trainerName = _("Walter"),
    .trainerClass = TRAINER_CLASS_GENTLEMAN,
    .trainerPic = TRAINER_PIC_GENTLEMAN,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_RICH,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Walter5),
},

[TRAINER_SIDNEY] =
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

[TRAINER_PHOEBE] =
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

[TRAINER_GLACIA] =
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

[TRAINER_DRAKE] =
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

[TRAINER_ROXANNE_1] =
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

[TRAINER_BRAWLY_1] =
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

[TRAINER_WATTSON_1] =
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

[TRAINER_FLANNERY_1] =
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

[TRAINER_NORMAN_1] =
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

[TRAINER_WINONA_1] =
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

[TRAINER_TATE_AND_LIZA_1] =
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

[TRAINER_JUAN_1] =
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

[TRAINER_JERRY_1] =
{
    .trainerName = _("Jerry"),
    .trainerClass = TRAINER_CLASS_SCHOOL_KID,
    .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Jerry1),
},

[TRAINER_TED] =
{
    .trainerName = _("Ted"),
    .trainerClass = TRAINER_CLASS_SCHOOL_KID,
    .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Ted),
},

[TRAINER_PAUL] =
{
    .trainerName = _("Paul"),
    .trainerClass = TRAINER_CLASS_SCHOOL_KID,
    .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Paul),
},

[TRAINER_JERRY_2] =
{
    .trainerName = _("Jerry"),
    .trainerClass = TRAINER_CLASS_SCHOOL_KID,
    .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Jerry2),
},

[TRAINER_JERRY_3] =
{
    .trainerName = _("Jerry"),
    .trainerClass = TRAINER_CLASS_SCHOOL_KID,
    .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Jerry3),
},

[TRAINER_JERRY_4] =
{
    .trainerName = _("Jerry"),
    .trainerClass = TRAINER_CLASS_SCHOOL_KID,
    .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Jerry4),
},

[TRAINER_JERRY_5] =
{
    .trainerName = _("Jerry"),
    .trainerClass = TRAINER_CLASS_SCHOOL_KID,
    .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Jerry5),
},

[TRAINER_KAREN_1] =
{
    .trainerName = _("Karen"),
    .trainerClass = TRAINER_CLASS_SCHOOL_KID,
    .trainerPic = TRAINER_PIC_SCHOOL_KID_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Karen1),
},

[TRAINER_GEORGIA] =
{
    .trainerName = _("Georgia"),
    .trainerClass = TRAINER_CLASS_SCHOOL_KID,
    .trainerPic = TRAINER_PIC_SCHOOL_KID_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Georgia),
},

[TRAINER_KAREN_2] =
{
    .trainerName = _("Karen"),
    .trainerClass = TRAINER_CLASS_SCHOOL_KID,
    .trainerPic = TRAINER_PIC_SCHOOL_KID_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Karen2),
},

[TRAINER_KAREN_3] =
{
    .trainerName = _("Karen"),
    .trainerClass = TRAINER_CLASS_SCHOOL_KID,
    .trainerPic = TRAINER_PIC_SCHOOL_KID_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Karen3),
},

[TRAINER_KAREN_4] =
{
    .trainerName = _("Karen"),
    .trainerClass = TRAINER_CLASS_SCHOOL_KID,
    .trainerPic = TRAINER_PIC_SCHOOL_KID_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Karen4),
},

[TRAINER_KAREN_5] =
{
    .trainerName = _("Karen"),
    .trainerClass = TRAINER_CLASS_SCHOOL_KID,
    .trainerPic = TRAINER_PIC_SCHOOL_KID_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Karen5),
},

[TRAINER_KATE_AND_JOY] =
{
    .trainerName = _("Kate & Joy"),
    .trainerClass = TRAINER_CLASS_SR_AND_JR,
    .trainerPic = TRAINER_PIC_SR_AND_JR,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
    .doubleBattle = TRUE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_KateAndJoy),
},

[TRAINER_ANNA_AND_MEG_1] =
{
    .trainerName = _("Anna & Meg"),
    .trainerClass = TRAINER_CLASS_SR_AND_JR,
    .trainerPic = TRAINER_PIC_SR_AND_JR,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
    .doubleBattle = TRUE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_AnnaAndMeg1),
},

[TRAINER_ANNA_AND_MEG_2] =
{
    .trainerName = _("Anna & Meg"),
    .trainerClass = TRAINER_CLASS_SR_AND_JR,
    .trainerPic = TRAINER_PIC_SR_AND_JR,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
    .doubleBattle = TRUE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_AnnaAndMeg2),
},

[TRAINER_ANNA_AND_MEG_3] =
{
    .trainerName = _("Anna & Meg"),
    .trainerClass = TRAINER_CLASS_SR_AND_JR,
    .trainerPic = TRAINER_PIC_SR_AND_JR,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
    .doubleBattle = TRUE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_AnnaAndMeg3),
},

[TRAINER_ANNA_AND_MEG_4] =
{
    .trainerName = _("Anna & Meg"),
    .trainerClass = TRAINER_CLASS_SR_AND_JR,
    .trainerPic = TRAINER_PIC_SR_AND_JR,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
    .doubleBattle = TRUE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_AnnaAndMeg4),
},

[TRAINER_ANNA_AND_MEG_5] =
{
    .trainerName = _("Anna & Meg"),
    .trainerClass = TRAINER_CLASS_SR_AND_JR,
    .trainerPic = TRAINER_PIC_SR_AND_JR,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
    .doubleBattle = TRUE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_AnnaAndMeg5),
},

[TRAINER_VICTOR] =
{
    .trainerName = _("Victor"),
    .trainerClass = TRAINER_CLASS_WINSTRATE,
    .trainerPic = TRAINER_PIC_POKEFAN_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Victor),
},

[TRAINER_MIGUEL_1] =
{
    .trainerName = _("Miguel"),
    .trainerClass = TRAINER_CLASS_POKEFAN,
    .trainerPic = TRAINER_PIC_POKEFAN_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Miguel1),
},

[TRAINER_COLTON] =
{
    .trainerName = _("Colton"),
    .trainerClass = TRAINER_CLASS_POKEFAN,
    .trainerPic = TRAINER_PIC_POKEFAN_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Colton),
},

[TRAINER_MIGUEL_2] =
{
    .trainerName = _("Miguel"),
    .trainerClass = TRAINER_CLASS_POKEFAN,
    .trainerPic = TRAINER_PIC_POKEFAN_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Miguel2),
},

[TRAINER_MIGUEL_3] =
{
    .trainerName = _("Miguel"),
    .trainerClass = TRAINER_CLASS_POKEFAN,
    .trainerPic = TRAINER_PIC_POKEFAN_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Miguel3),
},

[TRAINER_MIGUEL_4] =
{
    .trainerName = _("Miguel"),
    .trainerClass = TRAINER_CLASS_POKEFAN,
    .trainerPic = TRAINER_PIC_POKEFAN_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Miguel4),
},

[TRAINER_MIGUEL_5] =
{
    .trainerName = _("Miguel"),
    .trainerClass = TRAINER_CLASS_POKEFAN,
    .trainerPic = TRAINER_PIC_POKEFAN_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Miguel5),
},

[TRAINER_VICTORIA] =
{
    .trainerName = _("Victoria"),
    .trainerClass = TRAINER_CLASS_WINSTRATE,
    .trainerPic = TRAINER_PIC_POKEFAN_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_TWINS,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
    .party = TRAINER_PARTY(sParty_Victoria),
},

[TRAINER_VANESSA] =
{
    .trainerName = _("Vanessa"),
    .trainerClass = TRAINER_CLASS_POKEFAN,
    .trainerPic = TRAINER_PIC_POKEFAN_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_TWINS,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Vanessa),
},

[TRAINER_BETHANY] =
{
    .trainerName = _("Bethany"),
    .trainerClass = TRAINER_CLASS_POKEFAN,
    .trainerPic = TRAINER_PIC_POKEFAN_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_TWINS,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Bethany),
},

[TRAINER_ISABEL_1] =
{
    .trainerName = _("Isabel"),
    .trainerClass = TRAINER_CLASS_POKEFAN,
    .trainerPic = TRAINER_PIC_POKEFAN_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_TWINS,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Isabel1),
},

[TRAINER_ISABEL_2] =
{
    .trainerName = _("Isabel"),
    .trainerClass = TRAINER_CLASS_POKEFAN,
    .trainerPic = TRAINER_PIC_POKEFAN_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_TWINS,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Isabel2),
},

[TRAINER_ISABEL_3] =
{
    .trainerName = _("Isabel"),
    .trainerClass = TRAINER_CLASS_POKEFAN,
    .trainerPic = TRAINER_PIC_POKEFAN_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_TWINS,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Isabel3),
},

[TRAINER_ISABEL_4] =
{
    .trainerName = _("Isabel"),
    .trainerClass = TRAINER_CLASS_POKEFAN,
    .trainerPic = TRAINER_PIC_POKEFAN_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_TWINS,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Isabel4),
},

[TRAINER_ISABEL_5] =
{
    .trainerName = _("Isabel"),
    .trainerClass = TRAINER_CLASS_POKEFAN,
    .trainerPic = TRAINER_PIC_POKEFAN_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_TWINS,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Isabel5),
},

[TRAINER_TIMOTHY_1] =
{
    .trainerName = _("Timothy"),
    .trainerClass = TRAINER_CLASS_EXPERT,
    .trainerPic = TRAINER_PIC_EXPERT_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .party = TRAINER_PARTY(sParty_Timothy1),
},

[TRAINER_TIMOTHY_2] =
{
    .trainerName = _("Timothy"),
    .trainerClass = TRAINER_CLASS_EXPERT,
    .trainerPic = TRAINER_PIC_EXPERT_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .party = TRAINER_PARTY(sParty_Timothy2),
},

[TRAINER_TIMOTHY_3] =
{
    .trainerName = _("Timothy"),
    .trainerClass = TRAINER_CLASS_EXPERT,
    .trainerPic = TRAINER_PIC_EXPERT_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .party = TRAINER_PARTY(sParty_Timothy3),
},

[TRAINER_TIMOTHY_4] =
{
    .trainerName = _("Timothy"),
    .trainerClass = TRAINER_CLASS_EXPERT,
    .trainerPic = TRAINER_PIC_EXPERT_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .party = TRAINER_PARTY(sParty_Timothy4),
},

[TRAINER_TIMOTHY_5] =
{
    .trainerName = _("Timothy"),
    .trainerClass = TRAINER_CLASS_EXPERT,
    .trainerPic = TRAINER_PIC_EXPERT_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .party = TRAINER_PARTY(sParty_Timothy5),
},

[TRAINER_VICKY] =
{
    .trainerName = _("Vicky"),
    .trainerClass = TRAINER_CLASS_WINSTRATE,
    .trainerPic = TRAINER_PIC_EXPERT_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .party = TRAINER_PARTY(sParty_Vicky),
},

[TRAINER_SHELBY_1] =
{
    .trainerName = _("Shelby"),
    .trainerClass = TRAINER_CLASS_EXPERT,
    .trainerPic = TRAINER_PIC_EXPERT_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .party = TRAINER_PARTY(sParty_Shelby1),
},

[TRAINER_SHELBY_2] =
{
    .trainerName = _("Shelby"),
    .trainerClass = TRAINER_CLASS_EXPERT,
    .trainerPic = TRAINER_PIC_EXPERT_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .party = TRAINER_PARTY(sParty_Shelby2),
},

[TRAINER_SHELBY_3] =
{
    .trainerName = _("Shelby"),
    .trainerClass = TRAINER_CLASS_EXPERT,
    .trainerPic = TRAINER_PIC_EXPERT_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .party = TRAINER_PARTY(sParty_Shelby3),
},

[TRAINER_SHELBY_4] =
{
    .trainerName = _("Shelby"),
    .trainerClass = TRAINER_CLASS_EXPERT,
    .trainerPic = TRAINER_PIC_EXPERT_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .party = TRAINER_PARTY(sParty_Shelby4),
},

[TRAINER_SHELBY_5] =
{
    .trainerName = _("Shelby"),
    .trainerClass = TRAINER_CLASS_EXPERT,
    .trainerPic = TRAINER_PIC_EXPERT_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .party = TRAINER_PARTY(sParty_Shelby5),
},

[TRAINER_CALVIN_1] =
{
    .trainerName = _("Calvin"),
    .trainerClass = TRAINER_CLASS_YOUNGSTER,
    .trainerPic = TRAINER_PIC_YOUNGSTER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Calvin1),
},

[TRAINER_BILLY] =
{
    .trainerName = _("Billy"),
    .trainerClass = TRAINER_CLASS_YOUNGSTER,
    .trainerPic = TRAINER_PIC_YOUNGSTER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Billy),
},

[TRAINER_JOSH] =
{
    .trainerName = _("Josh"),
    .trainerClass = TRAINER_CLASS_YOUNGSTER,
    .trainerPic = TRAINER_PIC_YOUNGSTER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Josh),
},

[TRAINER_TOMMY] =
{
    .trainerName = _("Tommy"),
    .trainerClass = TRAINER_CLASS_YOUNGSTER,
    .trainerPic = TRAINER_PIC_YOUNGSTER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Tommy),
},

[TRAINER_JOEY] =
{
    .trainerName = _("Joey"),
    .trainerClass = TRAINER_CLASS_YOUNGSTER,
    .trainerPic = TRAINER_PIC_YOUNGSTER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Joey),
},

[TRAINER_BEN] =
{
    .trainerName = _("Ben"),
    .trainerClass = TRAINER_CLASS_YOUNGSTER,
    .trainerPic = TRAINER_PIC_YOUNGSTER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Ben),
},

[TRAINER_QUINCY] =
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

[TRAINER_KATELYNN] =
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

[TRAINER_JAYLEN] =
{
    .trainerName = _("Jaylen"),
    .trainerClass = TRAINER_CLASS_YOUNGSTER,
    .trainerPic = TRAINER_PIC_YOUNGSTER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Jaylen),
},

[TRAINER_DILLON] =
{
    .trainerName = _("Dillon"),
    .trainerClass = TRAINER_CLASS_YOUNGSTER,
    .trainerPic = TRAINER_PIC_YOUNGSTER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Dillon),
},

[TRAINER_CALVIN_2] =
{
    .trainerName = _("Calvin"),
    .trainerClass = TRAINER_CLASS_YOUNGSTER,
    .trainerPic = TRAINER_PIC_YOUNGSTER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Calvin2),
},

[TRAINER_CALVIN_3] =
{
    .trainerName = _("Calvin"),
    .trainerClass = TRAINER_CLASS_YOUNGSTER,
    .trainerPic = TRAINER_PIC_YOUNGSTER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Calvin3),
},

[TRAINER_CALVIN_4] =
{
    .trainerName = _("Calvin"),
    .trainerClass = TRAINER_CLASS_YOUNGSTER,
    .trainerPic = TRAINER_PIC_YOUNGSTER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Calvin4),
},

[TRAINER_CALVIN_5] =
{
    .trainerName = _("Calvin"),
    .trainerClass = TRAINER_CLASS_YOUNGSTER,
    .trainerPic = TRAINER_PIC_YOUNGSTER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Calvin5),
},

[TRAINER_EDDIE] =
{
    .trainerName = _("Eddie"),
    .trainerClass = TRAINER_CLASS_YOUNGSTER,
    .trainerPic = TRAINER_PIC_YOUNGSTER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Eddie),
},

[TRAINER_ALLEN] =
{
    .trainerName = _("Allen"),
    .trainerClass = TRAINER_CLASS_YOUNGSTER,
    .trainerPic = TRAINER_PIC_YOUNGSTER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Allen),
},

[TRAINER_TIMMY] =
{
    .trainerName = _("Timmy"),
    .trainerClass = TRAINER_CLASS_YOUNGSTER,
    .trainerPic = TRAINER_PIC_YOUNGSTER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Timmy),
},

[TRAINER_WALLACE] =
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

[TRAINER_ANDREW] =
{
    .trainerName = _("Andrew"),
    .trainerClass = TRAINER_CLASS_FISHERMAN,
    .trainerPic = TRAINER_PIC_FISHERMAN,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Andrew),
},

[TRAINER_IVAN] =
{
    .trainerName = _("Ivan"),
    .trainerClass = TRAINER_CLASS_FISHERMAN,
    .trainerPic = TRAINER_PIC_FISHERMAN,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Ivan),
},

[TRAINER_CLAUDE] =
{
    .trainerName = _("Claude"),
    .trainerClass = TRAINER_CLASS_FISHERMAN,
    .trainerPic = TRAINER_PIC_FISHERMAN,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Claude),
},

[TRAINER_ELLIOT_1] =
{
    .trainerName = _("Elliot"),
    .trainerClass = TRAINER_CLASS_FISHERMAN,
    .trainerPic = TRAINER_PIC_FISHERMAN,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Elliot1),
},

[TRAINER_NED] =
{
    .trainerName = _("Ned"),
    .trainerClass = TRAINER_CLASS_FISHERMAN,
    .trainerPic = TRAINER_PIC_FISHERMAN,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Ned),
},

[TRAINER_DALE] =
{
    .trainerName = _("Dale"),
    .trainerClass = TRAINER_CLASS_FISHERMAN,
    .trainerPic = TRAINER_PIC_FISHERMAN,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Dale),
},

[TRAINER_NOLAN] =
{
    .trainerName = _("Nolan"),
    .trainerClass = TRAINER_CLASS_FISHERMAN,
    .trainerPic = TRAINER_PIC_FISHERMAN,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Nolan),
},

[TRAINER_BARNY] =
{
    .trainerName = _("Barny"),
    .trainerClass = TRAINER_CLASS_FISHERMAN,
    .trainerPic = TRAINER_PIC_FISHERMAN,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Barny),
},

[TRAINER_WADE] =
{
    .trainerName = _("Wade"),
    .trainerClass = TRAINER_CLASS_FISHERMAN,
    .trainerPic = TRAINER_PIC_FISHERMAN,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Wade),
},

[TRAINER_CARTER] =
{
    .trainerName = _("Carter"),
    .trainerClass = TRAINER_CLASS_FISHERMAN,
    .trainerPic = TRAINER_PIC_FISHERMAN,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Carter),
},

[TRAINER_ELLIOT_2] =
{
    .trainerName = _("Elliot"),
    .trainerClass = TRAINER_CLASS_FISHERMAN,
    .trainerPic = TRAINER_PIC_FISHERMAN,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Elliot2),
},

[TRAINER_ELLIOT_3] =
{
    .trainerName = _("Elliot"),
    .trainerClass = TRAINER_CLASS_FISHERMAN,
    .trainerPic = TRAINER_PIC_FISHERMAN,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Elliot3),
},

[TRAINER_ELLIOT_4] =
{
    .trainerName = _("Elliot"),
    .trainerClass = TRAINER_CLASS_FISHERMAN,
    .trainerPic = TRAINER_PIC_FISHERMAN,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Elliot4),
},

[TRAINER_ELLIOT_5] =
{
    .trainerName = _("Elliot"),
    .trainerClass = TRAINER_CLASS_FISHERMAN,
    .trainerPic = TRAINER_PIC_FISHERMAN,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
    .party = TRAINER_PARTY(sParty_Elliot5),
},

[TRAINER_RONALD] =
{
    .trainerName = _("Ronald"),
    .trainerClass = TRAINER_CLASS_FISHERMAN,
    .trainerPic = TRAINER_PIC_FISHERMAN,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Ronald),
},

[TRAINER_JACOB] =
{
    .trainerName = _("Jacob"),
    .trainerClass = TRAINER_CLASS_TRIATHLETE,
    .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Jacob),
},

[TRAINER_ANTHONY] =
{
    .trainerName = _("Anthony"),
    .trainerClass = TRAINER_CLASS_TRIATHLETE,
    .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Anthony),
},

[TRAINER_BENJAMIN_1] =
{
    .trainerName = _("Benjamin"),
    .trainerClass = TRAINER_CLASS_TRIATHLETE,
    .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Benjamin1),
},

[TRAINER_BENJAMIN_2] =
{
    .trainerName = _("Benjamin"),
    .trainerClass = TRAINER_CLASS_TRIATHLETE,
    .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Benjamin2),
},

[TRAINER_BENJAMIN_3] =
{
    .trainerName = _("Benjamin"),
    .trainerClass = TRAINER_CLASS_TRIATHLETE,
    .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Benjamin3),
},

[TRAINER_BENJAMIN_4] =
{
    .trainerName = _("Benjamin"),
    .trainerClass = TRAINER_CLASS_TRIATHLETE,
    .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Benjamin4),
},

[TRAINER_BENJAMIN_5] =
{
    .trainerName = _("Benjamin"),
    .trainerClass = TRAINER_CLASS_TRIATHLETE,
    .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Benjamin5),
},

[TRAINER_ABIGAIL_1] =
{
    .trainerName = _("Abigail"),
    .trainerClass = TRAINER_CLASS_TRIATHLETE,
    .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Abigail1),
},

[TRAINER_JASMINE] =
{
    .trainerName = _("Jasmine"),
    .trainerClass = TRAINER_CLASS_TRIATHLETE,
    .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Jasmine),
},

[TRAINER_ABIGAIL_2] =
{
    .trainerName = _("Abigail"),
    .trainerClass = TRAINER_CLASS_TRIATHLETE,
    .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Abigail2),
},

[TRAINER_ABIGAIL_3] =
{
    .trainerName = _("Abigail"),
    .trainerClass = TRAINER_CLASS_TRIATHLETE,
    .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Abigail3),
},

[TRAINER_ABIGAIL_4] =
{
    .trainerName = _("Abigail"),
    .trainerClass = TRAINER_CLASS_TRIATHLETE,
    .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Abigail4),
},

[TRAINER_ABIGAIL_5] =
{
    .trainerName = _("Abigail"),
    .trainerClass = TRAINER_CLASS_TRIATHLETE,
    .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Abigail5),
},

[TRAINER_DYLAN_1] =
{
    .trainerName = _("Dylan"),
    .trainerClass = TRAINER_CLASS_TRIATHLETE,
    .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Dylan1),
},

[TRAINER_DYLAN_2] =
{
    .trainerName = _("Dylan"),
    .trainerClass = TRAINER_CLASS_TRIATHLETE,
    .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Dylan2),
},

[TRAINER_DYLAN_3] =
{
    .trainerName = _("Dylan"),
    .trainerClass = TRAINER_CLASS_TRIATHLETE,
    .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Dylan3),
},

[TRAINER_DYLAN_4] =
{
    .trainerName = _("Dylan"),
    .trainerClass = TRAINER_CLASS_TRIATHLETE,
    .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Dylan4),
},

[TRAINER_DYLAN_5] =
{
    .trainerName = _("Dylan"),
    .trainerClass = TRAINER_CLASS_TRIATHLETE,
    .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Dylan5),
},

[TRAINER_MARIA_1] =
{
    .trainerName = _("Maria"),
    .trainerClass = TRAINER_CLASS_TRIATHLETE,
    .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Maria1),
},

[TRAINER_MARIA_2] =
{
    .trainerName = _("Maria"),
    .trainerClass = TRAINER_CLASS_TRIATHLETE,
    .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Maria2),
},

[TRAINER_MARIA_3] =
{
    .trainerName = _("Maria"),
    .trainerClass = TRAINER_CLASS_TRIATHLETE,
    .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Maria3),
},

[TRAINER_MARIA_4] =
{
    .trainerName = _("Maria"),
    .trainerClass = TRAINER_CLASS_TRIATHLETE,
    .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Maria4),
},

[TRAINER_MARIA_5] =
{
    .trainerName = _("Maria"),
    .trainerClass = TRAINER_CLASS_TRIATHLETE,
    .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Maria5),
},

[TRAINER_CAMDEN] =
{
    .trainerName = _("Camden"),
    .trainerClass = TRAINER_CLASS_TRIATHLETE,
    .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Camden),
},

[TRAINER_DEMETRIUS] =
{
    .trainerName = _("Demetrius"),
    .trainerClass = TRAINER_CLASS_YOUNGSTER,
    .trainerPic = TRAINER_PIC_YOUNGSTER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Demetrius),
},

[TRAINER_ISAIAH_1] =
{
    .trainerName = _("Isaiah"),
    .trainerClass = TRAINER_CLASS_TRIATHLETE,
    .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Isaiah1),
},

[TRAINER_PABLO_1] =
{
    .trainerName = _("Pablo"),
    .trainerClass = TRAINER_CLASS_TRIATHLETE,
    .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Pablo1),
},

[TRAINER_CHASE] =
{
    .trainerName = _("Chase"),
    .trainerClass = TRAINER_CLASS_TRIATHLETE,
    .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Chase),
},

[TRAINER_ISAIAH_2] =
{
    .trainerName = _("Isaiah"),
    .trainerClass = TRAINER_CLASS_TRIATHLETE,
    .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Isaiah2),
},

[TRAINER_ISAIAH_3] =
{
    .trainerName = _("Isaiah"),
    .trainerClass = TRAINER_CLASS_TRIATHLETE,
    .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Isaiah3),
},

[TRAINER_ISAIAH_4] =
{
    .trainerName = _("Isaiah"),
    .trainerClass = TRAINER_CLASS_TRIATHLETE,
    .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Isaiah4),
},

[TRAINER_ISAIAH_5] =
{
    .trainerName = _("Isaiah"),
    .trainerClass = TRAINER_CLASS_TRIATHLETE,
    .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Isaiah5),
},

[TRAINER_ISOBEL] =
{
    .trainerName = _("Isobel"),
    .trainerClass = TRAINER_CLASS_TRIATHLETE,
    .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Isobel),
},

[TRAINER_DONNY] =
{
    .trainerName = _("Donny"),
    .trainerClass = TRAINER_CLASS_TRIATHLETE,
    .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Donny),
},

[TRAINER_TALIA] =
{
    .trainerName = _("Talia"),
    .trainerClass = TRAINER_CLASS_TRIATHLETE,
    .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Talia),
},

[TRAINER_KATELYN_1] =
{
    .trainerName = _("Katelyn"),
    .trainerClass = TRAINER_CLASS_TRIATHLETE,
    .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Katelyn1),
},

[TRAINER_ALLISON] =
{
    .trainerName = _("Allison"),
    .trainerClass = TRAINER_CLASS_TRIATHLETE,
    .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Allison),
},

[TRAINER_KATELYN_2] =
{
    .trainerName = _("Katelyn"),
    .trainerClass = TRAINER_CLASS_TRIATHLETE,
    .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Katelyn2),
},

[TRAINER_KATELYN_3] =
{
    .trainerName = _("Katelyn"),
    .trainerClass = TRAINER_CLASS_TRIATHLETE,
    .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Katelyn3),
},

[TRAINER_KATELYN_4] =
{
    .trainerName = _("Katelyn"),
    .trainerClass = TRAINER_CLASS_TRIATHLETE,
    .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Katelyn4),
},

[TRAINER_KATELYN_5] =
{
    .trainerName = _("Katelyn"),
    .trainerClass = TRAINER_CLASS_TRIATHLETE,
    .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Katelyn5),
},

[TRAINER_NICOLAS_1] =
{
    .trainerName = _("Nicolas"),
    .trainerClass = TRAINER_CLASS_DRAGON_TAMER,
    .trainerPic = TRAINER_PIC_DRAGON_TAMER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Nicolas1),
},

[TRAINER_NICOLAS_2] =
{
    .trainerName = _("Nicolas"),
    .trainerClass = TRAINER_CLASS_DRAGON_TAMER,
    .trainerPic = TRAINER_PIC_DRAGON_TAMER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Nicolas2),
},

[TRAINER_NICOLAS_3] =
{
    .trainerName = _("Nicolas"),
    .trainerClass = TRAINER_CLASS_DRAGON_TAMER,
    .trainerPic = TRAINER_PIC_DRAGON_TAMER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Nicolas3),
},

[TRAINER_NICOLAS_4] =
{
    .trainerName = _("Nicolas"),
    .trainerClass = TRAINER_CLASS_DRAGON_TAMER,
    .trainerPic = TRAINER_PIC_DRAGON_TAMER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Nicolas4),
},

[TRAINER_NICOLAS_5] =
{
    .trainerName = _("Nicolas"),
    .trainerClass = TRAINER_CLASS_DRAGON_TAMER,
    .trainerPic = TRAINER_PIC_DRAGON_TAMER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Nicolas5),
},

[TRAINER_AARON] =
{
    .trainerName = _("Aaron"),
    .trainerClass = TRAINER_CLASS_DRAGON_TAMER,
    .trainerPic = TRAINER_PIC_DRAGON_TAMER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Aaron),
},

[TRAINER_PERRY] =
{
    .trainerName = _("Perry"),
    .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
    .trainerPic = TRAINER_PIC_BIRD_KEEPER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Perry),
},

[TRAINER_HUGH] =
{
    .trainerName = _("Hugh"),
    .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
    .trainerPic = TRAINER_PIC_BIRD_KEEPER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Hugh),
},

[TRAINER_PHIL] =
{
    .trainerName = _("Phil"),
    .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
    .trainerPic = TRAINER_PIC_BIRD_KEEPER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Phil),
},

[TRAINER_JARED] =
{
    .trainerName = _("Jared"),
    .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
    .trainerPic = TRAINER_PIC_BIRD_KEEPER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Jared),
},

[TRAINER_HUMBERTO] =
{
    .trainerName = _("Humberto"),
    .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
    .trainerPic = TRAINER_PIC_BIRD_KEEPER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Humberto),
},

[TRAINER_PRESLEY] =
{
    .trainerName = _("Presley"),
    .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
    .trainerPic = TRAINER_PIC_BIRD_KEEPER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Presley),
},

[TRAINER_EDWARDO] =
{
    .trainerName = _("Edwardo"),
    .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
    .trainerPic = TRAINER_PIC_BIRD_KEEPER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Edwardo),
},

[TRAINER_COLIN] =
{
    .trainerName = _("Colin"),
    .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
    .trainerPic = TRAINER_PIC_BIRD_KEEPER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Colin),
},

[TRAINER_ROBERT_1] =
{
    .trainerName = _("Robert"),
    .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
    .trainerPic = TRAINER_PIC_BIRD_KEEPER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Robert1),
},

[TRAINER_BENNY] =
{
    .trainerName = _("Benny"),
    .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
    .trainerPic = TRAINER_PIC_BIRD_KEEPER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Benny),
},

[TRAINER_CHESTER] =
{
    .trainerName = _("Chester"),
    .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
    .trainerPic = TRAINER_PIC_BIRD_KEEPER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Chester),
},

[TRAINER_ROBERT_2] =
{
    .trainerName = _("Robert"),
    .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
    .trainerPic = TRAINER_PIC_BIRD_KEEPER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Robert2),
},

[TRAINER_ROBERT_3] =
{
    .trainerName = _("Robert"),
    .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
    .trainerPic = TRAINER_PIC_BIRD_KEEPER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Robert3),
},

[TRAINER_ROBERT_4] =
{
    .trainerName = _("Robert"),
    .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
    .trainerPic = TRAINER_PIC_BIRD_KEEPER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Robert4),
},

[TRAINER_ROBERT_5] =
{
    .trainerName = _("Robert"),
    .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
    .trainerPic = TRAINER_PIC_BIRD_KEEPER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Robert5),
},

[TRAINER_ALEX] =
{
    .trainerName = _("Alex"),
    .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
    .trainerPic = TRAINER_PIC_BIRD_KEEPER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Alex),
},

[TRAINER_BECK] =
{
    .trainerName = _("Beck"),
    .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
    .trainerPic = TRAINER_PIC_BIRD_KEEPER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Beck),
},

[TRAINER_YASU] =
{
    .trainerName = _("Yasu"),
    .trainerClass = TRAINER_CLASS_NINJA_BOY,
    .trainerPic = TRAINER_PIC_NINJA_BOY,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
    .party = TRAINER_PARTY(sParty_Yasu),
},

[TRAINER_TAKASHI] =
{
    .trainerName = _("Takashi"),
    .trainerClass = TRAINER_CLASS_NINJA_BOY,
    .trainerPic = TRAINER_PIC_NINJA_BOY,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
    .party = TRAINER_PARTY(sParty_Takashi),
},

[TRAINER_DIANNE] =
{
    .trainerName = _("Dianne"),
    .trainerClass = TRAINER_CLASS_COOLTRAINER,
    .trainerPic = TRAINER_PIC_COOLTRAINER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
    .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
    .doubleBattle = FALSE,
    .party = TRAINER_PARTY(sParty_Dianne),
},

[TRAINER_JANI] =
{
    .trainerName = _("Jani"),
    .trainerClass = TRAINER_CLASS_TUBER,
    .trainerPic = TRAINER_PIC_TUBER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
    .doubleBattle = FALSE,
    .party = TRAINER_PARTY(sParty_Jani),
},

[TRAINER_LAO_1] =
{
    .trainerName = _("Lao"),
    .trainerClass = TRAINER_CLASS_NINJA_BOY,
    .trainerPic = TRAINER_PIC_NINJA_BOY,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
    .doubleBattle = FALSE,
    .party = TRAINER_PARTY(sParty_Lao1),
},

[TRAINER_LUNG] =
{
    .trainerName = _("Lung"),
    .trainerClass = TRAINER_CLASS_NINJA_BOY,
    .trainerPic = TRAINER_PIC_NINJA_BOY,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
    .doubleBattle = FALSE,
    .party = TRAINER_PARTY(sParty_Lung),
},

[TRAINER_LAO_2] =
{
    .trainerName = _("Lao"),
    .trainerClass = TRAINER_CLASS_NINJA_BOY,
    .trainerPic = TRAINER_PIC_NINJA_BOY,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
    .doubleBattle = FALSE,
    .party = TRAINER_PARTY(sParty_Lao2),
},

[TRAINER_LAO_3] =
{
    .trainerName = _("Lao"),
    .trainerClass = TRAINER_CLASS_NINJA_BOY,
    .trainerPic = TRAINER_PIC_NINJA_BOY,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
    .doubleBattle = FALSE,
    .party = TRAINER_PARTY(sParty_Lao3),
},

[TRAINER_LAO_4] =
{
    .trainerName = _("Lao"),
    .trainerClass = TRAINER_CLASS_NINJA_BOY,
    .trainerPic = TRAINER_PIC_NINJA_BOY,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
    .doubleBattle = FALSE,
    .party = TRAINER_PARTY(sParty_Lao4),
},

[TRAINER_LAO_5] =
{
    .trainerName = _("Lao"),
    .trainerClass = TRAINER_CLASS_NINJA_BOY,
    .trainerPic = TRAINER_PIC_NINJA_BOY,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
    .doubleBattle = FALSE,
    .party = TRAINER_PARTY(sParty_Lao5),
},

[TRAINER_JOCELYN] =
{
    .trainerName = _("Jocelyn"),
    .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
    .trainerPic = TRAINER_PIC_BATTLE_GIRL,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Jocelyn),
},

[TRAINER_LAURA] =
{
    .trainerName = _("Laura"),
    .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
    .trainerPic = TRAINER_PIC_BATTLE_GIRL,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Laura),
},

[TRAINER_CYNDY_1] =
{
    .trainerName = _("Cyndy"),
    .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
    .trainerPic = TRAINER_PIC_BATTLE_GIRL,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Cyndy1),
},

[TRAINER_CORA] =
{
    .trainerName = _("Cora"),
    .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
    .trainerPic = TRAINER_PIC_BATTLE_GIRL,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Cora),
},

[TRAINER_PAULA] =
{
    .trainerName = _("Paula"),
    .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
    .trainerPic = TRAINER_PIC_BATTLE_GIRL,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Paula),
},

[TRAINER_CYNDY_2] =
{
    .trainerName = _("Cyndy"),
    .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
    .trainerPic = TRAINER_PIC_BATTLE_GIRL,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Cyndy2),
},

[TRAINER_CYNDY_3] =
{
    .trainerName = _("Cyndy"),
    .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
    .trainerPic = TRAINER_PIC_BATTLE_GIRL,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Cyndy3),
},

[TRAINER_CYNDY_4] =
{
    .trainerName = _("Cyndy"),
    .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
    .trainerPic = TRAINER_PIC_BATTLE_GIRL,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Cyndy4),
},

[TRAINER_CYNDY_5] =
{
    .trainerName = _("Cyndy"),
    .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
    .trainerPic = TRAINER_PIC_BATTLE_GIRL,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Cyndy5),
},

[TRAINER_MADELINE_1] =
{
    .trainerName = _("Madeline"),
    .trainerClass = TRAINER_CLASS_PARASOL_LADY,
    .trainerPic = TRAINER_PIC_PARASOL_LADY,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Madeline1),
},

[TRAINER_CLARISSA] =
{
    .trainerName = _("Clarissa"),
    .trainerClass = TRAINER_CLASS_PARASOL_LADY,
    .trainerPic = TRAINER_PIC_PARASOL_LADY,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Clarissa),
},

[TRAINER_ANGELICA] =
{
    .trainerName = _("Angelica"),
    .trainerClass = TRAINER_CLASS_PARASOL_LADY,
    .trainerPic = TRAINER_PIC_PARASOL_LADY,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Angelica),
},

[TRAINER_MADELINE_2] =
{
    .trainerName = _("Madeline"),
    .trainerClass = TRAINER_CLASS_PARASOL_LADY,
    .trainerPic = TRAINER_PIC_PARASOL_LADY,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Madeline2),
},

[TRAINER_MADELINE_3] =
{
    .trainerName = _("Madeline"),
    .trainerClass = TRAINER_CLASS_PARASOL_LADY,
    .trainerPic = TRAINER_PIC_PARASOL_LADY,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Madeline3),
},

[TRAINER_MADELINE_4] =
{
    .trainerName = _("Madeline"),
    .trainerClass = TRAINER_CLASS_PARASOL_LADY,
    .trainerPic = TRAINER_PIC_PARASOL_LADY,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Madeline4),
},

[TRAINER_MADELINE_5] =
{
    .trainerName = _("Madeline"),
    .trainerClass = TRAINER_CLASS_PARASOL_LADY,
    .trainerPic = TRAINER_PIC_PARASOL_LADY,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Madeline5),
},

[TRAINER_BEVERLY] =
{
    .trainerName = _("Beverly"),
    .trainerClass = TRAINER_CLASS_SWIMMER,
    .trainerPic = TRAINER_PIC_SWIMMER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Beverly),
},

[TRAINER_IMANI] =
{
    .trainerName = _("Imani"),
    .trainerClass = TRAINER_CLASS_SWIMMER,
    .trainerPic = TRAINER_PIC_SWIMMER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Imani),
},

[TRAINER_KYLA] =
{
    .trainerName = _("Kyla"),
    .trainerClass = TRAINER_CLASS_SWIMMER,
    .trainerPic = TRAINER_PIC_SWIMMER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Kyla),
},

[TRAINER_DENISE] =
{
    .trainerName = _("Denise"),
    .trainerClass = TRAINER_CLASS_SWIMMER,
    .trainerPic = TRAINER_PIC_SWIMMER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Denise),
},

[TRAINER_BETH] =
{
    .trainerName = _("Beth"),
    .trainerClass = TRAINER_CLASS_SWIMMER,
    .trainerPic = TRAINER_PIC_SWIMMER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Beth),
},

[TRAINER_TARA] =
{
    .trainerName = _("Tara"),
    .trainerClass = TRAINER_CLASS_SWIMMER,
    .trainerPic = TRAINER_PIC_SWIMMER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Tara),
},

[TRAINER_MISSY] =
{
    .trainerName = _("Missy"),
    .trainerClass = TRAINER_CLASS_SWIMMER,
    .trainerPic = TRAINER_PIC_SWIMMER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Missy),
},

[TRAINER_ALICE] =
{
    .trainerName = _("Alice"),
    .trainerClass = TRAINER_CLASS_SWIMMER,
    .trainerPic = TRAINER_PIC_SWIMMER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Alice),
},

[TRAINER_JENNY_1] =
{
    .trainerName = _("Jenny"),
    .trainerClass = TRAINER_CLASS_SWIMMER,
    .trainerPic = TRAINER_PIC_SWIMMER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Jenny1),
},

[TRAINER_GRACE] =
{
    .trainerName = _("Grace"),
    .trainerClass = TRAINER_CLASS_SWIMMER,
    .trainerPic = TRAINER_PIC_SWIMMER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Grace),
},

[TRAINER_TANYA] =
{
    .trainerName = _("Tanya"),
    .trainerClass = TRAINER_CLASS_SWIMMER,
    .trainerPic = TRAINER_PIC_SWIMMER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Tanya),
},

[TRAINER_SHARON] =
{
    .trainerName = _("Sharon"),
    .trainerClass = TRAINER_CLASS_SWIMMER,
    .trainerPic = TRAINER_PIC_SWIMMER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Sharon),
},

[TRAINER_NIKKI] =
{
    .trainerName = _("Nikki"),
    .trainerClass = TRAINER_CLASS_SWIMMER,
    .trainerPic = TRAINER_PIC_SWIMMER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Nikki),
},

[TRAINER_BRENDA] =
{
    .trainerName = _("Brenda"),
    .trainerClass = TRAINER_CLASS_SWIMMER,
    .trainerPic = TRAINER_PIC_SWIMMER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Brenda),
},

[TRAINER_KATIE] =
{
    .trainerName = _("Katie"),
    .trainerClass = TRAINER_CLASS_SWIMMER,
    .trainerPic = TRAINER_PIC_SWIMMER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Katie),
},

[TRAINER_SUSIE] =
{
    .trainerName = _("Susie"),
    .trainerClass = TRAINER_CLASS_SWIMMER,
    .trainerPic = TRAINER_PIC_SWIMMER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Susie),
},

[TRAINER_KARA] =
{
    .trainerName = _("Kara"),
    .trainerClass = TRAINER_CLASS_SWIMMER,
    .trainerPic = TRAINER_PIC_SWIMMER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Kara),
},

[TRAINER_DANA] =
{
    .trainerName = _("Dana"),
    .trainerClass = TRAINER_CLASS_SWIMMER,
    .trainerPic = TRAINER_PIC_SWIMMER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Dana),
},

[TRAINER_SIENNA] =
{
    .trainerName = _("Sienna"),
    .trainerClass = TRAINER_CLASS_SWIMMER,
    .trainerPic = TRAINER_PIC_SWIMMER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Sienna),
},

[TRAINER_DEBRA] =
{
    .trainerName = _("Debra"),
    .trainerClass = TRAINER_CLASS_SWIMMER,
    .trainerPic = TRAINER_PIC_SWIMMER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Debra),
},

[TRAINER_LINDA] =
{
    .trainerName = _("Linda"),
    .trainerClass = TRAINER_CLASS_SWIMMER,
    .trainerPic = TRAINER_PIC_SWIMMER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Linda),
},

[TRAINER_KAYLEE] =
{
    .trainerName = _("Kaylee"),
    .trainerClass = TRAINER_CLASS_SWIMMER,
    .trainerPic = TRAINER_PIC_SWIMMER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Kaylee),
},

[TRAINER_LAUREL] =
{
    .trainerName = _("Laurel"),
    .trainerClass = TRAINER_CLASS_SWIMMER,
    .trainerPic = TRAINER_PIC_SWIMMER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Laurel),
},

[TRAINER_CARLEE] =
{
    .trainerName = _("Carlee"),
    .trainerClass = TRAINER_CLASS_SWIMMER,
    .trainerPic = TRAINER_PIC_SWIMMER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Carlee),
},

[TRAINER_JENNY_2] =
{
    .trainerName = _("Jenny"),
    .trainerClass = TRAINER_CLASS_SWIMMER,
    .trainerPic = TRAINER_PIC_SWIMMER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Jenny2),
},

[TRAINER_JENNY_3] =
{
    .trainerName = _("Jenny"),
    .trainerClass = TRAINER_CLASS_SWIMMER,
    .trainerPic = TRAINER_PIC_SWIMMER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Jenny3),
},

[TRAINER_JENNY_4] =
{
    .trainerName = _("Jenny"),
    .trainerClass = TRAINER_CLASS_SWIMMER,
    .trainerPic = TRAINER_PIC_SWIMMER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Jenny4),
},

[TRAINER_JENNY_5] =
{
    .trainerName = _("Jenny"),
    .trainerClass = TRAINER_CLASS_SWIMMER,
    .trainerPic = TRAINER_PIC_SWIMMER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Jenny5),
},

[TRAINER_HEIDI] =
{
    .trainerName = _("Heidi"),
    .trainerClass = TRAINER_CLASS_PICNICKER,
    .trainerPic = TRAINER_PIC_PICNICKER,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Heidi),
},

[TRAINER_BECKY] =
{
    .trainerName = _("Becky"),
    .trainerClass = TRAINER_CLASS_PICNICKER,
    .trainerPic = TRAINER_PIC_PICNICKER,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Becky),
},

[TRAINER_CAROL] =
{
    .trainerName = _("Carol"),
    .trainerClass = TRAINER_CLASS_PICNICKER,
    .trainerPic = TRAINER_PIC_PICNICKER,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Carol),
},

[TRAINER_NANCY] =
{
    .trainerName = _("Nancy"),
    .trainerClass = TRAINER_CLASS_PICNICKER,
    .trainerPic = TRAINER_PIC_PICNICKER,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Nancy),
},

[TRAINER_MARTHA] =
{
    .trainerName = _("Martha"),
    .trainerClass = TRAINER_CLASS_PICNICKER,
    .trainerPic = TRAINER_PIC_PICNICKER,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Martha),
},

[TRAINER_DIANA_1] =
{
    .trainerName = _("Diana"),
    .trainerClass = TRAINER_CLASS_PICNICKER,
    .trainerPic = TRAINER_PIC_PICNICKER,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Diana1),
},

[TRAINER_CEDRIC] =
{
    .trainerName = _("Cedric"),
    .trainerClass = TRAINER_CLASS_PSYCHIC,
    .trainerPic = TRAINER_PIC_PSYCHIC_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Cedric),
},

[TRAINER_IRENE] =
{
    .trainerName = _("Irene"),
    .trainerClass = TRAINER_CLASS_PICNICKER,
    .trainerPic = TRAINER_PIC_PICNICKER,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Irene),
},

[TRAINER_DIANA_2] =
{
    .trainerName = _("Diana"),
    .trainerClass = TRAINER_CLASS_PICNICKER,
    .trainerPic = TRAINER_PIC_PICNICKER,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Diana2),
},

[TRAINER_DIANA_3] =
{
    .trainerName = _("Diana"),
    .trainerClass = TRAINER_CLASS_PICNICKER,
    .trainerPic = TRAINER_PIC_PICNICKER,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Diana3),
},

[TRAINER_DIANA_4] =
{
    .trainerName = _("Diana"),
    .trainerClass = TRAINER_CLASS_PICNICKER,
    .trainerPic = TRAINER_PIC_PICNICKER,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Diana4),
},

[TRAINER_DIANA_5] =
{
    .trainerName = _("Diana"),
    .trainerClass = TRAINER_CLASS_PICNICKER,
    .trainerPic = TRAINER_PIC_PICNICKER,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Diana5),
},

[TRAINER_AMY_AND_LIV_1] =
{
    .trainerName = _("Amy & Liv"),
    .trainerClass = TRAINER_CLASS_TWINS,
    .trainerPic = TRAINER_PIC_TWINS,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
    .doubleBattle = TRUE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_AmyAndLiv1),
},

[TRAINER_AMY_AND_LIV_2] =
{
    .trainerName = _("Amy & Liv"),
    .trainerClass = TRAINER_CLASS_TWINS,
    .trainerPic = TRAINER_PIC_TWINS,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
    .doubleBattle = TRUE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_AmyAndLiv2),
},

[TRAINER_GINA_AND_MIA_1] =
{
    .trainerName = _("Gina & Mia"),
    .trainerClass = TRAINER_CLASS_TWINS,
    .trainerPic = TRAINER_PIC_TWINS,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
    .doubleBattle = TRUE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_GinaAndMia1),
},

[TRAINER_MIU_AND_YUKI] =
{
    .trainerName = _("Miu & Yuki"),
    .trainerClass = TRAINER_CLASS_TWINS,
    .trainerPic = TRAINER_PIC_TWINS,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
    .doubleBattle = TRUE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_MiuAndYuki),
},

[TRAINER_UNUSED_2] =
{
    .trainerName = _("Amy & Liv"),
    .trainerClass = TRAINER_CLASS_TWINS,
    .trainerPic = TRAINER_PIC_TWINS,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
    .doubleBattle = TRUE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Unused2),
},

[TRAINER_GINA_AND_MIA_2] =
{
    .trainerName = _("Gina & Mia"),
    .trainerClass = TRAINER_CLASS_TWINS,
    .trainerPic = TRAINER_PIC_TWINS,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
    .doubleBattle = TRUE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_GinaAndMia2),
},

[TRAINER_AMY_AND_LIV_3] =
{
    .trainerName = _("Amy & Liv"),
    .trainerClass = TRAINER_CLASS_TWINS,
    .trainerPic = TRAINER_PIC_TWINS,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
    .doubleBattle = TRUE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_AmyAndLiv3),
},

[TRAINER_AMY_AND_LIV_4] =
{
    .trainerName = _("Amy & Liv"),
    .trainerClass = TRAINER_CLASS_TWINS,
    .trainerPic = TRAINER_PIC_TWINS,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
    .doubleBattle = TRUE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_AmyAndLiv4),
},

[TRAINER_AMY_AND_LIV_5] =
{
    .trainerName = _("Amy & Liv"),
    .trainerClass = TRAINER_CLASS_TWINS,
    .trainerPic = TRAINER_PIC_TWINS,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
    .doubleBattle = TRUE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_AmyAndLiv5),
},

[TRAINER_HUEY] =
{
    .trainerName = _("Huey"),
    .trainerClass = TRAINER_CLASS_SAILOR,
    .trainerPic = TRAINER_PIC_SAILOR,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Huey),
},

[TRAINER_EDMOND] =
{
    .trainerName = _("Edmond"),
    .trainerClass = TRAINER_CLASS_SAILOR,
    .trainerPic = TRAINER_PIC_SAILOR,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Edmond),
},

[TRAINER_ERNEST_1] =
{
    .trainerName = _("Ernest"),
    .trainerClass = TRAINER_CLASS_SAILOR,
    .trainerPic = TRAINER_PIC_SAILOR,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Ernest1),
},

[TRAINER_DWAYNE] =
{
    .trainerName = _("Dwayne"),
    .trainerClass = TRAINER_CLASS_SAILOR,
    .trainerPic = TRAINER_PIC_SAILOR,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Dwayne),
},

[TRAINER_PHILLIP] =
{
    .trainerName = _("Phillip"),
    .trainerClass = TRAINER_CLASS_SAILOR,
    .trainerPic = TRAINER_PIC_SAILOR,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Phillip),
},

[TRAINER_LEONARD] =
{
    .trainerName = _("Leonard"),
    .trainerClass = TRAINER_CLASS_SAILOR,
    .trainerPic = TRAINER_PIC_SAILOR,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Leonard),
},

[TRAINER_DUNCAN] =
{
    .trainerName = _("Duncan"),
    .trainerClass = TRAINER_CLASS_SAILOR,
    .trainerPic = TRAINER_PIC_SAILOR,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Duncan),
},

[TRAINER_ERNEST_2] =
{
    .trainerName = _("Ernest"),
    .trainerClass = TRAINER_CLASS_SAILOR,
    .trainerPic = TRAINER_PIC_SAILOR,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Ernest2),
},

[TRAINER_ERNEST_3] =
{
    .trainerName = _("Ernest"),
    .trainerClass = TRAINER_CLASS_SAILOR,
    .trainerPic = TRAINER_PIC_SAILOR,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Ernest3),
},

[TRAINER_ERNEST_4] =
{
    .trainerName = _("Ernest"),
    .trainerClass = TRAINER_CLASS_SAILOR,
    .trainerPic = TRAINER_PIC_SAILOR,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Ernest4),
},

[TRAINER_ERNEST_5] =
{
    .trainerName = _("Ernest"),
    .trainerClass = TRAINER_CLASS_SAILOR,
    .trainerPic = TRAINER_PIC_SAILOR,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Ernest5),
},

[TRAINER_ELI] =
{
    .trainerName = _("Eli"),
    .trainerClass = TRAINER_CLASS_HIKER,
    .trainerPic = TRAINER_PIC_HIKER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Eli),
},

[TRAINER_ANNIKA] =
{
    .trainerName = _("Annika"),
    .trainerClass = TRAINER_CLASS_POKEFAN,
    .trainerPic = TRAINER_PIC_POKEFAN_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_TWINS,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Annika),
},

[TRAINER_JAZMYN] =
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

[TRAINER_JONAS] =
{
    .trainerName = _("Jonas"),
    .trainerClass = TRAINER_CLASS_NINJA_BOY,
    .trainerPic = TRAINER_PIC_NINJA_BOY,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .party = TRAINER_PARTY(sParty_Jonas),
},

[TRAINER_KAYLEY] =
{
    .trainerName = _("Kayley"),
    .trainerClass = TRAINER_CLASS_PARASOL_LADY,
    .trainerPic = TRAINER_PIC_PARASOL_LADY,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Kayley),
},

[TRAINER_AURON] =
{
    .trainerName = _("Auron"),
    .trainerClass = TRAINER_CLASS_EXPERT,
    .trainerPic = TRAINER_PIC_EXPERT_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Auron),
},

[TRAINER_KELVIN] =
{
    .trainerName = _("Kelvin"),
    .trainerClass = TRAINER_CLASS_SAILOR,
    .trainerPic = TRAINER_PIC_SAILOR,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Kelvin),
},

[TRAINER_MARLEY] =
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

[TRAINER_REYNA] =
{
    .trainerName = _("Reyna"),
    .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
    .trainerPic = TRAINER_PIC_BATTLE_GIRL,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Reyna),
},

[TRAINER_HUDSON] =
{
    .trainerName = _("Hudson"),
    .trainerClass = TRAINER_CLASS_SAILOR,
    .trainerPic = TRAINER_PIC_SAILOR,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Hudson),
},

[TRAINER_CONOR] =
{
    .trainerName = _("Conor"),
    .trainerClass = TRAINER_CLASS_EXPERT,
    .trainerPic = TRAINER_PIC_EXPERT_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Conor),
},

[TRAINER_EDWIN_1] =
{
    .trainerName = _("Edwin"),
    .trainerClass = TRAINER_CLASS_COLLECTOR,
    .trainerPic = TRAINER_PIC_COLLECTOR,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Edwin1),
},

[TRAINER_HECTOR] =
{
    .trainerName = _("Hector"),
    .trainerClass = TRAINER_CLASS_COLLECTOR,
    .trainerPic = TRAINER_PIC_COLLECTOR,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Hector),
},

[TRAINER_TABITHA_MOSSDEEP] =
{
    .trainerName = _("Tabitha"),
    .trainerClass = TRAINER_CLASS_MAGMA_ADMIN,
    .trainerPic = TRAINER_PIC_MAGMA_ADMIN_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
    .party = TRAINER_PARTY(sParty_TabithaMossdeep),
},

[TRAINER_EDWIN_2] =
{
    .trainerName = _("Edwin"),
    .trainerClass = TRAINER_CLASS_COLLECTOR,
    .trainerPic = TRAINER_PIC_COLLECTOR,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Edwin2),
},

[TRAINER_EDWIN_3] =
{
    .trainerName = _("Edwin"),
    .trainerClass = TRAINER_CLASS_COLLECTOR,
    .trainerPic = TRAINER_PIC_COLLECTOR,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Edwin3),
},

[TRAINER_EDWIN_4] =
{
    .trainerName = _("Edwin"),
    .trainerClass = TRAINER_CLASS_COLLECTOR,
    .trainerPic = TRAINER_PIC_COLLECTOR,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Edwin4),
},

[TRAINER_EDWIN_5] =
{
    .trainerName = _("Edwin"),
    .trainerClass = TRAINER_CLASS_COLLECTOR,
    .trainerPic = TRAINER_PIC_COLLECTOR,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Edwin5),
},

[TRAINER_WALLY_VR_1] =
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

[TRAINER_BRENDAN_ROUTE_103_MUDKIP] =
{
    .trainerName = _("Brendan"),
    .trainerClass = TRAINER_CLASS_RIVAL,
    .trainerPic = TRAINER_PIC_BRENDAN,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
    .party = TRAINER_PARTY(sParty_BrendanRoute103Mudkip),
},

[TRAINER_BRENDAN_ROUTE_110_MUDKIP] =
{
    .trainerName = _("Brendan"),
    .trainerClass = TRAINER_CLASS_RIVAL,
    .trainerPic = TRAINER_PIC_BRENDAN,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
    .party = TRAINER_PARTY(sParty_BrendanRoute110Mudkip),
},

[TRAINER_BRENDAN_ROUTE_119_MUDKIP] =
{
    .trainerName = _("Brendan"),
    .trainerClass = TRAINER_CLASS_RIVAL,
    .trainerPic = TRAINER_PIC_BRENDAN,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
    .party = TRAINER_PARTY(sParty_BrendanRoute119Mudkip),
},

[TRAINER_BRENDAN_ROUTE_103_TREECKO] =
{
    .trainerName = _("Brendan"),
    .trainerClass = TRAINER_CLASS_RIVAL,
    .trainerPic = TRAINER_PIC_BRENDAN,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
    .party = TRAINER_PARTY(sParty_BrendanRoute103Treecko),
},

[TRAINER_BRENDAN_ROUTE_110_TREECKO] =
{
    .trainerName = _("Brendan"),
    .trainerClass = TRAINER_CLASS_RIVAL,
    .trainerPic = TRAINER_PIC_BRENDAN,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
    .party = TRAINER_PARTY(sParty_BrendanRoute110Treecko),
},

[TRAINER_BRENDAN_ROUTE_119_TREECKO] =
{
    .trainerName = _("Brendan"),
    .trainerClass = TRAINER_CLASS_RIVAL,
    .trainerPic = TRAINER_PIC_BRENDAN,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
    .party = TRAINER_PARTY(sParty_BrendanRoute119Treecko),
},

[TRAINER_BRENDAN_ROUTE_103_TORCHIC] =
{
    .trainerName = _("Brendan"),
    .trainerClass = TRAINER_CLASS_RIVAL,
    .trainerPic = TRAINER_PIC_BRENDAN,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
    .party = TRAINER_PARTY(sParty_BrendanRoute103Torchic),
},

[TRAINER_BRENDAN_ROUTE_110_TORCHIC] =
{
    .trainerName = _("Brendan"),
    .trainerClass = TRAINER_CLASS_RIVAL,
    .trainerPic = TRAINER_PIC_BRENDAN,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
    .party = TRAINER_PARTY(sParty_BrendanRoute110Torchic),
},

[TRAINER_BRENDAN_ROUTE_119_TORCHIC] =
{
    .trainerName = _("Brendan"),
    .trainerClass = TRAINER_CLASS_RIVAL,
    .trainerPic = TRAINER_PIC_BRENDAN,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
    .party = TRAINER_PARTY(sParty_BrendanRoute119Torchic),
},

[TRAINER_MAY_ROUTE_103_MUDKIP] =
{
    .trainerName = _("May"),
    .trainerClass = TRAINER_CLASS_RIVAL,
    .trainerPic = TRAINER_PIC_MAY,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
    .party = TRAINER_PARTY(sParty_MayRoute103Mudkip),
},

[TRAINER_MAY_ROUTE_110_MUDKIP] =
{
    .trainerName = _("May"),
    .trainerClass = TRAINER_CLASS_RIVAL,
    .trainerPic = TRAINER_PIC_MAY,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
    .party = TRAINER_PARTY(sParty_MayRoute110Mudkip),
},

[TRAINER_MAY_ROUTE_119_MUDKIP] =
{
    .trainerName = _("May"),
    .trainerClass = TRAINER_CLASS_RIVAL,
    .trainerPic = TRAINER_PIC_MAY,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
    .party = TRAINER_PARTY(sParty_MayRoute119Mudkip),
},

[TRAINER_MAY_ROUTE_103_TREECKO] =
{
    .trainerName = _("May"),
    .trainerClass = TRAINER_CLASS_RIVAL,
    .trainerPic = TRAINER_PIC_MAY,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
    .party = TRAINER_PARTY(sParty_MayRoute103Treecko),
},

[TRAINER_MAY_ROUTE_110_TREECKO] =
{
    .trainerName = _("May"),
    .trainerClass = TRAINER_CLASS_RIVAL,
    .trainerPic = TRAINER_PIC_MAY,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
    .party = TRAINER_PARTY(sParty_MayRoute110Treecko),
},

[TRAINER_MAY_ROUTE_119_TREECKO] =
{
    .trainerName = _("May"),
    .trainerClass = TRAINER_CLASS_RIVAL,
    .trainerPic = TRAINER_PIC_MAY,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
    .party = TRAINER_PARTY(sParty_MayRoute119Treecko),
},

[TRAINER_MAY_ROUTE_103_TORCHIC] =
{
    .trainerName = _("May"),
    .trainerClass = TRAINER_CLASS_RIVAL,
    .trainerPic = TRAINER_PIC_MAY,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
    .party = TRAINER_PARTY(sParty_MayRoute103Torchic),
},

[TRAINER_MAY_ROUTE_110_TORCHIC] =
{
    .trainerName = _("May"),
    .trainerClass = TRAINER_CLASS_RIVAL,
    .trainerPic = TRAINER_PIC_MAY,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
    .party = TRAINER_PARTY(sParty_MayRoute110Torchic),
},

[TRAINER_MAY_ROUTE_119_TORCHIC] =
{
    .trainerName = _("May"),
    .trainerClass = TRAINER_CLASS_RIVAL,
    .trainerPic = TRAINER_PIC_MAY,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
    .party = TRAINER_PARTY(sParty_MayRoute119Torchic),
},

[TRAINER_ISAAC_1] =
{
    .trainerName = _("Isaac"),
    .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
    .trainerPic = TRAINER_PIC_POKEMON_BREEDER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Isaac1),
},

[TRAINER_DAVIS] =
{
    .trainerName = _("Davis"),
    .trainerClass = TRAINER_CLASS_BUG_CATCHER,
    .trainerPic = TRAINER_PIC_BUG_CATCHER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Davis),
},

[TRAINER_MITCHELL] =
{
    .trainerName = _("Mitchell"),
    .trainerClass = TRAINER_CLASS_COOLTRAINER,
    .trainerPic = TRAINER_PIC_COOLTRAINER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .party = TRAINER_PARTY(sParty_Mitchell),
},

[TRAINER_ISAAC_2] =
{
    .trainerName = _("Isaac"),
    .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
    .trainerPic = TRAINER_PIC_POKEMON_BREEDER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Isaac2),
},

[TRAINER_ISAAC_3] =
{
    .trainerName = _("Isaac"),
    .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
    .trainerPic = TRAINER_PIC_POKEMON_BREEDER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Isaac3),
},

[TRAINER_ISAAC_4] =
{
    .trainerName = _("Isaac"),
    .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
    .trainerPic = TRAINER_PIC_POKEMON_BREEDER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Isaac4),
},

[TRAINER_ISAAC_5] =
{
    .trainerName = _("Isaac"),
    .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
    .trainerPic = TRAINER_PIC_POKEMON_BREEDER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Isaac5),
},

[TRAINER_LYDIA_1] =
{
    .trainerName = _("Lydia"),
    .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
    .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Lydia1),
},

[TRAINER_HALLE] =
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

[TRAINER_GARRISON] =
{
    .trainerName = _("Garrison"),
    .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
    .trainerPic = TRAINER_PIC_RUIN_MANIAC,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Garrison),
},

[TRAINER_LYDIA_2] =
{
    .trainerName = _("Lydia"),
    .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
    .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Lydia2),
},

[TRAINER_LYDIA_3] =
{
    .trainerName = _("Lydia"),
    .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
    .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Lydia3),
},

[TRAINER_LYDIA_4] =
{
    .trainerName = _("Lydia"),
    .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
    .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Lydia4),
},

[TRAINER_LYDIA_5] =
{
    .trainerName = _("Lydia"),
    .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
    .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Lydia5),
},

[TRAINER_JACKSON_1] =
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

[TRAINER_LORENZO] =
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

[TRAINER_SEBASTIAN] =
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

[TRAINER_JACKSON_2] =
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

[TRAINER_JACKSON_3] =
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

[TRAINER_JACKSON_4] =
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

[TRAINER_JACKSON_5] =
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

[TRAINER_CATHERINE_1] =
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

[TRAINER_JENNA] =
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

[TRAINER_SOPHIA] =
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

[TRAINER_CATHERINE_2] =
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

[TRAINER_CATHERINE_3] =
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

[TRAINER_CATHERINE_4] =
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

[TRAINER_CATHERINE_5] =
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

[TRAINER_JULIO] =
{
    .trainerName = _("Julio"),
    .trainerClass = TRAINER_CLASS_TRIATHLETE,
    .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Julio),
},

[TRAINER_GRUNT_SEAFLOOR_CAVERN_5] =
{
    .trainerName = _("Matt"),
    .trainerClass = TRAINER_CLASS_AQUA_ADMIN,
    .trainerPic = TRAINER_PIC_AQUA_ADMIN_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_AQUA,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .party = TRAINER_PARTY(sParty_MattSeafloorCavern),
},

[TRAINER_GRUNT_UNUSED] =
{
    .trainerName = _("Grunt"),
    .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
    .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_AQUA,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_GruntUnused),
},

[TRAINER_GRUNT_MT_PYRE_4] =
{
    .trainerName = _("Grunt"),
    .trainerClass = TRAINER_CLASS_TEAM_AQUA,
    .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_AQUA,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_GruntMtPyre4),
},

[TRAINER_GRUNT_JAGGED_PASS] =
{
    .trainerName = _("Grunt"),
    .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
    .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_GruntJaggedPass),
},

[TRAINER_MARC] =
{
    .trainerName = _("Marc"),
    .trainerClass = TRAINER_CLASS_HIKER,
    .trainerPic = TRAINER_PIC_HIKER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Marc),
},

[TRAINER_BRENDEN] =
{
    .trainerName = _("Brenden"),
    .trainerClass = TRAINER_CLASS_SAILOR,
    .trainerPic = TRAINER_PIC_SAILOR,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Brenden),
},

[TRAINER_LILITH] =
{
    .trainerName = _("Lilith"),
    .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
    .trainerPic = TRAINER_PIC_BATTLE_GIRL,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Lilith),
},

[TRAINER_CRISTIAN] =
{
    .trainerName = _("Cristian"),
    .trainerClass = TRAINER_CLASS_BLACK_BELT,
    .trainerPic = TRAINER_PIC_BLACK_BELT,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Cristian),
},

[TRAINER_SYLVIA] =
{
    .trainerName = _("Sylvia"),
    .trainerClass = TRAINER_CLASS_HEX_MANIAC,
    .trainerPic = TRAINER_PIC_HEX_MANIAC,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Sylvia),
},

[TRAINER_LEONARDO] =
{
    .trainerName = _("Leonardo"),
    .trainerClass = TRAINER_CLASS_SWIMMER,
    .trainerPic = TRAINER_PIC_SWIMMER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Leonardo),
},

[TRAINER_ATHENA] =
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

[TRAINER_HARRISON] =
{
    .trainerName = _("Harrison"),
    .trainerClass = TRAINER_CLASS_SWIMMER,
    .trainerPic = TRAINER_PIC_SWIMMER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Harrison),
},

[TRAINER_GRUNT_MT_CHIMNEY_2] =
{
    .trainerName = _("Grunt"),
    .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
    .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_GruntMtChimney2),
},

[TRAINER_CLARENCE] =
{
    .trainerName = _("Clarence"),
    .trainerClass = TRAINER_CLASS_SWIMMER,
    .trainerPic = TRAINER_PIC_SWIMMER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Clarence),
},

[TRAINER_TERRY] =
{
    .trainerName = _("Terry"),
    .trainerClass = TRAINER_CLASS_PSYCHIC,
    .trainerPic = TRAINER_PIC_PSYCHIC_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Terry),
},

[TRAINER_NATE] =
{
    .trainerName = _("Nate"),
    .trainerClass = TRAINER_CLASS_GENTLEMAN,
    .trainerPic = TRAINER_PIC_GENTLEMAN,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_RICH,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Nate),
},

[TRAINER_KATHLEEN] =
{
    .trainerName = _("Kathleen"),
    .trainerClass = TRAINER_CLASS_HEX_MANIAC,
    .trainerPic = TRAINER_PIC_HEX_MANIAC,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Kathleen),
},

[TRAINER_CLIFFORD] =
{
    .trainerName = _("Clifford"),
    .trainerClass = TRAINER_CLASS_GENTLEMAN,
    .trainerPic = TRAINER_PIC_GENTLEMAN,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_RICH,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Clifford),
},

[TRAINER_NICHOLAS] =
{
    .trainerName = _("Nicholas"),
    .trainerClass = TRAINER_CLASS_PSYCHIC,
    .trainerPic = TRAINER_PIC_PSYCHIC_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Nicholas),
},

[TRAINER_GRUNT_SPACE_CENTER_2] =
{
    .trainerName = _("Grunt"),
    .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
    .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_MAGMA,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_GruntSpaceCenter2),
},

[TRAINER_GRUNT_SPACE_CENTER_3] =
{
    .trainerName = _("Grunt"),
    .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
    .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_GruntSpaceCenter3),
},

[TRAINER_GRUNT_SPACE_CENTER_4] =
{
    .trainerName = _("Grunt"),
    .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
    .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_GruntSpaceCenter4),
},

[TRAINER_GRUNT_SPACE_CENTER_5] =
{
    .trainerName = _("Grunt"),
    .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
    .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_GruntSpaceCenter5),
},

[TRAINER_GRUNT_SPACE_CENTER_6] =
{
    .trainerName = _("Grunt"),
    .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
    .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_GruntSpaceCenter6),
},

[TRAINER_MACEY] =
{
    .trainerName = _("Macey"),
    .trainerClass = TRAINER_CLASS_PSYCHIC,
    .trainerPic = TRAINER_PIC_PSYCHIC_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Macey),
},

[TRAINER_BRENDAN_RUSTBORO_TREECKO] =
{
    .trainerName = _("Brendan"),
    .trainerClass = TRAINER_CLASS_RIVAL,
    .trainerPic = TRAINER_PIC_BRENDAN,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
    .party = TRAINER_PARTY(sParty_BrendanRustboroTreecko),
},

[TRAINER_BRENDAN_RUSTBORO_MUDKIP] =
{
    .trainerName = _("Brendan"),
    .trainerClass = TRAINER_CLASS_RIVAL,
    .trainerPic = TRAINER_PIC_BRENDAN,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
    .party = TRAINER_PARTY(sParty_BrendanRustboroMudkip),
},

[TRAINER_PAXTON] =
{
    .trainerName = _("Paxton"),
    .trainerClass = TRAINER_CLASS_EXPERT,
    .trainerPic = TRAINER_PIC_EXPERT_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .party = TRAINER_PARTY(sParty_Paxton),
},

[TRAINER_ISABELLA] =
{
    .trainerName = _("Isabella"),
    .trainerClass = TRAINER_CLASS_TRIATHLETE,
    .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Isabella),
},

[TRAINER_GRUNT_WEATHER_INST_5] =
{
    .trainerName = _("Grunt"),
    .trainerClass = TRAINER_CLASS_TEAM_AQUA,
    .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_AQUA,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_GruntWeatherInst5),
},

[TRAINER_TABITHA_MT_CHIMNEY] =
{
    .trainerName = _("Tabitha"),
    .trainerClass = TRAINER_CLASS_MAGMA_ADMIN,
    .trainerPic = TRAINER_PIC_MAGMA_ADMIN_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
    .party = TRAINER_PARTY(sParty_TabithaMtChimney),
},

[TRAINER_JONATHAN] =
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

[TRAINER_BRENDAN_RUSTBORO_TORCHIC] =
{
    .trainerName = _("Brendan"),
    .trainerClass = TRAINER_CLASS_RIVAL,
    .trainerPic = TRAINER_PIC_BRENDAN,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
    .party = TRAINER_PARTY(sParty_BrendanRustboroTorchic),
},

[TRAINER_MAY_RUSTBORO_MUDKIP] =
{
    .trainerName = _("May"),
    .trainerClass = TRAINER_CLASS_RIVAL,
    .trainerPic = TRAINER_PIC_MAY,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
    .party = TRAINER_PARTY(sParty_MayRustboroMudkip),
},

[TRAINER_MAXIE_MAGMA_HIDEOUT] =
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

[TRAINER_MAXIE_MT_CHIMNEY] =
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

[TRAINER_TIANA] =
{
    .trainerName = _("Tiana"),
    .trainerClass = TRAINER_CLASS_LASS,
    .trainerPic = TRAINER_PIC_LASS,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Tiana),
},

[TRAINER_HALEY_1] =
{
    .trainerName = _("Haley"),
    .trainerClass = TRAINER_CLASS_LASS,
    .trainerPic = TRAINER_PIC_LASS,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Haley1),
},

[TRAINER_JANICE] =
{
    .trainerName = _("Janice"),
    .trainerClass = TRAINER_CLASS_LASS,
    .trainerPic = TRAINER_PIC_LASS,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Janice),
},

[TRAINER_VIVI] =
{
    .trainerName = _("Vivi"),
    .trainerClass = TRAINER_CLASS_WINSTRATE,
    .trainerPic = TRAINER_PIC_LASS,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .party = TRAINER_PARTY(sParty_Vivi),
},

[TRAINER_HALEY_2] =
{
    .trainerName = _("Haley"),
    .trainerClass = TRAINER_CLASS_LASS,
    .trainerPic = TRAINER_PIC_LASS,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Haley2),
},

[TRAINER_HALEY_3] =
{
    .trainerName = _("Haley"),
    .trainerClass = TRAINER_CLASS_LASS,
    .trainerPic = TRAINER_PIC_LASS,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Haley3),
},

[TRAINER_HALEY_4] =
{
    .trainerName = _("Haley"),
    .trainerClass = TRAINER_CLASS_LASS,
    .trainerPic = TRAINER_PIC_LASS,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Haley4),
},

[TRAINER_HALEY_5] =
{
    .trainerName = _("Haley"),
    .trainerClass = TRAINER_CLASS_LASS,
    .trainerPic = TRAINER_PIC_LASS,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Haley5),
},

[TRAINER_SALLY] =
{
    .trainerName = _("Sally"),
    .trainerClass = TRAINER_CLASS_LASS,
    .trainerPic = TRAINER_PIC_LASS,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Sally),
},

[TRAINER_ROBIN] =
{
    .trainerName = _("Robin"),
    .trainerClass = TRAINER_CLASS_LASS,
    .trainerPic = TRAINER_PIC_LASS,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Robin),
},

[TRAINER_ANDREA] =
{
    .trainerName = _("Andrea"),
    .trainerClass = TRAINER_CLASS_LASS,
    .trainerPic = TRAINER_PIC_LASS,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Andrea),
},

[TRAINER_CRISSY] =
{
    .trainerName = _("Crissy"),
    .trainerClass = TRAINER_CLASS_LASS,
    .trainerPic = TRAINER_PIC_LASS,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Crissy),
},

[TRAINER_RICK] =
{
    .trainerName = _("Rick"),
    .trainerClass = TRAINER_CLASS_BUG_CATCHER,
    .trainerPic = TRAINER_PIC_BUG_CATCHER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Rick),
},

[TRAINER_LYLE] =
{
    .trainerName = _("Lyle"),
    .trainerClass = TRAINER_CLASS_BUG_CATCHER,
    .trainerPic = TRAINER_PIC_BUG_CATCHER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Lyle),
},

[TRAINER_JOSE] =
{
    .trainerName = _("Jose"),
    .trainerClass = TRAINER_CLASS_BUG_CATCHER,
    .trainerPic = TRAINER_PIC_BUG_CATCHER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Jose),
},

[TRAINER_DOUG] =
{
    .trainerName = _("Doug"),
    .trainerClass = TRAINER_CLASS_BUG_CATCHER,
    .trainerPic = TRAINER_PIC_BUG_CATCHER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Doug),
},

[TRAINER_GREG] =
{
    .trainerName = _("Greg"),
    .trainerClass = TRAINER_CLASS_BUG_CATCHER,
    .trainerPic = TRAINER_PIC_BUG_CATCHER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Greg),
},

[TRAINER_KENT] =
{
    .trainerName = _("Kent"),
    .trainerClass = TRAINER_CLASS_BUG_CATCHER,
    .trainerPic = TRAINER_PIC_BUG_CATCHER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Kent),
},

[TRAINER_JAMES_1] =
{
    .trainerName = _("James"),
    .trainerClass = TRAINER_CLASS_BUG_CATCHER,
    .trainerPic = TRAINER_PIC_BUG_CATCHER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_James1),
},

[TRAINER_JAMES_2] =
{
    .trainerName = _("James"),
    .trainerClass = TRAINER_CLASS_BUG_CATCHER,
    .trainerPic = TRAINER_PIC_BUG_CATCHER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_James2),
},

[TRAINER_JAMES_3] =
{
    .trainerName = _("James"),
    .trainerClass = TRAINER_CLASS_BUG_CATCHER,
    .trainerPic = TRAINER_PIC_BUG_CATCHER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_James3),
},

[TRAINER_JAMES_4] =
{
    .trainerName = _("James"),
    .trainerClass = TRAINER_CLASS_BUG_CATCHER,
    .trainerPic = TRAINER_PIC_BUG_CATCHER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_James4),
},

[TRAINER_JAMES_5] =
{
    .trainerName = _("James"),
    .trainerClass = TRAINER_CLASS_BUG_CATCHER,
    .trainerPic = TRAINER_PIC_BUG_CATCHER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_James5),
},

[TRAINER_BRICE] =
{
    .trainerName = _("Brice"),
    .trainerClass = TRAINER_CLASS_HIKER,
    .trainerPic = TRAINER_PIC_HIKER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Brice),
},

[TRAINER_TRENT_1] =
{
    .trainerName = _("Trent"),
    .trainerClass = TRAINER_CLASS_HIKER,
    .trainerPic = TRAINER_PIC_HIKER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Trent1),
},

[TRAINER_LENNY] =
{
    .trainerName = _("Lenny"),
    .trainerClass = TRAINER_CLASS_HIKER,
    .trainerPic = TRAINER_PIC_HIKER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Lenny),
},

[TRAINER_LUCAS_1] =
{
    .trainerName = _("Lucas"),
    .trainerClass = TRAINER_CLASS_HIKER,
    .trainerPic = TRAINER_PIC_HIKER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Lucas1),
},

[TRAINER_ALAN] =
{
    .trainerName = _("Alan"),
    .trainerClass = TRAINER_CLASS_HIKER,
    .trainerPic = TRAINER_PIC_HIKER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Alan),
},

[TRAINER_CLARK] =
{
    .trainerName = _("Clark"),
    .trainerClass = TRAINER_CLASS_HIKER,
    .trainerPic = TRAINER_PIC_HIKER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Clark),
},

[TRAINER_ERIC] =
{
    .trainerName = _("Eric"),
    .trainerClass = TRAINER_CLASS_HIKER,
    .trainerPic = TRAINER_PIC_HIKER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Eric),
},

[TRAINER_LUCAS_2] =
{
    .trainerName = _("Lucas"),
    .trainerClass = TRAINER_CLASS_HIKER,
    .trainerPic = TRAINER_PIC_HIKER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Lucas2),
},

[TRAINER_MIKE_1] =
{
    .trainerName = _("Mike"),
    .trainerClass = TRAINER_CLASS_HIKER,
    .trainerPic = TRAINER_PIC_HIKER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Mike1),
},

[TRAINER_MIKE_2] =
{
    .trainerName = _("Mike"),
    .trainerClass = TRAINER_CLASS_HIKER,
    .trainerPic = TRAINER_PIC_HIKER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Mike2),
},

[TRAINER_TRENT_2] =
{
    .trainerName = _("Trent"),
    .trainerClass = TRAINER_CLASS_HIKER,
    .trainerPic = TRAINER_PIC_HIKER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Trent2),
},

[TRAINER_TRENT_3] =
{
    .trainerName = _("Trent"),
    .trainerClass = TRAINER_CLASS_HIKER,
    .trainerPic = TRAINER_PIC_HIKER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Trent3),
},

[TRAINER_TRENT_4] =
{
    .trainerName = _("Trent"),
    .trainerClass = TRAINER_CLASS_HIKER,
    .trainerPic = TRAINER_PIC_HIKER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Trent4),
},

[TRAINER_TRENT_5] =
{
    .trainerName = _("Trent"),
    .trainerClass = TRAINER_CLASS_HIKER,
    .trainerPic = TRAINER_PIC_HIKER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Trent5),
},

[TRAINER_DEZ_AND_LUKE] =
{
    .trainerName = _("Dez & Luke"),
    .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
    .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL,
    .doubleBattle = TRUE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_DezAndLuke),
},

[TRAINER_LEA_AND_JED] =
{
    .trainerName = _("Lea & Jed"),
    .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
    .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL,
    .doubleBattle = TRUE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_LeaAndJed),
},

[TRAINER_KIRA_AND_DAN_1] =
{
    .trainerName = _("Kira & Dan"),
    .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
    .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL,
    .doubleBattle = TRUE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_KiraAndDan1),
},

[TRAINER_KIRA_AND_DAN_2] =
{
    .trainerName = _("Kira & Dan"),
    .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
    .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL,
    .doubleBattle = TRUE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_KiraAndDan2),
},

[TRAINER_KIRA_AND_DAN_3] =
{
    .trainerName = _("Kira & Dan"),
    .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
    .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL,
    .doubleBattle = TRUE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_KiraAndDan3),
},

[TRAINER_KIRA_AND_DAN_4] =
{
    .trainerName = _("Kira & Dan"),
    .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
    .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL,
    .doubleBattle = TRUE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_KiraAndDan4),
},

[TRAINER_KIRA_AND_DAN_5] =
{
    .trainerName = _("Kira & Dan"),
    .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
    .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL,
    .doubleBattle = TRUE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_KiraAndDan5),
},

[TRAINER_JOHANNA] =
{
    .trainerName = _("Johanna"),
    .trainerClass = TRAINER_CLASS_BEAUTY,
    .trainerPic = TRAINER_PIC_BEAUTY,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Johanna),
},

[TRAINER_GERALD] =
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

[TRAINER_VIVIAN] =
{
    .trainerName = _("Vivian"),
    .trainerClass = TRAINER_CLASS_BEAUTY,
    .trainerPic = TRAINER_PIC_BEAUTY,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Vivian),
},

[TRAINER_DANIELLE] =
{
    .trainerName = _("Danielle"),
    .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
    .trainerPic = TRAINER_PIC_BATTLE_GIRL,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Danielle),
},

[TRAINER_HIDEO] =
{
    .trainerName = _("Hideo"),
    .trainerClass = TRAINER_CLASS_NINJA_BOY,
    .trainerPic = TRAINER_PIC_NINJA_BOY,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
    .party = TRAINER_PARTY(sParty_Hideo),
},

[TRAINER_KEIGO] =
{
    .trainerName = _("Keigo"),
    .trainerClass = TRAINER_CLASS_NINJA_BOY,
    .trainerPic = TRAINER_PIC_NINJA_BOY,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
    .party = TRAINER_PARTY(sParty_Keigo),
},

[TRAINER_RILEY] =
{
    .trainerName = _("Riley"),
    .trainerClass = TRAINER_CLASS_NINJA_BOY,
    .trainerPic = TRAINER_PIC_NINJA_BOY,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
    .party = TRAINER_PARTY(sParty_Riley),
},

[TRAINER_FLINT] =
{
    .trainerName = _("Flint"),
    .trainerClass = TRAINER_CLASS_CAMPER,
    .trainerPic = TRAINER_PIC_CAMPER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Flint),
},

[TRAINER_ASHLEY] =
{
    .trainerName = _("Ashley"),
    .trainerClass = TRAINER_CLASS_PICNICKER,
    .trainerPic = TRAINER_PIC_PICNICKER,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Ashley),
},

[TRAINER_WALLY_MAUVILLE] =
{
    .trainerName = _("Wally"),
    .trainerClass = TRAINER_CLASS_RIVAL,
    .trainerPic = TRAINER_PIC_WALLY,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
    .party = TRAINER_PARTY(sParty_WallyMauville),
},

[TRAINER_WALLY_VR_2] =
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

[TRAINER_WALLY_VR_3] =
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

[TRAINER_WALLY_VR_4] =
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

[TRAINER_WALLY_VR_5] =
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

[TRAINER_BRENDAN_LILYCOVE_MUDKIP] =
{
    .trainerName = _("Brendan"),
    .trainerClass = TRAINER_CLASS_RIVAL,
    .trainerPic = TRAINER_PIC_BRENDAN,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
    .party = TRAINER_PARTY(sParty_BrendanLilycoveMudkip),
},

[TRAINER_BRENDAN_LILYCOVE_TREECKO] =
{
    .trainerName = _("Brendan"),
    .trainerClass = TRAINER_CLASS_RIVAL,
    .trainerPic = TRAINER_PIC_BRENDAN,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
    .party = TRAINER_PARTY(sParty_BrendanLilycoveTreecko),
},

[TRAINER_BRENDAN_LILYCOVE_TORCHIC] =
{
    .trainerName = _("Brendan"),
    .trainerClass = TRAINER_CLASS_RIVAL,
    .trainerPic = TRAINER_PIC_BRENDAN,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
    .party = TRAINER_PARTY(sParty_BrendanLilycoveTorchic),
},

[TRAINER_MAY_LILYCOVE_MUDKIP] =
{
    .trainerName = _("May"),
    .trainerClass = TRAINER_CLASS_RIVAL,
    .trainerPic = TRAINER_PIC_MAY,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
    .party = TRAINER_PARTY(sParty_MayLilycoveMudkip),
},

[TRAINER_MAY_LILYCOVE_TREECKO] =
{
    .trainerName = _("May"),
    .trainerClass = TRAINER_CLASS_RIVAL,
    .trainerPic = TRAINER_PIC_MAY,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
    .party = TRAINER_PARTY(sParty_MayLilycoveTreecko),
},

[TRAINER_MAY_LILYCOVE_TORCHIC] =
{
    .trainerName = _("May"),
    .trainerClass = TRAINER_CLASS_RIVAL,
    .trainerPic = TRAINER_PIC_MAY,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
    .party = TRAINER_PARTY(sParty_MayLilycoveTorchic),
},

[TRAINER_JONAH] =
{
    .trainerName = _("Jonah"),
    .trainerClass = TRAINER_CLASS_FISHERMAN,
    .trainerPic = TRAINER_PIC_FISHERMAN,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Jonah),
},

[TRAINER_HENRY] =
{
    .trainerName = _("Henry"),
    .trainerClass = TRAINER_CLASS_FISHERMAN,
    .trainerPic = TRAINER_PIC_FISHERMAN,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Henry),
},

[TRAINER_ROGER] =
{
    .trainerName = _("Roger"),
    .trainerClass = TRAINER_CLASS_FISHERMAN,
    .trainerPic = TRAINER_PIC_FISHERMAN,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Roger),
},

[TRAINER_ALEXA] =
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

[TRAINER_RUBEN] =
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

[TRAINER_KOJI_1] =
{
    .trainerName = _("Koji"),
    .trainerClass = TRAINER_CLASS_BLACK_BELT,
    .trainerPic = TRAINER_PIC_BLACK_BELT,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Koji1),
},

[TRAINER_WAYNE] =
{
    .trainerName = _("Wayne"),
    .trainerClass = TRAINER_CLASS_FISHERMAN,
    .trainerPic = TRAINER_PIC_FISHERMAN,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Wayne),
},

[TRAINER_AIDAN] =
{
    .trainerName = _("Aidan"),
    .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
    .trainerPic = TRAINER_PIC_BIRD_KEEPER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Aidan),
},

[TRAINER_REED] =
{
    .trainerName = _("Reed"),
    .trainerClass = TRAINER_CLASS_SWIMMER,
    .trainerPic = TRAINER_PIC_SWIMMER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Reed),
},

[TRAINER_TISHA] =
{
    .trainerName = _("Tisha"),
    .trainerClass = TRAINER_CLASS_SWIMMER,
    .trainerPic = TRAINER_PIC_SWIMMER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Tisha),
},

[TRAINER_TORI_AND_TIA] =
{
    .trainerName = _("Tori & Tia"),
    .trainerClass = TRAINER_CLASS_TWINS,
    .trainerPic = TRAINER_PIC_TWINS,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
    .doubleBattle = TRUE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_ToriAndTia),
},

[TRAINER_KIM_AND_IRIS] =
{
    .trainerName = _("Kim & Iris"),
    .trainerClass = TRAINER_CLASS_SR_AND_JR,
    .trainerPic = TRAINER_PIC_SR_AND_JR,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
    .doubleBattle = TRUE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_KimAndIris),
},

[TRAINER_TYRA_AND_IVY] =
{
    .trainerName = _("Tyra & Ivy"),
    .trainerClass = TRAINER_CLASS_SR_AND_JR,
    .trainerPic = TRAINER_PIC_SR_AND_JR,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
    .doubleBattle = TRUE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_TyraAndIvy),
},

[TRAINER_MEL_AND_PAUL] =
{
    .trainerName = _("Mel & Paul"),
    .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
    .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL,
    .doubleBattle = TRUE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_MelAndPaul),
},

[TRAINER_JOHN_AND_JAY_1] =
{
    .trainerName = _("John & Jay"),
    .trainerClass = TRAINER_CLASS_OLD_COUPLE,
    .trainerPic = TRAINER_PIC_OLD_COUPLE,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = TRUE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .party = TRAINER_PARTY(sParty_JohnAndJay1),
},

[TRAINER_JOHN_AND_JAY_2] =
{
    .trainerName = _("John & Jay"),
    .trainerClass = TRAINER_CLASS_OLD_COUPLE,
    .trainerPic = TRAINER_PIC_OLD_COUPLE,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = TRUE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .party = TRAINER_PARTY(sParty_JohnAndJay2),
},

[TRAINER_JOHN_AND_JAY_3] =
{
    .trainerName = _("John & Jay"),
    .trainerClass = TRAINER_CLASS_OLD_COUPLE,
    .trainerPic = TRAINER_PIC_OLD_COUPLE,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = TRUE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .party = TRAINER_PARTY(sParty_JohnAndJay3),
},

[TRAINER_JOHN_AND_JAY_4] =
{
    .trainerName = _("John & Jay"),
    .trainerClass = TRAINER_CLASS_OLD_COUPLE,
    .trainerPic = TRAINER_PIC_OLD_COUPLE,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = TRUE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_SETUP_FIRST_TURN,
    .party = TRAINER_PARTY(sParty_JohnAndJay4),
},

[TRAINER_JOHN_AND_JAY_5] =
{
    .trainerName = _("John & Jay"),
    .trainerClass = TRAINER_CLASS_OLD_COUPLE,
    .trainerPic = TRAINER_PIC_OLD_COUPLE,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = TRUE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .party = TRAINER_PARTY(sParty_JohnAndJay5),
},

[TRAINER_RELI_AND_IAN] =
{
    .trainerName = _("Reli & Ian"),
    .trainerClass = TRAINER_CLASS_SIS_AND_BRO,
    .trainerPic = TRAINER_PIC_SIS_AND_BRO,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .doubleBattle = TRUE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_ReliAndIan),
},

[TRAINER_LILA_AND_ROY_1] =
{
    .trainerName = _("Lila & Roy"),
    .trainerClass = TRAINER_CLASS_SIS_AND_BRO,
    .trainerPic = TRAINER_PIC_SIS_AND_BRO,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .doubleBattle = TRUE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_LilaAndRoy1),
},

[TRAINER_LILA_AND_ROY_2] =
{
    .trainerName = _("Lila & Roy"),
    .trainerClass = TRAINER_CLASS_SIS_AND_BRO,
    .trainerPic = TRAINER_PIC_SIS_AND_BRO,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .doubleBattle = TRUE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_LilaAndRoy2),
},

[TRAINER_LILA_AND_ROY_3] =
{
    .trainerName = _("Lila & Roy"),
    .trainerClass = TRAINER_CLASS_SIS_AND_BRO,
    .trainerPic = TRAINER_PIC_SIS_AND_BRO,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .doubleBattle = TRUE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_LilaAndRoy3),
},

[TRAINER_LILA_AND_ROY_4] =
{
    .trainerName = _("Lila & Roy"),
    .trainerClass = TRAINER_CLASS_SIS_AND_BRO,
    .trainerPic = TRAINER_PIC_SIS_AND_BRO,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .doubleBattle = TRUE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_LilaAndRoy4),
},

[TRAINER_LILA_AND_ROY_5] =
{
    .trainerName = _("Lila & Roy"),
    .trainerClass = TRAINER_CLASS_SIS_AND_BRO,
    .trainerPic = TRAINER_PIC_SIS_AND_BRO,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .doubleBattle = TRUE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_LilaAndRoy5),
},

[TRAINER_LISA_AND_RAY] =
{
    .trainerName = _("Lisa & Ray"),
    .trainerClass = TRAINER_CLASS_SIS_AND_BRO,
    .trainerPic = TRAINER_PIC_SIS_AND_BRO,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .doubleBattle = TRUE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_LisaAndRay),
},

[TRAINER_CHRIS] =
{
    .trainerName = _("Chris"),
    .trainerClass = TRAINER_CLASS_FISHERMAN,
    .trainerPic = TRAINER_PIC_FISHERMAN,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Chris),
},

[TRAINER_DAWSON] =
{
    .trainerName = _("Dawson"),
    .trainerClass = TRAINER_CLASS_RICH_BOY,
    .trainerPic = TRAINER_PIC_RICH_BOY,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_RICH,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Dawson),
},

[TRAINER_SARAH] =
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

[TRAINER_DARIAN] =
{
    .trainerName = _("Darian"),
    .trainerClass = TRAINER_CLASS_FISHERMAN,
    .trainerPic = TRAINER_PIC_FISHERMAN,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Darian),
},

[TRAINER_HAILEY] =
{
    .trainerName = _("Hailey"),
    .trainerClass = TRAINER_CLASS_TUBER,
    .trainerPic = TRAINER_PIC_TUBER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Hailey),
},

[TRAINER_CHANDLER] =
{
    .trainerName = _("Chandler"),
    .trainerClass = TRAINER_CLASS_TUBER,
    .trainerPic = TRAINER_PIC_TUBER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_GIRL,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Chandler),
},

[TRAINER_KALEB] =
{
    .trainerName = _("Kaleb"),
    .trainerClass = TRAINER_CLASS_POKEFAN,
    .trainerPic = TRAINER_PIC_POKEFAN_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_TWINS,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Kaleb),
},

[TRAINER_JOSEPH] =
{
    .trainerName = _("Joseph"),
    .trainerClass = TRAINER_CLASS_GUITARIST,
    .trainerPic = TRAINER_PIC_GUITARIST,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Joseph),
},

[TRAINER_ALYSSA] =
{
    .trainerName = _("Alyssa"),
    .trainerClass = TRAINER_CLASS_TRIATHLETE,
    .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Alyssa),
},

[TRAINER_MARCOS] =
{
    .trainerName = _("Marcos"),
    .trainerClass = TRAINER_CLASS_GUITARIST,
    .trainerPic = TRAINER_PIC_GUITARIST,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Marcos),
},

[TRAINER_RHETT] =
{
    .trainerName = _("Rhett"),
    .trainerClass = TRAINER_CLASS_BLACK_BELT,
    .trainerPic = TRAINER_PIC_BLACK_BELT,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Rhett),
},

[TRAINER_TYRON] =
{
    .trainerName = _("Tyron"),
    .trainerClass = TRAINER_CLASS_CAMPER,
    .trainerPic = TRAINER_PIC_CAMPER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Tyron),
},

[TRAINER_LILY] =
{
    .trainerName = _("Lily"),
    .trainerClass = TRAINER_CLASS_AROMA_LADY,
    .trainerPic = TRAINER_PIC_AROMA_LADY,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Lily),
},

[TRAINER_BIANCA] =
{
    .trainerName = _("Bianca"),
    .trainerClass = TRAINER_CLASS_PICNICKER,
    .trainerPic = TRAINER_PIC_PICNICKER,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Bianca),
},

[TRAINER_HAYDEN] =
{
    .trainerName = _("Hayden"),
    .trainerClass = TRAINER_CLASS_KINDLER,
    .trainerPic = TRAINER_PIC_KINDLER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Hayden),
},

[TRAINER_SOPHIE] =
{
    .trainerName = _("Sophie"),
    .trainerClass = TRAINER_CLASS_PICNICKER,
    .trainerPic = TRAINER_PIC_PICNICKER,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Sophie),
},

[TRAINER_COBY] =
{
    .trainerName = _("Coby"),
    .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
    .trainerPic = TRAINER_PIC_BIRD_KEEPER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Coby),
},

[TRAINER_LAWRENCE] =
{
    .trainerName = _("Lawrence"),
    .trainerClass = TRAINER_CLASS_CAMPER,
    .trainerPic = TRAINER_PIC_CAMPER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Lawrence),
},

[TRAINER_WYATT] =
{
    .trainerName = _("Wyatt"),
    .trainerClass = TRAINER_CLASS_POKEMANIAC,
    .trainerPic = TRAINER_PIC_POKEMANIAC,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Wyatt),
},

[TRAINER_ANGELINA] =
{
    .trainerName = _("Angelina"),
    .trainerClass = TRAINER_CLASS_PICNICKER,
    .trainerPic = TRAINER_PIC_PICNICKER,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Angelina),
},

[TRAINER_KAI] =
{
    .trainerName = _("Kai"),
    .trainerClass = TRAINER_CLASS_FISHERMAN,
    .trainerPic = TRAINER_PIC_FISHERMAN,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Kai),
},

[TRAINER_CHARLOTTE] =
{
    .trainerName = _("Charlotte"),
    .trainerClass = TRAINER_CLASS_PICNICKER,
    .trainerPic = TRAINER_PIC_PICNICKER,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Charlotte),
},

[TRAINER_DEANDRE] =
{
    .trainerName = _("Deandre"),
    .trainerClass = TRAINER_CLASS_YOUNGSTER,
    .trainerPic = TRAINER_PIC_YOUNGSTER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Deandre),
},

[TRAINER_GRUNT_MAGMA_HIDEOUT_1] =
{
    .trainerName = _("Grunt"),
    .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
    .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_GruntMagmaHideout1),
},

[TRAINER_GRUNT_MAGMA_HIDEOUT_2] =
{
    .trainerName = _("Grunt"),
    .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
    .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_GruntMagmaHideout2),
},

[TRAINER_GRUNT_MAGMA_HIDEOUT_3] =
{
    .trainerName = _("Grunt"),
    .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
    .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_GruntMagmaHideout3),
},

[TRAINER_GRUNT_MAGMA_HIDEOUT_4] =
{
    .trainerName = _("Grunt"),
    .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
    .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_GruntMagmaHideout4),
},

[TRAINER_GRUNT_MAGMA_HIDEOUT_5] =
{
    .trainerName = _("Grunt"),
    .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
    .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_GruntMagmaHideout5),
},

[TRAINER_GRUNT_MAGMA_HIDEOUT_6] =
{
    .trainerName = _("Grunt"),
    .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
    .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_GruntMagmaHideout6),
},

[TRAINER_GRUNT_MAGMA_HIDEOUT_7] =
{
    .trainerName = _("Grunt"),
    .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
    .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_GruntMagmaHideout7),
},

[TRAINER_GRUNT_MAGMA_HIDEOUT_8] =
{
    .trainerName = _("Grunt"),
    .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
    .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_GruntMagmaHideout8),
},

[TRAINER_GRUNT_MAGMA_HIDEOUT_9] =
{
    .trainerName = _("Grunt"),
    .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
    .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_GruntMagmaHideout9),
},

[TRAINER_GRUNT_MAGMA_HIDEOUT_10] =
{
    .trainerName = _("Grunt"),
    .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
    .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_GruntMagmaHideout10),
},

[TRAINER_GRUNT_MAGMA_HIDEOUT_11] =
{
    .trainerName = _("Grunt"),
    .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
    .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_GruntMagmaHideout11),
},

[TRAINER_GRUNT_MAGMA_HIDEOUT_12] =
{
    .trainerName = _("Grunt"),
    .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
    .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_GruntMagmaHideout12),
},

[TRAINER_GRUNT_MAGMA_HIDEOUT_13] =
{
    .trainerName = _("Grunt"),
    .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
    .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_GruntMagmaHideout13),
},

[TRAINER_GRUNT_MAGMA_HIDEOUT_14] =
{
    .trainerName = _("Grunt"),
    .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
    .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_MAGMA,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_GruntMagmaHideout14),
},

[TRAINER_GRUNT_MAGMA_HIDEOUT_15] =
{
    .trainerName = _("Grunt"),
    .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
    .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_MAGMA,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_GruntMagmaHideout15),
},

[TRAINER_GRUNT_MAGMA_HIDEOUT_16] =
{
    .trainerName = _("Grunt"),
    .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
    .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_MAGMA,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_GruntMagmaHideout16),
},

[TRAINER_TABITHA_MAGMA_HIDEOUT] =
{
    .trainerName = _("Tabitha"),
    .trainerClass = TRAINER_CLASS_MAGMA_ADMIN,
    .trainerPic = TRAINER_PIC_MAGMA_ADMIN_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
    .party = TRAINER_PARTY(sParty_TabithaMagmaHideout),
},

[TRAINER_DARCY] =
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

[TRAINER_MAXIE_MOSSDEEP] =
{
    .trainerName = _("Maxie"),
    .trainerClass = TRAINER_CLASS_MAGMA_LEADER,
    .trainerPic = TRAINER_PIC_MAGMA_LEADER_MAXIE,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MAGMA,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
    .party = TRAINER_PARTY(sParty_MaxieMossdeep),
},

[TRAINER_PETE] =
{
    .trainerName = _("Pete"),
    .trainerClass = TRAINER_CLASS_SWIMMER,
    .trainerPic = TRAINER_PIC_SWIMMER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Pete),
},

[TRAINER_ISABELLE] =
{
    .trainerName = _("Isabelle"),
    .trainerClass = TRAINER_CLASS_SWIMMER,
    .trainerPic = TRAINER_PIC_SWIMMER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Isabelle),
},

[TRAINER_ANDRES_1] =
{
    .trainerName = _("Andres"),
    .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
    .trainerPic = TRAINER_PIC_RUIN_MANIAC,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Andres1),
},

[TRAINER_JOSUE] =
{
    .trainerName = _("Josue"),
    .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
    .trainerPic = TRAINER_PIC_BIRD_KEEPER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Josue),
},

[TRAINER_CAMRON] =
{
    .trainerName = _("Camron"),
    .trainerClass = TRAINER_CLASS_TRIATHLETE,
    .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Camron),
},

[TRAINER_CORY_1] =
{
    .trainerName = _("Cory"),
    .trainerClass = TRAINER_CLASS_SAILOR,
    .trainerPic = TRAINER_PIC_SAILOR,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Cory1),
},

[TRAINER_CAROLINA] =
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

[TRAINER_ELIJAH] =
{
    .trainerName = _("Elijah"),
    .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
    .trainerPic = TRAINER_PIC_BIRD_KEEPER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Elijah),
},

[TRAINER_CELIA] =
{
    .trainerName = _("Celia"),
    .trainerClass = TRAINER_CLASS_PICNICKER,
    .trainerPic = TRAINER_PIC_PICNICKER,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Celia),
},

[TRAINER_BRYAN] =
{
    .trainerName = _("Bryan"),
    .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
    .trainerPic = TRAINER_PIC_RUIN_MANIAC,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Bryan),
},

[TRAINER_BRANDEN] =
{
    .trainerName = _("Branden"),
    .trainerClass = TRAINER_CLASS_CAMPER,
    .trainerPic = TRAINER_PIC_CAMPER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Branden),
},

[TRAINER_BRYANT] =
{
    .trainerName = _("Bryant"),
    .trainerClass = TRAINER_CLASS_KINDLER,
    .trainerPic = TRAINER_PIC_KINDLER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Bryant),
},

[TRAINER_SHAYLA] =
{
    .trainerName = _("Shayla"),
    .trainerClass = TRAINER_CLASS_AROMA_LADY,
    .trainerPic = TRAINER_PIC_AROMA_LADY,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Shayla),
},

[TRAINER_KYRA] =
{
    .trainerName = _("Kyra"),
    .trainerClass = TRAINER_CLASS_TRIATHLETE,
    .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Kyra),
},

[TRAINER_JAIDEN] =
{
    .trainerName = _("Jaiden"),
    .trainerClass = TRAINER_CLASS_NINJA_BOY,
    .trainerPic = TRAINER_PIC_NINJA_BOY,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Jaiden),
},

[TRAINER_ALIX] =
{
    .trainerName = _("Alix"),
    .trainerClass = TRAINER_CLASS_PSYCHIC,
    .trainerPic = TRAINER_PIC_PSYCHIC_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Alix),
},

[TRAINER_HELENE] =
{
    .trainerName = _("Helene"),
    .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
    .trainerPic = TRAINER_PIC_BATTLE_GIRL,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Helene),
},

[TRAINER_MARLENE] =
{
    .trainerName = _("Marlene"),
    .trainerClass = TRAINER_CLASS_PSYCHIC,
    .trainerPic = TRAINER_PIC_PSYCHIC_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Marlene),
},

[TRAINER_DEVAN] =
{
    .trainerName = _("Devan"),
    .trainerClass = TRAINER_CLASS_HIKER,
    .trainerPic = TRAINER_PIC_HIKER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Devan),
},

[TRAINER_JOHNSON] =
{
    .trainerName = _("Johnson"),
    .trainerClass = TRAINER_CLASS_YOUNGSTER,
    .trainerPic = TRAINER_PIC_YOUNGSTER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Johnson),
},

[TRAINER_MELINA] =
{
    .trainerName = _("Melina"),
    .trainerClass = TRAINER_CLASS_TRIATHLETE,
    .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Melina),
},

[TRAINER_BRANDI] =
{
    .trainerName = _("Brandi"),
    .trainerClass = TRAINER_CLASS_PSYCHIC,
    .trainerPic = TRAINER_PIC_PSYCHIC_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Brandi),
},

[TRAINER_AISHA] =
{
    .trainerName = _("Aisha"),
    .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
    .trainerPic = TRAINER_PIC_BATTLE_GIRL,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Aisha),
},

[TRAINER_MAKAYLA] =
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

[TRAINER_FABIAN] =
{
    .trainerName = _("Fabian"),
    .trainerClass = TRAINER_CLASS_GUITARIST,
    .trainerPic = TRAINER_PIC_GUITARIST,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Fabian),
},

[TRAINER_DAYTON] =
{
    .trainerName = _("Dayton"),
    .trainerClass = TRAINER_CLASS_KINDLER,
    .trainerPic = TRAINER_PIC_KINDLER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Dayton),
},

[TRAINER_RACHEL] =
{
    .trainerName = _("Rachel"),
    .trainerClass = TRAINER_CLASS_PARASOL_LADY,
    .trainerPic = TRAINER_PIC_PARASOL_LADY,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Rachel),
},

[TRAINER_LEONEL] =
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

[TRAINER_CALLIE] =
{
    .trainerName = _("Callie"),
    .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
    .trainerPic = TRAINER_PIC_BATTLE_GIRL,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Callie),
},

[TRAINER_CALE] =
{
    .trainerName = _("Cale"),
    .trainerClass = TRAINER_CLASS_BUG_MANIAC,
    .trainerPic = TRAINER_PIC_BUG_MANIAC,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Cale),
},

[TRAINER_MYLES] =
{
    .trainerName = _("Myles"),
    .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
    .trainerPic = TRAINER_PIC_POKEMON_BREEDER_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Myles),
},

[TRAINER_PAT] =
{
    .trainerName = _("Pat"),
    .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
    .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Pat),
},

[TRAINER_CRISTIN_1] =
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

[TRAINER_MAY_RUSTBORO_TREECKO] =
{
    .trainerName = _("May"),
    .trainerClass = TRAINER_CLASS_RIVAL,
    .trainerPic = TRAINER_PIC_MAY,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
    .party = TRAINER_PARTY(sParty_MayRustboroTreecko),
},

[TRAINER_MAY_RUSTBORO_TORCHIC] =
{
    .trainerName = _("May"),
    .trainerClass = TRAINER_CLASS_RIVAL,
    .trainerPic = TRAINER_PIC_MAY,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY | AI_FLAG_ACE_POKEMON,
    .party = TRAINER_PARTY(sParty_MayRustboroTorchic),
},

[TRAINER_ROXANNE_2] =
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

[TRAINER_ROXANNE_3] =
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

[TRAINER_ROXANNE_4] =
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

[TRAINER_ROXANNE_5] =
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

[TRAINER_BRAWLY_2] =
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

[TRAINER_BRAWLY_3] =
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

[TRAINER_BRAWLY_4] =
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

[TRAINER_BRAWLY_5] =
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

[TRAINER_WATTSON_2] =
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

[TRAINER_WATTSON_3] =
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

[TRAINER_WATTSON_4] =
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

[TRAINER_WATTSON_5] =
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

[TRAINER_FLANNERY_2] =
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

[TRAINER_FLANNERY_3] =
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

[TRAINER_FLANNERY_4] =
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

[TRAINER_FLANNERY_5] =
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

[TRAINER_NORMAN_2] =
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

[TRAINER_NORMAN_3] =
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

[TRAINER_NORMAN_4] =
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

[TRAINER_NORMAN_5] =
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

[TRAINER_WINONA_2] =
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

[TRAINER_WINONA_3] =
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

[TRAINER_WINONA_4] =
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

[TRAINER_WINONA_5] =
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

[TRAINER_TATE_AND_LIZA_2] =
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

[TRAINER_TATE_AND_LIZA_3] =
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

[TRAINER_TATE_AND_LIZA_4] =
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

[TRAINER_TATE_AND_LIZA_5] =
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

[TRAINER_JUAN_2] =
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

[TRAINER_JUAN_3] =
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

[TRAINER_JUAN_4] =
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

[TRAINER_JUAN_5] =
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

[TRAINER_ANGELO] =
{
    .trainerName = _("Angelo"),
    .trainerClass = TRAINER_CLASS_POKEMANIAC,
    .trainerPic = TRAINER_PIC_POKEMANIAC,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .party = TRAINER_PARTY(sParty_Angelo),
},

[TRAINER_DARIUS] =
{
    .trainerName = _("Darius"),
    .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
    .trainerPic = TRAINER_PIC_BIRD_KEEPER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_COOL,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .party = TRAINER_PARTY(sParty_Darius),
},

[TRAINER_STEVEN] =
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

[TRAINER_ANABEL] =
{
    .trainerName = _("Anabel"),
    .trainerClass = TRAINER_CLASS_SALON_MAIDEN,
    .trainerPic = TRAINER_PIC_SALON_MAIDEN_ANABEL,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .party = TRAINER_PARTY(sParty_Anabel),
},

[TRAINER_TUCKER] =
{
    .trainerName = _("Tucker"),
    .trainerClass = TRAINER_CLASS_DOME_ACE,
    .trainerPic = TRAINER_PIC_DOME_ACE_TUCKER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .party = TRAINER_PARTY(sParty_Tucker),
},

[TRAINER_SPENSER] =
{
    .trainerName = _("Spenser"),
    .trainerClass = TRAINER_CLASS_PALACE_MAVEN,
    .trainerPic = TRAINER_PIC_PALACE_MAVEN_SPENSER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .party = TRAINER_PARTY(sParty_Spenser),
},

[TRAINER_GRETA] =
{
    .trainerName = _("Greta"),
    .trainerClass = TRAINER_CLASS_ARENA_TYCOON,
    .trainerPic = TRAINER_PIC_ARENA_TYCOON_GRETA,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .party = TRAINER_PARTY(sParty_Greta),
},

[TRAINER_NOLAND] =
{
    .trainerName = _("Noland"),
    .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
    .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .party = TRAINER_PARTY(sParty_Noland),
},

[TRAINER_LUCY] =
{
    .trainerName = _("Lucy"),
    .trainerClass = TRAINER_CLASS_PIKE_QUEEN,
    .trainerPic = TRAINER_PIC_PIKE_QUEEN_LUCY,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .party = TRAINER_PARTY(sParty_Lucy),
},

[TRAINER_BRANDON] =
{
    .trainerName = _("Brandon"),
    .trainerClass = TRAINER_CLASS_PYRAMID_KING,
    .trainerPic = TRAINER_PIC_PYRAMID_KING_BRANDON,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .party = TRAINER_PARTY(sParty_Brandon),
},

[TRAINER_ANDRES_2] =
{
    .trainerName = _("Andres"),
    .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
    .trainerPic = TRAINER_PIC_RUIN_MANIAC,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Andres2),
},

[TRAINER_ANDRES_3] =
{
    .trainerName = _("Andres"),
    .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
    .trainerPic = TRAINER_PIC_RUIN_MANIAC,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Andres3),
},

[TRAINER_ANDRES_4] =
{
    .trainerName = _("Andres"),
    .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
    .trainerPic = TRAINER_PIC_RUIN_MANIAC,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Andres4),
},

[TRAINER_ANDRES_5] =
{
    .trainerName = _("Andres"),
    .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
    .trainerPic = TRAINER_PIC_RUIN_MANIAC,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Andres5),
},

[TRAINER_CORY_2] =
{
    .trainerName = _("Cory"),
    .trainerClass = TRAINER_CLASS_SAILOR,
    .trainerPic = TRAINER_PIC_SAILOR,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Cory2),
},

[TRAINER_CORY_3] =
{
    .trainerName = _("Cory"),
    .trainerClass = TRAINER_CLASS_SAILOR,
    .trainerPic = TRAINER_PIC_SAILOR,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Cory3),
},

[TRAINER_CORY_4] =
{
    .trainerName = _("Cory"),
    .trainerClass = TRAINER_CLASS_SAILOR,
    .trainerPic = TRAINER_PIC_SAILOR,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Cory4),
},

[TRAINER_CORY_5] =
{
    .trainerName = _("Cory"),
    .trainerClass = TRAINER_CLASS_SAILOR,
    .trainerPic = TRAINER_PIC_SAILOR,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Cory5),
},

[TRAINER_PABLO_2] =
{
    .trainerName = _("Pablo"),
    .trainerClass = TRAINER_CLASS_TRIATHLETE,
    .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Pablo2),
},

[TRAINER_PABLO_3] =
{
    .trainerName = _("Pablo"),
    .trainerClass = TRAINER_CLASS_TRIATHLETE,
    .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Pablo3),
},

[TRAINER_PABLO_4] =
{
    .trainerName = _("Pablo"),
    .trainerClass = TRAINER_CLASS_TRIATHLETE,
    .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Pablo4),
},

[TRAINER_PABLO_5] =
{
    .trainerName = _("Pablo"),
    .trainerClass = TRAINER_CLASS_TRIATHLETE,
    .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Pablo5),
},

[TRAINER_KOJI_2] =
{
    .trainerName = _("Koji"),
    .trainerClass = TRAINER_CLASS_BLACK_BELT,
    .trainerPic = TRAINER_PIC_BLACK_BELT,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Koji2),
},

[TRAINER_KOJI_3] =
{
    .trainerName = _("Koji"),
    .trainerClass = TRAINER_CLASS_BLACK_BELT,
    .trainerPic = TRAINER_PIC_BLACK_BELT,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Koji3),
},

[TRAINER_KOJI_4] =
{
    .trainerName = _("Koji"),
    .trainerClass = TRAINER_CLASS_BLACK_BELT,
    .trainerPic = TRAINER_PIC_BLACK_BELT,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Koji4),
},

[TRAINER_KOJI_5] =
{
    .trainerName = _("Koji"),
    .trainerClass = TRAINER_CLASS_BLACK_BELT,
    .trainerPic = TRAINER_PIC_BLACK_BELT,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Koji5),
},

[TRAINER_CRISTIN_2] =
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

[TRAINER_CRISTIN_3] =
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

[TRAINER_CRISTIN_4] =
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

[TRAINER_CRISTIN_5] =
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

[TRAINER_FERNANDO_2] =
{
    .trainerName = _("Fernando"),
    .trainerClass = TRAINER_CLASS_GUITARIST,
    .trainerPic = TRAINER_PIC_GUITARIST,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Fernando2),
},

[TRAINER_FERNANDO_3] =
{
    .trainerName = _("Fernando"),
    .trainerClass = TRAINER_CLASS_GUITARIST,
    .trainerPic = TRAINER_PIC_GUITARIST,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Fernando3),
},

[TRAINER_FERNANDO_4] =
{
    .trainerName = _("Fernando"),
    .trainerClass = TRAINER_CLASS_GUITARIST,
    .trainerPic = TRAINER_PIC_GUITARIST,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Fernando4),
},

[TRAINER_FERNANDO_5] =
{
    .trainerName = _("Fernando"),
    .trainerClass = TRAINER_CLASS_GUITARIST,
    .trainerPic = TRAINER_PIC_GUITARIST,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Fernando5),
},

[TRAINER_SAWYER_2] =
{
    .trainerName = _("Sawyer"),
    .trainerClass = TRAINER_CLASS_HIKER,
    .trainerPic = TRAINER_PIC_HIKER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .party = TRAINER_PARTY(sParty_Sawyer2),
},

[TRAINER_SAWYER_3] =
{
    .trainerName = _("Sawyer"),
    .trainerClass = TRAINER_CLASS_HIKER,
    .trainerPic = TRAINER_PIC_HIKER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .party = TRAINER_PARTY(sParty_Sawyer3),
},

[TRAINER_SAWYER_4] =
{
    .trainerName = _("Sawyer"),
    .trainerClass = TRAINER_CLASS_HIKER,
    .trainerPic = TRAINER_PIC_HIKER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .party = TRAINER_PARTY(sParty_Sawyer4),
},

[TRAINER_SAWYER_5] =
{
    .trainerName = _("Sawyer"),
    .trainerClass = TRAINER_CLASS_HIKER,
    .trainerPic = TRAINER_PIC_HIKER,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HIKER,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY,
    .party = TRAINER_PARTY(sParty_Sawyer5),
},

[TRAINER_GABRIELLE_2] =
{
    .trainerName = _("Gabrielle"),
    .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
    .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Gabrielle2),
},

[TRAINER_GABRIELLE_3] =
{
    .trainerName = _("Gabrielle"),
    .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
    .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Gabrielle3),
},

[TRAINER_GABRIELLE_4] =
{
    .trainerName = _("Gabrielle"),
    .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
    .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Gabrielle4),
},

[TRAINER_GABRIELLE_5] =
{
    .trainerName = _("Gabrielle"),
    .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
    .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Gabrielle5),
},

[TRAINER_THALIA_2] =
{
    .trainerName = _("Thalia"),
    .trainerClass = TRAINER_CLASS_BEAUTY,
    .trainerPic = TRAINER_PIC_BEAUTY,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Thalia2),
},

[TRAINER_THALIA_3] =
{
    .trainerName = _("Thalia"),
    .trainerClass = TRAINER_CLASS_BEAUTY,
    .trainerPic = TRAINER_PIC_BEAUTY,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Thalia3),
},

[TRAINER_THALIA_4] =
{
    .trainerName = _("Thalia"),
    .trainerClass = TRAINER_CLASS_BEAUTY,
    .trainerPic = TRAINER_PIC_BEAUTY,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Thalia4),
},

[TRAINER_THALIA_5] =
{
    .trainerName = _("Thalia"),
    .trainerClass = TRAINER_CLASS_BEAUTY,
    .trainerPic = TRAINER_PIC_BEAUTY,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
    .doubleBattle = FALSE,
    .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
    .party = TRAINER_PARTY(sParty_Thalia5),
},

[TRAINER_MARIELA] =
{
    .trainerName = _("Mariela"),
    .trainerClass = TRAINER_CLASS_PSYCHIC,
    .trainerPic = TRAINER_PIC_PSYCHIC_F,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .party = TRAINER_PARTY(sParty_Mariela),
},

[TRAINER_ALVARO] =
{
    .trainerName = _("Alvaro"),
    .trainerClass = TRAINER_CLASS_PSYCHIC,
    .trainerPic = TRAINER_PIC_PSYCHIC_M,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_INTENSE,
    .doubleBattle = FALSE,
    .party = TRAINER_PARTY(sParty_Alvaro),
},

[TRAINER_EVERETT] =
{
    .trainerName = _("Everett"),
    .trainerClass = TRAINER_CLASS_GENTLEMAN,
    .trainerPic = TRAINER_PIC_GENTLEMAN,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_RICH,
    .doubleBattle = FALSE,
    .party = TRAINER_PARTY(sParty_Everett),
},

[TRAINER_RED] =
{
    .trainerName = _("Red"),
    .trainerClass = TRAINER_CLASS_RIVAL,
    .trainerPic = TRAINER_PIC_RED,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .party = TRAINER_PARTY(sParty_Red),
},

[TRAINER_LEAF] =
{
    .trainerName = _("Leaf"),
    .trainerClass = TRAINER_CLASS_RIVAL,
    .trainerPic = TRAINER_PIC_LEAF,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .party = TRAINER_PARTY(sParty_Leaf),
},

[TRAINER_BRENDAN_PLACEHOLDER] =
{
    .trainerName = _("Brendan"),
    .trainerClass = TRAINER_CLASS_RS_PROTAG,
    .trainerPic = TRAINER_PIC_RS_BRENDAN,
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .party = TRAINER_PARTY(sParty_BrendanLinkPlaceholder),
},

[TRAINER_MAY_PLACEHOLDER] =
{
    .trainerName = _("May"),
    .trainerClass = TRAINER_CLASS_RS_PROTAG,
    .trainerPic = TRAINER_PIC_RS_MAY,
    .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_MALE,
    .doubleBattle = FALSE,
    .party = TRAINER_PARTY(sParty_MayLinkPlaceholder),
},
