## Helpful things
```
Find/replace:
(_\("[A-Z])([A-Z\.é':]+"\))
(["\- ][A-Z])([A-Z][A-Zé']+)
$1\L$2

Merge conflicts:
<<<<<<< HEAD
((.*\n)*?)=======
((.*\n)*?)>>>>>>>.*\n
$1

Debugging (https://cplusplus.com/reference/cstdio/printf/):
MgbaPrintf(MGBA_LOG_WARN, "XYZ: %d", mod);

255 0 0
0 255 0
0 0 255
255 255 0
255 0 255
0 255 255
```

## For release:
- include/config.h:
    - Uncomment `//#define NDEBUG`
- include/config/debug.h:
    - #define DEBUG_OVERWORLD_MENU            FALSE
    - #define DEBUG_BATTLE_MENU               FALSE
    - #define DEBUG_POKEMON_MENU              FALSE

## Rebasing
```
upcoming
└─ textDecapitalization
   └─ develop
      └─ All hacks
```

## To Do:
### Meta
- More simple modifications: https://www.pokecommunity.com/showthread.php?t=416647&page=1
- Pret wiki tutorials:       https://github.com/pret/pokeemerald/wiki/Tutorials
- Combine two meta files (notes.md and README.md)?
    Include more changes, even if general like Battle Frontier edits
- Before a new game, put Trainer numbers in order
- Rearrange wild_encounters.json to be in order
- Consolidate flags
    - FLAG_DEFEATED_MAUVILLE_GYM, FLAG_BADGE03_GET, FLAG_HIDE_MAUVILLE_ROCK_SMASH_TIP_GUY
    - FLAG_HIDE_MT_CHIMNEY_TEAM_AQUA/FLAG_HIDE_MT_CHIMNEY_TEAM_MAGMA
- Remove unused code
    - Vanilla code
    - Move tutor flags since they're now infinite
- Organize changes better

### Pokémon
- Eventually remove RSE and/or BDSP teachable moves
- Give Espeon Power Gem on level up or evolution?
- Give Zapdos, Tapu Koko, and Kilowattrel Bolt Beak?
- Edit Surskit mass outbreak?
- Map out progression of low/medium/high power moves for each type/move type and improve level up movesets for more STAB
- Remove Safari Zone?
    - Move Solar Beam to Lilycove Department Store
    - Pichu: New Mauville
    - Natu: Route 111?
    - Phanpy: Route 111?
    - Psyduck: Various ponds
    - Wynaut: Make Mirage Island permanent?
    - Heracross/Pinsir: Route 119?
    - Girafarig: Route 120?
    - Doduo: ???
    - Rhyhorn: ???
    - Mareep/Gligar/Sunkern/Snubbull/Stantler/Spinarak/Hoothoot/Wooper/Remoraid/Teddiursa/Shuckle/Pineco/Aipom/Miltank/Ledyba: Remove?
- Add in some Vega evolutions?
    - Adnokana
    - Cheauking
    - Sandrill
    - Ranconette/Manneking
    - Valentide
    - Galavagos
    - Auldsparce
    - R'duckulus
    - Sableater/Gehemoth (as seperate)
    - Ledybulk
    - Rougella/Heilareina
    - Pachirikku

### Items
- Get Exp. Share from Steven instead of from Mr. Stone after
    - Or leave it with Mr. Stone so that it's more out of the way to get, and therefore won't be used to break the game
- Ideally all SV TMs would be available if the bag was ever expanded greatly
- See if only some bag pockets can show up during battle (Key Items aren't needed in battle, for example)
- Include charms?
- Xaman's TM Case: https://www.pokecommunity.com/showpost.php?p=10378278

### Trainers
- Battle Archie at Oceanic Museum?
- Give grunts consistent teams/genders?
    - Give them names?
- More mugshots for other bosses?
- Readjust wild/trainer levels so that parties aren't overpowered?
- Go back and make rematch levels stronger/more consistent (don't forget to update evolutions)
    - Figure out intermittent rematch levels (for example rematch 2 levels for trainers after Petalburg or rematch 2/3 levels for trainers after Fortree)
- Edit Winona's text to change Bird to Flying?
- Elite Four rematches (wouldn't need to use Match Call, could probably do if statement in scripts.inc)
- 6th rematches for trainers post-Elite Four? (Might not work due to running out of trainer space)
- Update Elite Four palettes
    - battle_transitions/*_bg.pal to better match types
    - stadium/palette3-7.pal to better match ypes
- Brendan/May rematches? (Route 103?)
- Steven rematches? (Would be the same team but re-battleable)
- Give Winstrates rematches?
- Maybe add Brendan/May/Maxie/Archie/admins/Winstrate rematches in Battle Frontier?
    - Aqua Leaders' signatures hold Deep Sea items (need to find equivalent for Magma. Mega Evo for Houndoom but unsure for Ninetales)
        - Could swap out Huntail for Mega Gyarados and only it and Houndoom get items
- Try to get every Pokemon in Pokedex in at least one rematch?
- Trainer customization:
    - All rematches should have consistent values (gender, IVs (unless maxed but only > level 50), etc.)
    - Calvin could have a good Nature/EV
    - Leaders would have optimal Abilities/EVs/IVs/Natures
    - Add Speed increasing natures to Triathletes
- Use Good Ruby's palette shifting to give trainers more unique looks? (https://github.com/Doesnty/goodruby/commit/ff53bbab592865b49f345342205b41cb869abf27)
- Psychics can use Psyduck, Golduck, and Farigiraf now
    - Update Mossdeep Gym if there are duplicates of other Pokemon
- Vito can use TMs
- Gym leaders/Steven/Breeders can have Hidden Abilities

### Moves
- Remove egg moves that are part of level up learnsets
- Just make new tutors in towns
- TMs/Tutors
    - Hyper Voice tutor->TM?
    - Temper Flare (with better STAB distribution)
    - Drill Run (remove it from new level up learnsets)
    - Aqua Tail since it now has 100% accuracy
- Possible Move Updates:
    - Infestation: 20->35
    - Parabolic Charge: 65->75
    - Poison Sting: 20->40
    - Poison Fang: 60->65

### Field Moves
- Replace Waterfall with an item, similar to Dive
- Edit moves that work in field
    - Maybe edit so instead of "if has move" to "if can learn move"
        - Might not be simple since it's .inc and not C
    - Cut (only in Trick House):
        - Moves boosted by Sharpness
    - Strength (only in Trick House and Seafloor Cavern):
        - Superpower?
        - Close Combat?
- Make Fly usuable after 2nd badge? Or maybe even aftering delivering goods in Slateport?
- Fly to routes:
    - Route 110: Trick House or New Mauville
    - Route 121: Safari Zone (if not removed)
    - Route 128: Where Steven flies to?

### Overworld
- Edit local Porymaps to avoid file formats being edited
- Add accurate overworld sprites (https://github.com/pret/pokeemerald/wiki/Adding-new-event-object-or-overworld-sprites, https://www.pokecommunity.com/showthread.php?t=407124)
    - Overworld sprites to match trainer sprites (for example, Rangers red clothes, Dragon Tamers capes and correct hair color, or Rich Boys correct clothes and hair color)
- Add FRLG trainer sprites/overworld sprites
    - Sprites are added but still need to be implemented. Overworld sprites may have duplicates for Pokémon and may need palettes
- Replace Pokémon overworld sprites with follower sprites
- Combine Centers and Marts?

### Battle Frontier
- Battle Tent Pokémon/EVs?
- Make pausing challenge not a soft save (CHALLENGE_STATUS_SAVING)
- Update rest of apprentice teams
- Pokémon
    - EVs
    - Moves
- Give BP after every battle?
- Do better with saving/resting
- Remove level 50? Or remove Open Level but lower Pokémon to level 50 if over?
- See if Poke Ball issue no longer occurs on a clean save
- Edit Battle Frontier messages for Fairy?
- Add new Pokémon to Frontier mons?
- Make teams more accurate to trainer classes?
- Make resting not a soft save (CHALLENGE_STATUS_SAVING)
- Make retiring not reset streak
    - Perhaps combine the two to take a pause like in SwSh
- Battle Tower
    - Apprentices
- Battle Factory
    - Add new moves to moveStyles (sRequiredMoveCounts)
    - Don't have both Open Level and Level 50 since the Pokémon are rentals anyways?
- Updated Battle Pyramid wild randomizer

### Other
- Railroad the post-Mossdeep water routes
- Try to get Verdanturf grass to start Grassy Terrain instead of messing with weather
    - MB_SHORT_GRASS but unsure of what else uses that
- Might need to increase MAX_LEVEL_UP_MOVES and/or MAX_RELEARNER_MOVES
- Update palettes?:
    - Pokédex (and HGSS Pokédex)
    - look in graphics/ for more
    - Trainer card
- Type effectiveness in battle: https://www.pokecommunity.com/showpost.php?p=10167016&postcount=83
- Add Hyper Training (Battle Frontier stats judge could do so)
- Get rid of low health constant beeping (https://www.pokecommunity.com/showpost.php?p=10246778&postcount=194)
- Add more EXP Candy
- PC in menu
    - Look at debug menu or at https://www.pokecommunity.com/showpost.php?p=10127351&postcount=47
    - Set OW_PC_HEAL to GEN_LATEST
- Add relearning moves to PC?
- More save space editing
    - Medicine Pocket?
    - See if it's possible to give item PC and decoration PC have more room
- Get PokeNav to work indoors?
    - Stop trainers from calling you shortly after loading the game
- Edit contests?
- Stop daycare from deleting moves
- Simplify Walda codes?
- Get all the weird Mauville men at once?
- Update Favor Lady's items to include new items
- Add 3 other Regis?
    - Add Regigigas to Sealed Chamber?
    - Regieleki near New Mauville?
    - Regidrago near Meteor Falls?
    - Edit Pacifidlog house text
- Diversify water routes instead of just Tentacool/Wingull (definitely add more Carvanha, especially around Team Aqua-related areas; bring some fishing encounters to Surf)
- Add postgame Pokémon to Hoenn Pokédex? National Pokédex is useless due to no connectivity with other games
    - Johto starters need Hoenn Pokédex completed to get, but could have them act similarly to Jirachi/Deoxys
    - Could remove handing out of National Pokédex entirely, would need to see what checks if the National Pokédex exists (like Birch Lab state for Johto)
    - Now that Frontier mons are registered in the Pokédex, the National Pokédex is a bit less useless
- In game trades
- Edit max money?
- Debug menu improvements
- Make inserting trainer sprites easier?
    - Wrapper for src/data/graphics/trainers.h?
- Contests overhaul

### Big changes from Vanilla - low priority
- Remove IVs? Maybe make boolean for either 0 or 31 added to stat
    - Would need to figure out Hidden Power
- Make seperate Pokédex for post-game similar to SwSh DLC Pokédexes (include Outbreaks like Elekid)?
- Fire Blast/Hydro Pump/Stone Edge accurate in respective weathers?
    - Make Thunder also accurate in Electric Terrain?
- Calculate Electro Ball more similarly to Gyro Ball?
- Make Water Veil also up evasion like Sand Veil?
- Species-specific move effects?:
    - Hypnosis always hits if Hypno is using it
    - Smack Down is super effective if a Tinkaton uses it against Corviknight
- Edit Slot odds (SLOT_MACHINE_)? Even though there's only three prizes?
- Add Pokémon with dolls? (Togepi, Smoochum, Clefairy, Lapras, Snorlax, Venusaur, Charizard, Blastoise)
- Add in Hoenn Pokédex regionals?
    - Sun/Shiny Stone for Alolan Raichu
    - Alolan Sandshrew/Vulpix at Shoal Cave
    - Alolan Muk
    - Shiny/Dawn Stone for Galarian Weezing
    - Cursola
    - Obstagoon
    - Hisui Voltorb
    - Post-game:
        - Alolan Meowth
        - Galarian Meowth
        - Paldean Wooper
    - Update level up/learnable movesets for them
    - Sandslash, Ninetales, Cursola, and maybe Obstagoon can be used to diversify the Elite Four teams

## Future hacks
- All Yellow Pokémon:
    - Yellow shinies (Lickitung, Altaria, Luxray, Bellibolt, etc) replacing the regular palette
        - Change Pokédex colors to match
    - Give trainer mugshot yellow palette if possible (replace Wallace's yellow with something else)
    - Replace green with yellow on player sprites?
    - If not enough, could also add black (Charmander line would have shiny palettes as they're both yellow and black)
- Tropical:
    - Tropius, Bellossom, Pau Oricorio, Tsareena, probably a lot of Alolan Pokémon, both forms of Exeggutor (Sun Stone for Alolan)
