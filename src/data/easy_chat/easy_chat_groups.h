#include "easy_chat.h"

#include "easy_chat_group_pokemon.h"
#include "easy_chat_group_trainer.h"
#include "easy_chat_group_status.h"
#include "easy_chat_group_battle.h"
#include "easy_chat_group_greetings.h"
#include "easy_chat_group_people.h"
#include "easy_chat_group_voices.h"
#include "easy_chat_group_speech.h"
#include "easy_chat_group_endings.h"
#include "easy_chat_group_feelings.h"
#include "easy_chat_group_conditions.h"
#include "easy_chat_group_actions.h"
#include "easy_chat_group_lifestyle.h"
#include "easy_chat_group_hobbies.h"
#include "easy_chat_group_time.h"
#include "easy_chat_group_misc.h"
#include "easy_chat_group_adjectives.h"
#include "easy_chat_group_events.h"
#include "easy_chat_group_move_1.h"
#include "easy_chat_group_move_2.h"
#include "easy_chat_group_trendy_saying.h"
#include "easy_chat_group_pokemon2.h"

#define EASY_CHAT_GROUP(ListType, Group)       \
    {                                          \
        .wordData = {.ListType = Group},       \
        .numWords = ARRAY_COUNT(Group),        \
    }

const struct EasyChatGroup gEasyChatGroups[] = {
    [EC_GROUP_POKEMON]          = EASY_CHAT_GROUP(valueList, gEasyChatGroup_Pokemon),
    [EC_GROUP_TRAINER]          = EASY_CHAT_GROUP(words, gEasyChatGroup_Trainer),
    [EC_GROUP_STATUS]           = EASY_CHAT_GROUP(words, gEasyChatGroup_Status),
    [EC_GROUP_BATTLE]           = EASY_CHAT_GROUP(words, gEasyChatGroup_Battle),
    [EC_GROUP_GREETINGS]        = EASY_CHAT_GROUP(words, gEasyChatGroup_Greetings),
    [EC_GROUP_PEOPLE]           = EASY_CHAT_GROUP(words, gEasyChatGroup_People),
    [EC_GROUP_VOICES]           = EASY_CHAT_GROUP(words, gEasyChatGroup_Voices),
    [EC_GROUP_SPEECH]           = EASY_CHAT_GROUP(words, gEasyChatGroup_Speech),
    [EC_GROUP_ENDINGS]          = EASY_CHAT_GROUP(words, gEasyChatGroup_Endings),
    [EC_GROUP_FEELINGS]         = EASY_CHAT_GROUP(words, gEasyChatGroup_Feelings),
    [EC_GROUP_CONDITIONS]       = EASY_CHAT_GROUP(words, gEasyChatGroup_Conditions),
    [EC_GROUP_ACTIONS]          = EASY_CHAT_GROUP(words, gEasyChatGroup_Actions),
    [EC_GROUP_LIFESTYLE]        = EASY_CHAT_GROUP(words, gEasyChatGroup_Lifestyle),
    [EC_GROUP_HOBBIES]          = EASY_CHAT_GROUP(words, gEasyChatGroup_Hobbies),
    [EC_GROUP_TIME]             = EASY_CHAT_GROUP(words, gEasyChatGroup_Time),
    [EC_GROUP_MISC]             = EASY_CHAT_GROUP(words, gEasyChatGroup_Misc),
    [EC_GROUP_ADJECTIVES]       = EASY_CHAT_GROUP(words, gEasyChatGroup_Adjectives),
    [EC_GROUP_EVENTS]           = EASY_CHAT_GROUP(words, gEasyChatGroup_Events),
    [EC_GROUP_MOVE_1]           = EASY_CHAT_GROUP(valueList, gEasyChatGroup_Move1),
    [EC_GROUP_MOVE_2]           = EASY_CHAT_GROUP(valueList, gEasyChatGroup_Move2),
    [EC_GROUP_TRENDY_SAYING]    = EASY_CHAT_GROUP(words, gEasyChatGroup_TrendySaying),
    [EC_GROUP_POKEMON_NATIONAL] = EASY_CHAT_GROUP(valueList, gEasyChatGroup_Pokemon2),
};
