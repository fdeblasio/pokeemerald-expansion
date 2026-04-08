CeladonCity_DepartmentStore_4F_Frlg_MapScripts::
	.byte 0

CeladonCity_DepartmentStore_4F_EventScript_Man::
	msgbox CeladonCity_DepartmentStore_4F_Text_GettingPokeDollAsPresent, MSGBOX_NPC
	end

CeladonCity_DepartmentStore_4F_EventScript_Youngster::
	msgbox CeladonCity_DepartmentStore_4F_Text_CanRunAwayWithPokeDoll, MSGBOX_NPC
	end

CeladonCity_DepartmentStore_4F_EventScript_FloorSign::
	msgbox CeladonCity_DepartmentStore_4F_Text_FloorSign, MSGBOX_SIGN
	end

CeladonCity_DepartmentStore_4F_EventScript_Clerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart CeladonCity_DepartmentStore_4F_Items
	msgbox gText_PleaseComeAgain
	release
	end

	.align 2
CeladonCity_DepartmentStore_4F_Items::
	.2byte ITEM_POKE_DOLL
	.2byte ITEM_RETRO_MAIL
	.2byte ITEM_FIRE_STONE
	.2byte ITEM_THUNDER_STONE
	.2byte ITEM_WATER_STONE
	.2byte ITEM_LEAF_STONE
	.2byte ITEM_FIRE_STONE      @ Kanto: Vulpix, Growlithe, Cubone, Eevee;                Postgame: Growlithe-H;           Unused: Pansear, Capsakid
	.2byte ITEM_WATER_STONE     @ Kanto: Poliwhirl, Shellder, Staryu, Eevee;              Postgame: N/A;                   Unused: Lombre, Panpour
	.2byte ITEM_THUNDER_STONE   @ Kanto: Pikachu, Magneton, Eevee;                        Postgame: N/A;                   Unused: Nosepass, Eelektrik, Charjabug, Tadbulb
	.2byte ITEM_LEAF_STONE      @ Kanto: Gloom, Weepinbell, Exeggcute, Eevee;             Postgame: Voltorb-H;             Unused: Nuzleaf, Pansage, Petilil
	.2byte ITEM_MOON_STONE      @ Kanto: Nidorina, Nidorino, Clefairy, Jigglypuff, Eevee; Postgame: N/A;                   Unused: Skitty, Munna
	.2byte ITEM_SUN_STONE       @ Kanto: Pikachu, Gloom, Exeggcute, Eevee;                Postgame: N/A;                   Unused: Sunkern, Cottonee, Petilil, Helioptile
	.2byte ITEM_SHINY_STONE     @ Kanto: Koffing, Eevee;                                  Postgame: Togetic;               Unused: Roselia, Minccino, Floette
	.2byte ITEM_ICE_STONE       @ Kanto: Mime Jr., Eevee;                                 Postgame: Sandshrew-A, Vulpix-A; Unused: Darumaka-G, Bergmite, Crabrawler, Cetoddle
	.2byte ITEM_LINKING_CORD    @ Kanto: Kadabra, Machoke, Graveler, Haunter;             Postgame: Graveler-A;            Unused: Boldore, Gurdurr, Karrablast, Shelmet, Phantump, Pumpkaboo
	.2byte ITEM_KINGS_ROCK      @ Kanto: Poliwhirl and Slowpoke
	.2byte ITEM_METAL_COAT      @ Kanto: Onix and Scyther
	.2byte ITEM_BLACK_AUGURITE  @ Kanto: Scyther
	.2byte ITEM_DRAGON_SCALE    @ Kanto: Seadra
	.2byte ITEM_PROTECTOR       @ Kanto: Rhydon
	.2byte ITEM_OVAL_STONE      @ Kanto: Happiny
	.2byte ITEM_ELECTIRIZER     @ Kanto: Electabuzz
	.2byte ITEM_MAGMARIZER      @ Kanto: Magmar
	.2byte ITEM_UPGRADE         @ Kanto: Porygon
	.2byte ITEM_DUBIOUS_DISC    @ Kanto: Porygon2
	pokemartlistend

@ Unused shop that contains evo items for Pokemon not available in FRLG by default
	.align 2
CeladonCity_DepartmentStore_4F_Items_Unused:
	.2byte ITEM_DUSK_STONE      @ Trainer Tower;   Postgame: Murkrow, Misdreavus; Unused: Lampent, Doublade
	.2byte ITEM_DAWN_STONE                       @ Unused: Kirlia and Snorunt
	.2byte ITEM_DEEP_SEA_TOOTH                   @ Unused: Clamperl
	.2byte ITEM_DEEP_SEA_SCALE                   @ Unused: Clamperl
	.2byte ITEM_RAZOR_FANG                       @ Unused: Gligar
	.2byte ITEM_RAZOR_CLAW      @ Trainer Tower; Postgame: Sneasel, Sneasel-H
	.2byte ITEM_REAPER_CLOTH                     @ Unused: Dusclops
	.2byte ITEM_PRISM_SCALE                      @ Unused: Feebas
	.2byte ITEM_SACHET                           @ Unused: Spritzee
	.2byte ITEM_WHIPPED_DREAM                    @ Unused: Swirlix
	.2byte ITEM_GALARICA_CUFF   @ Trainer Tower; Postgame: Slowpoke-G
	.2byte ITEM_GALARICA_WREATH @ Trainer Tower; Postgame: Slowpoke-G
	.2byte ITEM_SWEET_APPLE                      @ Unused: Applin
	.2byte ITEM_TART_APPLE                       @ Unused: Applin
	.2byte ITEM_SYRUPY_APPLE                     @ Unused: Applin
	.2byte ITEM_CRACKED_POT                      @ Unused: Sinistea
	.2byte ITEM_CHIPPED_POT                      @ Unused: Sinistea
	.2byte ITEM_METAL_ALLOY                      @ Unused: Duraludon
	.2byte ITEM_SCROLL_OF_DARKNESS               @ Unused: Kubfu
	.2byte ITEM_SCROLL_OF_WATERS                 @ Unused: Kubfu
	.2byte ITEM_PEAT_BLOCK                       @ Unused: Ursaring
	.2byte ITEM_AUSPICIOUS_ARMOR                 @ Unused: Charcadet
	.2byte ITEM_MALICIOUS_ARMOR                  @ Unused: Charcadet
	.2byte ITEM_UNREMARKABLE_TEACUP              @ Unused: Poltchageist
	.2byte ITEM_MASTERPIECE_TEACUP               @ Unused: Poltchageist
	pokemartlistend

CeladonCity_DepartmentStore_4F_Text_GettingPokeDollAsPresent::
	.string "I'm getting a present for my\n"
	.string "girlfriend.\p"
	.string "I guess a Poké Doll will be it.\n"
	.string "It's the popular thing.$"

CeladonCity_DepartmentStore_4F_Text_CanRunAwayWithPokeDoll::
	.string "I heard something useful.\p"
	.string "If a wild Pokémon appears, you can\n"
	.string "distract it with a Poké Doll.\p"
	.string "You can run away while the wild\n"
	.string "Pokémon is distracted.$"

CeladonCity_DepartmentStore_4F_Text_FloorSign::
	.string "Express yourself with gifts!\n"
	.string "4F: Wise Man Gifts\p"
	.string "Evolution Special!\n"
	.string "Element Stones on sale now!$"
