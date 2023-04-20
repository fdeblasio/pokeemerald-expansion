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
- [devolov for removing Use on Key Items with no field use](https://github.com/pret/pokeemerald/wiki/Make-Key-Items-That-Cannot-Be-Used-In-The-Field-Not-Show-A-Use-or-Register-Option)
- [Anon822 for removing map popups for the same map section](https://www.pokecommunity.com/showpost.php?p=10449889)
- [paccy for implementing Wall Clock editing](https://www.pokecommunity.com/showpost.php?p=10481737)
- [Fyreeire for removing the extra save confirmation](https://github.com/pret/pokeemerald/wiki/Remove-the-extra-save-confirmation)
- [hjk321 for extra save space](https://github.com/pret/pokeemerald/wiki/Extra-save-space-with-two-lines-of-code)
- [ellabrella for increasing text speed beyond fast](https://www.pokecommunity.com/showpost.php?p=10400198)
- [Mashanny for making text speed up without holding A/B](https://www.pokecommunity.com/showpost.php?p=10266385)
- [Sapphire Jester for making the Soot Sack usuable](https://www.pokecommunity.com/showpost.php?p=10222284&postcount=178)

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
