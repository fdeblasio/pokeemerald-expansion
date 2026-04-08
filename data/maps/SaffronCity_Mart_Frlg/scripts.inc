SaffronCity_Mart_Frlg_MapScripts::
	.byte 0

SaffronCity_Mart_EventScript_Lass::
	msgbox SaffronCity_Mart_Text_ReviveIsCostly, MSGBOX_NPC
	end

SaffronCity_Mart_EventScript_Youngster::
	msgbox SaffronCity_Mart_Text_MaxRepelMoreEffectiveThanSuper, MSGBOX_NPC
	end

SaffronCity_Mart_EventScript_Clerk::
	mart_clerk 0

SaffronCity_Mart_Text_MaxRepelMoreEffectiveThanSuper::
	.string "Max Repel keeps weaker Pokémon\n"
	.string "from appearing.\p"
	.string "Max Repel stays effective longer\n"
	.string "than Super Repel.$"

SaffronCity_Mart_Text_ReviveIsCostly::
	.string "Revive is costly, but it revives\n"
	.string "fainted Pokémon!$"

