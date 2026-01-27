LilycoveCity_DepartmentStore_3F_MapScripts::
	.byte 0

LilycoveCity_DepartmentStore_3F_EventScript_ClerkLeft::
	mart_clerk LilycoveCity_DepartmentStore_3F_Pokemart_EVs

LilycoveCity_DepartmentStore_3F_EventScript_ClerkMints::
	mart_clerk LilycoveCity_DepartmentStore_3F_Pokemart_Mints

LilycoveCity_DepartmentStore_3F_EventScript_ClerkEvo::
	mart_clerk LilycoveCity_DepartmentStore_3F_Pokemart_Evo

LilycoveCity_DepartmentStore_3F_EventScript_ClerkRight::
	mart_clerk LilycoveCity_DepartmentStore_3F_Pokemart_Delibird

LilycoveCity_DepartmentStore_3F_EventScript_TriathleteM::
	msgbox LilycoveCity_DepartmentStore_3F_Text_ItemsBestForTougheningPokemon, MSGBOX_NPC
	end

LilycoveCity_DepartmentStore_3F_EventScript_PokefanM::
	msgbox LilycoveCity_DepartmentStore_3F_Text_WantMoreEndurance, MSGBOX_NPC
	end

LilycoveCity_DepartmentStore_3F_EventScript_Woman::
	msgbox LilycoveCity_DepartmentStore_3F_Text_GaveCarbosToSpeedUpMon, MSGBOX_NPC
	end

LilycoveCity_DepartmentStore_3F_Text_ItemsBestForTougheningPokemon:
	.string "For quickly toughening up Pokémon,\n"
	.string "items are the best.\p"
	.string "Protein boosts Attack,\n"
	.string "and Calcium raises Sp. Atk.$"

LilycoveCity_DepartmentStore_3F_Text_WantMoreEndurance:
	.string "I want my Pokémon to have more\n"
	.string "endurance.\p"
	.string "I'm trying to decide whether to raise\n"
	.string "Defense with Iron, or Sp. Def with Zinc.$"

LilycoveCity_DepartmentStore_3F_Text_GaveCarbosToSpeedUpMon:
	.string "I gave a Carbos to my Pokémon,\n"
	.string "and its Speed went up.$"

