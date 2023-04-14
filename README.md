# pokeemerald Expansion

## What is the pokeemerald Expansion?

The Pokeemerald Expansion is a collection of feature branches that can be integrated into existing [pokeemerald](https://github.com/pret/pokeemerald) projects.

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

## Who maintains the project?

The project was originally started by DizzyEgg alongside other contributors.

The project has now gotten larger and DizzyEgg is now maintaining the project as part of the ROM Hacking Hideout community. Some members of this community are taking on larger roles to help maintain the project.

### Please consider crediting the entire [list of contributors](https://github.com/rh-hideout/pokeemerald-expansion/wiki/Credits) in your project, as they have all worked hard to develop this project :)

## Can I contribute even if I'm not a member of ROM Hacking Hideout?

Yes! Contributions are welcome via Pull Requests and they will be reviewed by maintainers. Don't feel discouraged if we take a bit to review your PR, we'll get to it.

## What is ROM Hacking Hideout?

A Discord-based ROM hacking community that has many members who hack using the disassembly and decompilation projects for Pokémon. Quite a few contributors to the original feature branches by DizzyEgg were members of ROM Hacking Hideout. You can call it RHH for short!

[Click here to join the RHH Discord Server!](https://discord.gg/6CzjAG6GZk)

## Notes
([A-Z])([A-Z\.é':]+)
(_\("[A-Z])([A-Z\.é':]+"\))
$1\L$2

(_\("[A-Z])([A-Z\.é':]+)([ -][A-Z])([A-Z\.é':]+"\))
$1\L$2$3\L$4

(_\("[A-Z])([A-Z\.é':]+)([ -][A-Z])([A-Z\.é':]+)([ -][A-Z])([A-Z\.é':]+"\))
$1\L$2$3\L$4$5\L$6

sed -i 's/POKéDEX/Pokédex/g' */*.c */*.h */*.inc */*/*.c */*/*.h */*/*.inc */*/*/*.h */*/*/*.inc

## TODO
https://www.pokecommunity.com/showthread.php?t=416647&page=1
https://github.com/pret/pokeemerald/wiki/Tutorials
Add Meditite, Zangoose, Lunatone
Pokemon (especially stone evos) get moves previous evolutions know
Update movesets for new moves
Reusable TMs
Trade Item evolutions (https://github.com/pret/pokeemerald/wiki/Allow-All-Pokemon-to-Evolve-Without-Trading might have some extra effects needed)
Look at new animations for moves
Easier move relearning
Change Day/Night hours?
Gallade Sharpness (maybe wait for master/upcoming update)
Make Latios/Latias easier to catch/not roam?
Incorporate new items/new methods of obtaining them (like how PP Ups are sold in Chansey Supply or Bottle Caps in Delibired)
Add Farigiraf to Hoenn Dex once implemented
Spruce up rematches
Winston's rich enough to buy TMs so his moveset should incorporate that once TMs are finalized
