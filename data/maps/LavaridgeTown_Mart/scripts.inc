LavaridgeTown_Mart_MapScripts::
	.byte 0

LavaridgeTown_Mart_EventScript_Clerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart 0
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

LavaridgeTown_Mart_EventScript_TMClerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart LavaridgeTown_Mart_TMs
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
LavaridgeTown_Mart_TMs:
	.2byte ITEM_TM_TOXIC
	.2byte ITEM_TM_BRINE
	.2byte ITEM_TM_PAYBACK
	.2byte ITEM_TM_AVALANCHE
	.2byte ITEM_TM_NASTY_PLOT
	.2byte ITEM_TM_SWORDS_DANCE
	.2byte ITEM_TM_STEALTH_ROCK
	.2byte ITEM_TM_GRASS_KNOT
	.2byte ITEM_TM_U_TURN
	.2byte ITEM_TM_TRICK_ROOM
	.2byte ITEM_NONE
	release
	end

LavaridgeTown_Mart_EventScript_ExpertM::
	msgbox LavaridgeTown_Mart_Text_XSpeedFirstStrike, MSGBOX_NPC
	end

LavaridgeTown_Mart_EventScript_OldWoman::
	msgbox LavaridgeTown_Mart_Text_LocalSpecialtyOnMtChimney, MSGBOX_NPC
	end

LavaridgeTown_Mart_Text_XSpeedFirstStrike:
	.string "Use X Speed to add to a Pokémon's\n"
	.string "Speed in battle.\p"
	.string "That will help it get in the first\n"
	.string "strike--a decided advantage!$"

LavaridgeTown_Mart_Text_LocalSpecialtyOnMtChimney:
	.string "On Mt. Chimney's peak, there's a local\n"
	.string "specialty that you can buy only there.\p"
	.string "Give it to a Pokémon--it will be elated.$"

