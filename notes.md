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
DEBUG_PRINT_INT("text: ", var)
DEBUG_PRINT_INT_VAR(var)
DEBUG_PRINT_INT_EMPTY(var)
DEBUG_PRINT_STRING("text: ", var)
DEBUG_PRINT_STRING_VAR(var)
DEBUG_PRINT_STRING_EMPTY(var)
MgbaPrintf(MGBA_LOG_WARN, "2 vars: %d, %d", var1, var2);

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
    - Starmie:
        - Make attacking stats more consistent? (Regular has 25 more SpA, but Mega has 10 more Atk)
            - It seems like it might actually have 30 more SpA but Pure Power
    - Dragonite line:
        - Make attacking stats more consistent? (Regular has 34 more Atk, but Mega has 21 more SpA)
    - Lucario Z:
        - Could revert regular Mega stats back to be Physical since Z is Special
            - Maybe wait to see how Zs are handled in main games
    - Mega Malamar:
        - Take some SpA and give to Atk?
    - Zygarde:
        - Make attacking stats more consistent?
            - Regular forms have more Atk, but Mega has 146 more SpA
            - Land's Wrath, Thousand Waves, and Thousand Arrows are Physical, but Core Enforcer and Nihil Light are Special
- DexNav:
    - One land row?:
        - Screen: 720 pixels wide
        - Icons: 87 pixels wide?
            - These may have been measured on 3x zoom

### Next playthrough
- Rustboro:
- Dewford:
    - Get Exp. Share from Steven instead of from Mr. Stone after
        - Or leave it with Mr. Stone so that it's more out of the way to get, and therefore won't be used to break the game
            - It isn't on by default though, so could still be Steven
- Mauville:
    - Get all the weird Mauville men at once?
- Mt. Chimney:
    - Consolidate flags: FLAG_HIDE_MT_CHIMNEY_TEAM_AQUA/FLAG_HIDE_MT_CHIMNEY_TEAM_MAGMA, FLAG_DEFEATED_EVIL_TEAM_MT_CHIMNEY?
    - Update last Mt. Chimney pair to be based off grunts and change text to "douse in sand"?
- Petalburg:
    - Norman's Spinda's left ear might be off?
    - Reduce Surf slots to just 3? (Variety will come from all the routes with water)
- Lilycove:
    - Pokecenter Ladies
        - "Union'd together"
            - Now a struct
            - Breaks current Favor Lady but a new game should be good
            - .id can eventually be removed but seems to be used in record_mixing.c
                - Could maybe make 3 seperate structs after this
        - Update Favor Lady's items to include new items
            - Wait for PR in upcoming
            - Replace TM15 and PP Max
        - Allow multiple items to be given. Potentially PokeBlocks and quizzes too
    - Edit contests
        - Better overworld sprite for Lisia
        - Update ORAS opponent stats
        - Add unique ideas to Special Rank
            - Contest Lady's Pokemon
            - Utilize non-trainer/other important GFX
                - weird guy
                - Devon employee/the similar MAN_2
                - Mr. Stone
                - Guitarist/Kindler (since all contestants with that GFX seemed to be Bird Keepers and now use the Psychic GFX)
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
                - A trainer with a Pokemon named after them (but with Jr. at the end to not trigger the Jacobus text)
        - Update audience (ContestHall_EventScript_CreateAudience and ContestHall_EventScript_AddRandomAudienceMembers)
            - Wallace and/or Oranguru could be in early ones for foreshadowing
            - Add some of the special NPCs listed above
        - Add ORAS special (Chad, Lisia, Wallace) https://bulbapedia.bulbagarden.net/wiki/List_of_Contest_opponents_(Generation_VI)
        - Implement Mega evolution
        - Improve white-on-white text
- Mossdeep:
    - Check new Steven Dive text
- Sootopolis:
    - Swap Water Pulse TM for something better? Damage category would need to match Juan's team
        - Water Pulse can go to Slateport
- Battle Frontier
    - Remove BP costs so that script_menu.h and field_specials.c can use item/move names directly?

### Meta
- Try to get upstream changes working better here
    - Automatic teachable movesets. Would require bringing local porymoves code here
        - Current have a complicated solution for relearning tutor moves. This can be made easier by using the repo's solution with gTutorMoves. However the file that it exists in is automatically made by the Python script
            - Removing from src/data/.gitignore for now but it will have to be added back later
        - Should probably still keep teachable learnsets out of gitignore to track changes
        - Have Porymoves pull from src/data/pokemon/special_movesets.json's extraTutors
        - Will need to re-remove universal moves from c code and figure out Rotoms
    - Makefile changes
    - Automatic trainers (probably not)
    - Summary screen/PC renaming/relearning
    - Add HM back to variable names
- Get a better understanding of how move animations work:
    - gBattleAnimMove_??? in data/battle_anim_scripts.s
        - These call g???SpriteTemplate from battle_anim_???.c
            - These use ANIM_TAG_??? for tiles and palettes
                - The values that ANIM_TAG_??? call are in src/data/battle_anim.h
            - They also use g???AffineAnimTable and Anim???, both usually in the same battle_anim_???.c file
        - These also call AnimTask_??? from battle_anim_???.c
- Macros for similar animations with different colors:
    - Metallic (Iron Tail/Poison Tail/Metal Claw) will be done once pret is merged
    - Surf/Muddy Water/Sludge Wave has a function
    - Heat Wave is the same as Sandstorm in Gen3 but becomes similar to Ominous Wind in 4-6
        - Change Ominous Wind to be similar to the others?
    - Poison Powder/Stun Spore/Sleep Powder
        - They all have their own tags but they just call the same image (with different palettes)
            - Convert to a Surf/Sludge Wave type of animation where the palette change in the function?
        - Also Magic Powder and now Powder and Rage Powder
        - Try to figure out why the original three can't use ANIM_TAG_POWDER
    - Cotton Spore and Cotton Guard might be similar and Cotton Spore seems to share with Spore
    - Sludge and Mud Sport use a similar blob but Sludge's is the third image in the poison bubble image and Mud Sport's is its own image
    - Razor Leaf and Magical Leaf
    - Similar to the powders, LIGHT_WALLs (Reflect/Light Screen/Mirror Coat/Magic Coat/Barrier) use the same graphic with different palettes
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
- Give all Pokémon updated movesets
    - Next do all starters/beasts/bugs/birds/etc.
    - Not including cross-gen evos or regionals or already updated:
        8: 96
        4: 107
        9: 120
        5: 156
- Turn some Normal/Flying types into either pure Flying or Flying/Normal?
- Decide whether to reverse types for Pokemon whose primary becomes secondary:
    - Vanilla:
        - Rufflet Normal/Flying->Hisuian Braviary Psychic/Flying
    - Custom:
        - Mime Jr. Psychic->Galarian Mr. Mime Ice/Psychic
        - Swablu Flying->Altaria Dragon/Flying
        - Fletchling Flying->Fletchinder Fire/Flying
- More macros for almost identical forms (like Mimikyu)
- Add in GMax forms as Megas with +20 to every non-HP stat? (or 40 to attacking and 0 to non-attacking)
- Eventually remove RSE and/or BDSP teachable moves?
- Merge Deoxys teachable learnsets?
- Standardize starter base stat totals?
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
    - Ideally every Pokemon can learn their types' 40/65/90 power moves
- Add more indicators of shiniess in wild battles in case sparkles are missed
- Give Ultra Beasts Hidden Abilities?
    - Buzzwole: Iron Fist
    - Xurkitree: Volt Absorb?
    - Kartana: Sharpness

### Items
- Max Elixir (and others?) should stay on party screen like Full Restores do
- Add more EXP Candy to the overworld
- Add more held items to shops
    - Adrenaline Orb
    - Amulet Coin
    - Eject Button
    - Eject Pack
    - Float Stone
    - Iron Ball
    - Lagging Tail
    - Red Card
    - Ring Target
    - Room Service
    - Safety Goggles
    - Shed Shell
    - Sticky Barb
- Include charms? (might go over Key Items amount)
    - Both (13):
        - Escape Rope
        - Exp. Share
        - Mega Ring
        - Old Rod
        - Good Rod
        - Super Rod
        - Itemfinder
        - Coin Case
        - Powder Jar (remove?)
        - Rent-a-Wail (could be replaced by a flag check)
        - Mystic Ticket
        - Aurora Ticket
        - Meteorite
    - EE (15 (13+2)):
        - Mach Bike
        - Acro Bike
        - Wailmer Pail
        - Pokeblock Case
        - Soot Sack
        - Eon Ticket
        - Old Sea Map
        - Letter (removed in story)
        - Devon Parts (removed in story)
        - Go-Goggles
        - Devon Scope
        - Basement Key
        - Storage Key (removable)
        - Key to Room 1->Key to Room 4->Key to Room 6->Key to Room 2->Scanner (removable)
        - Magma Emblem
    - FRLG (21 (20+1)):
        - Bicycle
        - Town Map
        - Vs. Seeker
        - TM Case?
        - Berry Pouch?
        - Poke Flute
        - Fame Checker
        - Teachy TV
        - S.S. Ticket
        - Parcel (removed in story)
        - Secret Key
        - Bike Voucher (removable)
        - Gold Teeth (removable)
        - Card Key
        - Lift Key
        - Silph Scope
        - Tri-Pass
        - Rainbow Pass
        - Tea (removed in story?)
        - Ruby (removable)
        - Sapphire (removable)
    - Hacks (11):
        - Rotom Catalog
        - Gracidea
        - Reveal Glass
        - DNA Splicers
        - Zygarde Cube
        - Prison Bottle
        - N-Solarizer
        - N-Lunarizer
        - Reins of Unity
        - Scroll of Darkness
        - Scroll of Waters
    - Charms (4):
        - Oval Charm
        - Shiny Charm
        - Catching Charm
        - Exp. Charm

### Trainers
- Clear up trainer spots by having just one set of gym leader rematches?
    - Now that gym/Wally rematches are more consistent, the only difference is the level and a couple moves, so not really a point to having as many rematches
    - Even just reducing to two or three rematches would save space
- For each badge after 5, one less rematch (for example, any trainer fought past Winona would have one less rematch)
    - Would John and Jay/Nicolas get no rematches in that case?
    - Should the final rematch be after the Elite Four instead of after Gym 8? All 5th rematches would need to be buffed
- Add Abilities to single ability and TRAINER_MON_NONE to genderless to make more consistent
- Add trailing commas wherever possible
- Remove type duplicates:
    - Turn Wallace into a Fairy specialist and turn Milotic into Water/Fairy?
    - Turn Juan into a Poison specialist (Swalot as Ace since both have mustaches)?
        - Would need to update gym palette
        - Mr. Rime could be a good hack signature if he becomes Ice
    - Swap Juan and Glacia and turn Juan into Grass specialist?
    - Turn Team Magma into fully Ground specialists (Camerupt still works as other people like Winona use the secondary typing for their aces)?
        - Would cancel out the addition of Houndoom?
    - Currently missing specialists:
        - Bug
        - Grass
        - Fairy
        - Poison
- Add level defines per route/group of routes?
- Update Tabitha (and maybe others?) macros to use Magma levels instead of Rematch levels?
- Now that Gym Leader rematch party size is consistent, maybe a macro can be made
- Get rid of Gym Leader rematches needing two Pokémon
- Some Magnemites never occur because 30 is less than REMATCH_2_LEVEL
    - Double check this?
- More mugshots for other bosses?
- Can add Scientists since FRLG front sprite is available
    - Can add Super Nerds too using either the School Kid or Scientist overworld sprites
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
- Add encounter music to Trainer Class struct?
    - Maybe keep in Trainer so it can still be customized, but used the Trainer Class value as a default
- Update Gabby and Ty to have rematches blocked by badges, like other trainers
    - Old logic didn't work:
        - Doesn't work for cheat start because the flags get cleared after gym battles
        - However, if someone beats a gym but doesn't beat Gabby/Ty, then it might cause them to be two places at once
        - Never thought about this before because I face every trainer when testing, but that's not always the case for other players
        - Instead, maybe both gym battles AND G/T battles check both badges and existing flags/GabbyAndTyGetBattleNum?

### Moves
- Replace Hypno's Hypnosis effect with a new move that uses its pendulum in the animation
- Aqua Ring heals more with Water Bubble? In rain?
- Should teachable be unchecked for egg moves due to the relearner/SV TMs?
  - I guess keeping them in egg moves means a player can breed for them before they unlock the relearner
- Find way for Rotom to learn special moves by level up (for relearning). Currently have TMs, but not all moves (Hydro Pump/Leaf Storm) are TMs
    - This gets solved if the TM list is expanded to have Scarlet and Violet's
    - I don't think this gets solved by the relearners though since Rotom's one teachable list still doesn't have it
        - CanLearnTeachableMove is modified instead
- Apply dynamic power to move relearner
- Nature Power:
    - Revert some Nature Power moves for a more varied effect
    - All moves are currently Special so change category in moves_info.h back to Status if any of them change
- Update local Porymoves for automatic movepool updates (similar to Hail/Snowscape)
    - Some of these may need to be done manually (or can do in C but harder to document)
    - Any Pokémon that learns Drill Peck should learn Drill Run
    - Any Pokémon that can learn Flash Cannon should learn Dazzling Gleam and vice versa?
        - Any Pokémon that learns Power Gem should learn both?
    - Any Pokémon that learns a biting move, should also learn a STAB version (for example, Eelektrik learning Crunch but not Thunder Fang, or Mareanie learning Bite but not Poison Fang)
    - Any Pokémon that learns a horn move (Horn Attack, Megahorn, Smart Strike, etc), can learn them all?
    - Any Poison/Steel/Water type that learns Poison Tail/Iron Tail/Aqua Tail should learn its corresponding type's move?
        - These three are done, but should Dragon Tail be included too?
    - Any Psychic/Steel type that learns Headbutt should learn Zen Headbutt/Iron Head?
    - Any Flying/Steel type that learns Wing Attack/Steel Wing should learn the other
    - Any Pokemon that can be taught Double-Edge should also be able to be taught Take Down
- Possible Move Updates:
    - Infestation: 20->35
    - Poison Sting: 20->40
    - Poison Fang: 60->65
    - Shadow Punch: 60->75?
        - Would need Ghost-type never miss replacement
    - Delta Stream Flying-type Weather Ball
    - Punk Rock makes Howl raise Attack by two?
    - Add back 5 remaining missing moves? (Natural Gift, Lucky Chant, Wring Out, Synchronoise, and Embargo)
        - Or remove Last Resort, Bestow, and others instead?
- Dynamic power/typing:
    - Might need to bring this to dynamic power/accuracy (https://github.com/rh-hideout/pokeemerald-expansion/pull/6888)
        - Unsure if monInBattle does the same thing
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
    - Potentially old issue: In battle, dynamic power seems to be based off first mon (Mightyena's Psychic Fangs getting a STAB boost due to Girafarig in the lead being Psychic)
        - Seems to be an issue in upcoming with type as well
            - The fix might make non-current mons non-dynamic. Check this
            - Works for Hidden Power, but may have issues with more complex checks (weather, terrain, etc). Could work for STAB and Sharpness/Iron Fist/Strong Jaw-esque abilities
- Dynamic accuracy:
    - OHKO moves shouldn't be affected by some other modifiers
    - Implement No Guard and Lock-On
    - Micle Berry and accuracy stages will not show up on summary screen in battle. This might be unavoidable
        - They also get reset upon looking at the summary screen
- Move animations:
    - Try to standardize Iron/Poison/Aqua Tail

### Field Moves
- Make Fly usuable after 2nd badge? Or maybe even aftering delivering goods in Slateport?
- Fly to routes:
    - Route 103: Altering Cave
    - Route 110: Trick House or New Mauville
    - Route 115: Meteor Falls?
    - Route 117: Daycare?
    - Route 128: Where Steven flies to?

### FRLG:
- Add Dive TM
- Don't remove Meteorite
- Add version exclusives
    - Including postgame
- Remove duplicate GFX (for example, bald_man_frlg is just bald_man in the PR) and Trainer sprites
- Improve Rod order
    - Get rid of Super Rod entirely and just have first stage evos catchable?
- Might need to increase key items pocket
- Add Wiglett/Toedscool?
- Add Munna for Route 10 girl? Maybe a trade?
- Decide if regional forms will be postgame or main game
    - Add Galarian birds to Sevii Islands?

### Overworld
- Seperate out split routes into two maps for different encounters?
    - 103 east/west
    - 111 pre-/post-desert?
    - 115 north/south (north/middle/south?)
    - 118 east/west
    - Route 2 north/south
    - Route 4 east/west
    - Route 12 north/south
- Add sand encounters to Dewford area (using desert sand)
- Finish Safari Zone forest
    - Gastly can replace one of the spots of Pokemon moved to the forest
    - Houndour can too (possibly swapping with a Fire Cave Pokemon) if removed from the Hoenn Dex
- Find other ways to increase amount of encounters while still having 4-5 Pokémon per pool
    - Won't really matter as-is (besides maybe introducing some Pokemon earlier), but will be helpful for hacks with larger Dexes
- Add new defines (but keep current ones) for overworld sprites that line up with trainers for easier use
- Double check that only Devon employees use DEVON_EMPLOYEES and only non-Devon use MAN_2
- Add caves and more areas to Safari Zone for more postgame mons
    - Make them themed like ice and fire. Maybe can add legendaries
- Battle Environments:
    - Should Magma Hideout use the unused Magma battle environment? Currently uses Volcano
    - Ice/Volcano/Puddle need better palettes/need slide intros
        - Ice and Volcano's player side has been fixed but the palettes overall could be better
            - Ice can use ice/ice cave tile colors
            - Volcano is trickier since the volcano areas are seemingly just the same caves and mountains
        - Intro graphics need their palette updated (seemingly lines 36-47)
- Add FRLG trainer sprites/overworld sprites
    - Sprites are added but still need to be implemented. Overworld sprites may need palettes
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
- Remove restricted Pokémon?
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
    - Don't have both Open Level and Level 50 since the Pokémon are rentals anyways?
- Updated Battle Pyramid wild randomizer?
- Battle Pike
    - Change Kirlia and Dusclops to fit the type of move used?

### Other
- Make catching easier by making the third shake automatically pass?
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
- Diversify water routes instead of just Tentacool/Wingull (definitely add more Carvanha, especially around Team Aqua-related areas; bring some fishing encounters to Surf)
- Add postgame starters to Hoenn Pokédex?
    - They need Hoenn Pokédex completed to get, but could have them act similarly to Jirachi/Deoxys
    - Add back Littleroot event but skip straight to postgame starters (removing need to fill Dex)?
        - Would be at beginning of postgame Dex
- In game trades
- Update Easy Chat more
    - Remove Event/Move 1/Move 2 restriction?
    - Add more moves?
    - Move Abilities out to their own section?
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
- Remove IVs? Maybe make boolean for either 0 or 31 added to stat
    - Would need to figure out Hidden Power
        - Six stats times three values would equal 18 types (would need to figure out third value (16?) but also Normal Hidden Power sounds)
- Beach sand has sunny weather? Or maybe just some routes with it like 109
- Make seperate Pokédex for post-game similar to SwSh DLC Pokédexes?
- Fire Blast/Hydro Pump/Stone Edge accurate in respective weathers?
    - Make Thunder also accurate in Electric Terrain?
- Calculate Electro Ball more similarly to Gyro Ball?
- New moves:
    - Add more basic moves for level up coverage (like a 40 power Ground move or a 60 power physical Fairy move)
        - Add in Magnitude variations as their own moves in order to get more Ground moves?
    - Ideally every Pokemon can learn their types' 40/65/90 power moves
        - 40 priority and 60 can't miss are optional
        - Some types have 80 instead of 90
        - A 90 power signature can be used as a replacement
    - Based on other animations (Tail, Punches, Kicks, Headbutts, Wings, Claw)
        - For example, a Flame Wing move that uses Wing Attack/Steel Wing's animation but with fire
        - The existing animation variations aren't consistent for moves (Steel Wing is stronger than Wing Attack, Iron Tail is stronger than Poison Tail, etc.) but the new moves should be
        - Wind moves: Either Heat Wave/Ominous Wind/Sandstorm or a single Gust like Gust (but not Twister I guess)
    - Standardize new move type animations:
        - Electric: look into current electric effects, most likely Thunder Punch/Thunder Fang, maybe without inversion
        - Fire: look into current fire effects, most likely Fire Punch/Blaze Kick/Fire Fang
        - Ice: look into current ice effects, most likely Ice Punch/Ice Fang
        - Steel: Metal Claw, Steel Wing, Iron Head, etc. Figure out if metallic is permanent
        - Poison: Poison bubbles? Look into what current moves use
        - Water: Might be water effects? Waterfall/Aqua Tail?
        - I guess just look at existing effects and choose the best
    - Essentially new moves would be type x attack (Fire x Wings, Poison x Punch, Electric x Kick, etc.)
    - Ice-type Discharge/Lava Plume
    - Add regular moves with Z-Move/GMax effects?
        - Steel spikes
        - Would give Mew a signature
- Make Water Veil also up evasion like Sand Veil?
- Species-specific move effects? (maybe look at code for Diglett immunity to Telekinesis):
    - Smack Down is super effective if a Tinkaton uses it against Corviknight
    - Drilbur line Drill Run
    - Charjabug charge (Charge, Discharge, Charge Beam, Parabolic Charge) moves
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
    - Oranguru as a Trainer
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
