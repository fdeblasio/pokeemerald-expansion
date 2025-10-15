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
	.2byte ITEM_FIRE_STONE      @ Hoenn: Vulpix;                      National: N/A,        Unused: Growlithe, Growlithe-H, Cubone, Eevee, Pansear, Capsakid
	.2byte ITEM_WATER_STONE     @ Hoenn: Staryu, Lombre;              National: N/A;        Unused: Poliwhirl, Shellder, Eevee, Panpour
	.2byte ITEM_THUNDER_STONE   @ Hoenn: Pikachu, Magneton, Nosepass; National: N/A;        Unused: Eevee, Eelektrik, Charjabug, Tadbulb
	.2byte ITEM_LEAF_STONE      @ Hoenn: Gloom, Nuzleaf;              National: Voltorb-H;  Unused: Weepinbell, Exeggcute, Eevee, Pansage, Petilil
	.2byte ITEM_MOON_STONE      @ Hoenn: Jigglypuff, Skitty;          National: N/A;        Unused: Nidorina, Nidorino, Clefairy, Eevee, Munna
	.2byte ITEM_SUN_STONE       @ Hoenn: Pikachu, Gloom;              National: Sunkern;    Unused: Exeggcute, Eevee, Cottonee, Petilil, Helioptile
	.2byte ITEM_SHINY_STONE     @ Hoenn: Koffing, Roselia;            National: Togetic;    Unused: Eevee, Minccino, Floette
	.2byte ITEM_DAWN_STONE      @ Hoenn: Kirlia and Snorunt
	.2byte ITEM_LINKING_CORD    @ Hoenn: Kadabra, Machoke, Graveler;  National: Graveler-A; Unused: Haunter, Boldore, Gurdurr, Karrablast, Shelmet, Phantump, Pumpkaboo
	.2byte ITEM_DRAGON_SCALE    @ Hoenn: Seadra
	.2byte ITEM_DEEP_SEA_TOOTH  @ Hoenn: Clamperl
	.2byte ITEM_DEEP_SEA_SCALE  @ Hoenn: Clamperl
	.2byte ITEM_REAPER_CLOTH    @ Hoenn: Dusclops
	.2byte ITEM_PROTECTOR       @ Hoenn: Rhydon
	.2byte ITEM_PRISM_SCALE     @ Hoenn: Feebas
	pokemartlistend

@ Unused shop that contains evo items for Pokemon not available in Emerald by default
	.align 2
LilycoveCity_DepartmentStore_3F_Pokemart_EvoUnused:
	.2byte ITEM_DUSK_STONE                                       @ Unused: Murkrow, Misdreavus, Lampent, Doublade
	.2byte ITEM_ICE_STONE       @ Battle Frontier;                 National: Sandshrew-A, Vulpix-A; Unused: Mr. Mime-A, Eevee, Darumaka-G, Bergmite, Crabrawler, Cetoddle
	.2byte ITEM_KINGS_ROCK      @ Battle Frontier as battle item   Unused: Poliwhirl and Slowpoke
	.2byte ITEM_METAL_COAT                                       @ Unused: Onix and Scyther
	.2byte ITEM_BLACK_AUGURITE                                   @ Unused: Scyther
	.2byte ITEM_UPGRADE                                          @ Unused: Porygon
	.2byte ITEM_DUBIOUS_DISC                                     @ Unused: Porygon2
	.2byte ITEM_RAZOR_FANG      @ Battle Frontier                  National: Gligar
	.2byte ITEM_RAZOR_CLAW      @ Battle Frontier                  National: Sneasel, Sneasel-H
	.2byte ITEM_ELECTIRIZER     @ Battle Frontier                  National: Electabuzz
	.2byte ITEM_MAGMARIZER      @ Battle Frontier                  National: Magmar
	.2byte ITEM_OVAL_STONE      @ Battle Frontier                  National: Happiny
	.2byte ITEM_SACHET                                           @ Unused: Spritzee
	.2byte ITEM_WHIPPED_DREAM                                    @ Unused: Swirlix
	.2byte ITEM_GALARICA_CUFF                                    @ Unused: Slowpoke-G
	.2byte ITEM_GALARICA_WREATH                                  @ Unused: Slowpoke-G
	.2byte ITEM_SWEET_APPLE                                      @ Unused: Applin
	.2byte ITEM_TART_APPLE                                       @ Unused: Applin
	.2byte ITEM_SYRUPY_APPLE                                     @ Unused: Applin
	.2byte ITEM_CRACKED_POT                                      @ Unused: Sinistea
	.2byte ITEM_CHIPPED_POT                                      @ Unused: Sinistea
	.2byte ITEM_METAL_ALLOY                                      @ Unused: Duraludon
	.2byte ITEM_SCROLL_OF_DARKNESS                               @ Unused: Kubfu
	.2byte ITEM_SCROLL_OF_WATERS                                 @ Unused: Kubfu
	.2byte ITEM_PEAT_BLOCK      @ Battle Frontier                  National: Ursaring
	.2byte ITEM_AUSPICIOUS_ARMOR                                 @ Unused: Charcadet
	.2byte ITEM_MALICIOUS_ARMOR                                  @ Unused: Charcadet
	.2byte ITEM_UNREMARKABLE_TEACUP                              @ Unused: Poltchageist
	.2byte ITEM_MASTERPIECE_TEACUP                               @ Unused: Poltchageist
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

