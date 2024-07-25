.set LOCALID_DUNCANS_DAD, 1

PetalburgCity_WallysHouse_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PetalburgCity_WallysHouse_OnFrame
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, PetalburgCity_WallysHouse_OnWarp
	.byte 0

PetalburgCity_WallysHouse_OnWarp:
	map_script_2 VAR_PETALBURG_CITY_STATE, 4, PetalburgCity_WallysHouse_EventScript_PlayerDuncansDadFaceEachOther
	.2byte 0

PetalburgCity_WallysHouse_EventScript_PlayerDuncansDadFaceEachOther::
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
	turnobject LOCALID_DUNCANS_DAD, DIR_WEST
	end

PetalburgCity_WallysHouse_OnFrame:
	map_script_2 VAR_PETALBURG_CITY_STATE, 4, PetalburgCity_WallysHouse_EventScript_GiveTMSurf
	.2byte 0

PetalburgCity_WallysHouse_EventScript_GiveTMSurf::
	lockall
	msgbox PetalburgCity_WallysHouse_Text_PleaseExcuseUs, MSGBOX_DEFAULT
	giveitem ITEM_TM_SURF
	setflag FLAG_RECEIVED_TM_SURF
	giveitem ITEM_POKE_RADAR
	msgbox PetalburgCity_WallysHouse_Text_SurfGoAllSortsOfPlaces, MSGBOX_DEFAULT
	setvar VAR_PETALBURG_CITY_STATE, 5
	releaseall
	end

PetalburgCity_WallysHouse_EventScript_DuncansDad::
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_DUNCAN_VICTORY_ROAD, PetalburgCity_WallysHouse_EventScript_DefeatedDuncanInVictoryRoad
	goto_if_set FLAG_RECEIVED_TM_SURF, PetalburgCity_WallysHouse_EventScript_ReceievedTMSurf
	goto_if_set FLAG_THANKED_FOR_PLAYING_WITH_DUNCAN, PetalburgCity_WallysHouse_EventScript_PlayedWithDuncan
	msgbox PetalburgCity_WallysHouse_Text_ThanksForPlayingWithDuncan, MSGBOX_DEFAULT
	setflag FLAG_THANKED_FOR_PLAYING_WITH_DUNCAN
	release
	end

PetalburgCity_WallysHouse_EventScript_ReceievedTMSurf::
	msgbox PetalburgCity_WallysHouse_Text_DuncanIsComingHomeSoon, MSGBOX_DEFAULT
	release
	end

PetalburgCity_WallysHouse_EventScript_DefeatedDuncanInVictoryRoad::
	msgbox PetalburgCity_WallysHouse_Text_YouMetDuncanInEverGrandeCity, MSGBOX_DEFAULT
	release
	end

PetalburgCity_WallysHouse_EventScript_PlayedWithDuncan::
	msgbox PetalburgCity_WallysHouse_Text_WonderHowDuncanIsDoing, MSGBOX_DEFAULT
	release
	end

PetalburgCity_WallysHouse_EventScript_DuncansMom::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_TM_SURF, PetalburgCity_WallysHouse_EventScript_ReceivedTMSurf
	msgbox PetalburgCity_WallysHouse_Text_DuncanWasReallyHappy, MSGBOX_DEFAULT
	release
	end

PetalburgCity_WallysHouse_EventScript_ReceivedTMSurf::
	msgbox PetalburgCity_WallysHouse_Text_DuncanLeftWithoutTelling, MSGBOX_DEFAULT
	release
	end

PetalburgCity_WallysHouse_Text_ThanksForPlayingWithDuncan:
	.string "You're…\n"
	.string "Ah, you must be {PLAYER}{KUN}, right?\p"
	.string "Thank you for playing with Duncan a\n"
	.string "little while ago.\p"
	.string "He's been frail and sickly ever\n"
	.string "since he was a baby.\p"
	.string "We've sent him to stay with my relatives\n"
	.string "in Verdanturf Town for a while.\p"
	.string "The air is a lot cleaner there\n"
	.string "than it is here.\p"
	.string "What's that? Where's Duncan?\n"
	.string "He's already left, our Duncan.\p"
	.string "I wonder where he could have\n"
	.string "gotten by now?$"

PetalburgCity_WallysHouse_Text_WonderHowDuncanIsDoing:
	.string "I wonder how our Duncan is doing?$"

PetalburgCity_WallysHouse_Text_PleaseExcuseUs:
	.string "{PLAYER}{KUN}! Please excuse us for\n"
	.string "dragging you here this way.\p"
	.string "But our Duncan's become very healthy\n"
	.string "since he went to Verdanturf Town.\p"
	.string "We owe it all to you!\p"
	.string "When Duncan left town, you helped\n"
	.string "him catch a Pokémon, right?\p"
	.string "I think that made Duncan really\n"
	.string "happy.\p"
	.string "Actually, not just Duncan.\n"
	.string "It made me, his father, happy too.\p"
	.string "Happy that he's gained such a great\n"
	.string "friend as you.\p"
	.string "This isn't a bribe or anything, but\n"
	.string "I'd really like you to have these.$"

PetalburgCity_WallysHouse_Text_SurfGoAllSortsOfPlaces:
	.string "If you ride a Wailmer, you'll be\n"
	.string "able to go to all sorts of places.$"

PetalburgCity_WallysHouse_Text_DuncanIsComingHomeSoon:
	.string "Duncan's coming home soon.\n"
	.string "I'm looking forward to that.$"

PetalburgCity_WallysHouse_Text_YouMetDuncanInEverGrandeCity:
	.string "Oh? You met Duncan in\n"
	.string "Ever Grande City?\p"
	.string "Oh, {PLAYER}{KUN}, don't be silly.\p"
	.string "He may have gotten healthy, but he\n"
	.string "can't go somewhere far away like\l"
	.string "that all by himself.$"

PetalburgCity_WallysHouse_Text_DuncanWasReallyHappy:
	.string "Duncan was really happy when he told\n"
	.string "us that he caught a Pokémon.\p"
	.string "It's been ages since I've seen him\n"
	.string "smile like that.$"

PetalburgCity_WallysHouse_Text_DuncanLeftWithoutTelling:
	.string "I want you to keep this a secret\n"
	.string "from my husband…\p"
	.string "But our Duncan left Verdanturf Town\n"
	.string "without telling anyone.\p"
	.string "You know, Duncan is frail, but\n"
	.string "he's surprisingly strong-willed.\p"
	.string "I'm sure that he'll come back safe\n"
	.string "and sound one day!$"

