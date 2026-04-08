BattleFrontier_ExchangeServiceCorner_MapScripts::
	.byte 0

.macro setdecorandprice item:req, price:req, next:req
	setvar VAR_0x8009, \item
	setvar VAR_0x8008, \price
	bufferdecorationname STR_VAR_1, VAR_0x8009
	msgbox BattleFrontier_ExchangeServiceCorner_Text_ConfirmPurchase, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, \next
	goto BattleFrontier_ExchangeServiceCorner_EventScript_TryPurchasePrize
.endm

.set JOHTO_BP, 2
.set BIG_DOLL_BP, 4

BattleFrontier_ExchangeServiceCorner_EventScript_ClerkWelcome::
	msgbox BattleFrontier_ExchangeServiceCorner_Text_WelcomePleaseChoosePrize, MSGBOX_DEFAULT
	special ShowBattlePointsWindow
	return

BattleFrontier_ExchangeServiceCorner_EventScript_ClerkGoodbye::
	msgbox BattleFrontier_ExchangeServiceCorner_Text_ThankYouVisitWithPoints, MSGBOX_DEFAULT
	special CloseBattlePointsWindow
	release
	end

BattleFrontier_ExchangeServiceCorner_EventScript_TryPurchasePrize::
	specialvar VAR_TEMP_1, GetFrontierBattlePoints
	goto_if_ge VAR_TEMP_1, VAR_0x8008, BattleFrontier_ExchangeServiceCorner_EventScript_TryGiveDecor
	msgbox BattleFrontier_ExchangeServiceCorner_Text_DontHaveEnoughPoints, MSGBOX_DEFAULT
	goto_if_eq VAR_TEMP_2, EXCHANGE_CORNER_DECOR1_CLERK, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor1
	goto BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor2
	end

BattleFrontier_ExchangeServiceCorner_EventScript_TryGiveDecor::
	checkdecorspace VAR_0x8009
	goto_if_eq VAR_RESULT, FALSE, BattleFrontier_ExchangeServiceCorner_EventScript_NoRoomForDecor
	copyvar VAR_0x8004, VAR_0x8008
	special TakeFrontierBattlePoints
	adddecoration VAR_0x8009
	special UpdateBattlePointsWindow
	playse SE_SHOP
	msgbox BattleFrontier_ExchangeServiceCorner_Text_WellSendItToPC, MSGBOX_DEFAULT
	goto_if_eq VAR_TEMP_2, EXCHANGE_CORNER_DECOR1_CLERK, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor1
	goto BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor2
	end

BattleFrontier_ExchangeServiceCorner_EventScript_NoRoomForDecor::
	msgbox BattleFrontier_ExchangeServiceCorner_Text_PCIsFull, MSGBOX_DEFAULT
	special CloseBattlePointsWindow
	release
	end

BattleFrontier_ExchangeServiceCorner_EventScript_BagFull::
	msgbox BattleFrontier_ExchangeServiceCorner_Text_DontHaveSpaceToHoldIt, MSGBOX_DEFAULT
	special CloseBattlePointsWindow
	release
	end

BattleFrontier_ExchangeServiceCorner_EventScript_DecorClerk1::
	lock
	faceplayer
	setvar VAR_TEMP_2, EXCHANGE_CORNER_DECOR1_CLERK
	call BattleFrontier_ExchangeServiceCorner_EventScript_ClerkWelcome
	goto BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor1
	end

BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor1::
	setvar VAR_0x8004, SCROLL_MULTI_BF_EXCHANGE_CORNER_DECOR_VENDOR_1
	special ShowFrontierExchangeCornerItemIconWindow
	special ShowScrollableMultichoice
	waitstate
	special CloseFrontierExchangeCornerItemIconWindow
	switch VAR_RESULT
	case 0, BattleFrontier_ExchangeServiceCorner_EventScript_KissPoster
	case 1, BattleFrontier_ExchangeServiceCorner_EventScript_KissCushion
	case 2, BattleFrontier_ExchangeServiceCorner_EventScript_SmoochumDoll
	case 3, BattleFrontier_ExchangeServiceCorner_EventScript_TogepiDoll
	case 4, BattleFrontier_ExchangeServiceCorner_EventScript_MeowthDoll
	case 5, BattleFrontier_ExchangeServiceCorner_EventScript_ClefairyDoll
	case 6, BattleFrontier_ExchangeServiceCorner_EventScript_DittoDoll
	case 7, BattleFrontier_ExchangeServiceCorner_EventScript_ChikoritaDoll
	case 8, BattleFrontier_ExchangeServiceCorner_EventScript_CyndaquilDoll
	case 9, BattleFrontier_ExchangeServiceCorner_EventScript_TotodileDoll
	case 10, BattleFrontier_ExchangeServiceCorner_EventScript_ClerkGoodbye
	case MULTI_B_PRESSED, BattleFrontier_ExchangeServiceCorner_EventScript_ClerkGoodbye
	end

BattleFrontier_ExchangeServiceCorner_EventScript_KissPoster::
	setdecorandprice DECOR_KISS_POSTER, 1, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor1

BattleFrontier_ExchangeServiceCorner_EventScript_KissCushion::
	setdecorandprice DECOR_KISS_CUSHION, 1, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor1

BattleFrontier_ExchangeServiceCorner_EventScript_SmoochumDoll::
	setdecorandprice DECOR_SMOOCHUM_DOLL, 1, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor1

BattleFrontier_ExchangeServiceCorner_EventScript_TogepiDoll::
	setdecorandprice DECOR_TOGEPI_DOLL, 1, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor1

BattleFrontier_ExchangeServiceCorner_EventScript_MeowthDoll::
	setdecorandprice DECOR_MEOWTH_DOLL, 1, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor1

BattleFrontier_ExchangeServiceCorner_EventScript_ClefairyDoll::
	setdecorandprice DECOR_CLEFAIRY_DOLL, 1, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor1

BattleFrontier_ExchangeServiceCorner_EventScript_DittoDoll::
	setdecorandprice DECOR_DITTO_DOLL, 1, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor1

BattleFrontier_ExchangeServiceCorner_EventScript_CyndaquilDoll::
	setdecorandprice DECOR_CYNDAQUIL_DOLL, JOHTO_BP, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor1

BattleFrontier_ExchangeServiceCorner_EventScript_ChikoritaDoll::
	setdecorandprice DECOR_CHIKORITA_DOLL, JOHTO_BP, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor1

BattleFrontier_ExchangeServiceCorner_EventScript_TotodileDoll::
	setdecorandprice DECOR_TOTODILE_DOLL, JOHTO_BP, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor1

BattleFrontier_ExchangeServiceCorner_EventScript_DecorClerk2::
	lock
	faceplayer
	setvar VAR_TEMP_2, EXCHANGE_CORNER_DECOR2_CLERK
	call BattleFrontier_ExchangeServiceCorner_EventScript_ClerkWelcome
	goto BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor2
	end

BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor2::
	setvar VAR_0x8004, SCROLL_MULTI_BF_EXCHANGE_CORNER_DECOR_VENDOR_2
	special ShowFrontierExchangeCornerItemIconWindow
	special ShowScrollableMultichoice
	waitstate
	special CloseFrontierExchangeCornerItemIconWindow
	switch VAR_RESULT
	case 0, BattleFrontier_ExchangeServiceCorner_EventScript_LaprasDoll
	case 1, BattleFrontier_ExchangeServiceCorner_EventScript_SnorlaxDoll
	case 2, BattleFrontier_ExchangeServiceCorner_EventScript_VenusaurDoll
	case 3, BattleFrontier_ExchangeServiceCorner_EventScript_CharizardDoll
	case 4, BattleFrontier_ExchangeServiceCorner_EventScript_BlastoiseDoll
	case 5, BattleFrontier_ExchangeServiceCorner_EventScript_RegirockDoll
	case 6, BattleFrontier_ExchangeServiceCorner_EventScript_RegiceDoll
	case 7, BattleFrontier_ExchangeServiceCorner_EventScript_RegisteelDoll
	case 8, BattleFrontier_ExchangeServiceCorner_EventScript_ClerkGoodbye
	case MULTI_B_PRESSED, BattleFrontier_ExchangeServiceCorner_EventScript_ClerkGoodbye
	end

BattleFrontier_ExchangeServiceCorner_EventScript_LaprasDoll::
	setdecorandprice DECOR_LAPRAS_DOLL, BIG_DOLL_BP, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor2

BattleFrontier_ExchangeServiceCorner_EventScript_SnorlaxDoll::
	setdecorandprice DECOR_SNORLAX_DOLL, BIG_DOLL_BP, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor2

BattleFrontier_ExchangeServiceCorner_EventScript_VenusaurDoll::
	setdecorandprice DECOR_VENUSAUR_DOLL, BIG_DOLL_BP, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor2

BattleFrontier_ExchangeServiceCorner_EventScript_CharizardDoll::
	setdecorandprice DECOR_CHARIZARD_DOLL, BIG_DOLL_BP, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor2

BattleFrontier_ExchangeServiceCorner_EventScript_BlastoiseDoll::
	setdecorandprice DECOR_BLASTOISE_DOLL, BIG_DOLL_BP, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor2

BattleFrontier_ExchangeServiceCorner_EventScript_RegirockDoll::
	setdecorandprice DECOR_REGIROCK_DOLL, BIG_DOLL_BP, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor2

BattleFrontier_ExchangeServiceCorner_EventScript_RegiceDoll::
	setdecorandprice DECOR_REGICE_DOLL, BIG_DOLL_BP, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor2

BattleFrontier_ExchangeServiceCorner_EventScript_RegisteelDoll::
	setdecorandprice DECOR_REGISTEEL_DOLL, BIG_DOLL_BP, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor2

BattleFrontier_ExchangeServiceCorner_EventScript_EvolutionMega::
	mart_clerk BattleFrontier_Mart_EvolutionMega

BattleFrontier_ExchangeServiceCorner_EventScript_HoldItem::
	mart_clerk BattleFrontier_Mart_HoldItem

BattleFrontier_ExchangeServiceCorner_EventScript_Man::
	msgbox BattleFrontier_ExchangeServiceCorner_Text_GoGetYourOwnDoll, MSGBOX_NPC
	end

BattleFrontier_ExchangeServiceCorner_EventScript_Sailor::
	msgbox BattleFrontier_ExchangeServiceCorner_Text_ItemsWillGetMonTougher, MSGBOX_NPC
	end

BattleFrontier_ExchangeServiceCorner_EventScript_PokefanF::
	lock
	msgbox BattleFrontier_ExchangeServiceCorner_Text_GetYouAnythingYouWant, MSGBOX_DEFAULT
	release
	end

BattleFrontier_ExchangeServiceCorner_EventScript_RichBoy::
	msgbox BattleFrontier_ExchangeServiceCorner_Text_WishIHadAllDolls, MSGBOX_NPC
	end

BattleFrontier_ExchangeServiceCorner_EventScript_Girl::
	msgbox BattleFrontier_ExchangeServiceCorner_Text_MoreBattlePointsForRecord, MSGBOX_NPC
	end

BattleFrontier_ExchangeServiceCorner_Text_WelcomePleaseChoosePrize:
	.string "Hello, this is the Exchange Service\n"
	.string "Corner.\p"
	.string "We exchange the Battle Points you\n"
	.string "have collected for lovely prizes.\p"
	.string "Please choose a prize from this list.$"

BattleFrontier_ExchangeServiceCorner_Text_ConfirmPurchase:
	.string "You've chosen the {STR_VAR_1}.\n"
	.string "Is that correct?$"

BattleFrontier_ExchangeServiceCorner_Text_WellSendItToPC:
	.string "Thank you!\n"
	.string "We'll send it to your PC at home.$"

BattleFrontier_ExchangeServiceCorner_Text_HereIsYourPrize:
	.string "Here is your prize!$"

BattleFrontier_ExchangeServiceCorner_Text_DontHaveEnoughPoints:
	.string "I'm so sorry…\n"
	.string "You don't have enough Battle Points…$"

BattleFrontier_ExchangeServiceCorner_Text_PCIsFull:
	.string "I'm so sorry…\n"
	.string "Your PC appears to be full…$"

BattleFrontier_ExchangeServiceCorner_Text_DontHaveSpaceToHoldIt:
	.string "I'm so sorry…\n"
	.string "You don't have space to hold it…$"

BattleFrontier_ExchangeServiceCorner_Text_ThankYouVisitWithPoints:
	.string "Thank you very much.\p"
	.string "Please visit us when you have\n"
	.string "saved up Battle Points.$"

BattleFrontier_ExchangeServiceCorner_Text_WishIHadAllDolls:
	.string "Oh, they're so nice!\n"
	.string "I wish I had them!\l"
	.string "Cute cushions!\l"
	.string "Big plush Dolls!\l"
	.string "Little plush Dolls!\l"
	.string "I wish I had them all!$"

BattleFrontier_ExchangeServiceCorner_Text_GetYouAnythingYouWant:
	.string "Leave it to your mommy!\p"
	.string "If it's anything you want, I'll go\n"
	.string "through anything to get it, honey!$"

BattleFrontier_ExchangeServiceCorner_Text_ItemsWillGetMonTougher:
	.string "If I can get hold of the items here,\n"
	.string "my Pokémon will get tougher.\p"
	.string "You bet they will!\n"
	.string "No question about it!$"

BattleFrontier_ExchangeServiceCorner_Text_GoGetYourOwnDoll:
	.string "Hah?\n"
	.string "What are you gawking at?\p"
	.string "I don't like you staring at my plush\n"
	.string "doll like that.\p"
	.string "If you want it, go get one yourself!\n"
	.string "Isn't that right, Smoochum?$"

BattleFrontier_ExchangeServiceCorner_Text_MoreBattlePointsForRecord:
	.string "Did you know?\p"
	.string "If you stretch your record at any of\n"
	.string "the Battle facilities, they start\l"
	.string "giving you more and more Battle Points.$"

BattleFrontier_ExchangeServiceCorner_Text_KissPosterDesc::
	.string "A large poster with a Smoochum print.$"

BattleFrontier_ExchangeServiceCorner_Text_KissCushionDesc::
	.string "A Smoochum cushion.\n"
	.string "Place it on a mat or a desk.$"

BattleFrontier_ExchangeServiceCorner_Text_SmoochumDollDesc::
	.string "A Smoochum Doll.\n"
	.string "Place it on a mat or a desk.$"

BattleFrontier_ExchangeServiceCorner_Text_TogepiDollDesc::
	.string "A Togepi Doll.\n"
	.string "Place it on a mat or a desk.$"

BattleFrontier_ExchangeServiceCorner_Text_MeowthDollDesc::
	.string "A Meowth Doll.\n"
	.string "Place it on a mat or a desk.$"

BattleFrontier_ExchangeServiceCorner_Text_ClefairyDollDesc::
	.string "A Clefairy Doll.\n"
	.string "Place it on a mat or a desk.$"

BattleFrontier_ExchangeServiceCorner_Text_DittoDollDesc::
	.string "A Ditto Doll.\n"
	.string "Place it on a mat or a desk.$"

BattleFrontier_ExchangeServiceCorner_Text_CyndaquilDollDesc::
	.string "A Cyndaquil Doll.\n"
	.string "Place it on a mat or a desk.$"

BattleFrontier_ExchangeServiceCorner_Text_ChikoritaDollDesc::
	.string "A Chikorita Doll.\n"
	.string "Place it on a mat or a desk.$"

BattleFrontier_ExchangeServiceCorner_Text_TotodileDollDesc::
	.string "A Totodile Doll.\n"
	.string "Place it on a mat or a desk.$"

BattleFrontier_ExchangeServiceCorner_Text_LargeDollDesc::
	.string "A large Doll.\n"
	.string "Place it on a mat or a desk.$"
