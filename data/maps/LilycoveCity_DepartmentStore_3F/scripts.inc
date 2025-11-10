LilycoveCity_DepartmentStore_3F_MapScripts::
	.byte 0

LilycoveCity_DepartmentStore_3F_EventScript_ClerkLeft::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart LilycoveCity_DepartmentStore_3F_Pokemart_EVs
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
LilycoveCity_DepartmentStore_3F_Pokemart_EVs:
	.2byte ITEM_HP_UP
	.2byte ITEM_PROTEIN
	.2byte ITEM_IRON
	.2byte ITEM_CALCIUM
	.2byte ITEM_ZINC
	.2byte ITEM_CARBOS
	.2byte ITEM_POMEG_BERRY
	.2byte ITEM_KELPSY_BERRY
	.2byte ITEM_QUALOT_BERRY
	.2byte ITEM_HONDEW_BERRY
	.2byte ITEM_GREPA_BERRY
	.2byte ITEM_TAMATO_BERRY
	.2byte ITEM_X_ATTACK
	.2byte ITEM_X_DEFENSE
	.2byte ITEM_X_SP_ATK
	.2byte ITEM_X_SP_DEF
	.2byte ITEM_X_SPEED
	.2byte ITEM_X_ACCURACY
	.2byte ITEM_DIRE_HIT
	.2byte ITEM_GUARD_SPEC
	.2byte ITEM_ENERGY_POWDER
	.2byte ITEM_ENERGY_ROOT
	.2byte ITEM_HEAL_POWDER
	.2byte ITEM_REVIVAL_HERB
	pokemartlistend

LilycoveCity_DepartmentStore_3F_EventScript_ClerkMints::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart LilycoveCity_DepartmentStore_3F_Pokemart_Mints
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
LilycoveCity_DepartmentStore_3F_Pokemart_Mints:
	.2byte ITEM_ABILITY_CAPSULE
	.2byte ITEM_ABILITY_PATCH
	.2byte ITEM_ADAMANT_MINT
	.2byte ITEM_MODEST_MINT
	.2byte ITEM_JOLLY_MINT
	.2byte ITEM_TIMID_MINT
	.2byte ITEM_IMPISH_MINT
	.2byte ITEM_BOLD_MINT
	.2byte ITEM_CALM_MINT
	.2byte ITEM_CAREFUL_MINT
	.2byte ITEM_SERIOUS_MINT
	.2byte ITEM_LONELY_MINT
	.2byte ITEM_NAUGHTY_MINT
	.2byte ITEM_BRAVE_MINT
	.2byte ITEM_LAX_MINT
	.2byte ITEM_RELAXED_MINT
	.2byte ITEM_MILD_MINT
	.2byte ITEM_RASH_MINT
	.2byte ITEM_QUIET_MINT
	.2byte ITEM_GENTLE_MINT
	.2byte ITEM_SASSY_MINT
	.2byte ITEM_HASTY_MINT
	.2byte ITEM_NAIVE_MINT
	pokemartlistend

LilycoveCity_DepartmentStore_3F_EventScript_ClerkEvo::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart LilycoveCity_DepartmentStore_3F_Pokemart_Evo
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
LilycoveCity_DepartmentStore_3F_Pokemart_Evo:
	.2byte ITEM_FIRE_STONE        @ Hoenn: Vulpix, Growlithe, Growlithe-H, Eevee, Pansear
	.2byte ITEM_WATER_STONE       @ Hoenn: Eevee, Lombre, Panpour                                                       National: Poliwhirl, Shellder
	.2byte ITEM_THUNDER_STONE     @ Hoenn: Pikachu, Magneton, Eevee, Nosepass, Tadbulb;                                 National: Eelektrik
	.2byte ITEM_LEAF_STONE        @ Hoenn: Weepinbell, Eevee, Nuzleaf, Pansage;                                         National: Voltorb-H
	.2byte ITEM_MOON_STONE        @ Hoenn: Jigglypuff, Clefairy, Eevee
	.2byte ITEM_SUN_STONE         @ Hoenn: Pikachu, Eevee, Sunkern
	.2byte ITEM_DUSK_STONE        @ Hoenn: Murkrow, Lampent
	.2byte ITEM_SHINY_STONE       @ Hoenn: Koffing, Eevee, Togetic, Roselia
	.2byte ITEM_DAWN_STONE        @ Hoenn: Kirlia, Snorunt
	.2byte ITEM_ICE_STONE         @ Hoenn: Vulpix-A, Mime Jr,, Eevee;                                                   National: Sandshrew-A
	.2byte ITEM_LINKING_CORD      @ Hoenn: Kadabra, Machoke, Graveler, Haunter, Boldore, Karrablast, Shelmet, Phantump; National: Graveler-A
	.2byte ITEM_KINGS_ROCK        @ Hoenn: Slowpoke                                                                     National: Poliwhirl
	.2byte ITEM_METAL_COAT        @ Hoenn: Scyther
	.2byte ITEM_BLACK_AUGURITE    @ Hoenn: Scyther
	.2byte ITEM_PROTECTOR         @ Hoenn: Rhydon
	.2byte ITEM_RAZOR_FANG        @ Hoenn: Gligar
	.2byte ITEM_OVAL_STONE        @ Hoenn: Happiny
	.2byte ITEM_PRISM_SCALE       @ Hoenn: Feebas
	.2byte ITEM_WHIPPED_DREAM     @ Hoenn: Swirlix
	.2byte ITEM_AUSPICIOUS_ARMOR  @ Hoenn: Charcadet
	.2byte ITEM_MALICIOUS_ARMOR   @ Hoenn: Charcadet
	.2byte ITEM_METAL_ALLOY       @ Hoenn: Duraludon
	pokemartlistend

@ Unused shop that contains evo items for Pokemon not available in Emerald by default
	.align 2
LilycoveCity_DepartmentStore_3F_Pokemart_EvoUnused:
	.2byte ITEM_UPGRADE
	.2byte ITEM_DUBIOUS_DISC
	.2byte ITEM_RAZOR_CLAW      @ Battle Frontier  National: Sneasel, Sneasel-H
	.2byte ITEM_ELECTIRIZER		@ Battle Frontier  National: Electabuzz
	.2byte ITEM_MAGMARIZER		@ Battle Frontier  National: Magmar
	.2byte ITEM_DRAGON_SCALE    @ Battle Frontier  National: Seadra
	.2byte ITEM_SACHET          @ Battle Frontier  National: Spritzee
	.2byte ITEM_GALARICA_CUFF   @ Battle Frontier  National: Slowpoke-G
	.2byte ITEM_GALARICA_WREATH @ Battle Frontier  National: Slowpoke-G
	.2byte ITEM_SWEET_APPLE
	.2byte ITEM_TART_APPLE
	.2byte ITEM_SCROLL_OF_DARKNESS
	.2byte ITEM_SCROLL_OF_WATERS
	.2byte ITEM_PEAT_BLOCK		@ Battle Frontier  National: Ursaring
	pokemartlistend

LilycoveCity_DepartmentStore_3F_EventScript_ClerkRight::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart LilycoveCity_DepartmentStore_3F_Pokemart_Delibird
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
LilycoveCity_DepartmentStore_3F_Pokemart_Delibird:
	.2byte ITEM_LEFTOVERS
	.2byte ITEM_CHOICE_BAND
	.2byte ITEM_CHOICE_SPECS
	.2byte ITEM_CHOICE_SCARF
	.2byte ITEM_SMOKE_BALL
	.2byte ITEM_BIG_ROOT
	.2byte ITEM_ROCKY_HELMET
	.2byte ITEM_EVIOLITE
	.2byte ITEM_ASSAULT_VEST
	.2byte ITEM_DESTINY_KNOT
	.2byte ITEM_TOXIC_ORB
	.2byte ITEM_FLAME_ORB
	.2byte ITEM_BLACK_SLUDGE
	.2byte ITEM_SOOTHE_BELL
	.2byte ITEM_SHELL_BELL
	.2byte ITEM_SCOPE_LENS
	.2byte ITEM_WIDE_LENS
	.2byte ITEM_ZOOM_LENS
	.2byte ITEM_METRONOME
	.2byte ITEM_PUNCHING_GLOVE
	.2byte ITEM_LOADED_DICE
	.2byte ITEM_MIRROR_HERB
	pokemartlistend

LilycoveCity_DepartmentStore_3F_EventScript_TriathleteM::
	msgbox LilycoveCity_DepartmentStore_3F_Text_ItemsBestForTougheningPokemon, MSGBOX_NPC
	end

LilycoveCity_DepartmentStore_3F_EventScript_PokefanM::
	msgbox LilycoveCity_DepartmentStore_3F_Text_WantMoreEndurance, MSGBOX_NPC
	end

LilycoveCity_DepartmentStore_3F_EventScript_Woman::
	msgbox LilycoveCity_DepartmentStore_3F_Text_GaveCarbosToSpeedUpMon, MSGBOX_NPC
	end

LilycoveCity_DepartmentStore_3F_Text_ItemsBestForTougheningPokemon:
	.string "For quickly toughening up Pokémon,\n"
	.string "items are the best.\p"
	.string "Protein boosts Attack,\n"
	.string "and Calcium raises Sp. Atk.$"

LilycoveCity_DepartmentStore_3F_Text_WantMoreEndurance:
	.string "I want my Pokémon to have more\n"
	.string "endurance.\p"
	.string "I'm trying to decide whether to raise\n"
	.string "Defense with Iron, or Sp. Def with Zinc.$"

LilycoveCity_DepartmentStore_3F_Text_GaveCarbosToSpeedUpMon:
	.string "I gave a Carbos to my Pokémon,\n"
	.string "and its Speed went up.$"

