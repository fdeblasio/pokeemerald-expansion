#include "battle_anim_scripts.h"

#define ENVIRONMENT_BACKGROUND(Background)             \
{                                                      \
    .tileset = gBattleEnvironmentTiles_##Background,   \
    .tilemap = gBattleEnvironmentTilemap_##Background, \
}

#define ENVIRONMENT_ENTRY(Background)                      \
{                                                          \
    .tileset = gBattleEnvironmentAnimTiles_##Background,   \
    .tilemap = gBattleEnvironmentAnimTilemap_##Background, \
}

#define DEFAULT_CAMOUFLAGE_BLEND RGB_WHITE

// Cave values. Used for BATTLE_ENVIRONMENT_CAVE as well as BATTLE_ENVIRONMENT_GROUDON and BATTLE_ENVIRONMENT_KYOGRE
#if B_NATURE_POWER_MOVES >= GEN_6
    #define CAVE_NATURE_POWER MOVE_POWER_GEM
#elif B_NATURE_POWER_MOVES >= GEN_4
    #define CAVE_NATURE_POWER MOVE_ROCK_SLIDE
#else
    #define CAVE_NATURE_POWER MOVE_SHADOW_BALL
#endif

#define CAVE_ENVIRONMENT                     \
    .naturePower = CAVE_NATURE_POWER,        \
    .secretPowerAnimation = B_SECRET_POWER_ANIMATION >= GEN_4 ? gBattleAnimMove_RockThrow : gBattleAnimMove_Bite, \
    .secretPowerEffect = MOVE_EFFECT_FLINCH, \
    .camouflageType = TYPE_ROCK,             \
    .camouflageBlend = RGB(14, 9, 3)

#define CAVE_BATTLE_INTRO_SLIDE BattleIntroSlide1

// Building values. Used for BATTLE_ENVIRONMENT_BUILDING as well as the environments that come from the vanilla MAP_BATTLE_SCENEs: BATTLE_ENVIRONMENT_PLAIN, BATTLE_ENVIRONMENT_FRONTIER, BATTLE_ENVIRONMENT_GYM, BATTLE_ENVIRONMENT_LEADER, BATTLE_ENVIRONMENT_MAGMA, BATTLE_ENVIRONMENT_AQUA, BATTLE_ENVIRONMENT_SIDNEY, BATTLE_ENVIRONMENT_PHOEBE, BATTLE_ENVIRONMENT_GLACIA, BATTLE_ENVIRONMENT_DRAKE, BATTLE_ENVIRONMENT_CHAMPION
#if B_SECRET_POWER_ANIMATION >= GEN_7
    #define BUILDING_SECRET_POWER_ANIMATION gBattleAnimMove_SpitUp
#elif B_SECRET_POWER_ANIMATION >= GEN_4
    #define BUILDING_SECRET_POWER_ANIMATION gBattleAnimMove_BodySlam
#else
    #define BUILDING_SECRET_POWER_ANIMATION gBattleAnimMove_Strength
#endif

#define BUILDING_ENVIRONMENT                                                     \
    .naturePower = B_NATURE_POWER_MOVES >= GEN_4 ? MOVE_TRI_ATTACK : MOVE_SWIFT, \
    .secretPowerAnimation = BUILDING_SECRET_POWER_ANIMATION,                     \
    .secretPowerEffect = MOVE_EFFECT_PARALYSIS,                                  \
    .camouflageType = TYPE_NORMAL,                                               \
    .camouflageBlend = RGB_WHITE,                                                \
    .battleIntroSlide = BattleIntroSlide3

#define BUILDING_ENVIRONMENT                                                     \
    .naturePower = B_NATURE_POWER_MOVES >= GEN_4 ? MOVE_TRI_ATTACK : MOVE_SWIFT, \
    .secretPowerAnimation = BUILDING_SECRET_POWER_ANIMATION,                     \
    .secretPowerEffect = MOVE_EFFECT_PARALYSIS,                                  \
    .camouflageType = TYPE_NORMAL,                                               \
    .camouflageBlend = RGB_WHITE,                                                \
    .battleIntroSlide = BattleIntroSlide3

// Plain values. USED for BATTLE_ENVIRONMENT_PLAIN as well as BATTLE_ENVIRONMENT_RAYQUAZA
#if B_NATURE_POWER_MOVES >= GEN_6
    #define PLAIN_NATURE_POWER MOVE_TRI_ATTACK
#elif B_NATURE_POWER_MOVES >= GEN_4
    #define PLAIN_NATURE_POWER MOVE_EARTHQUAKE
#else
    #define PLAIN_NATURE_POWER MOVE_SWIFT
#endif
#if B_SECRET_POWER_ANIMATION >= GEN_7
    #define PLAIN_SECRET_POWER_ANIMATION gBattleAnimMove_SpitUp
#elif B_SECRET_POWER_ANIMATION == GEN_6
    #define PLAIN_SECRET_POWER_ANIMATION gBattleAnimMove_BodySlam
#elif B_SECRET_POWER_ANIMATION >= GEN_4
    #define PLAIN_SECRET_POWER_ANIMATION gBattleAnimMove_MudSlap
#else
    #define PLAIN_SECRET_POWER_ANIMATION gBattleAnimMove_Slam
#endif
#define PLAIN_SECRET_POWER_EFFECT (B_SECRET_POWER_EFFECT == GEN_4 || B_SECRET_POWER_EFFECT == GEN_5) ? MOVE_EFFECT_ACC_MINUS_1 : MOVE_EFFECT_PARALYSIS
#define PLAIN_CAMOUFLAGE_TYPE     (B_CAMOUFLAGE_TYPES == GEN_4 || B_CAMOUFLAGE_TYPES == GEN_5) ? TYPE_GROUND : TYPE_NORMAL
#define PLAIN_CAMOUFLAGE_BLEND    RGB_WHITE
#define PLAIN_BATTLE_INTRO_SLIDE  BattleIntroSlide3

#define SKY_PILLAR_ENVIRONMENT(Name)                    \
    {                                                   \
        .name = _(Name),                                \
        .naturePower = MOVE_AIR_SLASH,                  \
        .secretPowerAnimation = gBattleAnimMove_Gust,   \
        .secretPowerEffect = MOVE_EFFECT_SPD_MINUS_1,   \
        .camouflageType = TYPE_FLYING,                  \
        .camouflageBlend = DEFAULT_CAMOUFLAGE_BLEND,    \
        .entry = ENVIRONMENT_ENTRY(Rayquaza),           \
        .background = ENVIRONMENT_BACKGROUND(Rayquaza), \
        .palette = gBattleEnvironmentPalette_Rayquaza,  \
        .battleIntroSlide = PLAIN_BATTLE_INTRO_SLIDE,   \
    }

#define WETLAND_ENVIRONMENT(Name)                        \
    {                                                    \
        .name = _(Name),                                 \
        .naturePower = MOVE_MUD_BOMB,                    \
        .secretPowerAnimation = gBattleAnimMove_MudBomb, \
        .secretPowerEffect = MOVE_EFFECT_SPD_MINUS_1,    \
        .camouflageType = TYPE_GROUND,                   \
        .camouflageBlend = DEFAULT_CAMOUFLAGE_BLEND,     \
        .entry = ENVIRONMENT_ENTRY(Underwater),          \
        .background = ENVIRONMENT_BACKGROUND(PondWater), \
        .palette = gBattleEnvironmentPalette_PondWater,  \
    }

const struct BattleEnvironment gBattleEnvironmentInfo[BATTLE_ENVIRONMENT_COUNT] =
{
    [BATTLE_ENVIRONMENT_GRASS] =
    {
        .name = _("Grass"),
    #if B_NATURE_POWER_MOVES >= GEN_6
        .naturePower = MOVE_ENERGY_BALL,
    #elif B_NATURE_POWER_MOVES >= GEN_4
        .naturePower = MOVE_SEED_BOMB,
    #else
        .naturePower = MOVE_STUN_SPORE,
    #endif
        .secretPowerAnimation = gBattleAnimMove_NeedleArm,
        .secretPowerEffect = B_SECRET_POWER_EFFECT >= GEN_4 ? MOVE_EFFECT_SLEEP : MOVE_EFFECT_POISON,
        .camouflageType = TYPE_GRASS,
        .camouflageBlend = RGB(12, 24, 2),
        .entry = ENVIRONMENT_ENTRY(TallGrass),
        .background = ENVIRONMENT_BACKGROUND(TallGrass),
        .palette = gBattleEnvironmentPalette_TallGrass,
        .battleIntroSlide = BattleIntroSlide1,
    },

    [BATTLE_ENVIRONMENT_LONG_GRASS] =
    {
        .name = _("Long Grass"),
    #if B_NATURE_POWER_MOVES >= GEN_6
        .naturePower = MOVE_ENERGY_BALL,
    #elif B_NATURE_POWER_MOVES >= GEN_4
        .naturePower = MOVE_SEED_BOMB,
    #else
        .naturePower = MOVE_RAZOR_LEAF,
    #endif
        .secretPowerAnimation = B_SECRET_POWER_ANIMATION >= GEN_4 ? gBattleAnimMove_NeedleArm : gBattleAnimMove_MagicalLeaf,
        .secretPowerEffect = MOVE_EFFECT_SLEEP,
        .camouflageType = TYPE_GRASS,
        .camouflageBlend = RGB(0, 15, 2),
        .entry = ENVIRONMENT_ENTRY(LongGrass),
        .background = ENVIRONMENT_BACKGROUND(LongGrass),
        .palette = gBattleEnvironmentPalette_LongGrass,
        .battleIntroSlide = BattleIntroSlide1,
    },

    [BATTLE_ENVIRONMENT_SAND] =
    {
        .name = _("Sand"),
        .naturePower = B_NATURE_POWER_MOVES >= GEN_6 ? MOVE_EARTH_POWER : MOVE_EARTHQUAKE,
        .secretPowerAnimation = B_SECRET_POWER_ANIMATION >= GEN_4 ? gBattleAnimMove_MudSlap : gBattleAnimMove_MudShot,
        .secretPowerEffect = MOVE_EFFECT_ACC_MINUS_1,
        .camouflageType = TYPE_GROUND,
        .camouflageBlend = RGB(30, 24, 11),
        .entry = ENVIRONMENT_ENTRY(Sand),
        .background = ENVIRONMENT_BACKGROUND(Sand),
        .palette = gBattleEnvironmentPalette_Sand,
        .battleIntroSlide = BattleIntroSlide2,
    },

    [BATTLE_ENVIRONMENT_UNDERWATER] =
    {
        .name = _("Underwater"),
        .naturePower = MOVE_HYDRO_PUMP,
        .secretPowerAnimation = B_SECRET_POWER_ANIMATION >= GEN_6 ? gBattleAnimMove_WaterPulse : gBattleAnimMove_Waterfall,
        .secretPowerEffect = B_SECRET_POWER_EFFECT >= GEN_6 ? MOVE_EFFECT_ATK_MINUS_1 : MOVE_EFFECT_DEF_MINUS_1,
        .camouflageType = TYPE_WATER,
        .camouflageBlend = RGB(0, 0, 18),
        .entry = ENVIRONMENT_ENTRY(Underwater),
        .background = ENVIRONMENT_BACKGROUND(Underwater),
        .palette = gBattleEnvironmentPalette_Underwater,
        .battleIntroSlide = BattleIntroSlide2,
    },

    [BATTLE_ENVIRONMENT_WATER] =
    {
        .name = _("Water"),
        .naturePower = B_NATURE_POWER_MOVES >= GEN_4 ? MOVE_HYDRO_PUMP : MOVE_SURF,
        .secretPowerAnimation = B_SECRET_POWER_ANIMATION >= GEN_4 ? gBattleAnimMove_WaterPulse : gBattleAnimMove_Surf,
        .secretPowerEffect = MOVE_EFFECT_ATK_MINUS_1,
        .camouflageType = TYPE_WATER,
        .camouflageBlend = RGB(11, 22, 31),
        .entry = ENVIRONMENT_ENTRY(Water),
        .background = ENVIRONMENT_BACKGROUND(Water),
        .palette = gBattleEnvironmentPalette_Water,
        .battleIntroSlide = BattleIntroSlide2,
    },

    [BATTLE_ENVIRONMENT_POND] =
    {
        .name = _("Pond"),
        .naturePower = B_NATURE_POWER_MOVES >= GEN_4 ? MOVE_HYDRO_PUMP : MOVE_BUBBLE_BEAM,
        .secretPowerAnimation = B_SECRET_POWER_ANIMATION >= GEN_4 ? gBattleAnimMove_WaterPulse : gBattleAnimMove_BubbleBeam,
        .secretPowerEffect = B_SECRET_POWER_EFFECT >= GEN_4 ? MOVE_EFFECT_ATK_MINUS_1 : MOVE_EFFECT_SPD_MINUS_1,
        .camouflageType = TYPE_WATER,
        .camouflageBlend = RGB(11, 22, 31),
        .entry = ENVIRONMENT_ENTRY(PondWater),
        .background = ENVIRONMENT_BACKGROUND(PondWater),
        .palette = gBattleEnvironmentPalette_PondWater,
        .battleIntroSlide = BattleIntroSlide1,
    },

    [BATTLE_ENVIRONMENT_MOUNTAIN] =
    {
        .name = _("Mountain"),
    #if B_NATURE_POWER_MOVES >= GEN_6
        .naturePower = MOVE_EARTH_POWER,
    #elif B_NATURE_POWER_MOVES >= GEN_5
        .naturePower = MOVE_EARTHQUAKE,
    #else
        .naturePower = MOVE_ROCK_SLIDE,
    #endif
        .secretPowerAnimation = B_SECRET_POWER_ANIMATION >= GEN_5 ? gBattleAnimMove_MudSlap : gBattleAnimMove_RockThrow,
    #if B_SECRET_POWER_EFFECT >= GEN_5
        .secretPowerEffect = MOVE_EFFECT_ACC_MINUS_1,
    #elif B_SECRET_POWER_EFFECT == GEN_4
        .secretPowerEffect = MOVE_EFFECT_FLINCH,
    #else
        .secretPowerEffect = MOVE_EFFECT_CONFUSION,
    #endif
        .camouflageType = B_CAMOUFLAGE_TYPES >= GEN_5 ? TYPE_GROUND : TYPE_ROCK,
        .camouflageBlend = RGB(22, 16, 10),
        .entry = ENVIRONMENT_ENTRY(Rock),
        .background = ENVIRONMENT_BACKGROUND(Rock),
        .palette = gBattleEnvironmentPalette_Rock,
        .battleIntroSlide = BattleIntroSlide1,
    },

    [BATTLE_ENVIRONMENT_CAVE] =
    {
        .name = _("Cave"),
        CAVE_ENVIRONMENT,
        .entry = ENVIRONMENT_ENTRY(Cave),
        .background = ENVIRONMENT_BACKGROUND(Cave),
        .palette = gBattleEnvironmentPalette_Cave,
        .battleIntroSlide = CAVE_BATTLE_INTRO_SLIDE,
    },

    [BATTLE_ENVIRONMENT_BUILDING] =
    {
        .name = _("Building"),
        BUILDING_ENVIRONMENT,
        .entry = ENVIRONMENT_ENTRY(Building),
        .background = ENVIRONMENT_BACKGROUND(Building),
        .palette = gBattleEnvironmentPalette_Building,
    },

    [BATTLE_ENVIRONMENT_PLAIN] =
    {
        .name = _("Plain"),
        .naturePower = PLAIN_NATURE_POWER,
        .secretPowerAnimation = PLAIN_SECRET_POWER_ANIMATION,
        .secretPowerEffect = PLAIN_SECRET_POWER_EFFECT,
        .camouflageType = PLAIN_CAMOUFLAGE_TYPE,
        .camouflageBlend = PLAIN_CAMOUFLAGE_BLEND,
        .entry = ENVIRONMENT_ENTRY(Building),
        .background = ENVIRONMENT_BACKGROUND(Building),
        .palette = gBattleEnvironmentPalette_Plain,
        .battleIntroSlide = PLAIN_BATTLE_INTRO_SLIDE,
    },

    [BATTLE_ENVIRONMENT_FRONTIER] =
    {
        .name = _("Frontier"),
        .entry = ENVIRONMENT_ENTRY(Building),
        .background = ENVIRONMENT_BACKGROUND(Building),
        .palette = gBattleEnvironmentPalette_Frontier,
    },

    [BATTLE_ENVIRONMENT_GYM] =
    {
        .name = _("Gym"),
        BUILDING_ENVIRONMENT,
        .entry = ENVIRONMENT_ENTRY(Building),
        .background = ENVIRONMENT_BACKGROUND(Building),
        .palette = gBattleEnvironmentPalette_BuildingGym,
    },

    [BATTLE_ENVIRONMENT_LEADER] =
    {
        .name = _("Leader"),
        BUILDING_ENVIRONMENT,
        .entry = ENVIRONMENT_ENTRY(Building),
        .background = ENVIRONMENT_BACKGROUND(Building),
        .palette = gBattleEnvironmentPalette_BuildingLeader,
    },

    [BATTLE_ENVIRONMENT_MAGMA] =
    {
        .name = _("Magma"),
        BUILDING_ENVIRONMENT,
        .entry = ENVIRONMENT_ENTRY(Building),
        .background = ENVIRONMENT_BACKGROUND(Stadium),
        .palette = gBattleEnvironmentPalette_StadiumMagma,
    },

    [BATTLE_ENVIRONMENT_AQUA] =
    {
        .name = _("Aqua"),
        BUILDING_ENVIRONMENT,
        .entry = ENVIRONMENT_ENTRY(Building),
        .background = ENVIRONMENT_BACKGROUND(Stadium),
        .palette = gBattleEnvironmentPalette_StadiumAqua,
    },

    [BATTLE_ENVIRONMENT_SIDNEY] =
    {
        .name = _("Sidney"),
        BUILDING_ENVIRONMENT,
        .entry = ENVIRONMENT_ENTRY(Building),
        .background = ENVIRONMENT_BACKGROUND(Stadium),
        .palette = gBattleEnvironmentPalette_StadiumSidney,
    },

    [BATTLE_ENVIRONMENT_PHOEBE] =
    {
        .name = _("Phoebe"),
        BUILDING_ENVIRONMENT,
        .entry = ENVIRONMENT_ENTRY(Building),
        .background = ENVIRONMENT_BACKGROUND(Stadium),
        .palette = gBattleEnvironmentPalette_StadiumPhoebe,
    },

    [BATTLE_ENVIRONMENT_GLACIA] =
    {
        .name = _("Glacia"),
        BUILDING_ENVIRONMENT,
        .entry = ENVIRONMENT_ENTRY(Building),
        .background = ENVIRONMENT_BACKGROUND(Stadium),
        .palette = gBattleEnvironmentPalette_StadiumGlacia,
    },

    [BATTLE_ENVIRONMENT_DRAKE] =
    {
        .name = _("Drake"),
        BUILDING_ENVIRONMENT,
        .entry = ENVIRONMENT_ENTRY(Building),
        .background = ENVIRONMENT_BACKGROUND(Stadium),
        .palette = gBattleEnvironmentPalette_StadiumDrake,
    },

    [BATTLE_ENVIRONMENT_CHAMPION] =
    {
        .name = _("Champion"),
        BUILDING_ENVIRONMENT,
        .entry = ENVIRONMENT_ENTRY(Building),
        .background = ENVIRONMENT_BACKGROUND(Stadium),
        .palette = gBattleEnvironmentPalette_StadiumWallace,
    },

    [BATTLE_ENVIRONMENT_GROUDON] =
    {
        .name = _("Groudon"),
        CAVE_ENVIRONMENT,
        .entry = ENVIRONMENT_ENTRY(Cave),
        .background = ENVIRONMENT_BACKGROUND(Cave),
        .palette = gBattleEnvironmentPalette_Groudon,
        .battleIntroSlide = CAVE_BATTLE_INTRO_SLIDE,
    },

    [BATTLE_ENVIRONMENT_KYOGRE] =
    {
        .name = _("Kyogre"),
        CAVE_ENVIRONMENT,
        .entry = ENVIRONMENT_ENTRY(Underwater),
        .background = ENVIRONMENT_BACKGROUND(Water),
        .palette = gBattleEnvironmentPalette_Kyogre,
        .battleIntroSlide = BattleIntroSlide2,
    },

    [BATTLE_ENVIRONMENT_RAYQUAZA] = SKY_PILLAR_ENVIRONMENT("Rayquaza"),
    [BATTLE_ENVIRONMENT_SOARING] = SKY_PILLAR_ENVIRONMENT("Soaring"),
    [BATTLE_ENVIRONMENT_SKY_PILLAR] = SKY_PILLAR_ENVIRONMENT("Sky Pillar"),

    [BATTLE_ENVIRONMENT_BURIAL_GROUND] =
    {
        .name = _("Burial Ground"),
        .naturePower = MOVE_SHADOW_BALL,
        .secretPowerAnimation = gBattleAnimMove_ShadowSneak,
        .secretPowerEffect = MOVE_EFFECT_FLINCH,
        .camouflageType = TYPE_GHOST,
        .camouflageBlend = DEFAULT_CAMOUFLAGE_BLEND,
        .entry = ENVIRONMENT_ENTRY(Building),
        .background = ENVIRONMENT_BACKGROUND(Building),
        .palette = gBattleEnvironmentPalette_BurialGround,
        .battleIntroSlide = PLAIN_BATTLE_INTRO_SLIDE,
    },

    [BATTLE_ENVIRONMENT_PUDDLE] =
    {
        .name = _("Puddle"),
        .naturePower = MOVE_MUD_BOMB,
        .secretPowerAnimation = B_SECRET_POWER_ANIMATION >= GEN_5 ? gBattleAnimMove_MudBomb : gBattleAnimMove_MudSlap,
        .secretPowerEffect = B_SECRET_POWER_EFFECT >= GEN_5 ? MOVE_EFFECT_SPD_MINUS_1 : MOVE_EFFECT_ACC_MINUS_1,
        .camouflageType = TYPE_GROUND,
        .camouflageBlend = DEFAULT_CAMOUFLAGE_BLEND,
        .entry = ENVIRONMENT_ENTRY(PondWater),
        .background = ENVIRONMENT_BACKGROUND(PondWater),
        .palette = gBattleEnvironmentPalette_PondWater,
    },

    [BATTLE_ENVIRONMENT_MARSH] = WETLAND_ENVIRONMENT("Marsh"),
    [BATTLE_ENVIRONMENT_SWAMP] = WETLAND_ENVIRONMENT("Swamp"),

    [BATTLE_ENVIRONMENT_SNOW] =
    {
        .name = _("Snow"),
    #if B_NATURE_POWER_MOVES >= GEN_7
        .naturePower = MOVE_ICE_BEAM,
    #elif B_NATURE_POWER_MOVES == GEN_6
        .naturePower = MOVE_FROST_BREATH,
    #else
        .naturePower = MOVE_BLIZZARD,
    #endif
        .secretPowerAnimation = B_SECRET_POWER_ANIMATION >= GEN_7 ? gBattleAnimMove_IceShard : gBattleAnimMove_Avalanche,
        .secretPowerEffect = MOVE_EFFECT_FREEZE_OR_FROSTBITE,
        .camouflageType = TYPE_ICE,
        .camouflageBlend = DEFAULT_CAMOUFLAGE_BLEND,
        .entry = ENVIRONMENT_ENTRY(Sand),
        .background = ENVIRONMENT_BACKGROUND(Sand),
        .palette = gBattleEnvironmentPalette_Ice,
        .battleIntroSlide = BattleIntroSlide2,
    },

    [BATTLE_ENVIRONMENT_ICE] =
    {
        .name = _("Ice"),
        .naturePower = MOVE_ICE_BEAM,
        .secretPowerAnimation = gBattleAnimMove_IceShard,
        .secretPowerEffect = MOVE_EFFECT_FREEZE_OR_FROSTBITE,
        .camouflageType = TYPE_ICE,
        .camouflageBlend = DEFAULT_CAMOUFLAGE_BLEND,
        .entry = ENVIRONMENT_ENTRY(Cave),
        .background = ENVIRONMENT_BACKGROUND(Cave),
        .palette = gBattleEnvironmentPalette_Ice,
        .battleIntroSlide = CAVE_BATTLE_INTRO_SLIDE
    },

    [BATTLE_ENVIRONMENT_VOLCANO] =
    {
        .name = _("Volcano"),
        .naturePower = MOVE_LAVA_PLUME,
        .secretPowerAnimation = gBattleAnimMove_Incinerate,
        .secretPowerEffect = MOVE_EFFECT_BURN,
        .camouflageType = TYPE_FIRE,
        .camouflageBlend = DEFAULT_CAMOUFLAGE_BLEND,
        .entry = ENVIRONMENT_ENTRY(Rock),
        .background = ENVIRONMENT_BACKGROUND(Rock),
        .palette = gBattleEnvironmentPalette_Volcano,
        .battleIntroSlide = BattleIntroSlide1,
    },

    [BATTLE_ENVIRONMENT_DISTORTION_WORLD] =
    {
        .name = _("Distortion World"),
        .naturePower = MOVE_TRI_ATTACK,
        .secretPowerAnimation = gBattleAnimMove_Pound,
        .secretPowerEffect = MOVE_EFFECT_PARALYSIS,
        .camouflageType = TYPE_NORMAL,
        .camouflageBlend = DEFAULT_CAMOUFLAGE_BLEND,
        .entry = ENVIRONMENT_ENTRY(Building),
        .background = ENVIRONMENT_BACKGROUND(Stadium),
        .palette = gBattleEnvironmentPalette_StadiumDark,
        .battleIntroSlide = BattleIntroSlide3,
    },

    [BATTLE_ENVIRONMENT_SPACE] =
    {
        .name = _("Space"),
        .naturePower = MOVE_DRACO_METEOR,
        .secretPowerAnimation = gBattleAnimMove_Swift,
        .secretPowerEffect = MOVE_EFFECT_FLINCH,
        .camouflageType = TYPE_DRAGON,
        .camouflageBlend = DEFAULT_CAMOUFLAGE_BLEND,
        .entry = ENVIRONMENT_ENTRY(Building),
        .background = ENVIRONMENT_BACKGROUND(Stadium),
        .palette = gBattleEnvironmentPalette_StadiumDark,
        .battleIntroSlide = BattleIntroSlide3,
    },

    [BATTLE_ENVIRONMENT_ULTRA_SPACE] =
    {
        .name = _("Ultra Space"),
        .naturePower = MOVE_PSYSHOCK,
        .secretPowerAnimation = gBattleAnimMove_Psywave,
        .secretPowerEffect = MOVE_EFFECT_DEF_MINUS_1,
        .camouflageType = TYPE_PSYCHIC,
        .camouflageBlend = DEFAULT_CAMOUFLAGE_BLEND,
        .entry = ENVIRONMENT_ENTRY(Building),
        .background = ENVIRONMENT_BACKGROUND(Stadium),
        .palette = gBattleEnvironmentPalette_StadiumDark,
        .battleIntroSlide = BattleIntroSlide3,
    },

#define TYPE_ENVIRONMENT(Type)                              \
    {                                                       \
        .name = _(#Type),                                   \
        BUILDING_ENVIRONMENT,                               \
        .entry = ENVIRONMENT_ENTRY(Building),               \
        .background = ENVIRONMENT_BACKGROUND(Stadium),      \
        .palette = gBattleEnvironmentPalette_Stadium##Type, \
    }

    [BATTLE_ENVIRONMENT_TYPE_FLYING] =
    {
        BUILDING_ENVIRONMENT,
        .entry = ENVIRONMENT_ENTRY(Building),
        .background = ENVIRONMENT_BACKGROUND(Stadium),
        .palette = gBattleEnvironmentPalette_StadiumFlying,
    },

    [BATTLE_ENVIRONMENT_TYPE_GRASS] =
    {
        BUILDING_ENVIRONMENT,
        .entry = ENVIRONMENT_ENTRY(Building),
        .background = ENVIRONMENT_BACKGROUND(Stadium),
        .palette = gBattleEnvironmentPalette_StadiumGrass,
    },

    [BATTLE_ENVIRONMENT_TYPE_ICE] =
    {
        BUILDING_ENVIRONMENT,
        .entry = ENVIRONMENT_ENTRY(Building),
        .background = ENVIRONMENT_BACKGROUND(Stadium),
        .palette = gBattleEnvironmentPalette_StadiumIce,
    },

    [BATTLE_ENVIRONMENT_TYPE_ROCK] =
    {
        BUILDING_ENVIRONMENT,
        .entry = ENVIRONMENT_ENTRY(Building),
        .background = ENVIRONMENT_BACKGROUND(Stadium),
        .palette = gBattleEnvironmentPalette_StadiumRock,
    },

    [BATTLE_ENVIRONMENT_GROUDON] =
    {
        .name = _("Groudon"),
        CAVE_ENVIRONMENT,
        .entry = ENVIRONMENT_ENTRY(Cave),
        .background = ENVIRONMENT_BACKGROUND(Cave),
        .palette = gBattleEnvironmentPalette_Groudon,
        .battleIntroSlide = CAVE_BATTLE_INTRO_SLIDE,
    },

    [BATTLE_ENVIRONMENT_KYOGRE] =
    {
        .name = _("Kyogre"),
        CAVE_ENVIRONMENT,
        .entry = ENVIRONMENT_ENTRY(Underwater),
        .background = ENVIRONMENT_BACKGROUND(Water),
        .palette = gBattleEnvironmentPalette_Kyogre,
        .battleIntroSlide = BattleIntroSlide2,
    },

    [BATTLE_ENVIRONMENT_RAYQUAZA] = SKY_PILLAR_ENVIRONMENT("Rayquaza"),
    [BATTLE_ENVIRONMENT_SOARING] = SKY_PILLAR_ENVIRONMENT("Soaring"),
    [BATTLE_ENVIRONMENT_SKY_PILLAR] = SKY_PILLAR_ENVIRONMENT("Sky Pillar"),

    [BATTLE_ENVIRONMENT_BURIAL_GROUND] =
    {
        .name = _("Burial Ground"),
        .naturePower = MOVE_SHADOW_BALL,
        .secretPowerAnimation = gBattleAnimMove_ShadowSneak,
        .secretPowerEffect = MOVE_EFFECT_FLINCH,
        .camouflageType = TYPE_GHOST,
        .camouflageBlend = DEFAULT_CAMOUFLAGE_BLEND,
        .entry = ENVIRONMENT_ENTRY(Building),
        .background = ENVIRONMENT_BACKGROUND(Building),
        .palette = gBattleEnvironmentPalette_BurialGround,
        .battleIntroSlide = PLAIN_BATTLE_INTRO_SLIDE,
    },

    [BATTLE_ENVIRONMENT_PUDDLE] =
    {
        .name = _("Puddle"),
        .naturePower = MOVE_MUD_BOMB,
        .secretPowerAnimation = B_SECRET_POWER_ANIMATION >= GEN_5 ? gBattleAnimMove_MudBomb : gBattleAnimMove_MudSlap,
        .secretPowerEffect = B_SECRET_POWER_EFFECT >= GEN_5 ? MOVE_EFFECT_SPD_MINUS_1 : MOVE_EFFECT_ACC_MINUS_1,
        .camouflageType = TYPE_GROUND,
        .camouflageBlend = DEFAULT_CAMOUFLAGE_BLEND,
        .entry = ENVIRONMENT_ENTRY(PondWater),
        .background = ENVIRONMENT_BACKGROUND(PondWater),
        .palette = gBattleEnvironmentPalette_PondWater,
    },

    [BATTLE_ENVIRONMENT_MARSH] = WETLAND_ENVIRONMENT("Marsh"),
    [BATTLE_ENVIRONMENT_SWAMP] = WETLAND_ENVIRONMENT("Swamp"),

    [BATTLE_ENVIRONMENT_SNOW] =
    {
        .name = _("Snow"),
    #if B_NATURE_POWER_MOVES >= GEN_7
        .naturePower = MOVE_ICE_BEAM,
    #elif B_NATURE_POWER_MOVES == GEN_6
        .naturePower = MOVE_FROST_BREATH,
    #else
        .naturePower = MOVE_BLIZZARD,
    #endif
        .secretPowerAnimation = B_SECRET_POWER_ANIMATION >= GEN_7 ? gBattleAnimMove_IceShard : gBattleAnimMove_Avalanche,
        .secretPowerEffect = MOVE_EFFECT_FREEZE_OR_FROSTBITE,
        .camouflageType = TYPE_ICE,
        .camouflageBlend = DEFAULT_CAMOUFLAGE_BLEND,
        .entry = ENVIRONMENT_ENTRY(Sand),
        .background = ENVIRONMENT_BACKGROUND(Sand),
        .palette = gBattleEnvironmentPalette_Ice,
        .battleIntroSlide = BattleIntroSlide2,
    },

    [BATTLE_ENVIRONMENT_ICE] =
    {
        .name = _("Ice"),
        .naturePower = MOVE_ICE_BEAM,
        .secretPowerAnimation = gBattleAnimMove_IceShard,
        .secretPowerEffect = MOVE_EFFECT_FREEZE_OR_FROSTBITE,
        .camouflageType = TYPE_ICE,
        .camouflageBlend = DEFAULT_CAMOUFLAGE_BLEND,
        .entry = ENVIRONMENT_ENTRY(Cave),
        .background = ENVIRONMENT_BACKGROUND(Cave),
        .palette = gBattleEnvironmentPalette_Ice,
        .battleIntroSlide = CAVE_BATTLE_INTRO_SLIDE
    },

    [BATTLE_ENVIRONMENT_VOLCANO] =
    {
        .name = _("Volcano"),
        .naturePower = MOVE_LAVA_PLUME,
        .secretPowerAnimation = gBattleAnimMove_Incinerate,
        .secretPowerEffect = MOVE_EFFECT_BURN,
        .camouflageType = TYPE_FIRE,
        .camouflageBlend = DEFAULT_CAMOUFLAGE_BLEND,
        .entry = ENVIRONMENT_ENTRY(Rock),
        .background = ENVIRONMENT_BACKGROUND(Rock),
        .palette = gBattleEnvironmentPalette_Volcano,
        .battleIntroSlide = BattleIntroSlide1,
    },

    [BATTLE_ENVIRONMENT_DISTORTION_WORLD] =
    {
        .name = _("Distortion World"),
        .naturePower = MOVE_TRI_ATTACK,
        .secretPowerAnimation = gBattleAnimMove_Pound,
        .secretPowerEffect = MOVE_EFFECT_PARALYSIS,
        .camouflageType = TYPE_NORMAL,
        .camouflageBlend = DEFAULT_CAMOUFLAGE_BLEND,
        .entry = ENVIRONMENT_ENTRY(Building),
        .background = ENVIRONMENT_BACKGROUND(Stadium),
        .palette = gBattleEnvironmentPalette_StadiumDark,
        .battleIntroSlide = BattleIntroSlide3,
    },

    [BATTLE_ENVIRONMENT_SPACE] =
    {
        .name = _("Space"),
        .naturePower = MOVE_DRACO_METEOR,
        .secretPowerAnimation = gBattleAnimMove_Swift,
        .secretPowerEffect = MOVE_EFFECT_FLINCH,
        .camouflageType = TYPE_DRAGON,
        .camouflageBlend = DEFAULT_CAMOUFLAGE_BLEND,
        .entry = ENVIRONMENT_ENTRY(Building),
        .background = ENVIRONMENT_BACKGROUND(Stadium),
        .palette = gBattleEnvironmentPalette_StadiumDark,
        .battleIntroSlide = BattleIntroSlide3,
    },

    [BATTLE_ENVIRONMENT_ULTRA_SPACE] =
    {
        .name = _("Ultra Space"),
        .naturePower = MOVE_PSYSHOCK,
        .secretPowerAnimation = gBattleAnimMove_Psywave,
        .secretPowerEffect = MOVE_EFFECT_DEF_MINUS_1,
        .camouflageType = TYPE_PSYCHIC,
        .camouflageBlend = DEFAULT_CAMOUFLAGE_BLEND,
        .entry = ENVIRONMENT_ENTRY(Building),
        .background = ENVIRONMENT_BACKGROUND(Stadium),
        .palette = gBattleEnvironmentPalette_StadiumDark,
        .battleIntroSlide = BattleIntroSlide3,
    },

#define TYPE_ENVIRONMENT(Type)                              \
    {                                                       \
        .name = _(#Type),                                   \
        BUILDING_ENVIRONMENT,                               \
        .entry = ENVIRONMENT_ENTRY(Building),               \
        .background = ENVIRONMENT_BACKGROUND(Stadium),      \
        .palette = gBattleEnvironmentPalette_Stadium##Type, \
    }

    [BATTLE_ENVIRONMENT_TYPE_DARK] = TYPE_ENVIRONMENT(Dark),
    [BATTLE_ENVIRONMENT_TYPE_FLYING] = TYPE_ENVIRONMENT(Flying),
    [BATTLE_ENVIRONMENT_TYPE_GRASS] = TYPE_ENVIRONMENT(Grass),
    [BATTLE_ENVIRONMENT_TYPE_ICE] = TYPE_ENVIRONMENT(Ice),
    [BATTLE_ENVIRONMENT_TYPE_ROCK] = TYPE_ENVIRONMENT(Rock),
};

#define MAP_BATTLE_SCENE_TO_BATTLE_ENVIRONMENT(Type) {MAP_BATTLE_SCENE_##Type, BATTLE_ENVIRONMENT_##Type}

static const struct {
    u8 mapScene;
    u8 battleEnvironment;
} sMapBattleSceneMapping[] = {
    MAP_BATTLE_SCENE_TO_BATTLE_ENVIRONMENT(GYM),
    MAP_BATTLE_SCENE_TO_BATTLE_ENVIRONMENT(MAGMA),
    MAP_BATTLE_SCENE_TO_BATTLE_ENVIRONMENT(AQUA),
    {MAP_BATTLE_SCENE_SIDNEY, BATTLE_ENVIRONMENT_TYPE_DARK},
    MAP_BATTLE_SCENE_TO_BATTLE_ENVIRONMENT(PHOEBE),
    {MAP_BATTLE_SCENE_GLACIA, BATTLE_ENVIRONMENT_TYPE_ICE},
    MAP_BATTLE_SCENE_TO_BATTLE_ENVIRONMENT(DRAKE),
    MAP_BATTLE_SCENE_TO_BATTLE_ENVIRONMENT(FRONTIER),
    MAP_BATTLE_SCENE_TO_BATTLE_ENVIRONMENT(SKY_PILLAR),
    MAP_BATTLE_SCENE_TO_BATTLE_ENVIRONMENT(VOLCANO),
};
