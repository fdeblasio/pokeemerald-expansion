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
- include/config/general.h:
    - Uncomment `//#define NDEBUG`
- include/config/debug.h:
    - #define DEBUG_OVERWORLD_MENU            FALSE
    - #define DEBUG_BATTLE_MENU               FALSE
    - #define DEBUG_POKEMON_SPRITE_VISUALIZER FALSE

## Rebasing
```
upcoming
└─ textDecapitalization
   └─ develop
      └─ All hacks
         └─ Release version
```

## To Do:
### Next playthrough
- Consolidate flags
    - FLAG_HIDE_MT_CHIMNEY_TEAM_AQUA/FLAG_HIDE_MT_CHIMNEY_TEAM_MAGMA, FLAG_DEFEATED_EVIL_TEAM_MT_CHIMNEY
    - FLAG_HIDE_FALLARBOR_AZURILL might be unused
- Get Exp. Share from Steven instead of from Mr. Stone after
    - Or leave it with Mr. Stone so that it's more out of the way to get, and therefore won't be used to break the game
- Include charms? (might go over Key Items amount)
- Clear up trainer spots by having just one set of gym leader rematches?
    - Late-game trainers like Nicolas or John and Jay too
    - Even just reducing to two or three rematches would save space
- Edit contests?/Contests overhaul

### Misc notes (organize later)
- After Cats
    - Set BRENDAN to 1 and MAY to 2 so .gender can just be Rival
        - Maybe set to TRAINER_MON_MALE and TRAINER_MON_FEMALE to be safe
    - Update Brendan/May's scripts to use {RIVAL}
    - Add new variable for Wally and Ralph's names (string_util.c/characters.h/charmap.txt)
    - Turn into COMPOUND_STRINGs
    - Try to get variables for Trainers who reference their Pokemon? Like Numel in Route 113 and Machop in Route 115
    - Zigzagoon variable for Norman lending (used in Trick House)
    - MAUVILLE_TRAINER for IVS(12) and SHOCK_WAVE? Or no custom moves for those trainers. Or make other gym trainers use the TM
    - Hidden Power Kadabras should know Psybeam
    - Seperate Abigail and Benjamin's Magnemites
    - Some Magnemites never occur because 30 is less than REMATCH_2_LEVEL
    - Add Abilities to single ability and TRAINER_MON_NONE to genderless to make more constistent
- Non-grass soot tiles should add to soot sack

### Meta
- More simple modifications: https://www.pokecommunity.com/showthread.php?t=416647&page=1
- Pret wiki tutorials:       https://github.com/pret/pokeemerald/wiki/Tutorials
- Combine two meta files (notes.md and README.md)?
    Include more changes, even if general like Battle Frontier edits
- Consolidate flags
    - FLAG_HIDE_MT_CHIMNEY_TEAM_AQUA/FLAG_HIDE_MT_CHIMNEY_TEAM_MAGMA, FLAG_DEFEATED_EVIL_TEAM_MT_CHIMNEY
    - FLAG_HIDE_FALLARBOR_AZURILL might be unused
- Remove unused code
    - Vanilla code
- Organize changes better
- POSTGAME_LEVEL is set in wild_encounter but is still used for Trick House 8, SS Tidal trainers, and Gym rematches (trainers.h), mass outbreaks (tv.c), Jirachi, Johto starters, postgame legendaries, and Bonsly (scripts.inc)
    - They all probably use species.h but a level number feels out of place there
- Once more changes are made, consolidate commits on develop branch again

### Pokémon
- The events in Sootopolis should set the seen flag for the trio
- Eventually remove RSE and/or BDSP teachable moves?
- Give Zapdos, Tapu Koko, and Kilowattrel Bolt Beak?
- For Egg Groups that share names with types, give moves of that type to Pokémon not of that type in the egg group
    - Egg moves since egg group?
    - Dragon: Dragon Claw/Pulse/Tail/etc. (where applicable)
    - Fairy: Fairy Wind? (Igglybuff, Plusle, Minun, Audino, Hattena, Indeedee, Pikachu, Marill, Shroomish, Skitty, Budew, Snorunt, Cherubi, Phione, Dedenne, Carbink, Togedemaru, Impidimp, Milcery, Falinks, Morpeko, Tandemaus)
    - Bug
    - Flying
    - Grass
    - Water 1/2/3
- Map out progression of low/medium/high power moves for each type/move type and improve level up movesets for more STAB

### Items
- Get Exp. Share from Steven instead of from Mr. Stone after
    - Or leave it with Mr. Stone so that it's more out of the way to get, and therefore won't be used to break the game
- Ideally all SV TMs would be available if the bag was ever expanded greatly
- See if only some bag pockets can show up during battle (Key Items aren't needed in battle, for example)
- Include charms? (might go over Key Items amount)
- Xaman's TM Case: https://www.pokecommunity.com/showpost.php?p=10378278

### Trainers
- Add ORAS team members (like a Picknicker getting a Gulpin)
Now that Gym Leader rematch party size is consistent, maybe a macro can be made
Get rid of Gym Leader rematches needing two Pokemon
- More mugshots for other bosses?
- Readjust wild/trainer levels so that parties aren't overpowered?
- Go back and make rematch levels stronger/more consistent (don't forget to update evolutions)
- Edit Winona's text to change Bird to Flying?
- Clear up trainer spots by having just one set of gym leader rematches?
    - Late-game trainers like Nicolas or John and Jay too
    - Even just reducing to two or three rematches would save space
- Update Elite Four palettes
    - battle_terrain/stadium/palette3-7.pal to better match ypes
- Brendan/May rematches? (Route 103?)
- Steven rematches? (Would be the same team but re-battleable)
    - Could make his flag a daily one?
    - Replace Claydol with a Steel-type?
- Give Winstrates rematches?
- Maybe add Brendan/May/Maxie/Archie/admins/Winstrate rematches in Battle Frontier?
    - Aqua Leaders' signatures hold Deep Sea items (need to find equivalent for Magma. Mega Evo for Houndoom but unsure for Ninetales)
        - Could swap out Huntail for Mega Gyarados and only it and Houndoom get items
- Try to get every Pokémon in Pokédex in at least one rematch?
- Trainer customization:
    - All rematches should have consistent values (gender, IVs (unless maxed but only > level 50), etc.)
    - Calvin could have a good Nature/EV
    - Leaders would have optimal Abilities/EVs/IVs/Natures
    - Add Speed increasing natures to Triathletes
- Use Good Ruby's palette shifting to give trainers more unique looks? (https://github.com/Doesnty/goodruby/commit/ff53bbab592865b49f345342205b41cb869abf27)
- Vito can use TMs
- Gym leaders/Steven/Breeders can have Hidden Abilities

### Moves
- Find way for Rotom to learn special moves by level up (for relearning). Currently have TMs, but not all moves (Hydro Pump/Leaf Storm) are TMs
- Find a way for newer gen TMs to be learned by Pokémon whose base forms don't learn the move (for example Eelektross or Toxtricity; or Capsakid not learning the Fire-type moves that Scovillain does)
    - Remove Snarl and Psychic Noise from Toxtricity's level up learnset once this is implemented
- Nature Power:
    - Nature Power details on summary screen (power/accuracy would be for in-battle status screen only)
        - All moves are special so change category to special (if nothing changes)?
    - Revert some Nature Power moves for a more varied effect (waiting on refactor PR)
    - Have the inside of Mt. Pyre use Burial Ground terrain?
- Just make new tutors in towns or Battle Frontier
- Update local Porymoves for automatic movepool updates (similar to Hail/Snowscape)
    - Any Pokémon that learns Drill Peck should learn Drill Run
    - Any Pokémon that can learn Flash Cannon should learn Dazzling Gleam and vice versa?
        - Any Pokémon that learns Power Gem should learn both?
    - Any Pokémon that learns a biting move, should also learn a STAB version (for example, Eelektrik learning Crunch but not Thunder Fang)
    - Any Pokémon that learns a horn move (Horn Attack, Megahorn, Smart Strike, etc), can learn them all?
- Possible Move Updates:
    - Infestation: 20->35
    - Parabolic Charge: 65->75
    - Poison Sting: 20->40
    - Poison Fang: 60->65
    - Shadow Punch: 60->75?
        - Would need Ghost-type never miss replacement

### Field Moves
- Edit moves that work in field
    - Maybe edit so instead of "if has move" to "if can learn move"
        - Might not be simple since it's .inc and not C
    - Cut (only in Trick House):
        - Moves boosted by Sharpness
    - Strength (only in Trick House):
        - Superpower?
        - Close Combat?
- Make Fly usuable after 2nd badge? Or maybe even aftering delivering goods in Slateport?
- Fly to routes:
    - Route 103: Altering Cave
    - Route 110: Trick House or New Mauville
    - Route 128: Where Steven flies to?

### Overworld
- Make both parts of Shoal Cave always accessible?
- Add accurate overworld sprites (https://github.com/pret/pokeemerald/wiki/Adding-new-event-object-or-overworld-sprites, https://www.pokecommunity.com/showthread.php?t=407124)
    - Overworld sprites to match trainer sprites (for example, Rangers red clothes, Dragon Tamers capes and correct hair color, or Rich Boys correct clothes and hair color)
- Add FRLG trainer sprites/overworld sprites
    - Sprites are added but still need to be implemented. Overworld sprites may have duplicates for Pokémon and may need palettes
- Replace Pokémon overworld sprites with follower sprites
    - Poochyena chasing Birch?
    - Bonsly?
    - Mew?
- Combine Centers and Marts?
    - Use left wall where escalators used to be
    - Tileset doesn't seem to support it

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
- Updated Battle Pyramid wild randomizer?
- Battle Pike
    - Change Kirlia and Dusclops to fit the type of move used?

### Other
- Try to get Verdanturf grass to start Grassy Terrain instead of messing with weather
    - MB_SHORT_GRASS but unsure of what else uses that
- Might need to increase MAX_LEVEL_UP_MOVES and/or MAX_RELEARNER_MOVES
- Update palettes?:
    - Pokédex (and HGSS Pokédex)
    - look in graphics/ for more
    - Trainer card
- Type effectiveness in battle: https://www.pokecommunity.com/showpost.php?p=10167016&postcount=83
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
        - Something like this but for U32? #define COMPOUND_U16(file) (const u16[]) INCBIN_U16(file)
- Contests overhaul

### Big changes from Vanilla - low priority
- Remove IVs? Maybe make boolean for either 0 or 31 added to stat
    - Would need to figure out Hidden Power
- Beach sand has sunny weather? Or maybe just some routes with it like 109
- Make seperate Pokédex for post-game similar to SwSh DLC Pokédexes?
- Fire Blast/Hydro Pump/Stone Edge accurate in respective weathers?
    - Make Thunder also accurate in Electric Terrain?
- Calculate Electro Ball more similarly to Gyro Ball?
- Make Water Veil also up evasion like Sand Veil?
- Species-specific move effects? (maybe look at code for Diglett immunity to Telekinesis):
    - Hypnosis always hits if Hypno is using it
    - Smack Down is super effective if a Tinkaton uses it against Corviknight
    - Drilbur line Drill Run
- Edit Slot odds (SLOT_MACHINE_)? Even though there's only three prizes?
- Add Pokémon with dolls? (Togepi, Smoochum, Clefairy, Lapras, Snorlax, Venusaur, Charizard, Blastoise)
- Add in Hoenn Pokédex regionals? (currently postgame Safari Zone)
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
