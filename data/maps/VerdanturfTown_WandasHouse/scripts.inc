VerdanturfTown_WandasHouse_MapScripts::
	.byte 0

VerdanturfTown_WandasHouse_EventScript_Duncan::
	lock
	faceplayer
	goto_if_set FLAG_DUNCAN_SPEECH, VerdanturfTown_WandasHouse_EventScript_DuncanShortSpeech
	msgbox VerdanturfTown_WandasHouse_Text_StrongerSpeech, MSGBOX_DEFAULT
	setflag FLAG_DUNCAN_SPEECH
	release
	end

VerdanturfTown_WandasHouse_EventScript_DuncanShortSpeech::
	msgbox VerdanturfTown_WandasHouse_Text_StrongerSpeechShort, MSGBOX_DEFAULT
	release
	end

VerdanturfTown_WandasHouse_EventScript_DuncansUncle::
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_DUNCAN_VICTORY_ROAD, VerdanturfTown_WandasHouse_EventScript_DuncansUncleEverGrande
	goto_if_set FLAG_BADGE04_GET, VerdanturfTown_WandasHouse_EventScript_DuncansUncleSlippedOff
	msgbox VerdanturfTown_WandasHouse_Text_DuncansNextDoor, MSGBOX_DEFAULT
	release
	end

VerdanturfTown_WandasHouse_EventScript_DuncansUncleSlippedOff::
	msgbox VerdanturfTown_WandasHouse_Text_DuncanSlippedOff, MSGBOX_DEFAULT
	release
	end

VerdanturfTown_WandasHouse_EventScript_DuncansUncleEverGrande::
	msgbox VerdanturfTown_WandasHouse_Text_DuncanGoneThatFar, MSGBOX_DEFAULT
	release
	end

VerdanturfTown_WandasHouse_EventScript_WandasBoyfriend::
	msgbox VerdanturfTown_WandasHouse_Text_CanSeeGirlfriendEveryDay, MSGBOX_NPC
	end

VerdanturfTown_WandasHouse_EventScript_Wanda::
	lock
	faceplayer
	goto_if_set FLAG_BADGE04_GET, VerdanturfTown_WandasHouse_EventScript_WandaDontWorry
	goto_if_set FLAG_DEFEATED_DUNCAN_MAUVILLE, VerdanturfTown_WandasHouse_EventScript_MeetWanda
	msgbox VerdanturfTown_WandasHouse_Text_DontWorryAboutDuncan, MSGBOX_DEFAULT
	release
	end

VerdanturfTown_WandasHouse_EventScript_MeetWanda::
	msgbox VerdanturfTown_WandasHouse_Text_MeetWanda, MSGBOX_DEFAULT
	release
	end

VerdanturfTown_WandasHouse_EventScript_WandaDontWorry::
	msgbox VerdanturfTown_WandasHouse_Text_DontWorryAboutDuncan, MSGBOX_DEFAULT
	release
	end

VerdanturfTown_WandasHouse_EventScript_DuncansAunt::
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_DUNCAN_VICTORY_ROAD, VerdanturfTown_WandasHouse_EventScript_DuncansAuntEverGrande
	goto_if_set FLAG_BADGE04_GET, VerdanturfTown_WandasHouse_EventScript_DuncansAuntAnythingHappened
	goto_if_set FLAG_RUSTURF_TUNNEL_OPENED, VerdanturfTown_WandasHouse_EventScript_DuncansAuntTunnelOpen
	msgbox VerdanturfTown_WandasHouse_Text_DaughtersBoyfriendDriven, MSGBOX_DEFAULT
	release
	end

VerdanturfTown_WandasHouse_EventScript_DuncansAuntTunnelOpen::
	msgbox VerdanturfTown_WandasHouse_Text_DaughtersBoyfriendWasDigging, MSGBOX_DEFAULT
	release
	end

VerdanturfTown_WandasHouse_EventScript_DuncansAuntAnythingHappened::
	msgbox VerdanturfTown_WandasHouse_Text_IfAnythingHappenedToDuncan, MSGBOX_DEFAULT
	release
	end

VerdanturfTown_WandasHouse_EventScript_DuncansAuntEverGrande::
	msgbox VerdanturfTown_WandasHouse_Text_DuncanWasInEverGrande, MSGBOX_DEFAULT
	release
	end

VerdanturfTown_WandasHouse_Text_StrongerSpeech:
	.string "Duncan: I lost to you, {PLAYER}, but I'm\n"
	.string "not feeling down anymore.\p"
	.string "Because I have a new purpose in life.\n"
	.string "Together with Ralph, I'm going\l"
	.string "to challenge Pokémon Gyms and become\l"
	.string "a great Trainer.\p"
	.string "Please watch me, {PLAYER}.\n"
	.string "I'm going to be stronger than you.\p"
	.string "When I do, I'm going to challenge you\n"
	.string "to another battle.$"

VerdanturfTown_WandasHouse_Text_StrongerSpeechShort:
	.string "Duncan: Please watch me, {PLAYER}.\n"
	.string "I'm going to get stronger than you.\p"
	.string "When I do, I'm going to challenge you\n"
	.string "to another battle.$"

VerdanturfTown_WandasHouse_Text_DuncansNextDoor:
	.string "Uncle: Oh! {PLAYER}{KUN}!\n"
	.string "Duncan's next door.\p"
	.string "But, boy, there's something I have to\n"
	.string "tell you.\p"
	.string "This natural environment is doing\n"
	.string "wonders for Duncan's health.\p"
	.string "Maybe it's not just the environment.\n"
	.string "It could be Pokémon that are giving\l"
	.string "the boy hope.$"

VerdanturfTown_WandasHouse_Text_DuncanSlippedOff:
	.string "Duncan's gone away…\n"
	.string "He slipped off on his own…$"

VerdanturfTown_WandasHouse_Text_DuncanGoneThatFar:
	.string "Uncle: Is that right?\n"
	.string "Duncan's gone away that far all by\l"
	.string "himself…\p"
	.string "Well, I have to give him credit--he is\n"
	.string "my little brother's son.$"

VerdanturfTown_WandasHouse_Text_MeetWanda:
	.string "Wanda: You are?\n"
	.string "Oh, right, I get it!\p"
	.string "You're the {PLAYER} who Duncan was\n"
	.string "telling me about.\p"
	.string "I'm Duncan's cousin.\n"
	.string "Glad to meet you!\p"
	.string "I think Duncan's become a lot more lively\n"
	.string "and healthy since he came here.$"

VerdanturfTown_WandasHouse_Text_DontWorryAboutDuncan:
	.string "Wanda: Don't worry about Duncan.\n"
	.string "He'll be just fine.\p"
	.string "I know my little cousin, and he has\n"
	.string "Pokémon with him, too.$"

VerdanturfTown_WandasHouse_Text_CanSeeGirlfriendEveryDay:
	.string "Thanks to you, I can see my girlfriend\n"
	.string "every day.\l"
	.string "Happy? You bet I am!$"

VerdanturfTown_WandasHouse_Text_DaughtersBoyfriendDriven:
	.string "My daughter's boyfriend is a very\n"
	.string "driven and passionate sort of person.\p"
	.string "He's been digging a tunnel nonstop\n"
	.string "just so he can see my daughter.\p"
	.string "My daughter's a little concerned,\n"
	.string "so she goes out to the tunnel a lot.$"

VerdanturfTown_WandasHouse_Text_DaughtersBoyfriendWasDigging:
	.string "It's amazing. My daughter's boyfriend\n"
	.string "was digging the tunnel by hand!\p"
	.string "It's so incredible!$"

VerdanturfTown_WandasHouse_Text_IfAnythingHappenedToDuncan:
	.string "If anything were to happen to Duncan,\n"
	.string "I would never be able to look his\l"
	.string "parents in Petalburg in the eye…$"

VerdanturfTown_WandasHouse_Text_DuncanWasInEverGrande:
	.string "Duncan was in Ever Grande?\p"
	.string "His parents in Petalburg would be\n"
	.string "astonished to hear that!$"

