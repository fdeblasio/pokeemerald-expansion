#ifndef GUARD_DATA_H
#define GUARD_DATA_H

#include "constants/moves.h"
#include "constants/trainers.h"

#define MAX_TRAINER_ITEMS 4

#define TRAINER_PIC_WIDTH 64
#define TRAINER_PIC_HEIGHT 64
#define TRAINER_PIC_SIZE (TRAINER_PIC_WIDTH * TRAINER_PIC_HEIGHT / 2)

// Red and Leaf's back pics have 5 frames, but this is presumably irrelevant in the places this is used.
#define MAX_TRAINER_PIC_FRAMES 4

enum {
    BATTLER_AFFINE_NORMAL,
    BATTLER_AFFINE_EMERGE,
    BATTLER_AFFINE_RETURN,
};

struct MonCoords
{
    // This would use a bitfield, but some function
    // uses it as a u8 and casting won't match.
    u8 size; // u8 width:4, height:4;
    u8 y_offset;
};

struct TrainerSprite
{
    u8 y_offset;
    struct CompressedSpriteSheet frontPic;
    struct CompressedSpritePalette palette;
    const union AnimCmd *const *const animation;
    const struct Coords16 mugshotCoords;
    s16 mugshotRotation;
};

struct TrainerBacksprite
{
    struct MonCoords coordinates;
    struct CompressedSpriteSheet backPic;
    struct CompressedSpritePalette palette;
    const union AnimCmd *const *const animation;
};

#define MON_COORDS_SIZE(width, height)(DIV_ROUND_UP(width, 8) << 4 | DIV_ROUND_UP(height, 8))
#define GET_MON_COORDS_WIDTH(size)((size >> 4) * 8)
#define GET_MON_COORDS_HEIGHT(size)((size & 0xF) * 8)
#define TRAINER_PARTY_IVS(hp, atk, def, speed, spatk, spdef) (hp | (atk << 5) | (def << 10) | (speed << 15) | (spatk << 20) | (spdef << 25))
#define TRAINER_PARTY_EVS(hp, atk, def, speed, spatk, spdef) ((const u8[6]){hp,atk,def,spatk,spdef,speed})

// Shared by both trainer and frontier mons
// See CreateNPCTrainerPartyFromTrainer and CreateFacilityMon
struct TrainerMon
{
    const u8 *nickname;
    const u8 *ev;
    u32 iv;
    u16 moves[4];
    u16 species;
    u16 heldItem;
    u16 ability;
    u8 lvl;
    u8 ball;
    u8 friendship;
    u8 nature:5;
    bool8 gender:2;
    bool8 isShiny:1;
    u8 teraType:5;
    bool8 gigantamaxFactor:1;
    u8 shouldUseDynamax:1;
    u8 padding1:1;
    u8 dynamaxLevel:4;
    u8 padding2:4;
};

#define IVS(IV) .iv = TRAINER_PARTY_IVS(IV, IV, IV, IV, IV, IV)
#define PERFECT_IVS IVS(MAX_PER_STAT_IVS)

#define EV_SPREAD_ATK_HP_DEF    .ev = TRAINER_PARTY_EVS(MAX_PER_STAT_EVS, MAX_PER_STAT_EVS, EV_REMAINDER, 0, 0, 0)
#define EV_SPREAD_ATK_HP_SPD    .ev = TRAINER_PARTY_EVS(MAX_PER_STAT_EVS, MAX_PER_STAT_EVS, 0, 0, 0, EV_REMAINDER)
#define EV_SPREAD_ATK_HP_SPE    .ev = TRAINER_PARTY_EVS(MAX_PER_STAT_EVS, MAX_PER_STAT_EVS, 0, EV_REMAINDER, 0, 0)
#define EV_SPREAD_ATK_DEF_HP    .ev = TRAINER_PARTY_EVS(EV_REMAINDER, MAX_PER_STAT_EVS, MAX_PER_STAT_EVS, 0, 0, 0)
#define EV_SPREAD_ATK_DEF_SPD   .ev = TRAINER_PARTY_EVS(0, MAX_PER_STAT_EVS, MAX_PER_STAT_EVS, 0, 0, EV_REMAINDER)
#define EV_SPREAD_ATK_DEF_SPE   .ev = TRAINER_PARTY_EVS(0, MAX_PER_STAT_EVS, MAX_PER_STAT_EVS, EV_REMAINDER, 0, 0)
#define EV_SPREAD_ATK_SPD_HP    .ev = TRAINER_PARTY_EVS(EV_REMAINDER, MAX_PER_STAT_EVS, 0, 0, 0, MAX_PER_STAT_EVS)
#define EV_SPREAD_ATK_SPD_DEF   .ev = TRAINER_PARTY_EVS(0, MAX_PER_STAT_EVS, EV_REMAINDER, 0, 0, MAX_PER_STAT_EVS)
#define EV_SPREAD_ATK_SPD_SPE   .ev = TRAINER_PARTY_EVS(0, MAX_PER_STAT_EVS, 0, EV_REMAINDER, 0, MAX_PER_STAT_EVS)
#define EV_SPREAD_ATK_SPE_HP    .ev = TRAINER_PARTY_EVS(EV_REMAINDER, MAX_PER_STAT_EVS, 0, MAX_PER_STAT_EVS, 0, 0)
#define EV_SPREAD_ATK_SPE_DEF   .ev = TRAINER_PARTY_EVS(0, MAX_PER_STAT_EVS, EV_REMAINDER, MAX_PER_STAT_EVS, 0, 0)
#define EV_SPREAD_ATK_SPE_SPD   .ev = TRAINER_PARTY_EVS(0, MAX_PER_STAT_EVS, 0, MAX_PER_STAT_EVS, 0, 0)
#define EV_SPREAD_DEF_HP_ATK    .ev = TRAINER_PARTY_EVS(MAX_PER_STAT_EVS, EV_REMAINDER, MAX_PER_STAT_EVS, 0, 0, 0)
#define EV_SPREAD_DEF_HP_SPA    .ev = TRAINER_PARTY_EVS(MAX_PER_STAT_EVS, 0, MAX_PER_STAT_EVS, 0, EV_REMAINDER, 0)
#define EV_SPREAD_DEF_HP_SPD    .ev = TRAINER_PARTY_EVS(MAX_PER_STAT_EVS, 0, MAX_PER_STAT_EVS, 0, 0, EV_REMAINDER)
#define EV_SPREAD_DEF_HP_SPE    .ev = TRAINER_PARTY_EVS(MAX_PER_STAT_EVS, 0, MAX_PER_STAT_EVS, EV_REMAINDER, 0, 0)
#define EV_SPREAD_DEF_SPD_HP    .ev = TRAINER_PARTY_EVS(EV_REMAINDER, 0, MAX_PER_STAT_EVS, 0, 0, MAX_PER_STAT_EVS)
#define EV_SPREAD_DEF_SPD_ATK   .ev = TRAINER_PARTY_EVS(0, EV_REMAINDER, MAX_PER_STAT_EVS, 0, 0, MAX_PER_STAT_EVS)
#define EV_SPREAD_DEF_SPD_SPA   .ev = TRAINER_PARTY_EVS(0, 0, MAX_PER_STAT_EVS, 0, EV_REMAINDER, MAX_PER_STAT_EVS)
#define EV_SPREAD_SPA_HP_DEF    .ev = TRAINER_PARTY_EVS(MAX_PER_STAT_EVS, 0, EV_REMAINDER, 0, MAX_PER_STAT_EVS, 0)
#define EV_SPREAD_SPA_HP_SPD    .ev = TRAINER_PARTY_EVS(MAX_PER_STAT_EVS, 0, 0, 0, MAX_PER_STAT_EVS, EV_REMAINDER)
#define EV_SPREAD_SPA_HP_SPE    .ev = TRAINER_PARTY_EVS(MAX_PER_STAT_EVS, 0, 0, EV_REMAINDER, MAX_PER_STAT_EVS, 0)
#define EV_SPREAD_SPA_DEF_HP    .ev = TRAINER_PARTY_EVS(EV_REMAINDER, 0, MAX_PER_STAT_EVS, 0, MAX_PER_STAT_EVS, 0)
#define EV_SPREAD_SPA_DEF_SPD   .ev = TRAINER_PARTY_EVS(0, 0, MAX_PER_STAT_EVS, 0, MAX_PER_STAT_EVS, EV_REMAINDER)
#define EV_SPREAD_SPA_DEF_SPE   .ev = TRAINER_PARTY_EVS(0, 0, MAX_PER_STAT_EVS, EV_REMAINDER, MAX_PER_STAT_EVS, 0)
#define EV_SPREAD_SPA_SPD_HP    .ev = TRAINER_PARTY_EVS(EV_REMAINDER, 0, 0, 0, MAX_PER_STAT_EVS, MAX_PER_STAT_EVS)
#define EV_SPREAD_SPA_SPD_DEF   .ev = TRAINER_PARTY_EVS(0, 0, EV_REMAINDER, 0, MAX_PER_STAT_EVS, MAX_PER_STAT_EVS)
#define EV_SPREAD_SPA_SPD_SPE   .ev = TRAINER_PARTY_EVS(0, 0, 0, EV_REMAINDER, MAX_PER_STAT_EVS, MAX_PER_STAT_EVS)
#define EV_SPREAD_SPA_SPE_HP    .ev = TRAINER_PARTY_EVS(EV_REMAINDER, 0, 0, MAX_PER_STAT_EVS, MAX_PER_STAT_EVS, 0)
#define EV_SPREAD_SPA_SPE_DEF   .ev = TRAINER_PARTY_EVS(0, 0, EV_REMAINDER, MAX_PER_STAT_EVS, MAX_PER_STAT_EVS, 0)
#define EV_SPREAD_SPA_SPE_SPD   .ev = TRAINER_PARTY_EVS(0, 0, 0, MAX_PER_STAT_EVS, MAX_PER_STAT_EVS, EV_REMAINDER)
#define EV_SPREAD_SPD_HP_ATK    .ev = TRAINER_PARTY_EVS(MAX_PER_STAT_EVS, EV_REMAINDER, 0, 0, 0, MAX_PER_STAT_EVS)
#define EV_SPREAD_SPD_HP_DEF    .ev = TRAINER_PARTY_EVS(MAX_PER_STAT_EVS, 0, EV_REMAINDER, 0, 0, MAX_PER_STAT_EVS)
#define EV_SPREAD_SPD_HP_SPA    .ev = TRAINER_PARTY_EVS(MAX_PER_STAT_EVS, 0, 0, 0, EV_REMAINDER, MAX_PER_STAT_EVS)
#define EV_SPREAD_SPD_HP_SPE    .ev = TRAINER_PARTY_EVS(MAX_PER_STAT_EVS, 0, 0, EV_REMAINDER, 0, MAX_PER_STAT_EVS)
#define EV_SPREAD_SPD_DEF_HP    EV_SPREAD_DEF_SPD_HP
#define EV_SPREAD_SPD_DEF_ATK   EV_SPREAD_DEF_SPD_ATK
#define EV_SPREAD_SPD_DEF_SPA   EV_SPREAD_DEF_SPD_SPA
#define EV_SPREAD_SPE_DEF_HP    .ev = TRAINER_PARTY_EVS(EV_REMAINDER, 0, MAX_PER_STAT_EVS, MAX_PER_STAT_EVS, 0, 0)
#define EV_SPREAD_SPE_SPD_HP    .ev = TRAINER_PARTY_EVS(EV_REMAINDER, 0, 0, 0, MAX_PER_STAT_EVS, MAX_PER_STAT_EVS)

struct Trainer
{
    /*0x00*/ u32 aiFlags;
    /*0x04*/ const struct TrainerMon *party;
    /*0x08*/ u16 items[MAX_TRAINER_ITEMS];
    /*0x10*/ u8 trainerClass;
    /*0x11*/ u8 encounterMusic_gender; // last bit is gender
    /*0x12*/ u8 trainerPic;
    /*0x13*/ u8 trainerName[TRAINER_NAME_LENGTH + 1];
    /*0x1E*/ bool8 doubleBattle:1;
             bool8 mugshotEnabled:1;
             u8 startingStatus:6;    // this trainer starts a battle with a given status. see include/constants/battle.h for values
    /*0x1F*/ u8 mugshotColor;
    /*0x20*/ u8 partySize;
};

#define STEVEN_INFO                      \
    .trainerName = _("Steven"),          \
    .trainerClass = TRAINER_CLASS_RIVAL, \
    .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE

#define STEVEN_PERRSERKER(Level)                                                 \
    .lvl = Level,                                                                \
    .species = SPECIES_PERRSERKER,                                               \
    .ability = ABILITY_STEELY_SPIRIT,                                            \
    .nature = NATURE_ADAMANT,                                                    \
    EV_SPREAD_ATK_DEF_HP,                                                        \
    PERFECT_IVS,                                                                 \
    .moves = {MOVE_IRON_HEAD, MOVE_SEED_BOMB, MOVE_FAKE_OUT, MOVE_SWORDS_DANCE}, \
    .gender = TRAINER_MON_MALE,                                                  \
    .ball = ITEM_POKE_BALL

#define STEVEN_AGGRON(Level)                                                                                   \
    .lvl = Level,                                                                                              \
    .species = SPECIES_AGGRON,                                                                                 \
    .ability = ABILITY_STURDY,                                                                                 \
    .nature = NATURE_IMPISH,                                                                                   \
    EV_SPREAD_ATK_DEF_HP,                                                                                      \
    PERFECT_IVS,                                                                                               \
    .moves = {MOVE_IRON_HEAD, MOVE_ROCK_SLIDE, MOVE_BODY_PRESS, Level < 64 ? MOVE_HARDEN : MOVE_IRON_DEFENSE}, \
    .gender = TRAINER_MON_MALE,                                                                                \
    .ball = ITEM_HEAVY_BALL

#define STEVEN_MAWILE(Level)                                                    \
    .lvl = Level,                                                               \
    .species = SPECIES_MAWILE,                                                  \
    .ability = ABILITY_SHEER_FORCE,                                             \
    .nature = NATURE_ADAMANT,                                                   \
    EV_SPREAD_ATK_SPE_DEF,                                                      \
    PERFECT_IVS,                                                                \
    .moves = {MOVE_IRON_HEAD, MOVE_PLAY_ROUGH, MOVE_CRUNCH, MOVE_SWORDS_DANCE}, \
    .gender = TRAINER_MON_FEMALE,                                               \
    .ball = ITEM_ULTRA_BALL

#define MAXIE_SPACE_CENTER_ACE_LEVEL 53

struct TrainerClass
{
    u8 name[13];
    u8 money;
    u16 ball;
};

struct TypeInfo
{
    u8 name[TYPE_NAME_LENGTH + 1];
    u8 generic[17];
    u8 palette;
    u16 zMove;
    u16 maxMove;
    u16 teraTypeRGBValue;    // Most values pulled from the Tera type icon palette.
    u16 damageCategory:2;    // Used for B_PHYSICAL_SPECIAL_SPLIT <= GEN_3
    u16 useSecondTypeIconPalette:1;
    u16 isSpecialCaseType:1;
    u16 padding:12;
    const u32 *const paletteTM;
    //u16 enhanceItem;
    //u16 berry;
    //u16 gem;
    //u16 plate;
    //u16 memory;
    //u16 zCrystal;
    //u16 teraShard;
    //u16 arceusForm;
};

struct FollowerMsgInfo
{
    const u8 *text;
    const u8 *script;
};

struct FollowerMessagePool
{
    const struct FollowerMsgInfo *messages;
    const u8 *script;
    u16 length;
};

extern const u16 gMinigameDigits_Pal[];
extern const u32 gMinigameDigits_Gfx[];

extern const struct SpriteFrameImage gBattlerPicTable_PlayerLeft[];
extern const struct SpriteFrameImage gBattlerPicTable_OpponentLeft[];
extern const struct SpriteFrameImage gBattlerPicTable_PlayerRight[];
extern const struct SpriteFrameImage gBattlerPicTable_OpponentRight[];
extern const struct SpriteFrameImage gTrainerBackPicTable_Kyle[];
extern const struct SpriteFrameImage gTrainerBackPicTable_May[];
extern const struct SpriteFrameImage gTrainerBackPicTable_Red[];
extern const struct SpriteFrameImage gTrainerBackPicTable_Leaf[];
extern const struct SpriteFrameImage gTrainerBackPicTable_RubySapphireKyle[];
extern const struct SpriteFrameImage gTrainerBackPicTable_RubySapphireMay[];
extern const struct SpriteFrameImage gTrainerBackPicTable_Duncan[];
extern const struct SpriteFrameImage gTrainerBackPicTable_Steven[];

extern const union AffineAnimCmd *const gAffineAnims_BattleSpritePlayerSide[];
extern const union AffineAnimCmd *const gAffineAnims_BattleSpriteOpponentSide[];
extern const union AffineAnimCmd *const gAffineAnims_BattleSpriteContest[];

extern const union AnimCmd sAnim_GeneralFrame0[];
extern const union AnimCmd sAnim_GeneralFrame3[];
extern const union AnimCmd *const gAnims_MonPic[];
extern const union AnimCmd *const sAnims_Trainer[];
extern const struct TrainerSprite gTrainerSprites[];
extern const struct TrainerBacksprite gTrainerBacksprites[];

extern const struct Trainer gTrainers[];
extern const struct Trainer gBattlePartners[];

extern const struct TrainerClass gTrainerClasses[TRAINER_CLASS_COUNT];

// Follower text messages
extern const struct FollowerMsgInfo gFollowerHappyMessages[];
extern const struct FollowerMsgInfo gFollowerNeutralMessages[];
extern const struct FollowerMsgInfo gFollowerSadMessages[];
extern const struct FollowerMsgInfo gFollowerUpsetMessages[];
extern const struct FollowerMsgInfo gFollowerAngryMessages[];
extern const struct FollowerMsgInfo gFollowerPensiveMessages[];
extern const struct FollowerMsgInfo gFollowerLoveMessages[];
extern const struct FollowerMsgInfo gFollowerSurpriseMessages[];
extern const struct FollowerMsgInfo gFollowerCuriousMessages[];
extern const struct FollowerMsgInfo gFollowerMusicMessages[];
extern const struct FollowerMsgInfo gFollowerPoisonedMessages[];

static inline u16 SanitizeTrainerId(u16 trainerId)
{
    if (trainerId >= TRAINERS_COUNT)
        return TRAINER_NONE;
    return trainerId;
}

static inline const struct Trainer *GetTrainerStructFromId(u16 trainerId)
{
    return &gTrainers[SanitizeTrainerId(trainerId)];
}

static inline const u8 GetTrainerClassFromId(u16 trainerId)
{
    return gTrainers[SanitizeTrainerId(trainerId)].trainerClass;
}

static inline const u8 *GetTrainerClassNameFromId(u16 trainerId)
{
    if (trainerId > TRAINER_PARTNER(PARTNER_NONE))
        return gTrainerClasses[gBattlePartners[trainerId - TRAINER_PARTNER(PARTNER_NONE)].trainerClass].name;
    return gTrainerClasses[GetTrainerClassFromId(trainerId)].name;
}

static inline const u8 *GetTrainerNameFromId(u16 trainerId)
{
    if (trainerId > TRAINER_PARTNER(PARTNER_NONE))
        return gBattlePartners[trainerId - TRAINER_PARTNER(PARTNER_NONE)].trainerName;
    return gTrainers[SanitizeTrainerId(trainerId)].trainerName;
}

static inline const u8 GetTrainerPicFromId(u16 trainerId)
{
    return gTrainers[SanitizeTrainerId(trainerId)].trainerPic;
}

static inline const u8 GetTrainerStartingStatusFromId(u16 trainerId)
{
    return gTrainers[SanitizeTrainerId(trainerId)].startingStatus;
}

static inline const bool32 IsTrainerDoubleBattle(u16 trainerId)
{
    return gTrainers[SanitizeTrainerId(trainerId)].doubleBattle;
}

static inline const u8 GetTrainerPartySizeFromId(u16 trainerId)
{
    return gTrainers[SanitizeTrainerId(trainerId)].partySize;
}

static inline const bool32 DoesTrainerHaveMugshot(u16 trainerId)
{
    return gTrainers[SanitizeTrainerId(trainerId)].mugshotEnabled;
}

static inline const u8 GetTrainerMugshotColorFromId(u16 trainerId)
{
    return gTrainers[SanitizeTrainerId(trainerId)].mugshotColor;
}

static inline const u16 *GetTrainerItemsFromId(u16 trainerId)
{
    return gTrainers[SanitizeTrainerId(trainerId)].items;
}

static inline const struct TrainerMon *GetTrainerPartyFromId(u16 trainerId)
{
    return gTrainers[SanitizeTrainerId(trainerId)].party;
}

static inline const bool32 GetTrainerAIFlagsFromId(u16 trainerId)
{
    return gTrainers[SanitizeTrainerId(trainerId)].aiFlags;
}

#endif // GUARD_DATA_H
