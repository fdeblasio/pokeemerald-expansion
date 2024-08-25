# pokeemerald-expansion

```
Based off RHH's pokeemerald-expansion 1.9.1 https://github.com/rh-hideout/pokeemerald-expansion/
```

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
        - Press `L` to use last selected Poké Ball.
        - Hold `L` to change selection with the D-Pad.
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
    - Existing item data but missing effects:
        - Gimmighoul Coin
        - Booster Energy
        - Tera Shards
        - Tera Orb
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

There are some mechanics, moves and abilities that are missing and being developed. Check [the project's milestones](https://github.com/rh-hideout/pokeemerald-expansion/milestones) to see which ones.


### [Documentation on features can be found here](https://github.com/rh-hideout/pokeemerald-expansion/wiki)

### Please consider crediting the entire [list of contributors](https://github.com/rh-hideout/pokeemerald-expansion/wiki/Credits) in your project, as they have all worked hard to develop this project :)

## Contributions/Acknowledgements
- [pret's initial decompilation](https://github.com/pret/pokeemerald)
- [RHH's Emerald Expansion](https://github.com/rh-hideout/pokeemerald-expansion)
    - Fill out individual contributers (https://github.com/rh-hideout/pokeemerald-expansion/wiki/Credits)
- DizzyEgg
    - Starting the Emerald Expansion
- [Porymaps](https://github.com/huderlem/porymap/releases/tag/5.1.1)
- Lunos
    - [Fixing Snow weather](https://github.com/pret/pokeemerald/wiki/Fix-Snow-Weather)
    - [Swapping party using Select](https://www.pokecommunity.com/showpost.php?p=10420662)
    - [Displaying Return/Frustration power in summary screen](https://www.pokecommunity.com/showpost.php?p=10575976&postcount=420)
- AsparagusEduardo
    - [Not showing dex entries until the Pokédex is received](https://github.com/pret/pokeemerald/wiki/Not-showing-dex-entries-until-getting-the-Pok%C3%A9dex)
- Ghoulslash
    - [Fixing the surfing dismount bug](https://github.com/pret/pokeemerald/wiki/Surfing-Dismount-Ground-Effects)
    - [Implementing shops using badge count](https://github.com/pret/pokeemerald/wiki/Shop-Items-By-Badge-Count)
    - [Bag sorting](https://www.pokecommunity.com/showpost.php?p=10167488&postcount=84)
- Jaizu
    - [Implementing the FRLG bag sound](https://www.pokecommunity.com/showpost.php?p=10205757)
- Buffel Saft 
    - [Showing EVs/IVs in the summary screen](https://www.pokecommunity.com/showpost.php?p=10410302)
    - [Removing the need to water berries on rainy routes](https://www.pokecommunity.com/showpost.php?p=10349397&postcount=258)
    - [LGPE-Style bonus Premier Balls](https://github.com/pret/pokeemerald/wiki/LGPE-Style-Bonus-Premier-Balls)
- [Zeturic for a wrapping summary screen](https://www.pokecommunity.com/showpost.php?p=10060875&postcount=27)
- [Diego Mertens for adding the Move Relearner to the summary screen](https://www.pokecommunity.com/showpost.php?p=10470602)
- [Flametix for fixing the RESET_FONT bug](https://github.com/pret/pokeemerald/wiki/Implement-Missing-Text-Function-RESET_FONT)
- [devolov for removing Use on Key Items with no field use](https://github.com/pret/pokeemerald/wiki/Make-Key-Items-That-Cannot-Be-Used-In-The-Field-Not-Show-A-Use-or-Register-Option)
- [Anon822 for removing map popups for the same map section](https://www.pokecommunity.com/showpost.php?p=10449889)
- [Fyreeire for removing the extra save confirmation](https://github.com/pret/pokeemerald/wiki/Remove-the-extra-save-confirmation)
- [hjk321 for extra save space](https://github.com/pret/pokeemerald/wiki/Extra-save-space-with-two-lines-of-code)
- [ellabrella for increasing text speed beyond fast](https://www.pokecommunity.com/showpost.php?p=10400198)
- [Mashanny for making text speed up without holding A/B](https://www.pokecommunity.com/showpost.php?p=10266385)
- [Sapphire Jester for making the Soot Sack usuable](https://www.pokecommunity.com/showpost.php?p=10222284&postcount=178)

## Known bugs and other notes
- Using the Exp. Share can cause your team to become overpowered
- Followers will stop following you if you use the naming screen from the party menu. It will start to follow you again if you talk to it
- Newer Pokémon don't have follower sprites
- Newer moves don't have animations
- When using items, the text box will be empty at the end. This is caused by some of the code changes from speeding up the text
- AI_FLAG_ACE_POKEMON potentially broken in multi-battles (maybe only if both trainers have it)
- If you help one of the Lilycove Pokémon Center ladies, the other lady thinks you've already helped her as well
    - Could have something to do with this: sContestLadyPtr->id = LILYCOVE_LADY_CONTEST

### Potentially just savefile issues due to merging upcoming/playing while hacking
- Lilycove ladies crash the game
- Some of the EV-reducing berries on Route 123 will randomly disappear and then come back
    - This may be related to the amount of overworld sprites/palettes
- Moving an Pokémon in the PC seems to duplicate its item in the bag
- Items in the Battle Pyramid's Battle Bag/held items in the Battle Pike are turning into Poke Balls
    - Seems to happen after trainer battles?
- Contest reporter says a number instead of the contest category
    - The corresponding TV report thinks a winning Pokémon came in last

## Changes
- NOTE: This all assumes there are no rebasing errors
- Wild Pokémon and Trainers have their levels increased to make grinding less of a pain
    - However, with the Exp Share now affecting all party members, this can lead to becoming overleveled
- Decapitalization
- Some areas made easier to navigate
    - Route 102/103: Path from Littleroot to rival is more direct
- Some reversions back to Ruby and Sapphire
    - Birch is chased by a Poochyena
    - Some trainers on Routes 104 and 117 go back to their original locations
- Gym Leaders use more Hoenn Pokémon
- Gym Leaders and Magma/Aqua Admins/Leaders no longer have underleveled evolutions
- Team Magma are also focused on Ground types than Fire types to avoid overlap with Flannery
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
- Houndour was added to the Hoenn Pokédex to give Team Magma more variety
- Pokémon can now be listed as orange in the Pokédex
- The Safari Zone is now in the postgame only. Its regular Pokémon have been moved to other locations
- Underwater areas now connect better
- Frontier Brains have updated teams
- Battle Pyramid wild Pokémon have been updated
- Battle Frontier no longer requires saving
- Certain sections are blocked off until gyms or rivals are defeated
- Duncan is given more battles. The battle in Verdanturf starts with Grassy Terrain
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
- Rainy routes will automatically water berries
- Premier Balls are now given for every multiple of 10 of any ball you buy (as opposed to only 1 for 10+ Poke Balls)
- Faster text speed
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
    - Wynaut from Mirage Island will have their Hidden Ability
- Sealed Chamber still needs to be completed to open the Legendary Beast areas, but it's solved by simply pressing A in the inner room
    - The door to Sealed Chamber and the Legendary Beasts' inner rooms are now automatically open
- Steven now gives something else
- Tickets for Birth Island and Navel Rock reside are given after beating the Elite Four
    - The Birth Island puzzle is much simpler
    - Navel Rock is slightly easier to navigate
- SS Tidal trainers can be rebattled every trip
- Pokémon in the Battle Frontier/Trainer Hill now register in the Pokédex

### Items:
- Eviolite now prevents Pokémon from evolving
- Healing items go back to their values before their Gen7 nerf, except the Super Potion which stays at its higher Gen7+ value of 60
- Some items, such as vitamins and hold items, are cheaper
- Ability Capsules, Ability Patches, Mints, and EV-reducing berries are available to buy in Lilycove
- The Good Rod is now obtained on the left side of Route 118 instead of the right
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
|Duncan Mauville            |16                    |19|
|Duncan Verdanturf          |N/A                   |21, 23|
|Wattson                    |20, 22, 22, 24||
|Duncan Route 114           |N/A                   |25, 25, 27|
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
|Courtney                   |N/A                   |50, 50, 52|
|Tabitha/Maxie              |36, 38, 40/42, 43, 44 |50, 50, 52/52, 52, 53|
|Matt/Shelly                |N/A/37, 37            |52, 52, 54/52, 52, 54|
|Archie Seafloor Cavern     |41, 41, 43            |53, 53, 54, 55|
|Raikou/Entei/Suicune       |40                    |55|
|Glacia                     |41, 41, 43, 43, 46    |55, 55, 56, 56, 58|
|Rayquaza                   |70                    |60|
|Duncan Victory Road        |41, 43, 44, 44, 45    |56, 56, 57, 57, 59|
|Sidney                     |46, 46, 48, 48, 49    |60, 60, 61, 61, 62|
|Phoebe                     |48, 49, 49, 50, 51    |61, 61, 62, 62, 63|
|Juan                       |50, 50, 52, 52, 53    |62, 62, 63, 63, 64|
|Drake                      |52, 53, 53, 54, 55    |63, 63, 64, 64, 66|
|Wallace                    |55, 56, 56, 56, 57, 58|66, 66, 66, 67, 67, 69|
|Groudon/Kyogre             |70||
|Birth Island               |N/A                   |70|
|Navel Rock                 |N/A                   |70|
|Gym Leader/Duncan rematch 1|Various               |70, 70, 73, 73, 75|
|Gym Leader/Duncan rematch 2|Various               |75, 75, 78, 78, 80|
|Gym Leader/Duncan rematch 3|Various               |80, 80, 80, 83, 83, 85|
|Gym Leader/Duncan rematch 4|Various               |85, 85, 85, 88, 88, 90|
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
|TM03|Water Pulse|Slateport TM Shop|
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
|TM72|Icicle Crash|Glacia|
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
    - Electro Web:
        - Accuracy: 95->100
    - Fusion Bolt:
        - PP: 5->10
    - Parabolic Charge:
        - Power: 65->75
        - Target: Both foes and ally->both foes
    - Thunderclap:
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
    - Hidden Power
    - Judgement
    - Techno Blast
    - Revelation Dance
    - Multi-Attack
    - Aura Wheel
    - Raging Bull
    - Ivy Cudgel
    - Moves affected by Normalize, Aerilate, Refrigerate, Pixilate, Galvanize, or Liquid Voice
- The following moves now show up as the right type in battle:
    - Weather Ball
    - Terrain Pulse
    - Tera Blast
    - Tera Starstorm

- The following moves/abilities/other effects show the correct power both in battle and on the summary screen:
    - STAB/Adaptability
    - Eruption/Water Spout/Dragon Energy
    - Return
    - Frustration
    - Acrobatics
    - Facade
    - Technician
    - Toxic Boost
    - Flare Boost
    - Reckless
    - Iron Fist
    - Sheer Force
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
    - Punching Glove
    - Hustle
    - Moves that always crit (Frost Breath, Storm Throw, Surging Strikes, Wicked Blow, Flower Trick)/Sniper
    - Strike count for regular moves
- The following moves/abilities/other effects show the correct power in battle:
    - Fury Cutter
    - Spit Up
    - Weather Ball
    - Stored Power
    - Misty Explosion
    - Grav Apple
    - Terrain Pulse
    - Expanding Force
    - Rising Voltage
    - Psyblade
    - Rage Fist
    - Solar Beam/Solar Blade in non-sunny weather
    - Stomping Tantrum
    - Earthquake/Magnitude in Grassy Terrain
    - Sand Force
    - Hydro Steam
    - Sun/Rain
    - Terrain
    - Charge
    - Mud Sport/Water Sport

- The following effects on accuracy are now reflected in battle and on the summary screen:
    - Compound Eyes
    - Hustle
    - Victory Star
    - Wide Lens
- The effects of weather on accuracy is now reflected in battle:
    - Thunder and Hurricane having 50% accuracy in sun
    - Thunder, Hurricane, Bleakwind Storm, Wildbolt Storm, and Sandsear Storm having 100% accuracy in rain
    - Blizzard having 100% accuracy in snow/hail

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

- Caterpie:
    - CATerpie/CATerpillar
    - Learns Bug Bite at level 7 instead of 9

- Butterfree:
    - Learns Air Cutter and Signal Beam by level up

- Cleffa:
    - Can also evolve at level 12
    - Learns Fairy Wind by level up

- Clefairy/Clefable:
    - Learn Fairy Wind and Alluring Voice by level up

- Vulpix/Ninetales:
    - Learn Mystical Fire by level up

- Diglett:
    - Learns Stomping Tantrum by level up

- Dugtrio:
    - HP: 35->50
    - Learns Stomping Tantrum by level up

- Meowth:
    - Atk: 45->55
    - Learns Cut and Covet by level up

- Alolan Meowth:
    - Def: 35->40
    - SpA: 50->55
    - Can also evolve at level 28
    - Learns Pursuit and Thief by level up
    - Learns Cut by TM

- Galarian Meowth:
    - Atk: 65->75
    - Learns Bullet Punch by level up
    - Learns Cut by TM

- Persian:
    - HP: 65->70
    - Atk: 70->100
    - Learns Cut and Covet by level up

- Alolan Persian:
    - HP: 65->70
    - Def: 60->65
    - SpA: 75->100
    - Learns Pursuit and Thief by level up
    - Learns Cut by TM

- Perrserker:
    - Atk: 110->115
    - SpA: 50->60
    - SpD: 60->65
    - Spe: 50->65
    - Learns Bullet Punch by level up
    - Learns Cut by TM

- Psyduck (Battle Tent/Battle Frontier only):
    - Type: Water->Water/Psychic

- Golduck (Battle Tent/Battle Frontier only):
    - Type: Water->Water/Psychic

- Zubat:
    - Learns Gust by level up

- Golbat:
    - Can also evolve at level 33
    - Learns Gust by level up

- Crobat:
    - Learns Gust by level up

- Growlithe/Arcanine:
    - Learn Temper Flare by level up

- Poliwrath
    - Atk: 95->100
    - Learns Liquidation, Drain Punch, and Sky Uppercut by level up

- Politoed
    - Def: 75->80
    - SpA: 90->100

- Kadabra/Alakazam:
    - Held item: Twisted Spoon: 5%->100%

- Machamp:
    - Learns Drain Punch by TM

- Bellsprout/Weepinbell:
    - Learn Absorb, Mega Drain, Magical Leaf, Giga Drain, Venoshock, and Seed Bomb by level up

- Victreebel:
    - Learns Absorb, Mega Drain, Magical Leaf, Giga Drain, Venoshock, Seed Bomb, Poison Fang, and Solar Blade by level up

- Golem:
    - Def: 130->145
    - Spe: 45->50

- Alolan Golem (not in main game):
    - Def: 130->145
    - Spe: 45->50

- Gastly/Haunter/Gengar:
    - Type: Ghost/Poison->Ghost

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

- Dodrio:
    - Learns Body Slam by level up

- Koffing:
    - Atk: 65->60
    - SpA: 60->65

- Weezing:
    - Atk: 90->85
    - SpA: 85->90

- Galarian Weezing (postgame):
    - Atk: 90->85
    - SpA: 85->90
    - Learns Misty Explosion by level up

- Rhyperior:
    - Learns Rock Wrecker upon evolving

- Happiny:
    - Base exp: 110->250
    - Held item: Lucky Egg: 0%->5%

- Chansey:
    - Held item: Lucky Punch: 50%->100%
    - Can also evolve at level 36
    - Learns Revival Blessing by level up

- Blissey:
    - Held item: Lucky Egg: 50%->100%
    - Learns Revival Blessing by level up

- Tangela/Tangrowth:
    - Learn Energy Ball by level up

- Pinsir:
    - Catch rate: 45->90

- Mime Jr./Mr. Mime (Battle Tent/Battle Frontier only):
    - Type: Psychic/Fairy->Psychic
    - Gender Ratio: 50/50->100/0

- Smoochum (Battle Tent/Battle Frontier only):
    - Def: 15->20

- Jynx (Battle Tent/Battle Frontier only):
    - Def: 35->40

- Elekid (postgame):
    - Atk: 63->65
    - Def: 37->40
    - SpA: 65->70
    - Catch rate: 45->150
    - Learns Electric Terrain by level up

- Electabuzz (postgame):
    - Atk: 83->85
    - Def: 57->60
    - SpA: 95->100
    - Learns Electric Terrain by level up

- Electivire (postgame):
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

- Eevee:
    - Def: 50->55
    - SpA: 45->55
    - Gender Ratio: 87.5/12.5->50/50
    - Now evolves into only Espeon (with a Sun Stone) and Umbreon (with a Moon Stone)
    - Swift and Bite swap levels
    - Learns Body Slam at level 45

- Espeon:
    - Based on Japanese mythical cats
    - Gender Ratio: 87.5/12.5->50/50
    - Learns Hypnosis (replacing Swift), Psychic Terrain (replacing Power Swap), and Extrasensory (replacing Psychic) by level up
    - Learns Body Slam, Swift, Power Swap, and Power Gem at level 1
    - Learns Psychic at level 45

- Umbreon:
    - Gender Ratio: 87.5/12.5->50/50
    - Learns Pursuit (replacing Snarl) upon evolving
    - Learns Feint Attack (replacing Assurance) by level up
    - Learns Body Slam, Snarl and Assurance at level 1
    - Learns Crunch at level 45

- Aerodactyl (postgame):
    - Learns Dual Wingbeat, Double-Edge, Head Smash, and Brave Bird by level up

- Munchlax:
    - Can also evolve at level 20
    - Learns Gastro Acid and Power-Up Punch by Egg Move

- Snorlax:
    - Learns Slack Off by level up

- Bayleef (postgame):
    - Evolution: 32->36

- Totodile (postgame):
    - Evolution: 18->16

- Crocnaw (postgame):
    - Evolution: 30->36

- Ledyba:
    - Atk: 20->40
    - SpA: 40->20
    - Learns Gust, Struggle Bug, Bug Bite, Air Cutter, and Aerial Ace by level up
    - Learns Tackle and Supersonic at level 6 to avoid issues with Wally battle

- Ledian:
    - HP: 65->80
    - Atk: 35->80
    - SpA: 55->35
    - Evolves into ??? at level 38
    - Learns Gust, Struggle Bug, Bug Bite, Air Cutter, Aerial Ace, Lunge, and Acrobatics by level up

- ???:
    - Type: Bug/Fighting
    - HP: 70
    - Atk: 120
    - Def: 60
    - SpA: 75
    - SpD: 110
    - Spe: 85
    - Abilities: Swarm/Early Bird/Iron Fist

- Spinarak (postgame):
    - Atk: 60->65
    - Spe: 30->40

- Ariados (postgame):
    - Spe: 40->60

- Togepi:
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
    - Learns Confusion and Psybeam by level up

- Mareep/Flaaffy (postgame):
    - Learn Tail Glow by Egg Move

- Ampharos (postgame):
    - Learns Tail Glow by level up

- Azurill (Battle Tent/Battle Frontier only):
    - Type: Normal/Fairy->Water/Fairy
    - Gender Ratio: 25/75->50/50
    - Catch rate: 150->255

- Marill (Battle Tent/Battle Frontier only):
    - HP: 70->75
    - Atk: 20->40
    - Def: 50->60
    - SpA: 20->40
    - SpD: 50->60

- Azumarill (Battle Tent/Battle Frontier only):
    - Atk: 50->60
    - Spe: 50->60

- Misdreavus/Mismagius (Battle Tent/Battle Frontier only):
    - Gender Ratio: 50/50->25/75

- Gligar/Gliscor (postgame):
    - Learn Dual Wingbeat by level up

- Snubbull:
    - Learns Fairy Wind by level up

- Granbull:
    - Hidden Ability: Rattled->Strong Jaw
    - Learns Fairy Wind by level up

- Heracross:
    - Learns X-Scissor by TM
    - Catch rate: 45->90

- Sneasel/Weavile:
    - Included in the [cat photo](https://archives.bulbagarden.net/media/upload/5/51/Cats_by_Kino_Takahashi.png)
    - Learn Powder Snow, Bite, Ice Fang, Ice Punch, and Razor Wind by level up

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

- Delibird (Battle Tent/Battle Frontier only):
    - Atk: 55->75
    - Hidden Ability: Insomnia->Technician

- Stantler (postgame):
    - Evolves into Wyrdeer by simply knowing Psyshield Bash
    - Learns Psyshield Bash by level up

- Raikou:
    - Hidden Ability: Inner Focus -> Volt Absorb
    - Learns Shock Wave and Thunderbolt by level up

- Entei:
    - Hidden Ability: Inner Focus -> Flash Fire
    - Learns Flame Burst and Temper Flare by level up

- Suicune:
    - Hidden Ability: Inner Focus -> Water Absorb
    - Learns Bubble Beam and Scald by level up

- Lugia (postgame):
    - Learns Brave Bird by level up

- Treecko (Battle Tent/Battle Frontier only):
    - Atk: 45->65
    - SpA: 65->45

- Grovyle (Battle Tent/Battle Frontier only):
    - Atk: 65->85
    - SpA: 85->65

- Sceptile (Battle Tent/Battle Frontier only):
    - Atk: 85->105
    - SpA: 105->85

- Poochyena:
    - Despite their canine-esque features, hyenas are actually from the same suborder as cats
    - Speed: 35->40
    - Hidden Ability: Rattled->Strong Jaw

- Mightyena:
    - Despite their canine-esque features, hyenas are actually from the same suborder as cats
    - Atk: 90->100
    - Speed: 70->80
    - Hidden Ability: Moxie->Strong Jaw

- Dustox (Battle Tent/Battle Frontier only):
    - Sp. Def: 90->100 to match Beautifly's stat increase

- Wingull/Pelipper:
    - Learn Gust by level up

- Surskit/Masquerain:
    - Learn Struggle Bug by level up

- Breloom:
    - Held items:
        - Tiny Mushroom: 50%->0%
        - Big Mushroom: 5%->50%
        - Balm Mushroom: 0%->5%
    - Learns Arm Thrust and Drain Punch by level up

- Nincada:
    - Learns Mud Slap at level 1 and now learns Mud Shot in its place at level 15
    - Learns Bug Bite by level up

- Ninjask:
    - Learns Mud Shot and Leech Life by level up
    - Learns Steel Wing by TM

- Shedinja:
    - Learns Mud Shot, Fury Cutter, Bug Bite, Swords Dance, and Leech Life by level up

- Whismur (Battle Tent/Battle Frontier only):
    - Received Run Away as a second ability

- Loudred (Battle Tent/Battle Frontier only):
    - Received Amplify (Punk Rock) as a second ability

- Exploud (Battle Tent/Battle Frontier only):
    - Received Amplify (Punk Rock) as a second ability

- Makuhita:
    - Catch rate: 180->220

- Probopass:
    - Def: 145->150
    - SpD: 150->145

- Skitty:
    - Def: 45->35
    - SpA: 35->55
    - SpD: 35->45
    - Spe: 50->55
    - Learns Quick Attack, Swift, Headbutt, and Hyper Voice by level up

- Delcatty:
    - HP: 70->75
    - Atk: 65->55
    - Def: 65->55
    - SpA: 55->95
    - SpD: 55->65
    - Spe: 90->105
    - Learns Quick Attack, Swift, Headbutt, and Hyper Voice by level up

- Sableye:
    - Loses Stall as an ability since it's worthless
    - Catch rate: 45->90

- Mawile:
    - Catch rate: 45->90
    - Held item: Occa Berry: 0%->50%
    - Learns Metal Claw and Smart Strike by level up

- Plusle:
    - SpD: 75->85

- Minun:
    - SpA: 75->85

- Volbeat:
    - Atk: 73->75
    - SpA: 47->75
    - Illuminate->Tinted Lens

- Illumise:
    - Atk: 47->75
    - SpA: 73->75
    - Oblivious->Illuminate
    - Tinted Lens->Oblivious

- Budew:
    - Can also evolve at level 13
    - Gender Ratio: 50/50->75/25

- Roselia/Roserade:
    - Gender Ratio: 50/50->75/25
    - Learn Venoshock by level up
    - Held items:
        - Poison Barb: 5%->50%
        - Absorb Bulb: 0%->5%

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

- Numel/Camerupt
    - Held item: Rawst Berry: 0%->100%

- Trapinch:
    - Learns Dragon Breath by Egg Move

- Cacturne:
    - Learns Throat Chop by level up

- Swablu:
    - Received Fluffy as a second Ability

- Altaria:
    - SpA: 70->80
    - Received Fluffy as a second Ability
    - Learns Air Slash by TM

- Mega Altaria:
    - SpD: 105->115

- Zangoose:
    - Cat Ferret Pokémon and mongooses are from the same suborder as cats
    - Learns Cut by TM
    - Abilities: Immunity/Toxic Boost->Poison Heal/Sharpness/Guts
    - Also in Human-Like Egg Group
    - HP: 73->75
    - Atk: 115->125
    - Spe: 90->100

- Seviper:
    - HP: 73->75
    - Spe: 65->75
    - Learns Dragon Breath by Egg Move

- Lunatone:
    - Learns Icy Wind and Peck by level up

- Solrock:
    - Learns Power Gem and Solar Blade by level up

- Whiscash:
    - CATfish
    - Atk: 78->90
    - Def: 73->75
    - SpA: 76->80
    - SpD: 71->75
    - Spe: 60->70
    - Learns Dragon Dance by level up

- Claydol:
    - Learns Zen Headbutt by level up

- Castform:
    - All stats: 70->80
    - Learns Surf, Flamethrower, Ice Beam, Thunder, and Solar Beam by level up
    - Learns Surf and Overheat by TM
    - Learns Gust, Twister, Heat Wave, and Fairy Wind by Egg Move

- Duskull/Dusclops:
    - Learn Spite by Egg Move

- Dusknoir:
    - Learns Spite by Egg Move
    - Learns Drain Punch by TM
    - Received Iron Fist as second Ability

- Tropius:
    - HP: 99->100
    - Atk: 68->70
    - Def: 83->85
    - SpA: 72->80
    - SpD: 87->90
    - Spe: 51->55
    - Held item: Nanab Berry: 0%->100%
    - Learns Earth Power by TM

- Chingling:
    - Can also evolve at level 19

- Absol:
    - Hidden Ability: Justified->Sharpness
    - Learns Spite by Egg Move

- Huntail:
    - Holding a Deep Sea Tooth multiplies its Attack by 1.5
    - Atk: 104->114

- Gorebyss:
    - Holding a Deep Sea Scale multiplies its Defense by 1.5
    - Atk: 84->94
    - Learns Leech Life by TM

- Luvdisc (Battle Tent/Battle Frontier only):
    - HP: 43->50
    - SpA: 40->80
    - Spd: 97->100

- Latios/Latias:
    - Level up learnset slightly restructured to avoid a battle where they only have one attacking move

- Kyogre:
    - Learns Origin Pulse at level 63 instead of level 1
    - Learns Aurora Beam at level 1 instead of Body Slam
    - Learns Surf at level 27 instead of Muddy Water
    - Learns Thunder at level 81 instead of Double-Edge

- Groudon:
    - Learns Precipice Blades at level 63 instead of level 1
    - Learns Bulldoze at level 1 instead of Mud Shot
    - Learns Solar Blade at level 81 instead of Solar Beam

- Rayquaza:
    - Learns Fly at level 1 instead of level 63
    - Learns Dragon Ascent at level 63 instead of level 1

- Chimchar (postgame):
    - Evolution: 14->16

- Shinx/Luxio/Luxray:
    - Learn Supercell Slam by level up

- Cranidos/Rampardos:
    - Received Rock Head as a second ability
    - Learn Rock Throw, Rock Tomb, Brick Break, and Rock Slide by level up

- Pachirisu:
    - SpA: 45->55
    - Evolves into ??? with a Thunder Stone
    - Learns Shock Wave and Thunder Fang by level up
    - Learns Signal Beam by TM
    - Learns Tail Slap by Egg Move

- ???:
    - Type: Electric
    - HP: 80
    - Atk: 50
    - Def: 90
    - SpA: 85
    - SpD: 105
    - Spe: 105
    - Abilities: Cheek Pouch/Pickup/Volt Absorb

- Buizel/Floatzel:
    - Learn Bubble by level up

- Glameow:
    - Evolution: 38->34
    - Learns Covet by level up

- Purugly:
    - HP: 71->90
    - Atk: 82->90
    - Def: 64->65
    - SpA: 64->65
    - SpD: 59->65
    - Spe: 112->115
    - Learns Covet by level up

- Stunky:
    - Learns Acid, Poison Tail, Poison Fang, Poison Jab, and Crunch by level up

- Skuntank:
    - HP: 103->105
    - Atk: 93->95
    - Def: 67->70
    - SpA: 71->80
    - SpD: 61->65
    - Spe: 84->85
    - Learns Acid, Poison Tail, Poison Fang, Poison Jab, and Crunch by level up

- Gible/Gabite/Garchomp:
    - Learn Stomping Tantrum and Earthquake by level up

- Hippopotas/Hippowdon:
    - Learn Bulldoze, Stomping Tantrum, Scorching Sands, and High Horsepower by level up

- Rotom:
    - Def: 77->90
    - SpA: 95->100
    - SpD: 77->90
    - Spe: 91->100
    - Catch rate: 45->90
    - Learns Parabolic Charge, Thunderbolt, and Shadow Ball by level up

- Rotom Heat:
    - Catch rate: 45->90
    - Now learns Flamethrower by form change and instead learns Overheat by TM
    - Learns Parabolic Charge, Thunderbolt, and Shadow Ball by level up

- Rotom Wash:
    - Catch rate: 45->90
    - Now learns Surf by form change
    - Learns Parabolic Charge, Thunderbolt, and Shadow Ball by level up

- Rotom Frost:
    - Catch rate: 45->90
    - Now learns Ice Beam by form change and instead learns Blizzard by TM
    - Learns Parabolic Charge, Thunderbolt, and Shadow Ball by level up

- Rotom Fan:
    - Catch rate: 45->90
    - Ability: Levitate->Wind Power
    - Learns Parabolic Charge, Thunderbolt, and Shadow Ball by level up

- Rotom Mow:
    - Catch rate: 45->90
    - Now learns Energy Ball by form change
    - Learns Parabolic Charge, Thunderbolt, and Shadow Ball by level up

- Oshawott:
    - The two cat starters have Dark-type final evolutions, and the only two water starters with Dark-type final evolutions were Oshawott and Froakie, and otters are much more catlike than frogs
    - Atk: 55->65
    - SpA: 63->65
    - Evolution: 17->16

- Dewott:
    - Atk: 75->80
    - SpA: 83->85

- Hisuian Samurott:
    - Atk: 108->115

- Patrat/Watchog:
    - Partially based on the meerKAT which is in the same suborder as cats
    - Learn Cut, Headbutt and Body Slam by level up
    - Learn Dizzy Punch by Egg Move

- Purrloin:
    - HP: 41->45
    - Def: 37->40
    - SpD: 37->40
    - Learns Thief and Dark Pulse by level up

- Liepard:
    - HP: 64->65
    - Atk: 88->90
    - SpA: 88->90
    - Spe: 106->110
    - Learns Thief and Dark Pulse by level up

- Roggenrola:
    - Atk: 75->85
    - SpA: 25->35
    - Learns Rock Throw by level up

- Boldore/Gigalith
    - Learn Rock Throw by level up

- Woobat:
    - Def: 43->45
    - SpD: 43->45
    - Spe: 72->75
    - Abilities: Unaware/Klutz/Simple->Unaware/Simple/Synchronize
    - Can also evolve at level 24
    - Learns Psybeam and Psychic Noise by level up

- Swoobat:
    - HP: 67->80
    - Atk: 57->60
    - SpA: 77->90
    - Spe: 114->115
    - Abilities: Unaware/Klutz/Simple->Unaware/Simple/Synchronize
    - Learns Psybeam and Psychic Noise by level up

- Drilbur/Excadrill:
    - Learn Mud Shot, Bulldoze, and Stomping Tantrum by level up

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

- Maractus:
    - Learns Energy Ball by level up

- Archen/Archeops:
    - Hidden Ability: None->Early Bird
    - Learn Dual Wingbeat by level up

- Trubbish/Garbodor:
    - Learn Poison Sting, Poison Fang, and Poison Jab by level up

- Ducklett:
    - Evolution: 35->33
    - Learns Surf and Dual Wingbeat by level up

- Swanna:
    - Learns Surf and Dual Wingbeat by level up

- Vanillite:
    - Evolution: 35->30
    - Held item: Casteliacone: 0%->50%
    - Learns Powder Snow, Aurora Beam, and Freeze-Dry by level up

- Vanillish:
    - Evolution: 47->42
    - Held item: Casteliacone: 0%->50%
    - Learns Powder Snow, Aurora Beam, and Freeze-Dry by level up

- Vanilluxe:
    - Learns Powder Snow, Aurora Beam, and Freeze-Dry by level up

- Karrablast:
    - Can also evolve with Linking Cord
    - Learns Bug Bite by level up

- Escavalier:
    - HP: 70->80
    - Learns Metal Claw and Twineedle upon evolving
    - Learns Bug Bite and Smart Strike by level up

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
    - Learns Body Press by TM

- Tynamo:
    - Evolution: 39->32
    - Learns Shock Wave by TM

- Eelektrik:
    - Learns Thunder Fang and Supercell Slam by level up

- Eelektrik:
    - Learns Thunder Fang, Thunder Punch, and Supercell Slam by level up

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

- Cubchoo:
    - Evolution: 37->35
    - Learns Ice Fang and Ice Punch by level up

- Beartic:
    - Learns Ice Shard, Ice Fang, and Ice Punch by level up

- Shelmet:
    - SpA: 40->50
    - Can also evolve with Linking Cord
    - Learns Bug Bite and Signal Beam by level up

- Accelgor:
    - SpA: 100->110
    - Abilities: Hydration/Sticky Hold/Unburden->Hydration/Dry Skin/Speed Boost
    - Learns Water Shuriken upon evolving
    - Learns Bug Bite and Signal Beam by level up

- Mienfoo:
    - Evolution: 50->38
    - Learns Rock Smash and Double Kick by level up

- Mienshao:
    - Learns Rock Smash and Double Kick by level up

- Druddigon:
    - Hidden Ability: Mold Breaker->Rock Head
    - Learns Take Down, Double-Edge, and Head Smash by level up
    - Learns Dragon Breath by Egg Move

- Heatmor:
    - Atk: 97->105
    - Def: 66->70
    - SpD: 66->70
    - Learns Ember, Flame Wheel, Fire Punch, and Lava Plume by level up

- Tornadus:
    - Learns Acrobatics by level up
    - Learns Bleakwind Storm at level 75 instead of level 77 to match the rest of the group

- Thundurus:
    - Learns Extrasensory by level up
    - Learns Air Slash by TM

- Landorus:
    - Swaps Bulldoze and Rock Tomb levels for consistency
    - Learns Swords Dance and Stomping Tantrum by level up
    - Swaps Sandsear Storm and Fissure levels for consistency
    - Learns Acrobatics by TM

- Litleo:
    - HP: 62->65
    - Def: 58->60
    - SpA: 73->75
    - SpD: 54->55
    - Spe: 72->75
    - Hidden Ability: Moxie->Competitive
    - Learns Swift and Flame Burst by level up

- Pyroar:
    - HP: 86->90
    - Atk: 68->70
    - Def: 72->75
    - SpA: 109->110
    - SpD: 66->70
    - Spe: 106->110
    - Hidden Ability: Moxie->Competitive
    - Learns Swift, Flame Burst, and Fire Blast by level up

- Skiddo:
    - Received Grass Pelt as a second Ability and Grassy Surge as a Hidden Ability (previously Grass Pelt)
    - Learns Grassy Terrain by level up

- Gogoat:
    - HP: 123->125
    - Def: 62->65
    - SpA: 97->90
    - SpD: 81->85
    - Spe: 68->70
    - Received Grass Pelt as a second Ability and Grassy Surge as a Hidden Ability (previously Grass Pelt)
    - Learns Trailblaze, Grassy Terrain, Grassy Glide by level up

- Espurr:
    - HP: 62->65
    - Atk: 48->50
    - Def: 54->55
    - SpA: 63->65
    - Spe: 68->70
    - Learns Psychic Noise, Extrasensory, Mean Look, Tearful Look, Baby-Doll Eyes, and Psychic by level up

- Male Meowstic:
    - HP: 74->75
    - Atk: 48->50
    - Def: 76->80
    - SpA: 83->90
    - SpD: 81->85
    - Spe: 104->105
    - Learns Tearful Look, Baby-Doll Eyes, Psychic Noise, Extrasensory, and Psychic Terrain by level up
    - Learns Miracle Eye at level 1 instead of level 31

- Female Meowstic:
    - HP: 74->75
    - Atk: 48->50
    - Def: 76->80
    - SpA: 83->90
    - SpD: 81->85
    - Spe: 104->105
    - Learns Mean Look, Tearful Look, Baby-Doll Eyes, and Psychic Noise by level up
    - Learns Extrasensory at level 39 and learns Energy Ball in its place at level 44

- Spritzee:
    - Gender Ratio: 50/50->25/75
    - Learns Dazzling Gleam by level up

- Aromatisse:
    - Spe: 29->47
    - Base experience: 162->168
    - Gender Ratio: 50/50->25/75
    - Learns Aromatic Mist by evolving
    - Learns Dazzling Gleam by level up

- Swirlix/Slurpuff:
    - Learn Lick, Disarming Voice, and Dazzling Gleam by level up

- Skrelp (postgame):
    - Evolution: 48->37
    - Learns Dragon Breath by Egg Move

- Dragalge (postgame):
    - Learns Dragon Breath by Egg Move

- Helioptile:
    - HP: 44->45
    - Atk: 38->40
    - Def: 33->35
    - SpA: 61->65
    - SpD: 43->45
    - Learns Shock Wave and Swift by level up
    - Learns Dragon Breath by Egg Move

- Heliolisk:
    - HP: 62->65
    - Def: 52->55
    - SpA: 109->110
    - SpD: 94->110
    - Spe: 109->110
    - Learns Weather Ball upon evolving
    - Learns Shock Wave, Swift, Hyper Voice, Solar Beam, and Morning Sun by level up
    - Learns Earth Power by TM
    - Learns Dragon Breath by Egg Move

- Pumpkaboo:
    - Only Average Size is available
    - HP: 49->50
    - Atk: 66->70
    - SpA: 44->45
    - Spe: 56/51/46/41->60/55/50/45
    - Learns Leafage by level up

- Gourgeist:
    - Only Average Size is available
    - Def: 122->125
    - SpA: 58->60
    - Spe: 84->85
    - Learns Leafage, Shadow Punch, and Shadow Claw by level up
    - Learns Body Press by TM

- Noibat:
    - Evolution: 48->40
    - Learns Twister and Dragon Breath by level up

- Noivern:
    - SpA: 97->100
    - Spe: 123->125
    - Learns Twister and Dragon Breath by level up

- Litten:
    - Evolution: 17->16

- Torracat:
    - Evolution: 34->36

- Incineroar:
    - Spe: 60->65
    - Learns Incinerate and Blaze Kick by level up

- Yungoos:
    - Mongooses are in the same suborder as cats
    - HP: 48->50
    - Learns Cut and Chip Away by level up

- Gumshoos:
    - Mongooses are in the same suborder as cats
    - HP: 88->90
    - Learns Cut, Chip Away, Thunder Fang, Fire Fang, and Ice Fang by level up

- Crabominable:
    - HP: 97->100
    - Atk: 132->135
    - Def: 77->80
    - SpA: 62->65
    - SpD: 67->70
    - Spe: 43->50
    - Learns Icicle Crash by TM

- Sandygast/Palossand:
    - Learn Mud-Slap, Mud Shot, Hex, and Scorching Sands by level up

- Drampa:
    - Type: Normal/Dragon->Dragon/Normal
    - Learns Swift by level up

- Cosmoem:
    - Only evolves into Solgaleo, regardless of time of day

- Solgaleo:
    - Learns Psychic Fangs by level up

- Rookidee:
    - HP: 38->40
    - Atk: 47->50
    - SpA: 33->35
    - Spe: 57->60

- Corvisquire:
    - HP: 68->70
    - Atk: 67->70
    - SpA: 43->45
    - Spe: 77->80

- Corviknight:
    - HP: 98->100
    - Atk: 87->90
    - SpA: 53->55
    - Spe: 67->70
    - Learns Iron Head by level up

- Wooloo:
    - Learns Rollout and Body Slam by level up

- Dubwool:
    - HP: 72->75
    - Atk: 80->90
    - Spe: 88->90
    - Learns Rollout and Body Slam by level up

- Silicobra/Sandaconda:
    - Learns Mud-Slap, Mud Shot, Scorching Sands, Drill Run, High Horsepower, and Earthquake
    - Learn Dragon Breath by Egg Move

- Arrokuda:
    - HP: 41->45
    - Atk: 63->65
    - Spe: 66->70
    - Learns Drill Peck by Egg Move

- Barraskewda:
    - HP: 61->65
    - Atk: 123->125
    - Spe: 136->140
    - Learns Drill Peck by Egg Move

- Toxel:
    - Only evolves into Amped Toxtricity
    - Atk: 38->40
    - SpA: 54->55
    - Abilities: Rattled/Static/Klutz->Rattled/Static (Hidden)
    - Can only evolve into Amped Form Toxtricity
    - Learns Shock Wave by TM

- Toxtricity:
    - Atk: 98->100
    - SpA: 114->115
    - Abilities: Punk Rock/Plus/Technician->Punk Rock/Technician (Hidden)
    - Learns Magnetic Flux (originally only Low Key Form knew it) by level up
    - Learns Snarl, Psychic Noise, Thunderbolt and Sludge Bomb by level up

- Clobbopus:
    - Received Suction Cups as a second ability

- Grapploct:
    - Atk: 118->125
    - Spe: 42->50
    - Received Suction Cups as a second ability
    - Learns Circle Throw, Storm Throw, and Aqua Jet by level up
    - Learns Strength by TM

- Snom:
    - Can also evolve at level 21

- Frosmoth:
    - SpD: 90->100
    - Spe: 65->75
    - Learns Silver Wind, Signal Beam, and Ice Beam by level up

- Cufant/Copperajah:
    - Received Sturdy as a second ability

- Enamorus:
    - Learns Play Rough by level up
    - Learns Air Slash by TM

- Sprigatito:
    - HP: 40->45
    - Atk: 61->65
    - Def: 54->55

- Floragato:
    - HP: 61->65
    - Def: 63->65
    - SpD: 63->65
    - Spe: 83->85

- Meowscarada:
    - HP: 76->80
    - SpA: 81->80
    - Spe: 123->125
    - Learns Throat Chop by level up

- Fidough:
    - HP: 37->40
    - Learns Fairy Wind by level up

- Dachsbun:
    - HP: 57->60
    - Atk: 80->90
    - Learns Body Press upon evolving
    - Learns Fairy Wind by level up

- Garganacl:
    - Learns Power Gem by level up

- Wattrel/Kilowattrel:
    - Learn Gust, Shock Wave, Air Cutter, Tailwind, Air Slash, and Thunder by level up
    - Learn Rain Dance by TM
    - Learns Heat Wave by Egg Move

- Capsakid:
    - Hidden Ability: Klutz->Moody
    - Learns Absorb, Mega Drain, Giga Drain, Leaf Blade, and Energy Ball by level up

- Scovillain:
    - Atk: 108->110
    - SpA: 108->110
    - Spe: 75->85
    - Learns Absorb, Ember, Mega Drain, Incinerate, Giga Drain, Flame Burst, Temper Flare, Leaf Blade, and Energy Ball by level up
    - Learns Earth Power and Nasty Plot by TM

- Flittle:
    - Learns Psychic by level up

- Espathra:
    - SpA: 101->105

- Tinkatink:
    - SpD: 64->65
    - Spe: 58->60
    - Learns Smart Strike and Dazzling Gleam by level up

- Tinkatuff:
    - Atk: 55->70
    - SpD: 82->85
    - Spe: 78->80
    - Learns Smart Strike and Dazzling Gleam by level up

- Tinkaton:
    - Atk: 75->85
    - Def: 77->80
    - Spe: 94->95
    - Hidden Ability: Pickpocket->Steelworker
    - Learns Smack Down, Smart Strike, and Dazzling Gleam by level up

- Wugtrio:
    - HP: 35->50

- Bombirdier:
    - Atk: 103->105
    - Spe: 82->85
    - Learns Aerial Ace, Feint Attack, Drill Peck, and Throat Chop by level up

- Cyclizar:
    - Learns Headbutt and Body Slam by level up

- Orthworm:
    - Atk: 85->90
    - Learns Bullet Punch, Coil, and Comet Punch by level up

- Flamigo:
    - Learns Brick Break, Dual Wingbeat, Jump Kick, and High Jump Kick by level up

- Dondozo:
    - CATfish
    - Learns Waterfall and Liquidation by level up

- Chien-Pao:
    - Atk: 120->130
    - Learns Ice Fang and Ice Spinner by level up
