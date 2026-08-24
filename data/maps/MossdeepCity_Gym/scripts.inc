MossdeepCity_Gym_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, MossdeepCity_Gym_OnTransition
	.byte 0

@ NOTE: Mossdeep Gym was redesigned between R/S and E. Leftover (and now functionally unused) scripts are commented below

MossdeepCity_Gym_OnTransition:
	setflag FLAG_TEMP_HIDE_FOLLOWER @ Hide follower since it can collide with moving statues
	end

MossdeepCity_Gym_EventScript_TateAndLiza::
	trainerbattle_single TRAINER_TATE_AND_LIZA_1, MossdeepCity_Gym_Text_TateAndLizaIntro, MossdeepCity_Gym_Text_TateAndLizaDefeat, MossdeepCity_Gym_EventScript_TateAndLizaDefeated, NO_MUSIC
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, MossdeepCity_Gym_EventScript_TateAndLizaRematch
	goto_if_unset FLAG_RECEIVED_TM_PSYCHIC, MossdeepCity_Gym_EventScript_GivePsychic2
	msgbox MossdeepCity_Gym_Text_TateAndLizaPostBattle, MSGBOX_DEFAULT
	release
	end

MossdeepCity_Gym_EventScript_TateAndLizaDefeated::
	message MossdeepCity_Gym_Text_ReceivedMindBadge
	waitmessage
	call Common_EventScript_PlayGymBadgeFanfare
	msgbox MossdeepCity_Gym_Text_ExplainMindBadgeTakeThis, MSGBOX_DEFAULT
	setflag FLAG_BADGE07_GET
	setflag FLAG_HIDE_AQUA_HIDEOUT_GRUNTS
	clearflag FLAG_HIDE_SLATEPORT_CITY_STERNS_SHIPYARD_MR_BRINEY
	clearflag FLAG_UNKNOWN_0x393
	setvar VAR_0x8008, 7
	call Common_EventScript_SetGymTrainers
	clearflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_PATRONS
	clearflag FLAG_HIDE_MOSSDEEP_CITY_TEAM_MAGMA
	clearflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_1F_TEAM_MAGMA
	clearflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_2F_TEAM_MAGMA
	clearflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_2F_STEVEN
	setvar VAR_MOSSDEEP_CITY_STATE, 1
	setflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_1F_STEVEN
	setvar VAR_MOSSDEEP_SPACE_CENTER_STATE, 1
	call MossdeepCity_Gym_EventScript_GivePsychic
	closemessage
	delay 30
	playfanfare MUS_REGISTER_MATCH_CALL
	msgbox MossdeepCity_Gym_Text_RegisteredTateAndLiza, MSGBOX_DEFAULT
	waitfanfare
	closemessage
	delay 30
	setflag FLAG_ENABLE_TATE_AND_LIZA_MATCH_CALL
	release
	end

MossdeepCity_Gym_EventScript_GivePsychic2::
	giveitem ITEM_TM_DRAGON_PULSE
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	msgbox MossdeepCity_Gym_Text_ExplainPsychic, MSGBOX_DEFAULT
	setflag FLAG_RECEIVED_TM_PSYCHIC
	release
	end

MossdeepCity_Gym_EventScript_GivePsychic::
	giveitem ITEM_TM_DRAGON_PULSE
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_BagIsFull
	msgbox MossdeepCity_Gym_Text_ExplainPsychic, MSGBOX_DEFAULT
	setflag FLAG_RECEIVED_TM_PSYCHIC
	return

MossdeepCity_Gym_EventScript_TateAndLizaRematch::
	trainerbattle_rematch_double TRAINER_TATE_AND_LIZA_1, MossdeepCity_Gym_Text_TateAndLizaPreRematch, MossdeepCity_Gym_Text_TateAndLizaRematchDefeat, MossdeepCity_Gym_Text_TateAndLizaRematchNeedTwoMons
	msgbox MossdeepCity_Gym_Text_TateAndLizaPostRematch, MSGBOX_AUTOCLOSE
	end

@ All the below switch scripts are leftover from RS and are functionally unused
MossdeepCity_Gym_EventScript_Switch1::
	lockall
	goto_if_set FLAG_MOSSDEEP_GYM_SWITCH_1, MossdeepCity_Gym_EventScript_ClearSwitch1
	setflag FLAG_MOSSDEEP_GYM_SWITCH_1
	applymovement LOCALID_PLAYER, MossdeepCity_Gym_Movement_WaitAfterSwitchUse
	waitmovement 0
	setmetatile 5, 5, METATILE_RSMossdeepGym_RedArrow_Right, FALSE
	setmetatile 2, 7, METATILE_RSMossdeepGym_Switch_Down, TRUE
	goto MossdeepCity_Gym_EventScript_DrawMapAfterSwitchUsed
	end

MossdeepCity_Gym_EventScript_DrawMapAfterSwitchUsed::
	special DrawWholeMapView
	playse SE_CLICK
	releaseall
	end

MossdeepCity_Gym_EventScript_ClearSwitch1::
	clearflag FLAG_MOSSDEEP_GYM_SWITCH_1
	applymovement LOCALID_PLAYER, MossdeepCity_Gym_Movement_WaitAfterSwitchUse
	waitmovement 0
	setmetatile 5, 5, METATILE_RSMossdeepGym_RedArrow_Left, FALSE
	setmetatile 2, 7, METATILE_RSMossdeepGym_Switch_Up, TRUE
	goto MossdeepCity_Gym_EventScript_DrawMapAfterSwitchUsed
	end

MossdeepCity_Gym_EventScript_Switch2::
	lockall
	goto_if_set FLAG_MOSSDEEP_GYM_SWITCH_2, MossdeepCity_Gym_EventScript_ClearSwitch2
	setflag FLAG_MOSSDEEP_GYM_SWITCH_2
	applymovement LOCALID_PLAYER, MossdeepCity_Gym_Movement_WaitAfterSwitchUse
	waitmovement 0
	setmetatile 8, 14, METATILE_RSMossdeepGym_RedArrow_Right, FALSE
	setmetatile 8, 10, METATILE_RSMossdeepGym_Switch_Down, TRUE
	goto MossdeepCity_Gym_EventScript_DrawMapAfterSwitchUsed
	end

MossdeepCity_Gym_EventScript_ClearSwitch2::
	clearflag FLAG_MOSSDEEP_GYM_SWITCH_2
	applymovement LOCALID_PLAYER, MossdeepCity_Gym_Movement_WaitAfterSwitchUse
	waitmovement 0
	setmetatile 8, 14, METATILE_RSMossdeepGym_RedArrow_Down, FALSE
	setmetatile 8, 10, METATILE_RSMossdeepGym_Switch_Up, TRUE
	goto MossdeepCity_Gym_EventScript_DrawMapAfterSwitchUsed
	end

MossdeepCity_Gym_EventScript_Switch3::
	lockall
	goto_if_set FLAG_MOSSDEEP_GYM_SWITCH_3, MossdeepCity_Gym_EventScript_ClearSwitch3
	setflag FLAG_MOSSDEEP_GYM_SWITCH_3
	applymovement LOCALID_PLAYER, MossdeepCity_Gym_Movement_WaitAfterSwitchUse
	waitmovement 0
	setmetatile 15, 17, METATILE_RSMossdeepGym_RedArrow_Left, FALSE
	setmetatile 17, 15, METATILE_RSMossdeepGym_Switch_Down, TRUE
	goto MossdeepCity_Gym_EventScript_DrawMapAfterSwitchUsed
	end

MossdeepCity_Gym_EventScript_ClearSwitch3::
	clearflag FLAG_MOSSDEEP_GYM_SWITCH_3
	applymovement LOCALID_PLAYER, MossdeepCity_Gym_Movement_WaitAfterSwitchUse
	waitmovement 0
	setmetatile 15, 17, METATILE_RSMossdeepGym_RedArrow_Right, FALSE
	setmetatile 17, 15, METATILE_RSMossdeepGym_Switch_Up, TRUE
	goto MossdeepCity_Gym_EventScript_DrawMapAfterSwitchUsed
	end

MossdeepCity_Gym_EventScript_Switch4::
	lockall
	goto_if_set FLAG_MOSSDEEP_GYM_SWITCH_4, MossdeepCity_Gym_EventScript_ClearSwitch4
	setflag FLAG_MOSSDEEP_GYM_SWITCH_4
	applymovement LOCALID_PLAYER, MossdeepCity_Gym_Movement_WaitAfterSwitchUse
	waitmovement 0
	setmetatile 1, 23, METATILE_RSMossdeepGym_RedArrow_Up, FALSE
	setmetatile 5, 24, METATILE_RSMossdeepGym_Switch_Down, TRUE
	goto MossdeepCity_Gym_EventScript_DrawMapAfterSwitchUsed
	end

MossdeepCity_Gym_EventScript_ClearSwitch4::
	clearflag FLAG_MOSSDEEP_GYM_SWITCH_4
	applymovement LOCALID_PLAYER, MossdeepCity_Gym_Movement_WaitAfterSwitchUse
	waitmovement 0
	setmetatile 1, 23, METATILE_RSMossdeepGym_RedArrow_Right, FALSE
	setmetatile 5, 24, METATILE_RSMossdeepGym_Switch_Up, TRUE
	goto MossdeepCity_Gym_EventScript_DrawMapAfterSwitchUsed
	end

MossdeepCity_Gym_EventScript_WarpToEntrance::
	lockall
	warpmossdeepgym MAP_MOSSDEEP_CITY_GYM, 7, 30
	waitstate
	releaseall
	end

MossdeepCity_Gym_EventScript_Preston::
	trainerbattle_single TRAINER_PRESTON, MossdeepCity_Gym_Text_PrestonIntro, MossdeepCity_Gym_Text_PrestonDefeat
	msgbox MossdeepCity_Gym_Text_PrestonPostBattle, MSGBOX_AUTOCLOSE
	end

MossdeepCity_Gym_EventScript_Virgil::
	trainerbattle_single TRAINER_VIRGIL, MossdeepCity_Gym_Text_VirgilIntro, MossdeepCity_Gym_Text_VirgilDefeat
	msgbox MossdeepCity_Gym_Text_VirgilPostBattle, MSGBOX_AUTOCLOSE
	end

MossdeepCity_Gym_EventScript_Blake::
	trainerbattle_single TRAINER_BLAKE, MossdeepCity_Gym_Text_BlakeIntro, MossdeepCity_Gym_Text_BlakeDefeat
	msgbox MossdeepCity_Gym_Text_BlakePostBattle, MSGBOX_AUTOCLOSE
	end

MossdeepCity_Gym_EventScript_Hannah::
	trainerbattle_single TRAINER_HANNAH, MossdeepCity_Gym_Text_HannahIntro, MossdeepCity_Gym_Text_HannahDefeat
	msgbox MossdeepCity_Gym_Text_HannahPostBattle, MSGBOX_AUTOCLOSE
	end

MossdeepCity_Gym_EventScript_Samantha::
	trainerbattle_single TRAINER_SAMANTHA, MossdeepCity_Gym_Text_SamanthaIntro, MossdeepCity_Gym_Text_SamanthaDefeat
	msgbox MossdeepCity_Gym_Text_SamanthaPostBattle, MSGBOX_AUTOCLOSE
	end

MossdeepCity_Gym_EventScript_Maura::
	trainerbattle_single TRAINER_MAURA, MossdeepCity_Gym_Text_MauraIntro, MossdeepCity_Gym_Text_MauraDefeat
	msgbox MossdeepCity_Gym_Text_MauraPostBattle, MSGBOX_AUTOCLOSE
	end

MossdeepCity_Gym_EventScript_Sylvia::
	trainerbattle_single TRAINER_SYLVIA, MossdeepCity_Gym_Text_SylviaIntro, MossdeepCity_Gym_Text_SylviaDefeat
	msgbox MossdeepCity_Gym_Text_SylviaPostBattle, MSGBOX_AUTOCLOSE
	end

MossdeepCity_Gym_EventScript_Nate::
	trainerbattle_single TRAINER_NATE, MossdeepCity_Gym_Text_NateIntro, MossdeepCity_Gym_Text_NateDefeat
	msgbox MossdeepCity_Gym_Text_NatePostBattle, MSGBOX_AUTOCLOSE
	end

MossdeepCity_Gym_EventScript_Macey::
	trainerbattle_single TRAINER_MACEY, MossdeepCity_Gym_Text_MaceyIntro, MossdeepCity_Gym_Text_MaceyDefeat
	msgbox MossdeepCity_Gym_Text_MaceyPostBattle, MSGBOX_AUTOCLOSE
	end

MossdeepCity_Gym_EventScript_Clifford::
	trainerbattle_single TRAINER_CLIFFORD, MossdeepCity_Gym_Text_CliffordIntro, MossdeepCity_Gym_Text_CliffordDefeat
	msgbox MossdeepCity_Gym_Text_CliffordPostBattle, MSGBOX_AUTOCLOSE
	end

MossdeepCity_Gym_EventScript_Nicholas::
	trainerbattle_single TRAINER_NICHOLAS, MossdeepCity_Gym_Text_NicholasIntro, MossdeepCity_Gym_Text_NicholasDefeat
	msgbox MossdeepCity_Gym_Text_NicholasPostBattle, MSGBOX_AUTOCLOSE
	end

MossdeepCity_Gym_EventScript_Kathleen::
	trainerbattle_single TRAINER_KATHLEEN, MossdeepCity_Gym_Text_KathleenIntro, MossdeepCity_Gym_Text_KathleenDefeat
	msgbox MossdeepCity_Gym_Text_KathleenPostBattle, MSGBOX_AUTOCLOSE
	end

MossdeepCity_Gym_EventScript_GymGuide::
	lock
	faceplayer
	goto_if_set FLAG_BADGE07_GET, MossdeepCity_Gym_EventScript_GymGuidePostVictory
	msgbox MossdeepCity_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
	release
	end

MossdeepCity_Gym_EventScript_GymGuidePostVictory::
	msgbox MossdeepCity_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
	release
	end

@ Leftover from RS, functionally unused
MossdeepCity_Gym_Movement_WaitAfterSwitchUse:
	delay_16
	delay_16
	step_end

MossdeepCity_Gym_EventScript_LeftGymStatue::
	lockall
	goto_if_set FLAG_BADGE07_GET, MossdeepCity_Gym_EventScript_GymStatueCertified
	goto MossdeepCity_Gym_EventScript_GymStatue
	end

MossdeepCity_Gym_EventScript_RightGymStatue::
	lockall
	goto_if_set FLAG_BADGE07_GET, MossdeepCity_Gym_EventScript_GymStatueCertified
	goto MossdeepCity_Gym_EventScript_GymStatue
	end

MossdeepCity_Gym_EventScript_GymStatueCertified::
	msgbox MossdeepCity_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
	releaseall
	end

MossdeepCity_Gym_EventScript_GymStatue::
	msgbox MossdeepCity_Gym_Text_GymStatue, MSGBOX_DEFAULT
	releaseall
	end

MossdeepCity_Gym_EventScript_YellowFloorSwitch::
	playse SE_SWITCH
	waitse
	playse SE_REPEL
	initrotatingtilepuzzle FALSE
	moverotatingtileobjects 0
	waitmovement 0
	turnrotatingtileobjects
	waitmovement 0
	freerotatingtilepuzzle
	end

MossdeepCity_Gym_EventScript_BlueFloorSwitch::
	playse SE_SWITCH
	waitse
	playse SE_REPEL
	initrotatingtilepuzzle FALSE
	moverotatingtileobjects 1
	waitmovement 0
	turnrotatingtileobjects
	waitmovement 0
	freerotatingtilepuzzle
	end

MossdeepCity_Gym_EventScript_GreenFloorSwitch::
	playse SE_SWITCH
	waitse
	playse SE_REPEL
	initrotatingtilepuzzle FALSE
	moverotatingtileobjects 2
	waitmovement 0
	turnrotatingtileobjects
	waitmovement 0
	freerotatingtilepuzzle
	end

MossdeepCity_Gym_EventScript_PurpleFloorSwitch::
	playse SE_SWITCH
	waitse
	playse SE_REPEL
	initrotatingtilepuzzle FALSE
	moverotatingtileobjects 3
	waitmovement 0
	turnrotatingtileobjects
	waitmovement 0
	freerotatingtilepuzzle
	end

MossdeepCity_Gym_EventScript_RedFloorSwitch::
	playse SE_SWITCH
	waitse
	playse SE_REPEL
	initrotatingtilepuzzle FALSE
	moverotatingtileobjects 4
	waitmovement 0
	turnrotatingtileobjects
	waitmovement 0
	freerotatingtilepuzzle
	end

MossdeepCity_Gym_Text_GymGuideAdvice:
	.string "Yo, how's it going, Champion-bound\n"
	.string "{PLAYER}?\p"
	.string "The Gym Leader here uses\n"
	.string "Dragon-type Pokémon.\p"
	.string "If you go up against her with\n"
	.string "Dragon-type Pokémon, she'll\l"
	.string "inflict horrible damage!\p"
	.string "Plus, she'll come at you with\n"
	.string "outstanding attacks.\p"
	.string "If you want to win, you'll need to show\n"
	.string "them how tight you are with your\l"
	.string "Pokémon. Go for it!$"

MossdeepCity_Gym_Text_GymGuidePostVictory:
	.string "Wow, you're astounding!\n"
	.string "You're one great Trainer!$"

MossdeepCity_Gym_Text_PrestonIntro:
	.string "Battles hinge on the strength of your\n"
	.string "spirit! The weak-spirited will never win!$"

MossdeepCity_Gym_Text_PrestonDefeat:
	.string "I lost!\n"
	.string "I must temper my spirit again!$"

MossdeepCity_Gym_Text_PrestonPostBattle:
	.string "The indecisive lose.\n"
	.string "That's my warning to you.$"

MossdeepCity_Gym_Text_VirgilIntro:
	.string "Let me see your talent!$"

MossdeepCity_Gym_Text_VirgilDefeat:
	.string "You possess spectacular talent!$"

MossdeepCity_Gym_Text_VirgilPostBattle:
	.string "If there are prodigies in the world,\n"
	.string "then our Gym Leader is one!\p"
	.string "However, you may be even more talented\n"
	.string "than her…$"

MossdeepCity_Gym_Text_BlakeIntro:
	.string "Fufufufu… Watch me levitate a Poké\n"
	.string "Ball physically!\p"
	.string "Wrooooooooaaaar!\n"
	.string "… … … … … … …\p"
	.string "Sometimes, I'm out of sync…$"

MossdeepCity_Gym_Text_BlakeDefeat:
	.string "My Pokémon battling skills are out\n"
	.string "of sync, too!$"

MossdeepCity_Gym_Text_BlakePostBattle:
	.string "A Poké Ball was too heavy to lift\n"
	.string "mightily. But this dust bunny…\p"
	.string "Whoooooooooooooooh!\n"
	.string "… … … … … …\p"
	.string "No, I'm not cheating!\n"
	.string "I didn't blow on it! Honestly!$"

MossdeepCity_Gym_Text_HannahIntro:
	.string "When you lose to me, don't be too hard\n"
	.string "on yourself.\p"
	.string "It's not that you're weak--I'm just\n"
	.string "too strong!$"

MossdeepCity_Gym_Text_HannahDefeat:
	.string "You're just too strong!$"

MossdeepCity_Gym_Text_HannahPostBattle:
	.string "I'm not going to get down on myself for\n"
	.string "losing. I just need to train harder.\p"
	.string "Positive thinking--that's my strong\n"
	.string "point!$"

MossdeepCity_Gym_Text_SamanthaIntro:
	.string "I see it…\n"
	.string "I see your future…\p"
	.string "If you can beat me, I will tell you\n"
	.string "your future!$"

MossdeepCity_Gym_Text_SamanthaDefeat:
	.string "I surrender!$"

MossdeepCity_Gym_Text_SamanthaPostBattle:
	.string "You will wage a terrifically intense\n"
	.string "battle with our Gym Leader…\p"
	.string "The result…\n"
	.string "You won't hear it from me!$"

MossdeepCity_Gym_Text_MauraIntro:
	.string "The roads you have traveled…\n"
	.string "What you have experienced…\p"
	.string "Come at me with everything you've\n"
	.string "learned!$"

MossdeepCity_Gym_Text_MauraDefeat:
	.string "You've traveled a path of greatness!$"

MossdeepCity_Gym_Text_MauraPostBattle:
	.string "A bright future awaits those who have\n"
	.string "worked diligently.\p"
	.string "For those who lazed idly, there is\n"
	.string "only despair at the end.\p"
	.string "What goes around comes around…$"

MossdeepCity_Gym_Text_SylviaIntro:
	.string "Even at the risk of life, I will win\n"
	.string "this battle!$"

MossdeepCity_Gym_Text_SylviaDefeat:
	.string "What you do…\n"
	.string "It horrifies me…$"

MossdeepCity_Gym_Text_SylviaPostBattle:
	.string "How dare you beat me…\p"
	.string "It won't be my fault if something\n"
	.string "horrible befalls you…$"

MossdeepCity_Gym_Text_NateIntro:
	.string "Hohoho.\p"
	.string "You need me to show you how tenacious\n"
	.string "the Dragon type can be.$"

MossdeepCity_Gym_Text_NateDefeat:
	.string "Oh! My, my!\n"
	.string "Your battle style is fantastic!$"

MossdeepCity_Gym_Text_NatePostBattle:
	.string "I… I don't let defeat rattle m-me,\n"
	.string "however b-badly.$"

MossdeepCity_Gym_Text_KathleenIntro:
	.string "Let me show you a perfectly,\n"
	.string "mind-blowing time!$"

MossdeepCity_Gym_Text_KathleenDefeat:
	.string "N-nooooo!$"

MossdeepCity_Gym_Text_KathleenPostBattle:
	.string "Your mentality is contagious!\n"
	.string "Get away from me quickly!$"

MossdeepCity_Gym_Text_CliffordIntro:
	.string "I may be past my prime, but I suggest\n"
	.string "you not patronize me.$"

MossdeepCity_Gym_Text_CliffordDefeat:
	.string "Ah, you overflow with the power\n"
	.string "of youth!$"

MossdeepCity_Gym_Text_CliffordPostBattle:
	.string "It seems that I could not overcome\n"
	.string "your youthful energy.$"

MossdeepCity_Gym_Text_MaceyIntro:
	.string "You're not getting through to the end!\n"
	.string "Not if I can help it!$"

MossdeepCity_Gym_Text_MaceyDefeat:
	.string "How could you be so ludicrously\n"
	.string "strong?$"

MossdeepCity_Gym_Text_MaceyPostBattle:
	.string "Humph! You may be strong, but you're\n"
	.string "not suitable for the Dragon type!\p"
	.string "The way you battle is somehow brutal!$"

MossdeepCity_Gym_Text_NicholasIntro:
	.string "Wroooar! Have a taste of my super\n"
	.string "Pokémon hard-battling power!$"

MossdeepCity_Gym_Text_NicholasDefeat:
	.string "Oh!\n"
	.string "Done in!$"

MossdeepCity_Gym_Text_NicholasPostBattle:
	.string "All right! I think I'll develop a special\n"
	.string "invincible Pokémon power next.$"

MossdeepCity_Gym_Text_TateAndLizaIntro:
	.string "Ivanna: You know that dragons are\n"
	.string "mythical Pokémon.\p"
	.string "They're hard to catch and raise,\n"
	.string "but their powers are superior.\p"
	.string "They're virtually indestructible.\n"
	.string "There's no being clever with them.\p"
	.string "Well, are you ready to lose?$"

MossdeepCity_Gym_Text_TateAndLizaDefeat:
	.string "Ivanna: It can't be helped. You've won…\n"
	.string "So, in recognition, take this.$"

MossdeepCity_Gym_Text_ReceivedMindBadge:
	.string "{PLAYER} received the Dragon Badge\n"
	.string "from Ivanna.$"

MossdeepCity_Gym_Text_ExplainMindBadgeTakeThis:
	.string "Ivanna: The Dragon Badge enhances the\n"
	.string "Sp. Atk and Sp. Def of Pokémon.\p"
	.string "You should also take this, too.$"

MossdeepCity_Gym_Text_ExplainPsychic:
	.string "Ivanna: That TM210 contains\n"
	.string "Dragon Pulse!\p"
	.string "It's a move that's perfect\n"
	.string "for Dragon Pokémon!\p"
	.string "… … … … … …$"

MossdeepCity_Gym_Text_RegisteredTateAndLiza:
	.string "Registered Gym Leader Ivanna\n"
	.string "in the PokéNav.$"

MossdeepCity_Gym_Text_TateAndLizaPostBattle:
	.string "Ivanna: I still can't believe my dragons\n"
	.string "dragons lost to you.\p"
	.string "I'll become even stronger!$"

MossdeepCity_Gym_Text_GymStatue:
	.string "Mossdeep City Pokémon Gym$"

MossdeepCity_Gym_Text_GymStatueCertified:
	.string "Mossdeep City Pokémon Gym\p"
	.string "Ivanna's Certified Trainers:\n"
	.string "{PLAYER}$"

MossdeepCity_Gym_Text_TateAndLizaPreRematch:
	.string "Ivanna: So, you've returned.\p"
	.string "By changing the party's mix,\n"
	.string "the battle style changes.\p"
	.string "My dragons…\n"
	.string "I'll show you again and again!$"

MossdeepCity_Gym_Text_TateAndLizaRematchDefeat:
	.string "Ivanna: You and your Pokémon…\n"
	.string "It's as if you were siblings!$"

MossdeepCity_Gym_Text_TateAndLizaPostRematch:
	.string "Ivanna: You can knock me down,\n"
	.string "but I'll never stay down!\p"
	.string "Because I always support my,\n"
	.string "Pokémon!$"

MossdeepCity_Gym_Text_TateAndLizaRematchNeedTwoMons:
	.string "Ivanna: You're back again\n"
	.string "to give me a rematch.\p"
	.string "But for our match\n"
	.string "you brought just one Pokémon!\p"
	.string "I need you to bring at least\n"
	.string "two Pokémon when you come back.$"
