CinnabarIsland_Mart_Frlg_MapScripts::
	.byte 0

CinnabarIsland_Mart_EventScript_Woman::
	msgbox CinnabarIsland_Mart_Text_DontTheyHaveXAttack, MSGBOX_NPC
	end

CinnabarIsland_Mart_EventScript_Scientist::
	msgbox CinnabarIsland_Mart_Text_ExtraItemsNeverHurt, MSGBOX_NPC
	end

CinnabarIsland_Mart_EventScript_Clerk::
	mart_clerk 0

CinnabarIsland_Mart_Text_DontTheyHaveXAttack::
	.string "Don't they have X Attack?\p"
	.string "I like it because it raises the\n"
	.string "Attack stat in battle.$"

CinnabarIsland_Mart_Text_ExtraItemsNeverHurt::
	.string "It never hurts to have extra items.\n"
	.string "You never know what might happen.$"

