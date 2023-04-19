# pokeemerald Expansion

## What features are included?
- Upgraded battle engine.
    - Fairy Type.
    - Physical/Special/Status Category Split.
    - New moves and abilities up to SwSh.
    - Options to change behaviors and data by generation.
    - Mega Evolution and Primal Reversion
    - Z-Moves
- Pokémon Species from newer Generations (with the option to disable them if needed).
    - Updates Hoenn's Regional Dex to match ORAS'.
    - Updates National Dex incorporating all the new species.
    - Option to change base stats by generation.
    - New evolution methods.
    - Hidden Abilities data (How to make them available is up to the user).
- Items from newer Generations and updated item effects for battle and field use.

Certain mechanics, moves, abilities and species sprites are missing. For more information, see [the project's milestones](https://github.com/rh-hideout/pokeemerald-expansion/milestones).

### [Documentation on features can be found here](https://github.com/rh-hideout/pokeemerald-expansion/wiki)

### Please consider crediting the entire [list of contributors](https://github.com/rh-hideout/pokeemerald-expansion/wiki/Credits) in your project, as they have all worked hard to develop this project :)

## What is ROM Hacking Hideout?

A Discord-based ROM hacking community that has many members who hack using the disassembly and decompilation projects for Pokémon. Quite a few contributors to the original feature branches by DizzyEgg were members of ROM Hacking Hideout. You can call it RHH for short!

[Click here to join the RHH Discord Server!](https://discord.gg/6CzjAG6GZk)

## Contributions/Acknowledgements
- [pret's initial decompilation](https://github.com/pret/pokeemerald)
- [RHH's Emerald Expansion](https://github.com/rh-hideout/pokeemerald-expansion)
    - Fill out individual contributers (https://github.com/rh-hideout/pokeemerald-expansion/wiki/Credits)
- DizzyEgg
    - Starting the Emerald Expansion
    - [Colored stats by nature](https://github.com/pret/pokeemerald/compare/master...DizzyEggg:pokeemerald:nature_color)
- [Porymaps](https://github.com/huderlem/porymap/releases/tag/5.1.1)
- Lunos
    - [Fixing Snow weather](https://github.com/pret/pokeemerald/wiki/Fix-Snow-Weather)
    - [Showing Hidden Power type in battle](https://www.pokecommunity.com/showpost.php?p=10269149)
    - [Swapping party using Select](https://www.pokecommunity.com/showpost.php?p=10420662)
    - [Displaying Return/Frustration power in summary screen](https://www.pokecommunity.com/showpost.php?p=10575976&postcount=420)
- Ghoulslash
    - [Fixing the surfing dismount bug](https://github.com/pret/pokeemerald/wiki/Surfing-Dismount-Ground-Effects)
    - [Implementing shops using badge count](https://github.com/pret/pokeemerald/wiki/Shop-Items-By-Badge-Count)
    - [Plural giveitem](https://www.pokecommunity.com/showpost.php?p=10177314&postcount=107)
    - [Bag sorting](https://www.pokecommunity.com/showpost.php?p=10167488&postcount=84)
- AsparagusEduardo
    - [Not showing dex entries until the Pokédex is received](https://github.com/pret/pokeemerald/wiki/Not-showing-dex-entries-until-getting-the-Pok%C3%A9dex)
    - [Having "Move Pokemon" as the first PC option](https://www.pokecommunity.com/showpost.php?p=10065761)
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
- [Hiroshi for making TMs unsellable](https://www.pokecommunity.com/showpost.php?p=10209376)
- [Flametix for fixing the RESET_FONT bug](https://github.com/pret/pokeemerald/wiki/Implement-Missing-Text-Function-RESET_FONT)
- [voloved for removing Use on Key Items with no field use](https://github.com/pret/pokeemerald/wiki/Make-Key-Items-That-Cannot-Be-Used-In-The-Field-Not-Show-A-Use-or-Register-Option)
- [Anon822 for removing map popups for the same map section](https://www.pokecommunity.com/showpost.php?p=10449889)
- [paccy for implementing Wall Clock editing](https://www.pokecommunity.com/showpost.php?p=10481737)
- [Fyreeire for removing the extra save confirmation](https://github.com/pret/pokeemerald/wiki/Remove-the-extra-save-confirmation)
- [paccy, ExpoSeed, surskitty, FieryMewtwo, Lunos for Infinite TM Usage](https://github.com/pret/pokeemerald/wiki/Infinite-TM-usage)
- [hjk321 for extra save space](https://github.com/pret/pokeemerald/wiki/Extra-save-space-with-two-lines-of-code)

## Find/Replace help
([A-Z])([A-Z\.é':]+)
([A-Z])([A-Z\.é'][A-Z\.é']+)
(_\("[A-Z])([A-Z\.é':]+"\))
(["\- ][A-Z])([A-Z][A-Zé']+)
$1\L$2

(_\("[A-Z])([A-Z\.é':]+)([ -][A-Z])([A-Z\.é':]+"\))
([A-Z])([A-Z\.é':]+)([ -][A-Z])([A-Z\.é':]+)
$1\L$2$3\L$4

(_\("[A-Z])([A-Z\.é':]+)([ -][A-Z])([A-Z\.é':]+)([ -][A-Z])([A-Z\.é':]+"\))
$1\L$2$3\L$4$5\L$6

sed -i 's/POKéDEX/Pokédex/g' */*.c */*.h */*.inc */*/*.c */*/*.h */*/*.inc */*/*/*.h */*/*/*.inc

## TODO
- https://www.pokecommunity.com/showthread.php?t=416647&page=1
- https://github.com/pret/pokeemerald/wiki/Tutorials
- Add Meditite, Zangoose, Lunatone
- Trade Item evolutions (https://github.com/pret/pokeemerald/wiki/Allow-All-Pokemon-to-Evolve-Without-Trading might have some extra effects needed)
    - Make Linking Cord available in shop
    - Lilycove: Turn one 4th floor clerk into all missing TMs, the other into evolution items
- Look at new animations for moves (in battle.h)
- Change Day/Night hours?
    - Set proper time hours (instead of all AM being morning and all PM being night)
- Gallade Sharpness (maybe wait for master/upcoming update)
- Make Latios/Latias easier to catch/not roam?
    - Maybe get rid of roamers and add both Latis to the Island?
- Incorporate new items/new methods of obtaining them (like how PP Ups are sold in Chansey Supply or Bottle Caps in Delibird)
    - Lilycove
- Add Farigiraf to Hoenn Dex once implemented
- Spruce up rematches
    - customAll Pokemon
        - Winston could have a shiny
        - Calvin could have a good Nature/EV
        - Leaders would have optimal Abilities/EVs/IVs/Natures)
    - Winston's rich enough to buy TMs so his moveset should incorporate that once TMs are finalized
        - Gym Leader rematches should also utilize TMs
    - Breeders should have good IVs/Natures/Abilities
    - Triathlete would be Speed-focused (maybe endurance/HP too)
    - Winstrates (including Victor) should have EVs due to the mom mentioning using the Macho Brace
- Overworld sprites to match trainer sprites (for example, giving Youngsters yellow shirts, girl tubers a yellow tube, and Rangers red clothes)
- Make only one instance of each TM (https://pokemondb.net/pokebase/278398/which-tms-can-you-get-more-than-one-of-in-emerald; Lilycove ones can be configured with some shop tutorials)
- Expand bag
- Try to find Bolts foreground of Walda PC
- Implement Mega Evolution (Mega Manectric for Wattson rematches)
    - Maxie/Archie teams
    - Primal legendaries in story (holding their orbs)
- Maybe all Rich Boys/Ladies have shinies (would need to have different Pokemon from each other instead of all having Zigzagoon)
- Some MAN_2's maybe could be switched to DEVON_EMPLOYEE
- Improve fishing
- Debug menu improvements
- Stay on EVs/IVs when switching Pokemon
- Make tutors multi-use and make sure there's no overlap with TMs (if there is, they could always just give them TM instead)
- Battle Tent Pokemon/EVs?
- Add Regigigas to Sealed Chamber?
- Update other punches (Shadow/Dizzy/Needle Arm) to 75 BP?
- New TM compatibility
- Edit friendship evolution methods
- Make a Pokeball shop
- Improve text speed
- Get all the weird Mauville men at once?
- Wild Beldum in Victory Road or something


- Maybe do one run-through of small updates and then add in new items/updated teams in a second runthrough?
    - When doing new savefile, remove `u32 tmShopFlags[4];` from include/global.h

## Future Hacks
Once this base is done, potential hacks that can be built on top of it
With binary hacks, some Pokemon had things hardcoded in their species spot (Nidorans' gender not showing up if it wasn't nicknamed, Unown's forms, Shedinja having 1 HP, Spinda's spots). Now that the code is editable, potentially mess around with some of it. Like a hack where the starter is Shedinja at catching is disabled (disable shinies!) but even though Shedinja still has a base 1 stat, it'll do the normal stat calculation

## TODO Tomorrow
- Rock Smash encounters
- Route 111
