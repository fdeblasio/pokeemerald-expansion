SootopolisCity_LotadAndSeedotHouse_MapScripts::
	.byte 0

SootopolisCity_LotadAndSeedotHouse_EventScript_VoltorbBrother::
	special GetSeedotSizeRecordInfo
	lock
	faceplayer
	msgbox SootopolisCity_LotadAndSeedotHouse_Text_PleaseShowMeBigVoltorb, MSGBOX_DEFAULT
	special ChoosePartyMon
	waitstate
	copyvar VAR_RESULT, VAR_0x8004
	goto_if_eq VAR_RESULT, PARTY_NOTHING_CHOSEN, SootopolisCity_LotadAndSeedotHouse_EventScript_CancelShowVoltorb
	special CompareSeedotSize
	goto_if_eq VAR_RESULT, 1, SootopolisCity_LotadAndSeedotHouse_EventScript_NotVoltorb
	goto_if_eq VAR_RESULT, 2, SootopolisCity_LotadAndSeedotHouse_EventScript_SmallVoltorb
	goto_if_eq VAR_RESULT, 3, SootopolisCity_LotadAndSeedotHouse_EventScript_BigVoltorb
	release
	end

SootopolisCity_LotadAndSeedotHouse_EventScript_CancelShowVoltorb::
	msgbox SootopolisCity_LotadAndSeedotHouse_Text_DontHaveBigVoltorb, MSGBOX_DEFAULT
	release
	end

SootopolisCity_LotadAndSeedotHouse_EventScript_NotVoltorb::
	msgbox SootopolisCity_LotadAndSeedotHouse_Text_ThatsNotVoltorb, MSGBOX_DEFAULT
	release
	end

SootopolisCity_LotadAndSeedotHouse_EventScript_SmallVoltorb::
	msgbox SootopolisCity_LotadAndSeedotHouse_Text_SeenBiggerVoltorb, MSGBOX_DEFAULT
	release
	end

SootopolisCity_LotadAndSeedotHouse_EventScript_BigVoltorb::
	msgbox SootopolisCity_LotadAndSeedotHouse_Text_GoshMightBeBiggerThanCubchoo, MSGBOX_DEFAULT
	giveitem ITEM_ELIXIR
	goto_if_eq VAR_RESULT, FALSE, SootopolisCity_LotadAndSeedotHouse_EventScript_NoRoomForElixir1
	closemessage
	release
	end

SootopolisCity_LotadAndSeedotHouse_EventScript_NoRoomForElixir1::
	msgbox SootopolisCity_LotadAndSeedotHouse_Text_BagCrammedFull1, MSGBOX_DEFAULT
	release
	end

SootopolisCity_LotadAndSeedotHouse_EventScript_CubchooBrother::
	special GetLotadSizeRecordInfo
	lock
	faceplayer
	msgbox SootopolisCity_LotadAndSeedotHouse_Text_PleaseShowMeBigCubchoo, MSGBOX_DEFAULT
	special ChoosePartyMon
	waitstate
	copyvar VAR_RESULT, VAR_0x8004
	goto_if_eq VAR_RESULT, PARTY_NOTHING_CHOSEN, SootopolisCity_LotadAndSeedotHouse_EventScript_CancelShowCubchoo
	special CompareLotadSize
	goto_if_eq VAR_RESULT, 1, SootopolisCity_LotadAndSeedotHouse_EventScript_NotCubchoo
	goto_if_eq VAR_RESULT, 2, SootopolisCity_LotadAndSeedotHouse_EventScript_SmallCubchoo
	goto_if_eq VAR_RESULT, 3, SootopolisCity_LotadAndSeedotHouse_EventScript_BigCubchoo
	release
	end

SootopolisCity_LotadAndSeedotHouse_EventScript_CancelShowCubchoo::
	msgbox SootopolisCity_LotadAndSeedotHouse_Text_DontHaveBigCubchoo, MSGBOX_DEFAULT
	release
	end

SootopolisCity_LotadAndSeedotHouse_EventScript_NotCubchoo::
	msgbox SootopolisCity_LotadAndSeedotHouse_Text_ThatsNotCubchoo, MSGBOX_DEFAULT
	release
	end

SootopolisCity_LotadAndSeedotHouse_EventScript_SmallCubchoo::
	msgbox SootopolisCity_LotadAndSeedotHouse_Text_SeenBiggerCubchoo, MSGBOX_DEFAULT
	release
	end

SootopolisCity_LotadAndSeedotHouse_EventScript_BigCubchoo::
	msgbox SootopolisCity_LotadAndSeedotHouse_Text_WowMightBeBiggerThanVoltorb, MSGBOX_DEFAULT
	giveitem ITEM_ELIXIR
	goto_if_eq VAR_RESULT, FALSE, SootopolisCity_LotadAndSeedotHouse_EventScript_NoRoomForElixir2
	closemessage
	release
	end

SootopolisCity_LotadAndSeedotHouse_EventScript_NoRoomForElixir2::
	msgbox SootopolisCity_LotadAndSeedotHouse_Text_BagCrammedFull2, MSGBOX_DEFAULT
	release
	end

SootopolisCity_LotadAndSeedotHouse_EventScript_VoltorbSizeRecord::
	special GetSeedotSizeRecordInfo
	lockall
	msgbox SootopolisCity_LotadAndSeedotHouse_Text_BiggestVoltorbInHistory, MSGBOX_DEFAULT
	releaseall
	end

SootopolisCity_LotadAndSeedotHouse_EventScript_CubchooSizeRecord::
	special GetLotadSizeRecordInfo
	lockall
	msgbox SootopolisCity_LotadAndSeedotHouse_Text_BiggestCubchooInHistory, MSGBOX_DEFAULT
	releaseall
	end

SootopolisCity_LotadAndSeedotHouse_Text_PleaseShowMeBigVoltorb:
	.string "Do you know the Pokémon Voltorb?\n"
	.string "It's hardly ever seen in Sootopolis.\p"
	.string "Anyway, I love big Voltorb.\n"
	.string "The bigger the better.\p"
	.string "But my younger brother, he says that\n"
	.string "Cubchoo is bigger.\p"
	.string "That's silly.\n"
	.string "Voltorb has to be bigger than that!\p"
	.string "Huh? Do you have a Voltorb with you?\n"
	.string "P-p-please, show me!$"

SootopolisCity_LotadAndSeedotHouse_Text_GoshMightBeBiggerThanCubchoo:
	.string "{STR_VAR_2} inches!\n"
	.string "Oh, my gosh, this is a big one!\p"
	.string "It might even beat the big Cubchoo\n"
	.string "my younger brother saw!\p"
	.string "Thanks for showing me.\n"
	.string "This is my thanks!$"

@ Unused
SootopolisCity_LotadAndSeedotHouse_Text_ReceivedPotion1:
	.string "{PLAYER} received a Potion.$"

SootopolisCity_LotadAndSeedotHouse_Text_BagCrammedFull1:
	.string "Hunh?\n"
	.string "Your Bag is crammed full.$"

SootopolisCity_LotadAndSeedotHouse_Text_SeenBiggerVoltorb:
	.string "{STR_VAR_2} inches, is it?\p"
	.string "Hmm… I've seen a bigger Voltorb\n"
	.string "than this one.$"

SootopolisCity_LotadAndSeedotHouse_Text_ThatsNotVoltorb:
	.string "Oh, now this is quite something…\n"
	.string "But it's not a Voltorb!$"

SootopolisCity_LotadAndSeedotHouse_Text_DontHaveBigVoltorb:
	.string "You don't have a big Voltorb?\n"
	.string "That's too bad…\p"
	.string "If you get a big Voltorb, please\n"
	.string "come show me.$"

SootopolisCity_LotadAndSeedotHouse_Text_BiggestVoltorbInHistory:
	.string "The biggest Voltorb in history!\n"
	.string "{STR_VAR_2}'s {STR_VAR_3}-inch giant!\p"
	.string "A Voltorb bigger than a Cubchoo\n"
	.string "always wanted!$"

SootopolisCity_LotadAndSeedotHouse_Text_PleaseShowMeBigCubchoo:
	.string "Do you know the Pokémon Cubchoo?\n"
	.string "It's rarely seen in Sootopolis.\p"
	.string "I love, I mean love, big Cubchoo!\p"
	.string "My big brother says that Voltorb is\n"
	.string "bigger.\p"
	.string "But that's wrong! Everyone knows that\n"
	.string "Cubchoo is a lot bigger.\p"
	.string "Hunh? Do you have a Cubchoo?\n"
	.string "P-p-please show me!$"

SootopolisCity_LotadAndSeedotHouse_Text_WowMightBeBiggerThanVoltorb:
	.string "{STR_VAR_2} inches!\n"
	.string "Wow, that is big!\p"
	.string "It might be even bigger than the huge\n"
	.string "Voltorb my big brother saw.\p"
	.string "Thanks for showing me!\n"
	.string "This is my thanks!$"

@ Unused
SootopolisCity_LotadAndSeedotHouse_Text_ReceivedPotion2:
	.string "{PLAYER} received a Potion.$"

SootopolisCity_LotadAndSeedotHouse_Text_BagCrammedFull2:
	.string "Hunh?\n"
	.string "Your Bag is crammed full.$"

SootopolisCity_LotadAndSeedotHouse_Text_SeenBiggerCubchoo:
	.string "{STR_VAR_2} inches?\p"
	.string "Hmm… I've seen a bigger Cubchoo\n"
	.string "than this one here.$"

SootopolisCity_LotadAndSeedotHouse_Text_ThatsNotCubchoo:
	.string "Well, isn't this something!\n"
	.string "But it's no Cubchoo!$"

SootopolisCity_LotadAndSeedotHouse_Text_DontHaveBigCubchoo:
	.string "Don't you have a big Cubchoo?\n"
	.string "How disappointing…\p"
	.string "If you get a big Cubchoo, please\n"
	.string "come show me!$"

SootopolisCity_LotadAndSeedotHouse_Text_BiggestCubchooInHistory:
	.string "The biggest Cubchoo in history!\n"
	.string "{STR_VAR_2}'s {STR_VAR_3}-inch colossus!\p"
	.string "A Cubchoo bigger than a Voltorb\n"
	.string "always wanted!$"

