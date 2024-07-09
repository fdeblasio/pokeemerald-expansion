# pokeemerald-expansion

```
Based off RHH's pokeemerald-expansion v1.8.0 https://github.com/rh-hideout/pokeemerald-expansion/
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
    - [Showing Hidden Power type in battle](https://www.pokecommunity.com/showpost.php?p=10269149)
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
    - [Implementing an auto-swapping naming screen](https://www.pokecommunity.com/showpost.php?p=10199896&postcount=139)
- Buffel Saft 
    - [Showing EVs/IVs in the summary screen](https://www.pokecommunity.com/showpost.php?p=10410302)
    - [Removing the need to water berries on rainy routes](https://www.pokecommunity.com/showpost.php?p=10349397&postcount=258)
    - [LGPE-Style bonus Premier Balls](https://github.com/pret/pokeemerald/wiki/LGPE-Style-Bonus-Premier-Balls)
- [Jirachii for implementing Hidden Power type in the summary screen](https://www.pokecommunity.com/showpost.php?p=10269132)
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

## Known Bugs
- Moving an Pokemon in the PC seems to duplicate its item in the bag
- Followers will stop following you if you use the naming screen from the party menu. It will start to follow you again if you talk to it
- When using items, the text box will be empty at the end. This is caused by some of the code changes from speeding up the text
- If you help one of the Lilycove Pokémon Center ladies, the other lady thinks you've already helped her as well

### Potentially just savefile issues due to playing while hacking
- Items in the Battle Pyramid's Battle Bag/held items in the Battle Pike are turning into Poke Balls
    - Seems to happen after trainer battles?

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
- Team Magma are more focused on Ground types than Fire types to avoid overlap with Flannery
- Pokémon have a more even encounter distribution
- Trainer rematches (including Gabby and Ty) are now based on number of badges
- Tate and Liza give out Psychic instead of Calm Mind (Calm Mind can be found in Slateport)
- Cut, Fly, Strength, Flash, Rock Smash, Surf, and Dive can now be forgotten
    - Fly can now be used from the Start Menu after getting Mauville's badge
    - Cut, Strength, and Rock Smash no longer need a badge to be used
    - Cut trees have been removed from everywhere but the Trick House
    - Strength boulders have been removed from everywhere but the Trick House and an optional puzzle in Seafloor Cavern
    - Rock Smash rocks have been removed from everywhere but Rusturf Tunnel. Brick Break can now also break them
    - The Escape Rope can by used in the Trick Room puzzles that involve Cut/Strength
    - Flash is no longer needed anywhere
    - Surf and Dive have been replaced by a key item
- Sealed Chamber still needs to be completed to open the Regi areas, but it's solved by simply pressing A in the inner room
    - The door to Sealed Chamber and the Regis' inner rooms are now automatically open
- Made rapids easier to navigate so that only one trip is needed to get all items/battle all trainers (at the cost of looking slightly worse)
- All moves automatically have their max PP amount
- The Good Rod is now obtained on the left side of Route 118 instead of the right
- Sacred Ash now works in battles although it only revives one Pokémon
- Soul Dew uses its Gen 6 effect
- Pokémon that evolve with an item at day or night now can evolve at any time
- EVs now give one stat increase for every EV but cap out at 63 (individual)/127 (total). This will lead to the same stats as the old system but easier to train
- Bird Keepers now use the overworld sprite of male Psychics since it looks more like them than the blond sprite
- Houndour was added to the Hoenn Pokédex to give Team Magma more variety
- Frontier Brains have updated teams
- Battle Pyramid wild Pokémon have been updated
- Pokémon can now be listed as orange in the Pokédex
- Underwater areas now connect better
- Mirage Island now appears every other day
- Steven now gives out a Jirachi (Beldum is now in Meteor Falls with Bagon)
- Tickets for islands where Latios, Latias, Deoxys, Lugia, Ho-Oh, and Mew reside are given after beating the Elite Four
    - Latios and Latias no longer roam and instead both show up on Southern Island
    - The Deoxys puzzle is much simpler
- Battle Frontier no longer requires saving
- Two Pokémon having the same original trainer no longer negatively affects breeding chances
- Certain sections are blocked off until gyms or rivals are defeated
- Wally is given more battles. The battle in Verdanturf starts with Grassy Terrain
- Battles in long grass on Routes 119 and 120 start with Grassy Terrain (unless it's a thunderstorm)

### Quality of Life
- Shiny Pokémon can no longer spawn until you get Poké Balls
- You can now always run from wild Pokémon if they are asleep, frozen, or in a semi-invulnerable state (using Fly, Dig, Dive, Bounce, etc.). This works even if they have Shadow Tag/Arena Trap
- Fly can now be used to go to more places:
    - The Abandoned Ship on Route 108
    - The Old Lady's Rest Stop on Route 111
    - Fiery Path on Route 112
    - Meteor Falls entrance on Route 114
    - The Weather Institute on Route 119
    - Mt. Pyre on Route 122
    - Sky Pillar on Route 131
    - Southern Island
- SS Tidal trainers can be rebattled every trip
- Pokémon in the Battle Frontier/Trainer Hill now register in the Pokédex

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

### Quality of life changes thanks to tutorials (credit above):
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
- Can now use Soot Sack to see how much ash you have

### Items:
- Eviolite now prevents Pokémon from evolving
- Some items, such as vitamins and hold items, are cheaper
- Ability Capsules, Ability Patches, Mints, and EV-reducing berries are available to buy in Lilycove (Bottle Caps not yet implemented)

### Trainers:
- Rich Boys all have shiny Pokémon
- Triathletes all have Pokémon with maxed HP and Speed EVs and IVs (to reflect training for endurance and speed)
- Pokémon Breeders all have Pokémon with perfect IVs. They can also have Hidden Abilities and Egg Moves

#### Bosses:
|     BOSSES             |        VANILLA       |    UPDATED    |
|:----------------------:|:--------------------:|:-------------:|
|Rival 103               |5||
|Roxanne                 |12, 12, 15            |11, 11, 13|
|Rival Rustboro          |13, 15||
|Brawly                  |16, 16, 19            |16, 16, 18|
|Rival 110               |18, 18, 20||
|Wally Mauville          |16                    |19|
|Wally Verdanturf        |N/A                   |21, 23|
|Wattson                 |20, 22, 22, 24||
|Wally Route 114         |N/A                   |25, 25, 27|
|Tabitha Mt. Chimney     |18, 20, 22, 22        |27, 27, 29|
|Maxie Mt. Chimney       |24, 24, 25            |28, 29, 29, 30|
|Flannery                |24, 24, 26, 29        |28, 30, 30, 32|
|Norman                  |27, 27, 29, 31        |31, 33, 33, 35|
|Shelly Weather Institute|28, 28                |41, 41, 43|
|Rival 119               |29, 29, 31            |41, 41, 42, 43|
|Winona                  |29, 29, 30, 31, 33    |43, 43, 44, 44, 46|
|Rival Lilycove          |31, 32, 32, 34        |48, 48, 48, 49, 50|
|Tabitha Magma Hideout   |26, 28, 30, 33        |50, 50, 52|
|Maxie Magma Hideout     |37, 38, 39            |51, 52, 52, 53|
|Matt Aqua Hideout       |34, 34                |52, 52, 54|
|Tate/Liza               |41, 41, 42, 42        |55, 55, 57, 57|
|Courtney                |N/A                   |55, 55, 57|
|Tabitha/Maxie           |36, 38, 40/42, 43, 44 |55, 55, 57/57, 58, 60|
|Regis                   |40                    |45|
|Matt/Shelly             |N/A/37, 37            |42, 42, 43/42, 42, 43|
|Archie Seafloor Cavern  |41, 41, 43            |43, 43, 44, 45|
|Juan                    |41, 41, 43, 43, 46    |44, 44, 45, 45, 47|
|Rayquaza                |70                    |60|
|Wally                   |41, 43, 44, 44, 45    |46, 46, 47, 47, 49|
|Sidney                  |46, 46, 48, 48, 49    |50, 50, 51, 51, 52|
|Phoebe                  |48, 49, 49, 50, 51    |51, 51, 52, 52, 53|
|Glacia                  |50, 50, 52, 52, 53    |52, 52, 53, 53, 54|
|Drake                   |52, 53, 53, 54, 55    |53, 53, 54, 54, 56|
|Wallace                 |55, 56, 56, 56, 57, 58|56, 56, 56, 57, 57, 59|
|Groudon/Kyogre          |70||
|Latios/Latias           |40                    |60|
|Mew                     |N/A                   |60|
|Deoxys                  |N/A                   |60|
|Lugia/Ho-Oh             |N/A                   |70|
|Steven                  |75, 76, 76, 76, 77, 78|77, 77, 78, 78, 79, 80|

#### Gym Leader/Wally Rematches:
- 4-5 Pokémon: 60, 63, 63, 65
- 5-6 Pokémon: 65, 65, 68, 68, 70
- 5-6 Pokémon: 70, 70, 73, 73, 75
- 6 Pokémon: 75, 75, 75, 78, 78, 80

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
- Hyper Voice
- Dragon Dance
- Defense Curl
- Endure
- Icy Wind
- Swift
- Seismic Toss
- Counter
- Dream Eater

### Moves:
**Many moves (especially signature moves) were given 100% accuracy and/or 10 PP as opposed to 5:**
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
        - Accuracy: 90->100
- Bug:
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

- Ivysaur (not in main game):
    - Evolution: 32->36

- Charmander/Charmeleon/Charizard (not in main game):
    - Learn Metal Claw by level up

- Caterpie (not in main game):
    - Learns Bug Bite at level 7 instead of 9

- Weedle (not in main game):
    - Learns Bug Bite at level 7 instead of 9

- Beedrill (not in main game):
    - Learns Leech Life and Drill Run by level up

- Pidgey/Pidgeotto/Pidgeot (not in main game):
    - Learn Peck by level up
    - Learn Acrobatics by TM

- Nidorina/Nidoqueen (not in main game):
    - Can now breed

- Pichu:
    - Held item: None->Light Ball
    - Can also evolve at level 12

- Pikachu
    - Held item: Light Ball: 5%->100%
    - Learns Volt Tackle at level 1

- Raichu:
    - Learns Volt Tackle at level 1

- Alolan Raichu (not in main game):
    - Learns Volt Tackle at level 1

- Cleffa (not in main game):
    - Can also evolve at level 12

- Parasect (not in main game):
    - Held items:
        - Tiny Mushroom: 50%->0%
        - Big Mushroom: 5%->50%
        - Balm Mushroom: 0%->5%

- Alolan Meowth: (not in main game):
    - Can also evolve at level 28

- Igglybuff:
    - Can also evolve at level 12

- Psyduck:
    - Type: Water->Water/Psychic

- Golduck:
    - Type: Water->Water/Psychic
    - Learns Power Gem upon evolving

- Zubat:
    - Learns Gust by level up

- Golbat:
    - Can also evolve at level 33
    - Learns Gust by level up

- Crobat:
    - Learns Gust by level up

- Kadabra/Alakazam:
    - Held item: Twisted Spoon: 5%->100%

- Machamp:
    - Learns Drain Punch by TM

- Cloyster (not in main game):
    - Held items:
        - Pearl: 50%->0%
        - Big Pearl: 5%->50%
        - Pearl String: 0%->5%
    - Learns Body Press by TM

- Gastly/Haunter/Gengar (not in main game):
    - Type: Ghost/Poison->Ghost

- Drowzee/Hypno (not in main game):
    Learn Dream Eater by level up

- Alolan Exeggutor (not in main game):
    - Atk: 105->125
    - SpA: 125->105

- Cubone/Marowak (not in main game):
    - Held items:
        - Thick Club: 5%->50%
        - Rare Bone: 0%->5%

- Farfetch'd (not in main game):
    - Held item: Leek: 5%->100%

- Sirfetch'd (not in main game):
    - Held item: Leek: 5%->100%
    - Learns Drain Punch by TM

- Dodrio:
    - Learns Body Slam and Drill Run by level up

- Lickitung (not in main game):
    - Atk: 55->65
    - Spe: 30->50
    - Learns Coil by level up
    - Learns Sludge Bomb by TM
    - Ability: Oblivious->Thick Fat

- Lickilicky (not in main game):
    - Learns Coil by level up
    - Learns Sludge Bomb by TM
    - Ability: Oblivious->Thick Fat

- Koffing:
    - Atk: 65->60
    - SpA: 60->65

- Weezing:
    - Atk: 90->85
    - SpA: 85->90

- Galarian Weezing (not in main game):
    - Atk: 90->85
    - SpA: 85->90
    - Learns Misty Explosion by level up

- Rhyperior:
    - Learns Rock Wrecker upon evolving

- Happiny (postgame):
    - Base exp: 110->250
    - Held item: Lucky Egg: 0%->5%

- Chansey (postgame):
    - Held item: Lucky Punch: 50%->100%
    - Can also evolve at level 36

- Blissey (postgame):
    - Held item: Lucky Egg: 50%->100%

- Goldeen:
    - Learns Aqua Jet by level up

- Seaking:
    - Learns Aqua Jet and Drill Run by level up

- Pinsir:
    - Catch rate: 45->90

- Starmie:
    - Learns Water Pulse by level up

- Mime Jr./Mr. Mime (not in main game):
    - Gender Ratio: 50/50->100/0
    - Type: Psychic/Fairy->Psychic

- Galarian Mr. Mime/Mr. Rime (not in main game):
    - Gender Ratio: 50/50->100/0

- Scyther (not in main game):
    - Catch rate: 45->90
    - Learns Dual Wingbeat by level up

- Smoochum (not in main game):
    - Def: 15->20
    - Catch rate: 45->150

- Jynx (not in main game):
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

- Gyarados:
    - Type: Water/Flying->Water
    - Learns Bounce by level up

- Eevee (not in main game):
    - Now evolves into Espeon with a Sun Stone
    - Now evolves into Umbreon with a Moon Stone
    - Now evolves into Sylveon with a Dawn Stone

- Aerodactyl (postgame):
    - Learns Dual Wingbeat, Double-Edge, Head Smash, and Brave Bird by level up

- Munchlax (not in main game):
    - Can also evolve at level 20

- Snorlax (not in main game):
    - Learns Slack Off by level up

- Zapdos (not in main game):
    - Learns Air Slash by TM

- Bayleef (postgame):
    - Evolution: 32->36

- Cyndaquil (postgame):
    - Evolution: 14->16

- Totodile (postgame):
    - Evolution: 18->16

- Crocnaw (postgame):
    - Evolution: 30->36

- Ledyba (postgame):
    - Atk: 20->40

- Ledian (postgame):
    - Atk: 35->55

- Spinarak (postgame):
    - Spe: 30->40

- Ariados (postgame):
    - Spe: 40->50

- Togepi (not in main game):
    - Can also evolve at level 16

- Mareep/Flaaffy:
    - Learn Tail Glow by Egg Move

- Ampharos:
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

- Sunflora:
    - Learns Morning Sun by level up

- Honchkrow (not in main game):
    - Learns Drill Peck by level up

- Misdreavus/Mismagius (not in main game):
    - Gender Ratio: 50/50->25/75

- Gligar/Gliscor (postgame):
    - Learn Dual Wingbeat by level up

- Dunsparce (not in main game):
    - Learns Swift by move tutor

- Granbull (postgame):
    - Hidden Ability: Rattled->Strong Jaw

- Qwilfish/Hisuian Qwilfish/Overqwil (not in main game):
    - Learns Poison Tail by level up

- Heracross:
    - Learns X-Scissor by TM
    - Catch rate: 45->90

- Sneasel/Weavile (not in main game):
    - Learn Razor Wind by Egg Move

- Slugma:
    - Evolution: 38->32

- Magcargo:
    - Learns Body Press by TM

- Mamoswine (not in main game):
    - Learns Icicle Crash by level up

- Octillery (postgame):
    - HP: 75
    - Atk: 105->100
    - Def: 75->85
    - SpA: 105->110
    - SpD: 75->85
    - Spe: 45

- Delibird (not in main game):
    - Atk: 55->75
    - Hidden Ability: Insomnia->Technician
    - Learns Ice Punch by level up

- Mantyke (not in main game):
    - Catch rate: 25->90

- Stantler (postgame):
    - Learns Psyshield Bash by level up

- Lugia (postgame):
    - Learns Brave Bird by level up

- Treecko:
    - Atk: 45->65
    - SpA: 65->45

- Grovyle:
    - Atk: 65->85
    - SpA: 85->65
    - Hidden Ability: Unburden->Sharpness
    - Learns Razor Leaf upon evolving

- Sceptile:
    - Atk: 85->105
    - SpA: 105->85
    - Hidden Ability: Unburden->Sharpness
    - Learns Dual Chop upon evolving
    - Learns Razor Leaf by level up

- Mega Sceptile:
    - Atk: 110->145
    - SpA: 145->110
    - Ability: Lightning Rod->Sharpness

- Combusken:
    - Learns Flame Wheel upon evolving

- Blaziken:
    - Learns Flame Wheel by level up
    - Learns Drain Punch by TM

- Mudkip:
    - Learns Rock Smash later to avoid breaking the game

- Marshtomp:
    - Hidden Ability: Damp->Swift Swim
    - Learns Aqua Jet upon evolving
    - Learns Rock Smash, Surf, and Earthquake later to avoid breaking the game

- Swampert:
    - Hidden Ability: Damp->Swift Swim
    - Learns Aqua Tail upon evolving
    - Learns Aqua Jet by level up
    - Learns Rock Smash, Surf, and Earthquake later to avoid breaking the game

- Poochyena:
    - Speed: 35->40
    - Hidden Ability: Rattled->Strong Jaw

- Mightyena:
    - Atk: 90->110
    - Speed: 70->80
    - Hidden Ability: Moxie->Strong Jaw

- Galarian Zigzagoon/Galarian Linoone (not in main game):
    - Abilities: Pickup/Gluttony/Quick Feet->Reckless/Guts/Defiant

- Wurmple:
    - Learns Bug Bite at level 7 instead of 15
    - Evolution is now based on time of day

- Beautifly:
    - Learns Air Slash by TM

- Dustox:
    - Sp. Def: 90->100 to match Beautifly's stat increase

- Seedot:
    - Learns Bullet Seed and Seed Bomb by level up

- Nuzleaf:
    - Learns Pursuit and Grass Whistle upon evolving
    - Learns Bullet Seed and Seed Bomb by level up

- Shiftry:
    - Learns Night Slash upon evolving
    - Learn Bullet Seed, Seed Bomb, Grass Whistle, and Pursuit by level up

- Swellow:
    - Learns Acrobatics by TM

- Wingull/Pelipper:
    - Learn Gust by level up

- Ralts/Kirlia/Gardevoir:
    - Due to Disarming Voice's boost in power, Fairy Wind is learned in its place at level 1 instead. Disarming Voice is now learned at level 17.

- Gallade:
    - Learns Fairy Wind by level up

- Mega Gallade:
    - Ability: Inner Focus->Sharpness

- Surskit/Masquerain:
    - Learn Struggle Bug by level up

- Breloom:
    - Held items:
        - Tiny Mushroom: 50%->0%
        - Big Mushroom: 5%->50%
        - Balm Mushroom: 0%->5%
    - Learns Drain Punch by level up

- Slaking:
    - Learns Giga Impact by level up

- Nincada:
    - Learns Mud Slap at level 1 and now learns Mud Shot in its place at level 15
    - Learns Bug Bite by level up

- Ninjask:
    - Learns Mud Shot and Leech Life by level up
    - Learns Steel Wing by TM

- Shedinja:
    - Learns Mud Shot, Fury Cutter, Bug Bite, Swords Dance, and Leech Life by level up

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

- Probopass:
    - Def: 145->150
    - SpD: 150->145

- Skitty:
    - SpA: 35->55
    - Spe: 50->55
    - Learns Quick Attack, Swift and Headbutt by level up

- Delcatty:
    - SpA: 55->75
    - Spe: 90->95
    - Learns Quick Attack, Swift, and Headbutt by level up

- Sableye:
    - Loses Stall as an ability since it's worthless
    - Catch rate: 45->90

- Mawile:
    - Catch rate: 45->90
    - Held item: Occa Berry: 0%->50%
    - Learns Metal Claw and Smart Strike by level up

- Manectric:
    - Learns Ice Fang and Snarl by level up

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

- Numel/Camerupt
    - Held item: Rawst Berry: 0%->100%

- Spinda:
    - All stats: 60->80

- Altaria:
    - Learns Air Slash by TM

- Zangoose:
    - Learns Cut by HM
    - Abilities: Immunity/Toxic Boost->Poison Heal/Sharpness/Guts
    - Also in Human-Like Egg Group
    - HP: 73->75
    - Atk: 115->125
    - Spe: 90->100

- Seviper:
    - HP: 73->75
    - Spe: 65->75

- Lunatone:
    - Learns Icy Wind and Peck by level up

- Solrock:
    - Learns Power Gem and Solar Blade by level up

- Whiscash:
    - Atk: 78->90
    - Def: 73->75
    - SpA: 76->80
    - SpD: 71->75
    - Spe: 60->70
    - Learns Dragon Dance by level up

- Claydol:
    - Learns Zen Headbutt by level up

- Castform:
    - All stats: 70->75
    - Learns Surf, Flamethrower, and Ice Beam by level up
    - Learns Thunder and Solar Beam by level up
    - Learns Overheat by TM
    - Learns Surf by HM

- Duskull/Dusclops:
    - Learn Spite by Egg Move

- Dusknoir:
    - Learns Spite by Egg Move
    - Learns Drain Punch by TM
    - Gets Iron Fist as second Ability

- Tropius:
    - HP: 99->100
    - Atk: 68->70
    - Def: 83->85
    - SpA: 72->80
    - SpD: 87->90
    - Spe: 51->55
    - Held item: Nanab Berry: 0%->100%

- Chingling:
    - Can also evolve at level 19

- Absol:
    - Learns Spite by Egg Move

- Huntail:
    - Holding a Deep Sea Tooth multiplies its Attack by 1.5
    - Atk: 104->114

- Gorebyss:
    - Holding a Deep Sea Scale multiplies its Defense by 1.5
    - Atk: 84->94
    - Learns Leech Life by TM

- Luvdisc:
    - HP: 43->50
    - SpA: 40->60
    - Spd: 97->100
    - Held item: Heart Scale: 50%->100%

- Salamence:
    - Learns Dual Wingbeat by level up

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

**NOTE: Nothing past here is in the main game**

- Turtwig:
    - Evolution: 18->16

- Grotle:
    - Evolution: 32->36

- Torterra:
    - Learns Shell Smash upon evolving

- Chimchar:
    - Evolution: 14->16

- Cranidos/Rampardos:
    - Received Rock Head as a second ability

- Shieldon/Bastiodon:
    - Received Rock Head as a second ability

- Cherrim Sunshine Form:
    - Atk: 60->90
    - Sp. Def: 78->117

- Buneary:
    - Can also evolve at level 23

- Glameow:
    - Evolution: 38->34

- Skuntank:
    - HP: 103->105
    - Atk: 93->95
    - Def: 67->70
    - SpA: 71->80
    - SpD: 61->65
    - Spe: 84->85

- Riolu:
    - Can also evolve at level 20

- Abomasnow:
    - Learns Icicle Crash by TM

- Snivy:
    - Evolution: 17->16

- Tepig:
    - Evolution: 17->16

- Oshawott:
    - Evolution: 17->16

- Unfezant:
    - Learns Acrobatics by TM

- Woobat:
    - Can also evolve at level 24

- Audino:
    - HP: 103->105
    - Gender Ratio: 50/50 -> 25/75
    - Base experience: 390->395
    - Mega base experience: 425->500

- Swadloon:
    - Can also evolve at level 30

- Scolipede:
    - Learns Coil by level up
    - Learns Lunge by move tutor

- Whimsicott:
    - Learns Earth Power by TM

- Lilligant:
    - Learns Earth Power by TM

- Sandile (postgame):
    - Evolution: 29->25

- Krokorok (postgame):
    - Evolution: 40->38

- Darumaka:
    - Evolution: 35->32

- Galarian Darumaka/Darmanitan:
    - Held item: Snowball: 0%->50%

- Scraggy:
    - Evolution: 39->35

- Carracosta:
    - Learns Body Press by TM

- Archeops:
    - Receives Early Bird as a Hidden Ability

- Gothita:
    - Evolution: 32->22

- Gothorita:
    - Evolution: 41->35

- Solosis:
    - Evolution: 32->22

- Duosion:
    - Evolution: 41->35

- Ducklett:
    - Evolution: 35->33

- Vanillite:
    - Evolution: 35->30

- Vanillish:
    - Evolution: 47->42

- Foongus:
    - Evolution: 39->36

- Amoonguss:
    - Held items:
        - Tiny Mushroom: 50%->0%
        - Big Mushroom: 5%->50%
        - Balm Mushroom: 0%->5%

- Joltik:
    - Evolution: 36->32

- Klink:
    - Evolution: 38->32

- Klang:
    - Evolution: 49->42

- Tynamo:
    - Evolution: 39->32

- Litwick:
    - Evolution: 41->36

- Axew:
    - Evolution: 38->35

- Fraxure:
    - Evolution: 48->45

- Cubchoo:
    - Evolution: 37->35

- Cryogonal:
    - Hidden Ability: None->Snow Warning
    - Learns Dazzling Gleam, Flash, and Power Gem by TM

- Stunfisk:
    - HP: 109->110
    - Atk: 66->85
    - Def: 84->85
    - SpA: 81->85
    - SpD: 99->100
    - Spe: 32->35

- Galarian Stunfisk:
    - HP: 109->110
    - Atk: 81->85
    - Def: 99->100
    - SpA: 66->85
    - SpD: 84->85
    - Spe: 32->35
    - Learns Terrain Pulse by level up

- Mienfoo:
    - Evolution: 50->38

- Golett:
    - Evolution: 43->40

- Pawniard:
    - Evolution: 52->40

- Rufflet:
    - Evolution: 54->35

- Vullaby:
    - Evolution: 54->35

- Heatmor:
    - Atk: 97->105
    - Def: 66->70
    - SpD: 66->70

- Durant:
    - HP: 58->65
    - Atk: 109->110
    - Def: 112->115
    - SpA: 48->50
    - SpD: 48->50
    - Spe: 109->110

- Deino:
    - Evolution: 50->30

- Zweilous:
    - Evolution: 64->55

- Larvesta:
    - Evolution: 59->56

- Kyurem:
    - Learns Icicle Crash by TM

- Spritzee/Aromatisse:
    - Gender Ratio: 50/50->25/75

- Swirlix/Slurpuff:
    - Learn Lick by level up

- Skrelp:
    - Evolution: 48->37

- Goomy:
    - Evolution: 40->35

- Gourgeist:
    - Learns Shadow Claw by TM

- Noibat:
    - Evolution: 48->40

- Rowlet:
    - Evolution: 17->16

- Dartrix:
    - Evolution: 34->36

- Litten:
    - Evolution: 17->16

- Torracat:
    - Evolution: 34->36

- Incineroar:
    - Learns Incinerate by level up

- Popplio:
    - Evolution: 17->16

- Brionne:
    - Evolution: 34->36

- Crabominable:
    - Learns Icicle Crash by TM

- Type: Null:
    - Can also evolve at level 45

- Tapu Koko:
    - Learns Supercell Slam, Play Rough, and Rising Voltage by TM

- Tapu Lele:
    - Learns Expanding Force by TM

- Tapu Bulu:
    - Learns Grassy Glide and Play Rough by TM

- Thwackey:
    - Evolution: 35->36

- Raboot:
    - Evolution: 35->36

- Drizzile:
    - Evolution: 35->36

- Hatenna:
    - Evolution: 32->28

- Hattrem:
    - Evolution: 42->38

- Impidimp:
    - Evolution: 32->28

- Morgrem:
    - Evolution: 42->38

- Snom:
    - Can also evolve at level 21

- Dreepy:
    - Evolution: 50->30

- Drakloak:
    - Evolution: 60->55

- Dragapult:
    - Learns Shadow Claw by TM

- Pawmot:
    - Learns Drain Punch by TM

- Ceruledge:
    - Hidden Ability: Weak Armor->Sharpness
