SeafloorCavern_Room1_MapScripts::
	.byte 0

SeafloorCavern_Room1_EventScript_Nerissa::
	trainerbattle_single TRAINER_NERISSA_SEAFLOOR_CAVERN, SeafloorCavern_Room1_Text_NerissaIntro, SeafloorCavern_Room1_Text_NerissaDefeat
	msgbox SeafloorCavern_Room1_Text_NerissaPostBattle, MSGBOX_AUTOCLOSE
	end

SeafloorCavern_Room1_EventScript_Beryl::
	trainerbattle_single TRAINER_BERYL_SEAFLOOR_CAVERN, SeafloorCavern_Room1_Text_BerylIntro, SeafloorCavern_Room1_Text_BerylDefeat
	msgbox SeafloorCavern_Room1_Text_BerylPostBattle, MSGBOX_AUTOCLOSE
	end

SeafloorCavern_Room1_Text_NerissaIntro:
	.string "We don't need a kid around!\n"
	.string "Go on home already!$"

SeafloorCavern_Room1_Text_NerissaDefeat:
	.string "I want to go home…$"

SeafloorCavern_Room1_Text_NerissaPostBattle:
	.string "I want to get a promotion so I can\n"
	.string "boss around the Grunts…$"

SeafloorCavern_Room1_Text_BerylIntro:
	.string "That submarine… It's tiny inside.\n"
	.string "I'm sore all over!$"

SeafloorCavern_Room1_Text_BerylDefeat:
	.string "Losing makes me sore!$"

SeafloorCavern_Room1_Text_BerylPostBattle:
	.string "That submarine we jacked, man,\n"
	.string "it's brutal as a ride.\l"
	.string "It's way too tight in there!$"

