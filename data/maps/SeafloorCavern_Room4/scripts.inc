SeafloorCavern_Room4_MapScripts::
	.byte 0

SeafloorCavern_Room4_EventScript_Malik::
	trainerbattle_single TRAINER_MALIK_SEAFLOOR_CAVERN, SeafloorCavern_Room4_Text_MalikIntro, SeafloorCavern_Room4_Text_MalikDefeat
	msgbox SeafloorCavern_Room4_Text_MalikPostBattle, MSGBOX_AUTOCLOSE
	end

SeafloorCavern_Room4_EventScript_Marina::
	trainerbattle_single TRAINER_MARINA_SEAFLOOR_CAVERN, SeafloorCavern_Room4_Text_MarinaIntro, SeafloorCavern_Room4_Text_MarinaDefeat
	msgbox SeafloorCavern_Room4_Text_MarinaPostBattle, MSGBOX_AUTOCLOSE
	end

SeafloorCavern_Room4_Text_MalikIntro:
	.string "It's you!\n"
	.string "Where did you come in from?$"

SeafloorCavern_Room4_Text_MalikDefeat:
	.string "Lost it…$"

SeafloorCavern_Room4_Text_MalikPostBattle:
	.string "I can't find the way out!\p"
	.string "I'm not afraid. Don't get me wrong!$"

SeafloorCavern_Room4_Text_MarinaIntro:
	.string "It's you!\n"
	.string "Where do you think you're going?$"

SeafloorCavern_Room4_Text_MarinaDefeat:
	.string "I failed to win!$"

SeafloorCavern_Room4_Text_MarinaPostBattle:
	.string "My partner forgot the map in that\n"
	.string "submarine!\p"
	.string "How's that for being useless?$"
