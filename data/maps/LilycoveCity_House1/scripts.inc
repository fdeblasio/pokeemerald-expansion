LilycoveCity_House1_MapScripts::
	.byte 0

LilycoveCity_House1_EventScript_ExpertM::
	msgbox LilycoveCity_House1_Text_PokemonPartnersNotTools, MSGBOX_NPC
	end

LilycoveCity_House1_EventScript_Kecleon::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_LILYCOVE_HOUSE, CRY_MODE_NORMAL
	bufferspeciesname STR_VAR_1, SPECIES_LILYCOVE_HOUSE
	msgbox LilycoveCity_House1_Text_Kecleon, MSGBOX_DEFAULT
	waitmoncry
	release
	end

LilycoveCity_House1_Text_PokemonPartnersNotTools:
	.string "Pokémon are partners to people.\n"
	.string "They aren't our tools.\p"
	.string "Unfortunately, there are some people\n"
	.string "who fail to understand that…$"

LilycoveCity_House1_Text_Kecleon:
	.string "{STR_VAR_1}: Ruroro?$"

