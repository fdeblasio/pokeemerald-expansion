PewterCity_Mart_Frlg_MapScripts::
	.byte 0

PewterCity_Mart_EventScript_Youngster::
	msgbox PewterCity_Mart_Text_BoughtWeirdFishFromShadyGuy, MSGBOX_NPC
	end

PewterCity_Mart_EventScript_Boy::
	msgbox PewterCity_Mart_Text_GoodThingsIfRaiseMonsDiligently, MSGBOX_NPC
	end

PewterCity_Mart_EventScript_Clerk::
	mart_clerk 0

PewterCity_Mart_EventScript_CrunchClerk::
	mart_clerk PewterCity_Mart_Crunchies

	.align 2
PewterCity_Mart_Crunchies::
	.2byte ITEM_PEWTER_CRUNCHIES
	.2byte ITEM_NONE
	release
	end

PewterCity_Mart_Text_BoughtWeirdFishFromShadyGuy::
	.string "A shady old guy sucked me into\n"
	.string "buying this weird fish Pokémon!\p"
	.string "It's totally weak and it cost ¥500!$"

PewterCity_Mart_Text_GoodThingsIfRaiseMonsDiligently::
	.string "Good things can happen if you raise\n"
	.string "Pokémon diligently.\p"
	.string "Even the weak ones can surprise\n"
	.string "you if you don't give up on them.$"

