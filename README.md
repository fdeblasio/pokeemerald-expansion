# pokeemerald-expansion

```
Based off RHH's pokeemerald-expansion 1.10.2 https://github.com/rh-hideout/pokeemerald-expansion/
```

#### Important: DO NOT use GitHub's "Download Zip" option. Using this option will not download the commit history required to update your expansion version or merge other feature branches. Instead, please read [this guide](https://github.com/Pawkkie/Team-Aquas-Asset-Repo/wiki/The-Basics-of-GitHub) to learn how to fork the repository and clone locally from there.

Please follow the instructions in `INSTALL.md` to get pokeemerald-expansion set up on your machine.

## What features are included?
- ***IMPORTANT*❗❗ Read through these to learn what features you can toggle**:
    - [Battle configurations](https://github.com/rh-hideout/pokeemerald-expansion/blob/master/include/config/battle.h)
    - [Pokémon configurations](https://github.com/rh-hideout/pokeemerald-expansion/blob/master/include/config/pokemon.h)
    - [Item configurations](https://github.com/rh-hideout/pokeemerald-expansion/blob/master/include/config/item.h)
    - [Overworld configurations](https://github.com/rh-hideout/pokeemerald-expansion/blob/master/include/config/overworld.h)
    - [Debug configurations](https://github.com/rh-hideout/pokeemerald-expansion/blob/master/include/config/debug.h)
- ***Upgraded battle engine.***
    - Gen5+ damage calculation.
    - 2v2 Wild battles support.
    - 1v2/2v1 battles support.
    - Fairy Type (configurable).
    - Physical/Special/Status Category (configurable).
    - New moves and abilities up to Scarlet and Violet.
        - Custom Contest data up to SwSh, newer moves are WIP. ([source](https://pokemonurpg.com/info/contests/rse-move-list/))
    - Battle gimmick support:
        - Mega Evolution
        - Primal Reversion
        - Ultra Burst
        - Z-Moves
            - Gen 8+ damaging moves are given power extrapolated from Gen 7.
            - Gen 8+ status moves have no additional effects, like Healing Wish.
        - Dynamax and Gigantamax
    - Initial battle parameters
        - Queueing stat boosts (aka, Totem Boosts)
        - Setting Terrains.
    - Mid-turn speed recalculation.
    - Quick Poké Ball selection in Wild Battles
        - Hold `L` to change selection with the D-Pad.
        - Press `L` to use last selected Poké Ball.
    - Run option shortcut
    - Faster battle intro - Message and animation/cry happens at the same time.
    - Faster HP drain.
    - Battle Debug menu.
        - Accessed by pressing `Select` on the "Fight/Bag/Pokémon/Run" menu.
    - Option to use AI flags in wild Pokémon battles.
    - FRLG/Gen4+ whiteout money calculation.
    - Configurable experience settings
        - Experience on catch.
        - Splitting experience.
        - Trainer experience.
        - Scaled experience.
        - Unevolved experience boost.
    - Frostbite.
        - Doesn't replace freezing unless a config is enabled, so you can mix and match.
    - Critical capture.
    - Removed badge boosts (configurable).
    - Recalculating stats at the end of every battle.
    - Level 100 Pokémon can earn EVs.
    - Inverse battle support.
    - TONS of other features listed [here](https://github.com/rh-hideout/pokeemerald-expansion/blob/master/include/config/battle.h).
- ***Full Trainer customization***
    - Nickname, EVs, IVs, moves, ability, ball, friendship, nature, gender, shininess.
    - Custom tag battle support (teaming up an NPC in a double battle).
    - Sliding trainer messages.
    - Upgraded Trainer AI
        - Considers newer move effects.
        - New flag options to let you customize the intelligence of your trainers.
        - Faster calculations.
    - Specify Poké Balls by Trainer class.
- ***Pokémon Species from Generations 1-9.***
    - Simplified process to add new Pokémon.
    - Option to disable unwanted families.
    - Updated sprites to DS style.
    - Updated stats, types, abilities and egg groups (configurable).
    - Updated Hoenn's Regional Dex to match ORAS' (configurable).
    - Updated National Dex incorporating the new species.
    - Sprite and animation visualizer.
        - Accesible by pressing `Select` on a Pokémon's Summary screen.
    - Gen4+ evolution methods, with some changes:
        - Mossy Rock, Icy Rock and Magnetic Field locations match ORAS'.
            - Leaf, Ice and Thunder Stones may also be used.
        - Inkay just needs level 30 to evolve.
            - You can't physically have both the RTC and gyroscope, so we skip this requirement.
        - Sylveon uses Gen8+'s evolution method (friendship + Fairy Move).
        - Option to use hold evolution items directly like stones.
    - Hidden Abilities.
        - Available via Ability Patch.
        - Compatible with Ghoul's DexNav branch.
    - All gender differences.
        - Custom female icons for female Hippopotas Hippowdon, Pikachu and Wobbufett
    - 3 Perfect IVs on Legendaries, Mythicals and Ultra Beasts.
- ***Customizable form change tables. Full list of methods [here](https://github.com/rh-hideout/pokeemerald-expansion/blob/master/include/constants/form_change_types.h).***
    - Item holding (eg. Giratina/Arceus)
    - Item using (eg. Oricorio)
        - Time of day option for Shaymin
    - Fainting
    - Battle begin and end (eg. Xerneas)
        - Move change option for Zacian/Zamazenta
    - Battle end in terrains (eg. Burmy)
    - Switched in battle (eg. Palafin)
    - HP Threshold (eg. Darmanitan)
    - Weather (eg. Castform)
    - End of turn (eg. Morpeko)
    - Time of day (eg. Shaymin)
    - Fusions (eg. Kyurem)
- ***Breeding Improvements***
    - Incense Baby Pokémon now happen automatically (configurable).
    - Level 1 eggs (configurable).
    - Poké Ball inheriting (configurable).
    - Egg Move Transfer, including Mirror Herb (configurable).
    - Nature inheriting 100% of the time with Everstone (configurable)
    - Gen6+ Ability inheriting (configurable).
- ***Items from newer Generations. Full list [here](https://github.com/rh-hideout/pokeemerald-expansion/blob/master/include/constants/items.h).***
    - ***Gen 6+ Exp. Share*** (configurable)
    - Berserk Gene
    - Most battle items from Gen 4+
- ***Feature branches incorporated (with permission):***
    - [RHH intro credits](https://github.com/Xhyzi/pokeemerald/tree/rhh-intro-credits) by @Xhyzi.
        - A small signature from all of us to show the collective effort in the project :)
    - [Overworld debug](https://github.com/TheXaman/pokeemerald/tree/tx_debug_system) by @TheXaman
        - May be disabled.
        - Accesible by pressing `R + Start` in the overworld by default.
        - **Additional features**:
            - *Clear Boxes*: cleans every Pokémon from the Boxes.
            - *Hatch an Egg*: lets you choose an Egg in your party and immediately hatch it.
    - [HGSS Pokédex](https://github.com/TheXaman/pokeemerald/tree/tx_pokedexPlus_hgss) by @TheXaman
        - May be disabled.
        - **Additional features**:
            - *Support for new evolution methods*.
            - *Dark Mode*.
    - [Nature Colors](https://github.com/DizzyEggg/pokeemerald/tree/nature_color) in summary screen by @DizzyEggg
    - [Dynamic Multichoice](https://github.com/SBird1337/pokeemerald/tree/feature/dynmulti) by @SBird1337
    - [Saveblock Cleansing](https://github.com/ghoulslash/pokeemerald/tree/saveblock) by @ghoulslash
    - [Followers & Expanded IDs](https://github.com/aarant/pokeemerald/tree/followers-expanded-id) by @aarant
        - May be disabled.
        - Includes Pokémon followers like in HGSS, including interactions.
        - ***Expands the amount of possible object event IDs beyond 255.***
        - ***Includes an implementation of dynamic overworld palettes (DOWP).***
        - **Additional features**:
            - *Pokémon overworld sprites up to Generation 8.*
            - *Integration with our Pokémon Sprite Visualizer, allowing users to browse through the follower sprites alongside battle sprites.*
- ***Other features***
    - Pressing B while holding a Pokémon drops them like in modern games (configurable).
    - Running indoors (configurable).
    - Configurable overworld poison damage.
    - Configurable flags for disabling Wild encounters and Trainer battles.
    - Configurable flags for forcing or disabling Shinies.
    - Reusable TM (configurable).
    - B2W2+ Repel system that also supports LGPE's Lures
    - Gen6+'s EV cap.
    - All bugfixes from pret included.
    - Fixed overworld snow effect.

There are some mechanics, moves and abilities that are missing and being developed. Check [the project's milestones](https://github.com/rh-hideout/pokeemerald-expansion/milestones) and our [issues page](https://github.com/rh-hideout/pokeemerald-expansion/issues) to see which ones.

### Please consider crediting the entire [list of contributors](https://github.com/rh-hideout/pokeemerald-expansion/wiki/Credits) in your project, as they have all worked hard to develop this project :)

## Known bugs and other notes
- With the higher levels, using the Exp. Share can cause your team to become overpowered
- Checking wild encounters doesn't differentiate between what's been caught and what hasn't
    - I found a way to do so, but it causes a graphical glitch in the PC so it's not implemented yet
- The fishing portion of checking the wild encounters is incomplete
- Followers will stop following you if you use the naming screen from the party menu. It will start to follow you again if you talk to it
- One of the sprites on Mt. Chimney sometimes glitches
- Newer moves don't have animations
- AI_FLAG_ACE_POKEMON potentially broken in multi-battles (maybe only if both trainers have it)
- If you help one of the Lilycove Pokémon Center ladies, the other lady thinks you've already helped her as well
    - Could have something to do with this: sContestLadyPtr->id = LILYCOVE_LADY_CONTEST

### Potentially just savefile issues due to merging code/playing while hacking
- Lilycove ladies crash the game
- Some of the EV-reducing berries on Route 123 will randomly disappear and then come back
    - This may be related to the amount of overworld sprites/palettes
- Moving an Pokémon in the PC seems to duplicate its item in the bag
- Items in the Battle Pyramid's Battle Bag/held items in the Battle Pike are turning into Poke Balls
    - Seems to happen after trainer battles?
- Contest reporter says a number instead of the contest category
    - The corresponding TV report thinks a winning Pokémon came in last

## Changes
- NOTE: This all assumes there are no merging errors
- Wild Pokémon and Trainers have their levels increased to make grinding less of a pain
    - However, with the Exp Share now affecting all party members, this can lead to becoming overleveled
- Decapitalization
- Some areas made easier to navigate
    - Route 102/103: Path from Littleroot to rival is more direct
- Some reversions back to Ruby and Sapphire
    - Some trainers on Routes 104 and 117 go back to their original locations
- Gym Leaders and Magma/Aqua Admins/Leaders no longer have underleveled evolutions
- Team Magma are more focused on Ground types than Fire types to avoid overlap with Flannery
- Pokémon have a more even encounter distribution
- Trainer rematches (including Gabby and Ty) are now based on number of badges
- Tate and Liza give out Psychic instead of Calm Mind (Calm Mind can be found in Slateport)
- Made rapids easier to navigate so that only one trip is needed to get all items/battle all trainers (at the cost of looking slightly worse)
- Added area to grind right outside Elite Four
- TM moves not in the game are learnable as egg moves
    - However, this is only applicable for when the base form learns the move
- Pokémon that evolve with an item at day or night now can evolve at any time
- EVs now give one stat increase for every EV but cap out at 63 (individual)/127 (total). This will lead to the same stats as the old system but easier to train
- Bird Keepers now use the overworld sprite of male Psychics since it looks more like them than the blond sprite
- Pokémon can now be listed as orange in the Pokédex
- The Safari Zone is now in the postgame only. Its regular Pokémon have been moved to other locations
- Underwater areas now connect better
- Frontier Brains have updated teams
- Battle Pyramid wild Pokémon have been updated
- Battle Frontier no longer requires saving
- Certain sections are blocked off until gyms or rivals are defeated
- Wally is given more battles. The battle in Verdanturf starts with Grassy Terrain
- Battles in New Mauville start with Electric Terrain
- Battles in long grass on Routes 119 and 120 start with Grassy Terrain (unless it's a thunderstorm)
- All Pokémon in the Dragon egg group that could not already learn Dragon Breath now get it as an egg move. This is reflected in the species changes below
- Moves are no longer replaced if a Pokémon levels up in the daycare
- The old man in the Battle Frontier (in the building above the Pokémon Center) who used to tell you your Pokémon's IVs now Hyper Trains stats for free

### Quality of Life
- Shiny Pokémon can no longer spawn until you get Poké Balls
- You can now always run from wild Pokémon if they are asleep, frozen, or in a semi-invulnerable state (using Fly, Dig, Dive, Bounce, etc.). This works even if they have Shadow Tag/Arena Trap
- You can nickname and relearn moves from the party menu
- Press A on the summary screen to see a Pokémon's EVs/IVs
- Can swap party members with Select
- Items in shops are based on the amount of badges you have
- Bag sorting with Start button
- More bag space
- The naming screen automatically swaps to lowercase after the first letter
- You can check which wild Pokémon appear through the PokéNav
- Rainy routes will automatically water berries
- Premier Balls are now given for every multiple of 10 of any ball you buy (as opposed to only 1 for 10+ Poke Balls)
- Faster walking/surfing speed
- Two Pokémon having the same original trainer no longer negatively affects breeding chances
- HMs can now be forgotten
    - Fly can now be used from the Start Menu after getting Mauville's badge
    - Cut and Strength no longer need a badge to be used
    - Cut trees and Strength boulders have been removed from everywhere but the Trick House
    - Rock Smash rocks have been removed from everywhere but Rusturf Tunnel. Brick Break can now also break them
    - The Escape Rope can by used in the Trick Room puzzles that involve Cut/Strength
    - Flash is no longer needed anywhere
    - Surf, Dive and Waterfall have been replaced by a key item
- Fly can now be used to go to more places:
    - The Abandoned Ship on Route 108
    - The Old Lady's Rest Stop on Route 111
    - Fiery Path on Route 112
    - Meteor Falls on Route 114
    - The Weather Institute on Route 119
    - The Safari Zone on Route 121
    - Mt. Pyre on Route 122
    - Sky Pillar on Route 131
    - Southern Island
- Can now use Soot Sack to see how much ash you have
- Much easier to make good Pokéblocks
- Pokémon in the Safari Zone can't flee
- Connected the north and northwest sections of the Safari Zone
- Both Shoal Cave items are now available in low tide, which is available more often
- Mirage Island now always appears
    - Pokémon from Mirage Island will have their Hidden Ability. In addition, their met location will be Mirage Island instead of Route 130
- Sealed Chamber still needs to be completed to open the Regi areas, but it's solved by simply reading the braille at the back of the inner room
    - The door to Sealed Chamber and the Regis' inner rooms are now automatically open
- Tickets for islands where Regigigas, Thundurus, and Giratina reside are given after beating the Elite Four
    - The Birth Island puzzle is much simpler
    - Navel Rock is slightly easier to navigate
- SS Tidal trainers can be rebattled every trip
- Pokémon in the Battle Frontier/Trainer Hill now register in the Pokédex

### Items:
- Eviolite now prevents Pokémon from evolving
- Healing items go back to their values before their Gen7 nerf, except the Super Potion which stays at its higher Gen7+ value of 60
- Some items, such as vitamins and hold items, are cheaper
- Ability Capsules, Ability Patches, Mints, and EV-reducing berries are available to buy in Lilycove
- The Good Rod is now obtained on the left side of Route 118 instead of the right, meaning it is available before getting Surf
- Sacred Ash now works in battles although it only revives one Pokémon
- Soul Dew uses its Gen 6 effect

### Trainers:
- Rich Boys all have shiny Pokémon
- Triathletes all have Pokémon with maxed HP and Speed EVs and IVs (to reflect training for endurance and speed)
- Pokémon Breeders all have Pokémon with perfect IVs. They can also have Hidden Abilities and Egg Moves

#### Bosses:
|          BOSSES           |        VANILLA       |    UPDATED    |
|:-------------------------:|:--------------------:|:-------------:|
|Rival 103                  |5||
|Roxanne                    |12, 12, 15            |11, 11, 13|
|Rival Rustboro             |13, 15||
|Brawly                     |16, 16, 19            |16, 16, 18|
|Archie Oceanic Museum      |N/A                   |17, 17, 19|
|Rival 110                  |18, 18, 20||
|Wally Mauville             |16                    |19|
|Wally Verdanturf           |N/A                   |21, 23|
|Wattson                    |20, 22, 22, 24||
|Wally Route 114            |N/A                   |25, 25, 27|
|Courtney Meteor Falls      |N/A                   |26, 26, 28|
|Tabitha Mt. Chimney        |18, 20, 22, 22        |27, 27, 29|
|Maxie Mt. Chimney          |24, 24, 25            |28, 29, 29, 30|
|Flannery                   |24, 24, 26, 29        |28, 30, 30, 32|
|Norman                     |27, 27, 29, 31        |31, 33, 33, 35|
|Shelly Weather Institute   |28, 28                |39, 39, 41|
|Rival 119                  |29, 29, 31            |40, 40, 41, 42|
|Winona                     |29, 29, 30, 31, 33    |40, 40, 41, 41, 43|
|Rival Lilycove             |31, 32, 32, 34        |43, 43, 43, 44, 45|
|Tabitha Magma Hideout      |26, 28, 30, 33        |45, 45, 47|
|Maxie Magma Hideout        |37, 38, 39            |46, 47, 47, 48|
|Matt Aqua Hideout          |34, 34                |47, 47, 49|
|Tate/Liza                  |41, 41, 42, 42        |49, 49, 51, 51|
|Courtney Space Center      |N/A                   |50, 50, 52|
|Tabitha/Maxie Space Center |36, 38, 40/42, 43, 44 |50, 50, 52/52, 52, 53|
|Matt/Shelly Seafloor Cavern|N/A/37, 37            |52, 52, 54/52, 52, 54|
|Archie Seafloor Cavern     |41, 41, 43            |53, 53, 54, 55|
|Regirock/Regice/Registeel  |40                    |55|
|Juan                       |41, 41, 43, 43, 46    |55, 55, 56, 56, 58|
|Rayquaza                   |70                    |60|
|Wally Victory Road         |41, 43, 44, 44, 45    |56, 56, 57, 57, 59|
|Sidney                     |46, 46, 48, 48, 49    |60, 60, 61, 61, 62|
|Phoebe                     |48, 49, 49, 50, 51    |61, 61, 62, 62, 63|
|Glacia                     |50, 50, 52, 52, 53    |62, 62, 63, 63, 64|
|Drake                      |52, 53, 53, 54, 55    |63, 63, 64, 64, 66|
|Wallace                    |55, 56, 56, 56, 57, 58|66, 66, 66, 67, 67, 69|
|Groudon/Kyogre             |70||
|Regigigas                  |N/A                   |70|
|Thundurus/Giratina         |N/A                   |70|
|Gym Leader/Wally rematch 1 |Various               |70, 70, 73, 73, 75|
|Gym Leader/Wally rematch 2 |Various               |75, 75, 78, 78, 80|
|Gym Leader/Wally rematch 3 |Various               |80, 80, 80, 83, 83, 85|
|Gym Leader/Wally rematch 4 |Various               |85, 85, 85, 88, 88, 90|
|Elite Four rematches       |N/A                   |86, 86, 86, 88, 88, 90|
|Wallace rematches          |N/A                   |87, 87, 87, 88, 88, 90|
|Steven                     |75, 76, 76, 76, 77, 78|87, 87, 88, 88, 89, 90|

### Berries:
- All berries: min and max yields have been boosted to a minimum of 3/6
- EV reducing berries: min/max are at least 6/12
- Cheri-Aspear:
    - Flavor: 10->20
- Figy-Iapapa:
    - Flavor: 10->30
- Tamato-Nomel:
    - Flavor: 20/10->40
- Spelon-Belue:
    - Flavor: 40/10->50
    - Smoothness: 70->35
- Liechi-Apicot:
    - Smoothness: 80->40
- Lansat:
    - Smoothness: 30->50
- Starf:
    - Smoothness: 30->50

### Abilities:
- Iron Fist: Boost: 20%->50%
- Normalize: Boost: 20%->50%
- Punk Rock: Renamed Amplify to fit Exploud line as well
- Wind Power: Grants immunity to wind moves and sandstorm damage
- Wind Rider: Grants immunity to sandstorm damage

### TMs:
|TM #|   Move   |Location|
|:--:|   :--:   |:------:|
|TM01|Focus Punch|Route 115|
|TM02|Dragon Claw|Meteor Falls|
|TM03|Water Pulse|Juan|
|TM04|Calm Mind|Slateport TM Shop|
|TM05|Roar|Route 114|
|TM06|Toxic|Lavaridge TM Shop|
|TM07|Hail|Shoal Cave|
|TM08|Bulk Up|Brawly|
|TM09|Bullet Seed|Route 104|
|TM10|Hidden Power|Fortree|
|TM11|Sunny Day|Scorched Slab|
|TM12|Taunt|Trick House|
|TM13|Ice Beam|Abandonded Ship|
|TM14|Blizzard|Lilycove Department Store|
|TM15|Hyper Beam|Lilycove Department Store|
|TM16|Light Screen|Lilycove Department Store|
|TM17|Protect|Lilycove Department Store|
|TM18|Rain Dance|Abandonded Ship|
|TM19|Giga Drain|Route 123|
|TM20|Safeguard|Lilycove Department Store|
|TM21|Frustration|Pacifidlog|
|TM22|Solar Beam|Safari Zone|
|TM23|Iron Tail|Meteor Falls|
|TM24|Thunderbolt|Mauville|
|TM25|Thunder|Lilycove Department Store|
|TM26|Earthquake|Seafloor Cavern|
|TM27|Return|Pacifidlog|
|TM28|Dig|Route 114|
|TM29|Psychic|Tate/Liza|
|TM30|Shadow Ball|Mt. Pyre|
|TM31|Brick Break|Sootopolis|
|TM32|Double Team|Route 113|
|TM33|Reflect|Lilycove Department Store|
|TM34|Shock Wave|Wattson|
|TM35|Flamethrower|Fiery Path|
|TM36|Sludge Bomb|Dewford|
|TM37|Sandstorm|Route 111|
|TM38|Fire Blast|Lilycove Department Store|
|TM39|Rock Tomb|Roxanne|
|TM40|Aerial Ace|Winona|
|TM41|Torment|Slateport|
|TM42|Facade|Norman|
|TM43|Secret Power|Route 111|
|TM44|Rest|Lilycove|
|TM45|Attract|Verdanturf|
|TM46|Thief|Slateport|
|TM47|Steel Wing|Granite Cave|
|TM48|Skill Swap|Mt. Pyre|
|TM49|Snatch|SS Tidal|
|TM50|Overheat|Flannery|
|TM51|Roost|Slateport TM Shop|
|TM52|Focus Blast|Victory Road|
|TM53|Energy Ball|Lilycove TM Shop|
|TM54|False Swipe|Slateport TM Shop|
|TM55|Brine|Lavaridge TM Shop|
|TM56|Signal Beam|Lavaridge TM Shop|
|TM57|Supercell Slam|Lilycove TM Shop|
|TM58|Psychic Fangs|Lilycove TM Shop|
|TM59|Dragon Pulse|Lilycove TM Shop|
|TM60|Drain Punch|Lilycove TM Shop|
|TM61|Will-O-Wisp|Slateport TM Shop|
|TM62|Silver Wind|Slateport TM Shop|
|TM63|Dazzling Gleam|Lilycove TM Shop|
|TM64|Seed Bomb|Lilycove TM Shop|
|TM65|Shadow Claw|Lilycove TM Shop|
|TM66|Payback|Lavaridge TM Shop|
|TM67|Power Gem|Fallarbor|
|TM68|Giga Impact|Lilycove TM Shop|
|TM69|Play Rough|Lilycove TM Shop|
|TM70|Leech Life|Lilycove TM Shop|
|TM71|Stone Edge|Lilycove TM Shop|
|TM72|Icicle Crash|Lilycove TM Shop|
|TM73|Thunder Wave|Slateport TM Shop|
|TM74|Nasty Plot|Lavaridge TM Shop|
|TM75|Swords Dance|Lavaridge TM Shop|
|TM76|Stealth Rock|Lavaridge TM Shop|
|TM77|Psych Up|Slateport TM Shop|
|TM78|Crunch|Lilycove TM Shop|
|TM79|Dark Pulse|Lilycove TM Shop|
|TM80|Rock Slide|Lilycove TM Shop|
|TM81|X-Scissor|Lilycove TM Shop|
|TM82|Night Slash|Lilycove TM Shop|
|TM83|Iron Head|Lilycove TM Shop|
|TM84|Poison Jab|Lilycove TM Shop|
|TM85|Aura Sphere|Lilycove TM Shop|
|TM86|Grass Knot|Lavaridge TM Shop|
|TM87|Bug Buzz|Lilycove TM Shop|
|TM88|Acrobatics|Lilycove TM Shop|
|TM89|U-turn|Lavaridge TM Shop|
|TM90|Body Slam|Lilycove TM Shop|
|TM91|Flash Cannon|Lilycove TM Shop|
|TM92|Trick Room|Lavaridge TM Shop|
|TM93|Liquidation|Lilycove TM Shop|
|TM94|Thunder Punch|Lilycove TM Shop|
|TM95|Fire Punch|Lilycove TM Shop|
|TM96|Ice Punch|Lilycove TM Shop|
|TM97|Earth Power|Lilycove TM Shop|
|TM98|Air Slash|Lilycove TM Shop|
|TM99|Body Press|Lilycove TM Shop|
|TM100|Moonblast|Lilycove TM Shop|

### Move Tutors:
#### Mainland:
- Double-Edge
- Dynamic Punch
- Explosion
- Fury Cutter
- Metronome
- Mimic
- Rollout
- Sleep Talk
- Substitute
- Swagger

#### Ever Grande:
- Hyper Voice
- Aqua Tail
- Drill Run
- High Horsepower
- Temper Flare

#### Battle Frontier Left:
- Rising Voltage
- Grassy Glide
- Expanding Force
- Zen Headbutt
- Scald
- Psycho Cut
- Lunge
- Throat Chop
- Solar Blade
- Dual Wingbeat
- Scorching Sands
- Knock Off
- Mega Punch
- Mega Kick

#### Battle Frontier Right:
- Electric Terrain
- Grassy Terrain
- Misty Terrain
- Psychic Terrain
- Iron Defense
- Ice Spinner
- Dragon Dance
- Defense Curl
- Endure
- Icy Wind
- Swift
- Seismic Toss
- Counter
- Dream Eater

### Moves:
- All moves automatically have their max PP amount
#### Many moves (especially signature moves) were given 100% accuracy and/or 10 PP as opposed to 5:
- Normal:
    - Barrage:
        - Power: 15->20
        - Accuracy: 85->100
    - Blood Moon:
        - PP: 5->10
    - Chatter:
        - Power: 65->80
    - Comet Punch:
        - Power: 18->20
        - Accuracy: 85->100
    - Constrict:
        - Power: 10->30
        - Chance to reduce speed: 10%->30%
    - Crush Claw:
        - Accuracy: 95->100
    - Cut:
        - Accuracy: 95->100
    - Dizzy Punch:
        - Power: 70->75
    - Double Slap:
        - Now hits exactly twice
        - Power: 15->30
        - Accuracy: 85->100
    - Egg Bomb:
        - Accuracy: 75->100
    - Frustration:
        - Max power: 102->127.5
    - Fury Attack:
        - Power: 15->20
        - Accuracy: 85->100
    - Fury Swipes:
        - Power: 18->20
        - Accuracy: 80->100
    - Head Charge:
        - No longer causes recoil
    - Hyper Drill:
        - PP: 5->10
    - Hyper Fang:
        - Accuracy: 90->100
    - Mega Punch:
        - Accuracy: 85->100
    - Present:
        - Accuracy: 90->100
        - Now heals allies similar to Pollen Puff
        - Damage odds:
            - 40% 40->20% 60
            - 30% 80->40% 80
            - 10% 120->20% 120
    - Relic Song:
        - Power: 75->100
    - Rock Climb:
        - Accuracy: 85->100
    - Return:
        - Max power: 102->127.5
    - Slam:
        - Accuracy: 75->100
    - Tail Slap:
        - Accuracy: 85->100
    - Take Down:
        - Accuracy: 85->100
    - Techno Blast:
        - PP: 5->10
    - Tera Starstorm:
        - PP: 5->10
- Fighting:
    - Arm Thrust:
        - Power: 15->20
    - Aura Sphere:
        - Power: 80->90
    - Collision Course:
        - PP: 5->10
    - Dynamic Punch:
        - Power: 100->150
    - Flying Press:
        - Accuracy: 95->100
    - Rolling Kick:
        - Accuracy: 85->100
    - Sky Uppercut:
        - Accuracy: 90->100
    - Submission:
        - Accuracy: 80->100
- Flying:
    - Aeroblast:
        - Accuracy: 95->100
        - PP: 5->10
    - Air Cutter:
        - Accuracy: 95->100
    - Air Slash:
        - Power: 75->80
        - Accuracy: 95->100
        - Now a wind move
    - Bleakwind Storm:
        - Power: 100->120
        - Accuracy: 80->100
    - Dual Wingbeat:
        - Accuracy: 90->100
    - Fly:
        - Accuracy: 95->100
    - Peck:
        - Power: 35->40
    - Sky Attack:
        - Accuracy: 90->100
- Poison:
    - Belch:
        - Accuracy: 90->100
    - Malignant Chain:
        - PP: 5->10
    - Mortal Spin:
        - Power: 30->50
    - Poison Sting:
        - Power: 15->20
    - Poison Fang:
        - Power: 50->60
- Ground:
    - Bonemerang:
        - Accuracy: 90->100
    - Bone Club:
        - Accuracy: 85->100
    - Bone Rush:
        - Accuracy: 90->100
    - Drill Run:
        - Accuracy: 95->100
    - High Horsepower:
        - Accuracy: 95->100
    - Mud Bomb:
        - Accuracy: 85->100
    - Mud Shot:
        - Accuracy: 95->100
    - Precipice Blades:
        - Accuracy: 85->100
    - Sandsear Storm:
        - Power: 100->120
        - Accuracy: 80->100
- Rock:
    - Ancient Power:
        - PP: 5->10
    - Diamond Storm:
        - Accuracy: 95->100
        - PP: 5->10
    - Mighty Cleave:
        - PP: 5->10
    - Rock Blast:
        - Accuracy: 90->100
    - Rock Slide:
        - Power: 75->80
        - Accuracy: 90->100
    - Rock Throw:
        - Accuracy: 90->100
    - Rock Tomb:
        - Accuracy: 95->100
    - Rock Wrecker:
        - Accuracy: 90->100
        - PP: 5->10
    - Stone Axe:
        - Power: 65->70
        - Accuracy: 90->100
- Bug:
    - Bug Bite:
        - Now a biting move
    - Pin Missile:
        - Accuracy: 95->100
    - Signal Beam:
        - Power: 75->80
    - Silver Wind:
        - PP: 5->10
    - Twineedle:
        - Power: 25->50
- Ghost:
    - Astonish:
        - Power: 30->40
    - Astral Barrage:
        - PP: 5->10
    - Moongeist Beam:
        - PP: 5->10
    - Ominous Wind:
        - PP: 5->10
    - Poltergeist:
        - Accuracy: 90->100
    - Shadow Force:
        - PP: 5->10
- Electric:
    - Bolt Strike:
        - Accuracy: 85->100
        - PP: 5->10
    - Electro Drift:
        - PP: 5->10
    - Electroweb:
        - Accuracy: 95->100
    - Fusion Bolt:
        - PP: 5->10
    - Parabolic Charge:
        - Power: 65->75
        - Target: Both foes and ally->both foes
    - Thunderclap:
        - Power: 70->80
        - PP: 5->10
    - Thunder Cage:
        - Accuracy: 90->100
    - Thunder Fang:
        - Accuracy: 95->100
    - Volt Tackle:
        - Paralyze chance: 10%->30%
        - No longer causes recoil
    - Wildbolt Storm:
        - Power: 100->120
        - Accuracy: 80->100
    - Zap Cannon:
        - Power: 120->150
- Fire:
    - Blaze Kick:
        - Accuracy: 90->100
    - Blue Flare:
        - Accuracy: 85->100
        - PP: 5->10
    - Burning Jealousy:
        - PP: 5->10
    - Fiery Dance:
        - Effect: 50%->100%
    - Fire Fang:
        - Accuracy: 95->100
    - Fusion Flare:
        - PP: 5->10
    - Inferno:
        - Power: 100->150
    - Magma Storm:
        - Power: 100->120
        - Accuracy: 75->100
        - PP: 5->10
    - Pyro Ball:
        - Accuracy: 90->100
        - PP: 5->10
    - Sacred Fire:
        - Accuracy: 95->100
        - PP: 5->10
    - Searing Shot:
        - PP: 5->10
    - V-create:
        - Accuracy: 95->100
- Water:
    - Aqua Tail:
        - Accuracy: 90->100
    - Crabhammer:
        - Accuracy: 90->100
    - Hydro Steam:
        - Power: 80->90
    - Octazooka:
        - Power: 65->90
        - Accuracy: 85->100
        - Effect: 50%->100%
    - Origin Pulse:
        - Power: 110->120
        - Accuracy: 85->100
    - Razor Shell:
        - Accuracy: 95->100
    - Steam Eruption:
        - Accuracy: 95->100
        - PP: 5->10
    - Surf:
        - Target: Both foes and ally->both foes
    - Surging Strikes:
        - PP: 5->10
    - Triple Dive:
        - Accuracy: 95->100
    - Water Shuriken:
        - Power: 15->25
- Grass:
    - Chloroblast:
        - Accuracy: 95->100
    - Leaf Tornado:
        - Accuracy: 90->100
    - Matcha Gotcha:
        - Accuracy: 90->100
    - Needle Arm:
        - Power: 60->75
        - Now a punching move
    - Razor Leaf:
        - Power: 55->60
        - Accuracy: 95->100
    - Seed Flare:
        - Accuracy: 85->100
        - PP: 5->10
    - Syrup Bomb:
        - Accuracy: 85->100
- Psychic:
    - Eerie Spell:
        - PP: 5->10
    - Hyperspace Hole:
        - PP: 5->10
    - Kinesis:
        - Accuracy: 80->100
    - Luster Purge/Mist Ball:
        - PP: 5->10
        - Effect: 50%->100%
    - Mystical Power:
        - Power: 70->80
        - Accuracy: 90->100
    - Photon Geyser:
        - PP: 5->10
    - Psyblade:
        - Power: 80->90
    - Psycho Boost:
        - Accuracy: 90->100
        - PP: 5->10
    - Psyshield Bash:
        - Accuracy: 90->100
    - Zen Headbutt:
        - Accuracy: 90->100
- Ice:
    - Blizzard:
        - PP: 5->10
    - Freeze Shock:
        - Accuracy: 90->100
        - PP: 5->10
    - Glacial Lance:
        - PP: 5->10
    - Glaciate:
        - Power: 65->80
        - Accuracy: 95->100
    - Ice Burn:
        - Accuracy: 90->100
        - PP: 5->10
    - Ice Fang:
        - Accuracy: 95->100
    - Icicle Crash:
        - Accuracy: 90->100
    - Icy Wind:
        - Accuracy: 95->100
    - Mountain Gale:
        - Accuracy: 85->100
        - PP: 5->10
- Dragon:
    - Clanging Scales:
        - PP: 5->10
        - No longer lowers user's Defense
    - Dual Chop:
        - Accuracy: 90->100
    - Dynamax Cannon:
        - PP: 5->10
    - Eternabeam:
        - Accuracy: 90->100
    - Fickle Beam:
        - PP: 5->10
    - Glaive Rush:
        - PP: 5->10
    - Roar of Time:
        - Accuracy: 90->100
        - PP: 5->10
    - Spacial Rend:
        - Accuracy: 95->100
        - PP: 5->10
- Dark:
    - Ceaseless Edge:
        - Power: 65->70
        - Accuracy: 90->100
    - Hyperspace Fury:
        - PP: 5->10
        - No longer lowers user's Defense
    - Lash Out:
        - PP: 5->10
    - Night Daze:
        - Accuracy: 95->100
    - Snarl:
        - Accuracy: 95->100
    - Wicked Blow:
        - PP: 5->10
- Steel:
    - Behemoth Bash:
        - PP: 5->10
    - Behemoth Blade:
        - PP: 5->10
    - Doom Desire:
        - PP: 5->10
    - Double Iron Bash:
        - PP: 5->10
    - Gear Grind:
        - Accuracy: 85->100
    - Gigaton Hammer:
        - PP: 5->10
    - Gyro Ball:
        - PP: 5->10
    - Make It Rain:
        - PP: 5->10
        - No longer lowers user's Special Attack
    - Metal Claw:
        - Accuracy: 95->100
    - Meteor Mash:
        - Power: 90->100
        - Accuracy: 90->100
    - Mirror Shot:
        - Accuracy: 85->100
    - Spin Out:
        - PP: 5->10
        - No longer lowers user's Speed
    - Steel Wing:
        - Accuracy: 90->100
    - Sunsteel Strike:
        - PP: 5->10
- Fairy:
    - Disarming Voice:
        - Power: 40->60
        - PP: 15->20
    - Fleur Cannon:
        - Accuracy: 90->100
        - PP: 5->10
    - Misty Explosion:
        - Power: 100->150
    - Play Rough:
        - Accuracy: 90->100
    - Springtide Storm:
        - Power: 100->120
        - Accuracy: 80->100
        - PP: 5->10
    - Strange Steam:
        - Accuracy: 95->100

### Summary Screen
- The following moves now show up as the right type both in battle and on the summary screen:
    - Weather Ball
    - Hidden Power
    - Judgement
    - Techno Blast
    - Multi-Attack
    - Revelation Dance
    - Raging Bull
    - Ivy Cudgel
    - Terrain Pulse
    - Moves affected by Liquid Voice
    - Aura Wheel
    - Moves affected by Aerilate, Refrigerate, Pixilate, and Galvanize
    - Moves affected by Normalize
- The following moves now show up as the right type in battle:
    - Tera Blast
    - Tera Starstorm

- The following moves/abilities/other effects show the correct power both in battle and on the summary screen:
    Moves:
        - Eruption/Water Spout/Dragon Energy
        - Return
        - Frustration
        - Weather Ball
        - Acrobatics
        - Damp
        - Misty Explosion
        - Terrain Pulse
        - Expanding Force
        - Rising Voltage
        - Psyblade
        - Facade
        - Solar Beam/Solar Blade in non-sunny weather
        - Earthquake/Magnitude in Grassy Terrain
        - Hydro Steam
    Abilities:
        - Technician
        - Reckless
        - Iron Fist
        - Sheer Force
        - Sand Force
        - Tough Claws
        - Strong Jaw
        - Mega Launcher
        - Water Bubble
        - Steelworker
        - Steely Spirit
        - Aerilate
        - Refrigerate
        - Pixilate
        - Galvanize
        - Normalize
        - Punk Rock
        - Transistor
        - Dragon's Maw
        - Rocky Payload
        - Sharpness
        - Hustle
    Misc:
        - Moves that always crit (Frost Breath, Storm Throw, Surging Strikes, Wicked Blow, Flower Trick)
            - Sniper
        - Strike count for regular moves
        - Punching Glove
        - STAB
            - Adaptability
        - Sun/Rain
        - Terrain
- The following moves/abilities/other effects show the correct power in battle:
    Moves:
        - Fury Cutter
        - Spit Up
        - Stored Power
        - Grav Apple
        - Rage Fist
        - Stomping Tantrum
    Misc:
        - Charge
        - Mud Sport/Water Sport

- The following effects on accuracy are now reflected in battle and on the summary screen:
    - Thunder and Hurricane having 50% accuracy in sun
    - Thunder, Hurricane, Bleakwind Storm, Wildbolt Storm, and Sandsear Storm having 100% accuracy in rain
        - Although the moves were boosted to have 100% accuracy all the time
    - Blizzard having 100% accuracy in snow/hail
    - Compound Eyes
    - Hustle
    - Victory Star
    - Wide Lens

### Pokémon:
- Pokémon have all their moves from their movesets from Gen 7 onwards, at the most recent levels
    - Natural Gift, Lucky Chant, Wring Out, Synchronoise, and Embargo have still been removed
- If a Pokémon can evolve by holding/being traded with an item, it now evolves from that item being used
    - Pokémon that evolve by trading with no held item now evolve by using a Linking Cord
    - Items that need to be held at a certain time now evolve by using that item at any time
- Catch rate is a minimum of 30 for legendaries/mythicals and 45 for the rest

<br>
<br>

- All starters:
    - Any with a STAB attack at level 5 or below had it swapped with the next attack to prevent the rival battle from being too hard

- Bulbasaur:
    - Atk: 49->50
    - Def: 49->50
    - Learns Magical Leaf, Venoshock, Giga Drain, Energy Ball, and Sludge Bomb by level up
    - Learns Poison Fang by Egg Move

- Ivysaur:
    - Evolution: 32->36
    - Learns Magical Leaf, Venoshock, Giga Drain, Energy Ball, and Sludge Bomb by level up
    - Learns Poison Fang by Egg Move

- Venusaur:
    - HP: 80->90
    - Learns Magical Leaf, Venoshock, Giga Drain, Energy Ball, and Sludge Bomb by level up
    - Learns Poison Fang by Egg Move

- Weedle:
    - Learns Bug Bite at level 7 instead of 9

- Beedrill:
    - Learns Leech Life by level up

- Nidoran F:
    - Learns Poison Tail, Venoshock, and Poison Jab by level up
    - Learns Double Kick at level 12 instead of level 25 to help against Roxanne

- Nidorina:
    - Learns Poison Tail, Venoshock, and Poison Jab by level up
    - Egg Groups: None->Monster/Field (can now breed)

- Nidoqueen:
    - SpA: 75->85
    - Learns Poison Tail, Venoshock, Poison Jab, Drill Run, and Earthquake by level up
    - Egg Groups: None->Monster/Field (can now breed)

- Nidoran M:
    - Def: 40->42
    - Learns Poison Tail, Venoshock, and Poison Fang by level up
    - Learns Double Kick at level 12 instead of level 25 to help against Roxanne

- Nidorino:
    - Learns Poison Tail, Venoshock, and Poison Fang by level up

- Nidoking:
    - SpD: 75->85
    - Learns Poison Tail, Venoshock, Poison Fang, Drill Run, and Earthquake by level up

- Pichu:
    - Held item: None->Light Ball
    - Can also evolve at level 12

- Pikachu:
    - Held item: Light Ball: 5%->100%
    - Learns Volt Tackle by level up

- Raichu:
    - Learns Volt Tackle by level up

- Alolan Raichu (postgame):
    - Learns Volt Tackle by level up

- Sandshrew/Sandslash:
    - Learn Earth Power by level up

- Cleffa:
    - Can also evolve at level 12
    - Learns Fairy Wind by level up

- Clefairy/Clefable:
    - Learn Fairy Wind and Alluring Voice by level up

- Vulpix/Ninetales:
    - Learn Mystical Fire by level up

- Oddish/Gloom/Vileplume/Bellossom:
    - Learn Energy Ball by level up

- Venonat:
    - SpA: 40->55
    - Learns Bug Bite, Struggle Bug, Venoshock, and Sludge Bomb by level up

- Venomoth:
    - Learns Bug Bite, Struggle Bug, Venoshock, and Sludge Bomb by level up

- Igglybuff:
    - Can also evolve at level 12

- Jigglypuff/Wigglytuff:
    - Learn Alluring Voice by level up

- Psyduck (postgame):
    - Type: Water->Water/Psychic
    - Learns Psybeam, Extrasensory, and Psychic by level up

- Golduck (postgame):
    - Type: Water->Water/Psychic
    - Learns Power Gem upon evolving
    - Learns Psybeam, Extrasensory, and Psychic by level up

- Poliwag:
    - SpA: 40->50

- Poliwhirl:
    - SpA: 50->65

- Poliwrath:
    - Atk: 95->100
    - Learns Liquidation, Drain Punch, and Sky Uppercut by level up

- Politoed:
    - Def: 75->80
    - SpA: 90->100

- Kadabra/Alakazam:
    - Held item: Twisted Spoon: 5%->100%

- Machop/Machoke/Machamp:
    - Learn Drain Punch by TM

- Geodude/Graveler:
    - Learn Rock Slide by level up

- Golem:
    - Def: 130->145
    - Spe: 45->50
    - Learns Rock Slide by level up

- Alolan Golem:
    - Def: 130->145
    - Spe: 45->50
    - Learns Rock Slide by level up

- Ponyta/Rapidash:
    - Learn Temper Flare and Blaze Kick by level up

- Grimer/Muk:
    - Learn Poison Jab by level up

- Shellder:
    - Learns Aqua Jet, Chilling Water, Bubble Beam, Waterfall, and Liquidation by level up

- Cloyster:
    - Held items:
        - Pearl: 50%->0%
        - Big Pearl: 5%->50%
        - Pearl String: 0%->5%
    - Learns Aqua Jet, Chilling Water, Bubble Beam, Waterfall, and Liquidation by level up
    - Learns Body Press by TM

- Gastly/Haunter/Gengar:
    - Type: Ghost/Poison->Ghost

- Voltorb/Electrode:
    - Learn Thunderbolt by level up

- Hisuian Voltorb/Hisuian Electrode (postgame):
    - Learn Thunderbolt by level up

- Cubone:
    - Speed: 35->40
    - Held items:
        - Thick Club: 5%->50%
        - Rare Bone: 0%->5%
    - Evolves into Alolan Marowak with a Fire Stone

- Marowak:
    - Speed: 45->50
    - Held items:
        - Thick Club: 5%->50%
        - Rare Bone: 0%->5%

- Alolan Marowak:
    - Speed: 45->50
    - Held items:
        - Thick Club: 5%->50%
        - Rare Bone: 0%->5%
    - Learns Fire Punch and Temper Flare by level up

- Tyrogue:
    - SpD: 35->55
    - Learns Rock Smash by level up

- Hitmonchan:
    - Learns Dizzy Punch by level up

- Slowpoke/Slowbro/Slowking:
    - Learn Psybeam by level up

- Magnemite/Magneton/Magnezone:
    - Learn Shock Wave and Thunderbolt by level up

- Koffing:
    - Atk: 65->60
    - SpA: 60->65
    - Evolves into Galarian Weezing with a Shiny Stone

- Weezing:
    - Atk: 90->85
    - SpA: 85->90

- Galarian Weezing:
    - Atk: 90->85
    - SpA: 85->90
    - Learns Misty Explosion by level up

- Rhyhorn/Rhydon:
    - Learn Rock Slide by level up

- Rhyperior:
    - Learns Rock Slide by level up
    - Learns Rock Wrecker upon evolving

- Happiny (postgame):
    - Base exp: 110->250
    - Held item: Lucky Egg: 0%->5%

- Chansey (postgame):
    - Held item: Lucky Punch: 50%->100%
    - Can also evolve at level 36
    - Learns Revival Blessing by level up

- Blissey (postgame):
    - Held item: Lucky Egg: 50%->100%
    - Learns Revival Blessing by level up

- Tangela/Tangrowth (postgame):
    - Learn Energy Ball by level up

- Horsea/Seadra/Kingdra:
    - Learn Surf by level up

- Scyther:
    - Catch rate: 45->90
    - Learns Pounce, Bug Bite, Aerial Ace, Dual Wingbeat, and Lunge by level up

- Scizor:
    - Learns Aerial Ace, Dual Wingbeat, Pounce, Bug Bite, Steel Wing, and Lunge by level up

- Kleavor:
    - Learns Aerial Ace, Dual Wingbeat, Pounce, Bug Bite, Rock Tomb, and Lunge by level up

- Elekid:
    - Atk: 63->65
    - Def: 37->40
    - SpA: 65->70
    - Catch rate: 45->150
    - Learns Electric Terrain by level up

- Electabuzz:
    - Atk: 83->85
    - Def: 57->60
    - SpA: 95->100
    - Learns Electric Terrain by level up

- Electivire:
    - Atk: 123->125
    - Def: 67->70
    - SpA: 95->100
    - Learns Electric Terrain by level up
    - Learns Drain Punch by TM

- Magby (postgame):
    - Def: 37->40
    - Spe: 83->85
    - Catch rate: 45->150

- Magmar (postgame):
    - Def: 57->60
    - Spe: 93->95

- Magmortar (postgame):
    - Ability: Flame Body->Flash Fire
    - Atk: 95->100
    - Def: 67->70
    - Spe: 83->85

- Magikarp:
    - Learns Bounce and Hydro Pump by level up
    - Learns Dragon Breath by Egg Move

- Gyarados:
    - Type: Water/Flying->Water
    - Learns Bounce by level up
    - Learns Dragon Breath by Egg Move

- Ditto:
    - All stats: 48->50

- Eevee:
    - Def: 50->55
    - SpA: 45->55
    - Now evolves into only Espeon (with a Sun Stone), Umbreon (with a Moon Stone), or Sylveon (with a Dawn Stone)
    - Swift and Bite swap levels
    - Learns Body Slam at level 45

- All Eeveelutions:
    - Learn Body Slam by level up

- Espeon:
    - Learns Hypnosis (replacing Swift), Psychic Terrain (replacing Power Swap), and Extrasensory (replacing Psychic) by level up
    - Learns Swift, Power Swap, and Power Gem at level 1
    - Learns Psychic at level 45

- Umbreon:
    - Learns Pursuit (replacing Snarl) upon evolving
    - Learns Feint Attack (replacing Assurance) and Foul Play by level up
    - Learns Snarl and Assurance at level 1
    - Learns Crunch at level 45

- Sylveon:
    - Learns Fairy Wind (replacing Disarming Voice) upon evolving
    - Learns Mist (replacing Swift), Disarming Voice (replacing Light Screen), and Dazzling Gleam (replacing Skill Swap) by level up
    - Learns Swift, Light Screen, and Skill Swap at level 1
    - Learns Alluring Voice at level 45

- Aerodactyl (postgame):
    - Learns Dual Wingbeat, Double-Edge, Head Smash, and Brave Bird by level up

- Ledyba (postgame):
    - Atk: 20->40
    - SpA: 40->20
    - Learns Gust, Struggle Bug, Bug Bite, Air Cutter, and Aerial Ace by level up

- Ledian (postgame):
    - HP: 65->80
    - Atk: 35->80
    - SpA: 55->35
    - Learns Gust, Struggle Bug, Bug Bite, Air Cutter, Aerial Ace, Lunge, and Acrobatics by level up

- Spinarak (postgame):
    - Atk: 60->65
    - Spe: 30->40

- Ariados (postgame):
    - Spe: 40->60

- Togepi (postgame):
    - Ability: Hustle->Early Bird
    - Can also evolve at level 16
    - Learns Fairy Wind, Draining Kiss, and Disarming Voice by level up

- Togetic:
    - Ability: Hustle->Early Bird
    - Learns Gust by evolving instead of Fairy Wind and learns Fairy Wind by level up instead
    - Learns Draining Kiss, Disarming Voice, and Air Cutter by level up

- Togekiss:
    - Ability: Hustle->Early Bird
    - Learns Fairy Wind, Gust, Draining Kiss, Disarming Voice, and Air Cutter by level up

- Natu/Xatu:
    - Learn Confusion and Psybeam by level up

- Mareep/Flaaffy (postgame):
    - Learn Tail Glow by Egg Move

- Ampharos (postgame):
    - Learns Tail Glow by level up

- Azurill:
    - Can also evolve at level 10
    - Type: Normal/Fairy->Water/Fairy
    - Gender Ratio: 25/75->50/50
    - Catch rate: 150->255
    - Learns Aqua Jet by level up

- Marill:
    - HP: 70->75
    - Atk: 20->40
    - Def: 50->60
    - SpA: 20->40
    - SpD: 50->60
    - Learns Aqua Jet by level up

- Azumarill:
    - Atk: 50->60
    - Spe: 50->60
    - Learns Aqua Jet by level up

- Sunflora (postgame):
    - Learns Morning Sun by level up

- Wooper/Quagsire:
    - Learn Water Pulse and Earth Power by level up

- Misdreavus/Mismagius:
    - Gender Ratio: 50/50->25/75

- Gligar/Gliscor:
    - Learn Wing Attack, Bulldoze, Aerial Ace, Dual Wingbeat, and Earthquake by level up

- Snubbull:
    - Learns Fairy Wind by level up

- Granbull:
    - Hidden Ability: Rattled->Strong Jaw
    - Learns Fairy Wind by level up

- Shuckle:
    - Learns Rock Tomb by level up

- Heracross:
    - Learns X-Scissor by TM
    - Catch rate: 45->90

- Sneasel/Weavile:
    - Learn Powder Snow, Bite, Ice Fang, Ice Punch, and Razor Wind by level up

- Slugma:
    - Evolution: 38->32

- Magcargo:
    - Learns Body Press by TM

- Swinub/Piloswine:
    - Learn Avalanche, Bulldoze, Stomping Tantrum, and High Horsepower by level up

- Mamoswine:
    - Learns Icicle Crash upon evolving
    - Learns Avalanche, Bulldoze, Stomping Tantrum, and High Horsepower by level up

- Octillery (postgame):
    - HP: 75
    - Atk: 105->100
    - Def: 75->85
    - SpA: 105->110
    - SpD: 75->85
    - Spe: 45

- Delibird:
    - Atk: 55->75
    - Catch rate: 45->90
    - Hidden Ability: Insomnia->Technician
    - Learns Ice Punch by level up

- Mantyke:
    - Catch rate: 25->90
    - Now evolves at level 25 instead of needing a Remoraid (which isn't available until the postgame) in the party
    - Learns Gust, Surf, and Hurricane by level up

- Mantine:
    - Learns Gust, Surf, and Hurricane by level up

- Skarmory:
    - Learns Dual Wingbeat by level up

- Houndour/Houndoom:
    - Learn Snarl and Dark Pulse by level up

- Phanpy/Donphan:
    - Learn Mud Shot by level up

- Smeargle:
    - Atk: 20->50
    - Def: 35->50
    - SpA: 20->50
    - SpD: 45->50

- Larvitar/Pupitar/Tyranitar:
    - Learn Mud-Slap by level up

- Lotad/Lombre/Ludicolo:
    - Learn Water Pulse by level up

- Seedot:
    - Learns Bullet Seed and Seed Bomb by level up

- Nuzleaf:
    - Learns Pursuit and Grass Whistle upon evolving
    - Learns Bullet Seed and Seed Bomb by level up

- Shiftry:
    - Learns Night Slash upon evolving
    - Learn Bullet Seed, Seed Bomb, Grass Whistle, and Pursuit by level up

- Ralts/Kirlia/Gardevoir:
    - Due to Disarming Voice's boost in power, Fairy Wind is learned in its place at level 1 instead. Disarming Voice is now learned at level 17.

- Gallade:
    - Learns Fairy Wind by level up

- Mega Gallade:
    - Ability: Inner Focus->Sharpness

- Shroomish:
    - Atk: 40->50

- Breloom:
    - Held items:
        - Tiny Mushroom: 50%->0%
        - Big Mushroom: 5%->50%
        - Balm Mushroom: 0%->5%
    - Learns Arm Thrust and Drain Punch by level up

- Slakoth/Vigoroth:
    - Learn Body Slam by level up

- Slaking:
    - Learns Body Slam, Focus Punch, and Giga Impact by level up

- Nincada:
    - Learns Mud Slap at level 1 and now learns Mud Shot in its place at level 15
    - Learns Struggle Bug, Bug Bite, and Leech Life by level up
    - Learns Hone Claws by Egg Move

- Ninjask:
    - Learns Struggle Bug, Mud Shot, and Leech Life by level up
    - Learns Steel Wing by TM
    - Learns Hone Claws by Egg Move

- Shedinja:
    - Learns Struggle Bug, Mud Shot, Fury Cutter, Bug Bite, Swords Dance, and Leech Life by level up
    - Learns Hone Claws by Egg Move

- Whismur:
    - Received Run Away as a second ability
    - Learn Disarming Voice by level up

- Loudred:
    - Received Amplify (Punk Rock) as a second ability
    - Learns Disarming Voice, Teeter Dance, and Dizzy Punch by level up

- Exploud:
    - Received Amplify (Punk Rock) as a second ability
    - Learns Hyper Voice upon evolving
    - Learn Disarming Voice, Teeter Dance, and Dizzy Punch by level up

- Makuhita:
    - Catch rate: 180->220
    - Learns Drain Punch by level up

- Hariyama:
    - Learns Drain Punch by level up

- Nosepass:
    - SpA: 45->55

- Probopass:
    - Def: 145->150
    - SpD: 150->145

- Sableye:
    - Loses Stall as an ability since it's worthless
    - Catch rate: 45->90

- Mawile:
    - Catch rate: 45->90
    - Held item: Occa Berry: 0%->50%
    - Learns Metal Claw and Smart Strike by level up

- Aron/Lairon/Aggron:
    - Learn Rock Throw by level up

- Meditite/Medicham:
    - Learn Rock Smash and Drain Punch by level up

- Gulpin:
    - Atk: 43->45
    - Def: 53->55
    - SpA: 43->45
    - SpD: 53->55

- Swalot:
    - Atk: 73->85
    - Def: 83->85
    - SpA: 73->85
    - SpD: 83->85

- Carvanha/Sharpedo:
    - Learn Waterfall by level up

- Wailmer/Wailord:
    - Learn Surf by level up

- Numel/Camerupt:
    - Held item: Rawst Berry: 0%->100%

- Torkoal:
    - Learns Incinerate by level up

- Spoink/Grumpig:
    - Learn Dazzling Gleam by level up

- Spinda:
    - All stats: 60->80

- Trapinch/Vibrava/Flygon:
    - Learn Dragon Breath by Egg Move

- Cacnea:
    - Learns Seed Bomb by level up

- Swablu:
    - Received Fluffy as a second Ability

- Altaria:
    - SpA: 70->80
    - Received Fluffy as a second Ability
    - Learns Air Slash by TM

- Mega Altaria:
    - SpD: 105->115

- Baltoy/Claydol:
    - Learn Zen Headbutt by level up

- Feebas:
    - Learns Hydro Pump by level up

- Milotic:
    - Learns Bubble Beam by level up

- Castform:
    - All stats: 70->80
    - Learns Surf, Flamethrower, Ice Beam, Thunder, and Solar Beam by level up
    - Learns Surf and Overheat by TM
    - Learns Gust, Twister, Heat Wave, and Fairy Wind by Egg Move

- Kecleon:
    - Learns Body Slam by level up

- Duskull/Dusclops:
    - Learn Spite by level up

- Dusknoir:
    - Learns Spite by level up
    - Learns Drain Punch by TM
    - Received Iron Fist as second Ability

- Banette:
    - Learns Astonish, Shadow Punch, and Shadow Claw by level up

- Chingling:
    - Can also evolve at level 19

- Chimecho:
    - Learns Psychic by level up

- Absol:
    - Hidden Ability: Justified->Sharpness
    - Learns Spite by Egg Move

- Snorunt/Glalie/Froslass:
    - Learn Aurora Beam by level up

- Spheal/Sealeo/Walrein:
    - Learn Ice Beam by level up

- Bagon/Shelgon/Salamence (postgame):
    - Learn Dragon Pulse by level up

- Beldum (postgame):
    - Learns Metal Claw by level up

- Metang/Metagross (postgame):
    - Learn Psybeam by level up

- Regirock/Regice/Registeel:
    - Learn Rest and Endure by level up

- Kyogre:
    - Learns Aurora Beam, Surf, and Thunder by level up
    - Learns Origin Pulse at level 63 instead of level 1

- Groudon:
    - Learns Bulldoze and Solar Blade by level up
    - Learns Precipice Blades at level 63 instead of level 1

- Rayquaza:
    - Swaps Dragon Ascent and Fly levels

- Jirachi (postgame):
    - Learns Flash Cannon by level up

- Deoxys (postgame):
    - Can use the Meteorite item to change forms

- Chimchar:
    - HP: 44->45
    - Atk: 58->60
    - Def: 44->45
    - SpA: 58->60
    - SpD: 44->45
    - Spe: 61->65
    - Evolution: 14->16
    - Learns Incinerate, Fire Punch, and Lava Plume by level up

- Monferno:
    - Learns Incinerate, Karate Chop, Vacuum Wave, Fire Punch, Lava Plume, Flamethrower, and Drain Punch by level up

- Infernape:
    - Learns Incinerate, Karate Chop, Vacuum Wave, Fire Punch, Lava Plume, Flamethrower, Drain Punch, and Aura Sphere by level up

- Starly:
    - Learns Dual Wingbeat by level up

- Staravia/Staraptor:
    - Learn Slash and Dual Wingbeat by level up

- Bibarel:
    - Learns Waterfall, Aqua Tail, Body Slam, and Tail Slap by level up

- Vespiquen (postgame):
    - Held items:
        - Honey: 0%->50%
        - Max Honey: 0%->5%
        - Poison Barb: 5%->0%

- Shellos/Gastrodon:
    - Learn Surf by level up

- Drifloon/Drifblim:
    - Learn Air Cutter and Air Slash by level up

- Buneary (postgame):
    - Can also evolve at level 23

- Spiritomb:
    - Learns Astonish, Knock Off, and Foul Play by level up

- Gible/Gabite/Garchomp (postgame):
    - Learn Stomping Tantrum and Earthquake by level up

- Skorupi/Drapion:
    - Learn Poison Tail by level up

- Croagunk:
    - Learns Rock Smash, Brick Break, and Drain Punch by level up

- Toxicroak:
    - HP: 83->85
    - Atk: 106->110
    - Def: 65->70
    - SpA: 86->90
    - SpD: 65->75
    - Learns Rock Smash, Brick Break, and Drain Punch by level up

- Snover/Abomasnow:
    - Learn Seed Bomb and Icicle Crash by level up

- All Rotom forms:
    - Catch rate: 45->90
    - Learn Parabolic Charge, Thunderbolt, and Shadow Ball by level up

- Rotom:
    - Def: 77->90
    - SpA: 95->100
    - SpD: 77->90
    - Spe: 91->100

- Rotom Heat:
    - Now learns Flamethrower by form change and instead learns Overheat by TM

- Rotom Wash:
    - Now learns Surf by form change instead of Hydro Pump

- Rotom Frost:
    - Now learns Ice Beam by form change and instead learns Blizzard by TM

- Rotom Fan:
    - Ability: Levitate->Wind Power

- Rotom Mow:
    - Now learns Energy Ball by form change instead of Leaf Storm

- Regigigas (postgame):
    - Learns Rest, Endure, Body Slam, and Headbutt by level up

- Giratina (postgame):
    - Level up learnset updated to be more consistent with Dialga and Palkia

- Lillipup/Herdier/Stoutland:
    - Learn Howl, Covet, and Body Slam by level up

- Munna/Musharna:
    - Learn Confusion by level up

- Drilbur/Excadrill:
    - Learn Mud Shot, Bulldoze, and Stomping Tantrum by level up

- Tympole:
    - Learns Surf by level up

- Palpitoad:
    - Learns Mud Bomb upon evolving
    - Learns Bulldoze, Earth Power, and Surf by level up

- Seismitoad:
    - HP: 105->110
    - Spe: 74->75
    - Learns Mud Bomb, Bulldoze, Stomping Tantrum, Earth Power, Liquidation, Earthquake, and Surf by level up
    - Learns Waterfall by TM

- Whimsicott:
    - Learns Magical Leaf, Disarming Voice, and Dazzling Gleam by level up
    - Learns Earth Power by TM

- Lilligant (postgame):
    - Learns Earth Power by TM

- Sandile:
    - Atk: 72->75
    - Evolution: 29->25
    - Learns Bulldoze, Stomping Tantrum, and High Horsepower by level up

- Krokorok:
    - Atk: 82->85
    - Spe: 74->75
    - Evolution: 40->38
    - Learns Bulldoze, Stomping Tantrum, and High Horsepower by level up

- Krookodile:
    - Atk: 117->120
    - Spe: 92->95
    - Learns Bulldoze, Stomping Tantrum, and High Horsepower by level up

- Tirtouga/Carracosta:
    - Learn Rock Throw, Rock Tomb, and Liquidation by level up
    - Learn Body Press by TM

- Emolga:
    - Learns Gust, Aerial Ace, Air Cutter, Dual Wingbeat, and Air Slash by level up

- Foongus:
    - Evolution: 39->36
    - Learns Venoshock by level up

- Amoonguss:
    - Learns Venoshock by level up
    - Held items:
        - Tiny Mushroom: 50%->0%
        - Big Mushroom: 5%->50%
        - Balm Mushroom: 0%->5%

- Joltik:
    - SpA: 57->60
    - Evolution: 36->32
    - Learns Struggle Bug, Thunderbolt, and Thunder by level up

- Galvantula:
    - Atk: 77->80
    - SpA: 97->100
    - Spe: 108->110
    - Learns Struggle Bug, Thunderbolt, and Thunder by level up

- Ferroseed/Ferrothorn:
    - Learn Seed Bomb by level up

- Klink:
    - Atk: 55->60
    - Def: 70->75
    - Evolution: 38->32
    - Learns Metal Claw, Rapid Spin, and Magnet Bomb by level up

- Klang:
    - Evolution: 49->42
    - Learns Metal Claw, Rapid Spin, and Magnet Bomb by level up

- Klinklang:
    - Learns Metal Claw, Rapid Spin, and Magnet Bomb by level up
    - Learns Body Press and Supercell Slam by TM

- Litwick:
    - Evolution: 41->36
    - Learns Incinerate, Burning Jealousy, Mystical Fire, Lava Plume, and Flamethrower by level up

- Lampent/Chandelure:
    - Learn Incinerate, Burning Jealousy, Mystical Fire, Lava Plume, and Flamethrower by level up

- Axew:
    - Evolution: 38->35
    - Learns Dragon Breath by Egg Move

- Fraxure:
    - Evolution: 48->45
    - Learns Dragon Breath by Egg Move

- Haxorus:
    - Learns Dragon Breath by Egg Move

- Mienfoo:
    - Evolution: 50->38
    - Learns Rock Smash and Double Kick by level up

- Mienshao:
    - Learns Rock Smash and Double Kick by level up

- Druddigon:
    - Hidden Ability: Mold Breaker->Rock Head
    - Learns Take Down, Double-Edge, and Head Smash by level up
    - Learns Dragon Breath by Egg Move

- Golett:
    - Evolution: 43->40
    - Learns Bulldoze by level up

- Golurk:
    - Learns Bulldoze by level up

- Deino (postgame):
    - Evolution: 50->30

- Zweilous (postgame):
    - Evolution: 64->55

- Larvesta:
    - Atk: 85->50
    - SpA: 50->85
    - Evolution: 59->56
    - Learns Flame Burst, Signal Beam, and Flamethrower by level up

- Volcarona:
    - Learns Flame Burst, Signal Beam, and Flamethrower by level up

- Thundurus (postgame):
    - Learns Extrasensory by level up
    - Learns Air Slash by TM

- Froakie:
    - SpA: 62->65
    - Spe: 71->74
    - Learns Bubble Beam and Surf by level up
    - Hidden Ability: Protean->Water Bubble

- Frogadier:
    - Learns Bubble Beam and Surf by level up
    - Hidden Ability: Protean->Water Bubble

- Greninja:
    - SpA: 103->105
    - Spe: 122->125
    - Learns Bubble Beam, Dark Pulse, and Surf by level up

- Fletchling:
    - Spe: 62->65
    - Learns Dual Wingbeat by level up

- Fletchinder:
    - Atk: 73->75
    - Spe: 84->85
    - Learns Flame Wheel, Temper Flare, and Dual Wingbeat by level up

- Talonflame:
    - Atk: 81->90
    - Spe: 126->130
    - Learns Flame Wheel, Temper Flare, and Dual Wingbeat by level up

- Pancham:
    - Learns Drain Punch by level up

- Pangoro
    - Learns Dizzy Punch, Dynamic Punch, Drain Punch, and Throat Chop by level up

- Honedge/Doublade/Aegislash:
    - Learn Metal Claw, Shadow Claw, and Smart Strike by level up

- Inkay:
    - Learn Feint Attack and Zen Headbutt by level up

- Malamar:
    - Learn Feint Attack, Zen Headbutt, and Throat Chop by level up

- Binacle:
    - Learns Rock Throw, Rock Tomb, Aqua Cutter, Rock Slide, and Liquidation by level up

- Barbaracle:
    - Learns Rock Throw, Rock Tomb, Aqua Cutter, Rock Slide, and Liquidation by level up
    - Learns Body Press by TM

- Skrelp (postgame):
    - Evolution: 48->37
    - Learns Dragon Breath by Egg Move

- Dragalge (postgame):
    - Learns Dragon Breath by Egg Move

- Tyrunt/Tyrantrum:
    - Learn Rock Throw, Smack Down, and Rock Tomb by level up
    - Learn Dragon Breath by Egg Move

- Hawlucha:
    - Learns Rolling Kick, Drain Punch, Sky Uppercut, Dual Wingbeat, and Acrobatics by level up

- Goomy:
    - Evolution: 40->35
    - Learns Life Dew by level up

- Sliggoo/Goodra:
    - Learns Life Dew by level up

- Klefki:
    - Catch rate: 75->90
    - Learns Dazzling Gleam by level up

- Noibat:
    - Evolution: 48->40
    - Learns Twister and Dragon Breath by level up

- Noivern:
    - SpA: 97->100
    - Spe: 123->125
    - Learns Twister and Dragon Breath by level up

- Drampa:
    - Type: Normal/Dragon->Dragon/Normal
    - Learns Swift by level up

- Rolycoly:
    - Learns Rock Throw, Rock Tomb, Rock Slide, and Power Gem by level up

- Carkol/Coalossal:
    - Learn Rock Throw, Rock Tomb, Flame Wheel, Rock Slide, Power Gem, Temper Flare, Flame Burst, Lava Plume, and Flamethrower by level up

- Cramorant:
    - HP: 70->75
    - SpA: 85->95
    - Spe: 85->95
    - Learns Gust, Water Pulse, Air Cutter, Surf, and Air Slash by level up

- Arrokuda:
    - HP: 41->45
    - Atk: 63->65
    - Spe: 66->70
    - Learns Aqua Cutter and Waterfall by level up
    - Learns Drill Peck by Egg Move

- Barraskewda:
    - HP: 61->65
    - Atk: 123->125
    - Spe: 136->140
    - Learns Aqua Cutter and Waterfall by level up
    - Learns Drill Peck by Egg Move

- Hatenna:
    - Evolution: 32->28
    - Catch rate: 235->255
    - Learns Extrasensory by level up

- Hattrem:
    - Evolution: 42->38
    - Learns Extrasensory by level up

- Hatterene:
    - Learns Extrasensory by level up

- Impidimp:
    - Evolution: 32->28
    - Learns Fairy Wind by level up

- Morgrem:
    - Evolution: 42->38
    - Learns Fairy Wind by level up

- Grimmsnarl:
    - Learns Fairy Wind by level up

- Snom:
    - Can also evolve at level 21

- Frosmoth:
    - SpD: 90->100
    - Spe: 65->75
    - Learns Silver Wind, Signal Beam, and Ice Beam by level up

- Stonjourner:
    - Learns Ancient Power and Curse by level up

- Cufant/Copperajah:
    - Received Sturdy as a second ability

- Sprigatito (postgame):
    - HP: 40->45
    - Atk: 61->65
    - Def: 54->55

- Floragato (postgame):
    - HP: 61->65
    - Def: 63->65
    - SpD: 63->65
    - Spe: 83->85

- Meowscarada (postgame):
    - HP: 76->80
    - SpA: 81->80
    - Spe: 123->125
    - Learns Throat Chop by level up

- Pawmot:
    - Learns Drain Punch by TM

- Fidough:
    - HP: 37->40
    - Learns Fairy Wind by level up

- Dachsbun:
    - HP: 57->60
    - Atk: 80->90
    - Learns Body Press upon evolving
    - Learns Fairy Wind by level up

- Tadbulb:
    - Hidden Ability: Damp->Volt Absorb
    - Learns Shock Wave and Parabolic Charge by level up

- Bellibolt:
    - HP: 109->110
    - Atk: 64->65
    - Def: 91->95
    - SpA: 103->105
    - SpD: 83->95
    - Hidden Ability: Damp->Volt Absorb
    - Learns Shock Wave and Parabolic Charge by level up
    - Learns Earth Power and Surf by TM

- Wattrel/Kilowattrel:
    - Learn Gust, Shock Wave, Air Cutter, Tailwind, Air Slash, and Thunder by level up
    - Learn Rain Dance by TM
    - Learn Heat Wave by Egg Move

- Bombirdier:
    - Atk: 103->105
    - Spe: 82->85
    - Learns Aerial Ace, Feint Attack, Drill Peck, and Throat Chop by level up

- Cyclizar:
    - Learns Headbutt and Body Slam by level up

- Glimmet/Glimmora:
    - Learn Acid and Sludge Bomb by level up

- Flamigo:
    - Learns Brick Break, Dual Wingbeat, Jump Kick, and High Jump Kick by level up

- Cetoddle/Cetitan:
    - Learn Ice Fang and Icicle Crash by level up
