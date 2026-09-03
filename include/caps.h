#ifndef GUARD_CAPS_H
#define GUARD_CAPS_H

#if B_EXP_CAP_TYPE != EXP_CAP_NONE && B_EXP_CAP_TYPE != EXP_CAP_HARD && B_EXP_CAP_TYPE != EXP_CAP_SOFT
#error "Invalid choice for B_EXP_CAP_TYPE, must be of [EXP_CAP_NONE, EXP_CAP_HARD, EXP_CAP_SOFT]"
#endif

#if B_EXP_CAP_TYPE == EXP_CAP_HARD || B_EXP_CAP_TYPE == EXP_CAP_SOFT
#if B_LEVEL_CAP_TYPE != LEVEL_CAP_FLAG_LIST && B_LEVEL_CAP_TYPE != LEVEL_CAP_VARIABLE
#error "Invalid choice for B_LEVEL_CAP_TYPE, must be of [LEVEL_CAP_FLAG_LIST, LEVEL_CAP_VARIABLE]"
#endif
#if B_LEVEL_CAP_TYPE == LEVEL_CAP_VARIABLE && B_LEVEL_CAP_VARIABLE == 0
#error "B_LEVEL_CAP_TYPE set to LEVEL_CAP_VARIABLE, but no variable chosen for B_LEVEL_CAP_VARIABLE, set B_LEVEL_CAP_VARIABLE to a valid event variable"
#endif
#endif

#if B_EV_CAP_TYPE != EV_CAP_NONE && B_EV_CAP_TYPE != EV_CAP_FLAG_LIST && B_EV_CAP_TYPE != EV_CAP_VARIABLE && B_EV_CAP_TYPE != EV_CAP_NO_GAIN
#error "Invalid choice for B_EV_CAP_TYPE, must be one of [EV_CAP_NONE, EV_CAP_FLAG_LIST, EV_CAP_VARIABLE, EV_CAP_NO_GAIN]"
#endif

#define CAP_GYM_1           15
#define CAP_GYM_2           18
#define CAP_MUSEUM          19
#define CAP_MAUVILLE_WALLY  20
#define CAP_GYM_3           24
#define CAP_METEOR_FALLS    28
#define CAP_MT_CHIMNEY      30
#define CAP_GYM_4           32
#define CAP_GYM_5           35
#define CAP_WEATHER         41
#define CAP_RIVAL_119       42
#define CAP_GYM_6           43
#define CAP_LILYCOVE        45
#define CAP_MAGMA_HIDEOUT   48
#define CAP_AQUA_HIDEOUT    49
#define CAP_GYM_7           51
#define CAP_SPACE_CENTER    53
#define CAP_SEAFLOOR_CAVERN 55
#define CAP_GYM_8        58
#define CAP_CHAMPION     69

u32 GetCurrentLevelCap(void);
u32 GetSoftLevelCapExpValue(u32 level, u32 expValue);
u32 GetCurrentEVCap(void);

#endif /* GUARD_CAPS_H */
