SSAnne_B1F_Room5_Frlg_MapScripts::
	.byte 0

SSAnne_B1F_Room5_EventScript_Boy::
	msgbox SSAnne_B1F_Room5_Text_MachokeHasStrengthToMoveRocks, MSGBOX_NPC
	end

SSAnne_B1F_Room5_EventScript_Machoke::
	lock
	faceplayer
	waitse
	overworldspecies SPECIES_MACHOKE
	bufferspeciestext SPECIES_MACHOKE, SSAnne_B1F_Room5_Text_Machoke
	waitmoncry
	release
	end

SSAnne_B1F_Room5_Text_MachokeHasStrengthToMoveRocks::
	.string "My buddy Machoke is super strong!\p"
	.string "He has enough Strength to move\n"
	.string "big rocks!$"

SSAnne_B1F_Room5_Text_Machoke::
	.string "{STR_VAR_1}: Gwoh! Goggoh!$"

