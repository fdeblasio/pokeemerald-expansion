MagmaHideout_3F_1R_MapScripts::
	.byte 0

MagmaHideout_3F_1R_EventScript_Walker::
	trainerbattle_single TRAINER_WALKER_MAGMA_HIDEOUT, MagmaHideout_3F_1R_Text_WalkerIntro, MagmaHideout_3F_1R_Text_WalkerDefeat
	msgbox MagmaHideout_3F_1R_Text_WalkerPostBattle, MSGBOX_AUTOCLOSE
	end

MagmaHideout_3F_1R_EventScript_Jordan::
	trainerbattle_single TRAINER_JORDAN_MAGMA_HIDEOUT, MagmaHideout_3F_1R_Text_JordanIntro, MagmaHideout_3F_1R_Text_JordanDefeat
	msgbox MagmaHideout_3F_1R_Text_JordanPostBattle, MSGBOX_AUTOCLOSE
	end

MagmaHideout_3F_1R_Text_WalkerIntro:
	.string "What did I do to deserve this guard\n"
	.string "posting?\p"
	.string "My left ear is burning up!$"

MagmaHideout_3F_1R_Text_WalkerDefeat:
	.string "I'm getting heat exhaustion…$"

MagmaHideout_3F_1R_Text_WalkerPostBattle:
	.string "Do you think it's odd that we're wearing\n"
	.string "hoods in this magma-filled volcano?$"

MagmaHideout_3F_1R_Text_JordanIntro:
	.string "We joined so we can help our leader\n"
	.string "achieve his fantastic vision.\p"
	.string "I don't care if you're with Team Aqua\n"
	.string "or if you're just some kid passing by.\p"
	.string "No one interferes with us and gets\n"
	.string "away with it!$"

MagmaHideout_3F_1R_Text_JordanDefeat:
	.string "Oh, no!\n"
	.string "You're not to be trusted at all!$"

MagmaHideout_3F_1R_Text_JordanPostBattle:
	.string "Listen to me.\n"
	.string "Team Magma is right!\p"
	.string "Don't listen to Team Aqua.\n"
	.string "Don't believe their lies!$"

