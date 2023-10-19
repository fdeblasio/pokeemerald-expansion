## Find/Replace help
```
(_\("[A-Z])([A-Z\.é':]+"\))
(["\- ][A-Z])([A-Z][A-Zé']+)
$1\L$2
```

## Rebasing
```
upcoming
└─ textDecapitalization
   └─ develop
      └─ All hacks
```

## Known Bugs
- #000 ?????????? sometimes shows up at the end of the Pokédex
- When using items, the text box will be empty at the end. This is caused by some of the code changes from speeding up the text
- Items in the Battle Pyramid's Battle Bag/held items in the Battle Pike are turning into Poke Balls
    - Seems to happen after trainer battles?
    - This occurs even with the Battle Frontier changes reverted
- AI_FLAG_ACE_POKEMON didn't seem to work
- Unburden may not work?
- HGSS Dex (currently disabled):
    - TMs don't line up
    - Shows evolutions multiple times
    - Dark mode not implemented
- Move relearner option in menu sometimes selects different Pokémon when finished
- gBattleTextBuff3 causes the build to fail unless reverted from `TEXT_BUFF_ARRAY_COUNT + 13` to `30`

## To Do:
- Update teachable moves to match Indigo Disk
    - Figure out a way to mass update of both level up and teachable moves (PoryMoves has slightly different syntax for some forms)
- Stay on EVs/IVs when switching Pokémon
- Add Fly to start menu instead?
- Nasty Plot tutor->TM?
- Hyper Voice TM? (who even needs Gyro Ball?)
- Edit moves that work in field
    - Maybe edit so instead of "if has move" to "if can learn move"
        - Might not be simple since it's .inc and not C
        - Would really help with Surf, though
    - Cut (only in Trick House):
        - Moves boosted by Sharpness
    - Strength (only in Trick House and Seafloor Cavern):
        - Superpower?
        - Close Combat?
- More save space editing
    - Medicine Pocket?
    - See if it's possible to give item PC and decoration PC have more room
- See if only some bag pockets can show up during battle (Key Items aren't needed in battle, for example)
- Include charms?
- Remove all PP Ups/Maxes due to moves having max PP by default
- Double-check Mirage Island
- Combine changes and README?
    Include more changes, even if general like Battle Frontier edits
- Might need to increase MAX_LEVEL_UP_MOVES and/or MAX_RELEARNER_MOVES
- Battle Frontier
    - Make pausing challenge not a soft save (CHALLENGE_STATUS_SAVING)
    - Update rest of apprentice teams
- https://www.pokecommunity.com/showthread.php?t=416647&page=1
- https://github.com/pret/pokeemerald/wiki/Tutorials
- https://www.pokecommunity.com/showpost.php?p=10378278
- https://github.com/pret/pokeemerald/wiki/Set-Up-Item-Balls-on-a-Map-Without-Needing-New-Scripts
- https://www.pokecommunity.com/showpost.php?p=10127351&postcount=47
- https://www.pokecommunity.com/showpost.php?p=10167016&postcount=83
- Overworld sprites to match trainer sprites (for example, giving Youngsters yellow shirts, girl tubers a yellow tube, Rangers red clothes, Dragon Tamers capes and correct hair color)
- Improve Pokémon overworld sprites
- Try to find Bolts foreground of Walda PC
- Debug menu improvements
- Battle Tent Pokémon/EVs?
- Edit friendship evolution methods
- Get all the weird Mauville men at once?
- Update Favor Lady's items to include new items
- Implement Deoxys encounter at island/changing forms at Fallarbor
- Give Espeon Power Gem on level up or evolution?
- Edit Slot odds (SLOT_MACHINE_)? Even though there's only three prizes?
- Add Hyper Training
- Once Mints are implemented, in Lilycove 3F, move X items to left clerk and make right clerk Mints
    - Or move Mints to left too and have left be Chansey, right be Delibird
- Get rid of low health constant beeping (https://www.pokecommunity.com/showpost.php?p=10246778&postcount=194)
- Elite Four rematches (wouldn't need to use Match Call, could probably do if statement in scripts.inc)
- Replace ifdefs for move stats with just one set of stats?
- Add EXP Candy
- Go back and make rematch levels stronger/more consistent (first see if they can be locked behind badges)
- Type effectiveness in battle
- PC in menu (look at debug menu)
- TM Case?
- Get PokeNav to work indoors?
    - Stop trainers from calling you shortly after loading the game
- Edit rest out mass outbreaks
    - Maractus/Sandile in Route 111? Would be first time expanding past Gens 1-3 + evos
- Edit contests?
- Stop daycare from deleting moves
- Add relearning moves to PC?
- Remove unused code
- Pokémon in Frontier/Trainer Hill should be registered in Dex
- Update Shiftry's Hidden Ability to Wind Rider
- Add accurate overworld sprites (https://github.com/pret/pokeemerald/wiki/Adding-new-event-object-or-overworld-sprites, https://www.pokecommunity.com/showthread.php?t=407124)
- DON'T USE DEBUG MENU FOR FLYING. Test to see if without it, Fly Flags are set correctly
    - Maybe use makeshift version of it (without setting all flags) in Start menu to Fly without needing a Pokémon who knows it (no badge requirements)
        - Fly to routes?
- Add Farigiraf to Hoenn Dex once implemented
- Add Ice Spinner as a TM (and maybe give to Beartic/Mamoswine/other Ice types) once implemented?
    - Alternitavely could have Icicle Crash as a TM/given to more Pokémon since it got updated to have 100% accuracy
- Add 3 other Regis?
    - Add Regigigas to Sealed Chamber?
    - Regieleki near New Mauville?
    - Regidrago near Meteor Falls?
- Diversify water routes instead of just Tentacool/Wingull (definitely add more Carvanha; bring some fishing encounters to Surf)
- Spruce up battles/rematches
    - Have each rematch only be possible after certain badges? Would make rematch levels more consistent
    - Trainer customization:
        - Maybe all Rich Boys/Ladies have shinies (would need to have different Pokémon from each other instead of all having Zigzagoon)
        - Calvin could have a good Nature/EV
        - Leaders would have optimal Abilities/EVs/IVs/Natures
    - Breeders should have good IVs/Natures/Abilities
    - Triathlete would be Speed-focused (maybe endurance/HP too)
    - Winstrates (including Victor) should have EVs due to the mom mentioning using the Macho Brace
    - Tori and Tia should have Spindas that aren't identical
    - Fix Roxanne's rematches being male (due to double battles (which the rematches are) having the personality set before the gender. Can rearrange steps or manually set gender)
    - Fix Flannery's rematches being male; also her Torkoal or Ninetales should have Drought
    - Norman can have Toxic Orb Guts Zangoose
        - Spinda: Thrash if Own Tempo, Superpower if Contrary. Should be given a cool pattern (maybe 88888888?)
    - Fix Winona's rematches being male; Pelipper gets Drizzle?
    - Gym leaders/Steven/Breeders can have Hidden Abilities
    - Maxie/Archie/Steven use Mega Evolutions
    - Aqua Leaders' signatures hold Deep Sea items (need to find equivalent for Magma. Mega Evo for Houndoom but unsure for Ninetales)
        - Could swap out Huntail for Mega Gyarados and only it and Houndoom get items
    - Vito can use TMs
        - Swap Vito with Ace Trainer on 1F near the end?
- Figure out why PokeNav callers think there were 512 wins at the Battle Palace
    - Might be related to Battle Tent giving an item right away
- Check that Mossdeep swimmer flag works
- In game trades
- Map out progression of low/medium/high power moves for each type/move type and improve level up movesets for more STAB
- Bring important Trainers up to ORAS levels?
- Magmortar Flash Fire?
- Cherrim (what does this mean?)
- Find way to get Hypnosis to always hit if Hypno is using it?
- Make Water Veil also up evasion like Sand Veil?
- Edit max money
- Should be able to run from wild Pokémon if it is Digging, Diving, Flying, Bouncing, etc
    - Even if ability is Shadow Tag/Arena Trap
- Actually go through SS Tidal now that you'll have more bag space
- Brendan/May/Steven rematches?
- Add Pokémon with dolls? (Togepi, Smoochum, Clefairy, Lapras, Snorlax, Venusaur, Charizard, Blastoise)
- Make seperate Dex for post-game (similar to SwSh DLC dexes)?
- Give Absol/Ceruledge Sharpness?
- Add FRLG trainer sprites/overworld sprites
    - Sprites are added but still need to be implemented. Overworld sprites may have duplicates for Pokémon and may need palettes
- Make inserting trainer sprites easier?
    - Wrapper for src/data/graphics/trainers.h?
- Contests overhaul
- Frontier overhaul:
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

### Big changes from Vanilla - low priority
- Remove IVs? Maybe make boolean for either 0 or 31 added to stat
    - Would need to figure out Hidden Power
- Fire Blast/Hydro Pump/Stone Edge accurate in respective weathers?
    - Make Thunder also accurate in Electric Terrain?
- Calculate Electro Ball more similarly to Gyro Ball?
- Add in Hoenn Dex regionals?
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
All Yellow Pokémon with yellow shinies (Lickitung, Altaria, etc) replacing the regular palette
