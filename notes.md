## Helpful things
```
Find/replace:
(_\("[A-Z])([A-Z\.é':]+"\))
(["\- ][A-Z])([A-Z][A-Zé']+)
$1\L$2

Merge conflicts:
<.*EAD
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
- make release

## Rebasing
```
upcoming
└─ textDecapitalization
   └─ develop
      └─ All hacks
         └─ Release version
```

## To Do:
- Z-A Megas:
    - Pidgey line:
        - Make attacking stats more consistent? (Regular has 10 more Atk, but Mega has 55 more SpA)
    - Victreebel line:
        - Make attacking stats more consistent? (Regular has 5 more Atk, but Mega has 10 more SpA)
    - Starmie:
        - Make attacking stats more consistent? (Regular has 25 more SpA, but Mega has 10 more Atk)
            - It seems like it might actually have 30 more SpA but Pure Power
    - Dragonite line:
        - Make attacking stats more consistent? (Regular has 34 more Atk, but Mega has 21 more SpA)
    - Malamar:
        - Take some SpA and give to Atk?
    - Zygarde:
        - Make attacking stats more consistent?
            - Regular forms have more Atk, but Mega has 146 more SpA
            - Land's Wrath, Thousand Waves, and Thousand Arrows are Physical, but Core Enforcer and Nihil Light are Special
- DexNav:
    - Now that there's less fishing, that box can be shortened
    - One row?:
        - Screen: 720 pixels wide
        - Icons: 87 pixels wide?
    - Could reduce space between land's two rows so fishing can have two rows
    - Exclude Magikarp?
    - Row per rod?
    - Skip over blank spots
    - Add silhouettes
        - Find way to not mess up PC palette (quitting after moving a mon)

### Next playthrough
- Rustboro:
    - Make it easier to specify which Walda wallpaper is obtained?
        - Maybe color is by the hex code?
        - Make spaces and short strings valid?
- Dewford:
    - Reduce Surf slots to just 3? (Variety will come from all the routes with water)
    - Get Exp. Share from Steven instead of from Mr. Stone after
        - Or leave it with Mr. Stone so that it's more out of the way to get, and therefore won't be used to break the game
            - It isn't on by default though, so could still be Steven
- Mauville:
    - Get all the weird Mauville men at once?
- Meteor Falls:
    - Check what happens if you white out to Courtney
- Mt. Chimney:
    - Consolidate flags: FLAG_HIDE_MT_CHIMNEY_TEAM_AQUA/FLAG_HIDE_MT_CHIMNEY_TEAM_MAGMA, FLAG_DEFEATED_EVIL_TEAM_MT_CHIMNEY?
    - Update last Mt. Chimney pair to be based off grunts and change text to "douse in sand"?
- Petalburg:
    - Norman's Spinda's left ear might be off?
- Lilycove:
    - Edit contests?/Contests overhaul
        - Add unique ideas to Special Rank
        - Utilize non-trainer/other important GFX
            - weird guy
            - Devon employee/the similar MAN_2
            - Mr. Stone
            - Guitarist/Kindler (now that current ones have been replaced with Psychic GFX)
            - Wally
            - Interviewer/Cameraman (can use Gabby and Ty)
            - Birch
            - Scott
            - NPC: BOY_2, BOY_3, LITTLE_GIRL, MAN_1, MART_EMPLOYEE, MOM, REPORTER_M, ROOFTOP_SALE_WOMAN
                - GAMEBOY_KID and UNION_ROOM_NURSE don't have a walking animation
            - Gym Leaders/Elite Four/Frontier Brains
                - Drake and possibly others don't have a walking animation
            - Trainers using the cosplay Pikachus
            - A Malamar with a trainer (would need back sprite and new mon entry)
        - Update audience (ContestHall_EventScript_CreateAudience and ContestHall_EventScript_AddRandomAudienceMembers)
            - Wallace and/or Oranguru could be in early ones for foreshadowing
            - Add some of the special NPCs listed above
        - Add ORAS special (Chad, Lisia, Wallace) https://bulbapedia.bulbagarden.net/wiki/List_of_Contest_opponents_(Generation_VI)
        - Implement Mega evolution
        - Improve white-on-white text
- Mt. Pyre:
- Mossdeep:
- Sootopolis:
- Victory Road:
    - Vito can use TMs
- Other:
    - Diversify Safari Zone water/fishing encounters
    - Clear up trainer spots by having just one set of gym leader rematches?
        - Now that gym/Wally rematches are more consistent, the only difference is the level and a couple moves, so not really a point to having as many rematches
        - Late-game trainers like Nicolas or John and Jay too
        - Even just reducing to two or three rematches would save space
        - For each badge after 5, one less rematch (for example, any trainer fought past Winona would have one less rematch)
    - Add Abilities to single ability and TRAINER_MON_NONE to genderless to make more constistent
    - Add trailing commas wherever possible
    - Remove BP costs so that script_menu.h and field_specials.c can use item/move names directly?

### Meta
- More simple modifications: https://www.pokecommunity.com/showthread.php?t=416647&page=1
- Pret wiki tutorials:       https://github.com/pret/pokeemerald/wiki/Tutorials
- Fix dynamic README lines (work in VS code but not GitHub)
- Combine two meta files (notes.md and CHANGES.md)?
    Include more changes, even if general like Battle Frontier edits
- Remove unused code
    - Vanilla code
- Organize changes better
- Once more changes are made, consolidate commits on develop branch again

### Pokémon
- Double check that all Gen1 Pokemon have updated movesets
    - Next do all starters/beasts/bugs/birds/etc.
    - Not including cross-gen evos or regionals or already updated:
        7 88
        8 96
        4 107
        9 120
        1 151
        5 156
- Turn some Normal/Flying types into either pure Flying or Flying/Normal?
- Add in GMax forms as Megas with +20 to every non-HP stat?
- Use Cable Car defines in wild_encounters
- Eventually remove RSE and/or BDSP teachable moves?
- Merge Deoxys teachable learnsets?
- Standardize starter base stat totals?
- Standardize fossil base stat totals?
- See if there's a way to automatically calculate the Pokedex offsets
    - Currently all new ones seem to have a default value (Pecharunt is 1 foot tall and looks huge in it)
- Give Zapdos, Tapu Koko, and Kilowattrel Bolt Beak?
- Add Volcanion to Scorched Slab? (since it's Fire/Water)
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
- Max Elixir (and others?) should stay on party screen like Full Restores do
- Ideally all SV TMs would be available if the bag was ever expanded greatly
    - Important ones should be made into tutors
- See if only some bag pockets can show up during battle (Key Items aren't needed in battle, for example)
- Include charms? (might go over Key Items amount)
- Xaman's TM Case? (https://www.pokecommunity.com/showpost.php?p=10378278)

### Trainers
- Remove type duplicates:
    - Turn Wallace into a Fairy specialist and turn Milotic into Water/Fairy?
    - Turn Juan into a Poison specialist (Swalot as Ace since both have mustaches)?
        - Would need to update gym palette
        - Mr. Rime could be a good hack signature if he becomes Ice
    - Swap Juan and Glacia and turn Juan into Grass specialist?
    - Turn Team Magma into Ground specialists (Camerupt still works as other people like Winona and Sidney use the secondary typing for their aces)?
        - Would cancel out the addition of Houndoom?
- Add level defines per route/group of routes?
- Added species defines for Madeline/Laurel?
- Update Tabitha (and maybe others?) macros to use Magma levels instead of Rematch levels?
- Add ORAS team members (like a Picknicker getting a Gulpin)
- Now that Gym Leader rematch party size is consistent, maybe a macro can be made
- Get rid of Gym Leader rematches needing two Pokemon
- Some Magnemites never occur because 30 is less than REMATCH_2_LEVEL
    - Double check this?
- More mugshots for other bosses?
- Readjust wild/trainer levels so that parties aren't overpowered?
- Go back and make rematch levels stronger/more consistent (don't forget to update evolutions)
- Add macros for ORAS rematch mons even if they don't exist (like Wilton's Fraxure/Haxorus)
- Update Elite Four palettes
    - battle_terrain/stadium/palette3-7.pal to better match types
- Brendan/May rematches? (Route 103?)
- Steven rematches? (Would be the same team but re-battleable)
    - Could make his flag a daily one?
    - Replace Claydol with a Steel-type?
- Give Winstrates rematches?
- Maybe add Brendan/May/Maxie/Archie/admins/Winstrate rematches in Battle Frontier?
- Aqua Leaders' signatures hold Deep Sea items (need to find equivalent for Magma. Mega Evo for Houndoom but unsure for Ninetales)
    - Could swap Huntail/Gorebyss positions with Gyarados/Starmie (once the mega is implemented). Still would need Courtney Mega
- Try to get every Pokémon in Pokédex in at least one rematch?
- Trainer customization:
    - All rematches should have consistent values (gender, IVs (unless maxed but only > level 50), etc.)
    - Calvin could have a good Nature/EV
    - Leaders would have optimal Abilities/EVs/IVs/Natures
    - Add Speed increasing natures to Triathletes
- Use Good Ruby's palette shifting to give trainers more unique looks? (https://github.com/Doesnty/goodruby/commit/ff53bbab592865b49f345342205b41cb869abf27)
- Gym leaders/Steven/Breeders can have Hidden Abilities
- Update Gabby and Ty to have rematches blocked by badges, like other trainers
    - Old logic didn't work:
        - Doesn't work for cheat start because the flags get cleared after gym battles
        - However, if someone beats a gym but doesn't beat Gabby/Ty, then it might cause them to be two places at once
        - Never thought about this before because I face every trainer when testing, but that's not always the case for other players
        - Instead, maybe both gym battles AND G/T battles check both badges and existing flags/GabbyAndTyGetBattleNum?

### Moves
- Aqua Ring heals more with Water Bubble? In rain?
- Consolidate Ever Grande tutor code
- Add regular moves with GMax effects?
- Find way for Rotom to learn special moves by level up (for relearning). Currently have TMs, but not all moves (Hydro Pump/Leaf Storm) are TMs
    - This gets solved if the TM list is expanded to have Scarlet and Violet's
    - I don't think this gets solved by the relearners though since Rotom's one teachable list still doesn't have it
        - CanLearnTeachableMove is modified instead
- Apply dynamic power to move relearner
- Nature Power:
    - In ORAS, Sky Pillar gets Air Slash, but in RSE it just gets a regular cave
    - Nature Power details on summary screen (power/accuracy would be for in-battle status screen only)
        - All moves are currently Special so change category in moves_info.h back to Status if any of them change
            - The summary screen would show the proper category, however
    - Revert some Nature Power moves for a more varied effect
- Update local Porymoves for automatic movepool updates (similar to Hail/Snowscape)
    - Any Pokémon that learns Drill Peck should learn Drill Run
    - Any Pokémon that can learn Flash Cannon should learn Dazzling Gleam and vice versa?
        - Any Pokémon that learns Power Gem should learn both?
    - Any Pokémon that learns a biting move, should also learn a STAB version (for example, Eelektrik learning Crunch but not Thunder Fang)
    - Any Pokémon that learns a horn move (Horn Attack, Megahorn, Smart Strike, etc), can learn them all?
    - Any Poison type that learns Iron Tail should learn Poison Tail?
    - Any Psychic/Steel type that learns Headbutt should learn Zen Headbutt/Iron Head?
- Possible Move Updates:
    - Infestation: 20->35
    - Parabolic Charge: 65->75
    - Poison Sting: 20->40
    - Poison Fang: 60->65
    - Shadow Punch: 60->75?
        - Would need Ghost-type never miss replacement
    - Delta Stream Flying-type Weather Ball
    - Punk Rock makes Howl raise Attack by two?
    - Add back 5 remaining missing moves? (Natural Gift, Lucky Chant, Wring Out, Synchronoise, and Embargo)
        - Or remove Last Resort, Bestow, and others instead?
- Dynamic power/typing:
    - Add more if statements for Utility Umbrella/Air Lock/Cloud Nine?
    - IsBattleMovePhysical/Special/Status(move) vs category == DAMAGE_CATEGORY_XYZ
    - More Abilities?:
        - Flash Fire
        - Swarm
        - Torrent
        - Blaze
        - Overgrow
        - Flower Gift
        - Orichalum Pulse
        - Hadron Engine
    - In Battle:
        - Laser Focus (with Sniper too)
        - Accuracy modifiers
    - Weather abilities count towards corresponding weather (for example, Drought would show the sunny boost)
        - Include as part of isSunny?
        - Same thing for Terrain/Surge abilities?
- Dynamic accuracy:
    - Micle Berry and accuracy stages will not show up on summary screen in battle. This might be unavoidable
        - They also get reset upon looking at the summary screen

### Field Moves
- Try to remove Waterfall prompt. Just have it work like going down
- Edit moves that work in field
    - Might be tricky with new changes
    - Maybe edit so instead of "if has move" to "if can learn move"
        - Might not be simple since it's .inc and not C
    - Cut (only in Trick House):
        - Moves boosted by Sharpness
    - Rock Smash (only in Rusturf Tunnel):
        - Add Brick Break functionality back
    - Strength (only in Trick House):
        - Superpower?
        - Close Combat?
- Make Fly usuable after 2nd badge? Or maybe even aftering delivering goods in Slateport?
- Fly to routes:
    - Route 103: Altering Cave
    - Route 110: Trick House or New Mauville
    - Route 117: Daycare?
    - Route 128: Where Steven flies to?

### Overworld
- Add new defines (but keep current ones) for overworld sprites that line up with trainers for easier use
- Double check that only Devon employees use DEVON_EMPLOYEES and only non-Devon use MAN_2
- Use either SCIENTIST_1 or 2 for Cozmo/Stern and use the other for generic scientists
- Make Regi caves only one room?
- Add caves and more areas to Safari Zone for more postgame mons
    - Make them themed like ice and fire. Maybe can add legendaries
- See what makes the 119 house Pokemon move and apply it other places
- Fly from Lilycove Department Store roof?
- Overworld Pokemon should be set to seen
- Add FRLG trainer sprites/overworld sprites
    - Sprites are added but still need to be implemented. Overworld sprites may have duplicates for Pokémon and may need palettes
- Add accurate overworld sprites (https://github.com/pret/pokeemerald/wiki/Adding-new-event-object-or-overworld-sprites, https://www.pokecommunity.com/showthread.php?t=407124)
    - Overworld sprites to match trainer sprites (for example, Rangers red clothes, Dragon Tamers capes and correct hair color, or Rich Boys correct clothes and hair color)
- Replace Pokémon overworld sprites with follower sprites
    - Poochyena chasing Birch?
    - Bonsly?
    - Mew?
- Combine Centers and Marts?
    - Use left wall where escalators used to be
    - Tileset doesn't seem to support it
- Followers with weather abilities (or Cloud Nine/Air Lock) will change the overworld weather when following?
    - Cloud Nine could do cloudy instead of clear
- Give Underwater the same type-effectiveness as rain?
- Update Underwater grass to be land encounters for more variation?

### Battle Frontier
- Battle Tent Pokémon/EVs?
- Remove restricted Pokemon?
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
- Use variable for the guy who talks about the teams?
- Battle Tower
    - Apprentices
- Battle Factory
    - Add new moves to moveStyles (sRequiredMoveCounts)
    - Don't have both Open Level and Level 50 since the Pokémon are rentals anyways?
- Updated Battle Pyramid wild randomizer?
- Battle Pike
    - Change Kirlia and Dusclops to fit the type of move used?

### Other
- Decap easy chat species/moves/multi-word choices?
- Easy Chat for non-base Hoenn mons (especially now that the National Dex is disabled)
    - National Dex is disabled but Frontier/Trainer Hill mons are now registered. Potentially see if those can be added to easy chat anyways
- Have Gabby and Ty's TV show use nicknames?
- Make stripes of type palettes consistent
    - For example, Dark uses the rest of the E4's but Ice looks like it uses Wallace's
- Update palettes?:
    - Pokédex (and HGSS Pokédex)
    - look in graphics/ for more
    - Trainer card
- Get rid of low health constant beeping (https://www.pokecommunity.com/showpost.php?p=10246778&postcount=194)
- Add more EXP Candy
- PC in menu
    - Look at debug menu or at https://www.pokecommunity.com/showpost.php?p=10127351&postcount=47
    - Set OW_PC_HEAL to GEN_LATEST
- Add relearning moves to PC?
- More save space editing
    - Medicine Pocket?
    - See if it's possible to give item PC and decoration PC have more room
- PokeNav:
    - Use layouts instead of maps to get more accurate nearby function? (Mainly useful for Gym Leaders in towns)
    - Give trainers more accurate locations
        - Scott at Battle Frontier once he's talked to there
        - Steven at Meteor Falls once he's talked to there
        - Wally in Victory Road after he's beaten there (this one might just be a flag issue on the current save)
- Edit contests?
- Update Favor Lady's items to include new items
- Diversify water routes instead of just Tentacool/Wingull (definitely add more Carvanha, especially around Team Aqua-related areas; bring some fishing encounters to Surf)
- Add postgame starters to Hoenn Pokédex?
    - They need Hoenn Pokédex completed to get, but could have them act similarly to Jirachi/Deoxys
    - Add back Littleroot event but skip straight to postgame starters (removing need to fill Dex)?
        - Would be at beginning of postgame Dex
- In game trades
- Edit max money?
- Utilize FRLG sounds/music more
    - Champion theme is good
    - Maybe Wally gets his own theme?
    - Use other encounter themes?
- Debug menu improvements
- Make inserting trainer sprites easier?
    - Wrapper for src/data/graphics/trainers.h?
        - Something like this but for U32? #define COMPOUND_U16(file) (const u16[]) INCBIN_U16(file)
- Summary screen should show type if changed (by Soak, etc.)

### Big changes from Vanilla - low priority
- Update White Smoke/Clear Body to prevent self-inflicted stat drops like Shell Smash?
- Add more basic moves for level up coverage (like a 40 power Ground move or a 60 power physical Fairy move)
- Remove IVs? Maybe make boolean for either 0 or 31 added to stat
    - Would need to figure out Hidden Power
        - Six stats times three values would equal 18 types (would need to figure out third value (16?) but also Normal Hidden Power sounds)
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
- Add in Hoenn Pokédex regionals? (currently postgame Safari Zone)
    - Alolan Sandshrew/Vulpix at Shoal Cave
    - Alolan Muk
    - Cursola
    - Obstagoon
    - Hisui Voltorb
    - Post-game:
        - Alolan Meowth
        - Galarian Meowth
        - Paldean Wooper
    - Sandslash, Ninetales, Cursola, and maybe Obstagoon can be used to diversify the Elite Four teams

## Future hacks
- Miscellaneous:
    - Magma gets Diglett, Aqua gets Wiglett
    - Elite Four where each one is based on either a terrain and/or weather
        - For combos, Sunny/Grassy Terrain, Rainy/Electric Terrain
        - Weather kind of copies Magma/Aqua though
- All Yellow Pokémon:
    - Yellow shinies (Lickitung, Altaria, Luxray, Bellibolt, etc) replacing the regular palette
        - Change Pokédex colors to match
    - Give trainer mugshot yellow palette if possible (replace Wallace's yellow with something else)
    - Replace green with yellow on player sprites?
    - If not enough, could also add black (Charmander line would have shiny palettes as they're both yellow and black)
- Tropical:
    - Tropius, Bellossom, Pau Oricorio, Tsareena, probably a lot of Alolan Pokémon, both forms of Exeggutor (Sun Stone for Alolan)
    - This is just Sun and Moon
- Massachusetts:
    - Braviary
    - Mismagius
    - Swanna
    - Greedent/Pachirisu
    - Bouffalant?
    - Meganium
    - Ledian/Orbeetle
    - Corviknight/Pidgeot
    - Applin
    - Wailord/Cetitan/Kyogre
    - Stoutland
    - Purugly/Incineroar
    - Walking Wake?
    - Unfezant
    - Pelipper
    - Sawsbuck
    - Ninetales
    - Linoone
    - Skuntank
    - Samurott/Floatzel
    - Ting-Lu
    - Bibarel
    - Cinderace/Diggersby/Lopunny
    - Raticate
    - Watchog
