CeruleanCity_Mart_Frlg_MapScripts::
	.byte 0

CeruleanCity_Mart_EventScript_Youngster::
	msgbox CeruleanCity_Mart_Text_RepelWorksOnWeakMons, MSGBOX_NPC
	end

CeruleanCity_Mart_EventScript_Woman::
	msgbox CeruleanCity_Mart_Text_DoYouKnowAboutRareCandy, MSGBOX_NPC
	end

CeruleanCity_Mart_EventScript_Clerk::
	mart_clerk 0

CeruleanCity_Mart_Text_RepelWorksOnWeakMons::
	.string "Repel not only keeps bugs away,\n"
	.string "it also works on weak Pokémon.\p"
	.string "Put your strongest Pokémon at the\n"
	.string "left of the Pokémon List.\p"
	.string "If your first Pokémon is strong,\n"
	.string "Repel's effect is boosted.$"

CeruleanCity_Mart_Text_DoYouKnowAboutRareCandy::
	.string "Do you know about Rare Candy?\n"
	.string "They don't sell it in shops.\p"
	.string "I think it makes Pokémon grow\n"
	.string "very quickly all of a sudden.$"

