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

## If I already have a project based on regular pokeemerald, can I use pokeemerald-expansion?
Yes! Keep in mind that we keep up with pret's documentation of pokeemerald, which means that if your project a bit old, you might get merge conflicts that you need to solve manually.
- If you haven't set up a remote, run the command `git remote add RHH https://github.com/rh-hideout/pokeemerald-expansion`.
- Once you have your remote set up, run the command `git pull RHH master`.

With this, you'll get the latest version of pokeemerald-expansion, plus a couple of bugfixes that haven't been released into the next patch version :)

## **How do I update my version of pokeemerald-expansion?**
- If you haven't set up a remote, run the command `git remote add RHH https://github.com/rh-hideout/pokeemerald-expansion`.
- Check your current version.
    - You can check in the debug menu's `Utilities -> Expansion Version` option.
    - If the option is not available, you possibly have version 1.6.2 or older. In that case, please check the [changelogs](CHANGELOG.md) to determine your version based on the features available on your repository.
- Once you have your remote set up, run the command `git pull RHH expansion/X.Y.Z`, replacing X, Y and Z with the digits of the respective version you want to update to (eg, to update to 1.8.4, use `git pull RHH expansion/1.8.4`).
    - ***Important:*** If you are several versions behind, we recommend updating one minor version at a time, skipping directly to the latest patch version (eg, 1.5.3 -> 1.6.2 -> 1.7.4 and so on)
- Alternatively, you can update to unreleased versions of the expansion.
    - ***master (stable):*** It contains unreleased **bugfixes** that will come in the next patch version. To merge, use `git pull RHH master`.
    - ***upcoming (unstable, with potential bugs):*** It contains unreleased **features** that will come in the next minor version. To merge, use `git pull RHH upcoming`.

### Please consider crediting the entire [list of contributors](https://github.com/rh-hideout/pokeemerald-expansion/wiki/Credits) in your project, as they have all worked hard to develop this project :)

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
    - [Swapping party using Select](https://www.pokecommunity.com/showpost.php?p=10420662)
    - [Displaying Return/Frustration power in summary screen](https://www.pokecommunity.com/showpost.php?p=10575976&postcount=420)
- AsparagusEduardo
    - [Not showing dex entries until the Pokédex is received](https://github.com/pret/pokeemerald/wiki/Not-showing-dex-entries-until-getting-the-Pok%C3%A9dex)
    - [Having "Move Pokemon" as the first PC option](https://www.pokecommunity.com/showpost.php?p=10065761)
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
- [ScyrousFX for making Fly usable without a Pokemon knowing it](https://www.pokecommunity.com/showpost.php?p=10420068)
