Route119_House_MapScripts::
	.byte 0

Route119_House_EventScript_Woman::
	msgbox Route119_House_Text_RumorAboutCaveOfOrigin, MSGBOX_NPC
	end

Route119_House_EventScript_Wingull::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_ROUTE_119_HOUSE, CRY_MODE_NORMAL
	setseenmon SPECIES_ROUTE_119_HOUSE
	bufferspeciesname STR_VAR_1, SPECIES_ROUTE_119_HOUSE
	msgbox Route119_House_Text_Wingull, MSGBOX_DEFAULT
	waitmoncry
	release
	end

Route119_House_Text_RumorAboutCaveOfOrigin:
	.string "I heard about a cave called the Cave\n"
	.string "of Origin.\p"
	.string "People rumor that the spirits of\n"
	.string "Pokémon are revived there. Could\l"
	.string "something like that really happen?$"

Route119_House_Text_Wingull:
	.string "{STR_VAR_1}: Pihyoh!$"

