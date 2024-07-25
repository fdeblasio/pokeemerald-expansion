.set LOCALID_DUNCAN_ENTRANCE, 4

VictoryRoad_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, VictoryRoad_1F_OnTransition
	.byte 0

VictoryRoad_1F_OnTransition:
	call_if_eq VAR_VICTORY_ROAD_1F_STATE, 1, VictoryRoad_1F_EventScript_SetEntranceDuncanPos1
	call_if_eq VAR_VICTORY_ROAD_1F_STATE, 2, VictoryRoad_1F_EventScript_SetEntranceDuncanPos2
	end

VictoryRoad_1F_EventScript_SetEntranceDuncanPos1::
	setobjectxyperm LOCALID_DUNCAN_ENTRANCE, 2, 24
	setobjectmovementtype LOCALID_DUNCAN_ENTRANCE, MOVEMENT_TYPE_FACE_DOWN
	return

VictoryRoad_1F_EventScript_SetEntranceDuncanPos2::
	setobjectxyperm LOCALID_DUNCAN_ENTRANCE, 3, 24
	setobjectmovementtype LOCALID_DUNCAN_ENTRANCE, MOVEMENT_TYPE_FACE_DOWN
	return

VictoryRoad_1F_EventScript_DuncanBattleTrigger1::
	lockall
	setvar VAR_0x8008, 1
	addobject LOCALID_DUNCAN_ENTRANCE
	applymovement LOCALID_DUNCAN_ENTRANCE, VictoryRoad_1F_Movement_DuncanApproachPlayer1
	waitmovement 0
	goto VictoryRoad_1F_EventScript_DuncanEntranceBattle
	end

VictoryRoad_1F_EventScript_DuncanBattleTrigger2::
	lockall
	setvar VAR_0x8008, 2
	addobject LOCALID_DUNCAN_ENTRANCE
	applymovement LOCALID_DUNCAN_ENTRANCE, VictoryRoad_1F_Movement_DuncanApproachPlayer2
	waitmovement 0
	goto VictoryRoad_1F_EventScript_DuncanEntranceBattle
	end

VictoryRoad_1F_EventScript_DuncanEntranceBattle::
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	msgbox VictoryRoad_1F_Text_DuncanNotGoingToLoseAnymore, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_DUNCAN_VICTORY_ROAD_1, VictoryRoad_1F_Text_DuncanEntranceDefeat
	msgbox VictoryRoad_1F_Text_DuncanPostEntranceBattle, MSGBOX_DEFAULT
	clearflag FLAG_HIDE_VICTORY_ROAD_ENTRANCE_DUNCAN
	copyobjectxytoperm LOCALID_DUNCAN_ENTRANCE
	setflag FLAG_DEFEATED_DUNCAN_VICTORY_ROAD
	copyvar VAR_VICTORY_ROAD_1F_STATE, VAR_0x8008
	releaseall
	end

VictoryRoad_1F_Movement_DuncanApproachPlayer1:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_up
	step_end

VictoryRoad_1F_Movement_DuncanApproachPlayer2:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_up
	step_end

@ This Duncan appears near the entrance once his battle is triggered and remains there until the Hall of Fame is entered
VictoryRoad_1F_EventScript_EntranceDuncan::
	msgbox VictoryRoad_1F_Text_DuncanPostEntranceBattle, MSGBOX_NPC
	end

@ This Duncan appears and remains at the exit after the Hall of Fame is entered
VictoryRoad_1F_EventScript_ExitDuncan::
	trainerbattle_single TRAINER_DUNCAN_VICTORY_ROAD_2, VictoryRoad_1F_Text_DuncanIntro, VictoryRoad_1F_Text_DuncanDefeat
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, VictoryRoad_1F_EventScript_RematchDuncan
	msgbox VictoryRoad_1F_Text_DuncanPostBattle, MSGBOX_AUTOCLOSE
	end

VictoryRoad_1F_EventScript_RematchDuncan::
	trainerbattle_rematch TRAINER_DUNCAN_VICTORY_ROAD_2, VictoryRoad_1F_Text_DuncanIntro, VictoryRoad_1F_Text_DuncanDefeat
	msgbox VictoryRoad_1F_Text_DuncanPostBattle, MSGBOX_AUTOCLOSE
	end

VictoryRoad_1F_EventScript_Vito::
	trainerbattle_single TRAINER_VITO, VictoryRoad_1F_Text_VitoIntro, VictoryRoad_1F_Text_VitoDefeat
	msgbox VictoryRoad_1F_Text_VitoPostBattle, MSGBOX_AUTOCLOSE
	end

VictoryRoad_1F_EventScript_Albert::
	trainerbattle_single TRAINER_ALBERT, VictoryRoad_1F_Text_AlbertIntro, VictoryRoad_1F_Text_AlbertDefeat
	msgbox VictoryRoad_1F_Text_AlbertPostBattle, MSGBOX_AUTOCLOSE
	end

VictoryRoad_1F_EventScript_Hope::
	trainerbattle_single TRAINER_HOPE, VictoryRoad_1F_Text_HopeIntro, VictoryRoad_1F_Text_HopeDefeat
	msgbox VictoryRoad_1F_Text_HopePostBattle, MSGBOX_AUTOCLOSE
	end

VictoryRoad_1F_EventScript_Quincy::
	trainerbattle_single TRAINER_QUINCY, VictoryRoad_1F_Text_QuincyIntro, VictoryRoad_1F_Text_QuincyDefeat
	msgbox VictoryRoad_1F_Text_QuincyPostBattle, MSGBOX_AUTOCLOSE
	end

VictoryRoad_1F_EventScript_Katelynn::
	trainerbattle_single TRAINER_KATELYNN, VictoryRoad_1F_Text_KatelynnIntro, VictoryRoad_1F_Text_KatelynnDefeat
	msgbox VictoryRoad_1F_Text_KatelynnPostBattle, MSGBOX_AUTOCLOSE
	end

VictoryRoad_1F_Text_DuncanNotGoingToLoseAnymore:
	.string "Duncan: Hi! {PLAYER}!\p"
	.string "I bet you're surprised to see me here!\p"
	.string "I made it all the way here, and it's\n"
	.string "all thanks to you!\p"
	.string "{PLAYER}, losing to you that time\n"
	.string "made me stronger!\p"
	.string "But I'm not going to lose anymore!\p"
	.string "I'm going to win! For the Pokémon who\n"
	.string "gave me courage and strength!\p"
	.string "Okay… Here I come!$"

VictoryRoad_1F_Text_DuncanEntranceDefeat:
	.string "Wow!\n"
	.string "{PLAYER}, you are strong, after all!$"

VictoryRoad_1F_Text_DuncanPostEntranceBattle:
	.string "Duncan: I couldn't beat you today,\n"
	.string "{PLAYER}, but one of these days, I'll\l"
	.string "catch up to you!$"

VictoryRoad_1F_Text_DuncanIntro:
	.string "Duncan: Hi! {PLAYER}!\p"
	.string "I've gotten stronger since that last\n"
	.string "time! I wanted to show you, {PLAYER}!\p"
	.string "Okay… Here I come!$"

VictoryRoad_1F_Text_DuncanDefeat:
	.string "Wow!\n"
	.string "{PLAYER}, you are strong, after all!$"

VictoryRoad_1F_Text_DuncanPostBattle:
	.string "Duncan: I couldn't beat you this time,\n"
	.string "too… But one of these days, {PLAYER},\l"
	.string "I'm going to catch up to you…\p"
	.string "And challenge the Pokémon League!$"

VictoryRoad_1F_Text_VitoIntro:
	.string "I trained together with my whole family,\n"
	.string "every one of us!\l"
	.string "I'm not losing to anyone!$"

VictoryRoad_1F_Text_VitoDefeat:
	.string "Better than my family?!\n"
	.string "Is that possible?!$"

VictoryRoad_1F_Text_VitoPostBattle:
	.string "I was better than everyone in my\n"
	.string "family. I've never lost before…\p"
	.string "I've lost my confidence…\n"
	.string "Maybe I'll go home…$"

VictoryRoad_1F_Text_AlbertIntro:
	.string "I didn't come all this way to lose now.\n"
	.string "That possibility doesn't exist!$"

VictoryRoad_1F_Text_AlbertDefeat:
	.string "Impossible…\n"
	.string "I lost?$"

VictoryRoad_1F_Text_AlbertPostBattle:
	.string "I lost here…\p"
	.string "That means I lack the qualifications\n"
	.string "to become the Champion…$"

VictoryRoad_1F_Text_HopeIntro:
	.string "This seemingly infinite and harsh road\n"
	.string "lives up to its name of Victory.$"

VictoryRoad_1F_Text_HopeDefeat:
	.string "Your battle style is fantastic…$"

VictoryRoad_1F_Text_HopePostBattle:
	.string "You seem to have the potential for\n"
	.string "becoming the Champion.$"

VictoryRoad_1F_Text_QuincyIntro:
	.string "What is the Victory Road?\n"
	.string "I'll tell you if you win!$"

VictoryRoad_1F_Text_QuincyDefeat:
	.string "Okay!\n"
	.string "Well done!$"

VictoryRoad_1F_Text_QuincyPostBattle:
	.string "Getting through here safely--that's\n"
	.string "the final test for any Trainer aiming\l"
	.string "to become the Pokémon Champion.\p"
	.string "That's why it's called the Victory\n"
	.string "Road.$"

VictoryRoad_1F_Text_KatelynnIntro:
	.string "I have nothing to say to anyone\n"
	.string "that's come this far. Come on!$"

VictoryRoad_1F_Text_KatelynnDefeat:
	.string "This is a disgrace…$"

VictoryRoad_1F_Text_KatelynnPostBattle:
	.string "Humph, go right on ahead.\n"
	.string "See if I care.$"
