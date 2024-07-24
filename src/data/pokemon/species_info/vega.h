#ifdef __INTELLISENSE__
const struct SpeciesInfo gSpeciesInfoGen2[] =
{
#endif

#define DEX_INFO(Name)   \
    .cryId = CRY_##Name, \
    .natDexNum = NATIONAL_DEX_##Name

#define SPECIES_VALUES(Name)                     \
    .frontPic = gMonFrontPic_##Name,             \
    .frontAnimFrames = sAnims_##Name,            \
    .backPic = gMonBackPic_##Name,               \
    .palette = gMonPalette_##Name,               \
    .shinyPalette = gMonShinyPalette_##Name,     \
    .iconSprite = gMonIcon_##Name,               \
    FOOTPRINT(Name),                             \
    .levelUpLearnset = s##Name##LevelUpLearnset, \
    .teachableLearnset = s##Name##TeachableLearnset

#if P_FAMILY_EKANS
    [SPECIES_ADNOKANA] =
    {
        .baseHP        = 80,
        .baseAttack    = 125,
        .baseDefense   = 79,
        .baseSpeed     = 105,
        .baseSpAttack  = 65,
        .baseSpDefense = 89,
        .types = MON_TYPES(TYPE_POISON, TYPE_STEEL),
        .catchRate = 45,
        .expYield = R185,
        .evYield_Attack = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 10,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD, EGG_GROUP_DRAGON),
        .abilities = { ABILITY_INTIMIDATE, ABILITY_SHED_SKIN, ABILITY_UNNERVE },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Adnokana"),
        DEX_INFO(ADNOKANA),
        .categoryName = _("Anaconda"),
        .height = 88,
        .weight = 698,
        .description = COMPOUND_STRING(
            "Placeholder\n"
            "Placeholder\n"
            "Placeholder\n"
            "Placeholder."),
        .pokemonScale = 426,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        SPECIES_VALUES(Adnokana),
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicSizeFemale = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 3,
        .frontAnimId = ANIM_GROW_VIBRATE,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_SHAKE_FLASH_YELLOW,
        .iconPalIndex = 0,
    },
#endif //P_FAMILY_EKANS

#if P_FAMILY_PIKACHU
    [SPECIES_MACHU] =
    {
        .baseHP        = 85,
        .baseAttack    = 130,
        .baseDefense   = 90,
        .baseSpAttack  = 50,
        .baseSpDefense = 50,
        .baseSpeed     = 90,
        .types = MON_TYPES(TYPE_ELECTRIC, TYPE_FIGHTING),
        .catchRate = 75,
        .expYield = RAICHU_EXP_YIELD,
        .evYield_Attack = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 10,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE, EGG_GROUP_FAIRY),
        .abilities = { ABILITY_STATIC, ABILITY_NO_GUARD, ABILITY_IRON_FIST },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Machu"),
        DEX_INFO(MACHU),
        .categoryName = _("Muscle"),
        .height = 13,
        .weight = 698,
        .description = COMPOUND_STRING(
            "Placeholder\n"
            "Placeholder\n"
            "Placeholder\n"
            "Placeholder."),
        .pokemonScale = 426,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        SPECIES_VALUES(Machu),
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicSizeFemale = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 3,
        .frontAnimId = ANIM_GROW_VIBRATE,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_SHAKE_FLASH_YELLOW,
        .iconPalIndex = 0,
    },
#endif //P_FAMILY_PIKACHU

#if P_FAMILY_SANDSHREW
    [SPECIES_SANDRILL] =
    {
        .baseHP        = 81,
        .baseAttack    = 115,
        .baseDefense   = 120,
        .baseSpAttack  = 59,
        .baseSpDefense = 65,
        .baseSpeed     = 80,
        .types = MON_TYPES(TYPE_GROUND),
        .catchRate = 45,
        .expYield = 193,
        .evYield_Defense = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 10,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_SAND_VEIL, ABILITY_SAND_RUSH, ABILITY_SAND_FORCE },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Sandrill"),
        DEX_INFO(SANDRILL),
        .categoryName = _("Drill"),
        .height = 14,
        .weight = 802,
        .description = COMPOUND_STRING(
            "Placeholder\n"
            "Placeholder\n"
            "Placeholder\n"
            "Placeholder."),
        .pokemonScale = 426,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        SPECIES_VALUES(Sandrill),
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicSizeFemale = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 3,
        .frontAnimId = ANIM_GROW_VIBRATE,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_SHAKE_FLASH_YELLOW,
        .iconPalIndex = 0,
    },
#endif //P_FAMILY_SANDSHREW

#if P_FAMILY_FARFETCHD
    [SPECIES_RDUCKULUS] =
    {
        .baseHP        = 106,
        .baseAttack    = 100,
        .baseDefense   = 65,
        .baseSpAttack  = 58,
        .baseSpDefense = 72,
        .baseSpeed     = 116,
        .types = MON_TYPES(TYPE_NORMAL, TYPE_FLYING),
        .catchRate = 45,
        .expYield = 198,
        .evYield_Speed = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 10,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FLYING, EGG_GROUP_FIELD),
        .abilities = { ABILITY_PURE_POWER, ABILITY_INNER_FOCUS, ABILITY_DEFIANT },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("R'duckulus"),
        DEX_INFO(RDUCKULUS),
        .categoryName = _("Wild Duck"),
        .height = 11,
        .weight = 270,
        .description = COMPOUND_STRING(
            "Placeholder\n"
            "Placeholder\n"
            "Placeholder\n"
            "Placeholder."),
        .pokemonScale = 426,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        SPECIES_VALUES(Rduckulus),
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicSizeFemale = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 3,
        .frontAnimId = ANIM_GROW_VIBRATE,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_SHAKE_FLASH_YELLOW,
        .iconPalIndex = 0,
    },
#endif //P_FAMILY_FARFETCHD

#if P_FAMILY_KOFFING
    [SPECIES_CHEAUKING] =
    {
        .baseHP        = 75,
        .baseAttack    = 105,
        .baseDefense   = 130,
        .baseSpAttack  = 100,
        .baseSpDefense = 80,
        .baseSpeed     = 60,
        .types = MON_TYPES(TYPE_POISON, TYPE_DARK),
        .catchRate = 45,
        .expYield = 168,
        .evYield_Defense = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 10,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_AMORPHOUS),
        .abilities = { ABILITY_INTIMIDATE, ABILITY_AFTERMATH, ABILITY_STENCH },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Cheauking"),
        DEX_INFO(CHEAUKING),
        .categoryName = _("Poison Gas"),
        .height = 15,
        .weight = 139,
        .description = COMPOUND_STRING(
            "Placeholder\n"
            "Placeholder\n"
            "Placeholder\n"
            "Placeholder."),
        .pokemonScale = 426,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        SPECIES_VALUES(Cheauking),
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicSizeFemale = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 3,
        .frontAnimId = ANIM_GROW_VIBRATE,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_SHAKE_FLASH_YELLOW,
        .iconPalIndex = 0,
    },
#endif //P_FAMILY_KOFFING

//Needs English name
#if P_FAMILY_DROWZEE
    [SPECIES_SURIPITTO] =
    {
        .baseHP        = 90,
        .baseAttack    = 103,
        .baseDefense   = 70,
        .baseSpAttack  = 73,
        .baseSpDefense = 135,
        .baseSpeed     = 72,
        .types = MON_TYPES(TYPE_PSYCHIC),
        .catchRate = 45,
        .expYield = 197,
        .evYield_SpDefense = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 10,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE),
        .abilities = { ABILITY_INSOMNIA, ABILITY_INNER_FOCUS, ABILITY_FOREWARN },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Suripitto"),
        DEX_INFO(SURIPITTO),
        .categoryName = _("Hypnosis"),
        .height = 19,
        .weight = 879,
        .description = COMPOUND_STRING(
            "Placeholder\n"
            "Placeholder\n"
            "Placeholder\n"
            "Placeholder."),
        .pokemonScale = 426,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        SPECIES_VALUES(Suripitto),
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicSizeFemale = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 3,
        .frontAnimId = ANIM_GROW_VIBRATE,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_SHAKE_FLASH_YELLOW,
        .iconPalIndex = 0,
    },
#endif //P_FAMILY_DROWZEE

//Rougella
#if P_FAMILY_JYNX
    [SPECIES_HEILAREINA] =
    {
        .baseHP        = 75,
        .baseAttack    = 90,
        .baseDefense   = 55,
        .baseSpAttack  = 135,
        .baseSpDefense = 95,
        .baseSpeed     = 90,
        .types = MON_TYPES(TYPE_ICE, TYPE_PSYCHIC),
        .catchRate = 45,
        .expYield = 179,
        .evYield_Speed = 3,
        .genderRatio = PERCENT_FEMALE(100),
        .eggCycles = 10,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_HUMAN_LIKE),
        .abilities = { ABILITY_MAGIC_BOUNCE, ABILITY_FILTER, ABILITY_DRY_SKIN },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Heilareina"),
        DEX_INFO(HEILAREINA),
        .categoryName = _("Human Shape"),
        .height = 17,
        .weight = 388,
        .description = COMPOUND_STRING(
            "Placeholder\n"
            "Placeholder\n"
            "Placeholder\n"
            "Placeholder."),
        .pokemonScale = 426,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        SPECIES_VALUES(Heilareina),
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicSizeFemale = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 3,
        .frontAnimId = ANIM_GROW_VIBRATE,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_SHAKE_FLASH_YELLOW,
        .iconPalIndex = 0,
    },
#endif //P_FAMILY_JYNX

//Lediman
#if P_FAMILY_LEDYBA
    [SPECIES_LEDYBULK] =
    {
        .baseHP        = 70,
        .baseAttack    = 120,
        .baseDefense   = 60,
        .baseSpAttack  = 75,
        .baseSpDefense = 90,
        .baseSpeed     = 80,
        .types = MON_TYPES(TYPE_BUG, TYPE_FIGHTING),
        .catchRate = 45,
        .expYield = 174,
        .evYield_Attack = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 10,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_BUG, EGG_GROUP_BUG),
        .abilities = { ABILITY_SWARM, ABILITY_EARLY_BIRD, ABILITY_IRON_FIST },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Ledybulk"),
        DEX_INFO(LEDYBULK),
        .categoryName = _("Five Star"),
        .height = 15,
        .weight = 495,
        .description = COMPOUND_STRING(
            "Placeholder\n"
            "Placeholder\n"
            "Placeholder\n"
            "Placeholder."),
        .pokemonScale = 426,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        SPECIES_VALUES(Ledybulk),
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicSizeFemale = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 3,
        .frontAnimId = ANIM_GROW_VIBRATE,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_SHAKE_FLASH_YELLOW,
        .iconPalIndex = 0,
    },
#endif //P_FAMILY_LEDYBA

#if P_FAMILY_DUNSPARCE
    [SPECIES_AULDSPARCE] =
    {
        .baseHP        = 155,
        .baseAttack    = 90,
        .baseDefense   = 85,
        .baseSpAttack  = 70,
        .baseSpDefense = 75,
        .baseSpeed     = 40,
        .types = MON_TYPES(TYPE_NORMAL, TYPE_DRAGON),
        .catchRate = 60,
        .expYield = 185,
        .evYield_HP = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 10,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_SERENE_GRACE, ABILITY_OWN_TEMPO, ABILITY_RATTLED },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Auldsparce"),
        DEX_INFO(AULDSPARCE),
        .categoryName = _("Land Snake"),
        .height = 39,
        .weight = 2045,
        .description = COMPOUND_STRING(
            "Placeholder\n"
            "Placeholder\n"
            "Placeholder\n"
            "Placeholder."),
        .pokemonScale = 426,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        SPECIES_VALUES(Auldsparce),
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicSizeFemale = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 3,
        .frontAnimId = ANIM_GROW_VIBRATE,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_SHAKE_FLASH_YELLOW,
        .iconPalIndex = 0,
    },
#endif //P_FAMILY_DUNSPARCE

#if P_FAMILY_TORKOAL
    [SPECIES_GALAVAGOS] =
    {
        .baseHP        = 85,
        .baseAttack    = 105,
        .baseDefense   = 160,
        .baseSpAttack  = 95,
        .baseSpDefense = 80,
        .baseSpeed     = 20,
        .types = MON_TYPES(TYPE_FIRE, TYPE_ROCK),
        .catchRate = 90,
        .expYield = 127,
        .evYield_Defense = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 10,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD),
        .abilities = { ABILITY_WHITE_SMOKE, ABILITY_DROUGHT, ABILITY_SOLID_ROCK },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Galavagos"),
        DEX_INFO(GALAVAGOS),
        .categoryName = _("Lava"),
        .height = 18,
        .weight = 2304,
        .description = COMPOUND_STRING(
            "Placeholder\n"
            "Placeholder\n"
            "Placeholder\n"
            "Placeholder."),
        .pokemonScale = 426,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        SPECIES_VALUES(Galavagos),
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicSizeFemale = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 3,
        .frontAnimId = ANIM_GROW_VIBRATE,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_SHAKE_FLASH_YELLOW,
        .iconPalIndex = 0,
    },
#endif //P_FAMILY_TORKOAL

//Ranconette
#if P_FAMILY_SHUPPET
    [SPECIES_MANNEKING] =
    {
        .baseHP        = 69,
        .baseAttack    = 140,
        .baseDefense   = 75,
        .baseSpAttack  = 93,
        .baseSpDefense = 73,
        .baseSpeed     = 75,
        .types = MON_TYPES(TYPE_GHOST),
        .catchRate = 45,
        .expYield = 207,
        .evYield_Attack = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 10,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_AMORPHOUS),
        .abilities = { ABILITY_INSOMNIA, ABILITY_FRISK, ABILITY_CURSED_BODY },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Manneking"),
        DEX_INFO(MANNEKING),
        .categoryName = _("Marionette"),
        .height = 13,
        .weight = 156,
        .description = COMPOUND_STRING(
            "Placeholder\n"
            "Placeholder\n"
            "Placeholder\n"
            "Placeholder."),
        .pokemonScale = 426,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        SPECIES_VALUES(Manneking),
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicSizeFemale = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 3,
        .frontAnimId = ANIM_GROW_VIBRATE,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_SHAKE_FLASH_YELLOW,
        .iconPalIndex = 0,
    },
#endif //P_FAMILY_SHUPPET

//Chimecho evolution? (Karakoron)

//Water/Fairy?
#if P_FAMILY_LUVDISC
    [SPECIES_VALENTIDE] =
    {
        .baseHP        = 73,
        .baseAttack    = 45,
        .baseDefense   = 65,
        .baseSpAttack  = 85,
        .baseSpDefense = 75,
        .baseSpeed     = 127,
        .types = MON_TYPES(TYPE_WATER),
        .catchRate = 95,
        .expYield = 190,
        .evYield_Speed = 2,
        .genderRatio = PERCENT_FEMALE(75),
        .eggCycles = 10,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_WATER_2),
        .abilities = { ABILITY_SWIFT_SWIM, ABILITY_NONE, ABILITY_HYDRATION },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Valentide"),
        DEX_INFO(VALENTIDE),
        .categoryName = _("Rendezvous"),
        .height = 12,
        .weight = 174,
        .description = COMPOUND_STRING(
            "Placeholder\n"
            "Placeholder\n"
            "Placeholder\n"
            "Placeholder."),
        .pokemonScale = 426,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        SPECIES_VALUES(Valentide),
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicSizeFemale = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 3,
        .frontAnimId = ANIM_GROW_VIBRATE,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_SHAKE_FLASH_YELLOW,
        .iconPalIndex = 0,
    },
#endif //P_FAMILY_LUVDISC

#if P_FAMILY_PACHIRISU
    [SPECIES_PACHIRIKKU] =
    {
        .baseHP        = 80,
        .baseAttack    = 50,
        .baseDefense   = 90,
        .baseSpAttack  = 75,
        .baseSpDefense = 105,
        .baseSpeed     = 105,
        .types = MON_TYPES(TYPE_ELECTRIC),
        .catchRate = 75,
        .expYield = 210,
        .evYield_SpDefense = 1,
        .evYield_Speed = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 10,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_FIELD, EGG_GROUP_FAIRY),
        .abilities = { ABILITY_VOLT_ABSORB, ABILITY_PICKUP, ABILITY_CHEEK_POUCH },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Pachirikku"),
        DEX_INFO(PACHIRIKKU),
        .categoryName = _("EleSquirrel"),
        .height = 7,
        .weight = 233,
        .description = COMPOUND_STRING(
            "Placeholder\n"
            "Placeholder\n"
            "Placeholder\n"
            "Placeholder."),
        .pokemonScale = 426,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        SPECIES_VALUES(Pachirikku),
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicSizeFemale = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 3,
        .frontAnimId = ANIM_GROW_VIBRATE,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_SHAKE_FLASH_YELLOW,
        .iconPalIndex = 0,
    },
#endif //P_FAMILY_PACHIRISU

//Sableater, originally Sableye evolution
#if P_FAMILY_GEHEMOTH
    [SPECIES_GEHEMOTH] =
    {
        .baseHP        = 85,
        .baseAttack    = 105,
        .baseDefense   = 85,
        .baseSpAttack  = 100,
        .baseSpDefense = 75,
        .baseSpeed     = 70,
        .types = MON_TYPES(TYPE_ROCK, TYPE_GHOST),
        .catchRate = 90,
        .expYield = 178,
        .evYield_Attack = 2,
        .evYield_SpAttack = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 10,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_MINERAL),
        .abilities = { ABILITY_TINTED_LENS, ABILITY_EARTH_EATER, ABILITY_SOLID_ROCK },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Gehemoth"),
        DEX_INFO(GEHEMOTH),
        .categoryName = _("Gem Eater"),
        .height = 10,
        .weight = 220,
        .description = COMPOUND_STRING(
            "Placeholder\n"
            "Placeholder\n"
            "Placeholder\n"
            "Placeholder."),
        .pokemonScale = 426,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        SPECIES_VALUES(Gehemoth),
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicSizeFemale = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 3,
        .frontAnimId = ANIM_GROW_VIBRATE,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_SHAKE_FLASH_YELLOW,
        .iconPalIndex = 0,
    },
#endif //P_FAMILY_GEHEMOTH

#ifdef __INTELLISENSE__
};
#endif
