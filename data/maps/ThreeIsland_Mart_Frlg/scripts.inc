ThreeIsland_Mart_Frlg_MapScripts::
	.byte 0

ThreeIsland_Mart_EventScript_Clerk::
	mart_clerk 0

ThreeIsland_Mart_EventScript_Picnicker::
	msgbox ThreeIsland_Mart_Text_TrueThatCeldadonDeptStoreBigger, MSGBOX_NPC
	end

ThreeIsland_Mart_EventScript_BugCatcher::
	msgbox ThreeIsland_Mart_Text_PeopleHealWithBerriesFromForest, MSGBOX_NPC
	end

ThreeIsland_Mart_EventScript_Youngster::
	msgbox ThreeIsland_Mart_Text_BikersWereAboutToTrashMart, MSGBOX_NPC
	end

ThreeIsland_Mart_Text_TrueThatCeldadonDeptStoreBigger::
	.string "Is it true?\p"
	.string "Celadon Dept. Store is several\n"
	.string "times bigger than this shop?$"

ThreeIsland_Mart_Text_PeopleHealWithBerriesFromForest::
	.string "I sometimes buy medicine here.\p"
	.string "But a lot of people heal Pokémon\n"
	.string "with Berries from Berry Forest.\p"
	.string "After all, Berries are free and\n"
	.string "they never run out.$"

ThreeIsland_Mart_Text_BikersWereAboutToTrashMart::
	.string "Those Bikers were about to trash\n"
	.string "this Pokémon Mart.\p"
	.string "Am I glad they decided to leave!$"

