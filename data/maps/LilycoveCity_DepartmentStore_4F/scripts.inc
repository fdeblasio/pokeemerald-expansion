LilycoveCity_DepartmentStore_4F_MapScripts::
	.byte 0

LilycoveCity_DepartmentStore_4F_EventScript_Gentleman::
	msgbox LilycoveCity_DepartmentStore_4F_Text_AttackOrDefenseTM, MSGBOX_NPC
	end

LilycoveCity_DepartmentStore_4F_EventScript_Woman::
	msgbox LilycoveCity_DepartmentStore_4F_Text_FiftyDifferentTMs, MSGBOX_NPC
	end

LilycoveCity_DepartmentStore_4F_EventScript_Youngster::
	msgbox LilycoveCity_DepartmentStore_4F_Text_PokemonOnlyHaveFourMoves, MSGBOX_NPC
	end

LilycoveCity_DepartmentStore_4F_EventScript_ClerkLeft::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart LilycoveCity_DepartmentStore_4F_Pokemart_OldTMs
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
LilycoveCity_DepartmentStore_4F_Pokemart_OldTMs:
	.2byte ITEM_TM14  @ Blizzard
	.2byte ITEM_TM15  @ Hyper Beam
	.2byte ITEM_TM16  @ Light Screen
	.2byte ITEM_TM17  @ Protect
	.2byte ITEM_TM20  @ Safeguard
	.2byte ITEM_TM25  @ Thunder
	.2byte ITEM_TM33  @ Reflect
	.2byte ITEM_TM38  @ Fire Blast
	.2byte ITEM_NONE
	release
	end

LilycoveCity_DepartmentStore_4F_EventScript_ClerkMegaStones::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart LilycoveCity_DepartmentStore_4F_Pokemart_MegaStones
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
LilycoveCity_DepartmentStore_4F_Pokemart_MegaStones:
	.2byte ITEM_ALAKAZITE
	.2byte ITEM_PINSIRITE
	.2byte ITEM_GYARADOSITE
	.2byte ITEM_HERACRONITE
	.2byte ITEM_SCEPTILITE
	.2byte ITEM_BLAZIKENITE
	.2byte ITEM_SWAMPERTITE
	.2byte ITEM_GARDEVOIRITE
	.2byte ITEM_GALLADITE
	.2byte ITEM_SABLENITE
	.2byte ITEM_MAWILITE
	.2byte ITEM_AGGRONITE
	.2byte ITEM_MEDICHAMITE
	.2byte ITEM_MANECTITE
	.2byte ITEM_SHARPEDONITE
	.2byte ITEM_CAMERUPTITE
	.2byte ITEM_ALTARIANITE
	.2byte ITEM_BANETTITE
	.2byte ITEM_ABSOLITE
	.2byte ITEM_GLALITITE
	.2byte ITEM_SALAMENCITE
	.2byte ITEM_METAGROSSITE
	.2byte ITEM_LATIASITE
	.2byte ITEM_LATIOSITE
	.2byte ITEM_NONE
	release
	end

LilycoveCity_DepartmentStore_4F_EventScript_ClerkRight::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart LilycoveCity_DepartmentStore_4F_Pokemart_NewTMs
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
LilycoveCity_DepartmentStore_4F_Pokemart_NewTMs:
	.2byte ITEM_TM53  @ Energy Ball
	.2byte ITEM_TM56  @ Signal Beam
	.2byte ITEM_TM58  @ Psychic Fangs
	.2byte ITEM_TM59  @ Dragon Pulse
	.2byte ITEM_TM60  @ Drain Punch
	.2byte ITEM_TM63  @ Dazzling Gleam
	.2byte ITEM_TM64  @ Seed Bomb
	.2byte ITEM_TM65  @ Shadow Claw
	.2byte ITEM_TM68  @ Giga Impact
	.2byte ITEM_TM69  @ Play Rough
	.2byte ITEM_TM70  @ Leech Life
	.2byte ITEM_TM71  @ Stone Edge
	.2byte ITEM_TM78  @ Crunch
	.2byte ITEM_TM79  @ Dark Pulse
	.2byte ITEM_TM80  @ Rock Slide
	.2byte ITEM_TM81  @ X-Scissor
	.2byte ITEM_TM82  @ Night Slash
	.2byte ITEM_TM83  @ Iron Head
	.2byte ITEM_TM84  @ Poison Jab
	.2byte ITEM_TM85  @ Aura Sphere
	.2byte ITEM_TM87  @ Bug Buzz
	.2byte ITEM_TM88  @ Acrobatics
	.2byte ITEM_TM90  @ Body Slam
	.2byte ITEM_TM91  @ Flash Cannon
	.2byte ITEM_TM93  @ Liquidation
	.2byte ITEM_TM94  @ Thunder Punch
	.2byte ITEM_TM95  @ Fire Punch
	.2byte ITEM_TM96  @ Ice Punch
	.2byte ITEM_TM97  @ Earth Power
	.2byte ITEM_TM98  @ Air Slash
	.2byte ITEM_TM99  @ Body Press
	.2byte ITEM_TM100  @ Moonblast
	.2byte ITEM_NONE
	release
	end

LilycoveCity_DepartmentStore_4F_Text_AttackOrDefenseTM:
	.string "Hmm…\p"
	.string "An attacking move…\n"
	.string "Or a defensive move…\p"
	.string "It's no easy matter to decide which TM\n"
	.string "moves should be taught to Pokémon…$"

LilycoveCity_DepartmentStore_4F_Text_FiftyDifferentTMs:
	.string "There are so many different kinds of\n"
	.string "TM moves.\p"
	.string "A catalog I read said there are one\n"
	.string "hundred different kinds!$"

LilycoveCity_DepartmentStore_4F_Text_PokemonOnlyHaveFourMoves:
	.string "I'd like to get all the different TMs,\n"
	.string "but a Pokémon learns only four moves.$"

