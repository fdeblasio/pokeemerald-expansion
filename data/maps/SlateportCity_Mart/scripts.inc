SlateportCity_Mart_MapScripts::
	.byte 0

SlateportCity_Mart_EventScript_Clerk::
	mart_clerk 0

SlateportCity_Mart_EventScript_ClerkMail::
	mart_clerk SlateportCity_Mart_Mail

	.align 2
SlateportCity_Mart_Mail:
	.2byte ITEM_HARBOR_MAIL
	.2byte ITEM_ORANGE_MAIL
	.2byte ITEM_GLITTER_MAIL
	.2byte ITEM_MECH_MAIL
	.2byte ITEM_WOOD_MAIL
	.2byte ITEM_WAVE_MAIL
	.2byte ITEM_BEAD_MAIL
	.2byte ITEM_SHADOW_MAIL
	.2byte ITEM_TROPIC_MAIL
	.2byte ITEM_DREAM_MAIL
	.2byte ITEM_FAB_MAIL
	.2byte ITEM_RETRO_MAIL
	pokemartlistend

SlateportCity_Mart_EventScript_BlackBelt::
	msgbox SlateportCity_Mart_Text_SomeItemsOnlyAtMart, MSGBOX_NPC
	end

SlateportCity_Mart_EventScript_Man::
	msgbox SlateportCity_Mart_Text_GreatBallIsBetter, MSGBOX_NPC
	end

SlateportCity_Mart_Text_SomeItemsOnlyAtMart:
	.string "The Market does have some interesting\n"
	.string "merchandise.\p"
	.string "But there are some items you can only\n"
	.string "get at a Pokémon Mart.$"

SlateportCity_Mart_Text_GreatBallIsBetter:
	.string "A Great Ball is better than a Poké Ball\n"
	.string "at catching Pokémon.\p"
	.string "With this, I should be able to get that\n"
	.string "elusive Pokémon…$"

