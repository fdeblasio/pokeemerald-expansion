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
	.2byte ITEM_TM_BLIZZARD
	.2byte ITEM_TM_HYPER_BEAM
	.2byte ITEM_TM_LIGHT_SCREEN
	.2byte ITEM_TM_PROTECT
	.2byte ITEM_TM_SAFEGUARD
	.2byte ITEM_TM_SOLAR_BEAM
	.2byte ITEM_TM_THUNDER
	.2byte ITEM_TM_REFLECT
	.2byte ITEM_TM_FIRE_BLAST
	pokemartlistend

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
	.2byte ITEM_ALAKAZITE       @ 0065
	.2byte ITEM_PINSIRITE       @ 0127
	.2byte ITEM_GYARADOSITE     @ 0130
	.2byte ITEM_HERACRONITE     @ 0214
	.2byte ITEM_HOUNDOOMINITE   @ 0229
	.2byte ITEM_SCEPTILITE      @ 0254
	.2byte ITEM_BLAZIKENITE     @ 0257
	.2byte ITEM_SWAMPERTITE     @ 0260
	.2byte ITEM_GARDEVOIRITE    @ 0282
	.2byte ITEM_GALLADITE       @ 0282
	.2byte ITEM_SABLENITE       @ 0302
	.2byte ITEM_MAWILITE        @ 0303
	.2byte ITEM_AGGRONITE       @ 0306
	.2byte ITEM_MEDICHAMITE     @ 0308
	.2byte ITEM_MANECTITE       @ 0310
	.2byte ITEM_SHARPEDONITE    @ 0319
	.2byte ITEM_CAMERUPTITE     @ 0323
	.2byte ITEM_ALTARIANITE     @ 0334
	.2byte ITEM_BANETTITE       @ 0354
	.2byte ITEM_ABSOLITE        @ 0359
	.2byte ITEM_GLALITITE       @ 0362
	.2byte ITEM_SALAMENCITE     @ 0373
	.2byte ITEM_METAGROSSITE    @ 0376
	pokemartlistend

@ Unused shop that contains Mega Stones for Pokemon not available in Emerald by default
@ Rumored: Chimecho (Hoenn), Absol Z (Hoenn), Staraptor, Garchomp Z, Lucario Z, Golurk, Meowstic, Crabominable, Golisopod, Magearna, Scovillain, Glimmora, Tatsugiri, Baxcalibur
	.align 2
LilycoveCity_DepartmentStore_4F_Pokemart_MegaStonesUnused:
	.2byte ITEM_VENUSAURITE     @ 0003
	.2byte ITEM_CHARIZARDITE_X  @ 0006
	.2byte ITEM_CHARIZARDITE_Y  @ 0006
	.2byte ITEM_BLASTOISINITE   @ 0009
	.2byte ITEM_BEEDRILLITE     @ 0015
	.2byte ITEM_PIDGEOTITE      @ 0018
	.2byte ITEM_NONE            @ 0026 Raichu X (move to regular shop when implemented)
	.2byte ITEM_NONE            @ 0026 Raichu Y (move to regular shop when implemented)
	.2byte ITEM_NONE            @ 0036 Clefable
	.2byte ITEM_NONE            @ 0071 Victreebel
	.2byte ITEM_SLOWBRONITE     @ 0080
	.2byte ITEM_GENGARITE       @ 0094
	.2byte ITEM_STEELIXITE      @ 0095
	.2byte ITEM_KANGASKHANITE   @ 0115
	.2byte ITEM_NONE            @ 0121 Starmie (move to regular shop when implemented)
	.2byte ITEM_SCIZORITE       @ 0123
	.2byte ITEM_AERODACTYLITE   @ 0142 Battle Frontier
	.2byte ITEM_NONE            @ 0149 Dragonite
	.2byte ITEM_MEWTWONITE_X    @ 0150
	.2byte ITEM_MEWTWONITE_Y    @ 0150
	.2byte ITEM_NONE            @ 0154 Meganium (move to Battle Frontier when implemented)
	.2byte ITEM_NONE            @ 0154 Feraligatr (move to Battle Frontier when implemented)
	.2byte ITEM_AMPHAROSITE     @ 0181 Battle Frontier
	.2byte ITEM_NONE            @ 0227 Skarmory (move to regular shop when implemented)
	.2byte ITEM_TYRANITARITE    @ 0248
	.2byte ITEM_NONE            @ 0362 Froslass (move to regular shop when implemented)
	.2byte ITEM_LATIASITE		@ 0380 Battle Frontier
	.2byte ITEM_LATIOSITE		@ 0381 Battle Frontier
	.2byte ITEM_LOPUNNITE       @ 0428
	.2byte ITEM_GARCHOMPITE     @ 0445
	.2byte ITEM_LUCARIONITE     @ 0448
	.2byte ITEM_ABOMASITE       @ 0460
	.2byte ITEM_NONE            @ 0500 Emboar
	.2byte ITEM_NONE            @ 0530 Excadrill
	.2byte ITEM_AUDINITE        @ 0531
	.2byte ITEM_NONE            @ 0545 Scolipede
	.2byte ITEM_NONE            @ 0560 Scrafty
	.2byte ITEM_NONE            @ 0604 Eelektross
	.2byte ITEM_NONE            @ 0609 Chandelure
	.2byte ITEM_NONE            @ 0652 Chesnaught
	.2byte ITEM_NONE            @ 0655 Delphox
	.2byte ITEM_NONE            @ 0658 Greninja
	.2byte ITEM_NONE            @ 0668 Pyroar
	.2byte ITEM_NONE            @ 0670 Floette
	.2byte ITEM_NONE            @ 0687 Malamar
	.2byte ITEM_NONE            @ 0689 Barbaracle
	.2byte ITEM_NONE            @ 0691 Dragalge (move to Battle Frontier when implemented)
	.2byte ITEM_NONE            @ 0701 Hawlucha
	.2byte ITEM_NONE            @ 0718 Zygarde
	.2byte ITEM_DIANCITE        @ 0719
	.2byte ITEM_NONE            @ 0780 Drampa
	.2byte ITEM_NONE            @ 0870 Falinks
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
	.2byte ITEM_TM_ENERGY_BALL
	.2byte ITEM_TM_SUPERCELL_SLAM
	.2byte ITEM_TM_PSYCHIC_FANGS
	.2byte ITEM_TM_DRAGON_PULSE
	.2byte ITEM_TM_DRAIN_PUNCH
	.2byte ITEM_TM_DAZZLING_GLEAM
	.2byte ITEM_TM_SEED_BOMB
	.2byte ITEM_TM_SHADOW_CLAW
	.2byte ITEM_TM_GIGA_IMPACT
	.2byte ITEM_TM_PLAY_ROUGH
	.2byte ITEM_TM_LEECH_LIFE
	.2byte ITEM_TM_STONE_EDGE
	.2byte ITEM_TM_ICICLE_CRASH
	.2byte ITEM_TM_CRUNCH
	.2byte ITEM_TM_DARK_PULSE
	.2byte ITEM_TM_ROCK_SLIDE
	.2byte ITEM_TM_X_SCISSOR
	.2byte ITEM_TM_NIGHT_SLASH
	.2byte ITEM_TM_IRON_HEAD
	.2byte ITEM_TM_POISON_JAB
	.2byte ITEM_TM_AURA_SPHERE
	.2byte ITEM_TM_BUG_BUZZ
	.2byte ITEM_TM_ACROBATICS
	.2byte ITEM_TM_BODY_SLAM
	.2byte ITEM_TM_FLASH_CANNON
	.2byte ITEM_TM_LIQUIDATION
	.2byte ITEM_TM_THUNDER_PUNCH
	.2byte ITEM_TM_FIRE_PUNCH
	.2byte ITEM_TM_ICE_PUNCH
	.2byte ITEM_TM_EARTH_POWER
	.2byte ITEM_TM_AIR_SLASH
	.2byte ITEM_TM_BODY_PRESS
	.2byte ITEM_TM_MOONBLAST
	pokemartlistend

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

