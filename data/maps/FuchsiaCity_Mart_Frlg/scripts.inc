FuchsiaCity_Mart_Frlg_MapScripts::
	.byte 0

FuchsiaCity_Mart_EventScript_CooltrainerF::
	msgbox FuchsiaCity_Mart_Text_DidYouTryXSpeed, MSGBOX_NPC
	end

FuchsiaCity_Mart_EventScript_Gentleman::
	msgbox FuchsiaCity_Mart_Text_DontTheyHaveSafariZonePennants, MSGBOX_NPC
	end

FuchsiaCity_Mart_EventScript_Clerk::
	mart_clerk 0

FuchsiaCity_Mart_Text_DontTheyHaveSafariZonePennants::
	.string "Don't they have any pennants\n"
	.string "promoting the Safari Zone?\p"
	.string "How about some paper lanterns?\n"
	.string "Aren't there even any calendars?$"

FuchsiaCity_Mart_Text_DidYouTryXSpeed::
	.string "Did you try X Speed?\n"
	.string "It speeds up a Pokémon in battle.$"

