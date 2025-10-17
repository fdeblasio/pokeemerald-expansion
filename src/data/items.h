#if I_USE_EVO_HELD_ITEMS_FROM_BAG == TRUE
    #define EVO_HELD_ITEM_TYPE ITEM_USE_PARTY_MENU
    #define EVO_HELD_ITEM_FIELD_FUNC ItemUseOutOfBattle_EvolutionStone
#else
    #define EVO_HELD_ITEM_TYPE ITEM_USE_BAG_MENU
    #define EVO_HELD_ITEM_FIELD_FUNC ItemUseOutOfBattle_CannotUse
#endif

#define GEM_BOOST_PARAM ((I_GEM_BOOST_POWER >= GEN_6) ? 30 : 50)
#define TYPE_BOOST_PARAM ((I_TYPE_BOOST_POWER >= GEN_4) ? 20 : 10) // For non Pokémon-specific type-boosting held items.
#define POWER_ITEM_BOOST ((I_POWER_ITEM_BOOST >= GEN_7) ? 8 : 4)

#define X_ITEM_STAGES ((B_X_ITEMS_BUFF >= GEN_7) ? 2 : 1)

#define EVO_ITEM_PRICE 2000
#define TREASURE_FACTOR ((I_SELL_VALUE_FRACTION >= GEN_9) ? 2 : 1)

#define LEGENDARY_ITEM_COST 10000

#define ITEM_NAME(str) COMPOUND_STRING_SIZE_LIMIT(str, ITEM_NAME_LENGTH)
#define ITEM_PLURAL_NAME(str) COMPOUND_STRING_SIZE_LIMIT(str, ITEM_NAME_PLURAL_LENGTH)

// Shared Item Description entries

static const u8 sFullHealDesc[]       = _("Heals all the\n"
                                          "status problems of\n"
                                          "one Pokémon.");

static const u8 sPokeDollDesc[]       = _("Use to flee from\n"
                                          "any battle with\n"
                                          "a wild Pokémon.");

static const u8 sMaxReviveDesc[]      = _("Revives a fainted\n"
                                          "Pokémon with all\n"
                                          "its HP.");

static const u8 sHealthFeatherDesc[]  = _("An item that raises\n"
                                          "the base HP of\n"
                                          "a Pokémon.");

static const u8 sMuscleFeatherDesc[]  = _("An item that raises\n"
                                          "the base Attack of\n"
                                          "a Pokémon.");

static const u8 sResistFeatherDesc[]  = _("An item that raises\n"
                                          "the base Defense\n"
                                          "of a Pokémon.");

static const u8 sGeniusFeatherDesc[]  = _("An item that raises\n"
                                          "the base Sp. Atk.\n"
                                          "of a Pokémon.");

static const u8 sCleverFeatherDesc[]  = _("An item that raises\n"
                                          "the base Sp. Def.\n"
                                          "of a Pokémon.");

static const u8 sSwiftFeatherDesc[]   = _("An item that raises\n"
                                          "the base Speed of\n"
                                          "a Pokémon.");

static const u8 sBigMushroomDesc[]    = _("A rare mushroom\n"
                                          "that would sell at a\n"
                                          "high price.");

static const u8 sRootFossilDesc[]     = _("A fossil of an\n"
                                          "ancient, seafloor-\n"
                                          "dwelling Pokémon.");

static const u8 sFossilizedFishDesc[] = _("A fossil of an\n"
                                          "ancient, sea-\n"
                                          "dwelling Pokémon.");

static const u8 sBeadMailDesc[]       = _("Mail featuring a\n"
                                          "sketch of the\n"
                                          "holding Pokémon.");

static const u8 sNectarDesc[]         = _("Flower nectar that\n"
                                          "changes the form\n"
                                          "of certain Pokémon.");

static const u8 sCharizarditeDesc[]   = _("This stone enables\n"
                                          "Charizard to Mega\n"
                                          "Evolve in battle.");

static const u8 sMewtwoniteDesc[]     = _("This stone enables\n"
                                          "Mewtwo to Mega\n"
                                          "Evolve in battle.");

static const u8 sSeaIncenseDesc[]     = _("A hold item that\n"
                                          "slightly boosts\n"
                                          "Water-type moves.");

static const u8 sOddIncenseDesc[]     = _("A hold item that\n"
                                          "boosts Psychic-\n"
                                          "type moves.");

static const u8 sRockIncenseDesc[]    = _("A hold item that\n"
                                          "raises the power of\n"
                                          "Rock-type moves.");

static const u8 sFullIncenseDesc[]    = _("A held item that\n"
                                          "makes the holder\n"
                                          "move slower.");

static const u8 sRoseIncenseDesc[]    = _("A hold item that\n"
                                          "raises the power of\n"
                                          "Grass-type moves.");

static const u8 sLuckIncenseDesc[]    = _("Doubles money in\n"
                                          "battle if the\n"
                                          "holder takes part.");

static const u8 sPureIncenseDesc[]    = _("A hold item that\n"
                                          "helps repel wild\n"
                                          "Pokémon.");

static const u8 sKingsRockDesc[]      = _("A hold item that\n"
                                          "may cause flinching\n"
                                          "when the foe is hit.");

static const u8 sFigyBerryDesc[]      = _("A hold item that\n"
                                          "restores HP but\n"
                                          "may confuse.");

const u8 gQuestionMarksItemName[] = _("????????");

static const u8 sQuestionMarksDesc[]  = _("?????");

static const u8 sKeyToRoomDesc[]      = _("A key that opens a\n"
                                          "door inside the\n"
                                          "Abandoned Ship.");

static const u8 sTeraShardDesc[]      = _("These shards may\n"
                                          "form when a Tera\n"
                                          "Pokémon faints.");

static const u8 sGenericMulchDesc[]   = _("A fertilizer that\n"
                                          "is unsuitable for\n"
                                          "local soil.");


#define ITEM_ICON(item)          \
    .iconPic = gItemIcon_##item, \
    .iconPalette = gItemIconPalette_##item

const struct Item gItemsInfo[] =
{
    [ITEM_NONE] =
    {
        .name = gQuestionMarksItemName,
        .price = 0,
        .description = sQuestionMarksDesc,
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_UNCATEGORIZED,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        ITEM_ICON(QuestionMark),
    },

// Poké Balls
#define POKE_BALL_INFO           \
    .pocket = POCKET_POKE_BALLS, \
    .type = ITEM_USE_BAG_MENU,   \
    .battleUsage = EFFECT_ITEM_THROW_BALL



    [ITEM_STRANGE_BALL] =
    {
        .name = ITEM_NAME("Strange Ball"),
        .price = 0,
        .description = COMPOUND_STRING(
            "An unusual Ball\n"
            "warped through\n"
            "space and time."),
        POKE_BALL_INFO,
        .secondaryId = BALL_STRANGE,
        ITEM_ICON(StrangeBall),
    },

    [ITEM_POKE_BALL] =
    {
        .name = ITEM_NAME("Poké Ball"),
        .price = 100,
        .description = COMPOUND_STRING(
            "A tool used for\n"
            "catching wild\n"
            "Pokémon."),
        POKE_BALL_INFO,
        .secondaryId = BALL_POKE,
        ITEM_ICON(PokeBall),
    },

    [ITEM_GREAT_BALL] =
    {
        .name = ITEM_NAME("Great Ball"),
        .price = 400,
        .description = COMPOUND_STRING(
            "A good Ball with a\n"
            "higher catch rate\n"
            "than a Poké Ball."),
        POKE_BALL_INFO,
        .secondaryId = BALL_GREAT,
        ITEM_ICON(GreatBall),
    },

    [ITEM_ULTRA_BALL] =
    {
        .name = ITEM_NAME("Ultra Ball"),
        .price = (I_PRICE >= GEN_7) ? 800 : 1200,
        .description = COMPOUND_STRING(
            "A better Ball with\n"
            "a higher catch rate\n"
            "than a Great Ball."),
        POKE_BALL_INFO,
        .secondaryId = BALL_ULTRA,
        ITEM_ICON(UltraBall),
    },

    [ITEM_MASTER_BALL] =
    {
        .name = ITEM_NAME("Master Ball"),
        .price = 0,
        .description = COMPOUND_STRING(
            "The best Ball that\n"
            "catches a Pokémon\n"
            "without fail."),
        POKE_BALL_INFO,
        .secondaryId = BALL_MASTER,
        ITEM_ICON(MasterBall),
    },

    [ITEM_PREMIER_BALL] =
    {
        .name = ITEM_NAME("Premier Ball"),
        .price = (I_PRICE >= GEN_7) ? 20 : 200,
        .description = COMPOUND_STRING(
            "A rare Ball made\n"
            "in commemoration\n"
            "of some event."),
        POKE_BALL_INFO,
        .secondaryId = BALL_PREMIER,
        .iconPic = gItemIcon_PremierBall,
        .iconPalette = gItemIconPalette_LuxuryBall,
    },

    [ITEM_HEAL_BALL] =
    {
        .name = ITEM_NAME("Heal Ball"),
        .price = 300,
        .description = COMPOUND_STRING(
            "A remedial Ball\n"
            "that restores\n"
            "caught Pokémon."),
        POKE_BALL_INFO,
        .secondaryId = BALL_HEAL,
        ITEM_ICON(HealBall),
    },

    [ITEM_NET_BALL] =
    {
        .name = ITEM_NAME("Net Ball"),
        .price = 1000,
        .description = COMPOUND_STRING(
            "A Ball that works\n"
            "well on Water- and\n"
            "Bug-type Pokémon."),
        POKE_BALL_INFO,
        .secondaryId = BALL_NET,
        ITEM_ICON(NetBall),
    },

    [ITEM_NEST_BALL] =
    {
        .name = ITEM_NAME("Nest Ball"),
        .price = 1000,
        .description = COMPOUND_STRING(
            "A Ball that works\n"
            "better on weaker\n"
            "Pokémon."),
        POKE_BALL_INFO,
        .secondaryId = BALL_NEST,
        ITEM_ICON(NestBall),
    },

    [ITEM_DIVE_BALL] =
    {
        .name = ITEM_NAME("Dive Ball"),
        .price = 1000,
        .description = COMPOUND_STRING(
            "A Ball that works\n"
            "better on Pokémon\n"
            "on the ocean floor."),
        POKE_BALL_INFO,
        .secondaryId = BALL_DIVE,
        ITEM_ICON(DiveBall),
    },

    [ITEM_DUSK_BALL] =
    {
        .name = ITEM_NAME("Dusk Ball"),
        .price = 1000,
        .description = COMPOUND_STRING(
            "Works well if\n"
            "used in a\n"
            "dark place."),
        POKE_BALL_INFO,
        .secondaryId = BALL_DUSK,
        ITEM_ICON(DuskBall),
    },

    [ITEM_TIMER_BALL] =
    {
        .name = ITEM_NAME("Timer Ball"),
        .price = 1000,
        .description = COMPOUND_STRING(
            "A Ball that gains\n"
            "power in battles\n"
            "taking many turns."),
        POKE_BALL_INFO,
        .secondaryId = BALL_TIMER,
        .iconPic = gItemIcon_TimerBall,
        .iconPalette = gItemIconPalette_RepeatBall,
    },

    [ITEM_QUICK_BALL] =
    {
        .name = ITEM_NAME("Quick Ball"),
        .price = 1000,
        .description = COMPOUND_STRING(
            "Works well if\n"
            "used on the\n"
            "first turn."),
        POKE_BALL_INFO,
        .secondaryId = BALL_QUICK,
        ITEM_ICON(QuickBall),
    },

    [ITEM_REPEAT_BALL] =
    {
        .name = ITEM_NAME("Repeat Ball"),
        .price = 1000,
        .description = COMPOUND_STRING(
            "A Ball that works\n"
            "better on Pokémon\n"
            "caught before."),
        POKE_BALL_INFO,
        .secondaryId = BALL_REPEAT,
        ITEM_ICON(RepeatBall),
    },

    [ITEM_LUXURY_BALL] =
    {
        .name = ITEM_NAME("Luxury Ball"),
        .price = (I_PRICE >= GEN_8) ? 3000 : 1000,
        .description = COMPOUND_STRING(
            "A cozy Ball that\n"
            "makes Pokémon\n"
            "more friendly."),
        POKE_BALL_INFO,
        .secondaryId = BALL_LUXURY,
        ITEM_ICON(LuxuryBall),
    },

    [ITEM_LEVEL_BALL] =
    {
        .name = ITEM_NAME("Level Ball"),
        .price = (I_PRICE >= GEN_7) ? 1000 : 300,
        .description = COMPOUND_STRING(
            "A Ball that works\n"
            "well on lower\n"
            "level Pokémon."),
        POKE_BALL_INFO,
        .secondaryId = BALL_LEVEL,
        ITEM_ICON(LevelBall),
    },

    [ITEM_LURE_BALL] =
    {
        .name = ITEM_NAME("Lure Ball"),
        .price = (I_PRICE >= GEN_7) ? 1000 : 300,
        .description = COMPOUND_STRING(
            "A Ball that works\n"
            "well on fished\n"
            "up Pokémon."),
        POKE_BALL_INFO,
        .secondaryId = BALL_LURE,
        ITEM_ICON(LureBall),
    },

    [ITEM_MOON_BALL] =
    {
        .name = ITEM_NAME("Moon Ball"),
        .price = (I_PRICE >= GEN_7) ? 1000 : 300,
        .description = COMPOUND_STRING(
            "A Ball that works\n"
            "well on Moon\n"
            "Stone users."),
        POKE_BALL_INFO,
        .secondaryId = BALL_MOON,
        ITEM_ICON(MoonBall),
    },

    [ITEM_FRIEND_BALL] =
    {
        .name = ITEM_NAME("Friend Ball"),
        .price = (I_PRICE >= GEN_7) ? 1000 : 300,
        .description = COMPOUND_STRING(
            "A Ball that makes\n"
            "a Pokémon friendly\n"
            "when caught."),
        POKE_BALL_INFO,
        .secondaryId = BALL_FRIEND,
        ITEM_ICON(FriendBall),
    },

    [ITEM_LOVE_BALL] =
    {
        .name = ITEM_NAME("Love Ball"),
        .price = (I_PRICE >= GEN_7) ? 1000 : 300,
        .description = COMPOUND_STRING(
            "Works well on\n"
            "Pokémon of the\n"
            "opposite gender."),
        POKE_BALL_INFO,
        .secondaryId = BALL_LOVE,
        ITEM_ICON(LoveBall),
    },

    [ITEM_FAST_BALL] =
    {
        .name = ITEM_NAME("Fast Ball"),
        .price = (I_PRICE >= GEN_7) ? 1000 : 300,
        .description = COMPOUND_STRING(
            "Works well on\n"
            "very fast\n"
            "Pokémon."),
        POKE_BALL_INFO,
        .secondaryId = BALL_FAST,
        ITEM_ICON(FastBall),
    },

    [ITEM_HEAVY_BALL] =
    {
        .name = ITEM_NAME("Heavy Ball"),
        .price = (I_PRICE >= GEN_7) ? 1000 : 300,
        .description = COMPOUND_STRING(
            "Works well on\n"
            "very heavy\n"
            "Pokémon."),
        POKE_BALL_INFO,
        .secondaryId = BALL_HEAVY,
        ITEM_ICON(HeavyBall),
    },

    [ITEM_DREAM_BALL] =
    {
        .name = ITEM_NAME("Dream Ball"),
        .price = 1000,
        .description = COMPOUND_STRING(
        #if B_DREAM_BALL_MODIFIER >= GEN_8
            "A Ball that works\n"
            "well on sleeping\n"
            "Pokémon."),
        #else
            "A Poké Ball used in\n"
            "the Entree Forest."),
        #endif
        POKE_BALL_INFO,
        .secondaryId = BALL_DREAM,
        ITEM_ICON(DreamBall),
    },

    [ITEM_SAFARI_BALL] =
    {
        .name = ITEM_NAME("Safari Ball"),
        .price = 0,
        .description = COMPOUND_STRING(
            "A special Ball that\n"
            "is used only in the\n"
            "Safari Zone."),
        POKE_BALL_INFO,
        .secondaryId = BALL_SAFARI,
        ITEM_ICON(SafariBall),
    },

    [ITEM_SPORT_BALL] =
    {
        .name = ITEM_NAME("Sport Ball"),
        .price = (I_PRICE < GEN_3 || I_PRICE >= GEN_9) ? 0 : 300,
        .description = COMPOUND_STRING(
            "A special Ball\n"
            "used in the Bug-\n"
            "Catching Contest."),
        POKE_BALL_INFO,
        .secondaryId = BALL_SPORT,
        ITEM_ICON(SportBall),
    },

    [ITEM_PARK_BALL] =
    {
        .name = ITEM_NAME("Park Ball"),
        .price = 0,
        .description = COMPOUND_STRING(
            "A special Ball for\n"
            "the Pal Park."),
        POKE_BALL_INFO,
        .secondaryId = BALL_PARK,
        ITEM_ICON(ParkBall),
    },

    [ITEM_BEAST_BALL] =
    {
        .name = ITEM_NAME("Beast Ball"),
        .price = 1000,
        .description = COMPOUND_STRING(
            "A Ball designed to\n"
            "catch Ultra Beasts."),
        POKE_BALL_INFO,
        .secondaryId = BALL_BEAST,
        ITEM_ICON(BeastBall),
    },

    [ITEM_CHERISH_BALL] =
    {
        .name = ITEM_NAME("Cherish Ball"),
        .price = 0,
        .description = COMPOUND_STRING(
            "A rare Ball made\n"
            "in commemoration\n"
            "of some event."),
        POKE_BALL_INFO,
        .secondaryId = BALL_CHERISH,
        ITEM_ICON(CherishBall),
    },

// Medicine

    [ITEM_POTION] =
    {
        .name = ITEM_NAME("Potion"),
        .price = (I_PRICE >= GEN_7) ? 200 : 300,
        .holdEffectParam = 20,
        .description = COMPOUND_STRING(
            "Restores the HP of\n"
            "a Pokémon by\n"
            "20 points."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_HEALTH_RECOVERY,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_RESTORE_HP,
        .effect = gItemEffect_Potion,
        .flingPower = 30,
        ITEM_ICON(Potion),
    },

    [ITEM_SUPER_POTION] =
    {
        .name = ITEM_NAME("Super Potion"),
        .price = 700,
        .holdEffectParam = 60,
        .description = COMPOUND_STRING(
            "Restores the HP of\n"
            "a Pokémon by\n"
        #if I_HEALTH_RECOVERY >= GEN_7
            "60 points."),
        #else
            "60 points."),
        #endif
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_HEALTH_RECOVERY,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_RESTORE_HP,
        .effect = gItemEffect_SuperPotion,
        .flingPower = 30,
        .iconPic = gItemIcon_Potion,
        .iconPalette = gItemIconPalette_SuperPotion,
    },

    [ITEM_HYPER_POTION] =
    {
        .name = ITEM_NAME("Hyper Potion"),
        .price = (I_PRICE >= GEN_2 && I_PRICE <= GEN_6) ? 1200 : 1500,
        .holdEffectParam = 120,
        .description = COMPOUND_STRING(
            "Restores the HP of\n"
            "a Pokémon by\n"
        #if I_HEALTH_RECOVERY >= GEN_7
            "120 points."),
        #else
            "200 points."),
        #endif
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_HEALTH_RECOVERY,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_RESTORE_HP,
        .effect = gItemEffect_HyperPotion,
        .flingPower = 30,
        .iconPic = gItemIcon_Potion,
        .iconPalette = gItemIconPalette_HyperPotion,
    },

    [ITEM_MAX_POTION] =
    {
        .name = ITEM_NAME("Max Potion"),
        .price = 2500,
        .holdEffectParam = 255,
        .description = COMPOUND_STRING(
            "Fully restores the\n"
            "HP of a Pokémon."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_HEALTH_RECOVERY,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_RESTORE_HP,
        .effect = gItemEffect_MaxPotion,
        .flingPower = 30,
        .iconPic = gItemIcon_LargePotion,
        .iconPalette = gItemIconPalette_MaxPotion,
    },

    [ITEM_FULL_RESTORE] =
    {
        .name = ITEM_NAME("Full Restore"),
        .price = 3000,
        .holdEffectParam = 255,
        .description = COMPOUND_STRING(
            "Fully restores the\n"
            "HP and status of a\n"
            "Pokémon."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_HEALTH_RECOVERY,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_HEAL_AND_CURE_STATUS,
        .effect = gItemEffect_FullRestore,
        .flingPower = 30,
        .iconPic = gItemIcon_LargePotion,
        .iconPalette = gItemIconPalette_FullRestore,
    },

    [ITEM_REVIVE] =
    {
        .name = ITEM_NAME("Revive"),
        .price = (I_PRICE >= GEN_7) ? 2000 : 1500,
        .description = COMPOUND_STRING(
            "Revives a fainted\n"
            "Pokémon with half\n"
            "its HP."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_HEALTH_RECOVERY,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_REVIVE,
        .effect = gItemEffect_Revive,
        .flingPower = 30,
        ITEM_ICON(Revive),
    },

    [ITEM_MAX_REVIVE] =
    {
        .name = ITEM_NAME("Max Revive"),
        .price = 4000,
        .description = sMaxReviveDesc,
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_HEALTH_RECOVERY,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_REVIVE,
        .effect = gItemEffect_MaxRevive,
        .flingPower = 30,
        .iconPic = gItemIcon_MaxRevive,
        .iconPalette = gItemIconPalette_Revive,
    },

    [ITEM_FRESH_WATER] =
    {
        .name = ITEM_NAME("Fresh Water"),
        .price = 200,
        .holdEffectParam = 30,
        .description = COMPOUND_STRING(
            "A mineral water\n"
            "that restores HP\n"
        #if I_HEALTH_RECOVERY >= GEN_7
            "by 30 points."),
        #else
            "by 50 points."),
        #endif
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_HEALTH_RECOVERY,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_RESTORE_HP,
        .effect = gItemEffect_FreshWater,
        .flingPower = 30,
        ITEM_ICON(FreshWater),
    },

    [ITEM_SODA_POP] =
    {
        .name = ITEM_NAME("Soda Pop"),
        .price = 300,
        .holdEffectParam = 50,
        .description = COMPOUND_STRING(
            "A fizzy soda drink\n"
            "that restores HP\n"
        #if I_HEALTH_RECOVERY >= GEN_7
            "by 50 points."),
        #else
            "by 60 points."),
        #endif
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_HEALTH_RECOVERY,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_RESTORE_HP,
        .effect = gItemEffect_SodaPop,
        .flingPower = 30,
        ITEM_ICON(SodaPop),
    },

    [ITEM_LEMONADE] =
    {
        .name = ITEM_NAME("Lemonade"),
        .price = (I_PRICE >= GEN_7) ? 400 : 350,
        .holdEffectParam = 70,
#if I_HEALTH_RECOVERY >= GEN_7
        .description = COMPOUND_STRING(
            "A very sweet drink\n"
            "that restores HP\n"
            "by 70 points."),
#else
        .description = COMPOUND_STRING(
            "A very sweet drink\n"
            "that restores HP\n"
            "by 80 points."),
#endif
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_HEALTH_RECOVERY,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_RESTORE_HP,
        .effect = gItemEffect_Lemonade,
        .flingPower = 30,
        ITEM_ICON(Lemonade),
    },

    [ITEM_MOOMOO_MILK] =
    {
        .name = ITEM_NAME("Moomoo Milk"),
        .pluralName = ITEM_PLURAL_NAME("Moomoo Milk"),
        .price = (I_PRICE >= GEN_7) ? 600 : 500,
        .holdEffectParam = 100,
        .description = COMPOUND_STRING(
            "A nutritious milk\n"
            "that restores HP\n"
            "by 100 points."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_HEALTH_RECOVERY,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_RESTORE_HP,
        .effect = gItemEffect_MoomooMilk,
        .flingPower = 30,
        ITEM_ICON(MoomooMilk),
    },

    [ITEM_ENERGY_POWDER] =
    {
        .name = ITEM_NAME("Energy Powder"),
        .pluralName = ITEM_PLURAL_NAME("Energy Powder"),
        .price = 500,
        .description = COMPOUND_STRING(
            "A bitter powder\n"
            "that restores HP\n"
        #if I_HEALTH_RECOVERY >= GEN_7
            "by 60 points."),
        #else
            "by 50 points."),
        #endif
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_HEALTH_RECOVERY,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_RESTORE_HP,
        .effect = gItemEffect_EnergyPowder,
        .flingPower = 30,
        .iconPic = gItemIcon_Powder,
        .iconPalette = gItemIconPalette_EnergyPowder,
    },

    [ITEM_ENERGY_ROOT] =
    {
        .name = ITEM_NAME("Energy Root"),
        .price = (I_PRICE >= GEN_7) ? 1200 : 800,
        .description = COMPOUND_STRING(
            "A bitter root\n"
            "that restores HP\n"
        #if I_HEALTH_RECOVERY >= GEN_7
            "by 120 points."),
        #else
            "by 200 points."),
        #endif
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_HEALTH_RECOVERY,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_RESTORE_HP,
        .effect = gItemEffect_EnergyRoot,
        .flingPower = 30,
        ITEM_ICON(EnergyRoot),
    },

    [ITEM_HEAL_POWDER] =
    {
        .name = ITEM_NAME("Heal Powder"),
        .pluralName = ITEM_PLURAL_NAME("Heal Powder"),
        .price = (I_PRICE >= GEN_7) ? 300 : 450,
        .description = COMPOUND_STRING(
            "A bitter powder\n"
            "that heals all\n"
            "status problems."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_STATUS_RECOVERY,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_CURE_STATUS,
        .effect = gItemEffect_HealPowder,
        .flingPower = 30,
        .iconPic = gItemIcon_Powder,
        .iconPalette = gItemIconPalette_HealPowder,
    },

    [ITEM_REVIVAL_HERB] =
    {
        .name = ITEM_NAME("Revival Herb"),
        .price = 2800,
        .description = COMPOUND_STRING(
            "A very bitter herb\n"
            "that revives a\n"
            "fainted Pokémon."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_HEALTH_RECOVERY,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_REVIVE,
        .effect = gItemEffect_RevivalHerb,
        .flingPower = 30,
        ITEM_ICON(RevivalHerb),
    },

    [ITEM_ANTIDOTE] =
    {
        .name = ITEM_NAME("Antidote"),
        .price = (I_PRICE >= GEN_7) ? 200 : 100,
        .description = COMPOUND_STRING(
            "Heals a poisoned\n"
            "Pokémon."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_STATUS_RECOVERY,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_CURE_STATUS,
        .effect = gItemEffect_Antidote,
        .flingPower = 30,
        ITEM_ICON(Antidote),
    },

    [ITEM_PARALYZE_HEAL] =
    {
        .name = ITEM_NAME("Paralyze Heal"),
        .price = (I_PRICE == GEN_7) ? 300 : 200,
        .description = COMPOUND_STRING(
            "Heals a paralyzed\n"
            "Pokémon."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_STATUS_RECOVERY,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_CURE_STATUS,
        .effect = gItemEffect_ParalyzeHeal,
        .flingPower = 30,
        .iconPic = gItemIcon_StatusHeal,
        .iconPalette = gItemIconPalette_ParalyzeHeal,
    },

    [ITEM_BURN_HEAL] =
    {
        .name = ITEM_NAME("Burn Heal"),
        .price = (I_PRICE == GEN_7) ? 300 : ((I_PRICE <= GEN_7) ? 250 : 200),
        .description = COMPOUND_STRING(
            "Heals Pokémon\n"
            "of a burn."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_STATUS_RECOVERY,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_CURE_STATUS,
        .effect = gItemEffect_BurnHeal,
        .flingPower = 30,
        .iconPic = gItemIcon_StatusHeal,
        .iconPalette = gItemIconPalette_BurnHeal,
    },

    [ITEM_ICE_HEAL] =
    {
        .name = ITEM_NAME("Ice Heal"),
        .price = (I_PRICE == GEN_7) ? 100 : ((I_PRICE <= GEN_7) ? 250 : 200),
        .description = COMPOUND_STRING(
            "Defrosts a frozen\n"
            "Pokémon."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_STATUS_RECOVERY,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_CURE_STATUS,
        .effect = gItemEffect_IceHeal,
        .flingPower = 30,
        .iconPic = gItemIcon_StatusHeal,
        .iconPalette = gItemIconPalette_IceHeal,
    },

    [ITEM_AWAKENING] =
    {
        .name = ITEM_NAME("Awakening"),
        .price = (I_PRICE >= GEN_2 && I_PRICE <= GEN_6) ? 250 : ((I_PRICE == GEN_7) ? 100 : 200),
        .description = COMPOUND_STRING(
            "Awakens a sleeping\n"
            "Pokémon."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_STATUS_RECOVERY,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_CURE_STATUS,
        .effect = gItemEffect_Awakening,
        .flingPower = 30,
        .iconPic = gItemIcon_StatusHeal,
        .iconPalette = gItemIconPalette_Awakening,
    },

    [ITEM_FULL_HEAL] =
    {
        .name = ITEM_NAME("Full Heal"),
        .price = (I_PRICE >= GEN_7) ? 400 : 600,
        .description = sFullHealDesc,
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_STATUS_RECOVERY,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_CURE_STATUS,
        .effect = gItemEffect_FullHeal,
        .flingPower = 30,
        ITEM_ICON(FullHeal),
    },

    [ITEM_ETHER] =
    {
        .name = ITEM_NAME("Ether"),
        .price = (I_PRICE >= GEN_2) ? 1200 : 1,
        .holdEffectParam = 10,
        .description = COMPOUND_STRING(
            "Restores the PP\n"
            "of a selected move\n"
            "by 10."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_PP_RECOVERY,
        .type = ITEM_USE_PARTY_MENU_MOVES,
        .fieldUseFunc = ItemUseOutOfBattle_PPRecovery,
        .battleUsage = EFFECT_ITEM_RESTORE_PP,
        .effect = gItemEffect_Ether,
        .flingPower = 30,
        ITEM_ICON(Ether),
    },

    [ITEM_MAX_ETHER] =
    {
        .name = ITEM_NAME("Max Ether"),
        .price = (I_PRICE >= GEN_2) ? 2000 : 1,
        .holdEffectParam = 255,
        .description = COMPOUND_STRING(
            "Fully restores the\n"
            "PP of a selected\n"
            "move."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_PP_RECOVERY,
        .type = ITEM_USE_PARTY_MENU_MOVES,
        .fieldUseFunc = ItemUseOutOfBattle_PPRecovery,
        .battleUsage = EFFECT_ITEM_RESTORE_PP,
        .effect = gItemEffect_MaxEther,
        .flingPower = 30,
        .iconPic = gItemIcon_Ether,
        .iconPalette = gItemIconPalette_MaxEther,
    },

    [ITEM_ELIXIR] =
    {
        .name = ITEM_NAME("Elixir"),
        .price = (I_PRICE >= GEN_2) ? 3000 : 1,
        .holdEffectParam = 10,
        .description = COMPOUND_STRING(
            "Restores the PP\n"
            "of all moves by 10."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_PP_RECOVERY,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_PPRecovery,
        .battleUsage = EFFECT_ITEM_RESTORE_PP,
        .effect = gItemEffect_Elixir,
        .flingPower = 30,
        .iconPic = gItemIcon_Ether,
        .iconPalette = gItemIconPalette_Elixir,
    },

    [ITEM_MAX_ELIXIR] =
    {
        .name = ITEM_NAME("Max Elixir"),
        .price = (I_PRICE >= GEN_2) ? 4500 : 1,
        .holdEffectParam = 255,
        .description = COMPOUND_STRING(
            "Fully restores the\n"
            "PP of a Pokémon's\n"
            "moves."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_PP_RECOVERY,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_PPRecovery,
        .battleUsage = EFFECT_ITEM_RESTORE_PP,
        .effect = gItemEffect_MaxElixir,
        .flingPower = 30,
        .iconPic = gItemIcon_Ether,
        .iconPalette = gItemIconPalette_MaxElixir,
    },

    [ITEM_BERRY_JUICE] =
    {
        .name = ITEM_NAME("Berry Juice"),
        .pluralName = ITEM_PLURAL_NAME("Berry Juice"),
        .price = 100,
        .holdEffect = HOLD_EFFECT_RESTORE_HP,
        .holdEffectParam = 20,
        .description = COMPOUND_STRING(
            "A 100% pure juice\n"
            "that restores HP\n"
            "by 20 points."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_HEALTH_RECOVERY,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_RESTORE_HP,
        .effect = gItemEffect_Potion,
        .flingPower = 30,
        ITEM_ICON(BerryJuice),
    },

    [ITEM_SACRED_ASH] =
    {
        .name = ITEM_NAME("Sacred Ash"),
        .pluralName = ITEM_PLURAL_NAME("Sacred Ashes"),
        .price = (I_PRICE >= GEN_7) ? 50000 : 200,
        .description = COMPOUND_STRING(
            "Fully revives and\n"
            "restores all\n"
            "fainted Pokémon."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_HEALTH_RECOVERY,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_SacredAsh,
        .battleUsage = EFFECT_ITEM_REVIVE,
        .effect = gItemEffect_SacredAsh,
        .flingPower = 30,
        ITEM_ICON(SacredAsh),
    },

    [ITEM_SWEET_HEART] =
    {
        .name = ITEM_NAME("Sweet Heart"),
        .price = (I_PRICE >= GEN_7) ? 3000 : 100,
        .holdEffectParam = 20,
        .description = COMPOUND_STRING(
            "A sweet chocolate\n"
            "that restores HP\n"
            "by 20 points."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_HEALTH_RECOVERY,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_RESTORE_HP,
        .effect = gItemEffect_Potion,
        .flingPower = 30,
        ITEM_ICON(SweetHeart),
    },

    [ITEM_MAX_HONEY] =
    {
        .name = ITEM_NAME("Max Honey"),
        .pluralName = ITEM_PLURAL_NAME("Max Honey"),
        .price = 8000,
        .description = sMaxReviveDesc,
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_HEALTH_RECOVERY,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_REVIVE,
        .effect = gItemEffect_MaxRevive,
        .flingPower = 30,
        ITEM_ICON(MaxHoney),
    },

// Regional Specialties

#define REGIONAL_SPECIALTY_INFO                  \
    .pocket = POCKET_ITEMS,                      \
    .sortType = ITEM_TYPE_STATUS_RECOVERY,       \
    .type = ITEM_USE_PARTY_MENU,                 \
    .fieldUseFunc = ItemUseOutOfBattle_Medicine, \
    .battleUsage = EFFECT_ITEM_CURE_STATUS,      \
    .effect = gItemEffect_FullHeal,              \
    .flingPower = 30

    [ITEM_PEWTER_CRUNCHIES] =
    {
        .name = ITEM_NAME("Pewter Crunchies"),
        .pluralName = ITEM_PLURAL_NAME("Pewter Crunchies"),
        .price = 250,
        .description = sFullHealDesc,
        REGIONAL_SPECIALTY_INFO,
        ITEM_ICON(PewterCrunchies),
    },

    [ITEM_RAGE_CANDY_BAR] =
    {
        .name = ITEM_NAME("Rage Candy Bar"),
        .price = (I_PRICE >= GEN_7) ? 350 : 300,
        .description = sFullHealDesc,
        REGIONAL_SPECIALTY_INFO,
        ITEM_ICON(RageCandyBar),
    },

    [ITEM_LAVA_COOKIE] =
    {
        .name = ITEM_NAME("Lava Cookie"),
        .price = (I_PRICE >= GEN_7) ? 350 : 200,
        .description = COMPOUND_STRING(
            "A local specialty\n"
            "that heals all\n"
            "status problems."),
        REGIONAL_SPECIALTY_INFO,
        .iconPic = gItemIcon_LavaCookie,
        .iconPalette = gItemIconPalette_LavaCookieAndLetter,
    },

    [ITEM_OLD_GATEAU] =
    {
        .name = ITEM_NAME("Old Gateau"),
        .pluralName = ITEM_PLURAL_NAME("Old Gateaux"),
        .price = (I_PRICE >= GEN_7) ? 350 : 200,
        .description = sFullHealDesc,
        REGIONAL_SPECIALTY_INFO,
        ITEM_ICON(OldGateau),
    },

    [ITEM_CASTELIACONE] =
    {
        .name = ITEM_NAME("Casteliacone"),
        .price = (I_PRICE >= GEN_7) ? 350 : 100,
        .description = sFullHealDesc,
        REGIONAL_SPECIALTY_INFO,
        ITEM_ICON(Casteliacone),
    },

    [ITEM_LUMIOSE_GALETTE] =
    {
        .name = ITEM_NAME("Lumiose Galette"),
        .price = (I_PRICE >= GEN_7) ? 350 : 200,
        .description = sFullHealDesc,
        REGIONAL_SPECIALTY_INFO,
        ITEM_ICON(LumioseGalette),
    },

    [ITEM_SHALOUR_SABLE] =
    {
        .name = ITEM_NAME("Shalour Sable"),
        .price = (I_PRICE >= GEN_7) ? 350 : 200,
        .description = sFullHealDesc,
        REGIONAL_SPECIALTY_INFO,
        ITEM_ICON(ShalourSable),
    },

    [ITEM_BIG_MALASADA] =
    {
        .name = ITEM_NAME("Big Malasada"),
        .price = 350,
        .description = sFullHealDesc,
        REGIONAL_SPECIALTY_INFO,
        ITEM_ICON(BigMalasada),
    },

// Vitamins
#define VITAMIN_INFO                             \
    .price = (I_PRICE >= GEN_7) ? 2000 : 9800,   \
    .pocket = POCKET_ITEMS,                      \
    .sortType = ITEM_TYPE_STAT_BOOST_DRINK,      \
    .type = ITEM_USE_PARTY_MENU,                 \
    .fieldUseFunc = ItemUseOutOfBattle_Medicine, \
    .flingPower = 30


    [ITEM_HP_UP] =
    {
        .name = ITEM_NAME("HP Up"),
        .description = COMPOUND_STRING(
            "Raises the base HP\n"
            "of one Pokémon."),
        VITAMIN_INFO,
        .effect = gItemEffect_HPUp,
        ITEM_ICON(HPUp),
    },

    [ITEM_PROTEIN] =
    {
        .name = ITEM_NAME("Protein"),
        .description = COMPOUND_STRING(
            "Raises the base\n"
            "Attack stat of one\n"
            "Pokémon."),
        VITAMIN_INFO,
        .effect = gItemEffect_Protein,
        .iconPic = gItemIcon_Vitamin,
        .iconPalette = gItemIconPalette_Protein,
    },

    [ITEM_IRON] =
    {
        .name = ITEM_NAME("Iron"),
        .description = COMPOUND_STRING(
            "Raises the base\n"
            "Defense stat of\n"
            "one Pokémon."),
        VITAMIN_INFO,
        .effect = gItemEffect_Iron,
        .iconPic = gItemIcon_Vitamin,
        .iconPalette = gItemIconPalette_Iron,
    },

    [ITEM_CALCIUM] =
    {
        .name = ITEM_NAME("Calcium"),
        .description = COMPOUND_STRING(
            "Raises the base\n"
            "Sp. Atk stat of one\n"
            "Pokémon."),
        VITAMIN_INFO,
        .effect = gItemEffect_Calcium,
        .iconPic = gItemIcon_Vitamin,
        .iconPalette = gItemIconPalette_Calcium,
    },

    [ITEM_ZINC] =
    {
        .name = ITEM_NAME("Zinc"),
        .description = COMPOUND_STRING(
            "Raises the base\n"
            "Sp. Def stat of one\n"
            "Pokémon."),
        VITAMIN_INFO,
        .effect = gItemEffect_Zinc,
        .iconPic = gItemIcon_Vitamin,
        .iconPalette = gItemIconPalette_Zinc,
    },

    [ITEM_CARBOS] =
    {
        .name = ITEM_NAME("Carbos"),
        .pluralName = ITEM_PLURAL_NAME("Carbos"),
        .description = COMPOUND_STRING(
            "Raises the base\n"
            "Speed stat of one\n"
            "Pokémon."),
        VITAMIN_INFO,
        .effect = gItemEffect_Carbos,
        .iconPic = gItemIcon_Vitamin,
        .iconPalette = gItemIconPalette_Carbos,
    },

    [ITEM_PP_UP] =
    {
        .name = ITEM_NAME("PP Up"),
        .price = (I_PRICE == GEN_1) ? 1 : ((I_PRICE >= GEN_7) ? 2000 : 9800),
        .description = COMPOUND_STRING(
            "Raises the maximum\n"
            "PP of a selected\n"
            "move."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_STAT_BOOST_DRINK,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_PPUp,
        .effect = gItemEffect_PPUp,
        .flingPower = 30,
        ITEM_ICON(PPUp),
    },

    [ITEM_PP_MAX] =
    {
        .name = ITEM_NAME("PP Max"),
        .pluralName = ITEM_PLURAL_NAME("PP Maxes"),
        .price = (I_PRICE >= GEN_7) ? 5000 : 9800,
        .description = COMPOUND_STRING(
            "Raises the PP of a\n"
            "move to its maximum\n"
            "points."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_STAT_BOOST_DRINK,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_PPUp,
        .effect = gItemEffect_PPMax,
        .flingPower = 30,
        ITEM_ICON(PPMax),
    },

// EV Feathers
#define FEATHER_INFO                             \
    .price = (I_PRICE >= GEN_7) ? 300 : 3000,    \
    .pocket = POCKET_ITEMS,                      \
    .sortType = ITEM_TYPE_STAT_BOOST_FEATHER,    \
    .type = ITEM_USE_PARTY_MENU,                 \
    .fieldUseFunc = ItemUseOutOfBattle_Medicine, \
    .flingPower = 20


    [ITEM_HEALTH_FEATHER] =
    {
        .name = ITEM_NAME("Health Feather"),
        .description = sHealthFeatherDesc,
        FEATHER_INFO,
        .effect = gItemEffect_HpFeather,
        ITEM_ICON(HealthFeather),
    },

    [ITEM_MUSCLE_FEATHER] =
    {
        .name = ITEM_NAME("Muscle Feather"),
        .description = sMuscleFeatherDesc,
        FEATHER_INFO,
        .effect = gItemEffect_AtkFeather,
        ITEM_ICON(MuscleFeather),
    },

    [ITEM_RESIST_FEATHER] =
    {
        .name = ITEM_NAME("Resist Feather"),
        .description = sResistFeatherDesc,
        FEATHER_INFO,
        .effect = gItemEffect_DefFeather,
        ITEM_ICON(ResistFeather),
    },

    [ITEM_GENIUS_FEATHER] =
    {
        .name = ITEM_NAME("Genius Feather"),
        .description = sGeniusFeatherDesc,
        FEATHER_INFO,
        .effect = gItemEffect_SpatkFeather,
        ITEM_ICON(GeniusFeather),
    },

    [ITEM_CLEVER_FEATHER] =
    {
        .name = ITEM_NAME("Clever Feather"),
        .description = sCleverFeatherDesc,
        FEATHER_INFO,
        .effect = gItemEffect_SpdefFeather,
        ITEM_ICON(CleverFeather),
    },

    [ITEM_SWIFT_FEATHER] =
    {
        .name = ITEM_NAME("Swift Feather"),
        .description = sSwiftFeatherDesc,
        FEATHER_INFO,
        .effect = gItemEffect_SpeedFeather,
        ITEM_ICON(SwiftFeather),
    },

// Ability Modifiers

    [ITEM_ABILITY_CAPSULE] =
    {
        .name = ITEM_NAME("Ability Capsule"),
        .price = (I_PRICE < GEN_7) ? 1000 : ((I_PRICE < GEN_9) ? 10000 : 1000),
        .holdEffectParam = 0,
        .description = COMPOUND_STRING(
            "Switches a Poké-\n"
            "mon's ability."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_FIELD_USE,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_AbilityCapsule,
        ITEM_ICON(AbilityCapsule),
    },

    [ITEM_ABILITY_PATCH] =
    {
        .name = ITEM_NAME("Ability Patch"),
        .pluralName = ITEM_PLURAL_NAME("Ability Patches"),
        .price = (I_PRICE >= GEN_9) ? 5000 : 20,
        .holdEffectParam = 0,
        .description = COMPOUND_STRING(
            "Turns the ability\n"
            "of a Pokémon into\n"
            "a rare ability."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_FIELD_USE,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_AbilityPatch,
        ITEM_ICON(AbilityPatch),
    },

// Mints
#define MINT_INFO                            \
    .price = (I_PRICE >= GEN_9) ? 2000 : 20, \
    .pocket = POCKET_ITEMS,                  \
    .sortType = ITEM_TYPE_NATURE_MINT,       \
    .type = ITEM_USE_PARTY_MENU,             \
    .fieldUseFunc = ItemUseOutOfBattle_Mint, \
    .flingPower = 10,                        \
    .iconPic = gItemIcon_Mint

    [ITEM_LONELY_MINT] =
    {
        .name = ITEM_NAME("Lonely Mint"),
        .description = COMPOUND_STRING(
            "Can be smelled. It\n"
            "ups Attack, but\n"
            "reduces Defense."),
        MINT_INFO,
        .secondaryId = NATURE_LONELY,
        .iconPalette = gItemIconPalette_RedMint,
    },

    [ITEM_ADAMANT_MINT] =
    {
        .name = ITEM_NAME("Adamant Mint"),
        .description = COMPOUND_STRING(
            "Can be smelled. It\n"
            "ups Attack, but\n"
            "reduces Sp. Atk."),
        MINT_INFO,
        .secondaryId = NATURE_ADAMANT,
        .iconPalette = gItemIconPalette_RedMint,
    },

    [ITEM_NAUGHTY_MINT] =
    {
        .name = ITEM_NAME("Naughty Mint"),
        .description = COMPOUND_STRING(
            "Can be smelled. It\n"
            "ups Attack, but\n"
            "reduces Sp. Def."),
        MINT_INFO,
        .secondaryId = NATURE_NAUGHTY,
        .iconPalette = gItemIconPalette_RedMint,
    },

    [ITEM_BRAVE_MINT] =
    {
        .name = ITEM_NAME("Brave Mint"),
        .description = COMPOUND_STRING(
            "Can be smelled. It\n"
            "ups Attack, but\n"
            "reduces Speed."),
        MINT_INFO,
        .secondaryId = NATURE_BRAVE,
        .iconPalette = gItemIconPalette_RedMint,
    },

    [ITEM_BOLD_MINT] =
    {
        .name = ITEM_NAME("Bold Mint"),
        .description = COMPOUND_STRING(
            "Can be smelled. It\n"
            "ups Defense, but\n"
            "reduces Attack."),
        MINT_INFO,
        .secondaryId = NATURE_BOLD,
        .iconPalette = gItemIconPalette_BlueMint,
    },

    [ITEM_IMPISH_MINT] =
    {
        .name = ITEM_NAME("Impish Mint"),
        .description = COMPOUND_STRING(
            "Can be smelled. It\n"
            "ups Defense, but\n"
            "reduces Sp. Atk."),
        MINT_INFO,
        .secondaryId = NATURE_IMPISH,
        .iconPalette = gItemIconPalette_BlueMint,
    },

    [ITEM_LAX_MINT] =
    {
        .name = ITEM_NAME("Lax Mint"),
        .description = COMPOUND_STRING(
            "Can be smelled. It\n"
            "ups Defense, but\n"
            "reduces Sp. Def."),
        MINT_INFO,
        .secondaryId = NATURE_LAX,
        .iconPalette = gItemIconPalette_BlueMint,
    },

    [ITEM_RELAXED_MINT] =
    {
        .name = ITEM_NAME("Relaxed Mint"),
        .description = COMPOUND_STRING(
            "Can be smelled. It\n"
            "ups Defense, but\n"
            "reduces Speed."),
        MINT_INFO,
        .secondaryId = NATURE_RELAXED,
        .iconPalette = gItemIconPalette_BlueMint,
    },

    [ITEM_MODEST_MINT] =
    {
        .name = ITEM_NAME("Modest Mint"),
        .description = COMPOUND_STRING(
            "Can be smelled. It\n"
            "ups Sp. Atk, but\n"
            "reduces Attack."),
        MINT_INFO,
        .secondaryId = NATURE_MODEST,
        .iconPalette = gItemIconPalette_LightBlueMint,
    },

    [ITEM_MILD_MINT] =
    {
        .name = ITEM_NAME("Mild Mint"),
        .description = COMPOUND_STRING(
            "Can be smelled. It\n"
            "ups Sp. Atk, but\n"
            "reduces Defense."),
        MINT_INFO,
        .secondaryId = NATURE_MILD,
        .iconPalette = gItemIconPalette_LightBlueMint,
    },

    [ITEM_RASH_MINT] =
    {
        .name = ITEM_NAME("Rash Mint"),
        .description = COMPOUND_STRING(
            "Can be smelled. It\n"
            "ups Sp. Atk, but\n"
            "reduces Sp. Def."),
        MINT_INFO,
        .secondaryId = NATURE_RASH,
        .iconPalette = gItemIconPalette_LightBlueMint,
    },

    [ITEM_QUIET_MINT] =
    {
        .name = ITEM_NAME("Quiet Mint"),
        .description = COMPOUND_STRING(
            "Can be smelled. It\n"
            "ups Sp. Atk, but\n"
            "reduces Speed."),
        MINT_INFO,
        .secondaryId = NATURE_QUIET,
        .iconPalette = gItemIconPalette_LightBlueMint,
    },

    [ITEM_CALM_MINT] =
    {
        .name = ITEM_NAME("Calm Mint"),
        .description = COMPOUND_STRING(
            "Can be smelled. It\n"
            "ups Sp. Def, but\n"
            "reduces Attack."),
        MINT_INFO,
        .secondaryId = NATURE_CALM,
        .iconPalette = gItemIconPalette_PinkMint,
    },

    [ITEM_GENTLE_MINT] =
    {
        .name = ITEM_NAME("Gentle Mint"),
        .description = COMPOUND_STRING(
            "Can be smelled. It\n"
            "ups Sp. Def, but\n"
            "reduces Defense."),
        MINT_INFO,
        .secondaryId = NATURE_GENTLE,
        .iconPalette = gItemIconPalette_PinkMint,
    },

    [ITEM_CAREFUL_MINT] =
    {
        .name = ITEM_NAME("Careful Mint"),
        .description = COMPOUND_STRING(
            "Can be smelled. It\n"
            "ups Sp. Def, but\n"
            "reduces Sp. Atk."),
        MINT_INFO,
        .secondaryId = NATURE_CAREFUL,
        .iconPalette = gItemIconPalette_PinkMint,
    },

    [ITEM_SASSY_MINT] =
    {
        .name = ITEM_NAME("Sassy Mint"),
        .description = COMPOUND_STRING(
            "Can be smelled. It\n"
            "ups Sp. Def, but\n"
            "reduces Speed."),
        MINT_INFO,
        .secondaryId = NATURE_SASSY,
        .iconPalette = gItemIconPalette_PinkMint,
    },

    [ITEM_TIMID_MINT] =
    {
        .name = ITEM_NAME("Timid Mint"),
        .description = COMPOUND_STRING(
            "Can be smelled. It\n"
            "ups Speed, but\n"
            "reduces Attack."),
        MINT_INFO,
        .secondaryId = NATURE_TIMID,
        .iconPalette = gItemIconPalette_GreenMint,
    },

    [ITEM_HASTY_MINT] =
    {
        .name = ITEM_NAME("Hasty Mint"),
        .description = COMPOUND_STRING(
            "Can be smelled. It\n"
            "ups Speed, but\n"
            "reduces Defense."),
        MINT_INFO,
        .secondaryId = NATURE_HASTY,
        .iconPalette = gItemIconPalette_GreenMint,
    },

    [ITEM_JOLLY_MINT] =
    {
        .name = ITEM_NAME("Jolly Mint"),
        .description = COMPOUND_STRING(
            "Can be smelled. It\n"
            "ups Speed, but\n"
            "reduces Sp. Atk."),
        MINT_INFO,
        .secondaryId = NATURE_JOLLY,
        .iconPalette = gItemIconPalette_GreenMint,
    },

    [ITEM_NAIVE_MINT] =
    {
        .name = ITEM_NAME("Naive Mint"),
        .description = COMPOUND_STRING(
            "Can be smelled. It\n"
            "ups Speed, but\n"
            "reduces Sp. Def."),
        MINT_INFO,
        .secondaryId = NATURE_NAIVE,
        .iconPalette = gItemIconPalette_GreenMint,
    },

    [ITEM_SERIOUS_MINT] =
    {
        .name = ITEM_NAME("Serious Mint"),
        .description = COMPOUND_STRING(
            "Can be smelled. It\n"
            "makes each stat\n"
            "grow equally."),
        MINT_INFO,
        .secondaryId = NATURE_SERIOUS,
        .iconPalette = gItemIconPalette_YellowMint,
    },

// Candy
#define EXP_CANDY_INFO                            \
    .pocket = POCKET_ITEMS,                       \
    .sortType = ITEM_TYPE_LEVEL_UP_ITEM,          \
    .type = ITEM_USE_PARTY_MENU,                  \
    .fieldUseFunc = ItemUseOutOfBattle_RareCandy, \
    .effect = gItemEffect_RareCandy,              \
    .flingPower = 30

    [ITEM_RARE_CANDY] =
    {
        .name = ITEM_NAME("Rare Candy"),
        .pluralName = ITEM_PLURAL_NAME("Rare Candies"),
        .price = (I_PRICE >= GEN_7) ? 10000 : 4800,
        .description = COMPOUND_STRING(
            "Raises the level\n"
            "of a Pokémon by\n"
            "one."),
        EXP_CANDY_INFO,
        ITEM_ICON(RareCandy),
    },

    [ITEM_EXP_CANDY_XS] =
    {
        .name = ITEM_NAME("Exp. Candy XS"),
        .pluralName = ITEM_PLURAL_NAME("Exp. Candies XS"),
        .price = 20,
        .holdEffectParam = EXP_100,
        .description = COMPOUND_STRING(
            "Gives a very small\n"
            "amount of Exp. to\n"
            "a single Pokémon."),
        EXP_CANDY_INFO,
        .iconPic = gItemIcon_ExpCandyXS,
        .iconPalette = gItemIconPalette_ExpCandies,
    },

    [ITEM_EXP_CANDY_S] =
    {
        .name = ITEM_NAME("Exp. Candy S"),
        .pluralName = ITEM_PLURAL_NAME("Exp. Candies S"),
        .price = 240,
        .holdEffectParam = EXP_800,
        .description = COMPOUND_STRING(
            "Gives a small\n"
            "amount of Exp. to\n"
            "a single Pokémon."),
        EXP_CANDY_INFO,
        .iconPic = gItemIcon_ExpCandyS,
        .iconPalette = gItemIconPalette_ExpCandies,
    },

    [ITEM_EXP_CANDY_M] =
    {
        .name = ITEM_NAME("Exp. Candy M"),
        .pluralName = ITEM_PLURAL_NAME("Exp. Candies M"),
        .price = 1000,
        .holdEffectParam = EXP_3000,
        .description = COMPOUND_STRING(
            "Gives a moderate\n"
            "amount of Exp. to\n"
            "a single Pokémon."),
        EXP_CANDY_INFO,
        .iconPic = gItemIcon_ExpCandyM,
        .iconPalette = gItemIconPalette_ExpCandies,
    },

    [ITEM_EXP_CANDY_L] =
    {
        .name = ITEM_NAME("Exp. Candy L"),
        .pluralName = ITEM_PLURAL_NAME("Exp. Candies L"),
        .price = 3000,
        .holdEffectParam = EXP_10000,
        .description = COMPOUND_STRING(
            "Gives a large\n"
            "amount of Exp. to\n"
            "a single Pokémon."),
        EXP_CANDY_INFO,
        .iconPic = gItemIcon_ExpCandyL,
        .iconPalette = gItemIconPalette_ExpCandies,
    },

    [ITEM_EXP_CANDY_XL] =
    {
        .name = ITEM_NAME("Exp. Candy XL"),
        .pluralName = ITEM_PLURAL_NAME("Exp. Candies XL"),
        .price = 10000,
        .holdEffectParam = EXP_30000,
        .description = COMPOUND_STRING(
            "Gives a very large\n"
            "amount of Exp. to\n"
            "a single Pokémon."),
        EXP_CANDY_INFO,
        .iconPic = gItemIcon_ExpCandyXL,
        .iconPalette = gItemIconPalette_ExpCandies,
    },

    [ITEM_DYNAMAX_CANDY] =
    {
        .name = ITEM_NAME("Dynamax Candy"),
        .pluralName = ITEM_PLURAL_NAME("Dynamax Candies"),
        .price = 0,
        .description = COMPOUND_STRING(
            "Raises the Dynamax\n"
            "Level of a single\n"
            "Pokémon by one."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_LEVEL_UP_ITEM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_DynamaxCandy,
        .flingPower = 30,
        ITEM_ICON(DynamaxCandy),
    },

// Medicinal Flutes

    [ITEM_BLUE_FLUTE] =
    {
        .name = ITEM_NAME("Blue Flute"),
        .price = (I_PRICE >= GEN_7) ? 20 : 100,
        .description = COMPOUND_STRING(
            "A glass flute that\n"
            "awakens sleeping\n"
            "Pokémon."),
        .notConsumed = TRUE,
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_FLUTE,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_CURE_STATUS,
        .effect = gItemEffect_Awakening,
        .flingPower = 30,
        .iconPic = gItemIcon_Flute,
        .iconPalette = gItemIconPalette_BlueFlute,
    },

    [ITEM_YELLOW_FLUTE] =
    {
        .name = ITEM_NAME("Yellow Flute"),
        .price = (I_PRICE >= GEN_7) ? 20 : 300,
        .description = COMPOUND_STRING(
            "A glass flute that\n"
            "snaps Pokémon\n"
            "out of confusion."),
        .notConsumed = TRUE,
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_FLUTE,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = EFFECT_ITEM_CURE_STATUS,
        .effect = gItemEffect_YellowFlute,
        .flingPower = 30,
        .iconPic = gItemIcon_Flute,
        .iconPalette = gItemIconPalette_YellowFlute,
    },

    [ITEM_RED_FLUTE] =
    {
        .name = ITEM_NAME("Red Flute"),
        .price = (I_PRICE >= GEN_7) ? 20 : 200,
        .description = COMPOUND_STRING(
            "A glass flute that\n"
            "snaps Pokémon\n"
            "out of attraction."),
        .notConsumed = TRUE,
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_FLUTE,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = EFFECT_ITEM_CURE_STATUS,
        .effect = gItemEffect_RedFlute,
        .flingPower = 30,
        .iconPic = gItemIcon_Flute,
        .iconPalette = gItemIconPalette_RedFlute,
    },

// Encounter-modifying Flutes

    [ITEM_BLACK_FLUTE] =
    {
        .name = ITEM_NAME("Black Flute"),
        .price = (I_PRICE >= GEN_7) ? 20 : 400,
        .holdEffectParam = 50,
        .description = COMPOUND_STRING(
            "A glass flute that\n"
            "keeps away wild\n"
            "Pokémon."),
        .notConsumed = TRUE,
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_FLUTE,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_BlackWhiteFlute,
        .flingPower = 30,
        .iconPic = gItemIcon_Flute,
        .iconPalette = gItemIconPalette_BlackFlute,
    },

    [ITEM_WHITE_FLUTE] =
    {
        .name = ITEM_NAME("White Flute"),
        .price = (I_PRICE >= GEN_7) ? 20 : 500,
        .holdEffectParam = 150,
        .description = COMPOUND_STRING(
            "A glass flute that\n"
            "lures wild Pokémon."),
        .notConsumed = TRUE,
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_FLUTE,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_BlackWhiteFlute,
        .flingPower = 30,
        .iconPic = gItemIcon_Flute,
        .iconPalette = gItemIconPalette_WhiteFlute,
    },

// Encounter Modifiers

    [ITEM_REPEL] =
    {
        .name = ITEM_NAME("Repel"),
        .price = (I_PRICE >= GEN_7) ? 400 : 350,
        .holdEffectParam = 100,
        .description = COMPOUND_STRING(
            "Repels weak wild\n"
            "Pokémon for 100\n"
            "steps."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_FIELD_USE,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Repel,
        .flingPower = 30,
        ITEM_ICON(Repel),
    },

    [ITEM_SUPER_REPEL] =
    {
        .name = ITEM_NAME("Super Repel"),
        .price = (I_PRICE >= GEN_7) ? 700 : 500,
        .holdEffectParam = 200,
        .description = COMPOUND_STRING(
            "Repels weak wild\n"
            "Pokémon for 200\n"
            "steps."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_FIELD_USE,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Repel,
        .flingPower = 30,
        .iconPic = gItemIcon_Repel,
        .iconPalette = gItemIconPalette_SuperRepel,
    },

    [ITEM_MAX_REPEL] =
    {
        .name = ITEM_NAME("Max Repel"),
        .price = (I_PRICE >= GEN_7) ? 900 : 700,
        .holdEffectParam = 250,
        .description = COMPOUND_STRING(
            "Repels weak wild\n"
            "Pokémon for 250\n"
            "steps."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_FIELD_USE,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Repel,
        .flingPower = 30,
        .iconPic = gItemIcon_Repel,
        .iconPalette = gItemIconPalette_MaxRepel,
    },

    [ITEM_LURE] =
    {
        .name = ITEM_NAME("Lure"),
        .price = 400,
        .holdEffectParam = 100,
        .description = COMPOUND_STRING(
            "Makes Pokémon more\n"
            "likely to appear\n"
            "for 100 steps."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_FIELD_USE,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Lure,
        .secondaryId = 0,
        .flingPower = 30,
        ITEM_ICON(Lure),
    },

    [ITEM_SUPER_LURE] =
    {
        .name = ITEM_NAME("Super Lure"),
        .price = 700,
        .holdEffectParam = 200,
        .description = COMPOUND_STRING(
            "Makes Pokémon more\n"
            "likely to appear\n"
            "for 200 steps."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_FIELD_USE,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Lure,
        .secondaryId = 0,
        .flingPower = 30,
        .iconPic = gItemIcon_Lure,
        .iconPalette = gItemIconPalette_SuperLure,
    },

    [ITEM_MAX_LURE] =
    {
        .name = ITEM_NAME("Max Lure"),
        .price = 900,
        .holdEffectParam = 250,
        .description = COMPOUND_STRING(
            "Makes Pokémon more\n"
            "likely to appear\n"
            "for 250 steps."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_FIELD_USE,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Lure,
        .secondaryId = 0,
        .flingPower = 30,
        .iconPic = gItemIcon_Lure,
        .iconPalette = gItemIconPalette_MaxLure,
    },

    [ITEM_ESCAPE_ROPE] =
    {
        .name = ITEM_NAME("Escape Rope"),
        .description = COMPOUND_STRING(
            "Use to escape\n"
            "instantly from a\n"
            "cave or a dungeon."),
        #if I_KEY_ESCAPE_ROPE >= GEN_8
            .price = 0,
            .importance = 1,
            .pocket = POCKET_KEY_ITEMS,
        #else
            .price = (I_PRICE >= GEN_7) ? 1000 : 550,
            .pocket = POCKET_ITEMS,
            .sortType = ITEM_TYPE_FIELD_USE,
        #endif
        .type = ITEM_USE_FIELD,
        .fieldUseFunc = ItemUseOutOfBattle_EscapeRope,
        .flingPower = 30,
        ITEM_ICON(EscapeRope),
    },

// X Items
#define X_ITEM_INFO                               \
    .pocket = POCKET_ITEMS,                       \
    .sortType = ITEM_TYPE_X_ITEM,                 \
    .type = ITEM_USE_BAG_MENU,                    \
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse, \
    .battleUsage = EFFECT_ITEM_INCREASE_STAT,     \
    .flingPower = 30

    [ITEM_X_ATTACK] =
    {
        .name = ITEM_NAME("X Attack"),
        .price = (I_PRICE >= GEN_7) ? 1000 : 500,
        .holdEffectParam = X_ITEM_STAGES,
        .description = COMPOUND_STRING(
        #if B_X_ITEMS_BUFF >= GEN_7
            "Sharply raises stat\n"
            "Attack during\n"
            "one battle."),
        #else
            "Raises the stat\n"
            "Attack during one\n"
            "battle."),
        #endif
        X_ITEM_INFO,
        .effect = gItemEffect_XAttack,
        .iconPic = gItemIcon_BattleStatItem,
        .iconPalette = gItemIconPalette_XAttack,
    },

    [ITEM_X_DEFENSE] =
    {
        .name = ITEM_NAME("X Defense"),
        .price = (I_PRICE >= GEN_7) ? 2000 : 550,
        .holdEffectParam = X_ITEM_STAGES,
        .description = COMPOUND_STRING(
        #if B_X_ITEMS_BUFF >= GEN_7
            "Sharply raises stat\n"
            "Defense during\n"
            "one battle."),
        #else
            "Raises the stat\n"
            "Defense during one\n"
            "battle."),
        #endif
        X_ITEM_INFO,
        .effect = gItemEffect_XDefense,
        .iconPic = gItemIcon_BattleStatItem,
        .iconPalette = gItemIconPalette_XDefend,
    },

    [ITEM_X_SP_ATK] =
    {
        .name = ITEM_NAME("X Sp. Atk"),
        .price = (I_PRICE >= GEN_7) ? 1000 : 350,
        .holdEffectParam = X_ITEM_STAGES,
        .description = COMPOUND_STRING(
        #if B_X_ITEMS_BUFF >= GEN_7
            "Sharply raises stat\n"
            "Sp. Atk during\n"
            "one battle."),
        #else
            "Raises the stat\n"
            "Sp. Atk during one\n"
            "battle."),
        #endif
        X_ITEM_INFO,
        .effect = gItemEffect_XSpecialAttack,
        .iconPic = gItemIcon_BattleStatItem,
        .iconPalette = gItemIconPalette_XSpecial,
    },

    [ITEM_X_SP_DEF] =
    {
        .name = ITEM_NAME("X Sp. Def"),
        .price = (I_PRICE >= GEN_7) ? 2000 : 350,
        .holdEffectParam = X_ITEM_STAGES,
        .description = COMPOUND_STRING(
        #if B_X_ITEMS_BUFF >= GEN_7
            "Sharply raises stat\n"
            "Sp. Def during\n"
            "one battle."),
        #else
            "Raises the stat\n"
            "Sp. Def during one\n"
            "battle."),
        #endif
        X_ITEM_INFO,
        .effect = gItemEffect_XSpecialDefense,
        ITEM_ICON(XSpecialDefense),
    },

    [ITEM_X_SPEED] =
    {
        .name = ITEM_NAME("X Speed"),
        .price = (I_PRICE >= GEN_7) ? 1000 : 350,
        .holdEffectParam = X_ITEM_STAGES,
        .description = COMPOUND_STRING(
        #if B_X_ITEMS_BUFF >= GEN_7
            "Sharply raises stat\n"
            "Speed during\n"
            "one battle."),
        #else
            "Raises the stat\n"
            "Speed during one\n"
            "battle."),
        #endif
        X_ITEM_INFO,
        .effect = gItemEffect_XSpeed,
        .iconPic = gItemIcon_BattleStatItem,
        .iconPalette = gItemIconPalette_XSpeed,
    },

    [ITEM_X_ACCURACY] =
    {
        .name = ITEM_NAME("X Accuracy"),
        .pluralName = ITEM_PLURAL_NAME("X Accuracies"),
        .price = (I_PRICE >= GEN_7) ? 1000 : 950,
        .holdEffectParam = X_ITEM_STAGES,
            .description = COMPOUND_STRING(
        #if B_X_ITEMS_BUFF >= GEN_7
            "Sharply raises move\n"
            "accuracy during\n"
            "one battle."),
        #else
            "Raises accuracy\n"
            "of attack moves\n"
            "during one battle."),
        #endif
        X_ITEM_INFO,
        .effect = gItemEffect_XAccuracy,
        .iconPic = gItemIcon_BattleStatItem,
        .iconPalette = gItemIconPalette_XAccuracy,
    },

    [ITEM_DIRE_HIT] =
    {
        .name = ITEM_NAME("Dire Hit"),
        .price = (I_PRICE >= GEN_7) ? 1000 : 650,
        .description = COMPOUND_STRING(
            "Raises the\n"
            "critical-hit ratio\n"
            "during one battle."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_X_ITEM,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = EFFECT_ITEM_SET_FOCUS_ENERGY,
        .effect = gItemEffect_DireHit,
        .flingPower = 30,
        .iconPic = gItemIcon_BattleStatItem,
        .iconPalette = gItemIconPalette_DireHit,
    },

    [ITEM_GUARD_SPEC] =
    {
        .name = ITEM_NAME("Guard Spec."),
        .pluralName = ITEM_PLURAL_NAME("Guard Specs."),
        .price = (I_PRICE >= GEN_7) ? 1500 : 700,
        .description = COMPOUND_STRING(
            "Prevents stat\n"
            "reduction when\n"
            "used in battle."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_X_ITEM,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = EFFECT_ITEM_SET_MIST,
        .effect = gItemEffect_GuardSpec,
        .flingPower = 30,
        .iconPic = gItemIcon_BattleStatItem,
        .iconPalette = gItemIconPalette_GuardSpec,
    },

    [ITEM_POKE_DOLL] =
    {
        .name = ITEM_NAME("Poké Doll"),
        .price = (I_PRICE < GEN_7) ? 1000 : ((I_PRICE == GEN_7) ? 100 : 300),
        .description = sPokeDollDesc,
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_BATTLE_ITEM,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = EFFECT_ITEM_ESCAPE,
        .flingPower = 30,
        ITEM_ICON(PokeDoll),
    },

    [ITEM_FLUFFY_TAIL] =
    {
        .name = ITEM_NAME("Fluffy Tail"),
        .price = (I_PRICE >= GEN_7) ? 100 : 1000,
        .description = sPokeDollDesc,
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_BATTLE_ITEM,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = EFFECT_ITEM_ESCAPE,
        .flingPower = 30,
        ITEM_ICON(FluffyTail),
    },

    [ITEM_POKE_TOY] =
    {
        .name = ITEM_NAME("Poké Toy"),
        .price = (I_PRICE >= GEN_7) ? 100 : 1000,
        .description = sPokeDollDesc,
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_BATTLE_ITEM,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = EFFECT_ITEM_ESCAPE,
        .flingPower = 30,
        ITEM_ICON(PokeToy),
    },

    [ITEM_MAX_MUSHROOMS] =
    {
        .name = ITEM_NAME("Max Mushrooms"),
        .pluralName = ITEM_PLURAL_NAME("Max Mushrooms"),
        .price = 8000,
        .description = COMPOUND_STRING(
            "Raises every stat\n"
            "during one battle\n"
            "by one stage."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_BATTLE_ITEM,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = EFFECT_ITEM_INCREASE_ALL_STATS,
        .flingPower = 30,
        ITEM_ICON(MaxMushrooms),
    },

// Treasures
#define TREASURE_INFO                             \
    .pocket = POCKET_ITEMS,                       \
    .sortType = ITEM_TYPE_SELLABLE,               \
    .type = ITEM_USE_BAG_MENU,                    \
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse, \
    .flingPower = 30

    [ITEM_BOTTLE_CAP] =
    {
        .name = ITEM_NAME("Bottle Cap"),
        .price = (I_PRICE >= GEN_9) ? 20000 : 5000,
        .description = COMPOUND_STRING(
            "A beautiful bottle\n"
            "cap that gives off\n"
            "a silver gleam."),
        TREASURE_INFO,
        ITEM_ICON(BottleCap),
    },

    [ITEM_GOLD_BOTTLE_CAP] =
    {
        .name = ITEM_NAME("Gold Bottle Cap"),
        .price = (I_PRICE >= GEN_9) ? 60000 : 10000,
        .description = COMPOUND_STRING(
            "A beautiful bottle\n"
            "cap that gives off\n"
            "a golden gleam."),
        TREASURE_INFO,
        .iconPic = gItemIcon_BottleCap,
        .iconPalette = gItemIconPalette_GoldBottleCap,
    },

    [ITEM_NUGGET] =
    {
        .name = ITEM_NAME("Nugget"),
        .price = 10000 * TREASURE_FACTOR,
        .description = COMPOUND_STRING(
            "A nugget of pure\n"
            "gold. Can be sold at\n"
            "a high price."),
        TREASURE_INFO,
        ITEM_ICON(Nugget),
    },

    [ITEM_BIG_NUGGET] =
    {
        .name = ITEM_NAME("Big Nugget"),
        .price = (I_PRICE >= GEN_7) ? (40000 * TREASURE_FACTOR) : 20000,
        .description = COMPOUND_STRING(
            "A big nugget made\n"
            "of gold, sellable\n"
            "at a high price."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_SELLABLE,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 130,
        ITEM_ICON(BigNugget),
    },

    [ITEM_TINY_MUSHROOM] =
    {
        .name = ITEM_NAME("Tiny Mushroom"),
        .price = 500 * TREASURE_FACTOR,
        .description = COMPOUND_STRING(
            "A plain mushroom\n"
            "that would sell\n"
            "at a cheap price."),
        TREASURE_INFO,
        .iconPic = gItemIcon_TinyMushroom,
        .iconPalette = gItemIconPalette_Mushroom,
    },

    [ITEM_BIG_MUSHROOM] =
    {
        .name = ITEM_NAME("Big Mushroom"),
        .price = 5000 * TREASURE_FACTOR,
        .description = sBigMushroomDesc,
        TREASURE_INFO,
        .iconPic = gItemIcon_BigMushroom,
        .iconPalette = gItemIconPalette_Mushroom,
    },

    [ITEM_BALM_MUSHROOM] =
    {
        .name = ITEM_NAME("Balm Mushroom"),
        .price = (I_PRICE >= GEN_7) ? 15000 * TREASURE_FACTOR: 12500,
        .description = sBigMushroomDesc,
        TREASURE_INFO,
        ITEM_ICON(BalmMushroom),
    },

    [ITEM_PEARL] =
    {
        .name = ITEM_NAME("Pearl"),
        .price = (I_PRICE >= GEN_7) ? 2000 * TREASURE_FACTOR: 1400,
        .description = COMPOUND_STRING(
            "A pretty pearl\n"
            "that would sell at a\n"
            "cheap price."),
        TREASURE_INFO,
        ITEM_ICON(Pearl),
    },

    [ITEM_BIG_PEARL] =
    {
        .name = ITEM_NAME("Big Pearl"),
        .price = (I_PRICE >= GEN_7) ? 8000 * TREASURE_FACTOR: 7500,
        .description = COMPOUND_STRING(
            "A lovely large pearl\n"
            "that would sell at a\n"
            "high price."),
        TREASURE_INFO,
        .iconPic = gItemIcon_BigPearl,
        .iconPalette = gItemIconPalette_Pearl,
    },

    [ITEM_PEARL_STRING] =
    {
        .name = ITEM_NAME("Pearl String"),
        .price = (I_PRICE >= GEN_8) ? 15000 * TREASURE_FACTOR: ((I_PRICE == GEN_7) ? 30000 : 15000),
        .description = COMPOUND_STRING(
            "Very large pearls\n"
            "that would sell at a\n"
            "high price."),
        TREASURE_INFO,
        ITEM_ICON(PearlString),
    },

    [ITEM_STARDUST] =
    {
        .name = ITEM_NAME("Stardust"),
        .pluralName = ITEM_PLURAL_NAME("Stardust"),
        .price = (I_PRICE >= GEN_7) ? 3000 * TREASURE_FACTOR: 2000,
        .description = COMPOUND_STRING(
            "Beautiful red sand.\n"
            "Can be sold at a\n"
            "high price."),
        TREASURE_INFO,
        .iconPic = gItemIcon_Stardust,
        .iconPalette = gItemIconPalette_Star,
    },

    [ITEM_STAR_PIECE] =
    {
        .name = ITEM_NAME("Star Piece"),
        .price = (I_PRICE >= GEN_7) ? 12000 * TREASURE_FACTOR: 9800,
        .description = COMPOUND_STRING(
            "A red gem shard.\n"
            "It would sell for a\n"
            "very high price."),
        TREASURE_INFO,
        .iconPic = gItemIcon_StarPiece,
        .iconPalette = gItemIconPalette_Star,
    },

    [ITEM_COMET_SHARD] =
    {
        .name = ITEM_NAME("Comet Shard"),
        .price = (I_PRICE <= GEN_5) ? 0 : ((I_PRICE == GEN_6) ? 30000 : ((I_PRICE == GEN_7) ? 60000 : 25000 * TREASURE_FACTOR)),
        .description = COMPOUND_STRING(
            "A comet's shard.\n"
            "It would sell for a\n"
            "high price."),
        TREASURE_INFO,
        ITEM_ICON(CometShard),
    },

    [ITEM_SHOAL_SALT] =
    {
        .name = ITEM_NAME("Shoal Salt"),
        .pluralName = ITEM_PLURAL_NAME("Shoal Salt"),
        .price = 20,
        .description = COMPOUND_STRING(
            "Salt obtained from\n"
            "deep inside the\n"
            "Shoal Cave."),
        TREASURE_INFO,
        .iconPic = gItemIcon_Powder,
        .iconPalette = gItemIconPalette_ShoalSalt,
    },

    [ITEM_SHOAL_SHELL] =
    {
        .name = ITEM_NAME("Shoal Shell"),
        .price = 20,
        .description = COMPOUND_STRING(
            "A seashell found\n"
            "deep inside the\n"
            "Shoal Cave."),
        TREASURE_INFO,
        .iconPic = gItemIcon_ShoalShell,
        .iconPalette = gItemIconPalette_Shell,
    },

#define SHARD_INFO(color)                         \
    .price = (I_PRICE >= GEN_7) ? 1000 : 200,     \
    .description = COMPOUND_STRING(               \
        "A shard from an\n"                       \
        "ancient item. Can\n"                     \
        "be sold cheaply."),                      \
    .pocket = POCKET_ITEMS,                       \
    .sortType = ITEM_TYPE_SHARD,                  \
    .type = ITEM_USE_BAG_MENU,                    \
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse, \
    .flingPower = 30,                             \
    .iconPic = gItemIcon_Shard,                   \
    .iconPalette = gItemIconPalette_##color##Shard,

    [ITEM_RED_SHARD] =
    {
        .name = ITEM_NAME("Red Shard"),
        SHARD_INFO(Red)
    },

    [ITEM_BLUE_SHARD] =
    {
        .name = ITEM_NAME("Blue Shard"),
        SHARD_INFO(Blue)
    },

    [ITEM_YELLOW_SHARD] =
    {
        .name = ITEM_NAME("Yellow Shard"),
        SHARD_INFO(Yellow)
    },

    [ITEM_GREEN_SHARD] =
    {
        .name = ITEM_NAME("Green Shard"),
        SHARD_INFO(Green)
    },

    [ITEM_HEART_SCALE] =
    {
        .name = ITEM_NAME("Heart Scale"),
        .price = 100,
        .description = COMPOUND_STRING(
            "A lovely scale.\n"
            "It is coveted by\n"
            "collectors."),
        TREASURE_INFO,
        ITEM_ICON(HeartScale),
    },

    [ITEM_HONEY] =
    {
        .name = ITEM_NAME("Honey"),
        .pluralName = ITEM_PLURAL_NAME("Honey"),
        .price = (I_PRICE < GEN_5) ? 100 : ((I_PRICE < GEN_8) ? 300 : 900),
        .description = COMPOUND_STRING(
            "Sweet honey that\n"
            "attracts wild\n"
            "Pokémon when used."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_STATUS_RECOVERY,
        .type = ITEM_USE_FIELD,
        .fieldUseFunc = ItemUseOutOfBattle_Honey,
        .flingPower = 30,
        ITEM_ICON(Honey),
    },

    [ITEM_RARE_BONE] =
    {
        .name = ITEM_NAME("Rare Bone"),
        .price = (I_PRICE >= GEN_7) ? 5000 * TREASURE_FACTOR: 10000,
        .description = COMPOUND_STRING(
            "A very rare bone.\n"
            "It can be sold at\n"
            "a high price."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_SELLABLE,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 100,
        ITEM_ICON(RareBone),
    },

    [ITEM_ODD_KEYSTONE] =
    {
        .name = ITEM_NAME("Odd Keystone"),
        .price = 2100,
        .description = COMPOUND_STRING(
            "Voices can be heard\n"
            "from this odd stone\n"
            "occasionally."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_SELLABLE,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 80,
        ITEM_ICON(OddKeystone),
    },

    [ITEM_PRETTY_FEATHER] =
    {
        .name = ITEM_NAME("Pretty Feather"),
        .price = (I_PRICE >= GEN_7) ? 1000 * TREASURE_FACTOR: 200,
        .description = COMPOUND_STRING(
            "A beautiful yet\n"
            "plain feather that\n"
            "does nothing."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_SELLABLE,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 20,
        ITEM_ICON(PrettyFeather),
    },

    [ITEM_RELIC_COPPER] =
    {
        .name = ITEM_NAME("Relic Copper"),
        .price = 0,
        .description = COMPOUND_STRING(
            "A copper coin used\n"
            "long ago. It sells\n"
            "at a high price."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_RELIC,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
        .iconPic = gItemIcon_RelicCoin,
        .iconPalette = gItemIconPalette_RelicCopper,
    },

    [ITEM_RELIC_SILVER] =
    {
        .name = ITEM_NAME("Relic Silver"),
        .price = 0,
        .description = COMPOUND_STRING(
            "A silver coin used\n"
            "long ago. It sells\n"
            "at a high price."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_RELIC,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
        .iconPic = gItemIcon_RelicCoin,
        .iconPalette = gItemIconPalette_RelicSilver,
    },

    [ITEM_RELIC_GOLD] =
    {
        .name = ITEM_NAME("Relic Gold"),
        .price = 0,
        .description = COMPOUND_STRING(
            "A gold coin used\n"
            "long ago. It sells\n"
            "at a high price."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_RELIC,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
        .iconPic = gItemIcon_RelicCoin,
        .iconPalette = gItemIconPalette_RelicGold,
    },

    [ITEM_RELIC_VASE] =
    {
        .name = ITEM_NAME("Relic Vase"),
        .price = 0,
        .description = COMPOUND_STRING(
            "A vase made long\n"
            "ago. It sells at\n"
            "a high price."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_RELIC,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
        .iconPic = gItemIcon_RelicVase,
        .iconPalette = gItemIconPalette_Relics,
    },

    [ITEM_RELIC_BAND] =
    {
        .name = ITEM_NAME("Relic Band"),
        .price = 0,
        .description = COMPOUND_STRING(
            "An old bracelet.\n"
            "It sells at a\n"
            "high price."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_RELIC,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
        .iconPic = gItemIcon_RelicBand,
        .iconPalette = gItemIconPalette_Relics,
    },

    [ITEM_RELIC_STATUE] =
    {
        .name = ITEM_NAME("Relic Statue"),
        .price = 0,
        .description = COMPOUND_STRING(
            "An old statue.\n"
            "It sells at a\n"
            "high price."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_RELIC,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
        .iconPic = gItemIcon_RelicStatue,
        .iconPalette = gItemIconPalette_Relics,
    },

    [ITEM_RELIC_CROWN] =
    {
        .name = ITEM_NAME("Relic Crown"),
        .price = 0,
        .description = COMPOUND_STRING(
            "An old crown.\n"
            "It sells at a\n"
            "high price."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_RELIC,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
        .iconPic = gItemIcon_RelicCrown,
        .iconPalette = gItemIconPalette_Relics,
    },

    [ITEM_STRANGE_SOUVENIR] =
    {
        .name = ITEM_NAME("Strange Souvenir"),
        .price = (I_PRICE >= GEN_7) ? 3000 : 10,
        .description = COMPOUND_STRING(
            "An ornament that\n"
            "depicts a Pokémon\n"
            "from Alola."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_RELIC,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
        ITEM_ICON(StrangeSouvenir),
    },

// Fossils

    [ITEM_HELIX_FOSSIL] =
    {
        .name = ITEM_NAME("Helix Fossil"),
        .description = COMPOUND_STRING(
            "A piece of an\n"
            "ancient marine\n"
            "Pokémon's seashell."),
        #if I_KEY_FOSSILS >= GEN_4
            .price = (I_PRICE >= GEN_7) ? 7000 : 1000,
            .pocket = POCKET_ITEMS,
            .sortType = ITEM_TYPE_FOSSIL,
        #else
            .price = 0,
            .importance = 1,
            .pocket = POCKET_KEY_ITEMS,
        #endif
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 100,
        .iconPic = gItemIcon_HelixFossil,
        .iconPalette = gItemIconPalette_KantoFossil,
    },

    [ITEM_DOME_FOSSIL] =
    {
        .name = ITEM_NAME("Dome Fossil"),
        .description = COMPOUND_STRING(
            "A piece of an\n"
            "ancient marine\n"
            "Pokémon's shell."),
        #if I_KEY_FOSSILS >= GEN_4
            .price = (I_PRICE >= GEN_7) ? 7000 : 1000,
            .pocket = POCKET_ITEMS,
            .sortType = ITEM_TYPE_FOSSIL,
        #else
            .price = 0,
            .importance = 1,
            .pocket = POCKET_KEY_ITEMS,
        #endif
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 100,
        .iconPic = gItemIcon_DomeFossil,
        .iconPalette = gItemIconPalette_KantoFossil,
    },

    [ITEM_OLD_AMBER] =
    {
        .name = ITEM_NAME("Old Amber"),
        .description = COMPOUND_STRING(
            "A stone containing\n"
            "the genes of an\n"
            "ancient Pokémon."),
        #if I_KEY_FOSSILS >= GEN_4
            .price = 1000,
            .pocket = POCKET_ITEMS,
            .sortType = ITEM_TYPE_FOSSIL,
        #else
            .price = 0,
            .importance = 1,
            .pocket = POCKET_KEY_ITEMS,
        #endif
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 100,
        ITEM_ICON(OldAmber),
    },

    [ITEM_ROOT_FOSSIL] =
    {
        .name = ITEM_NAME("Root Fossil"),
        .description = sRootFossilDesc,
        #if I_KEY_FOSSILS >= GEN_4
            .price = (I_PRICE >= GEN_7) ? 7000 : 1000,
            .pocket = POCKET_ITEMS,
            .sortType = ITEM_TYPE_FOSSIL,
        #else
            .price = 0,
            .importance = 1,
            .pocket = POCKET_KEY_ITEMS,
        #endif
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 100,
        .iconPic = gItemIcon_RootFossil,
        .iconPalette = gItemIconPalette_HoennFossil,
    },

    [ITEM_CLAW_FOSSIL] =
    {
        .name = ITEM_NAME("Claw Fossil"),
        .description = sRootFossilDesc,
        #if I_KEY_FOSSILS >= GEN_4
            .price = (I_PRICE >= GEN_7) ? 7000 : 1000,
            .pocket = POCKET_ITEMS,
            .sortType = ITEM_TYPE_FOSSIL,
        #else
            .price = 0,
            .importance = 1,
            .pocket = POCKET_KEY_ITEMS,
        #endif
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 100,
        .iconPic = gItemIcon_ClawFossil,
        .iconPalette = gItemIconPalette_HoennFossil,
    },

    [ITEM_ARMOR_FOSSIL] =
    {
        .name = ITEM_NAME("Armor Fossil"),
        .price = (I_PRICE >= GEN_7) ? 7000 : 1000,
        .description = COMPOUND_STRING(
            "A piece of a\n"
            "prehistoric Poké-\n"
            "mon's head."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_FOSSIL,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 100,
        ITEM_ICON(ArmorFossil),
    },

    [ITEM_SKULL_FOSSIL] =
    {
        .name = ITEM_NAME("Skull Fossil"),
        .price = (I_PRICE >= GEN_7) ? 7000 : 1000,
        .description = COMPOUND_STRING(
            "A piece of a\n"
            "prehistoric Poké-\n"
            "mon's collar."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_FOSSIL,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 100,
        ITEM_ICON(SkullFossil),
    },

    [ITEM_COVER_FOSSIL] =
    {
        .name = ITEM_NAME("Cover Fossil"),
        .price = (I_PRICE >= GEN_7) ? 7000 : 1000,
        .description = COMPOUND_STRING(
            "A piece of a\n"
            "prehistoric Poké-\n"
            "mon's back."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_FOSSIL,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 100,
        ITEM_ICON(CoverFossil),
    },

    [ITEM_PLUME_FOSSIL] =
    {
        .name = ITEM_NAME("Plume Fossil"),
        .price = (I_PRICE >= GEN_7) ? 7000 : 1000,
        .description = COMPOUND_STRING(
            "A piece of a\n"
            "prehistoric Poké-\n"
            "mon's wing."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_FOSSIL,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 100,
        ITEM_ICON(PlumeFossil),
    },

    [ITEM_JAW_FOSSIL] =
    {
        .name = ITEM_NAME("Jaw Fossil"),
        .price = (I_PRICE >= GEN_7) ? 7000 : 1000,
        .description = COMPOUND_STRING(
            "A piece of a\n"
            "prehistoric Poké-\n"
            "mon's large jaw."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_FOSSIL,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 100,
        ITEM_ICON(JawFossil),
    },

    [ITEM_SAIL_FOSSIL] =
    {
        .name = ITEM_NAME("Sail Fossil"),
        .price = (I_PRICE >= GEN_7) ? 7000 : 1000,
        .description = COMPOUND_STRING(
            "A piece of a\n"
            "prehistoric Poké-\n"
            "mon's skin sail."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_FOSSIL,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 100,
        ITEM_ICON(SailFossil),
    },

    [ITEM_FOSSILIZED_BIRD] =
    {
        .name = ITEM_NAME("Fossilized Bird"),
        .price = 5000,
        .description = COMPOUND_STRING(
            "A fossil of an\n"
            "ancient, sky-\n"
            "soaring Pokémon."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_FOSSIL,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 100,
        ITEM_ICON(FossilizedBird),
    },

    [ITEM_FOSSILIZED_FISH] =
    {
        .name = ITEM_NAME("Fossilized Fish"),
        .pluralName = ITEM_PLURAL_NAME("Fossilized Fishes"),
        .price = 5000,
        .description = sFossilizedFishDesc,
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_FOSSIL,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 100,
        ITEM_ICON(FossilizedFish),
    },

    [ITEM_FOSSILIZED_DRAKE] =
    {
        .name = ITEM_NAME("Fossilized Drake"),
        .price = 5000,
        .description = COMPOUND_STRING(
            "A fossil of an\n"
            "ancient, land-\n"
            "roaming Pokémon."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_FOSSIL,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 100,
        ITEM_ICON(FossilizedDrake),
    },

    [ITEM_FOSSILIZED_DINO] =
    {
        .name = ITEM_NAME("Fossilized Dino"),
        .price = 5000,
        .description = sFossilizedFishDesc,
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_FOSSIL,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 100,
        ITEM_ICON(FossilizedDino),
    },

// Mulch

    [ITEM_GROWTH_MULCH] =
    {
        .name = ITEM_NAME("Growth Mulch"),
        .pluralName = ITEM_PLURAL_NAME("Growth Mulch"),
        .price = 200,
#if OW_BERRY_MULCH_USAGE == TRUE
        .description = COMPOUND_STRING(
            "A fertilizer that\n"
            "accelerates the\n"
            "growth of Berries."),
#else
        .description = sGenericMulchDesc,
#endif
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_GROWTH,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = ITEM_TO_MULCH(ITEM_GROWTH_MULCH),
        .flingPower = 30,
        .iconPic = gItemIcon_Mulch,
        .iconPalette = gItemIconPalette_GrowthMulch,
    },

    [ITEM_DAMP_MULCH] =
    {
        .name = ITEM_NAME("Damp Mulch"),
        .pluralName = ITEM_PLURAL_NAME("Damp Mulch"),
        .price = 200,
#if OW_BERRY_MULCH_USAGE == TRUE
        .description = COMPOUND_STRING(
            "A fertilizer that\n"
            "decelerates the\n"
            "growth of Berries."),
#else
        .description = sGenericMulchDesc,
#endif
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_GROWTH,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = ITEM_TO_MULCH(ITEM_DAMP_MULCH),
        .flingPower = 30,
        .iconPic = gItemIcon_Mulch,
        .iconPalette = gItemIconPalette_DampMulch,
    },

    [ITEM_STABLE_MULCH] =
    {
        .name = ITEM_NAME("Stable Mulch"),
        .pluralName = ITEM_PLURAL_NAME("Stable Mulch"),
        .price = 200,
#if OW_BERRY_MULCH_USAGE == TRUE
        .description = COMPOUND_STRING(
            "A fertilizer that\n"
            "ups the life time\n"
            "of Berry trees."),
#else
        .description = sGenericMulchDesc,
#endif
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_GROWTH,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = ITEM_TO_MULCH(ITEM_STABLE_MULCH),
        .flingPower = 30,
        ITEM_ICON(StableMulch),
    },

    [ITEM_GOOEY_MULCH] =
    {
        .name = ITEM_NAME("Gooey Mulch"),
        .pluralName = ITEM_PLURAL_NAME("Gooey Mulch"),
        .price = 200,
#if OW_BERRY_MULCH_USAGE == TRUE
        .description = COMPOUND_STRING(
            "A fertilizer that\n"
            "makes more Berries\n"
            "regrow after fall."),
#else
        .description = sGenericMulchDesc,
#endif
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_GROWTH,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = ITEM_TO_MULCH(ITEM_GOOEY_MULCH),
        .flingPower = 30,
        .iconPic = gItemIcon_Mulch,
        .iconPalette = gItemIconPalette_GooeyMulch,
    },

    [ITEM_RICH_MULCH] =
    {
        .name = ITEM_NAME("Rich Mulch"),
        .pluralName = ITEM_PLURAL_NAME("Rich Mulch"),
        .price = 200,
#if OW_BERRY_MULCH_USAGE == TRUE
        .description = COMPOUND_STRING(
            "A fertilizer that\n"
            "ups the number of\n"
            "Berries harvested."),
#else
        .description = sGenericMulchDesc,
#endif
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_GROWTH,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = ITEM_TO_MULCH(ITEM_RICH_MULCH),
        .flingPower = 30,
        .iconPic = gItemIcon_Mulch,
        .iconPalette = gItemIconPalette_RichMulch,
    },

    [ITEM_SURPRISE_MULCH] =
    {
        .name = ITEM_NAME("Surprise Mulch"),
        .pluralName = ITEM_PLURAL_NAME("Surprise Mulch"),
        .price = 200,
#if OW_BERRY_MULCH_USAGE == TRUE
        .description = COMPOUND_STRING(
            "A fertilizer that\n"
            "ups the chance of\n"
            "Berry mutations."),
#else
        .description = sGenericMulchDesc,
#endif
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_GROWTH,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = ITEM_TO_MULCH(ITEM_SURPRISE_MULCH),
        .flingPower = 30,
        .iconPic = gItemIcon_Mulch,
        .iconPalette = gItemIconPalette_SurpriseMulch,
    },

    [ITEM_BOOST_MULCH] =
    {
        .name = ITEM_NAME("Boost Mulch"),
        .pluralName = ITEM_PLURAL_NAME("Boost Mulch"),
        .price = 200,
#if OW_BERRY_MULCH_USAGE == TRUE
        .description = COMPOUND_STRING(
            "A fertilizer that\n"
            "ups the dry speed\n"
            "of soft soil."),
#else
        .description = sGenericMulchDesc,
#endif
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_GROWTH,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = ITEM_TO_MULCH(ITEM_BOOST_MULCH),
        .flingPower = 30,
        .iconPic = gItemIcon_Mulch,
        .iconPalette = gItemIconPalette_BoostMulch,
    },

    [ITEM_AMAZE_MULCH] =
    {
        .name = ITEM_NAME("Amaze Mulch"),
        .pluralName = ITEM_PLURAL_NAME("Amaze Mulch"),
        .price = 200,
#if OW_BERRY_MULCH_USAGE == TRUE
        .description = COMPOUND_STRING(
            "A fertilizer Rich\n"
            "Surprising and\n"
            "Boosting as well."),
#else
        .description = sGenericMulchDesc,
#endif
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_GROWTH,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = ITEM_TO_MULCH(ITEM_AMAZE_MULCH),
        .flingPower = 30,
        .iconPic = gItemIcon_Mulch,
        .iconPalette = gItemIconPalette_AmazeMulch,
    },

// Apricorns

    [ITEM_RED_APRICORN] =
    {
        .name = ITEM_NAME("Red Apricorn"),
        .price = (I_PRICE == GEN_4) ? 0 : ((I_PRICE >= GEN_5 && I_PRICE <= GEN_7) ? 20 : 200),
        .description = COMPOUND_STRING(
            "A red apricorn.\n"
            "It assails your\n"
            "nostrils."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_GROWTH,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        ITEM_ICON(RedApricorn),
    },

    [ITEM_BLUE_APRICORN] =
    {
        .name = ITEM_NAME("Blue Apricorn"),
        .price = (I_PRICE == GEN_4) ? 0 : ((I_PRICE >= GEN_5 && I_PRICE <= GEN_7) ? 20 : 200),
        .description = COMPOUND_STRING(
            "A blue apricorn.\n"
            "It smells a bit\n"
            "like grass."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_GROWTH,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        ITEM_ICON(BlueApricorn),
    },

    [ITEM_YELLOW_APRICORN] =
    {
        .name = ITEM_NAME("Yellow Apricorn"),
        .price = (I_PRICE == GEN_4) ? 0 : ((I_PRICE >= GEN_5 && I_PRICE <= GEN_7) ? 20 : 200),
        .description = COMPOUND_STRING(
            "A yellow apricorn.\n"
            "It has an invigor-\n"
            "ating scent."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_GROWTH,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        ITEM_ICON(YellowApricorn),
    },

    [ITEM_GREEN_APRICORN] =
    {
        .name = ITEM_NAME("Green Apricorn"),
        .price = (I_PRICE == GEN_4) ? 0 : ((I_PRICE >= GEN_5 && I_PRICE <= GEN_7) ? 20 : 200),
        .description = COMPOUND_STRING(
            "A green apricorn.\n"
            "It has a strange,\n"
            "aromatic scent."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_GROWTH,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        ITEM_ICON(GreenApricorn),
    },

    [ITEM_PINK_APRICORN] =
    {
        .name = ITEM_NAME("Pink Apricorn"),
        .price = (I_PRICE == GEN_4) ? 0 : ((I_PRICE >= GEN_5 && I_PRICE <= GEN_7) ? 20 : 200),
        .description = COMPOUND_STRING(
            "A pink apricorn.\n"
            "It has a nice,\n"
            "sweet scent."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_GROWTH,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        ITEM_ICON(PinkApricorn),
    },

    [ITEM_WHITE_APRICORN] =
    {
        .name = ITEM_NAME("White Apricorn"),
        .price = (I_PRICE == GEN_4) ? 0 : ((I_PRICE >= GEN_5 && I_PRICE <= GEN_7) ? 20 : 200),
        .description = COMPOUND_STRING(
            "A white apricorn.\n"
            "It doesn't smell\n"
            "like anything."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_GROWTH,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        ITEM_ICON(WhiteApricorn),
    },

    [ITEM_BLACK_APRICORN] =
    {
        .name = ITEM_NAME("Black Apricorn"),
        .price = (I_PRICE == GEN_4) ? 0 : ((I_PRICE >= GEN_5 && I_PRICE <= GEN_7) ? 20 : 200),
        .description = COMPOUND_STRING(
            "A black apricorn.\n"
            "It has an inde-\n"
            "scribable scent."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_GROWTH,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        ITEM_ICON(BlackApricorn),
    },

    [ITEM_WISHING_PIECE] =
    {
        .name = ITEM_NAME("Wishing Piece"),
        .price = 20,
        .description = COMPOUND_STRING(
            "Throw into a\n"
            "{PKMN} Den to attract\n"
            "Dynamax Pokémon."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_SELLABLE,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse, // Todo
        .flingPower = 50,
        ITEM_ICON(WishingPiece),
    },

    [ITEM_GALARICA_TWIG] =
    {
        .name = ITEM_NAME("Galarica Twig"),
        .price = 20 * TREASURE_FACTOR,
        .description = COMPOUND_STRING(
            "A twig from a tree\n"
            "in Galar called\n"
            "Galarica."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_EVOLUTION_ITEM,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
        .iconPic = gItemIcon_GalaricaTwig,
        .iconPalette = gItemIconPalette_GalaricaItem,
    },

    [ITEM_ARMORITE_ORE] =
    {
        .name = ITEM_NAME("Armorite Ore"),
        .pluralName = ITEM_PLURAL_NAME("Armorite Ore"),
        .price = 20,
        .description = COMPOUND_STRING(
            "A rare ore. Can be\n"
            "found in the Isle\n"
            "of Armor at Galar."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_EVOLUTION_ITEM,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
        ITEM_ICON(ArmoriteOre),
    },

    [ITEM_DYNITE_ORE] =
    {
        .name = ITEM_NAME("Dynite Ore"),
        .pluralName = ITEM_PLURAL_NAME("Dynite Ore"),
        .price = 20,
        .description = COMPOUND_STRING(
            "A mysterious ore.\n"
            "It can be found in\n"
            "Galar's Max Lair."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_EVOLUTION_ITEM,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
        ITEM_ICON(DyniteOre),
    },

// Mail
#define MAIL_INFO               \
    .price = 50,                \
    .pocket = POCKET_ITEMS,     \
    .sortType = ITEM_TYPE_MAIL, \
    .type = ITEM_USE_MAIL,      \
    .fieldUseFunc = ItemUseOutOfBattle_Mail

    [ITEM_ORANGE_MAIL] =
    {
        .name = ITEM_NAME("Orange Mail"),
        .pluralName = ITEM_PLURAL_NAME("Orange Mail"),
        .description = COMPOUND_STRING(
            "A Zigzagoon-print\n"
            "Mail to be held by\n"
            "a Pokémon."),
        MAIL_INFO,
        .secondaryId = ITEM_TO_MAIL(ITEM_ORANGE_MAIL),
        ITEM_ICON(OrangeMail),
    },

    [ITEM_HARBOR_MAIL] =
    {
        .name = ITEM_NAME("Harbor Mail"),
        .pluralName = ITEM_PLURAL_NAME("Harbor Mail"),
        .description = COMPOUND_STRING(
            "A Wingull-print\n"
            "Mail to be held by\n"
            "a Pokémon."),
        MAIL_INFO,
        .secondaryId = ITEM_TO_MAIL(ITEM_HARBOR_MAIL),
        ITEM_ICON(HarborMail),
    },

    [ITEM_GLITTER_MAIL] =
    {
        .name = ITEM_NAME("Glitter Mail"),
        .pluralName = ITEM_PLURAL_NAME("Glitter Mail"),
        .description = COMPOUND_STRING(
            "A Pikachu-print\n"
            "Mail to be held by\n"
            "a Pokémon."),
        MAIL_INFO,
        .secondaryId = ITEM_TO_MAIL(ITEM_GLITTER_MAIL),
        ITEM_ICON(GlitterMail),
    },

    [ITEM_MECH_MAIL] =
    {
        .name = ITEM_NAME("Mech Mail"),
        .pluralName = ITEM_PLURAL_NAME("Mech Mail"),
        .description = COMPOUND_STRING(
            "A Magnemite-print\n"
            "Mail to be held by\n"
            "a Pokémon."),
        MAIL_INFO,
        .secondaryId = ITEM_TO_MAIL(ITEM_MECH_MAIL),
        ITEM_ICON(MechMail),
    },

    [ITEM_WOOD_MAIL] =
    {
        .name = ITEM_NAME("Wood Mail"),
        .pluralName = ITEM_PLURAL_NAME("Wood Mail"),
        .description = COMPOUND_STRING(
            "A Slakoth-print\n"
            "Mail to be held by\n"
            "a Pokémon."),
        MAIL_INFO,
        .secondaryId = ITEM_TO_MAIL(ITEM_WOOD_MAIL),
        ITEM_ICON(WoodMail),
    },

    [ITEM_WAVE_MAIL] =
    {
        .name = ITEM_NAME("Wave Mail"),
        .pluralName = ITEM_PLURAL_NAME("Wave Mail"),
        .description = COMPOUND_STRING(
            "A Wailmer-print\n"
            "Mail to be held by\n"
            "a Pokémon."),
        MAIL_INFO,
        .secondaryId = ITEM_TO_MAIL(ITEM_WAVE_MAIL),
        ITEM_ICON(WaveMail),
    },

    [ITEM_BEAD_MAIL] =
    {
        .name = ITEM_NAME("Bead Mail"),
        .pluralName = ITEM_PLURAL_NAME("Bead Mail"),
        .description = sBeadMailDesc,
        MAIL_INFO,
        .secondaryId = ITEM_TO_MAIL(ITEM_BEAD_MAIL),
        ITEM_ICON(BeadMail),
    },

    [ITEM_SHADOW_MAIL] =
    {
        .name = ITEM_NAME("Shadow Mail"),
        .pluralName = ITEM_PLURAL_NAME("Shadow Mail"),
        .description = COMPOUND_STRING(
            "A Duskull-print\n"
            "Mail to be held by\n"
            "a Pokémon."),
        MAIL_INFO,
        .secondaryId = ITEM_TO_MAIL(ITEM_SHADOW_MAIL),
        ITEM_ICON(ShadowMail),
    },

    [ITEM_TROPIC_MAIL] =
    {
        .name = ITEM_NAME("Tropic Mail"),
        .pluralName = ITEM_PLURAL_NAME("Tropic Mail"),
        .description = COMPOUND_STRING(
            "A Bellossom-print\n"
            "Mail to be held by\n"
            "a Pokémon."),
        MAIL_INFO,
        .secondaryId = ITEM_TO_MAIL(ITEM_TROPIC_MAIL),
        ITEM_ICON(TropicMail),
    },

    [ITEM_DREAM_MAIL] =
    {
        .name = ITEM_NAME("Dream Mail"),
        .pluralName = ITEM_PLURAL_NAME("Dream Mail"),
        .description = sBeadMailDesc,
        MAIL_INFO,
        .secondaryId = ITEM_TO_MAIL(ITEM_DREAM_MAIL),
        ITEM_ICON(DreamMail),
    },

    [ITEM_FAB_MAIL] =
    {
        .name = ITEM_NAME("Fab Mail"),
        .pluralName = ITEM_PLURAL_NAME("Fab Mail"),
        .description = COMPOUND_STRING(
            "A gorgeous-print\n"
            "Mail to be held\n"
            "by a Pokémon."),
        MAIL_INFO,
        .secondaryId = ITEM_TO_MAIL(ITEM_FAB_MAIL),
        ITEM_ICON(FabMail),
    },

    [ITEM_RETRO_MAIL] =
    {
        .name = ITEM_NAME("Retro Mail"),
        .pluralName = ITEM_PLURAL_NAME("Retro Mail"),
        .description = COMPOUND_STRING(
            "Mail featuring the\n"
            "drawings of three\n"
            "Pokémon."),
        MAIL_INFO,
        .secondaryId = ITEM_TO_MAIL(ITEM_RETRO_MAIL),
        ITEM_ICON(RetroMail),
    },

// Evolution Items

#define EVOLUTION_STONE_INFO(fling_power, stone)       \
    .price = (I_PRICE >= GEN_7) ? EVO_ITEM_PRICE : 2100,         \
    .pocket = POCKET_ITEMS,                            \
    .sortType = ITEM_TYPE_EVOLUTION_STONE,             \
    .description = COMPOUND_STRING(                    \
        "Makes certain\n"                              \
        "species of Pokémon\n"                         \
        "evolve."),                                    \
    .type = ITEM_USE_PARTY_MENU,                       \
    .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone, \
    .effect = gItemEffect_EvoItem,                     \
    .flingPower = fling_power,                         \
    .iconPic = gItemIcon_##stone##Stone,               \
    .iconPalette = gItemIconPalette_##stone##Stone,

    [ITEM_FIRE_STONE] =
    {
        .name = ITEM_NAME("Fire Stone"),
        EVOLUTION_STONE_INFO(30, Fire)
    },

    [ITEM_WATER_STONE] =
    {
        .name = ITEM_NAME("Water Stone"),
        EVOLUTION_STONE_INFO(30, Water)
    },

    [ITEM_THUNDER_STONE] =
    {
        .name = ITEM_NAME("Thunder Stone"),
        EVOLUTION_STONE_INFO(30, Thunder)
    },

    [ITEM_LEAF_STONE] =
    {
        .name = ITEM_NAME("Leaf Stone"),
        EVOLUTION_STONE_INFO(30, Leaf)
    },

    [ITEM_ICE_STONE] =
    {
        .name = ITEM_NAME("Ice Stone"),
        EVOLUTION_STONE_INFO(30, Ice)
    },

    [ITEM_SUN_STONE] =
    {
        .name = ITEM_NAME("Sun Stone"),
        EVOLUTION_STONE_INFO(30, Sun)
    },

    [ITEM_MOON_STONE] =
    {
        .name = ITEM_NAME("Moon Stone"),
        EVOLUTION_STONE_INFO(30, Moon)
    },

    [ITEM_SHINY_STONE] =
    {
        .name = ITEM_NAME("Shiny Stone"),
        EVOLUTION_STONE_INFO(30, Shiny)
    },

    [ITEM_DUSK_STONE] =
    {
        .name = ITEM_NAME("Dusk Stone"),
        EVOLUTION_STONE_INFO(80, Dusk)
    },

    [ITEM_DAWN_STONE] =
    {
        .name = ITEM_NAME("Dawn Stone"),
        EVOLUTION_STONE_INFO(80, Dawn)
    },

    [ITEM_SWEET_APPLE] =
    {
        .name = ITEM_NAME("Sweet Apple"),
        .price = EVO_ITEM_PRICE,
        .description = COMPOUND_STRING(
            "A very sweet apple\n"
            "that makes certain\n"
            "Pokémon evolve."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_EVOLUTION_ITEM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
        .effect = gItemEffect_EvoItem,
        .flingPower = 30,
        ITEM_ICON(SweetApple),
    },

    [ITEM_TART_APPLE] =
    {
        .name = ITEM_NAME("Tart Apple"),
        .price = EVO_ITEM_PRICE,
        .description = COMPOUND_STRING(
            "A very tart apple\n"
            "that makes certain\n"
            "Pokémon evolve."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_EVOLUTION_ITEM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
        .effect = gItemEffect_EvoItem,
        .flingPower = 30,
        ITEM_ICON(TartApple),
    },

    [ITEM_CRACKED_POT] =
    {
        .name = ITEM_NAME("Cracked Pot"),
        .price = EVO_ITEM_PRICE,
        .description = COMPOUND_STRING(
            "A cracked teapot\n"
            "that makes certain\n"
            "Pokémon evolve."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_EVOLUTION_ITEM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
        .effect = gItemEffect_EvoItem,
        .flingPower = 80,
        .iconPic = gItemIcon_CrackedPot,
        .iconPalette = gItemIconPalette_Pot,
    },

    [ITEM_CHIPPED_POT] =
    {
        .name = ITEM_NAME("Chipped Pot"),
        .price = EVO_ITEM_PRICE,
        .description = COMPOUND_STRING(
            "A chipped teapot\n"
            "that makes certain\n"
            "Pokémon evolve."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_EVOLUTION_ITEM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
        .effect = gItemEffect_EvoItem,
        .flingPower = 80,
        .iconPic = gItemIcon_ChippedPot,
        .iconPalette = gItemIconPalette_Pot,
    },

    [ITEM_GALARICA_CUFF] =
    {
        .name = ITEM_NAME("Galarica Cuff"),
        .price = (I_PRICE >= GEN_9) ? EVO_ITEM_PRICE : 6000,
        .description = COMPOUND_STRING(
            "A cuff from Galar\n"
            "that makes certain\n"
            "Pokémon evolve."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_EVOLUTION_ITEM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
        .effect = gItemEffect_EvoItem,
        .flingPower = 30,
        .iconPic = gItemIcon_GalaricaCuff,
        .iconPalette = gItemIconPalette_GalaricaItem,
    },

    [ITEM_GALARICA_WREATH] =
    {
        .name = ITEM_NAME("Galarica Wreath"),
        .pluralName = ITEM_PLURAL_NAME("Galarica Wreathes"),
        .price = (I_PRICE >= GEN_9) ? EVO_ITEM_PRICE : 6000,
        .description = COMPOUND_STRING(
            "A wreath made in\n"
            "Galar. Makes some\n"
            "Pokémon evolve."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_EVOLUTION_ITEM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
        .effect = gItemEffect_EvoItem,
        .flingPower = 30,
        .iconPic = gItemIcon_GalaricaWreath,
        .iconPalette = gItemIconPalette_GalaricaItem,
    },

    [ITEM_DRAGON_SCALE] =
    {
        .name = ITEM_NAME("Dragon Scale"),
        .price = (I_PRICE >= GEN_7) ? EVO_ITEM_PRICE * TREASURE_FACTOR : 2100,
        .holdEffect = HOLD_EFFECT_DRAGON_SCALE,
        .holdEffectParam = 10,
        .description = COMPOUND_STRING(
            "A strange scale\n"
            "held by Dragon-\n"
            "type Pokémon."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_EVOLUTION_ITEM,
        .type = EVO_HELD_ITEM_TYPE,
        .fieldUseFunc = EVO_HELD_ITEM_FIELD_FUNC,
        .effect = gItemEffect_EvoItem,
        .flingPower = 30,
        ITEM_ICON(DragonScale),
    },

    [ITEM_UPGRADE] =
    {
        .name = ITEM_NAME("Upgrade"),
        .price = (I_PRICE >= GEN_7) ? EVO_ITEM_PRICE * TREASURE_FACTOR : 2100,
        .holdEffect = HOLD_EFFECT_UPGRADE,
        .description = COMPOUND_STRING(
            "A peculiar box made\n"
            "by Silph Co."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_EVOLUTION_ITEM,
        .type = EVO_HELD_ITEM_TYPE,
        .fieldUseFunc = EVO_HELD_ITEM_FIELD_FUNC,
        .effect = gItemEffect_EvoItem,
        .flingPower = 30,
        ITEM_ICON(Upgrade),
    },

    [ITEM_PROTECTOR] =
    {
        .name = ITEM_NAME("Protector"),
        .price = (I_PRICE >= GEN_7) ? EVO_ITEM_PRICE * TREASURE_FACTOR : 2100,
        .description = COMPOUND_STRING(
            "Loved by a certain\n"
            "Pokémon. It's stiff\n"
            "and heavy."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_EVOLUTION_ITEM,
        .type = EVO_HELD_ITEM_TYPE,
        .fieldUseFunc = EVO_HELD_ITEM_FIELD_FUNC,
        .effect = gItemEffect_EvoItem,
        .flingPower = 80,
        ITEM_ICON(Protector),
    },

    [ITEM_ELECTIRIZER] =
    {
        .name = ITEM_NAME("Electirizer"),
        .price = (I_PRICE >= GEN_7) ? EVO_ITEM_PRICE * TREASURE_FACTOR : 2100,
        .description = COMPOUND_STRING(
            "Loved by a certain\n"
            "Pokémon. It's full\n"
            "of electric energy."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_EVOLUTION_ITEM,
        .type = EVO_HELD_ITEM_TYPE,
        .fieldUseFunc = EVO_HELD_ITEM_FIELD_FUNC,
        .effect = gItemEffect_EvoItem,
        .flingPower = 80,
        ITEM_ICON(Electirizer),
    },

    [ITEM_MAGMARIZER] =
    {
        .name = ITEM_NAME("Magmarizer"),
        .price = (I_PRICE >= GEN_7) ? EVO_ITEM_PRICE * TREASURE_FACTOR : 2100,
        .description = COMPOUND_STRING(
            "Loved by a certain\n"
            "Pokémon. It's full\n"
            "of magma energy."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_EVOLUTION_ITEM,
        .type = EVO_HELD_ITEM_TYPE,
        .fieldUseFunc = EVO_HELD_ITEM_FIELD_FUNC,
        .effect = gItemEffect_EvoItem,
        .flingPower = 80,
        ITEM_ICON(Magmarizer),
    },

    [ITEM_DUBIOUS_DISC] =
    {
        .name = ITEM_NAME("Dubious Disc"),
        .price = (I_PRICE >= GEN_7) ? EVO_ITEM_PRICE * TREASURE_FACTOR : 2100,
        .description = COMPOUND_STRING(
            "A clear device\n"
            "overflowing with\n"
            "dubious data."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_EVOLUTION_ITEM,
        .type = EVO_HELD_ITEM_TYPE,
        .fieldUseFunc = EVO_HELD_ITEM_FIELD_FUNC,
        .effect = gItemEffect_EvoItem,
        .flingPower = 50,
        ITEM_ICON(DubiousDisc),
    },

    [ITEM_REAPER_CLOTH] =
    {
        .name = ITEM_NAME("Reaper Cloth"),
        .pluralName = ITEM_PLURAL_NAME("Reaper Cloths"),
        .price = (I_PRICE >= GEN_7) ? EVO_ITEM_PRICE * TREASURE_FACTOR : 2100,
        .description = COMPOUND_STRING(
            "Loved by a certain\n"
            "Pokémon. Imbued\n"
            "with spirit energy."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_EVOLUTION_ITEM,
        .type = EVO_HELD_ITEM_TYPE,
        .fieldUseFunc = EVO_HELD_ITEM_FIELD_FUNC,
        .effect = gItemEffect_EvoItem,
        .flingPower = 10,
        ITEM_ICON(ReaperCloth),
    },

    [ITEM_PRISM_SCALE] =
    {
        .name = ITEM_NAME("Prism Scale"),
        .price = (I_PRICE >= GEN_9) ? EVO_ITEM_PRICE : ((I_PRICE >= GEN_7) ? 2000 : 500),
        .description = COMPOUND_STRING(
            "A mysterious scale\n"
            "that evolves a\n"
            "certain Pokémon."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_EVOLUTION_ITEM,
        .type = EVO_HELD_ITEM_TYPE,
        .fieldUseFunc = EVO_HELD_ITEM_FIELD_FUNC,
        .effect = gItemEffect_EvoItem,
        .flingPower = 30,
        ITEM_ICON(PrismScale),
    },

    [ITEM_WHIPPED_DREAM] =
    {
        .name = ITEM_NAME("Whipped Dream"),
        .pluralName = ITEM_PLURAL_NAME("Whipped Dream"),
        .price = (I_PRICE >= GEN_7) ? EVO_ITEM_PRICE * TREASURE_FACTOR : 2100,
        .description = COMPOUND_STRING(
            "A soft and sweet\n"
            "treat loved by\n"
            "a certain Pokémon."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_EVOLUTION_ITEM,
        .type = EVO_HELD_ITEM_TYPE,
        .fieldUseFunc = EVO_HELD_ITEM_FIELD_FUNC,
        .effect = gItemEffect_EvoItem,
        .flingPower = 80,
        ITEM_ICON(WhippedDream),
    },

    [ITEM_SACHET] =
    {
        .name = ITEM_NAME("Sachet"),
        .price = (I_PRICE >= GEN_7) ? EVO_ITEM_PRICE * TREASURE_FACTOR : 2100,
        .description = COMPOUND_STRING(
            "A sachet of strong\n"
            "perfumes, loved by\n"
            "a certain Pokémon."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_EVOLUTION_ITEM,
        .type = EVO_HELD_ITEM_TYPE,
        .fieldUseFunc = EVO_HELD_ITEM_FIELD_FUNC,
        .effect = gItemEffect_EvoItem,
        .flingPower = 80,
        ITEM_ICON(Sachet),
    },

    [ITEM_OVAL_STONE] =
    {
        .name = ITEM_NAME("Oval Stone"),
        .price = (I_PRICE >= GEN_7) ? EVO_ITEM_PRICE : 2100,
        .description = COMPOUND_STRING(
            "Peculiar stone\n"
            "that evolves a\n"
            "certain Pokémon."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_EVOLUTION_ITEM,
        .type = EVO_HELD_ITEM_TYPE,
        .fieldUseFunc = EVO_HELD_ITEM_FIELD_FUNC,
        .effect = gItemEffect_EvoItem,
        .flingPower = 80,
        ITEM_ICON(OvalStone),
    },

#define SWEET_INFO(sweet)                         \
    .price = 500 * TREASURE_FACTOR,               \
    .pocket = POCKET_ITEMS,                       \
    .sortType = ITEM_TYPE_EVOLUTION_ITEM,         \
    .type = ITEM_USE_BAG_MENU,                    \
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse, \
    .effect = gItemEffect_EvoItem,                \
    .flingPower = 10,                             \
    .iconPic = gItemIcon_##sweet##Sweet,          \
    .iconPalette = gItemIconPalette_##sweet##Sweet,

    [ITEM_STRAWBERRY_SWEET] =
    {
        .name = ITEM_NAME("Strawberry Sweet"),
        .description = COMPOUND_STRING(
            "Strawberry-shaped\n"
            "sweet loved by\n"
            "Milcery."),
        SWEET_INFO(Strawberry)
    },

    [ITEM_LOVE_SWEET] =
    {
        .name = ITEM_NAME("Love Sweet"),
        .description = COMPOUND_STRING(
            "A heart-shaped\n"
            "sweet loved by\n"
            "Milcery."),
        SWEET_INFO(Love)
    },

    [ITEM_BERRY_SWEET] =
    {
        .name = ITEM_NAME("Berry Sweet"),
        .description = COMPOUND_STRING(
            "A berry-shaped\n"
            "sweet loved by\n"
            "Milcery."),
        SWEET_INFO(Berry)
    },

    [ITEM_CLOVER_SWEET] =
    {
        .name = ITEM_NAME("Clover Sweet"),
        .description = COMPOUND_STRING(
            "A clover-shaped\n"
            "sweet loved by\n"
            "Milcery."),
        SWEET_INFO(Clover)
    },

    [ITEM_FLOWER_SWEET] =
    {
        .name = ITEM_NAME("Flower Sweet"),
        .description = COMPOUND_STRING(
            "A flower-shaped\n"
            "sweet loved by\n"
            "Milcery."),
        SWEET_INFO(Flower)
    },

    [ITEM_STAR_SWEET] =
    {
        .name = ITEM_NAME("Star Sweet"),
        .description = COMPOUND_STRING(
            "A star-shaped\n"
            "sweet loved by\n"
            "Milcery."),
        SWEET_INFO(Star)
    },

    [ITEM_RIBBON_SWEET] =
    {
        .name = ITEM_NAME("Ribbon Sweet"),
        .description = COMPOUND_STRING(
            "A ribbon-shaped\n"
            "sweet loved by\n"
            "Milcery."),
        SWEET_INFO(Ribbon)
    },

    [ITEM_EVERSTONE] =
    {
        .name = ITEM_NAME("Everstone"),
        .price = (I_PRICE >= GEN_7) ? 3000 : 200,
        .holdEffect = HOLD_EFFECT_PREVENT_EVOLVE,
        .description = COMPOUND_STRING(
            "A wondrous hold\n"
            "item that prevents\n"
            "evolution."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_EVOLUTION_ITEM,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
        ITEM_ICON(Everstone),
    },

// Nectars
#define NECTAR_INFO                                              \
    .price = 300,                                                \
    .holdEffectParam = 0,                                        \
    .description = sNectarDesc,                                  \
    .pocket = POCKET_ITEMS,                                      \
    .sortType = ITEM_TYPE_NECTAR,                                \
    .type = ITEM_USE_PARTY_MENU,                                 \
    .fieldUseFunc = ItemUseOutOfBattle_FormChange_ConsumedOnUse, \
    .flingPower = 10

    [ITEM_RED_NECTAR] =
    {
        .name = ITEM_NAME("Red Nectar"),
        NECTAR_INFO,
        ITEM_ICON(RedNectar),
    },

    [ITEM_YELLOW_NECTAR] =
    {
        .name = ITEM_NAME("Yellow Nectar"),
        NECTAR_INFO,
        ITEM_ICON(YellowNectar),
    },

    [ITEM_PINK_NECTAR] =
    {
        .name = ITEM_NAME("Pink Nectar"),
        NECTAR_INFO,
        ITEM_ICON(PinkNectar),
    },

    [ITEM_PURPLE_NECTAR] =
    {
        .name = ITEM_NAME("Purple Nectar"),
        NECTAR_INFO,
        ITEM_ICON(PurpleNectar),
    },

// Plates
#define PLATE_INFO                                \
    .price = 1000,                                \
    .holdEffect = HOLD_EFFECT_PLATE,              \
    .holdEffectParam = 20,                        \
    .pocket = POCKET_ITEMS,                       \
    .sortType = ITEM_TYPE_PLATE,                  \
    .type = ITEM_USE_BAG_MENU,                    \
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse, \
    .flingPower = 90

    [ITEM_FLAME_PLATE] =
    {
        .name = ITEM_NAME("Flame Plate"),
        .description = COMPOUND_STRING(
            "A tablet that ups\n"
            "the power of\n"
            "Fire-type moves."),
        PLATE_INFO,
        .secondaryId = TYPE_FIRE,
        ITEM_ICON(FlamePlate),
    },

    [ITEM_SPLASH_PLATE] =
    {
        .name = ITEM_NAME("Splash Plate"),
        .description = COMPOUND_STRING(
            "A tablet that ups\n"
            "the power of\n"
            "Water-type moves."),
        PLATE_INFO,
        .secondaryId = TYPE_WATER,
        ITEM_ICON(SplashPlate),
    },

    [ITEM_ZAP_PLATE] =
    {
        .name = ITEM_NAME("Zap Plate"),
        .description = COMPOUND_STRING(
            "A tablet that ups\n"
            "the power of Elec-\n"
            "tric-type moves."),
        PLATE_INFO,
        .secondaryId = TYPE_ELECTRIC,
        ITEM_ICON(ZapPlate),
    },

    [ITEM_MEADOW_PLATE] =
    {
        .name = ITEM_NAME("Meadow Plate"),
        .description = COMPOUND_STRING(
            "A tablet that ups\n"
            "the power of\n"
            "Grass-type moves."),
        PLATE_INFO,
        .secondaryId = TYPE_GRASS,
        ITEM_ICON(MeadowPlate),
    },

    [ITEM_ICICLE_PLATE] =
    {
        .name = ITEM_NAME("Icicle Plate"),
        .description = COMPOUND_STRING(
            "A tablet that ups\n"
            "the power of\n"
            "Ice-type moves."),
        PLATE_INFO,
        .secondaryId = TYPE_ICE,
        ITEM_ICON(IciclePlate),
    },

    [ITEM_FIST_PLATE] =
    {
        .name = ITEM_NAME("Fist Plate"),
        .description = COMPOUND_STRING(
            "A tablet that ups\n"
            "the power of Fight-\n"
            "ing-type moves."),
        PLATE_INFO,
        .secondaryId = TYPE_FIGHTING,
        ITEM_ICON(FistPlate),
    },

    [ITEM_TOXIC_PLATE] =
    {
        .name = ITEM_NAME("Toxic Plate"),
        .description = COMPOUND_STRING(
            "A tablet that ups\n"
            "the power of\n"
            "Poison-type moves."),
        PLATE_INFO,
        .secondaryId = TYPE_POISON,
        ITEM_ICON(ToxicPlate),
    },

    [ITEM_EARTH_PLATE] =
    {
        .name = ITEM_NAME("Earth Plate"),
        .description = COMPOUND_STRING(
            "A tablet that ups\n"
            "the power of\n"
            "Ground-type moves."),
        PLATE_INFO,
        .secondaryId = TYPE_GROUND,
        ITEM_ICON(EarthPlate),
    },

    [ITEM_SKY_PLATE] =
    {
        .name = ITEM_NAME("Sky Plate"),
        .description = COMPOUND_STRING(
            "A tablet that ups\n"
            "the power of\n"
            "Flying-type moves."),
        PLATE_INFO,
        .secondaryId = TYPE_FLYING,
        ITEM_ICON(SkyPlate),
    },

    [ITEM_MIND_PLATE] =
    {
        .name = ITEM_NAME("Mind Plate"),
        .description = COMPOUND_STRING(
            "A tablet that ups\n"
            "the power of Psy\n"
            "chic-type moves."),
        PLATE_INFO,
        .secondaryId = TYPE_PSYCHIC,
        ITEM_ICON(MindPlate),
    },

    [ITEM_INSECT_PLATE] =
    {
        .name = ITEM_NAME("Insect Plate"),
        .description = COMPOUND_STRING(
            "A tablet that ups\n"
            "the power of\n"
            "Bug-type moves."),
        PLATE_INFO,
        .secondaryId = TYPE_BUG,
        ITEM_ICON(InsectPlate),
    },

    [ITEM_STONE_PLATE] =
    {
        .name = ITEM_NAME("Stone Plate"),
        .description = COMPOUND_STRING(
            "A tablet that ups\n"
            "the power of\n"
            "Rock-type moves."),
        PLATE_INFO,
        .secondaryId = TYPE_ROCK,
        ITEM_ICON(StonePlate),
    },

    [ITEM_SPOOKY_PLATE] =
    {
        .name = ITEM_NAME("Spooky Plate"),
        .description = COMPOUND_STRING(
            "A tablet that ups\n"
            "the power of\n"
            "Ghost-type moves."),
        PLATE_INFO,
        .secondaryId = TYPE_GHOST,
        ITEM_ICON(SpookyPlate),
    },

    [ITEM_DRACO_PLATE] =
    {
        .name = ITEM_NAME("Draco Plate"),
        .description = COMPOUND_STRING(
            "A tablet that ups\n"
            "the power of\n"
            "Dragon-type moves."),
        PLATE_INFO,
        .secondaryId = TYPE_DRAGON,
        ITEM_ICON(DracoPlate),
    },

    [ITEM_DREAD_PLATE] =
    {
        .name = ITEM_NAME("Dread Plate"),
        .description = COMPOUND_STRING(
            "A tablet that ups\n"
            "the power of\n"
            "Dark-type moves."),
        PLATE_INFO,
        .secondaryId = TYPE_DARK,
        ITEM_ICON(DreadPlate),
    },

    [ITEM_IRON_PLATE] =
    {
        .name = ITEM_NAME("Iron Plate"),
        .description = COMPOUND_STRING(
            "A tablet that ups\n"
            "the power of\n"
            "Steel-type moves."),
        PLATE_INFO,
        .secondaryId = TYPE_STEEL,
        ITEM_ICON(IronPlate),
    },

    [ITEM_PIXIE_PLATE] =
    {
        .name = ITEM_NAME("Pixie Plate"),
        .description = COMPOUND_STRING(
            "A tablet that ups\n"
            "the power of\n"
            "Fairy-type moves."),
        PLATE_INFO,
        .secondaryId = TYPE_FAIRY,
        ITEM_ICON(PixiePlate),
    },

// Drives
#define DRIVE_INFO                                \
    .price = (I_PRICE >= GEN_7) ? 0 : 1000,       \
    .holdEffect = HOLD_EFFECT_DRIVE,              \
    .pocket = POCKET_ITEMS,                       \
    .sortType = ITEM_TYPE_DRIVE,                  \
    .type = ITEM_USE_BAG_MENU,                    \
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse, \
    .flingPower = 70

    [ITEM_DOUSE_DRIVE] =
    {
        .name = ITEM_NAME("Douse Drive"),
        DRIVE_INFO,
        .description = COMPOUND_STRING(
            "Changes Genesect's\n"
            "Techno Blast to\n"
            "Water-type."),
        .secondaryId = TYPE_WATER,
        ITEM_ICON(DouseDrive),
    },

    [ITEM_SHOCK_DRIVE] =
    {
        .name = ITEM_NAME("Shock Drive"),
        DRIVE_INFO,
        .description = COMPOUND_STRING(
            "Changes Genesect's\n"
            "Techno Blast to\n"
            "Electric-type."),
        .secondaryId = TYPE_ELECTRIC,
        ITEM_ICON(ShockDrive),
    },

    [ITEM_BURN_DRIVE] =
    {
        .name = ITEM_NAME("Burn Drive"),
        DRIVE_INFO,
        .description = COMPOUND_STRING(
            "Changes Genesect's\n"
            "Techno Blast to\n"
            "Fire-type."),
        .secondaryId = TYPE_FIRE,
        ITEM_ICON(BurnDrive),
    },

    [ITEM_CHILL_DRIVE] =
    {
        .name = ITEM_NAME("Chill Drive"),
        DRIVE_INFO,
        .description = COMPOUND_STRING(
            "Changes Genesect's\n"
            "Techno Blast to\n"
            "Ice-type."),
        .secondaryId = TYPE_ICE,
        ITEM_ICON(ChillDrive),
    },

// Memories
#define MEMORY_INFO                               \
    .price = 1000,                                \
    .holdEffect = HOLD_EFFECT_MEMORY,             \
    .holdEffectParam = 0,                         \
    .pocket = POCKET_ITEMS,                       \
    .sortType = ITEM_TYPE_MEMORY,                 \
    .type = ITEM_USE_BAG_MENU,                    \
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse, \
    .flingPower = 50

    [ITEM_FIRE_MEMORY] =
    {
        .name = ITEM_NAME("Fire Memory"),
        .pluralName = ITEM_PLURAL_NAME("Fire Memories"),
        MEMORY_INFO,
        .description = COMPOUND_STRING(
            "A disc with Fire\n"
            "type data. It swaps\n"
            "Silvally's type."),
        .secondaryId = TYPE_FIRE,
        ITEM_ICON(FireMemory),
    },

    [ITEM_WATER_MEMORY] =
    {
        .name = ITEM_NAME("Water Memory"),
        .pluralName = ITEM_PLURAL_NAME("Water Memories"),
        MEMORY_INFO,
        .description = COMPOUND_STRING(
            "A disc with Water\n"
            "type data. It swaps\n"
            "Silvally's type."),
        .secondaryId = TYPE_WATER,
        ITEM_ICON(WaterMemory),
    },

    [ITEM_ELECTRIC_MEMORY] =
    {
        .name = ITEM_NAME("Electric Memory"),
        .pluralName = ITEM_PLURAL_NAME("Electric Memories"),
        MEMORY_INFO,
        .description = COMPOUND_STRING(
            "A disc with Electric\n"
            "type data. It swaps\n"
            "Silvally's type."),
        .secondaryId = TYPE_ELECTRIC,
        ITEM_ICON(ElectricMemory),
    },

    [ITEM_GRASS_MEMORY] =
    {
        .name = ITEM_NAME("Grass Memory"),
        .pluralName = ITEM_PLURAL_NAME("Grass Memories"),
        MEMORY_INFO,
        .description = COMPOUND_STRING(
            "A disc with Grass\n"
            "type data. It swaps\n"
            "Silvally's type."),
        .secondaryId = TYPE_GRASS,
        ITEM_ICON(GrassMemory),
    },

    [ITEM_ICE_MEMORY] =
    {
        .name = ITEM_NAME("Ice Memory"),
        .pluralName = ITEM_PLURAL_NAME("Ice Memories"),
        MEMORY_INFO,
        .description = COMPOUND_STRING(
            "A disc with Ice\n"
            "type data. It swaps\n"
            "Silvally's type."),
        .secondaryId = TYPE_ICE,
        ITEM_ICON(IceMemory),
    },

    [ITEM_FIGHTING_MEMORY] =
    {
        .name = ITEM_NAME("Fighting Memory"),
        .pluralName = ITEM_PLURAL_NAME("Fighting Memories"),
        MEMORY_INFO,
        .description = COMPOUND_STRING(
            "Disc with Fighting\n"
            "type data. It swaps\n"
            "Silvally's type."),
        .secondaryId = TYPE_FIGHTING,
        ITEM_ICON(FightingMemory),
    },

    [ITEM_POISON_MEMORY] =
    {
        .name = ITEM_NAME("Poison Memory"),
        .pluralName = ITEM_PLURAL_NAME("Poison Memories"),
        MEMORY_INFO,
        .description = COMPOUND_STRING(
            "A disc with Poison\n"
            "type data. It swaps\n"
            "Silvally's type."),
        .secondaryId = TYPE_POISON,
        ITEM_ICON(PoisonMemory),
    },

    [ITEM_GROUND_MEMORY] =
    {
        .name = ITEM_NAME("Ground Memory"),
        .pluralName = ITEM_PLURAL_NAME("Ground Memories"),
        MEMORY_INFO,
        .description = COMPOUND_STRING(
            "A disc with Ground\n"
            "type data. It swaps\n"
            "Silvally's type."),
        .secondaryId = TYPE_GROUND,
        ITEM_ICON(GroundMemory),
    },

    [ITEM_FLYING_MEMORY] =
    {
        .name = ITEM_NAME("Flying Memory"),
        .pluralName = ITEM_PLURAL_NAME("Flying Memories"),
        MEMORY_INFO,
        .description = COMPOUND_STRING(
            "A disc with Flying\n"
            "type data. It swaps\n"
            "Silvally's type."),
        .secondaryId = TYPE_FLYING,
        ITEM_ICON(FlyingMemory),
    },

    [ITEM_PSYCHIC_MEMORY] =
    {
        .name = ITEM_NAME("Psychic Memory"),
        .pluralName = ITEM_PLURAL_NAME("Psychic Memories"),
        MEMORY_INFO,
        .description = COMPOUND_STRING(
            "A disc with Psychic\n"
            "type data. It swaps\n"
            "Silvally's type."),
        .secondaryId = TYPE_PSYCHIC,
        ITEM_ICON(PsychicMemory),
    },

    [ITEM_BUG_MEMORY] =
    {
        .name = ITEM_NAME("Bug Memory"),
        .pluralName = ITEM_PLURAL_NAME("Bug Memories"),
        MEMORY_INFO,
        .description = COMPOUND_STRING(
            "A disc with Bug\n"
            "type data. It swaps\n"
            "Silvally's type."),
        .secondaryId = TYPE_BUG,
        ITEM_ICON(BugMemory),
    },

    [ITEM_ROCK_MEMORY] =
    {
        .name = ITEM_NAME("Rock Memory"),
        .pluralName = ITEM_PLURAL_NAME("Rock Memories"),
        MEMORY_INFO,
        .description = COMPOUND_STRING(
            "A disc with Rock\n"
            "type data. It swaps\n"
            "Silvally's type."),
        .secondaryId = TYPE_ROCK,
        ITEM_ICON(RockMemory),
    },

    [ITEM_GHOST_MEMORY] =
    {
        .name = ITEM_NAME("Ghost Memory"),
        .pluralName = ITEM_PLURAL_NAME("Ghost Memories"),
        MEMORY_INFO,
        .description = COMPOUND_STRING(
            "A disc with Ghost\n"
            "type data. It swaps\n"
            "Silvally's type."),
        .secondaryId = TYPE_GHOST,
        ITEM_ICON(GhostMemory),
    },

    [ITEM_DRAGON_MEMORY] =
    {
        .name = ITEM_NAME("Dragon Memory"),
        .pluralName = ITEM_PLURAL_NAME("Dragon Memories"),
        MEMORY_INFO,
        .description = COMPOUND_STRING(
            "A disc with Dragon\n"
            "type data. It swaps\n"
            "Silvally's type."),
        .secondaryId = TYPE_DRAGON,
        ITEM_ICON(DragonMemory),
    },

    [ITEM_DARK_MEMORY] =
    {
        .name = ITEM_NAME("Dark Memory"),
        .pluralName = ITEM_PLURAL_NAME("Dark Memories"),
        MEMORY_INFO,
        .description = COMPOUND_STRING(
            "A disc with Dark\n"
            "type data. It swaps\n"
            "Silvally's type."),
        .secondaryId = TYPE_DARK,
        ITEM_ICON(DarkMemory),
    },

    [ITEM_STEEL_MEMORY] =
    {
        .name = ITEM_NAME("Steel Memory"),
        .pluralName = ITEM_PLURAL_NAME("Steel Memories"),
        MEMORY_INFO,
        .description = COMPOUND_STRING(
            "A disc with Steel\n"
            "type data. It swaps\n"
            "Silvally's type."),
        .secondaryId = TYPE_STEEL,
        ITEM_ICON(SteelMemory),
    },

    [ITEM_FAIRY_MEMORY] =
    {
        .name = ITEM_NAME("Fairy Memory"),
        .pluralName = ITEM_PLURAL_NAME("Fairy Memories"),
        MEMORY_INFO,
        .description = COMPOUND_STRING(
            "A disc with Fairy\n"
            "type data. It swaps\n"
            "Silvally's type."),
        .secondaryId = TYPE_FAIRY,
        ITEM_ICON(FairyMemory),
    },

    [ITEM_RUSTED_SWORD] =
    {
        .name = ITEM_NAME("Rusted Sword"),
        .price = 0,
        .description = COMPOUND_STRING(
            "A rusty sword. A\n"
            "hero used it to\n"
            "halt a disaster."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_SPECIAL_HELD_ITEM,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .iconPic = gItemIcon_RustedSword,
        .iconPalette = gItemIconPalette_RustedWeapons,
    },

    [ITEM_RUSTED_SHIELD] =
    {
        .name = ITEM_NAME("Rusted Shield"),
        .price = 0,
        .description = COMPOUND_STRING(
            "A rusty shield. A\n"
            "hero used it to\n"
            "halt a disaster."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_SPECIAL_HELD_ITEM,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .iconPic = gItemIcon_RustedShield,
        .iconPalette = gItemIconPalette_RustedWeapons,
    },

// Colored Orbs

    [ITEM_RED_ORB] =
    {
        .name = ITEM_NAME("Red Orb"),
        .price = 10000,
        .holdEffect = HOLD_EFFECT_PRIMAL_ORB,
        .description = COMPOUND_STRING(
            "A red, glowing orb\n"
            "said to contain an\n"
            "ancient power."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_SPECIAL_HELD_ITEM,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        ITEM_ICON(RedOrb),
    },

    [ITEM_BLUE_ORB] =
    {
        .name = ITEM_NAME("Blue Orb"),
        .price = 10000,
        .holdEffect = HOLD_EFFECT_PRIMAL_ORB,
        .description = COMPOUND_STRING(
            "A blue, glowing orb\n"
            "said to contain an\n"
            "ancient power."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_SPECIAL_HELD_ITEM,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        ITEM_ICON(BlueOrb),
    },

// Mega Stones
#define MEGA_STONE_INFO                           \
    .price = 5000,                                \
    .holdEffect = HOLD_EFFECT_MEGA_STONE,         \
    .pocket = POCKET_ITEMS,                       \
    .sortType = ITEM_TYPE_MEGA_STONE,             \
    .type = ITEM_USE_BAG_MENU,                    \
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse, \
    .flingPower = 80

    [ITEM_VENUSAURITE] =
    {
        .name = ITEM_NAME("Venusaurite"),
        MEGA_STONE_INFO,
        .description = COMPOUND_STRING(
            "This stone enables\n"
            "Venusaur to Mega\n"
            "Evolve in battle."),
        ITEM_ICON(Venusaurite),
    },

    [ITEM_CHARIZARDITE_X] =
    {
        .name = ITEM_NAME("Charizardite X"),
        .pluralName = ITEM_PLURAL_NAME("Charizardites X"),
        MEGA_STONE_INFO,
        .description = sCharizarditeDesc,
        ITEM_ICON(CharizarditeX),
    },

    [ITEM_CHARIZARDITE_Y] =
    {
        .name = ITEM_NAME("Charizardite Y"),
        .pluralName = ITEM_PLURAL_NAME("Charizardites Y"),
        MEGA_STONE_INFO,
        .description = sCharizarditeDesc,
        ITEM_ICON(CharizarditeY),
    },

    [ITEM_BLASTOISINITE] =
    {
        .name = ITEM_NAME("Blastoisinite"),
        MEGA_STONE_INFO,
        .description = COMPOUND_STRING(
            "This stone enables\n"
            "Blastoise to Mega\n"
            "Evolve in battle."),
        ITEM_ICON(Blastoisinite),
    },

    [ITEM_BEEDRILLITE] =
    {
        .name = ITEM_NAME("Beedrillite"),
        MEGA_STONE_INFO,
        .description = COMPOUND_STRING(
            "This stone enables\n"
            "Beedrill to Mega\n"
            "Evolve in battle."),
        ITEM_ICON(Beedrillite),
    },

    [ITEM_PIDGEOTITE] =
    {
        .name = ITEM_NAME("Pidgeotite"),
        MEGA_STONE_INFO,
        .description = COMPOUND_STRING(
            "This stone enables\n"
            "Pidgeot to Mega\n"
            "Evolve in battle."),
        ITEM_ICON(Pidgeotite),
    },

    [ITEM_ALAKAZITE] =
    {
        .name = ITEM_NAME("Alakazite"),
        MEGA_STONE_INFO,
        .description = COMPOUND_STRING(
            "This stone enables\n"
            "Alakazam to Mega\n"
            "Evolve in battle."),
        ITEM_ICON(Alakazite),
    },

    [ITEM_SLOWBRONITE] =
    {
        .name = ITEM_NAME("Slowbronite"),
        MEGA_STONE_INFO,
        .description = COMPOUND_STRING(
            "This stone enables\n"
            "Slowbro to Mega\n"
            "Evolve in battle."),
        ITEM_ICON(Slowbronite),
    },

    [ITEM_GENGARITE] =
    {
        .name = ITEM_NAME("Gengarite"),
        MEGA_STONE_INFO,
        .description = COMPOUND_STRING(
            "This stone enables\n"
            "Gengar to Mega\n"
            "Evolve in battle."),
        ITEM_ICON(Gengarite),
    },

    [ITEM_KANGASKHANITE] =
    {
        .name = ITEM_NAME("Kangaskhanite"),
        MEGA_STONE_INFO,
        .description = COMPOUND_STRING(
            "This stone enables\n"
            "Kangaskhan to Mega\n"
            "Evolve in battle."),
        ITEM_ICON(Kangaskhanite),
    },

    [ITEM_PINSIRITE] =
    {
        .name = ITEM_NAME("Pinsirite"),
        MEGA_STONE_INFO,
        .description = COMPOUND_STRING(
            "This stone enables\n"
            "Pinsir to Mega\n"
            "Evolve in battle."),
        ITEM_ICON(Pinsirite),
    },

    [ITEM_GYARADOSITE] =
    {
        .name = ITEM_NAME("Gyaradosite"),
        MEGA_STONE_INFO,
        .description = COMPOUND_STRING(
            "This stone enables\n"
            "Gyarados to Mega\n"
            "Evolve in battle."),
        ITEM_ICON(Gyaradosite),
    },

    [ITEM_AERODACTYLITE] =
    {
        .name = ITEM_NAME("Aerodactylite"),
        MEGA_STONE_INFO,
        .description = COMPOUND_STRING(
            "This stone enables\n"
            "Aerodactyl to Mega\n"
            "Evolve in battle."),
        ITEM_ICON(Aerodactylite),
    },

    [ITEM_MEWTWONITE_X] =
    {
        .name = ITEM_NAME("Mewtwonite X"),
        .pluralName = ITEM_PLURAL_NAME("Mewtwonites X"),
        MEGA_STONE_INFO,
        .description = sMewtwoniteDesc,
        ITEM_ICON(MewtwoniteX),
    },

    [ITEM_MEWTWONITE_Y] =
    {
        .name = ITEM_NAME("Mewtwonite Y"),
        .pluralName = ITEM_PLURAL_NAME("Mewtwonites Y"),
        MEGA_STONE_INFO,
        .description = sMewtwoniteDesc,
        ITEM_ICON(MewtwoniteY),
    },

    [ITEM_AMPHAROSITE] =
    {
        .name = ITEM_NAME("Ampharosite"),
        MEGA_STONE_INFO,
        .description = COMPOUND_STRING(
            "This stone enables\n"
            "Ampharos to Mega\n"
            "Evolve in battle."),
        ITEM_ICON(Ampharosite),
    },

    [ITEM_STEELIXITE] =
    {
        .name = ITEM_NAME("Steelixite"),
        MEGA_STONE_INFO,
        .description = COMPOUND_STRING(
            "This stone enables\n"
            "Steelix to Mega\n"
            "Evolve in battle."),
        ITEM_ICON(Steelixite),
    },

    [ITEM_SCIZORITE] =
    {
        .name = ITEM_NAME("Scizorite"),
        MEGA_STONE_INFO,
        .description = COMPOUND_STRING(
            "This stone enables\n"
            "Scizor to Mega\n"
            "Evolve in battle."),
        ITEM_ICON(Scizorite),
    },

    [ITEM_HERACRONITE] =
    {
        .name = ITEM_NAME("Heracronite"),
        MEGA_STONE_INFO,
        .description = COMPOUND_STRING(
            "This stone enables\n"
            "Heracross to Mega\n"
            "Evolve in battle."),
        ITEM_ICON(Heracronite),
    },

    [ITEM_HOUNDOOMINITE] =
    {
        .name = ITEM_NAME("Houndoominite"),
        MEGA_STONE_INFO,
        .description = COMPOUND_STRING(
            "This stone enables\n"
            "Houndoom to Mega\n"
            "Evolve in battle."),
        ITEM_ICON(Houndoominite),
    },

    [ITEM_TYRANITARITE] =
    {
        .name = ITEM_NAME("Tyranitarite"),
        MEGA_STONE_INFO,
        .description = COMPOUND_STRING(
            "This stone enables\n"
            "Tyranitar to Mega\n"
            "Evolve in battle."),
        ITEM_ICON(Tyranitarite),
    },

    [ITEM_SCEPTILITE] =
    {
        .name = ITEM_NAME("Sceptilite"),
        MEGA_STONE_INFO,
        .description = COMPOUND_STRING(
            "This stone enables\n"
            "Sceptile to Mega\n"
            "Evolve in battle."),
        ITEM_ICON(Sceptilite),
    },

    [ITEM_BLAZIKENITE] =
    {
        .name = ITEM_NAME("Blazikenite"),
        MEGA_STONE_INFO,
        .description = COMPOUND_STRING(
            "This stone enables\n"
            "Blaziken to Mega\n"
            "Evolve in battle."),
        ITEM_ICON(Blazikenite),
    },

    [ITEM_SWAMPERTITE] =
    {
        .name = ITEM_NAME("Swampertite"),
        MEGA_STONE_INFO,
        .description = COMPOUND_STRING(
            "This stone enables\n"
            "Swampert to Mega\n"
            "Evolve in battle."),
        ITEM_ICON(Swampertite),
    },

    [ITEM_GARDEVOIRITE] =
    {
        .name = ITEM_NAME("Gardevoirite"),
        MEGA_STONE_INFO,
        .description = COMPOUND_STRING(
            "This stone enables\n"
            "Gardevoir to Mega\n"
            "Evolve in battle."),
        ITEM_ICON(Gardevoirite),
    },

    [ITEM_SABLENITE] =
    {
        .name = ITEM_NAME("Sablenite"),
        MEGA_STONE_INFO,
        .description = COMPOUND_STRING(
            "This stone enables\n"
            "Sableye to Mega\n"
            "Evolve in battle."),
        ITEM_ICON(Sablenite),
    },

    [ITEM_MAWILITE] =
    {
        .name = ITEM_NAME("Mawilite"),
        MEGA_STONE_INFO,
        .description = COMPOUND_STRING(
            "This stone enables\n"
            "Mawile to Mega\n"
            "Evolve in battle."),
        ITEM_ICON(Mawilite),
    },

    [ITEM_AGGRONITE] =
    {
        .name = ITEM_NAME("Aggronite"),
        MEGA_STONE_INFO,
        .description = COMPOUND_STRING(
            "This stone enables\n"
            "Aggron to Mega\n"
            "Evolve in battle."),
        ITEM_ICON(Aggronite),
    },

    [ITEM_MEDICHAMITE] =
    {
        .name = ITEM_NAME("Medichamite"),
        MEGA_STONE_INFO,
        .description = COMPOUND_STRING(
            "This stone enables\n"
            "Medicham to Mega\n"
            "Evolve in battle."),
        ITEM_ICON(Medichamite),
    },

    [ITEM_MANECTITE] =
    {
        .name = ITEM_NAME("Manectite"),
        MEGA_STONE_INFO,
        .description = COMPOUND_STRING(
            "This stone enables\n"
            "Manectric to Mega\n"
            "Evolve in battle."),
        ITEM_ICON(Manectite),
    },

    [ITEM_SHARPEDONITE] =
    {
        .name = ITEM_NAME("Sharpedonite"),
        MEGA_STONE_INFO,
        .description = COMPOUND_STRING(
            "This stone enables\n"
            "Sharpedo to Mega\n"
            "Evolve in battle."),
        ITEM_ICON(Sharpedonite),
    },

    [ITEM_CAMERUPTITE] =
    {
        .name = ITEM_NAME("Cameruptite"),
        MEGA_STONE_INFO,
        .description = COMPOUND_STRING(
            "This stone enables\n"
            "Camerupt to Mega\n"
            "Evolve in battle."),
        ITEM_ICON(Cameruptite),
    },

    [ITEM_ALTARIANITE] =
    {
        .name = ITEM_NAME("Altarianite"),
        MEGA_STONE_INFO,
        .description = COMPOUND_STRING(
            "This stone enables\n"
            "Altaria to Mega\n"
            "Evolve in battle."),
        ITEM_ICON(Altarianite),
    },

    [ITEM_BANETTITE] =
    {
        .name = ITEM_NAME("Banettite"),
        MEGA_STONE_INFO,
        .description = COMPOUND_STRING(
            "This stone enables\n"
            "Banette to Mega\n"
            "Evolve in battle."),
        ITEM_ICON(Banettite),
    },

    [ITEM_ABSOLITE] =
    {
        .name = ITEM_NAME("Absolite"),
        MEGA_STONE_INFO,
        .description = COMPOUND_STRING(
            "This stone enables\n"
            "Absol to Mega\n"
            "Evolve in battle."),
        ITEM_ICON(Absolite),
    },

    [ITEM_GLALITITE] =
    {
        .name = ITEM_NAME("Glalitite"),
        MEGA_STONE_INFO,
        .description = COMPOUND_STRING(
            "This stone enables\n"
            "Glalie to Mega\n"
            "Evolve in battle."),
        ITEM_ICON(Glalitite),
    },

    [ITEM_SALAMENCITE] =
    {
        .name = ITEM_NAME("Salamencite"),
        MEGA_STONE_INFO,
        .description = COMPOUND_STRING(
            "This stone enables\n"
            "Salamence to Mega\n"
            "Evolve in battle."),
        ITEM_ICON(Salamencite),
    },

    [ITEM_METAGROSSITE] =
    {
        .name = ITEM_NAME("Metagrossite"),
        MEGA_STONE_INFO,
        .description = COMPOUND_STRING(
            "This stone enables\n"
            "Metagross to Mega\n"
            "Evolve in battle."),
        ITEM_ICON(Metagrossite),
    },

    [ITEM_LATIASITE] =
    {
        .name = ITEM_NAME("Latiasite"),
        MEGA_STONE_INFO,
        .description = COMPOUND_STRING(
            "This stone enables\n"
            "Latias to Mega\n"
            "Evolve in battle."),
        ITEM_ICON(Latiasite),
    },

    [ITEM_LATIOSITE] =
    {
        .name = ITEM_NAME("Latiosite"),
        MEGA_STONE_INFO,
        .description = COMPOUND_STRING(
            "This stone enables\n"
            "Latios to Mega\n"
            "Evolve in battle."),
        ITEM_ICON(Latiosite),
    },

    [ITEM_LOPUNNITE] =
    {
        .name = ITEM_NAME("Lopunnite"),
        MEGA_STONE_INFO,
        .description = COMPOUND_STRING(
            "This stone enables\n"
            "Lopunny to Mega\n"
            "Evolve in battle."),
        ITEM_ICON(Lopunnite),
    },

    [ITEM_GARCHOMPITE] =
    {
        .name = ITEM_NAME("Garchompite"),
        MEGA_STONE_INFO,
        .description = COMPOUND_STRING(
            "This stone enables\n"
            "Garchomp to Mega\n"
            "Evolve in battle."),
        ITEM_ICON(Garchompite),
    },

    [ITEM_LUCARIONITE] =
    {
        .name = ITEM_NAME("Lucarionite"),
        MEGA_STONE_INFO,
        .description = COMPOUND_STRING(
            "This stone enables\n"
            "Lucario to Mega\n"
            "Evolve in battle."),
        ITEM_ICON(Lucarionite),
    },

    [ITEM_ABOMASITE] =
    {
        .name = ITEM_NAME("Abomasite"),
        MEGA_STONE_INFO,
        .description = COMPOUND_STRING(
            "This stone enables\n"
            "Abomasnow to Mega\n"
            "Evolve in battle."),
        ITEM_ICON(Abomasite),
    },

    [ITEM_GALLADITE] =
    {
        .name = ITEM_NAME("Galladite"),
        MEGA_STONE_INFO,
        .description = COMPOUND_STRING(
            "This stone enables\n"
            "Gallade to Mega\n"
            "Evolve in battle."),
        ITEM_ICON(Galladite),
    },

    [ITEM_AUDINITE] =
    {
        .name = ITEM_NAME("Audinite"),
        MEGA_STONE_INFO,
        .description = COMPOUND_STRING(
            "This stone enables\n"
            "Audino to Mega\n"
            "Evolve in battle."),
        ITEM_ICON(Audinite),
    },

    [ITEM_DIANCITE] =
    {
        .name = ITEM_NAME("Diancite"),
        MEGA_STONE_INFO,
        .description = COMPOUND_STRING(
            "This stone enables\n"
            "Diancie to Mega\n"
            "Evolve in battle."),
        ITEM_ICON(Diancite),
    },

// Gems
#define GEM_INFO                                                             \
    .price = (I_PRICE >= GEN_9) ? 15000 : ((I_PRICE >= GEN_7) ? 4000 : 200), \
    .holdEffect = HOLD_EFFECT_GEMS,                                          \
    .holdEffectParam = GEM_BOOST_PARAM,                                      \
    .pocket = POCKET_ITEMS,                                                  \
    .sortType = ITEM_TYPE_GEM,                                               \
    .type = ITEM_USE_BAG_MENU,                                               \
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse

    [ITEM_NORMAL_GEM] =
    {
        .name = ITEM_NAME("Normal Gem"),
        GEM_INFO,
        .description = COMPOUND_STRING(
            "Increases the\n"
            "power of Normal\n"
            "Type moves."),
        .secondaryId = TYPE_NORMAL,
        ITEM_ICON(NormalGem),
    },

    [ITEM_FIRE_GEM] =
    {
        .name = ITEM_NAME("Fire Gem"),
        GEM_INFO,
        .description = COMPOUND_STRING(
            "Increases the\n"
            "power of Fire\n"
            "Type moves."),
        .secondaryId = TYPE_FIRE,
        ITEM_ICON(FireGem),
    },

    [ITEM_WATER_GEM] =
    {
        .name = ITEM_NAME("Water Gem"),
        GEM_INFO,
        .description = COMPOUND_STRING(
            "Increases the\n"
            "power of Water\n"
            "Type moves."),
        .secondaryId = TYPE_WATER,
        ITEM_ICON(WaterGem),
    },

    [ITEM_ELECTRIC_GEM] =
    {
        .name = ITEM_NAME("Electric Gem"),
        GEM_INFO,
        .description = COMPOUND_STRING(
            "Increases the\n"
            "power of Electric\n"
            "Type moves."),
        .secondaryId = TYPE_ELECTRIC,
        ITEM_ICON(ElectricGem),
    },

    [ITEM_GRASS_GEM] =
    {
        .name = ITEM_NAME("Grass Gem"),
        GEM_INFO,
        .description = COMPOUND_STRING(
            "Increases the\n"
            "power of Grass\n"
            "Type moves."),
        .secondaryId = TYPE_GRASS,
        ITEM_ICON(GrassGem),
    },

    [ITEM_ICE_GEM] =
    {
        .name = ITEM_NAME("Ice Gem"),
        GEM_INFO,
        .description = COMPOUND_STRING(
            "Increases the\n"
            "power of Ice\n"
            "Type moves."),
        .secondaryId = TYPE_ICE,
        ITEM_ICON(IceGem),
    },

    [ITEM_FIGHTING_GEM] =
    {
        .name = ITEM_NAME("Fighting Gem"),
        GEM_INFO,
        .description = COMPOUND_STRING(
            "Increases the\n"
            "power of Fighting\n"
            "Type moves."),
        .secondaryId = TYPE_FIGHTING,
        ITEM_ICON(FightingGem),
    },

    [ITEM_POISON_GEM] =
    {
        .name = ITEM_NAME("Poison Gem"),
        GEM_INFO,
        .description = COMPOUND_STRING(
            "Increases the\n"
            "power of Poison\n"
            "Type moves."),
        .secondaryId = TYPE_POISON,
        ITEM_ICON(PoisonGem),
    },

    [ITEM_GROUND_GEM] =
    {
        .name = ITEM_NAME("Ground Gem"),
        GEM_INFO,
        .description = COMPOUND_STRING(
            "Increases the\n"
            "power of Ground\n"
            "Type moves."),
        .secondaryId = TYPE_GROUND,
        ITEM_ICON(GroundGem),
    },

    [ITEM_FLYING_GEM] =
    {
        .name = ITEM_NAME("Flying Gem"),
        GEM_INFO,
        .description = COMPOUND_STRING(
            "Increases the\n"
            "power of Flying\n"
            "Type moves."),
        .secondaryId = TYPE_FLYING,
        ITEM_ICON(FlyingGem),
    },

    [ITEM_PSYCHIC_GEM] =
    {
        .name = ITEM_NAME("Psychic Gem"),
        GEM_INFO,
        .description = COMPOUND_STRING(
            "Increases the\n"
            "power of Psychic\n"
            "Type moves."),
        .secondaryId = TYPE_PSYCHIC,
        ITEM_ICON(PsychicGem),
    },

    [ITEM_BUG_GEM] =
    {
        .name = ITEM_NAME("Bug Gem"),
        GEM_INFO,
        .description = COMPOUND_STRING(
            "Increases the\n"
            "power of Bug\n"
            "Type moves."),
        .secondaryId = TYPE_BUG,
        ITEM_ICON(BugGem),
    },

    [ITEM_ROCK_GEM] =
    {
        .name = ITEM_NAME("Rock Gem"),
        GEM_INFO,
        .description = COMPOUND_STRING(
            "Increases the\n"
            "power of Rock\n"
            "Type moves."),
        .secondaryId = TYPE_ROCK,
        ITEM_ICON(RockGem),
    },

    [ITEM_GHOST_GEM] =
    {
        .name = ITEM_NAME("Ghost Gem"),
        GEM_INFO,
        .description = COMPOUND_STRING(
            "Increases the\n"
            "power of Ghost\n"
            "Type moves."),
        .secondaryId = TYPE_GHOST,
        ITEM_ICON(GhostGem),
    },

    [ITEM_DRAGON_GEM] =
    {
        .name = ITEM_NAME("Dragon Gem"),
        GEM_INFO,
        .description = COMPOUND_STRING(
            "Increases the\n"
            "power of Dragon\n"
            "Type moves."),
        .secondaryId = TYPE_DRAGON,
        ITEM_ICON(DragonGem),
    },

    [ITEM_DARK_GEM] =
    {
        .name = ITEM_NAME("Dark Gem"),
        GEM_INFO,
        .description = COMPOUND_STRING(
            "Increases the\n"
            "power of Dark\n"
            "Type moves."),
        .secondaryId = TYPE_DARK,
        ITEM_ICON(DarkGem),
    },

    [ITEM_STEEL_GEM] =
    {
        .name = ITEM_NAME("Steel Gem"),
        GEM_INFO,
        .description = COMPOUND_STRING(
            "Increases the\n"
            "power of Steel\n"
            "Type moves."),
        .secondaryId = TYPE_STEEL,
        ITEM_ICON(SteelGem),
    },

    [ITEM_FAIRY_GEM] =
    {
        .name = ITEM_NAME("Fairy Gem"),
        GEM_INFO,
        .description = COMPOUND_STRING(
            "Increases the\n"
            "power of Fairy\n"
            "Type moves."),
        .secondaryId = TYPE_FAIRY,
        ITEM_ICON(FairyGem),
    },

// Z-Crystals
#define Z_CRYSTAL_INFO                   \
    .price = 0,                          \
    .holdEffect = HOLD_EFFECT_Z_CRYSTAL, \
    .pocket = POCKET_ITEMS,              \
    .sortType = ITEM_TYPE_Z_CRYSTAL,     \
    .type = ITEM_USE_BAG_MENU,           \
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse

    [ITEM_NORMALIUM_Z] =
    {
        .name = ITEM_NAME("Normalium Z"),
        Z_CRYSTAL_INFO,
        .description = COMPOUND_STRING(
            "Upgrade Normal-\n"
            "type moves into\n"
            "Z-Moves."),
        .secondaryId = TYPE_NORMAL,
        ITEM_ICON(NormaliumZ),
    },

    [ITEM_FIRIUM_Z] =
    {
        .name = ITEM_NAME("Firium Z"),
        Z_CRYSTAL_INFO,
        .description = COMPOUND_STRING(
            "Upgrade Fire-\n"
            "type moves into\n"
            "Z-Moves."),
        .secondaryId = TYPE_FIRE,
        ITEM_ICON(FiriumZ),
    },

    [ITEM_WATERIUM_Z] =
    {
        .name = ITEM_NAME("Waterium Z"),
        Z_CRYSTAL_INFO,
        .description = COMPOUND_STRING(
            "Upgrade Water-\n"
            "type moves into\n"
            "Z-Moves."),
        .secondaryId = TYPE_WATER,
        ITEM_ICON(WateriumZ),
    },

    [ITEM_ELECTRIUM_Z] =
    {
        .name = ITEM_NAME("Electrium Z"),
        Z_CRYSTAL_INFO,
        .description = COMPOUND_STRING(
            "Upgrade Electric-\n"
            "type moves into\n"
            "Z-Moves."),
        .secondaryId = TYPE_ELECTRIC,
        ITEM_ICON(ElectriumZ),
    },

    [ITEM_GRASSIUM_Z] =
    {
        .name = ITEM_NAME("Grassium Z"),
        Z_CRYSTAL_INFO,
        .description = COMPOUND_STRING(
            "Upgrade Grass-\n"
            "type moves into\n"
            "Z-Moves."),
        .secondaryId = TYPE_GRASS,
        ITEM_ICON(GrassiumZ),
    },

    [ITEM_ICIUM_Z] =
    {
        .name = ITEM_NAME("Icium Z"),
        Z_CRYSTAL_INFO,
        .description = COMPOUND_STRING(
            "Upgrade Ice-\n"
            "type moves into\n"
            "Z-Moves."),
        .secondaryId = TYPE_ICE,
        ITEM_ICON(IciumZ),
    },

    [ITEM_FIGHTINIUM_Z] =
    {
        .name = ITEM_NAME("Fightinium Z"),
        Z_CRYSTAL_INFO,
        .description = COMPOUND_STRING(
            "Upgrade Fighting-\n"
            "type moves into\n"
            "Z-Moves."),
        .secondaryId = TYPE_FIGHTING,
        ITEM_ICON(FightiniumZ),
    },

    [ITEM_POISONIUM_Z] =
    {
        .name = ITEM_NAME("Poisonium Z"),
        Z_CRYSTAL_INFO,
        .description = COMPOUND_STRING(
            "Upgrade Poison-\n"
            "type moves into\n"
            "Z-Moves."),
        .secondaryId = TYPE_POISON,
        ITEM_ICON(PoisoniumZ),
    },

    [ITEM_GROUNDIUM_Z] =
    {
        .name = ITEM_NAME("Groundium Z"),
        Z_CRYSTAL_INFO,
        .description = COMPOUND_STRING(
            "Upgrade Ground-\n"
            "type moves into\n"
            "Z-Moves."),
        .secondaryId = TYPE_GROUND,
        ITEM_ICON(GroundiumZ),
    },

    [ITEM_FLYINIUM_Z] =
    {
        .name = ITEM_NAME("Flyinium Z"),
        Z_CRYSTAL_INFO,
        .description = COMPOUND_STRING(
            "Upgrade Flying-\n"
            "type moves into\n"
            "Z-Moves."),
        .secondaryId = TYPE_FLYING,
        ITEM_ICON(FlyiniumZ),
    },

    [ITEM_PSYCHIUM_Z] =
    {
        .name = ITEM_NAME("Psychium Z"),
        Z_CRYSTAL_INFO,
        .description = COMPOUND_STRING(
            "Upgrade Psychic-\n"
            "type moves into\n"
            "Z-Moves."),
        .secondaryId = TYPE_PSYCHIC,
        ITEM_ICON(PsychiumZ),
    },

    [ITEM_BUGINIUM_Z] =
    {
        .name = ITEM_NAME("Buginium Z"),
        Z_CRYSTAL_INFO,
        .description = COMPOUND_STRING(
            "Upgrade Bug-\n"
            "type moves into\n"
            "Z-Moves."),
        .secondaryId = TYPE_BUG,
        ITEM_ICON(BuginiumZ),
    },

    [ITEM_ROCKIUM_Z] =
    {
        .name = ITEM_NAME("Rockium Z"),
        Z_CRYSTAL_INFO,
        .description = COMPOUND_STRING(
            "Upgrade Rock-\n"
            "type moves into\n"
            "Z-Moves."),
        .secondaryId = TYPE_ROCK,
        ITEM_ICON(RockiumZ),
    },

    [ITEM_GHOSTIUM_Z] =
    {
        .name = ITEM_NAME("Ghostium Z"),
        Z_CRYSTAL_INFO,
        .description = COMPOUND_STRING(
            "Upgrade Ghost-\n"
            "type moves into\n"
            "Z-Moves."),
        .secondaryId = TYPE_GHOST,
        ITEM_ICON(GhostiumZ),
    },

    [ITEM_DRAGONIUM_Z] =
    {
        .name = ITEM_NAME("Dragonium Z"),
        Z_CRYSTAL_INFO,
        .description = COMPOUND_STRING(
            "Upgrade Dragon-\n"
            "type moves into\n"
            "Z-Moves."),
        .secondaryId = TYPE_DRAGON,
        ITEM_ICON(DragoniumZ),
    },

    [ITEM_DARKINIUM_Z] =
    {
        .name = ITEM_NAME("Darkinium Z"),
        Z_CRYSTAL_INFO,
        .description = COMPOUND_STRING(
            "Upgrade Dark-\n"
            "type moves into\n"
            "Z-Moves."),
        .secondaryId = TYPE_DARK,
        ITEM_ICON(DarkiniumZ),
    },

    [ITEM_STEELIUM_Z] =
    {
        .name = ITEM_NAME("Steelium Z"),
        Z_CRYSTAL_INFO,
        .description = COMPOUND_STRING(
            "Upgrade Steel-\n"
            "type moves into\n"
            "Z-Moves."),
        .secondaryId = TYPE_STEEL,
        ITEM_ICON(SteeliumZ),
    },

    [ITEM_FAIRIUM_Z] =
    {
        .name = ITEM_NAME("Fairium Z"),
        Z_CRYSTAL_INFO,
        .description = COMPOUND_STRING(
            "Upgrade Fairy-\n"
            "type moves into\n"
            "Z-Moves."),
        .secondaryId = TYPE_FAIRY,
        ITEM_ICON(FairiumZ),
    },

    [ITEM_PIKANIUM_Z] =
    {
        .name = ITEM_NAME("Pikanium Z"),
        Z_CRYSTAL_INFO,
        .description = COMPOUND_STRING(
            "Upgrade Pikachu's\n"
            "Volt Tackle\n"
            "into a Z-Move."),
        .secondaryId = 255,  // signature z move
        ITEM_ICON(PikaniumZ),
    },

    [ITEM_EEVIUM_Z] =
    {
        .name = ITEM_NAME("Eevium Z"),
        Z_CRYSTAL_INFO,
        .description = COMPOUND_STRING(
            "Upgrade Eevee's\n"
            "Last Resort\n"
            "into a Z-Move."),
        .secondaryId = 255,  // signature z move
        ITEM_ICON(EeviumZ),
    },

    [ITEM_SNORLIUM_Z] =
    {
        .name = ITEM_NAME("Snorlium Z"),
        Z_CRYSTAL_INFO,
        .description = COMPOUND_STRING(
            "Upgrade Snorlax's\n"
            "Giga Impact\n"
            "into a Z-Move."),
        .secondaryId = 255,  // signature z move
        ITEM_ICON(SnorliumZ),
    },

    [ITEM_MEWNIUM_Z] =
    {
        .name = ITEM_NAME("Mewnium Z"),
        Z_CRYSTAL_INFO,
        .description = COMPOUND_STRING(
            "Upgrade Mew's\n"
            "Psychic into\n"
            "a Z-Move."),
        .secondaryId = 255,  // signature z move
        ITEM_ICON(MewniumZ),
    },

    [ITEM_DECIDIUM_Z] =
    {
        .name = ITEM_NAME("Decidium Z"),
        Z_CRYSTAL_INFO,
        .description = COMPOUND_STRING(
            "Upgrade Decidu-\n"
            "eye's Spirit Sha-\n"
            "ckle into a Z-Move."),
        .secondaryId = 255,  // signature z move
        ITEM_ICON(DecidiumZ),
    },

    [ITEM_INCINIUM_Z] =
    {
        .name = ITEM_NAME("Incinium Z"),
        Z_CRYSTAL_INFO,
        .description = COMPOUND_STRING(
            "Upgrade Incine-\n"
            "roar's Darkest La-\n"
            "riat into a Z-Move."),
        .secondaryId = 255,  // signature z move
        ITEM_ICON(InciniumZ),
    },

    [ITEM_PRIMARIUM_Z] =
    {
        .name = ITEM_NAME("Primarium Z"),
        Z_CRYSTAL_INFO,
        .description = COMPOUND_STRING(
            "Upgrade Primarina's\n"
            "Sparkling Aria\n"
            "into a Z-Move."),
        .secondaryId = 255,  // signature z move
        ITEM_ICON(PrimariumZ),
    },

    [ITEM_LYCANIUM_Z] =
    {
        .name = ITEM_NAME("Lycanium Z"),
        Z_CRYSTAL_INFO,
        .description = COMPOUND_STRING(
            "Upgrade Lycanroc's\n"
            "Stone Edge\n"
            "into a Z-Move."),
        .secondaryId = 255,  // signature z move
        ITEM_ICON(LycaniumZ),
    },

    [ITEM_MIMIKIUM_Z] =
    {
        .name = ITEM_NAME("Mimikium Z"),
        Z_CRYSTAL_INFO,
        .description = COMPOUND_STRING(
            "Upgrade Mimikyu's\n"
            "Play Rough\n"
            "into a Z-Move."),
        .secondaryId = 255,  // signature z move
        ITEM_ICON(MimikiumZ),
    },

    [ITEM_KOMMONIUM_Z] =
    {
        .name = ITEM_NAME("Kommonium Z"),
        Z_CRYSTAL_INFO,
        .description = COMPOUND_STRING(
            "Upgrade Kommo-o's\n"
            "Clanging Scales\n"
            "into a Z-Move."),
        .secondaryId = 255,  // signature z move
        ITEM_ICON(KommoniumZ),
    },

    [ITEM_TAPUNIUM_Z] =
    {
        .name = ITEM_NAME("Tapunium Z"),
        Z_CRYSTAL_INFO,
        .description = COMPOUND_STRING(
            "Upgrade the tapus'\n"
            "Nature's Madness\n"
            "into a Z-Move."),
        .secondaryId = 255,  //signature z move
        ITEM_ICON(TapuniumZ),
    },

    [ITEM_SOLGANIUM_Z] =
    {
        .name = ITEM_NAME("Solganium Z"),
        Z_CRYSTAL_INFO,
        .description = COMPOUND_STRING(
            "Upgrade Solgaleo's\n"
            "Sunsteel Strike\n"
            "into a Z-Move."),
        .secondaryId = 255,  // signature z move
        ITEM_ICON(SolganiumZ),
    },

    [ITEM_LUNALIUM_Z] =
    {
        .name = ITEM_NAME("Lunalium Z"),
        Z_CRYSTAL_INFO,
        .description = COMPOUND_STRING(
            "Upgrade Lunala's\n"
            "Moongeist Beam\n"
            "into a Z-Move."),
        .secondaryId = 255,  // signature z move
        ITEM_ICON(LunaliumZ),
    },

    [ITEM_MARSHADIUM_Z] =
    {
        .name = ITEM_NAME("Marshadium Z"),
        Z_CRYSTAL_INFO,
        .description = COMPOUND_STRING(
            "Upgrade Marsha-\n"
            "dow's Spectral Thi-\n"
            "ef into a Z-Move."),
        .secondaryId = 255,  // signature z move
        ITEM_ICON(MarshadiumZ),
    },

    [ITEM_ALORAICHIUM_Z] =
    {
        .name = ITEM_NAME("Aloraichium Z"),
        Z_CRYSTAL_INFO,
        .description = COMPOUND_STRING(
            "Upgrade Alolan\n"
            "Raichu's Thunder-\n"
            "bolt into a Z-Move."),
        .secondaryId = 255,  // signature z move
        ITEM_ICON(AloraichiumZ),
    },

    [ITEM_PIKASHUNIUM_Z] =
    {
        .name = ITEM_NAME("Pikashunium Z"),
        Z_CRYSTAL_INFO,
        .description = COMPOUND_STRING(
            "Upgrade Pikachu w/\n"
            "a cap's Thunderbolt\n"
            "into a Z-Move."),
        .secondaryId = 255,  // signature z move
        ITEM_ICON(PikashuniumZ),
    },

    [ITEM_ULTRANECROZIUM_Z] =
    {
        .name = ITEM_NAME("Ultranecrozium Z"),
        Z_CRYSTAL_INFO,
        .description = COMPOUND_STRING(
            "A crystal to turn\n"
            "fused Necrozma\n"
            "into a new form."),
        .secondaryId = 255, //signature z move
        ITEM_ICON(UltranecroziumZ),
    },

// Species-specific Held Items
#define HELD_ITEM_INFO               \
    .pocket = POCKET_ITEMS,          \
    .sortType = ITEM_TYPE_HELD_ITEM, \
    .type = ITEM_USE_BAG_MENU,       \
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse

    [ITEM_LIGHT_BALL] =
    {
        .name = ITEM_NAME("Light Ball"),
        .price = (I_PRICE >= GEN_7) ? 1000 : 100,
        .holdEffect = HOLD_EFFECT_LIGHT_BALL,
        .description = COMPOUND_STRING(
            "A hold item that\n"
            "raises the Atk and\n"
            "Sp. Atk of Pikachu."),
        HELD_ITEM_INFO,
        .flingPower = 30,
        ITEM_ICON(LightBall),
    },

    [ITEM_LEEK] =
    {
        .name = ITEM_NAME("Leek"),
        .price = (I_PRICE >= GEN_7) ? 1000 : 200,
        .holdEffect = HOLD_EFFECT_LEEK,
        .description = COMPOUND_STRING(
            "A hold item that\n"
            "raises Farfetch'd's\n"
            "critical-hit ratio."),
        HELD_ITEM_INFO,
        .flingPower = 60,
        ITEM_ICON(Leek),
    },

    [ITEM_THICK_CLUB] =
    {
        .name = ITEM_NAME("Thick Club"),
        .price = (I_PRICE >= GEN_7) ? 1000 : 500,
        .holdEffect = HOLD_EFFECT_THICK_CLUB,
        .description = COMPOUND_STRING(
            "A hold item that \n"
            "raises Cubone or\n"
            "Marowak's Attack."),
        HELD_ITEM_INFO,
        .flingPower = 90,
        ITEM_ICON(ThickClub),
    },

    [ITEM_LUCKY_PUNCH] =
    {
        .name = ITEM_NAME("Lucky Punch"),
        .pluralName = ITEM_PLURAL_NAME("Lucky Punches"),
        .price = (I_PRICE >= GEN_7) ? 1000 : 10,
        .holdEffect = HOLD_EFFECT_LUCKY_PUNCH,
        .description = COMPOUND_STRING(
            "A hold item that\n"
            "raises Chansey's\n"
            "critical-hit rate."),
        HELD_ITEM_INFO,
        .flingPower = 40,
        ITEM_ICON(LuckyPunch),
    },

    [ITEM_METAL_POWDER] =
    {
        .name = ITEM_NAME("Metal Powder"),
        .pluralName = ITEM_PLURAL_NAME("Metal Powder"),
        .price = (I_PRICE >= GEN_7) ? 1000 : 10,
        .holdEffect = HOLD_EFFECT_METAL_POWDER,
        .description = COMPOUND_STRING(
            "A hold item that\n"
            "raises Ditto's\n"
            "Defense."),
        HELD_ITEM_INFO,
        .flingPower = 10,
        ITEM_ICON(MetalPowder),
    },

    [ITEM_QUICK_POWDER] =
    {
        .name = ITEM_NAME("Quick Powder"),
        .pluralName = ITEM_PLURAL_NAME("Quick Powder"),
        .price = (I_PRICE >= GEN_7) ? 1000 : 10,
        .holdEffect = HOLD_EFFECT_QUICK_POWDER,
        .description = COMPOUND_STRING(
            "A hold item that\n"
            "raises the Speed\n"
            "of Ditto."),
        HELD_ITEM_INFO,
        .flingPower = 10,
        ITEM_ICON(QuickPowder),
    },

    [ITEM_DEEP_SEA_SCALE] =
    {
        .name = ITEM_NAME("Deep Sea Scale"),
        .price = (I_PRICE >= GEN_7) ? EVO_ITEM_PRICE : 200,
        .holdEffect = HOLD_EFFECT_DEEP_SEA_SCALE,
        .description = COMPOUND_STRING(
            "A hold item that\n"
            "raises the Sp. Def\n"
            "of Clamperl."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = EVO_HELD_ITEM_FIELD_FUNC,
        .effect = gItemEffect_EvoItem,
        .flingPower = 30,
        ITEM_ICON(DeepSeaScale),
    },

    [ITEM_DEEP_SEA_TOOTH] =
    {
        .name = ITEM_NAME("Deep Sea Tooth"),
        .pluralName = ITEM_PLURAL_NAME("Deep Sea Teeth"),
        .price = (I_PRICE >= GEN_7) ? EVO_ITEM_PRICE : 200,
        .holdEffect = HOLD_EFFECT_DEEP_SEA_TOOTH,
        .description = COMPOUND_STRING(
            "A hold item that\n"
            "raises the Sp. Atk\n"
            "of Clamperl."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_HELD_ITEM,
        .fieldUseFunc = EVO_HELD_ITEM_FIELD_FUNC,
        .effect = gItemEffect_EvoItem,
        .flingPower = 90,
        ITEM_ICON(DeepSeaTooth),
    },

    [ITEM_SOUL_DEW] =
    {
        .name = ITEM_NAME("Soul Dew"),
        .price = (I_PRICE >= GEN_7) ? 0 : 200,
        .holdEffect = HOLD_EFFECT_SOUL_DEW,
        .holdEffectParam = B_SOUL_DEW_BOOST >= GEN_7 ? 20 : 50,
        .description = COMPOUND_STRING(
        #if B_SOUL_DEW_BOOST >= GEN_7
            "Powers up Latios' &\n"
            "Latias' Psychic and\n"
            "Dragon-type moves."),
        #else
            "Hold item: raises\n"
            "Sp. Atk & Sp. Def of\n"
            "Latios & Latias."),
        #endif
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_SPECIAL_HELD_ITEM,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
        ITEM_ICON(SoulDew),
    },

    [ITEM_ADAMANT_ORB] =
    {
        .name = ITEM_NAME("Adamant Orb"),
        .price = (I_PRICE >= GEN_7) ? LEGENDARY_ITEM_COST : 10000,
        .holdEffect = HOLD_EFFECT_ADAMANT_ORB,
        .holdEffectParam = 20,
        .description = COMPOUND_STRING(
            "Powers up Dialga's\n"
            "Dragon and Steel-\n"
            "type moves."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_SPECIAL_HELD_ITEM,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 60,
        ITEM_ICON(AdamantOrb),
    },

    [ITEM_LUSTROUS_ORB] =
    {
        .name = ITEM_NAME("Lustrous Orb"),
        .price = (I_PRICE >= GEN_7) ? LEGENDARY_ITEM_COST : 10000,
        .holdEffect = HOLD_EFFECT_LUSTROUS_ORB,
        .holdEffectParam = 20,
        .description = COMPOUND_STRING(
            "Powers up Palkia's\n"
            "Dragon and Water-\n"
            "type moves."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_SPECIAL_HELD_ITEM,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 60,
        ITEM_ICON(LustrousOrb),
    },

    [ITEM_GRISEOUS_ORB] =
    {
        .name = ITEM_NAME("Griseous Orb"),
        .price = (I_PRICE >= GEN_7) ? LEGENDARY_ITEM_COST : 10000,
        .holdEffect = HOLD_EFFECT_GRISEOUS_ORB,
        .holdEffectParam = 20,
        .description = COMPOUND_STRING(
            "Boosts Giratina's\n"
            "Dragon and Ghost-\n"
            "type moves."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_SPECIAL_HELD_ITEM,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 60,
        ITEM_ICON(GriseousOrb),
    },

// Incenses
#define INCENSE_INFO                              \
    .pocket = POCKET_ITEMS,                       \
    .sortType = ITEM_TYPE_INCENSE,                \
    .type = ITEM_USE_BAG_MENU,                    \
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse, \
    .flingPower = 10


    [ITEM_SEA_INCENSE] =
    {
        .name = ITEM_NAME("Sea Incense"),
        .price = (I_PRICE >= GEN_7) ? 2000 : 9600,
        .holdEffect = HOLD_EFFECT_TYPE_POWER,
        .holdEffectParam = 20,
        .description = sSeaIncenseDesc,
        INCENSE_INFO,
        .secondaryId = TYPE_WATER,
        ITEM_ICON(SeaIncense),
    },

    [ITEM_LAX_INCENSE] =
    {
        .name = ITEM_NAME("Lax Incense"),
        .price = (I_PRICE >= GEN_7) ? 5000 : 9600,
        .holdEffect = HOLD_EFFECT_EVASION_UP,
        .holdEffectParam = 10,
        .description = COMPOUND_STRING(
            "A hold item that\n"
            "slightly lowers the\n"
            "foe's accuracy."),
        INCENSE_INFO,
        ITEM_ICON(LaxIncense),
    },

    [ITEM_ODD_INCENSE] =
    {
        .name = ITEM_NAME("Odd Incense"),
        .price = (I_PRICE >= GEN_7) ? 2000 : 9600,
        .holdEffect = HOLD_EFFECT_TYPE_POWER,
        .holdEffectParam = 20,
        .description = sOddIncenseDesc,
        INCENSE_INFO,
        .secondaryId = TYPE_PSYCHIC,
        ITEM_ICON(OddIncense),
    },

    [ITEM_ROCK_INCENSE] =
    {
        .name = ITEM_NAME("Rock Incense"),
        .price = (I_PRICE >= GEN_7) ? 2000 : 9600,
        .holdEffect = HOLD_EFFECT_TYPE_POWER,
        .holdEffectParam = 20,
        .description = sRockIncenseDesc,
        INCENSE_INFO,
        .secondaryId = TYPE_ROCK,
        ITEM_ICON(RockIncense),
    },

    [ITEM_FULL_INCENSE] =
    {
        .name = ITEM_NAME("Full Incense"),
        .price = (I_PRICE >= GEN_7) ? 5000 : 9600,
        .holdEffect = HOLD_EFFECT_LAGGING_TAIL,
        .holdEffectParam = 5,
        .description = sFullIncenseDesc,
        INCENSE_INFO,
        ITEM_ICON(FullIncense),
    },

    [ITEM_WAVE_INCENSE] =
    {
        .name = ITEM_NAME("Wave Incense"),
        .price = (I_PRICE >= GEN_7) ? 2000 : 9600,
        .holdEffect = HOLD_EFFECT_TYPE_POWER,
        .holdEffectParam = 20,
        .description = sSeaIncenseDesc,
        INCENSE_INFO,
        .secondaryId = TYPE_WATER,
        ITEM_ICON(WaveIncense),
    },

    [ITEM_ROSE_INCENSE] =
    {
        .name = ITEM_NAME("Rose Incense"),
        .price = (I_PRICE >= GEN_7) ? 2000 : 9600,
        .holdEffect = HOLD_EFFECT_TYPE_POWER,
        .holdEffectParam = 20,
        .description = sRoseIncenseDesc,
        INCENSE_INFO,
        .secondaryId = TYPE_GRASS,
        ITEM_ICON(RoseIncense),
    },

    [ITEM_LUCK_INCENSE] =
    {
        .name = ITEM_NAME("Luck Incense"),
        .price = (I_PRICE >= GEN_7) ? 11000 : 9600,
        .holdEffect = HOLD_EFFECT_DOUBLE_PRIZE,
        .description = sLuckIncenseDesc,
        INCENSE_INFO,
        ITEM_ICON(LuckIncense),
    },

    [ITEM_PURE_INCENSE] =
    {
        .name = ITEM_NAME("Pure Incense"),
        .price = (I_PRICE >= GEN_7) ? 6000 : 9600,
        .holdEffect = HOLD_EFFECT_REPEL,
        .description = sPureIncenseDesc,
        INCENSE_INFO,
        ITEM_ICON(PureIncense),
    },

// Contest Scarves
#define SCARF_INFO                                \
    .price = 100,                                 \
    .pocket = POCKET_ITEMS,                       \
    .sortType = ITEM_TYPE_CONTEST_HELD_ITEM,      \
    .type = ITEM_USE_BAG_MENU,                    \
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse, \
    .flingPower = 10,                             \
    .iconPic = gItemIcon_Scarf

    [ITEM_RED_SCARF] =
    {
        .name = ITEM_NAME("Red Scarf"),
        .pluralName = ITEM_PLURAL_NAME("Red Scarves"),
        .description = COMPOUND_STRING(
            "A hold item that\n"
            "raises Cool in\n"
            "Contests."),
        SCARF_INFO,
        .iconPalette = gItemIconPalette_RedScarf,
    },

    [ITEM_BLUE_SCARF] =
    {
        .name = ITEM_NAME("Blue Scarf"),
        .pluralName = ITEM_PLURAL_NAME("Blue Scarves"),
        .description = COMPOUND_STRING(
            "A hold item that\n"
            "raises Beauty in\n"
            "Contests."),
        SCARF_INFO,
        .iconPalette = gItemIconPalette_BlueScarf,
    },

    [ITEM_PINK_SCARF] =
    {
        .name = ITEM_NAME("Pink Scarf"),
        .pluralName = ITEM_PLURAL_NAME("Pink Scarves"),
        .description = COMPOUND_STRING(
            "A hold item that\n"
            "raises Cute in\n"
            "Contests."),
        SCARF_INFO,
        .iconPalette = gItemIconPalette_PinkScarf,
    },

    [ITEM_GREEN_SCARF] =
    {
        .name = ITEM_NAME("Green Scarf"),
        .pluralName = ITEM_PLURAL_NAME("Green Scarves"),
        .description = COMPOUND_STRING(
            "A hold item that\n"
            "raises Smart in\n"
            "Contests."),
        SCARF_INFO,
        .iconPalette = gItemIconPalette_GreenScarf,
    },

    [ITEM_YELLOW_SCARF] =
    {
        .name = ITEM_NAME("Yellow Scarf"),
        .pluralName = ITEM_PLURAL_NAME("Yellow Scarves"),
        .description = COMPOUND_STRING(
            "A hold item that\n"
            "raises Tough in\n"
            "Contests."),
        SCARF_INFO,
        .iconPalette = gItemIconPalette_YellowScarf,
    },

// EV Gain Modifiers

    [ITEM_MACHO_BRACE] =
    {
        .name = ITEM_NAME("Macho Brace"),
        .price = 3000,
        .holdEffect = HOLD_EFFECT_MACHO_BRACE,
        .description = COMPOUND_STRING(
            "A hold item that\n"
            "promotes growth,\n"
            "but reduces Speed."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_EV_BOOST_HELD_ITEM,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 60,
        ITEM_ICON(MachoBrace),
    },

#define POWER_ITEM_INFO                           \
    .price = (I_PRICE >= GEN_9) ? 10000 : 3000,   \
    .holdEffect = HOLD_EFFECT_POWER_ITEM,         \
    .holdEffectParam = POWER_ITEM_BOOST,          \
    .pocket = POCKET_ITEMS,                       \
    .sortType = ITEM_TYPE_EV_BOOST_HELD_ITEM,     \
    .type = ITEM_USE_BAG_MENU,                    \
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse, \
    .flingPower = 70

    [ITEM_POWER_WEIGHT] =
    {
        .name = ITEM_NAME("Power Weight"),
        POWER_ITEM_INFO,
        .description = COMPOUND_STRING(
            "A hold item that\n"
            "promotes HP gain,\n"
            "but reduces Speed."),
        .secondaryId = STAT_HP,
        ITEM_ICON(PowerWeight),
    },

    [ITEM_POWER_BRACER] =
    {
        .name = ITEM_NAME("Power Bracer"),
        POWER_ITEM_INFO,
        .description = COMPOUND_STRING(
            "A hold item that\n"
            "promotes Atk gain,\n"
            "but reduces Speed."),
        .secondaryId = STAT_ATK,
        ITEM_ICON(PowerBracer),
    },

    [ITEM_POWER_BELT] =
    {
        .name = ITEM_NAME("Power Belt"),
        POWER_ITEM_INFO,
        .description = COMPOUND_STRING(
            "A hold item that\n"
            "promotes Def gain,\n"
            "but reduces Speed."),
        .secondaryId = STAT_DEF,
        ITEM_ICON(PowerBelt),
    },

    [ITEM_POWER_LENS] =
    {
        .name = ITEM_NAME("Power Lens"),
        .pluralName = ITEM_PLURAL_NAME("Power Lenses"),
        POWER_ITEM_INFO,
        .description = COMPOUND_STRING(
            "Hold item that pro-\n"
            "motes Sp. Atk gain,\n"
            "but reduces Speed."),
        .secondaryId = STAT_SPATK,
        ITEM_ICON(PowerLens),
    },

    [ITEM_POWER_BAND] =
    {
        .name = ITEM_NAME("Power Band"),
        POWER_ITEM_INFO,
        .description = COMPOUND_STRING(
            "Hold item that pro-\n"
            "motes Sp. Def gain,\n"
            "but reduces Speed."),
        .secondaryId = STAT_SPDEF,
        ITEM_ICON(PowerBand),
    },

    [ITEM_POWER_ANKLET] =
    {
        .name = ITEM_NAME("Power Anklet"),
        POWER_ITEM_INFO,
        .description = COMPOUND_STRING(
            "A hold item that\n"
            "promotes Spd gain,\n"
            "but reduces Speed."),
        .secondaryId = STAT_SPEED,
        ITEM_ICON(PowerAnklet),
    },

// Type-boosting Held Items

#define TYPE_BOOST_INFO                   \
    .holdEffect = HOLD_EFFECT_TYPE_POWER, \
    .holdEffectParam = TYPE_BOOST_PARAM,  \
    .pocket = POCKET_ITEMS,               \
    .sortType = ITEM_TYPE_TYPE_BOOST_HELD_ITEM

    [ITEM_SILK_SCARF] =
    {
        .name = ITEM_NAME("Silk Scarf"),
        .pluralName = ITEM_PLURAL_NAME("Silk Scarves"),
        .price = (I_PRICE >= GEN_9) ? 3000 : ((I_PRICE >= GEN_7) ? 1000 : 100),
        TYPE_BOOST_INFO,
        .description = COMPOUND_STRING(
            "A hold item that\n"
            "raises the power of\n"
            "Normal-type moves."),
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_NORMAL,
        .flingPower = 10,
        ITEM_ICON(SilkScarf),
    },

    [ITEM_CHARCOAL] =
    {
        .name = ITEM_NAME("Charcoal"),
        .price = (I_PRICE >= GEN_9) ? 3000 : ((I_PRICE >= GEN_7) ? 1000 : 9800),
        TYPE_BOOST_INFO,
        .description = COMPOUND_STRING(
            "A hold item that\n"
            "raises the power of\n"
            "Fire-type moves."),
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_FIRE,
        .flingPower = 30,
        ITEM_ICON(Charcoal),
    },

    [ITEM_MYSTIC_WATER] =
    {
        .name = ITEM_NAME("Mystic Water"),
        .pluralName = ITEM_PLURAL_NAME("Mystic Water"),
        .price = (I_PRICE >= GEN_9) ? 3000 : ((I_PRICE >= GEN_7) ? 1000 : 100),
        TYPE_BOOST_INFO,
        .description = COMPOUND_STRING(
            "A hold item that\n"
            "raises the power of\n"
            "Water-type moves."),
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_WATER,
        .flingPower = 30,
        ITEM_ICON(MysticWater),
    },

    [ITEM_MAGNET] =
    {
        .name = ITEM_NAME("Magnet"),
        .price = (I_PRICE >= GEN_9) ? 3000 : ((I_PRICE >= GEN_7) ? 1000 : 100),
        TYPE_BOOST_INFO,
        .description = COMPOUND_STRING(
            "A hold item that\n"
            "boosts Electric-\n"
            "type moves."),
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_ELECTRIC,
        .flingPower = 30,
        ITEM_ICON(Magnet),
    },

    [ITEM_MIRACLE_SEED] =
    {
        .name = ITEM_NAME("Miracle Seed"),
        .price = (I_PRICE >= GEN_9) ? 3000 : ((I_PRICE >= GEN_7) ? 1000 : 100),
        TYPE_BOOST_INFO,
        .description = sRoseIncenseDesc,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_GRASS,
        .flingPower = 30,
        ITEM_ICON(MiracleSeed),
    },

    [ITEM_NEVER_MELT_ICE] =
    {
        .name = ITEM_NAME("Never-Melt Ice"),
        .pluralName = ITEM_PLURAL_NAME("Never-Melt Ice"),
        .price = (I_PRICE >= GEN_9) ? 3000 : ((I_PRICE >= GEN_7) ? 1000 : 100),
        TYPE_BOOST_INFO,
        .description = COMPOUND_STRING(
            "A hold item that\n"
            "raises the power of\n"
            "Ice-type moves."),
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_ICE,
        .flingPower = 30,
        ITEM_ICON(NeverMeltIce),
    },

    [ITEM_BLACK_BELT] =
    {
        .name = ITEM_NAME("Black Belt"),
        .price = (I_PRICE >= GEN_9) ? 3000 : ((I_PRICE >= GEN_7) ? 1000 : 100),
        TYPE_BOOST_INFO,
        .description = COMPOUND_STRING(
            "A hold item that\n"
            "boosts Fighting-\n"
            "type moves."),
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_FIGHTING,
        .flingPower = 30,
        .iconPic = gItemIcon_BlackBelt,
        .iconPalette = gItemIconPalette_BlackTypeEnhancingItem,
    },

    [ITEM_POISON_BARB] =
    {
        .name = ITEM_NAME("Poison Barb"),
        .price = (I_PRICE >= GEN_9) ? 3000 : ((I_PRICE >= GEN_7) ? 1000 : 100),
        TYPE_BOOST_INFO,
        .description = COMPOUND_STRING(
            "A hold item that\n"
            "raises the power of\n"
            "Poison-type moves."),
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_POISON,
        .flingPower = 70,
        ITEM_ICON(PoisonBarb),
    },

    [ITEM_SOFT_SAND] =
    {
        .name = ITEM_NAME("Soft Sand"),
        .pluralName = ITEM_PLURAL_NAME("Soft Sand"),
        .price = (I_PRICE >= GEN_9) ? 3000 : ((I_PRICE >= GEN_7) ? 1000 : 100),
        TYPE_BOOST_INFO,
        .description = COMPOUND_STRING(
            "A hold item that\n"
            "raises the power of\n"
            "Ground-type moves."),
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_GROUND,
        .flingPower = 10,
        ITEM_ICON(SoftSand),
    },

    [ITEM_SHARP_BEAK] =
    {
        .name = ITEM_NAME("Sharp Beak"),
        .price = (I_PRICE >= GEN_9) ? 3000 : ((I_PRICE >= GEN_7) ? 1000 : 100),
        TYPE_BOOST_INFO,
        .description = COMPOUND_STRING(
            "A hold item that\n"
            "raises the power of\n"
            "Flying-type moves."),
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_FLYING,
        .flingPower = 50,
        ITEM_ICON(SharpBeak),
    },

    [ITEM_TWISTED_SPOON] =
    {
        .name = ITEM_NAME("Twisted Spoon"),
        .price = (I_PRICE >= GEN_9) ? 3000 : ((I_PRICE >= GEN_7) ? 1000 : 100),
        TYPE_BOOST_INFO,
        .description = sOddIncenseDesc,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_PSYCHIC,
        .flingPower = 30,
        ITEM_ICON(TwistedSpoon),
    },

    [ITEM_SILVER_POWDER] =
    {
        .name = ITEM_NAME("Silver Powder"),
        .pluralName = ITEM_PLURAL_NAME("Silver Powder"),
        .price = (I_PRICE >= GEN_9) ? 3000 : ((I_PRICE >= GEN_7) ? 1000 : 100),
        TYPE_BOOST_INFO,
        .description = COMPOUND_STRING(
            "A hold item that\n"
            "raises the power of\n"
            "Bug-type moves."),
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_BUG,
        .flingPower = 10,
        ITEM_ICON(SilverPowder),
    },

    [ITEM_HARD_STONE] =
    {
        .name = ITEM_NAME("Hard Stone"),
        .price = (I_PRICE >= GEN_9) ? 3000 : ((I_PRICE >= GEN_7) ? 1000 : 100),
        TYPE_BOOST_INFO,
        .description = sRockIncenseDesc,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_ROCK,
        .flingPower = 100,
        ITEM_ICON(HardStone),
    },

    [ITEM_SPELL_TAG] =
    {
        .name = ITEM_NAME("Spell Tag"),
        .price = (I_PRICE >= GEN_9) ? 3000 : ((I_PRICE >= GEN_7) ? 1000 : 100),
        TYPE_BOOST_INFO,
        .description = COMPOUND_STRING(
            "A hold item that\n"
            "raises the power of\n"
            "Ghost-type moves."),
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_GHOST,
        .flingPower = 30,
        ITEM_ICON(SpellTag),
    },

    [ITEM_DRAGON_FANG] =
    {
        .name = ITEM_NAME("Dragon Fang"),
        .price = (I_PRICE >= GEN_9) ? 3000 : ((I_PRICE >= GEN_7) ? 1000 : 100),
        TYPE_BOOST_INFO,
        .description = COMPOUND_STRING(
            "A hold item that\n"
            "raises the power of\n"
            "Dragon-type moves."),
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_DRAGON,
        .flingPower = 70,
        ITEM_ICON(DragonFang),
    },

    [ITEM_BLACK_GLASSES] =
    {
        .name = ITEM_NAME("Black Glasses"),
        .pluralName = ITEM_PLURAL_NAME("Black Glasses"),
        .price = (I_PRICE >= GEN_9) ? 3000 : ((I_PRICE >= GEN_7) ? 1000 : 100),
        TYPE_BOOST_INFO,
        .description = COMPOUND_STRING(
            "A hold item that\n"
            "raises the power of\n"
            "Dark-type moves."),
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_DARK,
        .flingPower = 30,
        .iconPic = gItemIcon_BlackGlasses,
        .iconPalette = gItemIconPalette_BlackTypeEnhancingItem,
    },

    [ITEM_METAL_COAT] =
    {
        .name = ITEM_NAME("Metal Coat"),
        .price = (I_PRICE >= GEN_9) ? 3000 : ((I_PRICE >= GEN_7) ? EVO_ITEM_PRICE : 100),
        TYPE_BOOST_INFO,
        .description = COMPOUND_STRING(
            "A hold item that\n"
            "raises the power of\n"
            "Steel-type moves."),
        .type = EVO_HELD_ITEM_TYPE,
        .fieldUseFunc = EVO_HELD_ITEM_FIELD_FUNC,
        .effect = gItemEffect_EvoItem,
        .secondaryId = TYPE_STEEL,
        .flingPower = 30,
        ITEM_ICON(MetalCoat),
    },

// Choice Items

    [ITEM_CHOICE_BAND] =
    {
        .name = ITEM_NAME("Choice Band"),
        .price = (I_PRICE >= GEN_9) ? 4000 : ((I_PRICE >= GEN_7) ? 4000 : 100),
        .holdEffect = HOLD_EFFECT_CHOICE_BAND,
        .description = COMPOUND_STRING(
            "Boosts Attack, but\n"
            "allows the use of\n"
            "only one move."),
        HELD_ITEM_INFO,
        .flingPower = 10,
        ITEM_ICON(ChoiceBand),
    },

    [ITEM_CHOICE_SPECS] =
    {
        .name = ITEM_NAME("Choice Specs"),
        .pluralName = ITEM_PLURAL_NAME("Choice Specs"),
        .price = (I_PRICE >= GEN_9) ? 4000 : ((I_PRICE >= GEN_7) ? 4000 : 100),
        .holdEffect = HOLD_EFFECT_CHOICE_SPECS,
        .description = COMPOUND_STRING(
            "Boosts Sp. Atk, but\n"
            "allows the use of\n"
            "only one move."),
        HELD_ITEM_INFO,
        .flingPower = 10,
        ITEM_ICON(ChoiceSpecs),
    },

    [ITEM_CHOICE_SCARF] =
    {
        .name = ITEM_NAME("Choice Scarf"),
        .pluralName = ITEM_PLURAL_NAME("Choice Scarves"),
        .price = (I_PRICE >= GEN_9) ? 4000 : ((I_PRICE >= GEN_7) ? 4000 : 100),
        .holdEffect = HOLD_EFFECT_CHOICE_SCARF,
        .description = COMPOUND_STRING(
            "Boosts Speed, but\n"
            "allows the use of\n"
            "only one move."),
        HELD_ITEM_INFO,
        .flingPower = 10,
        ITEM_ICON(ChoiceScarf),
    },

// Status Orbs

    [ITEM_FLAME_ORB] =
    {
        .name = ITEM_NAME("Flame Orb"),
        .price = (I_PRICE >= GEN_9) ? 4000 : ((I_PRICE >= GEN_7) ? 4000 : 200),
        .holdEffect = HOLD_EFFECT_FLAME_ORB,
        .description = COMPOUND_STRING(
            "A bizarre orb that\n"
            "inflicts a burn on\n"
            "holder in battle."),
        HELD_ITEM_INFO,
        .flingPower = 30,
        ITEM_ICON(FlameOrb),
    },

    [ITEM_TOXIC_ORB] =
    {
        .name = ITEM_NAME("Toxic Orb"),
        .price = (I_PRICE >= GEN_9) ? 4000 : ((I_PRICE >= GEN_7) ? 4000 : 200),
        .holdEffect = HOLD_EFFECT_TOXIC_ORB,
        .description = COMPOUND_STRING(
            "A bizarre orb that\n"
            "badly poisons the\n"
            "holder in battle."),
        HELD_ITEM_INFO,
        .flingPower = 30,
        ITEM_ICON(ToxicOrb),
    },

// Weather Rocks

    [ITEM_DAMP_ROCK] =
    {
        .name = ITEM_NAME("Damp Rock"),
        .price = (I_PRICE >= GEN_9) ? 8000 : ((I_PRICE >= GEN_7) ? 4000 : 200),
        .holdEffect = HOLD_EFFECT_DAMP_ROCK,
        .description = COMPOUND_STRING(
            "Extends the length\n"
            "of Rain Dance if\n"
            "used by the holder."),
        HELD_ITEM_INFO,
        .flingPower = 60,
        ITEM_ICON(DampRock),
    },

    [ITEM_HEAT_ROCK] =
    {
        .name = ITEM_NAME("Heat Rock"),
        .price = (I_PRICE >= GEN_9) ? 8000 : ((I_PRICE >= GEN_7) ? 4000 : 200),
        .holdEffect = HOLD_EFFECT_HEAT_ROCK,
        .description = COMPOUND_STRING(
            "Extends the length\n"
            "of Sunny Day if\n"
            "used by the holder."),
        HELD_ITEM_INFO,
        .flingPower = 60,
        ITEM_ICON(HeatRock),
    },

    [ITEM_SMOOTH_ROCK] =
    {
        .name = ITEM_NAME("Smooth Rock"),
        .price = (I_PRICE >= GEN_9) ? 8000 : ((I_PRICE >= GEN_7) ? 4000 : 200),
        .holdEffect = HOLD_EFFECT_SMOOTH_ROCK,
        .description = COMPOUND_STRING(
            "Extends the length\n"
            "of Sandstorm if\n"
            "used by the holder."),
        HELD_ITEM_INFO,
        .flingPower = 10,
        ITEM_ICON(SmoothRock),
    },

    [ITEM_ICY_ROCK] =
    {
        .name = ITEM_NAME("Icy Rock"),
        .price = (I_PRICE >= GEN_9) ? 8000 : ((I_PRICE >= GEN_7) ? 4000 : 200),
        .holdEffect = HOLD_EFFECT_ICY_ROCK,
        #if B_PREFERRED_ICE_WEATHER == B_ICE_WEATHER_HAIL
        .description = COMPOUND_STRING(
            "Extends the length\n"
            "of the move Hail\n"
            "used by the holder."),
        #elif B_PREFERRED_ICE_WEATHER == B_ICE_WEATHER_SNOW
        .description = COMPOUND_STRING(
            "Extends the length\n"
            "of Snowscape if\n"
            "used by the holder."),
        #else
        .description = COMPOUND_STRING(
            "Extends the length\n"
            "of cold weathers\n"
            "used by the holder."),
        #endif
        HELD_ITEM_INFO,
        .flingPower = 40,
        ITEM_ICON(IcyRock),
    },

// Terrain Seeds
#define TERRAIN_SEED_INFO                       \
    .price = (I_PRICE >= GEN_9) ? 20000 : 4000, \
    .holdEffect = HOLD_EFFECT_TERRAIN_SEED,     \
    HELD_ITEM_INFO,                             \
    .flingPower = 10

    [ITEM_ELECTRIC_SEED] =
    {
        .name = ITEM_NAME("Electric Seed"),
        TERRAIN_SEED_INFO,
        .holdEffectParam = HOLD_EFFECT_PARAM_ELECTRIC_TERRAIN,
        .description = COMPOUND_STRING(
            "Boosts Defense on\n"
            "Electric Terrain,\n"
            "but only one time."),
        ITEM_ICON(ElectricSeed),
    },

    [ITEM_PSYCHIC_SEED] =
    {
        .name = ITEM_NAME("Psychic Seed"),
        TERRAIN_SEED_INFO,
        .holdEffectParam = HOLD_EFFECT_PARAM_PSYCHIC_TERRAIN,
        .description = COMPOUND_STRING(
            "Boosts Sp. Def. on\n"
            "Psychic Terrain,\n"
            "but only one time."),
        ITEM_ICON(PsychicSeed),
    },

    [ITEM_MISTY_SEED] =
    {
        .name = ITEM_NAME("Misty Seed"),
        TERRAIN_SEED_INFO,
        .holdEffectParam = HOLD_EFFECT_PARAM_MISTY_TERRAIN,
        .description = COMPOUND_STRING(
            "Boosts Sp. Def. on\n"
            "Misty Terrain,\n"
            "but only one time."),
        ITEM_ICON(MistySeed),
    },

    [ITEM_GRASSY_SEED] =
    {
        .name = ITEM_NAME("Grassy Seed"),
        TERRAIN_SEED_INFO,
        .holdEffectParam = HOLD_EFFECT_PARAM_GRASSY_TERRAIN,
        .description = COMPOUND_STRING(
            "Boosts Defense on\n"
            "Grassy Terrain,\n"
            "but only one time."),
        ITEM_ICON(GrassySeed),
    },

// Type-activated Stat Modifiers

    [ITEM_ABSORB_BULB] =
    {
        .name = ITEM_NAME("Absorb Bulb"),
        .price = (I_PRICE >= GEN_9) ? 5000 : ((I_PRICE >= GEN_7) ? 4000 : 200),
        .holdEffect = HOLD_EFFECT_ABSORB_BULB,
        .holdEffectParam = 0,
        .description = COMPOUND_STRING(
            "Raises Sp. Atk if\n"
            "the holder is hit by\n"
            "a Water-type move."),
        HELD_ITEM_INFO,
        .flingPower = 30,
        ITEM_ICON(AbsorbBulb),
    },

    [ITEM_CELL_BATTERY] =
    {
        .name = ITEM_NAME("Cell Battery"),
        .pluralName = ITEM_PLURAL_NAME("Cell Batteries"),
        .price = (I_PRICE >= GEN_9) ? 5000 : ((I_PRICE >= GEN_7) ? 4000 : 200),
        .holdEffect = HOLD_EFFECT_CELL_BATTERY,
        .holdEffectParam = 0,
        .description = COMPOUND_STRING(
            "Raises Attack if\n"
            "the holder is hit by\n"
            "an Electric move."),
        HELD_ITEM_INFO,
        .flingPower = 30,
        ITEM_ICON(CellBattery),
    },

    [ITEM_LUMINOUS_MOSS] =
    {
        .name = ITEM_NAME("Luminous Moss"),
        .pluralName = ITEM_PLURAL_NAME("Luminous Moss"),
        .price = (I_PRICE >= GEN_9) ? 5000 : ((I_PRICE >= GEN_7) ? 4000 : 1000),
        .holdEffect = HOLD_EFFECT_LUMINOUS_MOSS,
        .holdEffectParam = 0,
        .description = COMPOUND_STRING(
            "Raises Sp. Def if\n"
            "the holder is hit by\n"
            "a Water-type move."),
        HELD_ITEM_INFO,
        .flingPower = 30,
        ITEM_ICON(LuminousMoss),
    },

    [ITEM_SNOWBALL] =
    {
        .name = ITEM_NAME("Snowball"),
        .price = (I_PRICE >= GEN_9) ? 5000 : ((I_PRICE >= GEN_7) ? 4000 : 200),
        .holdEffect = HOLD_EFFECT_SNOWBALL,
        .holdEffectParam = 0,
        .description = COMPOUND_STRING(
            "Raises Atk if its\n"
            "holder is hit by an\n"
            "Ice-type move."),
        HELD_ITEM_INFO,
        .flingPower = 30,
        ITEM_ICON(Snowball),
    },

// Misc. Held Items

    [ITEM_BRIGHT_POWDER] =
    {
        .name = ITEM_NAME("Bright Powder"),
        .pluralName = ITEM_PLURAL_NAME("Bright Powder"),
        .price = (I_PRICE >= GEN_9) ? 30000 : ((I_PRICE >= GEN_7) ? 4000 : 10),
        .holdEffect = HOLD_EFFECT_EVASION_UP,
        .holdEffectParam = 10,
        .description = COMPOUND_STRING(
            "A hold item that\n"
            "casts a glare to\n"
            "reduce accuracy."),
        HELD_ITEM_INFO,
        .flingPower = 10,
        ITEM_ICON(BrightPowder),
    },

    [ITEM_WHITE_HERB] =
    {
        .name = ITEM_NAME("White Herb"),
        .price = (I_PRICE >= GEN_9) ? 20000 : ((I_PRICE >= GEN_7) ? 4000 : 100),
        .holdEffect = HOLD_EFFECT_WHITE_HERB,
        .description = COMPOUND_STRING(
            "A hold item that\n"
            "restores any\n"
            "lowered stat."),
        HELD_ITEM_INFO,
        .flingPower = 10,
        .iconPic = gItemIcon_InBattleHerb,
        .iconPalette = gItemIconPalette_WhiteHerb,
    },

    [ITEM_EXP_SHARE] =
    {
        .name = ITEM_NAME("Exp. Share"),
        .holdEffect = HOLD_EFFECT_EXP_SHARE,
        #if I_EXP_SHARE_ITEM >= GEN_6
            .price = 0,
            .description = COMPOUND_STRING(
                "This device gives\n"
                "exp. to other\n"
                "party members."),
        #else
            .price = 3000,
            .description = COMPOUND_STRING(
                "A hold item that\n"
                "gets Exp. points\n"
                "from battles."),
        #endif
        .pocket = I_EXP_SHARE_ITEM >= GEN_6 ? POCKET_KEY_ITEMS : POCKET_ITEMS,
        .sortType = ITEM_TYPE_HELD_ITEM,
        .type = ITEM_USE_FIELD,
        .fieldUseFunc = ItemUseOutOfBattle_ExpShare,
        .flingPower = 30,
        ITEM_ICON(ExpShare),
    },

    [ITEM_QUICK_CLAW] =
    {
        .name = ITEM_NAME("Quick Claw"),
        .price = (I_PRICE >= GEN_9) ? 8000 : ((I_PRICE >= GEN_7) ? 4000 : 100),
        .holdEffect = HOLD_EFFECT_QUICK_CLAW,
        .holdEffectParam = 20,
        .description = COMPOUND_STRING(
            "A hold item that\n"
            "occasionally allows\n"
            "the first strike."),
        HELD_ITEM_INFO,
        .flingPower = 80,
        ITEM_ICON(QuickClaw),
    },

    [ITEM_SOOTHE_BELL] =
    {
        .name = ITEM_NAME("Soothe Bell"),
        .price = (I_PRICE >= GEN_9) ? 4000 : ((I_PRICE >= GEN_7) ? 4000 : 100),
        .holdEffect = HOLD_EFFECT_FRIENDSHIP_UP,
        .description = COMPOUND_STRING(
            "A hold item that\n"
            "calms spirits and\n"
            "fosters friendship."),
        HELD_ITEM_INFO,
        .flingPower = 10,
        ITEM_ICON(SootheBell),
    },

    [ITEM_MENTAL_HERB] =
    {
        .name = ITEM_NAME("Mental Herb"),
        .price = (I_PRICE >= GEN_9) ? 10000 : ((I_PRICE >= GEN_7) ? 4000 : 100),
        .holdEffect = HOLD_EFFECT_MENTAL_HERB,
        .description = COMPOUND_STRING(
        #if B_MENTAL_HERB >= GEN_5
            "Snaps Pokémon out\n"
            "of move-binding\n"
            "effects."),
        #else
            "A hold item that\n"
            "snaps Pokémon out\n"
            "of infatuation."),
        #endif
        HELD_ITEM_INFO,
        .flingPower = 10,
        .iconPic = gItemIcon_InBattleHerb,
        .iconPalette = gItemIconPalette_MentalHerb,
    },

    [ITEM_KINGS_ROCK] =
    {
        .name = ITEM_NAME("King's Rock"),
        .price = (I_PRICE >= GEN_9) ? EVO_ITEM_PRICE : ((I_PRICE >= GEN_7) ? 5000 : 100),
        .holdEffect = HOLD_EFFECT_FLINCH,
        .holdEffectParam = 10,
        .description = sKingsRockDesc,
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_HELD_ITEM,
        .type = EVO_HELD_ITEM_TYPE,
        .fieldUseFunc = EVO_HELD_ITEM_FIELD_FUNC,
        .effect = gItemEffect_EvoItem,
        .flingPower = 30,
        ITEM_ICON(KingsRock),
    },

    [ITEM_AMULET_COIN] =
    {
        .name = ITEM_NAME("Amulet Coin"),
        .price = (I_PRICE >= GEN_9) ? 30000 : ((I_PRICE >= GEN_7) ? 10000 : 100),
        .holdEffect = HOLD_EFFECT_DOUBLE_PRIZE,
        .description = sLuckIncenseDesc,
        HELD_ITEM_INFO,
        .flingPower = 30,
        ITEM_ICON(AmuletCoin),
    },

    [ITEM_CLEANSE_TAG] =
    {
        .name = ITEM_NAME("Cleanse Tag"),
        .price = (I_PRICE >= GEN_7) ? 5000 : 200,
        .holdEffect = HOLD_EFFECT_REPEL,
        .description = sPureIncenseDesc,
        HELD_ITEM_INFO,
        .flingPower = 30,
        ITEM_ICON(CleanseTag),
    },

    [ITEM_SMOKE_BALL] =
    {
        .name = ITEM_NAME("Smoke Ball"),
        .price = (I_PRICE >= GEN_9) ? 4000 : ((I_PRICE >= GEN_7) ? 4000 : 200),
        .holdEffect = HOLD_EFFECT_CAN_ALWAYS_RUN,
        .description = COMPOUND_STRING(
            "A hold item that\n"
            "assures fleeing\n"
            "from wild Pokémon."),
        HELD_ITEM_INFO,
        .flingPower = 30,
        ITEM_ICON(SmokeBall),
    },

    [ITEM_FOCUS_BAND] =
    {
        .name = ITEM_NAME("Focus Band"),
        .price = (I_PRICE >= GEN_9) ? 10000 : ((I_PRICE >= GEN_7) ? 4000 : 200),
        .holdEffect = HOLD_EFFECT_FOCUS_BAND,
        .holdEffectParam = 10,
        .description = COMPOUND_STRING(
            "A hold item that\n"
            "occasionally\n"
            "prevents fainting."),
        HELD_ITEM_INFO,
        .flingPower = 10,
        ITEM_ICON(FocusBand),
    },

    [ITEM_LUCKY_EGG] =
    {
        .name = ITEM_NAME("Lucky Egg"),
        .price = (I_PRICE >= GEN_7) ? 10000 : 200,
        .holdEffect = HOLD_EFFECT_LUCKY_EGG,
        .description = COMPOUND_STRING(
            "A hold item that\n"
            "boosts Exp. points\n"
            "earned in battle."),
        HELD_ITEM_INFO,
        .flingPower = 30,
        ITEM_ICON(LuckyEgg),
    },

    [ITEM_SCOPE_LENS] =
    {
        .name = ITEM_NAME("Scope Lens"),
        .pluralName = ITEM_PLURAL_NAME("Scope Lenses"),
        .price = (I_PRICE >= GEN_9) ? 4000 : ((I_PRICE >= GEN_7) ? 4000 : 100),
        .holdEffect = HOLD_EFFECT_SCOPE_LENS,
        .description = COMPOUND_STRING(
            "A hold item that\n"
            "improves the\n"
            "critical-hit rate."),
        HELD_ITEM_INFO,
        .flingPower = 30,
        ITEM_ICON(ScopeLens),
    },

    [ITEM_LEFTOVERS] =
    {
        .name = ITEM_NAME("Leftovers"),
        .pluralName = ITEM_PLURAL_NAME("Leftovers"),
        .price = (I_PRICE >= GEN_9) ? 4000 : ((I_PRICE >= GEN_7) ? 4000 : 200),
        .holdEffect = HOLD_EFFECT_LEFTOVERS,
        .holdEffectParam = 10,
        .description = COMPOUND_STRING(
            "A hold item that\n"
            "gradually restores\n"
            "HP in battle."),
        HELD_ITEM_INFO,
        .flingPower = 10,
        ITEM_ICON(Leftovers),
    },

    [ITEM_SHELL_BELL] =
    {
        .name = ITEM_NAME("Shell Bell"),
        .price = (I_PRICE >= GEN_9) ? 4000 : ((I_PRICE >= GEN_7) ? 4000 : 200),
        .holdEffect = HOLD_EFFECT_SHELL_BELL,
        .holdEffectParam = 8,
        .description = COMPOUND_STRING(
            "A hold item that\n"
            "restores HP upon\n"
            "striking the foe."),
        HELD_ITEM_INFO,
        .flingPower = 30,
        .iconPic = gItemIcon_ShellBell,
        .iconPalette = gItemIconPalette_Shell,
    },

    [ITEM_WIDE_LENS] =
    {
        .name = ITEM_NAME("Wide Lens"),
        .pluralName = ITEM_PLURAL_NAME("Wide Lenses"),
        .price = (I_PRICE >= GEN_9) ? 4000 : ((I_PRICE >= GEN_7) ? 4000 : 200),
        .holdEffect = HOLD_EFFECT_WIDE_LENS,
        .holdEffectParam = 10,
        .description = COMPOUND_STRING(
            "A magnifying lens\n"
            "that boosts the\n"
            "accuracy of moves."),
        HELD_ITEM_INFO,
        .flingPower = 10,
        ITEM_ICON(WideLens),
    },

    [ITEM_MUSCLE_BAND] =
    {
        .name = ITEM_NAME("Muscle Band"),
        .price = (I_PRICE >= GEN_9) ? 8000 : ((I_PRICE >= GEN_7) ? 4000 : 200),
        .holdEffect = HOLD_EFFECT_MUSCLE_BAND,
        .holdEffectParam = 10,
        .description = COMPOUND_STRING(
            "A headband that\n"
            "boosts the power\n"
            "of physical moves."),
        HELD_ITEM_INFO,
        .flingPower = 10,
        ITEM_ICON(MuscleBand),
    },

    [ITEM_WISE_GLASSES] =
    {
        .name = ITEM_NAME("Wise Glasses"),
        .pluralName = ITEM_PLURAL_NAME("Wise Glasses"),
        .price = (I_PRICE >= GEN_9) ? 8000 : ((I_PRICE >= GEN_7) ? 4000 : 200),
        .holdEffect = HOLD_EFFECT_WISE_GLASSES,
        .holdEffectParam = 10,
        .description = COMPOUND_STRING(
            "A pair of glasses\n"
            "that ups the power\n"
            "of special moves."),
        HELD_ITEM_INFO,
        .flingPower = 10,
        ITEM_ICON(WiseGlasses),
    },

    [ITEM_EXPERT_BELT] =
    {
        .name = ITEM_NAME("Expert Belt"),
        .price = (I_PRICE >= GEN_9) ? 30000 : ((I_PRICE >= GEN_7) ? 4000 : 200),
        .holdEffect = HOLD_EFFECT_EXPERT_BELT,
        .holdEffectParam = 20,
        .description = COMPOUND_STRING(
            "A belt that boosts\n"
            "the power of super\n"
            "effective moves."),
        HELD_ITEM_INFO,
        .flingPower = 10,
        ITEM_ICON(ExpertBelt),
    },

    [ITEM_LIGHT_CLAY] =
    {
        .name = ITEM_NAME("Light Clay"),
        .pluralName = ITEM_PLURAL_NAME("Light Clay"),
        .price = (I_PRICE >= GEN_9) ? 20000 : ((I_PRICE >= GEN_7) ? 4000 : 200),
        .holdEffect = HOLD_EFFECT_LIGHT_CLAY,
        .description = COMPOUND_STRING(
            "Extends the length\n"
            "of barrier moves\n"
            "used by the holder."),
        HELD_ITEM_INFO,
        .flingPower = 30,
        ITEM_ICON(LightClay),
    },

    [ITEM_LIFE_ORB] =
    {
        .name = ITEM_NAME("Life Orb"),
        .price = (I_PRICE >= GEN_9) ? 50000 : ((I_PRICE >= GEN_7) ? 4000 : 200),
        .holdEffect = HOLD_EFFECT_LIFE_ORB,
        .description = COMPOUND_STRING(
            "Boosts move power\n"
            "but holder loses HP\n"
            "with each attack."),
        HELD_ITEM_INFO,
        .flingPower = 30,
        ITEM_ICON(LifeOrb),
    },

    [ITEM_POWER_HERB] =
    {
        .name = ITEM_NAME("Power Herb"),
        .price = (I_PRICE >= GEN_9) ? 30000 : ((I_PRICE >= GEN_7) ? 4000 : 100),
        .holdEffect = HOLD_EFFECT_POWER_HERB,
        .description = COMPOUND_STRING(
            "Allows immediate\n"
            "use of a move that\n"
            "charges first."),
        HELD_ITEM_INFO,
        .flingPower = 10,
        ITEM_ICON(PowerHerb),
    },

    [ITEM_FOCUS_SASH] =
    {
        .name = ITEM_NAME("Focus Sash"),
        .pluralName = ITEM_PLURAL_NAME("Focus Sashes"),
        .price = (I_PRICE >= GEN_9) ? 50000 : ((I_PRICE >= GEN_7) ? 4000 : 200),
        .holdEffect = HOLD_EFFECT_FOCUS_SASH,
        .description = COMPOUND_STRING(
            "If the holder has\n"
            "full HP, it endures\n"
            "KO hits with 1 HP."),
        HELD_ITEM_INFO,
        .flingPower = 10,
        ITEM_ICON(FocusSash),
    },

    [ITEM_ZOOM_LENS] =
    {
        .name = ITEM_NAME("Zoom Lens"),
        .pluralName = ITEM_PLURAL_NAME("Zoom Lenses"),
        .price = (I_PRICE >= GEN_9) ? 4000 : ((I_PRICE >= GEN_7) ? 4000 : 200),
        .holdEffect = HOLD_EFFECT_ZOOM_LENS,
        .holdEffectParam = 20,
        .description = COMPOUND_STRING(
            "If the holder moves\n"
            "after the foe, it'll\n"
            "boost accuracy."),
        HELD_ITEM_INFO,
        .flingPower = 10,
        ITEM_ICON(ZoomLens),
    },

    [ITEM_METRONOME] =
    {
        .name = ITEM_NAME("Metronome"),
        .price = (I_PRICE >= GEN_9) ? 4000 : ((I_PRICE >= GEN_7) ? 4000 : 200),
        .holdEffect = HOLD_EFFECT_METRONOME,
        .holdEffectParam = 20,
        .description = COMPOUND_STRING(
            "A held item that\n"
            "boosts a move used\n"
            "consecutively."),
        HELD_ITEM_INFO,
        .flingPower = 30,
        ITEM_ICON(Metronome),
    },

    [ITEM_IRON_BALL] =
    {
        .name = ITEM_NAME("Iron Ball"),
        .price = (I_PRICE >= GEN_9) ? 20000 : ((I_PRICE >= GEN_7) ? 4000 : 200),
        .holdEffect = HOLD_EFFECT_IRON_BALL,
        .description = COMPOUND_STRING(
            "Cuts Speed and\n"
            "becomes vulnerable\n"
            "to Ground moves."),
        HELD_ITEM_INFO,
        .flingPower = 130,
        ITEM_ICON(IronBall),
    },

    [ITEM_LAGGING_TAIL] =
    {
        .name = ITEM_NAME("Lagging Tail"),
        .price = (I_PRICE >= GEN_9) ? 20000 : ((I_PRICE >= GEN_7) ? 4000 : 200),
        .holdEffect = HOLD_EFFECT_LAGGING_TAIL,
        .description = sFullIncenseDesc,
        HELD_ITEM_INFO,
        .flingPower = 10,
        ITEM_ICON(LaggingTail),
    },

    [ITEM_DESTINY_KNOT] =
    {
        .name = ITEM_NAME("Destiny Knot"),
        .price = (I_PRICE >= GEN_9) ? 4000 : ((I_PRICE >= GEN_7) ? 4000 : 200),
        .holdEffect = HOLD_EFFECT_DESTINY_KNOT,
        .description = COMPOUND_STRING(
            "If the holder falls\n"
            "in love, the foe\n"
            "does too."),
        HELD_ITEM_INFO,
        .flingPower = 10,
        ITEM_ICON(DestinyKnot),
    },

    [ITEM_BLACK_SLUDGE] =
    {
        .name = ITEM_NAME("Black Sludge"),
        .pluralName = ITEM_PLURAL_NAME("Black Sludge"),
        .price = (I_PRICE >= GEN_9) ? 4000 : ((I_PRICE >= GEN_7) ? 4000 : 200),
        .holdEffect = HOLD_EFFECT_BLACK_SLUDGE,
        .description = COMPOUND_STRING(
            "Restores HP for\n"
            "Poison-types.\n"
            "Damages all others."),
        HELD_ITEM_INFO,
        .flingPower = 30,
        ITEM_ICON(BlackSludge),
    },

    [ITEM_GRIP_CLAW] =
    {
        .name = ITEM_NAME("Grip Claw"),
        .price = (I_PRICE >= GEN_9) ? 10000 : ((I_PRICE >= GEN_7) ? 4000 : 200),
        .holdEffect = HOLD_EFFECT_GRIP_CLAW,
        .description = COMPOUND_STRING(
            "A held item that\n"
            "extends binding\n"
            "moves like Wrap."),
        HELD_ITEM_INFO,
        .flingPower = 90,
        ITEM_ICON(GripClaw),
    },

    [ITEM_STICKY_BARB] =
    {
        .name = ITEM_NAME("Sticky Barb"),
        .price = (I_PRICE >= GEN_9) ? 10000 : ((I_PRICE >= GEN_7) ? 4000 : 200),
        .holdEffect = HOLD_EFFECT_STICKY_BARB,
        .description = COMPOUND_STRING(
            "Damages the holder\n"
            "each turn. May\n"
            "latch on to foes."),
        HELD_ITEM_INFO,
        .flingPower = 80,
        ITEM_ICON(StickyBarb),
    },

    [ITEM_SHED_SHELL] =
    {
        .name = ITEM_NAME("Shed Shell"),
        .price = (I_PRICE >= GEN_9) ? 20000 : ((I_PRICE >= GEN_7) ? 4000 : 100),
        .holdEffect = HOLD_EFFECT_SHED_SHELL,
        .description = COMPOUND_STRING(
            "Allows the holder\n"
            "to switch out\n"
            "without fail."),
        HELD_ITEM_INFO,
        .flingPower = 10,
        ITEM_ICON(ShedShell),
    },

    [ITEM_BIG_ROOT] =
    {
        .name = ITEM_NAME("Big Root"),
        .price = (I_PRICE >= GEN_9) ? 4000 : ((I_PRICE >= GEN_7) ? 4000 : 200),
        .holdEffect = HOLD_EFFECT_BIG_ROOT,
        .holdEffectParam = 30,
        .description = COMPOUND_STRING(
            "A held item that\n"
            "ups the power of\n"
            "HP-stealing moves."),
        HELD_ITEM_INFO,
        .flingPower = 10,
        ITEM_ICON(BigRoot),
    },

    [ITEM_RAZOR_CLAW] =
    {
        .name = ITEM_NAME("Razor Claw"),
        .price = (I_PRICE >= GEN_9) ? EVO_ITEM_PRICE : ((I_PRICE >= GEN_7) ? 5000 : 2100),
        .holdEffect = HOLD_EFFECT_SCOPE_LENS,
        .description = COMPOUND_STRING(
            "A hooked claw that\n"
            "ups the holder's\n"
            "critical-hit ratio."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_HELD_ITEM,
        .type = EVO_HELD_ITEM_TYPE,
        .fieldUseFunc = EVO_HELD_ITEM_FIELD_FUNC,
        .effect = gItemEffect_EvoItem,
        .flingPower = 80,
        ITEM_ICON(RazorClaw),
    },

    [ITEM_RAZOR_FANG] =
    {
        .name = ITEM_NAME("Razor Fang"),
        .price = (I_PRICE >= GEN_9) ? EVO_ITEM_PRICE : ((I_PRICE >= GEN_7) ? 5000 : 2100),
        .holdEffect = HOLD_EFFECT_FLINCH,
        .holdEffectParam = 10,
        .description = sKingsRockDesc,
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_HELD_ITEM,
        .type = EVO_HELD_ITEM_TYPE,
        .fieldUseFunc = EVO_HELD_ITEM_FIELD_FUNC,
        .effect = gItemEffect_EvoItem,
        .flingPower = 30,
        ITEM_ICON(RazorFang),
    },

    [ITEM_EVIOLITE] =
    {
        .name = ITEM_NAME("Eviolite"),
        .price = (I_PRICE >= GEN_9) ? 4000 : ((I_PRICE >= GEN_7) ? 4000 : 200),
        .holdEffect = HOLD_EFFECT_EVIOLITE,
        .holdEffectParam = 50,
        .description = COMPOUND_STRING(
            "Raises the Def and\n"
            "Sp. Def of Pokémon\n"
            "that can evolve."),
        HELD_ITEM_INFO,
        .flingPower = 40,
        ITEM_ICON(Eviolite),
    },

    [ITEM_FLOAT_STONE] =
    {
        .name = ITEM_NAME("Float Stone"),
        .price = (I_PRICE >= GEN_9) ? 10000 : ((I_PRICE >= GEN_7) ? 4000 : 200),
        .holdEffect = HOLD_EFFECT_FLOAT_STONE,
        .description = COMPOUND_STRING(
            "It's so light that\n"
            "when held, it halves\n"
            "a Pokémon's weight."),
        HELD_ITEM_INFO,
        .flingPower = 30,
        ITEM_ICON(FloatStone),
    },

    [ITEM_ROCKY_HELMET] =
    {
        .name = ITEM_NAME("Rocky Helmet"),
        .price = (I_PRICE >= GEN_9) ? 4000 : ((I_PRICE >= GEN_7) ? 4000 : 200),
        .holdEffect = HOLD_EFFECT_ROCKY_HELMET,
        .holdEffectParam = 0,
        .description = COMPOUND_STRING(
            "Hurts the foe if\n"
            "they touch its\n"
            "holder."),
        HELD_ITEM_INFO,
        .flingPower = 60,
        ITEM_ICON(RockyHelmet),
    },

    [ITEM_AIR_BALLOON] =
    {
        .name = ITEM_NAME("Air Balloon"),
        .price = (I_PRICE >= GEN_9) ? 15000 : ((I_PRICE >= GEN_7) ? 4000 : 200),
        .holdEffect = HOLD_EFFECT_AIR_BALLOON,
        .holdEffectParam = 0,
        .description = COMPOUND_STRING(
            "Makes the holder\n"
            "float but bursts\n"
            "if hit by an attack."),
        HELD_ITEM_INFO,
        .flingPower = 10,
        ITEM_ICON(AirBalloon),
    },

    [ITEM_RED_CARD] =
    {
        .name = ITEM_NAME("Red Card"),
        .price = (I_PRICE >= GEN_9) ? 3000 : ((I_PRICE >= GEN_7) ? 4000 : 200),
        .holdEffect = HOLD_EFFECT_RED_CARD,
        .holdEffectParam = 0,
        .description = COMPOUND_STRING(
            "Switches out the\n"
            "foe if they hit the\n"
            "holder."),
        HELD_ITEM_INFO,
        .flingPower = 10,
        ITEM_ICON(RedCard),
    },

    [ITEM_RING_TARGET] =
    {
        .name = ITEM_NAME("Ring Target"),
        .price = (I_PRICE >= GEN_9) ? 10000 : ((I_PRICE >= GEN_7) ? 4000 : 200),
        .holdEffect = HOLD_EFFECT_RING_TARGET,
        .holdEffectParam = 0,
        .description = COMPOUND_STRING(
            "Moves that usually\n"
            "have no effect will\n"
            "hit the holder."),
        HELD_ITEM_INFO,
        .flingPower = 10,
        ITEM_ICON(RingTarget),
    },

    [ITEM_BINDING_BAND] =
    {
        .name = ITEM_NAME("Binding Band"),
        .price = (I_PRICE >= GEN_9) ? 20000 : ((I_PRICE >= GEN_7) ? 4000 : 200),
        .holdEffect = HOLD_EFFECT_BINDING_BAND,
        .description = COMPOUND_STRING(
            "Increases the\n"
            "power of binding\n"
            "moves when held."),
        HELD_ITEM_INFO,
        .flingPower = 30,
        ITEM_ICON(BindingBand),
    },

    [ITEM_EJECT_BUTTON] =
    {
        .name = ITEM_NAME("Eject Button"),
        .price = (I_PRICE >= GEN_9) ? 30000 : ((I_PRICE >= GEN_7) ? 4000 : 200),
        .holdEffect = HOLD_EFFECT_EJECT_BUTTON,
        .holdEffectParam = 0,
        .description = COMPOUND_STRING(
            "Switches out the\n"
            "user if they're hit\n"
            "by the foe."),
        HELD_ITEM_INFO,
        .flingPower = 30,
        ITEM_ICON(EjectButton),
    },

    [ITEM_WEAKNESS_POLICY] =
    {
        .name = ITEM_NAME("Weakness Policy"),
        .pluralName = ITEM_PLURAL_NAME("Weakness Policies"),
        .price = (I_PRICE >= GEN_9) ? 50000 : 1000,
        .holdEffect = HOLD_EFFECT_WEAKNESS_POLICY,
        .holdEffectParam = 0,
        .description = COMPOUND_STRING(
            "If hit by a super-\n"
            "effective move,\n"
            "ups Atk and Sp. Atk."),
        HELD_ITEM_INFO,
        .flingPower = 80,
        ITEM_ICON(WeaknessPolicy),
    },

    [ITEM_ASSAULT_VEST] =
    {
        .name = ITEM_NAME("Assault Vest"),
        .price = (I_PRICE >= GEN_9) ? 1000 : 1000,
        .holdEffect = HOLD_EFFECT_ASSAULT_VEST,
        .holdEffectParam = 50,
        .description = COMPOUND_STRING(
            "Raises Sp. Def but\n"
            "prevents the use\n"
            "of status moves."),
        HELD_ITEM_INFO,
        .flingPower = 80,
        ITEM_ICON(AssaultVest),
    },

    [ITEM_SAFETY_GOGGLES] =
    {
        .name = ITEM_NAME("Safety Goggles"),
        .pluralName = ITEM_PLURAL_NAME("Safety Goggles"),
        .price = (I_PRICE >= GEN_9) ? 20000 : ((I_PRICE >= GEN_7) ? 4000 : 1000),
        .holdEffect = HOLD_EFFECT_SAFETY_GOGGLES,
        .description = COMPOUND_STRING(
            "Protect from\n"
            "weather damage and\n"
            "powder moves."),
        HELD_ITEM_INFO,
        .flingPower = 80,
        ITEM_ICON(SafetyGoggles),
    },

    [ITEM_ADRENALINE_ORB] =
    {
        .name = ITEM_NAME("Adrenaline Orb"),
        .price = (I_PRICE >= GEN_9) ? 5000 : ((I_PRICE >= GEN_8) ? 4000 : 300),
        .holdEffect = HOLD_EFFECT_ADRENALINE_ORB,
        .description = COMPOUND_STRING(
            "This orb boosts\n"
            "Speed if the holder\n"
            "is intimidated."),
        HELD_ITEM_INFO,
        .flingPower = 30,
        ITEM_ICON(AdrenalineOrb),
    },

    [ITEM_TERRAIN_EXTENDER] =
    {
        .name = ITEM_NAME("Terrain Extender"),
        .price = (I_PRICE >= GEN_9) ? 15000 : 4000,
        .holdEffect = HOLD_EFFECT_TERRAIN_EXTENDER,
        .description = COMPOUND_STRING(
            "Extends the length\n"
            "of the active\n"
            "battle terrain."),
        HELD_ITEM_INFO,
        .flingPower = 60,
        ITEM_ICON(TerrainExtender),
    },

    [ITEM_PROTECTIVE_PADS] =
    {
        .name = ITEM_NAME("Protective Pads"),
        .pluralName = ITEM_PLURAL_NAME("Protective Pads"),
        .price = (I_PRICE >= GEN_9) ? 15000 : 4000,
        .holdEffect = HOLD_EFFECT_PROTECTIVE_PADS,
        .description = COMPOUND_STRING(
            "Guard the holder\n"
            "from contact move\n"
            "effects."),
        HELD_ITEM_INFO,
        .flingPower = 30,
        ITEM_ICON(ProtectivePads),
    },

    [ITEM_THROAT_SPRAY] =
    {
        .name = ITEM_NAME("Throat Spray"),
        .price = (I_PRICE >= GEN_9) ? 20000 : 4000,
        .holdEffect = HOLD_EFFECT_THROAT_SPRAY,
        .description = COMPOUND_STRING(
            "Raises Sp. Atk. if\n"
            "the holder uses a\n"
            "sound-based move."),
        HELD_ITEM_INFO,
        .flingPower = 30,
        ITEM_ICON(ThroatSpray),
    },

    [ITEM_EJECT_PACK] =
    {
        .name = ITEM_NAME("Eject Pack"),
        .price = (I_PRICE >= GEN_9) ? 30000 : 4000,
        .holdEffect = HOLD_EFFECT_EJECT_PACK,
        .description = COMPOUND_STRING(
            "Forces the user to\n"
            "switch if its stats\n"
            "are lowered."),
        HELD_ITEM_INFO,
        .flingPower = 50,
        ITEM_ICON(EjectPack),
    },

    [ITEM_HEAVY_DUTY_BOOTS] =
    {
        .name = ITEM_NAME("Heavy-Duty Boots"),
        .pluralName = ITEM_PLURAL_NAME("Heavy-Duty Boots"),
        .price = (I_PRICE >= GEN_9) ? 20000 : 4000,
        .holdEffect = HOLD_EFFECT_HEAVY_DUTY_BOOTS,
        .description = COMPOUND_STRING(
            "Boots that prevent\n"
            "effects of traps\n"
            "set in the field."),
        HELD_ITEM_INFO,
        .flingPower = 80,
        ITEM_ICON(HeavyDutyBoots),
    },

    [ITEM_BLUNDER_POLICY] =
    {
        .name = ITEM_NAME("Blunder Policy"),
        .pluralName = ITEM_PLURAL_NAME("Blunder Policies"),
        .price = (I_PRICE >= GEN_9) ? 30000 : 4000,
        .holdEffect = HOLD_EFFECT_BLUNDER_POLICY,
        .description = COMPOUND_STRING(
            "Raises Speed if\n"
            "the user misses\n"
            "due to Accuracy."),
        HELD_ITEM_INFO,
        .flingPower = 80,
        ITEM_ICON(BlunderPolicy),
    },

    [ITEM_ROOM_SERVICE] =
    {
        .name = ITEM_NAME("Room Service"),
        .price = (I_PRICE >= GEN_9) ? 20000 : 4000,
        .holdEffect = HOLD_EFFECT_ROOM_SERVICE,
        .description = COMPOUND_STRING(
            "Lowers Speed if\n"
            "Trick Room is\n"
            "active."),
        HELD_ITEM_INFO,
        .flingPower = 100,
        ITEM_ICON(RoomService),
    },

    [ITEM_UTILITY_UMBRELLA] =
    {
        .name = ITEM_NAME("Utility Umbrella"),
        .price = (I_PRICE >= GEN_9) ? 15000 : 4000,
        .holdEffect = HOLD_EFFECT_UTILITY_UMBRELLA,
        .description = COMPOUND_STRING(
            "An umbrella that\n"
            "protects from\n"
            "weather effects."),
        HELD_ITEM_INFO,
        .flingPower = 60,
        ITEM_ICON(UtilityUmbrella),
    },

// Berries

    [ITEM_CHERI_BERRY] =
    {
        .name = ITEM_NAME("Cheri Berry"),
        .pluralName = ITEM_PLURAL_NAME("Cheri Berries"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .holdEffect = HOLD_EFFECT_CURE_PAR,
        .description = COMPOUND_STRING(
            "A hold item that\n"
            "heals paralysis\n"
            "in battle."),
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_CURE_STATUS,
        .effect = gItemEffect_ParalyzeHeal,
        .flingPower = 10,
        ITEM_ICON(CheriBerry),
    },

    [ITEM_CHESTO_BERRY] =
    {
        .name = ITEM_NAME("Chesto Berry"),
        .pluralName = ITEM_PLURAL_NAME("Chesto Berries"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .holdEffect = HOLD_EFFECT_CURE_SLP,
        .description = COMPOUND_STRING(
            "A hold item that\n"
            "awakens Pokémon\n"
            "in battle."),
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_CURE_STATUS,
        .effect = gItemEffect_Awakening,
        .flingPower = 10,
        ITEM_ICON(ChestoBerry),
    },

    [ITEM_PECHA_BERRY] =
    {
        .name = ITEM_NAME("Pecha Berry"),
        .pluralName = ITEM_PLURAL_NAME("Pecha Berries"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .holdEffect = HOLD_EFFECT_CURE_PSN,
        .description = COMPOUND_STRING(
            "A hold item that\n"
            "heals poisoning\n"
            "in battle."),
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_CURE_STATUS,
        .effect = gItemEffect_Antidote,
        .flingPower = 10,
        ITEM_ICON(PechaBerry),
    },

    [ITEM_RAWST_BERRY] =
    {
        .name = ITEM_NAME("Rawst Berry"),
        .pluralName = ITEM_PLURAL_NAME("Rawst Berries"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .holdEffect = HOLD_EFFECT_CURE_BRN,
        .description = COMPOUND_STRING(
            "A hold item that\n"
            "heals a burn in\n"
            "battle."),
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_CURE_STATUS,
        .effect = gItemEffect_BurnHeal,
        .flingPower = 10,
        ITEM_ICON(RawstBerry),
    },

    [ITEM_ASPEAR_BERRY] =
    {
        .name = ITEM_NAME("Aspear Berry"),
        .pluralName = ITEM_PLURAL_NAME("Aspear Berries"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .holdEffect = HOLD_EFFECT_CURE_FRZ,
        .description = COMPOUND_STRING(
            "A hold item that\n"
            "defrosts Pokémon\n"
            "in battle."),
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_CURE_STATUS,
        .effect = gItemEffect_IceHeal,
        .flingPower = 10,
        ITEM_ICON(AspearBerry),
    },

    [ITEM_LEPPA_BERRY] =
    {
        .name = ITEM_NAME("Leppa Berry"),
        .pluralName = ITEM_PLURAL_NAME("Leppa Berries"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .holdEffect = HOLD_EFFECT_RESTORE_PP,
        .holdEffectParam = 10,
        .description = COMPOUND_STRING(
            "A hold item that\n"
            "restores 10 PP in\n"
            "battle."),
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_PARTY_MENU_MOVES,
        .fieldUseFunc = ItemUseOutOfBattle_PPRecovery,
        .battleUsage = EFFECT_ITEM_RESTORE_PP,
        .effect = gItemEffect_LeppaBerry,
        .flingPower = 10,
        ITEM_ICON(LeppaBerry),
    },

    [ITEM_ORAN_BERRY] =
    {
        .name = ITEM_NAME("Oran Berry"),
        .pluralName = ITEM_PLURAL_NAME("Oran Berries"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .holdEffect = HOLD_EFFECT_RESTORE_HP,
        .holdEffectParam = 10,
        .description = COMPOUND_STRING(
            "A hold item that\n"
            "restores 10 HP in\n"
            "battle."),
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_RESTORE_HP,
        .effect = gItemEffect_OranBerry,
        .flingPower = 10,
        ITEM_ICON(OranBerry),
    },

    [ITEM_PERSIM_BERRY] =
    {
        .name = ITEM_NAME("Persim Berry"),
        .pluralName = ITEM_PLURAL_NAME("Persim Berries"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .holdEffect = HOLD_EFFECT_CURE_CONFUSION,
        .description = COMPOUND_STRING(
            "A hold item that\n"
            "heals confusion\n"
            "in battle."),
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = EFFECT_ITEM_CURE_STATUS,
        .effect = gItemEffect_PersimBerry,
        .flingPower = 10,
        ITEM_ICON(PersimBerry),
    },

    [ITEM_LUM_BERRY] =
    {
        .name = ITEM_NAME("Lum Berry"),
        .pluralName = ITEM_PLURAL_NAME("Lum Berries"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .holdEffect = HOLD_EFFECT_CURE_STATUS,
        .description = COMPOUND_STRING(
            "A hold item that\n"
            "heals any status\n"
            "problem in battle."),
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_CURE_STATUS,
        .effect = gItemEffect_FullHeal,
        .flingPower = 10,
        ITEM_ICON(LumBerry),
    },

    [ITEM_SITRUS_BERRY] =
    {
        .name = ITEM_NAME("Sitrus Berry"),
        .pluralName = ITEM_PLURAL_NAME("Sitrus Berries"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        #if I_SITRUS_BERRY_HEAL >= GEN_4
            .holdEffect = HOLD_EFFECT_RESTORE_PCT_HP,
            .holdEffectParam = 25,
            .description = COMPOUND_STRING(
                "A hold item that\n"
                "restores the user's\n"
                "HP a little."),
        #else
            .holdEffect = HOLD_EFFECT_RESTORE_HP,
            .holdEffectParam = 30,
            .description = COMPOUND_STRING(
                "A hold item that\n"
                "restores 30 HP in\n"
                "battle."),
        #endif
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_RESTORE_HP,
        .effect = gItemEffect_SitrusBerry,
        .flingPower = 10,
        ITEM_ICON(SitrusBerry),
    },

    [ITEM_FIGY_BERRY] =
    {
        .name = ITEM_NAME("Figy Berry"),
        .pluralName = ITEM_PLURAL_NAME("Figy Berries"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .holdEffect = HOLD_EFFECT_CONFUSE_SPICY,
        .holdEffectParam = CONFUSE_BERRY_HEAL_FRACTION,
        .description = sFigyBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
        ITEM_ICON(FigyBerry),
    },

    [ITEM_WIKI_BERRY] =
    {
        .name = ITEM_NAME("Wiki Berry"),
        .pluralName = ITEM_PLURAL_NAME("Wiki Berries"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .holdEffect = HOLD_EFFECT_CONFUSE_DRY,
        .holdEffectParam = CONFUSE_BERRY_HEAL_FRACTION,
        .description = sFigyBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
        ITEM_ICON(WikiBerry),
    },

    [ITEM_MAGO_BERRY] =
    {
        .name = ITEM_NAME("Mago Berry"),
        .pluralName = ITEM_PLURAL_NAME("Mago Berries"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .holdEffect = HOLD_EFFECT_CONFUSE_SWEET,
        .holdEffectParam = CONFUSE_BERRY_HEAL_FRACTION,
        .description = sFigyBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
        ITEM_ICON(MagoBerry),
    },

    [ITEM_AGUAV_BERRY] =
    {
        .name = ITEM_NAME("Aguav Berry"),
        .pluralName = ITEM_PLURAL_NAME("Aguav Berries"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .holdEffect = HOLD_EFFECT_CONFUSE_BITTER,
        .holdEffectParam = CONFUSE_BERRY_HEAL_FRACTION,
        .description = sFigyBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
        ITEM_ICON(AguavBerry),
    },

    [ITEM_IAPAPA_BERRY] =
    {
        .name = ITEM_NAME("Iapapa Berry"),
        .pluralName = ITEM_PLURAL_NAME("Iapapa Berries"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .holdEffect = HOLD_EFFECT_CONFUSE_SOUR,
        .holdEffectParam = CONFUSE_BERRY_HEAL_FRACTION,
        .description = sFigyBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
        ITEM_ICON(IapapaBerry),
    },

    [ITEM_RAZZ_BERRY] =
    {
        .name = ITEM_NAME("Razz Berry"),
        .pluralName = ITEM_PLURAL_NAME("Razz Berries"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .description = COMPOUND_STRING(
            "{POKEBLOCK} ingredient.\n"
            "Plant in loamy soil\n"
            "to grow Razz."),
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
        ITEM_ICON(RazzBerry),
    },

    [ITEM_BLUK_BERRY] =
    {
        .name = ITEM_NAME("Bluk Berry"),
        .pluralName = ITEM_PLURAL_NAME("Bluk Berries"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .description = COMPOUND_STRING(
            "{POKEBLOCK} ingredient.\n"
            "Plant in loamy soil\n"
            "to grow Bluk."),
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
        ITEM_ICON(BlukBerry),
    },

    [ITEM_NANAB_BERRY] =
    {
        .name = ITEM_NAME("Nanab Berry"),
        .pluralName = ITEM_PLURAL_NAME("Nanab Berries"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .description = COMPOUND_STRING(
            "{POKEBLOCK} ingredient.\n"
            "Plant in loamy soil\n"
            "to grow Nanab."),
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
        ITEM_ICON(NanabBerry),
    },

    [ITEM_WEPEAR_BERRY] =
    {
        .name = ITEM_NAME("Wepear Berry"),
        .pluralName = ITEM_PLURAL_NAME("Wepear Berries"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .description = COMPOUND_STRING(
            "{POKEBLOCK} ingredient.\n"
            "Plant in loamy soil\n"
            "to grow Wepear."),
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
        ITEM_ICON(WepearBerry),
    },

    [ITEM_PINAP_BERRY] =
    {
        .name = ITEM_NAME("Pinap Berry"),
        .pluralName = ITEM_PLURAL_NAME("Pinap Berries"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .description = COMPOUND_STRING(
            "{POKEBLOCK} ingredient.\n"
            "Plant in loamy soil\n"
            "to grow Pinap."),
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
        ITEM_ICON(PinapBerry),
    },

    [ITEM_POMEG_BERRY] =
    {
        .name = ITEM_NAME("Pomeg Berry"),
        .pluralName = ITEM_PLURAL_NAME("Pomeg Berries"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .description = COMPOUND_STRING(
            "Makes a Pokémon\n"
            "friendly but lowers\n"
            "base HP."),
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_ReduceEV,
        .effect = gItemEffect_PomegBerry,
        .flingPower = 10,
        ITEM_ICON(PomegBerry),
    },

    [ITEM_KELPSY_BERRY] =
    {
        .name = ITEM_NAME("Kelpsy Berry"),
        .pluralName = ITEM_PLURAL_NAME("Kelpsy Berries"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .description = COMPOUND_STRING(
            "Makes a Pokémon\n"
            "friendly but lowers\n"
            "base Attack."),
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_ReduceEV,
        .effect = gItemEffect_KelpsyBerry,
        .flingPower = 10,
        ITEM_ICON(KelpsyBerry),
    },

    [ITEM_QUALOT_BERRY] =
    {
        .name = ITEM_NAME("Qualot Berry"),
        .pluralName = ITEM_PLURAL_NAME("Qualot Berries"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .description = COMPOUND_STRING(
            "Makes a Pokémon\n"
            "friendly but lowers\n"
            "base Defense."),
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_ReduceEV,
        .effect = gItemEffect_QualotBerry,
        .flingPower = 10,
        ITEM_ICON(QualotBerry),
    },

    [ITEM_HONDEW_BERRY] =
    {
        .name = ITEM_NAME("Hondew Berry"),
        .pluralName = ITEM_PLURAL_NAME("Hondew Berries"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .description = COMPOUND_STRING(
            "Makes a Pokémon\n"
            "friendly but lowers\n"
            "base Sp. Atk."),
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_ReduceEV,
        .effect = gItemEffect_HondewBerry,
        .flingPower = 10,
        ITEM_ICON(HondewBerry),
    },

    [ITEM_GREPA_BERRY] =
    {
        .name = ITEM_NAME("Grepa Berry"),
        .pluralName = ITEM_PLURAL_NAME("Grepa Berries"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .description = COMPOUND_STRING(
            "Makes a Pokémon\n"
            "friendly but lowers\n"
            "base Sp. Def."),
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_ReduceEV,
        .effect = gItemEffect_GrepaBerry,
        .flingPower = 10,
        ITEM_ICON(GrepaBerry),
    },

    [ITEM_TAMATO_BERRY] =
    {
        .name = ITEM_NAME("Tamato Berry"),
        .pluralName = ITEM_PLURAL_NAME("Tamato Berries"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .description = COMPOUND_STRING(
            "Makes a Pokémon\n"
            "friendly but lowers\n"
            "base Speed."),
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_ReduceEV,
        .effect = gItemEffect_TamatoBerry,
        .flingPower = 10,
        ITEM_ICON(TamatoBerry),
    },

    [ITEM_CORNN_BERRY] =
    {
        .name = ITEM_NAME("Cornn Berry"),
        .pluralName = ITEM_PLURAL_NAME("Cornn Berries"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .description = COMPOUND_STRING(
            "{POKEBLOCK} ingredient.\n"
            "Plant in loamy soil\n"
            "to grow Cornn."),
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
        ITEM_ICON(CornnBerry),
    },

    [ITEM_MAGOST_BERRY] =
    {
        .name = ITEM_NAME("Magost Berry"),
        .pluralName = ITEM_PLURAL_NAME("Magost Berries"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .description = COMPOUND_STRING(
            "{POKEBLOCK} ingredient.\n"
            "Plant in loamy soil\n"
            "to grow Magost."),
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
        ITEM_ICON(MagostBerry),
    },

    [ITEM_RABUTA_BERRY] =
    {
        .name = ITEM_NAME("Rabuta Berry"),
        .pluralName = ITEM_PLURAL_NAME("Rabuta Berries"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .description = COMPOUND_STRING(
            "{POKEBLOCK} ingredient.\n"
            "Plant in loamy soil\n"
            "to grow Rabuta."),
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
        ITEM_ICON(RabutaBerry),
    },

    [ITEM_NOMEL_BERRY] =
    {
        .name = ITEM_NAME("Nomel Berry"),
        .pluralName = ITEM_PLURAL_NAME("Nomel Berries"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .description = COMPOUND_STRING(
            "{POKEBLOCK} ingredient.\n"
            "Plant in loamy soil\n"
            "to grow Nomel."),
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
        ITEM_ICON(NomelBerry),
    },

    [ITEM_SPELON_BERRY] =
    {
        .name = ITEM_NAME("Spelon Berry"),
        .pluralName = ITEM_PLURAL_NAME("Spelon Berries"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .description = COMPOUND_STRING(
            "{POKEBLOCK} ingredient.\n"
            "Plant in loamy soil\n"
            "to grow Spelon."),
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
        ITEM_ICON(SpelonBerry),
    },

    [ITEM_PAMTRE_BERRY] =
    {
        .name = ITEM_NAME("Pamtre Berry"),
        .pluralName = ITEM_PLURAL_NAME("Pamtre Berries"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .description = COMPOUND_STRING(
            "{POKEBLOCK} ingredient.\n"
            "Plant in loamy soil\n"
            "to grow Pamtre."),
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
        ITEM_ICON(PamtreBerry),
    },

    [ITEM_WATMEL_BERRY] =
    {
        .name = ITEM_NAME("Watmel Berry"),
        .pluralName = ITEM_PLURAL_NAME("Watmel Berries"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .description = COMPOUND_STRING(
            "{POKEBLOCK} ingredient.\n"
            "Plant in loamy soil\n"
            "to grow Watmel."),
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
        ITEM_ICON(WatmelBerry),
    },

    [ITEM_DURIN_BERRY] =
    {
        .name = ITEM_NAME("Durin Berry"),
        .pluralName = ITEM_PLURAL_NAME("Durin Berries"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .description = COMPOUND_STRING(
            "{POKEBLOCK} ingredient.\n"
            "Plant in loamy soil\n"
            "to grow Durin."),
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
        ITEM_ICON(DurinBerry),
    },

    [ITEM_BELUE_BERRY] =
    {
        .name = ITEM_NAME("Belue Berry"),
        .pluralName = ITEM_PLURAL_NAME("Belue Berries"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .description = COMPOUND_STRING(
            "{POKEBLOCK} ingredient.\n"
            "Plant in loamy soil\n"
            "to grow Belue."),
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
        ITEM_ICON(BelueBerry),
    },

    [ITEM_CHILAN_BERRY] =
    {
        .name = ITEM_NAME("Chilan Berry"),
        .pluralName = ITEM_PLURAL_NAME("Chilan Berries"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .holdEffect = HOLD_EFFECT_RESIST_BERRY,
        .holdEffectParam = TYPE_NORMAL,
        .description = COMPOUND_STRING(
            "A hold item that\n"
            "weakens a Normal\n"
            "move."),
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
        ITEM_ICON(ChilanBerry),
    },

    [ITEM_OCCA_BERRY] =
    {
        .name = ITEM_NAME("Occa Berry"),
        .pluralName = ITEM_PLURAL_NAME("Occa Berries"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .holdEffect = HOLD_EFFECT_RESIST_BERRY,
        .holdEffectParam = TYPE_FIRE,
        .description = COMPOUND_STRING(
            "A hold item that\n"
            "weakens a Fire\n"
            "move if weak to it."),
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
        ITEM_ICON(OccaBerry),
    },

    [ITEM_PASSHO_BERRY] =
    {
        .name = ITEM_NAME("Passho Berry"),
        .pluralName = ITEM_PLURAL_NAME("Passho Berries"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .holdEffect = HOLD_EFFECT_RESIST_BERRY,
        .holdEffectParam = TYPE_WATER,
        .description = COMPOUND_STRING(
            "A hold item that\n"
            "weakens a Water\n"
            "move if weak to it."),
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
        ITEM_ICON(PasshoBerry),
    },

    [ITEM_WACAN_BERRY] =
    {
        .name = ITEM_NAME("Wacan Berry"),
        .pluralName = ITEM_PLURAL_NAME("Wacan Berries"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .holdEffect = HOLD_EFFECT_RESIST_BERRY,
        .holdEffectParam = TYPE_ELECTRIC,
        .description = COMPOUND_STRING(
            "A hold item that\n"
            "weakens a Electric\n"
            "move if weak to it."),
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
        ITEM_ICON(WacanBerry),
    },

    [ITEM_RINDO_BERRY] =
    {
        .name = ITEM_NAME("Rindo Berry"),
        .pluralName = ITEM_PLURAL_NAME("Rindo Berries"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .holdEffect = HOLD_EFFECT_RESIST_BERRY,
        .holdEffectParam = TYPE_GRASS,
        .description = COMPOUND_STRING(
            "A hold item that\n"
            "weakens a Grass\n"
            "move if weak to it."),
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
        ITEM_ICON(RindoBerry),
    },

    [ITEM_YACHE_BERRY] =
    {
        .name = ITEM_NAME("Yache Berry"),
        .pluralName = ITEM_PLURAL_NAME("Yache Berries"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .holdEffect = HOLD_EFFECT_RESIST_BERRY,
        .holdEffectParam = TYPE_ICE,
        .description = COMPOUND_STRING(
            "A hold item that\n"
            "weakens a Ice\n"
            "move if weak to it."),
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
        ITEM_ICON(YacheBerry),
    },

    [ITEM_CHOPLE_BERRY] =
    {
        .name = ITEM_NAME("Chople Berry"),
        .pluralName = ITEM_PLURAL_NAME("Chople Berries"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .holdEffect = HOLD_EFFECT_RESIST_BERRY,
        .holdEffectParam = TYPE_FIGHTING,
        .description = COMPOUND_STRING(
            "A hold item that\n"
            "weakens a Fighting\n"
            "move if weak to it."),
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
        ITEM_ICON(ChopleBerry),
    },

    [ITEM_KEBIA_BERRY] =
    {
        .name = ITEM_NAME("Kebia Berry"),
        .pluralName = ITEM_PLURAL_NAME("Kebia Berries"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .holdEffect = HOLD_EFFECT_RESIST_BERRY,
        .holdEffectParam = TYPE_POISON,
        .description = COMPOUND_STRING(
            "A hold item that\n"
            "weakens a Poison\n"
            "move if weak to it."),
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
        ITEM_ICON(KebiaBerry),
    },

    [ITEM_SHUCA_BERRY] =
    {
        .name = ITEM_NAME("Shuca Berry"),
        .pluralName = ITEM_PLURAL_NAME("Shuca Berries"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .holdEffect = HOLD_EFFECT_RESIST_BERRY,
        .holdEffectParam = TYPE_GROUND,
        .description = COMPOUND_STRING(
            "A hold item that\n"
            "weakens a Ground\n"
            "move if weak to it."),
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
        ITEM_ICON(ShucaBerry),
    },

    [ITEM_COBA_BERRY] =
    {
        .name = ITEM_NAME("Coba Berry"),
        .pluralName = ITEM_PLURAL_NAME("Coba Berries"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .holdEffect = HOLD_EFFECT_RESIST_BERRY,
        .holdEffectParam = TYPE_FLYING,
        .description = COMPOUND_STRING(
            "A hold item that\n"
            "weakens a Flying\n"
            "move if weak to it."),
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
        ITEM_ICON(CobaBerry),
    },

    [ITEM_PAYAPA_BERRY] =
    {
        .name = ITEM_NAME("Payapa Berry"),
        .pluralName = ITEM_PLURAL_NAME("Payapa Berries"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .holdEffect = HOLD_EFFECT_RESIST_BERRY,
        .holdEffectParam = TYPE_PSYCHIC,
        .description = COMPOUND_STRING(
            "A hold item that\n"
            "weakens a Psychic\n"
            "move if weak to it."),
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
        ITEM_ICON(PayapaBerry),
    },

    [ITEM_TANGA_BERRY] =
    {
        .name = ITEM_NAME("Tanga Berry"),
        .pluralName = ITEM_PLURAL_NAME("Tanga Berries"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .holdEffect = HOLD_EFFECT_RESIST_BERRY,
        .holdEffectParam = TYPE_BUG,
        .description = COMPOUND_STRING(
            "A hold item that\n"
            "weakens a Bug\n"
            "move if weak to it."),
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
        ITEM_ICON(TangaBerry),
    },

    [ITEM_CHARTI_BERRY] =
    {
        .name = ITEM_NAME("Charti Berry"),
        .pluralName = ITEM_PLURAL_NAME("Charti Berries"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .holdEffect = HOLD_EFFECT_RESIST_BERRY,
        .holdEffectParam = TYPE_ROCK,
        .description = COMPOUND_STRING(
            "A hold item that\n"
            "weakens a Rock\n"
            "move if weak to it."),
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
        ITEM_ICON(ChartiBerry),
    },

    [ITEM_KASIB_BERRY] =
    {
        .name = ITEM_NAME("Kasib Berry"),
        .pluralName = ITEM_PLURAL_NAME("Kasib Berries"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .holdEffect = HOLD_EFFECT_RESIST_BERRY,
        .holdEffectParam = TYPE_GHOST,
        .description = COMPOUND_STRING(
            "A hold item that\n"
            "weakens a Ghost\n"
            "move if weak to it."),
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
        ITEM_ICON(KasibBerry),
    },

    [ITEM_HABAN_BERRY] =
    {
        .name = ITEM_NAME("Haban Berry"),
        .pluralName = ITEM_PLURAL_NAME("Haban Berries"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .holdEffect = HOLD_EFFECT_RESIST_BERRY,
        .holdEffectParam = TYPE_DRAGON,
        .description = COMPOUND_STRING(
            "A hold item that\n"
            "weakens a Dragon\n"
            "move if weak to it."),
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
        ITEM_ICON(HabanBerry),
    },

    [ITEM_COLBUR_BERRY] =
    {
        .name = ITEM_NAME("Colbur Berry"),
        .pluralName = ITEM_PLURAL_NAME("Colbur Berries"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .holdEffect = HOLD_EFFECT_RESIST_BERRY,
        .holdEffectParam = TYPE_DARK,
        .description = COMPOUND_STRING(
            "A hold item that\n"
            "weakens a Dark\n"
            "move if weak to it."),
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
        ITEM_ICON(ColburBerry),
    },

    [ITEM_BABIRI_BERRY] =
    {
        .name = ITEM_NAME("Babiri Berry"),
        .pluralName = ITEM_PLURAL_NAME("Babiri Berries"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .holdEffect = HOLD_EFFECT_RESIST_BERRY,
        .holdEffectParam = TYPE_STEEL,
        .description = COMPOUND_STRING(
            "A hold item that\n"
            "weakens a Steel\n"
            "move if weak to it."),
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
        ITEM_ICON(BabiriBerry),
    },

    [ITEM_ROSELI_BERRY] =
    {
        .name = ITEM_NAME("Roseli Berry"),
        .pluralName = ITEM_PLURAL_NAME("Roseli Berries"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .holdEffect = HOLD_EFFECT_RESIST_BERRY,
        .holdEffectParam = TYPE_FAIRY,
        .description = COMPOUND_STRING(
            "A hold item that\n"
            "weakens a Fairy\n"
            "move if weak to it."),
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
        ITEM_ICON(RoseliBerry),
    },

    [ITEM_LIECHI_BERRY] =
    {
        .name = ITEM_NAME("Liechi Berry"),
        .pluralName = ITEM_PLURAL_NAME("Liechi Berries"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .holdEffect = HOLD_EFFECT_ATTACK_UP,
        .holdEffectParam = 4,
        .description = COMPOUND_STRING(
            "A hold item that\n"
            "raises Attack in\n"
            "a pinch."),
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
        ITEM_ICON(LiechiBerry),
    },

    [ITEM_GANLON_BERRY] =
    {
        .name = ITEM_NAME("Ganlon Berry"),
        .pluralName = ITEM_PLURAL_NAME("Ganlon Berries"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .holdEffect = HOLD_EFFECT_DEFENSE_UP,
        .holdEffectParam = 4,
        .description = COMPOUND_STRING(
            "A hold item that\n"
            "raises Defense in\n"
            "a pinch."),
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
        ITEM_ICON(GanlonBerry),
    },

    [ITEM_SALAC_BERRY] =
    {
        .name = ITEM_NAME("Salac Berry"),
        .pluralName = ITEM_PLURAL_NAME("Salac Berries"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .holdEffect = HOLD_EFFECT_SPEED_UP,
        .holdEffectParam = 4,
        .description = COMPOUND_STRING(
            "A hold item that\n"
            "raises Speed in\n"
            "a pinch."),
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
        ITEM_ICON(SalacBerry),
    },

    [ITEM_PETAYA_BERRY] =
    {
        .name = ITEM_NAME("Petaya Berry"),
        .pluralName = ITEM_PLURAL_NAME("Petaya Berries"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .holdEffect = HOLD_EFFECT_SP_ATTACK_UP,
        .holdEffectParam = 4,
        .description = COMPOUND_STRING(
            "A hold item that\n"
            "raises Sp. Atk in\n"
            "a pinch."),
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
        ITEM_ICON(PetayaBerry),
    },

    [ITEM_APICOT_BERRY] =
    {
        .name = ITEM_NAME("Apicot Berry"),
        .pluralName = ITEM_PLURAL_NAME("Apicot Berries"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .holdEffect = HOLD_EFFECT_SP_DEFENSE_UP,
        .holdEffectParam = 4,
        .description = COMPOUND_STRING(
            "A hold item that\n"
            "raises Sp. Def in\n"
            "a pinch."),
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
        ITEM_ICON(ApicotBerry),
    },

    [ITEM_LANSAT_BERRY] =
    {
        .name = ITEM_NAME("Lansat Berry"),
        .pluralName = ITEM_PLURAL_NAME("Lansat Berries"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .holdEffect = HOLD_EFFECT_CRITICAL_UP,
        .holdEffectParam = 4,
        .description = COMPOUND_STRING(
            "A hold item that\n"
            "ups the critical-\n"
            "hit rate in a pinch."),
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
        ITEM_ICON(LansatBerry),
    },

    [ITEM_STARF_BERRY] =
    {
        .name = ITEM_NAME("Starf Berry"),
        .pluralName = ITEM_PLURAL_NAME("Starf Berries"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .holdEffect = HOLD_EFFECT_RANDOM_STAT_UP,
        .holdEffectParam = 4,
        .description = COMPOUND_STRING(
            "A hold item that\n"
            "sharply boosts a\n"
            "stat in a pinch."),
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
        ITEM_ICON(StarfBerry),
    },

    [ITEM_ENIGMA_BERRY] =
    {
        .name = ITEM_NAME("Enigma Berry"),
        .pluralName = ITEM_PLURAL_NAME("Enigma Berries"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .holdEffect = HOLD_EFFECT_ENIGMA_BERRY,
        .description = COMPOUND_STRING(
            "A hold item that\n"
            "heals from super\n"
            "effective moves."),
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
        ITEM_ICON(EnigmaBerry),
    },

    [ITEM_MICLE_BERRY] =
    {
        .name = ITEM_NAME("Micle Berry"),
        .pluralName = ITEM_PLURAL_NAME("Micle Berries"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .holdEffect = HOLD_EFFECT_MICLE_BERRY,
        .holdEffectParam = 4,
        .description = COMPOUND_STRING(
            "When held, it ups\n"
            "the Accuracy of a\n"
            "move in a pinch."),
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
        ITEM_ICON(MicleBerry),
    },

    [ITEM_CUSTAP_BERRY] =
    {
        .name = ITEM_NAME("Custap Berry"),
        .pluralName = ITEM_PLURAL_NAME("Custap Berries"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .holdEffect = HOLD_EFFECT_CUSTAP_BERRY,
        .holdEffectParam = 4,
        .description = COMPOUND_STRING(
            "It allows a Pokémon\n"
            "in a pinch to move\n"
            "first just once."),
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
        ITEM_ICON(CustapBerry),
    },

    [ITEM_JABOCA_BERRY] =
    {
        .name = ITEM_NAME("Jaboca Berry"),
        .pluralName = ITEM_PLURAL_NAME("Jaboca Berries"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .holdEffect = HOLD_EFFECT_JABOCA_BERRY,
        .description = COMPOUND_STRING(
            "If hit by a physical\n"
            "move, it will hurt\n"
            "the attacker a bit."),
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
        ITEM_ICON(JabocaBerry),
    },

    [ITEM_ROWAP_BERRY] =
    {
        .name = ITEM_NAME("Rowap Berry"),
        .pluralName = ITEM_PLURAL_NAME("Rowap Berries"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .holdEffect = HOLD_EFFECT_ROWAP_BERRY,
        .description = COMPOUND_STRING(
            "If hit by a special\n"
            "move, it will hurt\n"
            "the attacker a bit."),
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
        ITEM_ICON(RowapBerry),
    },

    [ITEM_KEE_BERRY] =
    {
        .name = ITEM_NAME("Kee Berry"),
        .pluralName = ITEM_PLURAL_NAME("Kee Berries"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .holdEffect = HOLD_EFFECT_KEE_BERRY,
        .description = COMPOUND_STRING(
            "If hit by a physical\n"
            "move, it raises the\n"
            "Defense a bit."),
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
        ITEM_ICON(KeeBerry),
    },

    [ITEM_MARANGA_BERRY] =
    {
        .name = ITEM_NAME("Maranga Berry"),
        .pluralName = ITEM_PLURAL_NAME("Maranga Berries"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .holdEffect = HOLD_EFFECT_MARANGA_BERRY,
        .description = COMPOUND_STRING(
            "If hit by a special\n"
            "move, it raises the\n"
            "Sp. Def. a bit."),
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 10,
        ITEM_ICON(MarangaBerry),
    },

    [ITEM_ENIGMA_BERRY_E_READER] =
    {
        .name = ITEM_NAME("Enigma Berry"),
        .pluralName = ITEM_PLURAL_NAME("Enigma Berries"),
        .price = (I_BERRY_PRICE >= GEN_8) ? 80 : 20,
        .description = COMPOUND_STRING(
            "{POKEBLOCK} ingredient.\n"
            "Plant in loamy soil\n"
            "to grow a mystery."),
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU, // Type handled by ItemUseOutOfBattle_EnigmaBerry
        .fieldUseFunc = ItemUseOutOfBattle_EnigmaBerry,
        .battleUsage = EFFECT_ITEM_ENIGMA_BERRY_EREADER,
        .flingPower = 10,
        ITEM_ICON(EnigmaBerry),
    },

// TMs. They don't have a set flingPower, as that's handled by GetFlingPowerFromItemId.
#define TM_INFO                   \
    .price = 2000,                \
    .importance = I_REUSABLE_TMS, \
    .pocket = POCKET_TM,          \
    .type = ITEM_USE_PARTY_MENU,  \
    .fieldUseFunc = ItemUseOutOfBattle_TM

    [ITEM_TM_FOCUS_PUNCH] =
    {
        .name = ITEM_NAME("TM01"),
        TM_INFO,
        .description = COMPOUND_STRING(
            "Powerful, but makes\n"
            "the user flinch if\n"
            "hit by the foe."),
    },

    [ITEM_TM_DRAGON_CLAW] =
    {
        .name = ITEM_NAME("TM02"),
        TM_INFO,
        .description = COMPOUND_STRING(
            "Hooks and slashes\n"
            "the foe with long,\n"
            "sharp claws."),
    },

    [ITEM_TM_WATER_PULSE] =
    {
        .name = ITEM_NAME("TM03"),
        TM_INFO,
        .description = COMPOUND_STRING(
            "Generates an\n"
            "ultrasonic wave\n"
            "that may confuse."),
    },

    [ITEM_TM_CALM_MIND] =
    {
        .name = ITEM_NAME("TM04"),
        TM_INFO,
        .description = COMPOUND_STRING(
            "Raises Sp. Atk and\n"
            "Sp. Def by focusing\n"
            "the mind."),
    },

    [ITEM_TM_ROAR] =
    {
        .name = ITEM_NAME("TM05"),
        TM_INFO,
        .description = COMPOUND_STRING(
            "A savage roar that\n"
            "makes the foe flee \n"
            "to end the battle."),
    },

    [ITEM_TM_TOXIC] =
    {
        .name = ITEM_NAME("TM06"),
        TM_INFO,
        .description = COMPOUND_STRING(
            "Poisons the foe\n"
            "with a toxin that\n"
            "gradually worsens."),
    },

    [ITEM_TM_SNOWSCAPE] =
    {
        .name = ITEM_NAME("TM07"),
        TM_INFO,
        .description = COMPOUND_STRING(
            "Raises the Defense\n"
            "of Ice type {PKMN}\n"
            "for 5 turns."),
    },

    [ITEM_TM_BULK_UP] =
    {
        .name = ITEM_NAME("TM08"),
        TM_INFO,
        .description = COMPOUND_STRING(
            "Bulks up the body\n"
            "to boost both\n"
            "Attack & Defense."),
    },

    [ITEM_TM_BULLET_SEED] =
    {
        .name = ITEM_NAME("TM09"),
        TM_INFO,
        .description = COMPOUND_STRING(
            "Shoots 2 to 5 seeds\n"
            "in a row to strike\n"
            "the foe."),
    },

    [ITEM_TM_HIDDEN_POWER] =
    {
        .name = ITEM_NAME("TM10"),
        TM_INFO,
        .description = COMPOUND_STRING(
            "The attack power\n"
            "varies among\n"
            "different Pokémon."),
    },

    [ITEM_TM_SUNNY_DAY] =
    {
        .name = ITEM_NAME("TM11"),
        TM_INFO,
        .description = COMPOUND_STRING(
            "Raises the power of\n"
            "Fire-type moves\n"
            "for 5 turns."),
    },

    [ITEM_TM_TAUNT] =
    {
        .name = ITEM_NAME("TM12"),
        TM_INFO,
        .description = COMPOUND_STRING(
            "Enrages the foe so\n"
            "it can only use\n"
            "attack moves."),
    },

    [ITEM_TM_ICE_BEAM] =
    {
        .name = ITEM_NAME("TM13"),
        TM_INFO,
        .description = COMPOUND_STRING(
            "Fires an icy cold\n"
            "beam that may\n"
        #if B_USE_FROSTBITE == TRUE
            "inflict frostbite."),
        #else
            "freeze the foe."),
        #endif
    },

    [ITEM_TM_BLIZZARD] =
    {
        .name = ITEM_NAME("TM14"),
        TM_INFO,
        .description = COMPOUND_STRING(
        #if B_USE_FROSTBITE == TRUE
            "A snow-and-wind\n"
            "attack that may\n"
            "inflict frostbite."),
        #else
            "A brutal snow-and-\n"
            "wind attack that\n"
            "may freeze the foe."),
        #endif
    },

    [ITEM_TM_HYPER_BEAM] =
    {
        .name = ITEM_NAME("TM15"),
        TM_INFO,
        .description = COMPOUND_STRING(
            "Powerful, but needs\n"
            "recharging the\n"
            "next turn."),
    },

    [ITEM_TM_LIGHT_SCREEN] =
    {
        .name = ITEM_NAME("TM16"),
        TM_INFO,
        .description = COMPOUND_STRING(
            "Creates a wall of\n"
            "light that lowers\n"
            "Sp. Atk damage."),
    },

    [ITEM_TM_PROTECT] =
    {
        .name = ITEM_NAME("TM17"),
        TM_INFO,
        .description = COMPOUND_STRING(
            "Negates all damage,\n"
            "but may fail if used\n"
            "in succession."),
    },

    [ITEM_TM_RAIN_DANCE] =
    {
        .name = ITEM_NAME("TM18"),
        TM_INFO,
        .description = COMPOUND_STRING(
            "Raises the power of\n"
            "Water-type moves\n"
            "for 5 turns."),
    },

    [ITEM_TM_GIGA_DRAIN] =
    {
        .name = ITEM_NAME("TM19"),
        TM_INFO,
        .description = COMPOUND_STRING(
            "Recovers half the\n"
            "HP of the damage \n"
            "this move inflicts."),
    },

    [ITEM_TM_SAFEGUARD] =
    {
        .name = ITEM_NAME("TM20"),
        TM_INFO,
        .description = COMPOUND_STRING(
            "Prevents status\n"
            "abnormality with a\n"
            "mystical power."),
    },

    [ITEM_TM_FRUSTRATION] =
    {
        .name = ITEM_NAME("TM21"),
        TM_INFO,
        .description = COMPOUND_STRING(
            "The less the user\n"
            "likes you, the more\n"
            "powerful this move."),
    },

    [ITEM_TM_SOLAR_BEAM] =
    {
        .name = ITEM_NAME("TM22"),
        TM_INFO,
        .description = COMPOUND_STRING(
            "Absorbs sunlight in\n"
            "the 1st turn, then\n"
            "attacks next turn."),
    },

    [ITEM_TM_IRON_TAIL] =
    {
        .name = ITEM_NAME("TM23"),
        TM_INFO,
        .description = COMPOUND_STRING(
            "Slams the foe with\n"
            "a hard tail. It may\n"
            "lower Defense."),
    },

    [ITEM_TM_THUNDERBOLT] =
    {
        .name = ITEM_NAME("TM24"),
        TM_INFO,
        .description = COMPOUND_STRING(
            "A powerful electric\n"
            "attack that may\n"
            "cause paralysis."),
    },

    [ITEM_TM_THUNDER] =
    {
        .name = ITEM_NAME("TM25"),
        TM_INFO,
        .description = COMPOUND_STRING(
            "Strikes the foe\n"
            "with a thunderbolt.\n"
            "It may paralyze."),
    },

    [ITEM_TM_EARTHQUAKE] =
    {
        .name = ITEM_NAME("TM26"),
        TM_INFO,
        .description = COMPOUND_STRING(
            "Causes a quake\n"
            "that has no effect\n"
            "on flying foes."),
    },

    [ITEM_TM_RETURN] =
    {
        .name = ITEM_NAME("TM27"),
        TM_INFO,
        .description = COMPOUND_STRING(
            "The more the user\n"
            "likes you, the more\n"
            "powerful this move."),
    },

    [ITEM_TM_DIG] =
    {
        .name = ITEM_NAME("TM28"),
        TM_INFO,
        .description = COMPOUND_STRING(
            "Digs underground\n"
            "the 1st turn, then\n"
            "strikes next turn."),
    },

    [ITEM_TM_PSYCHIC] =
    {
        .name = ITEM_NAME("TM29"),
        TM_INFO,
        .description = COMPOUND_STRING(
            "A powerful psychic\n"
            "attack that may\n"
            "lower Sp. Def."),
    },

    [ITEM_TM_SHADOW_BALL] =
    {
        .name = ITEM_NAME("TM30"),
        TM_INFO,
        .description = COMPOUND_STRING(
            "Hurls a dark lump\n"
            "at the foe. It may\n"
            "lower Sp. Def."),
    },

    [ITEM_TM_BRICK_BREAK] =
    {
        .name = ITEM_NAME("TM31"),
        TM_INFO,
        .description = COMPOUND_STRING(
            "Destroys barriers\n"
            "like Light Screen\n"
            "and causes damage."),
    },

    [ITEM_TM_DOUBLE_TEAM] =
    {
        .name = ITEM_NAME("TM32"),
        TM_INFO,
        .description = COMPOUND_STRING(
            "Creates illusory\n"
            "copies to enhance\n"
            "elusiveness."),
    },

    [ITEM_TM_REFLECT] =
    {
        .name = ITEM_NAME("TM33"),
        TM_INFO,
        .description = COMPOUND_STRING(
            "Creates a wall of\n"
            "light that weakens\n"
            "physical attacks."),
    },

    [ITEM_TM_SHOCK_WAVE] =
    {
        .name = ITEM_NAME("TM34"),
        TM_INFO,
        .description = COMPOUND_STRING(
            "Zaps the foe with a\n"
            "jolt of electricity\n"
            "that never misses."),
    },

    [ITEM_TM_FLAMETHROWER] =
    {
        .name = ITEM_NAME("TM35"),
        TM_INFO,
        .description = COMPOUND_STRING(
            "Looses a stream of\n"
            "fire that may burn\n"
            "the foe."),
    },

    [ITEM_TM_SLUDGE_BOMB] =
    {
        .name = ITEM_NAME("TM36"),
        TM_INFO,
        .description = COMPOUND_STRING(
            "Hurls sludge at the\n"
            "foe. It may poison\n"
            "the foe."),
    },

    [ITEM_TM_SANDSTORM] =
    {
        .name = ITEM_NAME("TM37"),
        TM_INFO,
        .description = COMPOUND_STRING(
            "Causes a sandstorm\n"
            "that hits the foe\n"
            "over several turns."),
    },

    [ITEM_TM_FIRE_BLAST] =
    {
        .name = ITEM_NAME("TM38"),
        TM_INFO,
        .description = COMPOUND_STRING(
            "A powerful fire\n"
            "attack that may\n"
            "burn the foe."),
    },

    [ITEM_TM_ROCK_TOMB] =
    {
        .name = ITEM_NAME("TM39"),
        TM_INFO,
        .description = COMPOUND_STRING(
            "Stops the foe from\n"
            "moving with rocks.\n"
            "May lower Speed."),
    },

    [ITEM_TM_AERIAL_ACE] =
    {
        .name = ITEM_NAME("TM40"),
        TM_INFO,
        .description = COMPOUND_STRING(
            "An extremely fast\n"
            "attack that can't\n"
            "be avoided."),
    },

    [ITEM_TM_TORMENT] =
    {
        .name = ITEM_NAME("TM41"),
        TM_INFO,
        .description = COMPOUND_STRING(
            "Prevents the foe\n"
            "from using the same\n"
            "move in a row."),
    },

    [ITEM_TM_FACADE] =
    {
        .name = ITEM_NAME("TM42"),
        TM_INFO,
        .description = COMPOUND_STRING(
            "Raises Attack when\n"
            "poisoned, burned,\n"
            "or paralyzed."),
    },

    [ITEM_TM_SECRET_POWER] =
    {
        .name = ITEM_NAME("TM43"),
        TM_INFO,
        .description = COMPOUND_STRING(
            "Adds an effect to\n"
            "attack depending\n"
            "on the location."),
    },

    [ITEM_TM_REST] =
    {
        .name = ITEM_NAME("TM44"),
        TM_INFO,
        .description = COMPOUND_STRING(
            "The user sleeps for\n"
            "2 turns to restore\n"
            "health and status."),
    },

    [ITEM_TM_ATTRACT] =
    {
        .name = ITEM_NAME("TM45"),
        TM_INFO,
        .description = COMPOUND_STRING(
            "Makes it tough to\n"
            "attack a foe of the\n"
            "opposite gender."),
    },

    [ITEM_TM_THIEF] =
    {
        .name = ITEM_NAME("TM46"),
        TM_INFO,
        .description = COMPOUND_STRING(
            "While attacking,\n"
            "it may steal the\n"
            "foe's held item."),
    },

    [ITEM_TM_STEEL_WING] =
    {
        .name = ITEM_NAME("TM47"),
        TM_INFO,
        .description = COMPOUND_STRING(
            "Spreads hard-\n"
            "edged wings and\n"
            "slams into the foe."),
    },

    [ITEM_TM_SKILL_SWAP] =
    {
        .name = ITEM_NAME("TM48"),
        TM_INFO,
        .description = COMPOUND_STRING(
            "Switches abilities\n"
            "with the foe on the\n"
            "turn this is used."),
    },

    [ITEM_TM_SNATCH] =
    {
        .name = ITEM_NAME("TM49"),
        TM_INFO,
        .description = COMPOUND_STRING(
            "Steals the effects\n"
            "of the move the foe\n"
            "is trying to use."),
    },

    [ITEM_TM_OVERHEAT] =
    {
        .name = ITEM_NAME("TM50"),
        TM_INFO,
        .description = COMPOUND_STRING(
            "Enables full-power\n"
            "attack, but sharply\n"
            "lowers Sp. Atk."),
    },

    [ITEM_TM51] =
    {
        .name = ITEM_NAME("TM51"),
        TM_INFO,
        .description = COMPOUND_STRING("Roost"),
    },

    [ITEM_TM52] =
    {
        .name = ITEM_NAME("TM52"),
        TM_INFO,
        .description = COMPOUND_STRING("Focus Blast"),
    },

    [ITEM_TM53] =
    {
        .name = ITEM_NAME("TM53"),
        TM_INFO,
        .description = COMPOUND_STRING("Energy Ball"),
    },

    [ITEM_TM54] =
    {
        .name = ITEM_NAME("TM54"),
        TM_INFO,
        .description = COMPOUND_STRING("False Swipe"),
    },

    [ITEM_TM55] =
    {
        .name = ITEM_NAME("TM55"),
        TM_INFO,
        .description = COMPOUND_STRING("Brine"),
    },

    [ITEM_TM56] =
    {
        .name = ITEM_NAME("TM56"),
        TM_INFO,
        .description = COMPOUND_STRING("Signal Beam"),
    },

    [ITEM_TM57] =
    {
        .name = ITEM_NAME("TM57"),
        TM_INFO,
        .description = COMPOUND_STRING("Supercell Slam"),
    },

    [ITEM_TM58] =
    {
        .name = ITEM_NAME("TM58"),
        TM_INFO,
        .description = COMPOUND_STRING("Psychic Fangs"),
    },

    [ITEM_TM59] =
    {
        .name = ITEM_NAME("TM59"),
        TM_INFO,
        .description = COMPOUND_STRING("Dragon Pulse"),
    },

    [ITEM_TM60] =
    {
        .name = ITEM_NAME("TM60"),
        TM_INFO,
        .description = COMPOUND_STRING("Drain Punch"),
    },

    [ITEM_TM61] =
    {
        .name = ITEM_NAME("TM61"),
        TM_INFO,
        .description = COMPOUND_STRING("Will-o-Wisp"),
    },

    [ITEM_TM62] =
    {
        .name = ITEM_NAME("TM62"),
        TM_INFO,
        .description = COMPOUND_STRING("Silver Wind"),
    },

    [ITEM_TM63] =
    {
        .name = ITEM_NAME("TM63"),
        TM_INFO,
        .description = COMPOUND_STRING("Dazzling Gleam"),
    },

    [ITEM_TM64] =
    {
        .name = ITEM_NAME("TM64"),
        TM_INFO,
        .description = COMPOUND_STRING("Seed Bomb"),
    },

    [ITEM_TM65] =
    {
        .name = ITEM_NAME("TM65"),
        TM_INFO,
        .description = COMPOUND_STRING("Shadow Claw"),
    },

    [ITEM_TM66] =
    {
        .name = ITEM_NAME("TM66"),
        TM_INFO,
        .description = COMPOUND_STRING("Payback"),
    },

    [ITEM_TM67] =
    {
        .name = ITEM_NAME("TM67"),
        TM_INFO,
        .description = COMPOUND_STRING("Power Gem"),
    },

    [ITEM_TM68] =
    {
        .name = ITEM_NAME("TM68"),
        TM_INFO,
        .description = COMPOUND_STRING("Giga Impact"),
    },

    [ITEM_TM69] =
    {
        .name = ITEM_NAME("TM69"),
        TM_INFO,
        .description = COMPOUND_STRING("Play Rough"),
    },

    [ITEM_TM70] =
    {
        .name = ITEM_NAME("TM70"),
        TM_INFO,
        .description = COMPOUND_STRING("Leech Life"),
    },

    [ITEM_TM71] =
    {
        .name = ITEM_NAME("TM71"),
        TM_INFO,
        .description = COMPOUND_STRING("Stone Edge"),
    },

    [ITEM_TM72] =
    {
        .name = ITEM_NAME("TM72"),
        TM_INFO,
        .description = COMPOUND_STRING("Icicle Crash"),
    },

    [ITEM_TM73] =
    {
        .name = ITEM_NAME("TM73"),
        TM_INFO,
        .description = COMPOUND_STRING("Thunder Wave"),
    },

    [ITEM_TM74] =
    {
        .name = ITEM_NAME("TM74"),
        TM_INFO,
        .description = COMPOUND_STRING("Nasty Plot"),
    },

    [ITEM_TM75] =
    {
        .name = ITEM_NAME("TM75"),
        TM_INFO,
        .description = COMPOUND_STRING("Swords Dance"),
    },

    [ITEM_TM76] =
    {
        .name = ITEM_NAME("TM76"),
        TM_INFO,
        .description = COMPOUND_STRING("Stealth Rock"),
    },

    [ITEM_TM77] =
    {
        .name = ITEM_NAME("TM77"),
        TM_INFO,
        .description = COMPOUND_STRING("Psych Up"),
    },

    [ITEM_TM78] =
    {
        .name = ITEM_NAME("TM78"),
        TM_INFO,
        .description = COMPOUND_STRING("Crunch"),
    },

    [ITEM_TM79] =
    {
        .name = ITEM_NAME("TM79"),
        TM_INFO,
        .description = COMPOUND_STRING("Dark Pulse"),
    },

    [ITEM_TM80] =
    {
        .name = ITEM_NAME("TM80"),
        TM_INFO,
        .description = COMPOUND_STRING("Rock Slide"),
    },

    [ITEM_TM81] =
    {
        .name = ITEM_NAME("TM81"),
        TM_INFO,
        .description = COMPOUND_STRING("X-Scissor"),
    },

    [ITEM_TM82] =
    {
        .name = ITEM_NAME("TM82"),
        TM_INFO,
        .description = COMPOUND_STRING("Night Slash"),
    },

    [ITEM_TM83] =
    {
        .name = ITEM_NAME("TM83"),
        TM_INFO,
        .description = COMPOUND_STRING("Iron Head"),
    },

    [ITEM_TM84] =
    {
        .name = ITEM_NAME("TM84"),
        TM_INFO,
        .description = COMPOUND_STRING("Poison Jab"),
    },

    [ITEM_TM85] =
    {
        .name = ITEM_NAME("TM85"),
        TM_INFO,
        .description = COMPOUND_STRING("Aura Sphere"),
    },

    [ITEM_TM86] =
    {
        .name = ITEM_NAME("TM86"),
        TM_INFO,
        .description = COMPOUND_STRING("Grass Knot"),
    },

    [ITEM_TM87] =
    {
        .name = ITEM_NAME("TM87"),
        TM_INFO,
        .description = COMPOUND_STRING("Bug Buzz"),
    },

    [ITEM_TM88] =
    {
        .name = ITEM_NAME("TM88"),
        TM_INFO,
        .description = COMPOUND_STRING("Acrobatics"),
    },

    [ITEM_TM89] =
    {
        .name = ITEM_NAME("TM89"),
        TM_INFO,
        .description = COMPOUND_STRING("U-turn"),
    },

    [ITEM_TM90] =
    {
        .name = ITEM_NAME("TM90"),
        TM_INFO,
        .description = COMPOUND_STRING("Body Slam"),
    },

    [ITEM_TM91] =
    {
        .name = ITEM_NAME("TM91"),
        TM_INFO,
        .description = COMPOUND_STRING("Flash Cannon"),
    },

    [ITEM_TM92] =
    {
        .name = ITEM_NAME("TM92"),
        TM_INFO,
        .description = COMPOUND_STRING("Trick Room"),
    },

    [ITEM_TM93] =
    {
        .name = ITEM_NAME("TM93"),
        TM_INFO,
        .description = COMPOUND_STRING("Liquidation"),
    },

    [ITEM_TM94] =
    {
        .name = ITEM_NAME("TM94"),
        TM_INFO,
        .description = COMPOUND_STRING("Thunder Punch"),
    },

    [ITEM_TM95] =
    {
        .name = ITEM_NAME("TM95"),
        TM_INFO,
        .description = COMPOUND_STRING("Fire Punch"),
    },

    [ITEM_TM96] =
    {
        .name = ITEM_NAME("TM96"),
        TM_INFO,
        .description = COMPOUND_STRING("Ice Punch"),
    },

    [ITEM_TM97] =
    {
        .name = ITEM_NAME("TM97"),
        TM_INFO,
        .description = COMPOUND_STRING("Earth Power"),
    },

    [ITEM_TM98] =
    {
        .name = ITEM_NAME("TM98"),
        TM_INFO,
        .description = COMPOUND_STRING("Air Slash"),
    },

    [ITEM_TM99] =
    {
        .name = ITEM_NAME("TM99"),
        TM_INFO,
        .description = COMPOUND_STRING("Body Press"),
    },

    [ITEM_TM100] =
    {
        .name = ITEM_NAME("TM100"),
        TM_INFO,
        .description = COMPOUND_STRING("Moonblast"),
    },

    [ITEM_TM_CUT] =
    {
        .name = ITEM_NAME("TM101"),
        TM_INFO,
        .description = COMPOUND_STRING(
            "Attacks the foe\n"
            "with sharp blades\n"
            "or claws."),
    },

    [ITEM_TM_FLY] =
    {
        .name = ITEM_NAME("TM102"),
        TM_INFO,
        .description = COMPOUND_STRING(
            "Flies up on the\n"
            "first turn, then\n"
            "attacks next turn."),
    },

    [ITEM_TM_SURF] =
    {
        .name = ITEM_NAME("TM103"),
        TM_INFO,
        .description = COMPOUND_STRING(
            "Creates a huge\n"
            "wave, then crashes\n"
            "it down on the foe."),
    },

    [ITEM_TM_STRENGTH] =
    {
        .name = ITEM_NAME("TM104"),
        TM_INFO,
        .description = COMPOUND_STRING(
            "Builds enormous\n"
            "power, then slams\n"
            "the foe."),
    },

    [ITEM_TM_FLASH] =
    {
        .name = ITEM_NAME("TM105"),
        TM_INFO,
        .description = COMPOUND_STRING(
            "Looses a powerful\n"
            "blast of light that\n"
            "reduces accuracy."),
    },

    [ITEM_TM_ROCK_SMASH] =
    {
        .name = ITEM_NAME("TM106"),
        TM_INFO,
        .description = COMPOUND_STRING(
            "A rock-crushingly\n"
            "tough attack that\n"
            "may lower Defense."),
    },

    [ITEM_TM_WATERFALL] =
    {
        .name = ITEM_NAME("TM107"),
        TM_INFO,
        .description = COMPOUND_STRING(
            "Attacks the foe\n"
            "with enough power\n"
            "to climb waterfalls."),
    },

    [ITEM_TM_DIVE] =
    {
        .name = ITEM_NAME("TM108"),
        TM_INFO,
        .description = COMPOUND_STRING(
            "Dives underwater\n"
            "the 1st turn, then\n"
            "attacks next turn."),
    },


// Charms

    [ITEM_OVAL_CHARM] =
    {
        .name = ITEM_NAME("Oval Charm"),
        .price = 0,
        .importance = 1,
        .description = COMPOUND_STRING(
            "Raises the chance\n"
            "of finding eggs\n"
            "at the daycare."),
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        ITEM_ICON(OvalCharm),
    },

    [ITEM_SHINY_CHARM] =
    {
        .name = ITEM_NAME("Shiny Charm"),
        .price = 0,
        .importance = 1,
        .description = COMPOUND_STRING(
            "A charm that will\n"
            "raise the chance\n"
            "of Shiny Pokémon."),
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        ITEM_ICON(ShinyCharm),
    },

    [ITEM_CATCHING_CHARM] =
    {
        .name = ITEM_NAME("Catching Charm"),
        .price = 0,
        .importance = 1,
        .description = COMPOUND_STRING(
            "A charm that raises\n"
            "the chance of\n"
            "Critical Captures."),
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        ITEM_ICON(CatchingCharm),
    },

    [ITEM_EXP_CHARM] =
    {
        .name = ITEM_NAME("Exp. Charm"),
        .price = 0,
        .importance = 1,
        .description = COMPOUND_STRING(
            "A charm that raises\n"
            "the amount of Exp.\n"
            "earned in battle."),
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        ITEM_ICON(ExpCharm),
    },

// Form-changing Key Items

    [ITEM_ROTOM_CATALOG] =
    {
        .name = ITEM_NAME("Rotom Catalog"),
        .price = LEGENDARY_ITEM_COST,
        .importance = 1,
        .description = COMPOUND_STRING(
            "A catalog full of\n"
            "devices liked by\n"
            "Rotom."),
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_RotomCatalog,
        ITEM_ICON(RotomCatalog),
    },

    [ITEM_GRACIDEA] =
    {
        .name = ITEM_NAME("Gracidea"),
        .price = LEGENDARY_ITEM_COST,
        .importance = 1,
        .description = COMPOUND_STRING(
            "Bouquets made with\n"
            "it are offered as a\n"
            "token of gratitude."),
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_FormChange,
        ITEM_ICON(Gracidea),
    },

    [ITEM_REVEAL_GLASS] =
    {
        .name = ITEM_NAME("Reveal Glass"),
        .pluralName = ITEM_PLURAL_NAME("Reveal Glasses"),
        .price = LEGENDARY_ITEM_COST,
        .importance = 1,
        .description = COMPOUND_STRING(
            "This glass returns\n"
            "a Pokémon back to\n"
            "its original form."),
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_FormChange,
        ITEM_ICON(RevealGlass),
    },

    [ITEM_DNA_SPLICERS] =
    {
        .name = ITEM_NAME("DNA Splicers"),
        .pluralName = ITEM_PLURAL_NAME("DNA Splicers"),
        .price = LEGENDARY_ITEM_COST,
        .importance = 1,
        .description = COMPOUND_STRING(
            "Splicer that fuses\n"
            "Kyurem and a\n"
            "certain Pokémon."),
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Fusion,
        ITEM_ICON(DNASplicers),
    },

    [ITEM_ZYGARDE_CUBE] =
    {
        .name = ITEM_NAME("Zygarde Cube"),
        .price = LEGENDARY_ITEM_COST,
        .importance = 1,
        .description = COMPOUND_STRING(
            "An item to store\n"
            "Zygarde Cores and\n"
            "Cells."),
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_ZygardeCube,
        ITEM_ICON(ZygardeCube),
    },

    [ITEM_PRISON_BOTTLE] =
    {
        .name = ITEM_NAME("Prison Bottle"),
        .price = LEGENDARY_ITEM_COST,
        .importance = 1,
        .description = COMPOUND_STRING(
            "A bottle used to\n"
            "seal a certain\n"
            "Pokémon long ago."),
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_FormChange,
        ITEM_ICON(PrisonBottle),
    },

    [ITEM_N_SOLARIZER] =
    {
        .name = ITEM_NAME("N-Solarizer"),
        .price = LEGENDARY_ITEM_COST,
        .importance = 1,
        .description = COMPOUND_STRING(
            "A device to fuse\n"
            "and split Necrozma\n"
            "using a Solgaleo."),
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Fusion,
        .iconPic = gItemIcon_NecrozmaFuser,
        .iconPalette = gItemIconPalette_NSolarizer,
    },

    [ITEM_N_LUNARIZER] =
    {
        .name = ITEM_NAME("N-Lunarizer"),
        .price = LEGENDARY_ITEM_COST,
        .importance = 1,
        .description = COMPOUND_STRING(
            "A device to fuse\n"
            "and split Necrozma\n"
            "using a Lunala."),
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Fusion,
        .iconPic = gItemIcon_NecrozmaFuser,
        .iconPalette = gItemIconPalette_NLunarizer,
    },

    [ITEM_REINS_OF_UNITY] =
    {
        .name = ITEM_NAME("Reins of Unity"),
        .pluralName = ITEM_PLURAL_NAME("Reins of Unity"),
        .price = LEGENDARY_ITEM_COST,
        .importance = 1,
        .description = COMPOUND_STRING(
            "Reins that unite\n"
            "Calyrex with its\n"
            "beloved steed."),
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Fusion,
        ITEM_ICON(ReinsOfUnity),
    },

// Battle Mechanic Key Items

    [ITEM_MEGA_RING] =
    {
        .name = ITEM_NAME("Mega Ring"),
        .price = 0,
        .importance = 1,
        .description = COMPOUND_STRING(
            "Enables {PKMN} holding\n"
            "their Mega Stone to\n"
            "Mega Evolve."),
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        ITEM_ICON(MegaRing),
    },

    [ITEM_Z_POWER_RING] =
    {
        .name = ITEM_NAME("Z-Power Ring"),
        .price = 0,
        .importance = 1,
        .description = COMPOUND_STRING(
            "A strange ring\n"
            "that enables\n"
            "Z-Move usage."),
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        ITEM_ICON(ZPowerRing),
    },

    [ITEM_DYNAMAX_BAND] =
    {
        .name = ITEM_NAME("Dynamax Band"),
        .price = 0,
        .description = COMPOUND_STRING(
            "A band carrying a\n"
            "Wishing Star that\n"
            "allows Dynamaxing."),
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        ITEM_ICON(DynamaxBand),
    },

// Misc. Key Items

    [ITEM_BICYCLE] =
    {
        .name = ITEM_NAME("Bicycle"),
        .price = 0,
        .description = COMPOUND_STRING(
            "A folding bicycle\n"
            "that is faster than\n"
            "the Running Shoes."),
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_FIELD,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        ITEM_ICON(Bicycle),
    },

    [ITEM_MACH_BIKE] =
    {
        .name = ITEM_NAME("Mach Bike"),
        .price = 0,
        .description = COMPOUND_STRING(
            "A folding bicycle\n"
            "that doubles your\n"
            "speed or better."),
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_FIELD,
        .fieldUseFunc = ItemUseOutOfBattle_Bike,
        .secondaryId = MACH_BIKE,
        ITEM_ICON(MachBike),
    },

    [ITEM_ACRO_BIKE] =
    {
        .name = ITEM_NAME("Acro Bike"),
        .price = 0,
        .description = COMPOUND_STRING(
            "A folding bicycle\n"
            "capable of jumps\n"
            "and wheelies."),
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_FIELD,
        .fieldUseFunc = ItemUseOutOfBattle_Bike,
        .secondaryId = ACRO_BIKE,
        ITEM_ICON(AcroBike),
    },

    [ITEM_OLD_ROD] =
    {
        .name = ITEM_NAME("Old Rod"),
        .price = 0,
        .description = COMPOUND_STRING(
            "Use by any body of\n"
            "water to fish for\n"
            "wild Pokémon."),
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_FIELD,
        .fieldUseFunc = ItemUseOutOfBattle_Rod,
        .secondaryId = OLD_ROD,
        ITEM_ICON(OldRod),
    },

    [ITEM_GOOD_ROD] =
    {
        .name = ITEM_NAME("Good Rod"),
        .price = 0,
        .description = COMPOUND_STRING(
            "A decent fishing\n"
            "rod for catching\n"
            "wild Pokémon."),
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_FIELD,
        .fieldUseFunc = ItemUseOutOfBattle_Rod,
        .secondaryId = GOOD_ROD,
        ITEM_ICON(GoodRod),
    },

    [ITEM_SUPER_ROD] =
    {
        .name = ITEM_NAME("Super Rod"),
        .price = 0,
        .description = COMPOUND_STRING(
            "The best fishing\n"
            "rod for catching\n"
            "wild Pokémon."),
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_FIELD,
        .fieldUseFunc = ItemUseOutOfBattle_Rod,
        .secondaryId = SUPER_ROD,
        ITEM_ICON(SuperRod),
    },

    [ITEM_DOWSING_MACHINE] =
    {
        .name = ITEM_NAME("Itemfinder"),
        .price = 0,
        .description = COMPOUND_STRING(
            "A device that\n"
            "signals an invisible\n"
            "item by sound."),
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_FIELD,
        .fieldUseFunc = ItemUseOutOfBattle_Itemfinder,
        ITEM_ICON(DowsingMachine),
    },

    [ITEM_TOWN_MAP] =
    {
        .name = ITEM_NAME("Town Map"),
        .price = 0,
        .description = COMPOUND_STRING(
            "Can be viewed\n"
            "anytime. Shows your\n"
            "present location."),
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_TownMap,
        ITEM_ICON(TownMap),
    },

    [ITEM_VS_SEEKER] =
    {
        .name = ITEM_NAME("Vs. Seeker"),
        .price = 0,
        .description = COMPOUND_STRING(
            "A rechargeable unit\n"
            "that flags battle-\n"
            "ready Trainers."),
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_FIELD,
#if I_VS_SEEKER_CHARGING != 0
        .fieldUseFunc = FieldUseFunc_VsSeeker,
#else
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
#endif
        ITEM_ICON(VsSeeker),
    },

    [ITEM_TM_CASE] =
    {
        .name = ITEM_NAME("TM Case"),
        .price = 0,
        .description = COMPOUND_STRING(
            "A convenient case\n"
            "that holds TMs"),
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        ITEM_ICON(TMCase),
    },

    [ITEM_BERRY_POUCH] =
    {
        .name = ITEM_NAME("Berry Pouch"),
        .pluralName = ITEM_PLURAL_NAME("Berry Pouches"),
        .price = 0,
        .description = COMPOUND_STRING(
            "A convenient\n"
            "container that\n"
            "holds Berries."),
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        ITEM_ICON(BerryPouch),
    },

    [ITEM_POKEMON_BOX_LINK] =
    {
        .name = ITEM_NAME("{PKMN} Box Link"),
        .price = 0,
        .description = COMPOUND_STRING(
            "This device grants\n"
            "access to the {PKMN}\n"
            "Storage System."),
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_FIELD,
        .fieldUseFunc = ItemUseOutOfBattle_PokemonBoxLink,
        ITEM_ICON(PokemonBoxLink),
    },

    [ITEM_COIN_CASE] =
    {
        .name = ITEM_NAME("Coin Case"),
        .price = 0,
        .description = COMPOUND_STRING(
            "A case that holds\n"
            "up to 9,999 Coins."),
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CoinCase,
        ITEM_ICON(CoinCase),
    },

    [ITEM_POWDER_JAR] =
    {
        .name = ITEM_NAME("Powder Jar"),
        .price = 0,
        .description = COMPOUND_STRING(
            "Stores Berry\n"
            "Powder made using\n"
            "a Berry Crusher."),
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_PowderJar,
        ITEM_ICON(PowderJar),
    },

    [ITEM_WAILMER_PAIL] =
    {
        .name = ITEM_NAME("Wailmer Pail"),
        .price = 0,
        .description = COMPOUND_STRING(
            "A tool used for\n"
            "watering Berries\n"
            "and plants."),
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_FIELD,
        .fieldUseFunc = ItemUseOutOfBattle_WailmerPail,
        ITEM_ICON(WailmerPail),
    },

    [ITEM_POKE_RADAR] =
    {
        .name = ITEM_NAME("Rent-a-Wail"),
        .price = 0,
        .description = COMPOUND_STRING(
            "Calls a Wailmer to\n"
            "carry the user\n"
            "across water."),
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        ITEM_ICON(PokeRadar),
    },

    [ITEM_POKEBLOCK_CASE] =
    {
        .name = ITEM_NAME("{POKEBLOCK} Case"),
        .price = 0,
        .description = COMPOUND_STRING(
            "A case for holding\n"
            "{POKEBLOCK}s made with\n"
            "a Berry Blender."),
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_PBLOCK_CASE,
        .fieldUseFunc = ItemUseOutOfBattle_PokeblockCase,
        ITEM_ICON(PokeblockCase),
    },

    [ITEM_SOOT_SACK] =
    {
        .name = ITEM_NAME("Soot Sack"),
        .price = 0,
        .description = COMPOUND_STRING(
            "A sack used to\n"
            "gather and hold\n"
            "volcanic ash."),
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_SootSack,
        .secondaryId = 0,
        ITEM_ICON(SootSack),
    },

    [ITEM_POKE_FLUTE] =
    {
        .name = ITEM_NAME("Poké Flute"),
        .price = 0,
        .description = COMPOUND_STRING(
            "A sweet-sounding\n"
            "flute that awakens\n"
            "Pokémon."),
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_PokeFlute,
        .battleUsage = EFFECT_ITEM_USE_POKE_FLUTE,
        ITEM_ICON(PokeFlute),
    },

    [ITEM_FAME_CHECKER] =
    {
        .name = ITEM_NAME("Fall Scaler"),
        .price = 0,
        .description = COMPOUND_STRING(
            "Allows the user\n"
            "to scale waterfalls\n"
            "with ease."),
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        ITEM_ICON(FameChecker),
    },

    [ITEM_TEACHY_TV] =
    {
        .name = ITEM_NAME("Teachy TV"),
        .price = 0,
        .description = COMPOUND_STRING(
            "A TV set tuned to\n"
            "an advice program\n"
            "for Trainers."),
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_FIELD,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        ITEM_ICON(TeachyTV),
    },

// Story Key Items

    [ITEM_SS_TICKET] =
    {
        .name = ITEM_NAME("S.S. Ticket"),
        .price = 0,
        .description = COMPOUND_STRING(
            "The ticket required\n"
            "for sailing on a\n"
            "ferry."),
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        ITEM_ICON(SSTicket),
    },

    [ITEM_EON_TICKET] =
    {
        .name = ITEM_NAME("Eon Ticket"),
        .price = 0,
        .description = COMPOUND_STRING(
            "The ticket for a\n"
            "ferry to a distant\n"
            "southern island."),
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 1,
        ITEM_ICON(EonTicket),
    },

    [ITEM_MYSTIC_TICKET] =
    {
        .name = ITEM_NAME("Mystic Ticket"),
        .price = 0,
        .description = COMPOUND_STRING(
            "A ticket required\n"
            "to board the ship\n"
            "to Navel Rock."),
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        ITEM_ICON(MysticTicket),
    },

    [ITEM_AURORA_TICKET] =
    {
        .name = ITEM_NAME("Aurora Ticket"),
        .price = 0,
        .description = COMPOUND_STRING(
            "A ticket required\n"
            "to board the ship\n"
            "to Birth Island."),
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        ITEM_ICON(AuroraTicket),
    },

    [ITEM_OLD_SEA_MAP] =
    {
        .name = ITEM_NAME("Old Sea Map"),
        .price = 0,
        .description = COMPOUND_STRING(
            "A faded sea chart\n"
            "that shows the way\n"
            "to a certain island."),
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        ITEM_ICON(OldSeaMap),
    },

    [ITEM_LETTER] =
    {
        .name = ITEM_NAME("Letter"),
        .price = 0,
        .description = COMPOUND_STRING(
            "A letter to Steven\n"
            "from the President\n"
            "of the Devon Corp."),
        .importance = 2,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .iconPic = gItemIcon_Letter,
        .iconPalette = gItemIconPalette_LavaCookieAndLetter,
    },

    [ITEM_DEVON_PARTS] =
    {
        .name = ITEM_NAME("Devon Parts"),
        .pluralName = ITEM_PLURAL_NAME("Devon Parts"),
        .price = 0,
        .description = COMPOUND_STRING(
            "A package that\n"
            "contains Devon's\n"
            "machine parts."),
        .importance = 2,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        ITEM_ICON(DevonParts),
    },

    [ITEM_GO_GOGGLES] =
    {
        .name = ITEM_NAME("Go-Goggles"),
        .pluralName = ITEM_PLURAL_NAME("Go-Goggles"),
        .price = 0,
        .description = COMPOUND_STRING(
            "Nifty goggles that\n"
            "protect eyes from\n"
            "desert sandstorms."),
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        ITEM_ICON(GoGoggles),
    },

    [ITEM_DEVON_SCOPE] =
    {
        .name = ITEM_NAME("Devon Scope"),
        .price = 0,
        .description = COMPOUND_STRING(
            "A device by Devon\n"
            "that signals any\n"
            "unseeable Pokémon."),
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        ITEM_ICON(DevonScope),
    },

    [ITEM_BASEMENT_KEY] =
    {
        .name = ITEM_NAME("Basement Key"),
        .price = 0,
        .description = COMPOUND_STRING(
            "The key for New\n"
            "Mauville beneath\n"
            "Mauville City."),
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .iconPic = gItemIcon_BasementKey,
        .iconPalette = gItemIconPalette_OldKey,
    },

    [ITEM_SCANNER] =
    {
        .name = ITEM_NAME("Scanner"),
        .price = 0,
        .description = COMPOUND_STRING(
            "A device found\n"
            "inside the\n"
            "Abandoned Ship."),
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        ITEM_ICON(Scanner),
    },

    [ITEM_STORAGE_KEY] =
    {
        .name = ITEM_NAME("Storage Key"),
        .price = 0,
        .description = COMPOUND_STRING(
            "The key to the\n"
            "storage inside the\n"
            "Abandoned Ship."),
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .iconPic = gItemIcon_StorageKey,
        .iconPalette = gItemIconPalette_OldKey,
    },

    [ITEM_KEY_TO_ROOM_1] =
    {
        .name = ITEM_NAME("Key to Room 1"),
        .pluralName = ITEM_PLURAL_NAME("Keys to Room 1"),
        .price = 0,
        .description = sKeyToRoomDesc,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .iconPic = gItemIcon_KeyToRoom1,
        .iconPalette = gItemIconPalette_Key,
    },

    [ITEM_KEY_TO_ROOM_2] =
    {
        .name = ITEM_NAME("Key to Room 2"),
        .pluralName = ITEM_PLURAL_NAME("Keys to Room 2"),
        .price = 0,
        .description = sKeyToRoomDesc,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .iconPic = gItemIcon_KeyToRoom2,
        .iconPalette = gItemIconPalette_Key,
    },

    [ITEM_KEY_TO_ROOM_4] =
    {
        .name = ITEM_NAME("Key to Room 4"),
        .pluralName = ITEM_PLURAL_NAME("Keys to Room 4"),
        .price = 0,
        .description = sKeyToRoomDesc,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .iconPic = gItemIcon_KeyToRoom4,
        .iconPalette = gItemIconPalette_Key,
    },

    [ITEM_KEY_TO_ROOM_6] =
    {
        .name = ITEM_NAME("Key to Room 6"),
        .pluralName = ITEM_PLURAL_NAME("Keys to Room 6"),
        .price = 0,
        .description = sKeyToRoomDesc,
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .iconPic = gItemIcon_KeyToRoom6,
        .iconPalette = gItemIconPalette_Key,
    },

    [ITEM_METEORITE] =
    {
        .name = ITEM_NAME("Meteorite"),
        .price = 0,
        .description = COMPOUND_STRING(
            "A meteorite found\n"
            "at Meteor Falls."),
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_FormChange,
        ITEM_ICON(Meteorite),
    },

    [ITEM_MAGMA_EMBLEM] =
    {
        .name = ITEM_NAME("Magma Emblem"),
        .price = 0,
        .description = COMPOUND_STRING(
            "A medal-like item in\n"
            "the same shape as\n"
            "Team Magma's mark."),
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        ITEM_ICON(MagmaEmblem),
    },

    [ITEM_CONTEST_PASS] =
    {
        .name = ITEM_NAME("Contest Pass"),
        .pluralName = ITEM_PLURAL_NAME("Contest Passes"),
        .price = 0,
        .description = COMPOUND_STRING(
            "The pass required\n"
            "for entering\n"
            "Pokémon Contests."),
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        ITEM_ICON(ContestPass),
    },

    [ITEM_PARCEL] =
    {
        .name = ITEM_NAME("Parcel"),
        .price = 0,
        .description = COMPOUND_STRING(
            "A parcel for Prof.\n"
            "Oak from a Pokémon\n"
            "Mart's clerk."),
        .importance = 2,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        ITEM_ICON(Parcel),
    },

    [ITEM_SECRET_KEY] =
    {
        .name = ITEM_NAME("Secret Key"),
        .price = 0,
        .description = COMPOUND_STRING(
            "The key to the\n"
            "Cinnabar Island\n"
            "Gym's entrance."),
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        ITEM_ICON(SecretKey),
    },

    [ITEM_BIKE_VOUCHER] =
    {
        .name = ITEM_NAME("Bike Voucher"),
        .price = 0,
        .description = COMPOUND_STRING(
            "A voucher for\n"
            "obtaining a bicycle\n"
            "from the Bike Shop."),
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        ITEM_ICON(BikeVoucher),
    },

    [ITEM_GOLD_TEETH] =
    {
        .name = ITEM_NAME("Gold Teeth"),
        .pluralName = ITEM_PLURAL_NAME("Gold Teeth"),
        .price = 0,
        .description = COMPOUND_STRING(
            "Gold dentures lost\n"
            "by the Safari\n"
            "Zone's Warden."),
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        ITEM_ICON(GoldTeeth),
    },

    [ITEM_CARD_KEY] =
    {
        .name = ITEM_NAME("Card Key"),
        .price = 0,
        .description = COMPOUND_STRING(
            "A card-type door\n"
            "key used in Silph\n"
            "Co's office."),
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        ITEM_ICON(CardKey),
    },

    [ITEM_LIFT_KEY] =
    {
        .name = ITEM_NAME("Lift Key"),
        .price = 0,
        .description = COMPOUND_STRING(
            "An elevator key\n"
            "used in Team\n"
            "Rocket's Hideout."),
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .iconPic = gItemIcon_LiftKey,
        .iconPalette = gItemIconPalette_Key,
    },

    [ITEM_SILPH_SCOPE] =
    {
        .name = ITEM_NAME("Dive Goggles"),
        .price = 0,
        .description = COMPOUND_STRING(
            "Silph Co's scope\n"
            "makes unseeable\n"
            "Pokémon visible."),
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        ITEM_ICON(SilphScope),
    },

    [ITEM_TRI_PASS] =
    {
        .name = ITEM_NAME("Tri-Pass"),
        .pluralName = ITEM_PLURAL_NAME("Tri-Passes"),
        .price = 0,
        .description = COMPOUND_STRING(
            "A pass for ferries\n"
            "between One, Two,\n"
            "and Three Island."),
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        ITEM_ICON(TriPass),
    },

    [ITEM_RAINBOW_PASS] =
    {
        .name = ITEM_NAME("Rainbow Pass"),
        .pluralName = ITEM_PLURAL_NAME("Rainbow Passes"),
        .price = 0,
        .description = COMPOUND_STRING(
            "For ferries serving\n"
            "Vermilion and the\n"
            "Sevii Islands."),
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        ITEM_ICON(RainbowPass),
    },

    [ITEM_TEA] =
    {
        .name = ITEM_NAME("Tea"),
        .pluralName = ITEM_PLURAL_NAME("Tea"),
        .price = 0,
        .description = COMPOUND_STRING(
            "A thirst-quenching\n"
            "tea prepared by an\n"
            "old lady."),
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        ITEM_ICON(Tea),
    },

    [ITEM_RUBY] =
    {
        .name = ITEM_NAME("Ruby"),
        .pluralName = ITEM_PLURAL_NAME("Rubies"),
        .price = 0,
        .description = COMPOUND_STRING(
            "An exquisite, red-\n"
            "glowing gem that\n"
            "symbolizes passion."),
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .iconPic = gItemIcon_Gem,
        .iconPalette = gItemIconPalette_Ruby,
    },

    [ITEM_SAPPHIRE] =
    {
        .name = ITEM_NAME("Sapphire"),
        .price = 0,
        .description = COMPOUND_STRING(
            "A brilliant blue gem\n"
            "that symbolizes\n"
            "honesty."),
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .iconPic = gItemIcon_Gem,
        .iconPalette = gItemIconPalette_Sapphire,
    },

    [ITEM_ABILITY_SHIELD] =
    {
        .name = ITEM_NAME("Ability Shield"),
        .price = 4000,
        .holdEffect = HOLD_EFFECT_ABILITY_SHIELD,
        .description = COMPOUND_STRING(
            "Ability changes are\n"
            "prevented for this\n"
            "items's holder."),
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 30,
        ITEM_ICON(AbilityShield),
    },

// GEN 9 ITEMS

    [ITEM_CLEAR_AMULET] =
    {
        .name = ITEM_NAME("Clear Amulet"),
        .price = 4000,
        .holdEffect = HOLD_EFFECT_CLEAR_AMULET,
        .description = COMPOUND_STRING(
            "Stat lowering is\n"
            "prevented for this\n"
            "items's holder."),
        HELD_ITEM_INFO,
        .flingPower = 30,
        ITEM_ICON(ClearAmulet),
    },

    [ITEM_PUNCHING_GLOVE] =
    {
        .name = ITEM_NAME("Punching Glove"),
        .price = 4000,
        .holdEffect = HOLD_EFFECT_PUNCHING_GLOVE,
        .description = COMPOUND_STRING(
            "Powers up punching\n"
            "moves and removes\n"
            "their contact."),
        HELD_ITEM_INFO,
        .flingPower = 30,
        ITEM_ICON(PunchingGlove),
    },

    [ITEM_COVERT_CLOAK] =
    {
        .name = ITEM_NAME("Covert Cloak"),
        .price = 4000,
        .holdEffect = HOLD_EFFECT_COVERT_CLOAK,
        .description = COMPOUND_STRING(
            "Protects holder\n"
            "from additional\n"
            "effects of moves."),
        HELD_ITEM_INFO,
        .flingPower = 30,
        ITEM_ICON(CovertCloak),
    },

    [ITEM_LOADED_DICE] =
    {
        .name = ITEM_NAME("Loaded Dice"),
        .pluralName = ITEM_PLURAL_NAME("Loaded Dice"),
        .price = 4000,
        .holdEffect = HOLD_EFFECT_LOADED_DICE,
        .description = COMPOUND_STRING(
            "Rolls high numbers.\n"
            "Multihit strikes\n"
            "hit more times."),
        HELD_ITEM_INFO,
        .flingPower = 30,
        ITEM_ICON(LoadedDice),
    },

    [ITEM_AUSPICIOUS_ARMOR] =
    {
        .name = ITEM_NAME("Auspicious Armor"),
        .price = EVO_ITEM_PRICE,
        .description = COMPOUND_STRING(
            "Armor inhabited by\n"
            "auspicious wishes.\n"
            "Causes evolution."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_EVOLUTION_ITEM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
        .effect = gItemEffect_EvoItem,
        .flingPower = 30,
        ITEM_ICON(AuspiciousArmor),
    },

    [ITEM_BOOSTER_ENERGY] =
    {
        .name = ITEM_NAME("Booster Energy"),
        .pluralName = ITEM_PLURAL_NAME("Booster Energies"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_BOOSTER_ENERGY,
        .description = COMPOUND_STRING(
            "Encapsuled energy\n"
            "ups Pokémon with\n"
            "certain Abilities."),
        HELD_ITEM_INFO,
        .flingPower = 30,
        ITEM_ICON(BoosterEnergy),
    },

    [ITEM_BIG_BAMBOO_SHOOT] =
    {
        .name = ITEM_NAME("Big Bamboo Shoot"),
        .price = 3000,
        .description = COMPOUND_STRING(
            "A large and rare\n"
            "bamboo shoot. Best\n"
            "sold to gourmands."),
        TREASURE_INFO,
        ITEM_ICON(BigBambooShoot),
    },

    [ITEM_GIMMIGHOUL_COIN] =
    {
        .name = ITEM_NAME("Gimmighoul Coin"),
        .price = 400,
        .description = COMPOUND_STRING(
            "Gimmighoul hoard\n"
            "and treasure these\n"
            "curious coins."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_EVOLUTION_ITEM,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        ITEM_ICON(GimmighoulCoin),
    },

    [ITEM_LEADERS_CREST] =
    {
        .name = ITEM_NAME("Leader's Crest"),
        .price = 3000,
        .description = COMPOUND_STRING(
            "A shard of an old\n"
            "blade of some sort.\n"
            "Held by Bisharp."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_EVOLUTION_ITEM,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        ITEM_ICON(LeadersCrest),
    },

    [ITEM_MALICIOUS_ARMOR] =
    {
        .name = ITEM_NAME("Malicious Armor"),
        .price = EVO_ITEM_PRICE,
        .description = COMPOUND_STRING(
            "Armor inhabited by\n"
            "malicious will.\n"
            "Causes evolution."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_EVOLUTION_ITEM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
        .effect = gItemEffect_EvoItem,
        .flingPower = 30,
        ITEM_ICON(MaliciousArmor),
    },

    [ITEM_MIRROR_HERB] =
    {
        .name = ITEM_NAME("Mirror Herb"),
        .price = 4000,
        .holdEffect = HOLD_EFFECT_MIRROR_HERB,
        .description = COMPOUND_STRING(
            "Mirrors an enemy's\n"
            "stat increases\n"
            "but only once."),
        HELD_ITEM_INFO,
        .flingPower = 30,
        ITEM_ICON(MirrorHerb),
    },

    [ITEM_SCROLL_OF_DARKNESS] =
    {
        .name = ITEM_NAME("Scroll of Darkness"),
        .pluralName = ITEM_PLURAL_NAME("Scrolls of Darkness"),
        .price = EVO_ITEM_PRICE,
        .description = COMPOUND_STRING(
            "A peculiar scroll\n"
            "with secrets of\n"
            "the dark path."),
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .sortType = ITEM_TYPE_EVOLUTION_ITEM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
        .effect = gItemEffect_EvoItem,
        ITEM_ICON(ScrollOfDarkness),
    },

    [ITEM_SCROLL_OF_WATERS] =
    {
        .name = ITEM_NAME("Scroll of Waters"),
        .pluralName = ITEM_PLURAL_NAME("Scrolls of Waters"),
        .price = EVO_ITEM_PRICE,
        .description = COMPOUND_STRING(
            "A peculiar scroll\n"
            "with secrets of\n"
            "the water path."),
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .sortType = ITEM_TYPE_EVOLUTION_ITEM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
        .effect = gItemEffect_EvoItem,
        ITEM_ICON(ScrollOfWaters),
    },

    [ITEM_TERA_ORB] =
    {
        .name = ITEM_NAME("Tera Orb"),
        .price = 0,
        .description = COMPOUND_STRING(
            "Energy charges can\n"
            "be used to cause\n"
            "Terastallization."),
        .importance = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        ITEM_ICON(TeraOrb),
    },

    [ITEM_TINY_BAMBOO_SHOOT] =
    {
        .name = ITEM_NAME("Tiny Bamboo Shoot"),
        .price = 750,
        .description = COMPOUND_STRING(
            "A small and rare\n"
            "bamboo shoot. Best\n"
            "sold to gourmands."),
        TREASURE_INFO,
        ITEM_ICON(TinyBambooShoot),
    },

#define TERA_SHARD_INFO(Type)                     \
    .price = 0,                                   \
    .description = sTeraShardDesc,                \
    .pocket = POCKET_ITEMS,                       \
    .sortType = ITEM_TYPE_TERA_SHARD,             \
    .type = ITEM_USE_BAG_MENU,                    \
    .fieldUseFunc = ItemUseOutOfBattle_CannotUse, \
    .iconPic = gItemIcon_TeraShard,               \
    .iconPalette = gItemIconPalette_##Type##TeraShard

    [ITEM_BUG_TERA_SHARD] =
    {
        .name = ITEM_NAME("Bug Tera Shard"),
        TERA_SHARD_INFO(Bug),
    },

    [ITEM_DARK_TERA_SHARD] =
    {
        .name = ITEM_NAME("Dark Tera Shard"),
        TERA_SHARD_INFO(Dark),
    },

    [ITEM_DRAGON_TERA_SHARD] =
    {
        .name = ITEM_NAME("Dragon Tera Shard"),
        TERA_SHARD_INFO(Dragon),
    },

    [ITEM_ELECTRIC_TERA_SHARD] =
    {
        .name = ITEM_NAME("Electric Tera Shard"),
        TERA_SHARD_INFO(Electric),
    },

    [ITEM_FAIRY_TERA_SHARD] =
    {
        .name = ITEM_NAME("Fairy Tera Shard"),
        TERA_SHARD_INFO(Fairy),
    },

    [ITEM_FIGHTING_TERA_SHARD] =
    {
        .name = ITEM_NAME("Fighting Tera Shard"),
        TERA_SHARD_INFO(Fighting),
    },

    [ITEM_FIRE_TERA_SHARD] =
    {
        .name = ITEM_NAME("Fire Tera Shard"),
        TERA_SHARD_INFO(Fire),
    },

    [ITEM_FLYING_TERA_SHARD] =
    {
        .name = ITEM_NAME("Flying Tera Shard"),
        TERA_SHARD_INFO(Flying),
    },

    [ITEM_GHOST_TERA_SHARD] =
    {
        .name = ITEM_NAME("Ghost Tera Shard"),
        TERA_SHARD_INFO(Ghost),
    },

    [ITEM_GRASS_TERA_SHARD] =
    {
        .name = ITEM_NAME("Grass Tera Shard"),
        TERA_SHARD_INFO(Grass),
    },

    [ITEM_GROUND_TERA_SHARD] =
    {
        .name = ITEM_NAME("Ground Tera Shard"),
        TERA_SHARD_INFO(Ground),
    },

    [ITEM_ICE_TERA_SHARD] =
    {
        .name = ITEM_NAME("Ice Tera Shard"),
        TERA_SHARD_INFO(Ice),
    },

    [ITEM_NORMAL_TERA_SHARD] =
    {
        .name = ITEM_NAME("Normal Tera Shard"),
        TERA_SHARD_INFO(Normal),
    },

    [ITEM_POISON_TERA_SHARD] =
    {
        .name = ITEM_NAME("Poison Tera Shard"),
        TERA_SHARD_INFO(Poison),
    },

    [ITEM_PSYCHIC_TERA_SHARD] =
    {
        .name = ITEM_NAME("Psychic Tera Shard"),
        TERA_SHARD_INFO(Psychic),
    },

    [ITEM_ROCK_TERA_SHARD] =
    {
        .name = ITEM_NAME("Rock Tera Shard"),
        TERA_SHARD_INFO(Rock),
    },

    [ITEM_STEEL_TERA_SHARD] =
    {
        .name = ITEM_NAME("Steel Tera Shard"),
        TERA_SHARD_INFO(Steel),
    },

    [ITEM_WATER_TERA_SHARD] =
    {
        .name = ITEM_NAME("Water Tera Shard"),
        TERA_SHARD_INFO(Water),
    },

    [ITEM_ADAMANT_CRYSTAL] =
    {
        .name = ITEM_NAME("Adamant Crystal"),
        .price = LEGENDARY_ITEM_COST,
        .holdEffect = HOLD_EFFECT_ADAMANT_ORB,
        .holdEffectParam = 20,
        .description = COMPOUND_STRING(
            "A large, glowing gem\n"
            "that lets Dialga\n"
            "change form."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_EVOLUTION_ITEM,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 60,
        ITEM_ICON(AdamantCrystal),
    },

    [ITEM_GRISEOUS_CORE] =
    {
        .name = ITEM_NAME("Griseous Core"),
        .price = LEGENDARY_ITEM_COST,
        .holdEffect = HOLD_EFFECT_GRISEOUS_ORB,
        .holdEffectParam = 20,
        .description = COMPOUND_STRING(
            "A large, glowing gem\n"
            "that lets Giratina\n"
            "change form."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_EVOLUTION_ITEM,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 60,
        ITEM_ICON(GriseousCore),
    },

    [ITEM_LUSTROUS_GLOBE] =
    {
        .name = ITEM_NAME("Lustrous Globe"),
        .price = LEGENDARY_ITEM_COST,
        .holdEffect = HOLD_EFFECT_LUSTROUS_ORB,
        .holdEffectParam = 20,
        .description = COMPOUND_STRING(
            "A large, glowing gem\n"
            "that lets Palkia\n"
            "change form."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_EVOLUTION_ITEM,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .flingPower = 60,
        ITEM_ICON(LustrousGlobe),
    },

    [ITEM_BLACK_AUGURITE] =
    {
        .name = ITEM_NAME("Black Augurite"),
        .price = EVO_ITEM_PRICE,
        .description = COMPOUND_STRING(
            "A black stone that\n"
            "makes some Pokémon\n"
            "evolve."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_EVOLUTION_ITEM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
        .effect = gItemEffect_EvoItem,
        .flingPower = 30,
        ITEM_ICON(BlackAugurite),
    },

    [ITEM_LINKING_CORD] =
    {
        .name = ITEM_NAME("Linking Cord"),
        .price = EVO_ITEM_PRICE,
        .description = COMPOUND_STRING(
            "A mysterious string\n"
            "that makes some\n"
            "Pokémon evolve."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_EVOLUTION_ITEM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
        .effect = gItemEffect_EvoItem,
        .flingPower = 30,
        ITEM_ICON(LinkingCord),
    },

    [ITEM_PEAT_BLOCK] =
    {
        .name = ITEM_NAME("Peat Block"),
        .price = EVO_ITEM_PRICE,
        .description = COMPOUND_STRING(
            "A block of material\n"
            "that makes some\n"
            "Pokémon evolve."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_EVOLUTION_ITEM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
        .effect = gItemEffect_EvoItem,
        .flingPower = 30,
        ITEM_ICON(PeatBlock),
    },

    [ITEM_BERSERK_GENE] =
    {
        .name = ITEM_NAME("Berserk Gene"),
        .price = 20,
        .holdEffect = HOLD_EFFECT_BERSERK_GENE,
        .description = COMPOUND_STRING(
            "Sharply boosts\n"
            "Attack, but causes\n"
            "lasting confusion."),
        HELD_ITEM_INFO,
        .flingPower = 10,
        ITEM_ICON(BerserkGene),
    },

    [ITEM_FAIRY_FEATHER] =
    {
        .name = ITEM_NAME("Fairy Feather"),
        .price = 1000,
        TYPE_BOOST_INFO,
        .description = COMPOUND_STRING(
            "A hold item that\n"
            "raises the power of\n"
            "Fairy-type moves."),
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = TYPE_FAIRY,
        .flingPower = 10,
        ITEM_ICON(FairyFeather),
    },

    [ITEM_SYRUPY_APPLE] =
    {
        .name = ITEM_NAME("Syrupy Apple"),
        .price = EVO_ITEM_PRICE,
        .description = COMPOUND_STRING(
            "A very syrupy apple\n"
            "that makes certain\n"
            "Pokémon evolve."),
        .pocket = POCKET_ITEMS,
	    .sortType = ITEM_TYPE_EVOLUTION_ITEM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
        .effect = gItemEffect_EvoItem,
        .flingPower = 30,
        ITEM_ICON(SyrupyApple),
    },

    [ITEM_UNREMARKABLE_TEACUP] =
    {
        .name = ITEM_NAME("Unremarkable Teacup"),
        .price = EVO_ITEM_PRICE,
        .description = COMPOUND_STRING(
            "A cracked teacup\n"
            "that makes certain\n"
            "Pokémon evolve."),
        .pocket = POCKET_ITEMS,
	    .sortType = ITEM_TYPE_EVOLUTION_ITEM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
        .effect = gItemEffect_EvoItem,
        .flingPower = 80,
        ITEM_ICON(UnremarkableTeacup),
    },

    [ITEM_MASTERPIECE_TEACUP] =
    {
        .name = ITEM_NAME("Masterpiece Teacup"),
        .price = EVO_ITEM_PRICE,
        .description = COMPOUND_STRING(
            "A chipped teacup\n"
            "that makes certain\n"
            "Pokémon evolve."),
        .pocket = POCKET_ITEMS,
	    .sortType = ITEM_TYPE_EVOLUTION_ITEM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
        .effect = gItemEffect_EvoItem,
        .flingPower = 80,
        ITEM_ICON(MasterpieceTeacup),
    },

    [ITEM_CORNERSTONE_MASK] =
    {
        .name = ITEM_NAME("Cornerstone Mask"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_OGERPON_MASK,
        .holdEffectParam = 20,
        .description = COMPOUND_STRING(
            "Allows Ogerpon to\n"
            "wield the Rock-\n"
            "type in battle."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_SPECIAL_HELD_ITEM,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        ITEM_ICON(CornerstoneMask),
    },

    [ITEM_WELLSPRING_MASK] =
    {
        .name = ITEM_NAME("Wellspring Mask"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_OGERPON_MASK,
        .holdEffectParam = 20,
        .description = COMPOUND_STRING(
            "Allows Ogerpon to\n"
            "wield the Water-\n"
            "type in battle."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_SPECIAL_HELD_ITEM,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        ITEM_ICON(WellspringMask),
    },

    [ITEM_HEARTHFLAME_MASK] =
    {
        .name = ITEM_NAME("Hearthflame Mask"),
        .price = 0,
        .holdEffect = HOLD_EFFECT_OGERPON_MASK,
        .holdEffectParam = 20,
        .description = COMPOUND_STRING(
            "Allows Ogerpon to\n"
            "wield the Fire-\n"
            "type in battle."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_SPECIAL_HELD_ITEM,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        ITEM_ICON(HearthflameMask),
    },

#define MOCHI_INFO                               \
    .price = 500,                                \
    .pocket = POCKET_ITEMS,                      \
    .sortType = ITEM_TYPE_STAT_BOOST_MOCHI,      \
    .type = ITEM_USE_PARTY_MENU,                 \
    .flingPower = 30,                            \
    .iconPic = gItemIcon_Mochi

    [ITEM_HEALTH_MOCHI] =
    {
        .name = ITEM_NAME("Health Mochi"),
        .pluralName = ITEM_PLURAL_NAME("Health Mochi"),
        .description = sHealthFeatherDesc,
        MOCHI_INFO,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .effect = gItemEffect_HpMochi,
        .iconPalette = gItemIconPalette_HealthMochi,
    },

    [ITEM_MUSCLE_MOCHI] =
    {
        .name = ITEM_NAME("Muscle Mochi"),
        .pluralName = ITEM_PLURAL_NAME("Muscle Mochi"),
        .description = sMuscleFeatherDesc,
        MOCHI_INFO,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .effect = gItemEffect_AtkMochi,
        .iconPalette = gItemIconPalette_MuscleMochi,
    },

    [ITEM_RESIST_MOCHI] =
    {
        .name = ITEM_NAME("Resist Mochi"),
        .pluralName = ITEM_PLURAL_NAME("Resist Mochi"),
        .description = sResistFeatherDesc,
        MOCHI_INFO,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .effect = gItemEffect_DefMochi,
        .iconPalette = gItemIconPalette_ResistMochi,
    },

    [ITEM_GENIUS_MOCHI] =
    {
        .name = ITEM_NAME("Genius Mochi"),
        .pluralName = ITEM_PLURAL_NAME("Genius Mochi"),
        .description = sGeniusFeatherDesc,
        MOCHI_INFO,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .effect = gItemEffect_SpatkMochi,
        .iconPalette = gItemIconPalette_GeniusMochi,
    },

    [ITEM_CLEVER_MOCHI] =
    {
        .name = ITEM_NAME("Clever Mochi"),
        .pluralName = ITEM_PLURAL_NAME("Clever Mochi"),
        .description = sCleverFeatherDesc,
        MOCHI_INFO,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .effect = gItemEffect_SpdefMochi,
        .iconPalette = gItemIconPalette_CleverMochi,
    },

    [ITEM_SWIFT_MOCHI] =
    {
        .name = ITEM_NAME("Swift Mochi"),
        .pluralName = ITEM_PLURAL_NAME("Swift Mochi"),
        .description = sSwiftFeatherDesc,
        MOCHI_INFO,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .effect = gItemEffect_SpeedMochi,
        .iconPalette = gItemIconPalette_SwiftMochi,
    },

    [ITEM_FRESH_START_MOCHI] =
    {
        .name = ITEM_NAME("Fresh Start Mochi"),
        .pluralName = ITEM_PLURAL_NAME("Fresh Start Mochi"),
        .description = COMPOUND_STRING(
            "An item that resets\n"
            "all base points of\n"
            "a Pokémon."),
        MOCHI_INFO,
        .fieldUseFunc = ItemUseOutOfBattle_ResetEVs,
        .effect = gItemEffect_ResetMochi,
        .iconPalette = gItemIconPalette_FreshStartMochi,
    },

    [ITEM_GLIMMERING_CHARM] =
    {
        .name = ITEM_NAME("Glimmering Charm"),
        .price = 0,
        .importance = 1,
        .description = COMPOUND_STRING(
            "A charm that will\n"
            "raise the shards\n"
            "from Tera Raids."),
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        ITEM_ICON(GlimmeringCharm),
    },

    [ITEM_METAL_ALLOY] =
    {
        .name = ITEM_NAME("Metal Alloy"),
        .price = EVO_ITEM_PRICE,
        .description = COMPOUND_STRING(
            "A peculiar metal\n"
            "that makes certain\n"
            "Pokémon evolve."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_EVOLUTION_ITEM,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
        .effect = gItemEffect_EvoItem,
        ITEM_ICON(MetalAlloy),
    },

    [ITEM_STELLAR_TERA_SHARD] =
    {
        .name = ITEM_NAME("Stellar Tera Shard"),
        .price = 0,
        .description = sTeraShardDesc,
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_TERA_SHARD,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        ITEM_ICON(StellarTeraShard),
    },

    [ITEM_JUBILIFE_MUFFIN] =
    {
        .name = ITEM_NAME("Jubilife Muffin"),
        .price = 250,
        .description = sFullHealDesc,
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_STATUS_RECOVERY,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_CURE_STATUS,
        .effect = gItemEffect_FullHeal,
        .flingPower = 30,
        ITEM_ICON(JubilifeMuffin),
    },

    [ITEM_REMEDY] =
    {
        .name = ITEM_NAME("Remedy"),
        .price = 150,
        .description = COMPOUND_STRING(
            "A bitter powder\n"
            "that restores HP\n"
            "by 20 points."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_HEALTH_RECOVERY,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_RESTORE_HP,
        .effect = gItemEffect_Remedy,
        .flingPower = 30,
        ITEM_ICON(Remedy),
    },

    [ITEM_FINE_REMEDY] =
    {
        .name = ITEM_NAME("Fine Remedy"),
        .price = 150,
        .description = COMPOUND_STRING(
            "A bitter powder\n"
            "that restores HP\n"
        #if I_HEALTH_RECOVERY >= GEN_7
            "by 60 points."),
        #else
            "by 50 points."),
        #endif
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_HEALTH_RECOVERY,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_RESTORE_HP,
        .effect = gItemEffect_FineRemedy,
        .flingPower = 30,
        ITEM_ICON(FineRemedy),
    },

    [ITEM_SUPERB_REMEDY] =
    {
        .name = ITEM_NAME("Superb Remedy"),
        .price = 750,
        .description = COMPOUND_STRING(
            "A bitter powder\n"
            "that restores HP\n"
        #if I_HEALTH_RECOVERY >= GEN_7
            "by 120 points."),
        #else
            "by 200 points."),
        #endif
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_HEALTH_RECOVERY,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = EFFECT_ITEM_RESTORE_HP,
        .effect = gItemEffect_SuperbRemedy,
        .flingPower = 30,
        ITEM_ICON(SuperbRemedy),
    },

    [ITEM_AUX_EVASION] =
    {
        .name = ITEM_NAME("Aux Evasion"),
        .price = 800,
        .holdEffectParam = X_ITEM_STAGES,
        .description = COMPOUND_STRING(
        #if B_X_ITEMS_BUFF >= GEN_7
            "Sharply raises\n"
            "evasiveness during\n"
            "one battle."),
        #else
            "Raises evasiveness\n"
            "during one battle."),
        #endif
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_AUX_ITEM,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        //.effect = currently missing
        .iconPic = gItemIcon_AuxBottle,
        .iconPalette = gItemIconPalette_AuxEvasion,
    },

    [ITEM_AUX_GUARD] =
    {
        .name = ITEM_NAME("Aux Guard"),
        .price = 400,
        .holdEffectParam = X_ITEM_STAGES,
        .description = COMPOUND_STRING(
        #if B_X_ITEMS_BUFF >= GEN_7
            "Sharply raises\n"
            "defenses during\n"
            "one battle."),
        #else
            "Raises defenses\n"
            "during one battle."),
        #endif
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_AUX_ITEM,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        //.effect = currently missing
        .iconPic = gItemIcon_AuxBottle,
        .iconPalette = gItemIconPalette_AuxGuard,
    },

    [ITEM_AUX_POWER] =
    {
        .name = ITEM_NAME("Aux Power"),
        .price = 400,
        .holdEffectParam = X_ITEM_STAGES,
        .description = COMPOUND_STRING(
        #if B_X_ITEMS_BUFF >= GEN_7
            "Sharply raises\n"
            "offenses during\n"
            "one battle."),
        #else
            "Raises offenses\n"
            "during one battle."),
        #endif
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_AUX_ITEM,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        //.effect = currently missing
        .iconPic = gItemIcon_AuxBottle,
        .iconPalette = gItemIconPalette_AuxPower,
    },

    [ITEM_AUX_POWERGUARD] =
    {
        .name = ITEM_NAME("Aux Powerguard"),
        .price = 1200,
        .holdEffectParam = X_ITEM_STAGES,
        .description = COMPOUND_STRING(
        #if B_X_ITEMS_BUFF >= GEN_7
            "Sharply raises\n"
            "offense & defense\n"
            "during one battle."),
        #else
            "Raises offense\n"
            "and defense during\n"
            "one battle."),
        #endif
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_AUX_ITEM,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        //.effect = currently missing
        ITEM_ICON(AuxPowerguard),
    },

    [ITEM_CHOICE_DUMPLING] =
    {
        .name = ITEM_NAME("Choice Dumpling"),
        .price = 1200,
        .description = sQuestionMarksDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        //.effect = currently missing
        ITEM_ICON(ChoiceDumpling),
    },

    [ITEM_SWAP_SNACK] =
    {
        .name = ITEM_NAME("Swap Snack"),
        .price = 1200,
        .description = sQuestionMarksDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        //.effect = currently missing
        ITEM_ICON(SwapSnack),
    },

    [ITEM_TWICE_SPICED_RADISH] =
    {
        .name = ITEM_NAME("Twice-Spiced Radish"),
        .price = 1600,
        .description = sQuestionMarksDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        //.effect = currently missing
        ITEM_ICON(TwiceSpicedRadish),
    },

    [ITEM_POKESHI_DOLL] =
    {
        .name = ITEM_NAME("Pokéshi Doll"),
        .price = 2000,
        .description = COMPOUND_STRING(
            "A wooden toy\n"
            "resembling a Poké-.\n"
            "mon. Can be sold."),
        .pocket = POCKET_ITEMS,
        .sortType = ITEM_TYPE_SELLABLE,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = EFFECT_ITEM_ESCAPE,
        ITEM_ICON(PokeshiDoll),
    },
};

#undef ITEM_NAME
#undef ITEM_PLURAL_NAME
