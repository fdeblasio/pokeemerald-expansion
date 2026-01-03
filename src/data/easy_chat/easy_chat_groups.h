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

#define EASY_CHAT_GROUP(ListType, Group)  \
    .wordData = {.ListType = Group},      \
    .numWords = ARRAY_COUNT(Group)

const struct EasyChatGroup gEasyChatGroups[EC_NUM_GROUPS] = {
    [EC_GROUP_POKEMON] =
    {
        .name = COMPOUND_STRING("Pokémon"),
        EASY_CHAT_GROUP(valueList, gEasyChatGroup_Pokemon),
    },
    [EC_GROUP_TRAINER] =
    {
        .name = COMPOUND_STRING("Trainer"),
        EASY_CHAT_GROUP(words, gEasyChatGroup_Trainer),
    },
    [EC_GROUP_STATUS] =
    {
        .name = COMPOUND_STRING("Status"),
        EASY_CHAT_GROUP(words, gEasyChatGroup_Status),
    },
    [EC_GROUP_BATTLE] =
    {
        .name = COMPOUND_STRING("Battle"),
        EASY_CHAT_GROUP(words, gEasyChatGroup_Battle),
    },
    [EC_GROUP_GREETINGS] =
    {
        .name = COMPOUND_STRING("Greetings"),
        EASY_CHAT_GROUP(words, gEasyChatGroup_Greetings),
    },
    [EC_GROUP_PEOPLE] =
    {
        .name = COMPOUND_STRING("People"),
        EASY_CHAT_GROUP(words, gEasyChatGroup_People),
    },
    [EC_GROUP_VOICES] =
    {
        .name = COMPOUND_STRING("Voices"),
        EASY_CHAT_GROUP(words, gEasyChatGroup_Voices),
    },
    [EC_GROUP_SPEECH] =
    {
        .name = COMPOUND_STRING("Speech"),
        EASY_CHAT_GROUP(words, gEasyChatGroup_Speech),
    },
    [EC_GROUP_ENDINGS] =
    {
        .name = COMPOUND_STRING("Endings"),
        EASY_CHAT_GROUP(words, gEasyChatGroup_Endings),
    },
    [EC_GROUP_FEELINGS] =
    {
        .name = COMPOUND_STRING("Feelings"),
        EASY_CHAT_GROUP(words, gEasyChatGroup_Feelings),
    },
    [EC_GROUP_CONDITIONS] =
    {
        .name = COMPOUND_STRING("Conditions"),
        EASY_CHAT_GROUP(words, gEasyChatGroup_Conditions),
    },
    [EC_GROUP_ACTIONS] =
    {
        .name = COMPOUND_STRING("Actions"),
        EASY_CHAT_GROUP(words, gEasyChatGroup_Actions),
    },
    [EC_GROUP_LIFESTYLE] =
    {
        .name = COMPOUND_STRING("Lifestyle"),
        EASY_CHAT_GROUP(words, gEasyChatGroup_Lifestyle),
    },
    [EC_GROUP_HOBBIES] =
    {
        .name = COMPOUND_STRING("Hobbies"),
        EASY_CHAT_GROUP(words, gEasyChatGroup_Hobbies),
    },
    [EC_GROUP_TIME] =
    {
        .name = COMPOUND_STRING("Time"),
        EASY_CHAT_GROUP(words, gEasyChatGroup_Time),
    },
    [EC_GROUP_MISC] =
    {
        .name = COMPOUND_STRING("Misc."),
        EASY_CHAT_GROUP(words, gEasyChatGroup_Misc),
    },
    [EC_GROUP_ADJECTIVES] =
    {
        .name = COMPOUND_STRING("Adjectives"),
        EASY_CHAT_GROUP(words, gEasyChatGroup_Adjectives),
    },
    [EC_GROUP_EVENTS] =
    {
        .name = COMPOUND_STRING("Events"),
        EASY_CHAT_GROUP(words, gEasyChatGroup_Events),
    },
    [EC_GROUP_MOVE_1] =
    {
        .name = COMPOUND_STRING("Move 1"),
        EASY_CHAT_GROUP(valueList, gEasyChatGroup_Move1),
    },
    [EC_GROUP_MOVE_2] =
    {
        .name = COMPOUND_STRING("Move 2"),
        EASY_CHAT_GROUP(valueList, gEasyChatGroup_Move2),
    },
    [EC_GROUP_TRENDY_SAYING] =
    {
        .name = COMPOUND_STRING("Trendy Saying"),
        EASY_CHAT_GROUP(words, gEasyChatGroup_TrendySaying),
    },
    [EC_GROUP_POKEMON_NATIONAL] =
    {
        .name = COMPOUND_STRING("Pokémon2"),
        EASY_CHAT_GROUP(valueList, gEasyChatGroup_Pokemon2),
    },
};
