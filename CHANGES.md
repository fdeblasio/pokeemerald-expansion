## Known bugs and other notes
- When looking at a route's wild Pokémon with the PokéNav, it will mark all forms as caught if you've caught one of them
- With the higher levels, using the Exp. Share can cause your team to become overpowered
- Followers will stop following you if you use the naming screen from the party menu. They will start to follow you again if you talk to it
- AI_FLAG_ACE_POKEMON potentially broken in multi-battles (maybe only if both trainers have it?)
- Relearning graphics glitch
- Naming to PC glitch
- Torkoal sprite on Mt. Chimney sometimes glitches
- Some of the EV-reducing berries on Route 123 will randomly disappear and then come back
    - This may be related to the amount of overworld sprites/palettes

## Changes
- NOTE: This all assumes that I made no merging errors
- Wild Pokémon and Trainers have their levels increased to make grinding less of a pain
    - However, with the Exp. Share now affecting all party members, this can lead to becoming overleveled
- Decapitalization
- Pokémon that evolve with an item at day or night now can evolve at any time
- EVs now give one stat increase for every EV but cap out at 63 (individual)/127 (total). This will lead to the same stats as the old system but easier to train
- Pokémon can now be listed as orange in the Pokédex
- Releasing a Pokémon now gives you its Poké Ball back
- Hoenn-specific:
    - Some areas made easier to navigate
        - Route 102/103: Path from Littleroot to rival is more direct
    - Some reversions back to Ruby and Sapphire
        - Birch is chased by a Poochyena
        - Some trainers on Routes 104 and 117 go back to their original locations
    - Gym Leaders use more Hoenn Pokémon
    - Gym Leaders and Magma/Aqua Admins/Leaders no longer have underleveled evolutions
    - Team Magma are more focused on Ground types than Fire types to avoid overlap with Flannery
    - Pokémon have a more even encounter distribution
    - Route 104's northen section has different encounters than the southern section
    - Safari Zone:
        - The Safari Zone is now in the postgame only. Its regular Pokémon have been moved to other locations
        - Pokémon in the Safari Zone can't flee
        - Connected the north and northwest sections of the Safari Zone
        - Now get 99 Safari Balls (which have a 5x catch rate) and 9999 steps
        - There are extra areas in the Safari Zone
    - Steven now gives out a Jirachi (Beldum is now in Meteor Falls with Bagon)
    - Contest opponents from RS and ORAS were added
    - There is now a Special Rank for contests after Master Rank. It functions the same as Master Rank but has more unique opponents, though it still has some placeholders

### Overworld:
- Faster walking/surfing speed
- You can check which wild Pokémon appear through the PokéNav
- Route 110 can now be bypassed with Surf
- Certain sections are blocked off until gyms or rivals are defeated
- Rainy routes will automatically water berries
- Underwater areas now connect better
- Mirage Island now always appears
    - Pokémon from Mirage Island will have their Hidden Ability. In addition, their met location will be Mirage Island instead of Route 130
- Made rapids easier to navigate so that only one trip is needed to get all items/battle all trainers (at the cost of looking slightly worse)
- Added area to grind right outside Elite Four
- Can now leave the first hallway of the Elite Four
- All legendaries will now respawn if not caught after defeating the Elite Four

### Quality of Life:
- Shiny Pokémon can no longer spawn until you get Poké Balls
- You can now always run from wild Pokémon if they are asleep, frozen, or in a semi-invulnerable state (using Fly, Dig, Dive, Bounce, etc.). This works even if they have Shadow Tag/Arena Trap
- Party Menu:
    - You can nickname and relearn moves from the party menu
    - Can swap party members with Select
- Press A on the summary screen to see a Pokémon's EVs/IVs
- Items in shops are based on the amount of badges you have
- Bag:
    - Bag sorting with Start button
    - More bag space
- The naming screen automatically swaps to lowercase after the first letter
- Premier Balls are now given for every multiple of 10 of any ball you buy (as opposed to only 1 for 10+ Poke Balls)
- Two Pokémon having the same original trainer no longer negatively affects breeding chances
- All text characters are now eligible for a Walda wallpaper
- It is now easier to specify which Walda wallpaper you want
- Can now use Soot Sack to see how much ash you have
- Ash collects in non-grass tiles as well now
- Much easier to make good Pokéblocks
- Both Shoal Cave items are now available in low tide, which is available more often
- Sealed Chamber still needs to be completed to open the Regi areas, but it's solved by simply reading the braille at the back of the inner room
    - The door to Sealed Chamber and the Regis' inner rooms are now automatically open
- Tickets for islands where Latios, Latias, Deoxys, Lugia, Ho-Oh, and Mew reside are given after beating the Elite Four
    - Latios and Latias no longer roam and instead both show up on Southern Island
    - The Birth Island puzzle is much simpler
    - Navel Rock is slightly easier to navigate
- SS Tidal trainers can be rebattled every trip

#### Field Moves:
- HMs are now TMs and can be forgotten
- Fly can now be used from the Start Menu after getting Mauville's badge
- Cut and Strength no longer need a badge to be used
    - Cut trees and Strength boulders have been removed from everywhere but the Trick House
- Rock Smash rocks have been removed from everywhere but Rusturf Tunnel
- Cut, Rock Smash, and Strength now just need a Pokémon to be able to learn the move, instead of actually knowing the move
- The Escape Rope can by used in the Trick Room puzzles that involve Cut/Strength
- Flash is no longer needed anywhere
- Surf, Dive and Waterfall have been replaced by a key item
- Fly can now be used to go to more places:
    - The Flower Shop on Route 104
    - The Abandoned Ship on Route 108
    - The Old Lady's Rest Stop on Route 111
    - Fiery Path on Route 112
    - Meteor Falls on Route 114
    - The Weather Institute on Route 119
    - The Safari Zone on Route 121
    - Mt. Pyre on Route 122
    - Shoal Cave on Route 125
    - Sky Pillar on Route 131
    - Southern Island

### Battle:
- Battles in New Mauville start with Electric Terrain
- Battles in long grass on Routes 119 and 120 start with Grassy Terrain (unless it's a thunderstorm)
- Added battle environments from later generations (effects Secret Power and Nature Power):
    - Burial Ground (Mt. Pyre)
    - Volcano (Fiery Path, Mt. Chimney, Safari Zone fire cave)
    - Ice (Shoal Cave ice room, Safari Zone ice cave)
    - Sky Pillar (Sky Pillar)
- Added new Elite Four battle backgrounds that match their type

### Items:
- No longer able to select "Use" on items that can't be used from the bag
- Eviolite now prevents Pokémon from evolving
- Buffs to healing items:
    - Hyper Potion: 120->200
    - Fresh Water: 30->50
    - Soda Pop: 50->60
    - Lemonade: 70->80
    - Energy Root: 120->200
- Some items, such as vitamins and hold items, are cheaper
- Ability Capsules, Ability Patches, Mints, and EV-reducing berries are available to buy in Lilycove
- The Good Rod is now obtained on the left side of Route 118 instead of the right, meaning it is available before getting Surf
- Sacred Ash now works in battles although it only revives one Pokémon
- Soul Dew uses its Gen 6 effect
- Lucky Egg now gives double EXP

### Battle Frontier:
- Pokémon in the Battle Frontier/Trainer Hill now register in the Pokédex
- Frontier Brains have updated teams
- Battle Pyramid wild Pokémon have been updated
- Battle Frontier no longer requires saving
- The old man in the Battle Frontier (in the building above the Pokémon Center) who used to tell you your Pokémon's IVs now Hyper Trains stats for free

### Trainers:
- Rich Boys all have shiny Pokémon
- Triathletes all have Pokémon with maxed HP and Speed EVs and IVs (to reflect training for endurance and speed)
- Pokémon Breeders all have Pokémon with perfect IVs. They can also have Hidden Abilities
- Bird Keepers now use the overworld sprite of male Psychics since it looks more like them than the blond sprite
- Wally is given more battles. The battle in Verdanturf starts with Grassy Terrain
- There are now one less rematch per gym leader/Wally to free up space
- Any Trainer first encountered after Sootopolis now only has one rematch
    - This only applies to two Trainers in Meteor Falls
- Rematches now require less steps (regular trainers) and battles (Gym Leaders) to trigger

#### Bosses (Emerald):
|          BOSSES           |        VANILLA       |    UPDATED    |
|:-------------------------:|:--------------------:|:-------------:|
|Rival Route 103            |5||
|Gym Leader 1               |12, 12, 15||
|Rival Rustboro             |13, 15||
|Gym Leader 2               |16, 16, 19            |16, 16, 18|
|Archie Oceanic Museum      |N/A                   |17, 17, 19|
|Rival Route 110            |18, 18, 20||
|Wally Mauville             |16                    |19|
|Wally Verdanturf           |N/A                   |21, 23|
|Gym Leader 3               |20, 22, 22, 24||
|Wally Route 114            |N/A                   |25, 25, 27|
|Courtney Meteor Falls      |N/A                   |26, 26, 28|
|Tabitha Mt. Chimney        |18, 20, 22, 22        |27, 27, 29|
|Maxie Mt. Chimney          |24, 24, 25            |28, 29, 29, 30|
|Gym Leader 4               |24, 24, 26, 29        |28, 30, 30, 32|
|Gym Leader 5               |27, 27, 29, 31        |31, 33, 33, 35|
|Shelly Weather Institute   |28, 28                |39, 39, 41|
|Rival Route 119            |29, 29, 31            |40, 40, 41, 42|
|Gym Leader 6               |29, 29, 30, 31, 33    |40, 40, 41, 41, 43|
|Rival Lilycove             |31, 32, 32, 34        |43, 43, 43, 44, 45|
|Tabitha Magma Hideout      |26, 28, 30, 33        |45, 45, 47|
|Maxie Magma Hideout        |37, 38, 39            |46, 47, 47, 48|
|Matt Aqua Hideout          |34, 34                |47, 47, 49|
|Gym Leader 7               |41, 41, 42, 42        |49, 49, 51, 51|
|Courtney Space Center      |N/A                   |50, 50, 52|
|Tabitha/Maxie Space Center |36, 38, 40/42, 43, 44 |50, 50, 52/52, 52, 53|
|Matt/Shelly Seafloor Cavern|N/A/37, 37            |52, 52, 54/52, 52, 54|
|Archie Seafloor Cavern     |41, 41, 43            |53, 53, 54, 55|
|Regirock/Regice/Registeel  |40                    |55|
|Regieleki/Regidrago        |N/A                   |55|
|Regigigas                  |N/A                   |60|
|Gym Leader 8               |41, 41, 43, 43, 46    |55, 55, 56, 56, 58|
|Rayquaza                   |70                    |60|
|Wally Victory Road         |41, 43, 44, 44, 45    |56, 56, 57, 57, 59|
|Elite Four 1               |46, 46, 48, 48, 49    |60, 60, 61, 61, 63|
|Elite Four 2               |48, 49, 49, 50, 51    |61, 61, 62, 62, 64|
|Elite Four 3               |50, 50, 52, 52, 53    |62, 62, 63, 63, 65|
|Elite Four 4               |52, 53, 53, 54, 55    |63, 63, 64, 64, 66|
|Champion                   |55, 56, 56, 56, 57, 58|67, 67, 67, 67, 68, 69|
|Groudon/Kyogre             |70||
|Latios/Latias              |40                    |70|
|Mew                        |N/A                   |70|
|Deoxys                     |N/A                   |70|
|Lugia/Ho-Oh                |N/A                   |70|
|Gym Leader/Wally rematch 1 |Various               |75, 75, 75, 78, 78, 80|
|Gym Leader/Wally rematch 2 |Various               |80, 80, 80, 83, 83, 85|
|Gym Leader/Wally rematch 3 |Various               |85, 85, 85, 88, 88, 90|
|Elite Four rematches       |N/A                   |87, 87, 87, 88, 88, 90|
|Champion rematches         |N/A                   |88, 88, 88, 88, 89, 90|
|Steven                     |75, 76, 76, 76, 77, 78|88, 88, 88, 89, 89, 90|

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
- Pummel: New ability, Fighting clone of Overgrow/Blaze/Torrent/Swarm
- Zephyr: New ability, Flying clone of Overgrow/Blaze/Torrent/Swarm

### TMs:
|TM #|   Move   |Location|
|:--:|   :--:   |:------:|
|TM001|Focus Punch|Route 115|
|TM002|Dragon Claw|Meteor Falls|
|TM003|Water Pulse|Slateport TM Shop|
|TM004|Calm Mind|Slateport TM Shop|
|TM005|Roar|Route 114|
|TM006|Toxic|Fortree TM Shop|
|TM007|Hail|Shoal Cave|
|TM008|Bulk Up|Brawly|
|TM009|Bullet Seed|Route 104|
|TM010|Hidden Power|Fortree|
|TM011|Sunny Day|Scorched Slab|
|TM012|Taunt|Trick House|
|TM013|Ice Beam|Abandonded Ship|
|TM014|Blizzard|Lilycove Department Store|
|TM015|Hyper Beam|Lilycove Department Store|
|TM016|Light Screen|Fortree TM Shop|
|TM017|Protect|Fortree TM Shop|
|TM018|Rain Dance|Abandonded Ship|
|TM019|Giga Drain|Fortree TM Shop|
|TM020|Safeguard|Fortree TM Shop|
|TM021|Frustration|Pacifidlog|
|TM022|Solar Beam|Safari Zone|
|TM023|Iron Tail|Meteor Falls|
|TM024|Thunderbolt|Mauville|
|TM025|Thunder|Lilycove Department Store|
|TM026|Earthquake|Seafloor Cavern|
|TM027|Return|Pacifidlog|
|TM028|Dig|Route 114|
|TM029|Psychic|Tate/Liza|
|TM030|Shadow Ball|Mt. Pyre|
|TM031|Brick Break|Sootopolis|
|TM032|Double Team|Route 113|
|TM033|Reflect|Fortree TM Shop|
|TM034|Shock Wave|Wattson|
|TM035|Flamethrower|Fiery Path|
|TM036|Sludge Bomb|Dewford|
|TM037|Sandstorm|Route 111|
|TM038|Fire Blast|Lilycove Department Store|
|TM039|Rock Tomb|Slateport TM Shop|
|TM040|Aerial Ace|Winona|
|TM041|Torment|Slateport|
|TM042|Facade|Norman|
|TM043|Secret Power|Route 111|
|TM044|Rest|Lilycove|
|TM045|Attract|Verdanturf|
|TM046|Thief|Slateport|
|TM047|Steel Wing|Granite Cave|
|TM048|Skill Swap|Mt. Pyre|
|TM049|Snatch|SS Tidal|
|TM050|Overheat|Flannery|
|TM051|Cut|Rustboro|
|TM052|Fly|Route 119|
|TM053|Surf|Petalburg|
|TM054|Strength|Rusturf Tunnel|
|TM055|Flash|Granite Cave|
|TM056|Rock Smash|Mauville|
|TM057|Waterfall|Sootopolis|
|TM058|Dive|Mossdeep|
|TM059|False Swipe|Slateport TM Shop|
|TM060|Fire Spin|Slateport TM Shop|
|TM061|Whirlpool|Slateport TM Shop|
|TM062|Sand Tomb|Slateport TM Shop|
|TM063|Acid Spray|Slateport TM Shop|
|TM064|Metal Claw|Slateport TM Shop|
|TM065|Smack Down|Slateport TM Shop|
|TM066|Flame Charge|Slateport TM Shop|
|TM067|Trailblaze|Slateport TM Shop|
|TM068|Struggle Bug|Slateport TM Shop|
|TM069|Pounce|Slateport TM Shop|
|TM070|Chilling Water|Slateport TM Shop|
|TM071|Psych Up|Slateport TM Shop|
|TM072|Trick|Slateport TM Shop|
|TM073|Encore|Slateport TM Shop|
|TM074|Haze|Slateport TM Shop|
|TM075|Helping Hand|Slateport TM Shop|
|TM076|Charge Beam|Mauville TM Shop|
|TM077|Vacuum Wave|Mauville TM Shop|
|TM078|Icicle Spear|Mauville TM Shop|
|TM079|Poison Tail|Mauville TM Shop|
|TM080|Draining Kiss|Rustboro Gym Leader|
|TM081|Electroweb|Mauville TM Shop|
|TM082|Icy Wind|Mauville TM Shop|
|TM083|Mud Shot|Mauville TM Shop|
|TM084|Snarl|Mauville TM Shop|
|TM085|Air Cutter|Mauville TM Shop|
|TM086|Psybeam|Mauville TM Shop|
|TM087|Silver Wind|Slateport TM Shop|
|TM088|Bug Bite|Mauville TM Shop|
|TM089|Bulldoze|Mauville TM Shop|
|TM090|Breaking Swipe|Mauville TM Shop|
|TM091|Dragon Tail|Mauville TM Shop|
|TM092|Swift|Mauville TM Shop|
|TM093|Magical Leaf|Mauville TM Shop|
|TM094|Disarming Voice|Mauville TM Shop|
|TM095|Thunder Fang|Mauville TM Shop|
|TM096|Fire Fang|Mauville TM Shop|
|TM097|Ice Fang|Mauville TM Shop|
|TM098|Thunder Wave|Mauville TM Shop|
|TM099|Will-O-Wisp|Mauville TM Shop|
|TM100|Confuse Ray|Mauville TM Shop|
|TM101|Poison Fang|Lavaridge TM Shop|
|TM102|Charge|Mauville TM Shop|
|TM103|Knock Off|Lavaridge TM Shop|
|TM104|Payback|Lavaridge TM Shop|
|TM105|Avalanche|Lavaridge TM Shop|
|TM106|Brine|Lavaridge TM Shop|
|TM107|Hex|Lavaridge TM Shop|
|TM108|Venoshock|Lavaridge TM Shop|
|TM109|U-turn|Lavaridge TM Shop|
|TM110|Volt Switch|Lavaridge TM Shop|
|TM111|Flip Turn|Lavaridge TM Shop|
|TM112|Heat Crash|Lavaridge TM Shop|
|TM113|Heavy Slam|Lavaridge TM Shop|
|TM114|Seismic Toss|Lavaridge TM Shop|
|TM115|Night Shade|Lavaridge TM Shop|
|TM116|Reversal|Lavaridge TM Shop|
|TM117|Grass Knot|Lavaridge TM Shop|
|TM118|Gyro Ball|Lavaridge TM Shop|
|TM119|Electro Ball|Lavaridge TM Shop|
|TM120|Super Fang|Lavaridge TM Shop|
|TM121|Foul Play|Lavaridge TM Shop|
|TM122|Endeavor|Lavaridge TM Shop|
|TM123|Fling|Lavaridge TM Shop|
|TM124|Swords Dance|Lavaridge TM Shop|
|TM125|Nasty Plot|Lavaridge TM Shop|
|TM126|Iron Defense|Lavaridge TM Shop|
|TM127|Amnesia|Lavaridge TM Shop|
|TM128|Agility|Lavaridge TM Shop|
|TM129|Dragon Dance|Lavaridge TM Shop|
|TM130|Charm|Lavaridge TM Shop|
|TM131|Feather Dance|Lavaridge TM Shop|
|TM132|Eerie Impulse|Lavaridge TM Shop|
|TM133|Metal Sound|Lavaridge TM Shop|
|TM134|Fake Tears|Lavaridge TM Shop|
|TM135|Coaching|Lavaridge TM Shop|
|TM136|Spikes|Lavaridge TM Shop|
|TM137|Toxic Spikes|Lavaridge TM Shop|
|TM138|Stealth Rock|Lavaridge TM Shop|
|TM139|Baton Pass|Lavaridge TM Shop|
|TM140|Trick Room|Lavaridge TM Shop|
|TM141|Pain Split|Lavaridge TM Shop|
|TM142|Spite|Lavaridge TM Shop|
|TM143|Gravity|Lavaridge TM Shop|
|TM144|Weather Ball|Fortree TM Shop|
|TM145|Psycho Cut|Fortree TM Shop|
|TM146|Shadow Claw|Fortree TM Shop|
|TM147|Night Slash|Fortree TM Shop|
|TM148|Skitter Smack|Fortree TM Shop|
|TM149|Grassy Glide|Fortree TM Shop|
|TM150|Rising Voltage|Fortree TM Shop|
|TM151|Expanding Force|Fortree TM Shop|
|TM152|Smart Strike|Fortree TM Shop|
|TM153|Scorching Sands|Fortree TM Shop|
|TM154|Burning Jealousy|Fortree TM Shop|
|TM155|Thunder Punch|Fortree TM Shop|
|TM156|Fire Punch|Fortree TM Shop|
|TM157|Ice Punch|Fortree TM Shop|
|TM158|Drain Punch|Lilycove Department Store|
|TM159|Stomping Tantrum|Fortree TM Shop|
|TM160|Temper Flare|Fortree TM Shop|
|TM161|Lash Out|Fortree TM Shop|
|TM162|Psychic Noise|Fortree TM Shop|
|TM163|Seed Bomb|Fortree TM Shop|
|TM164|X-Scissor|Fortree TM Shop|
|TM165|Signal Beam|Fortree TM Shop|
|TM166|Zen Headbutt|Fortree TM Shop|
|TM167|Drill Run|Fortree TM Shop|
|TM168|Dual Wingbeat|Fortree TM Shop|
|TM169|Ice Spinner|Fortree TM Shop|
|TM170|Dazzling Gleam|Fortree TM Shop|
|TM171|Alluring Voice|Fortree TM Shop|
|TM172|Muddy Water|Fortree TM Shop|
|TM173|Uproar|Fortree TM Shop|
|TM174|Scale Shot|Fortree TM Shop|
|TM175|Upper Hand|Fortree TM Shop|
|TM176|Hard Press|Fortree TM Shop|
|TM177|Roost|Fortree TM Shop|
|TM178|Tailwind|Fortree TM Shop|
|TM179|Curse|Fortree TM Shop|
|TM180|Dragon Cheer|Fortree TM Shop|
|TM181|Body Slam|Lilycove Department Store|
|TM182|Hyper Voice|Lilycove Department Store|
|TM183|Blaze Kick|Lilycove Department Store|
|TM184|Heat Wave|Lilycove Department Store|
|TM185|Liquidation|Juan|
|TM186|Aqua Tail|Lilycove Department Store|
|TM187|Scald|Lilycove Department Store|
|TM188|Leaf Blade|Lilycove Department Store|
|TM189|Petal Blizzard|Lilycove Department Store|
|TM190|Energy Ball|Route 123|
|TM191|Zing Zap|Lilycove Department Store|
|TM192|Icicle Crash|Lilycove Department Store|
|TM193|Sky Uppercut|Lilycove Department Store|
|TM194|Aura Sphere|Lilycove Department Store|
|TM195|Poison Jab|Lilycove Department Store|
|TM196|Sludge Wave|Lilycove Department Store|
|TM197|High Horsepower|Lilycove Department Store|
|TM198|Earth Power|Lilycove Department Store|
|TM199|Acrobatics|Lilycove Department Store|
|TM200|Air Slash|Lilycove Department Store|
|TM201|Psychic Fangs|Lilycove Department Store|
|TM202|Psyshock|Lilycove Department Store|
|TM203|Leech Life|Lilycove Department Store|
|TM204|Lunge|Lilycove Department Store|
|TM205|Bug Buzz|Lilycove Department Store|
|TM206|Pollen Puff|Lilycove Department Store|
|TM207|Rock Slide|Lilycove Department Store|
|TM208|Power Gem|Fallarbor|
|TM209|Phantom Force|Lilycove Department Store|
|TM210|Dragon Pulse|Lilycove Department Store|
|TM211|Crunch|Lilycove Department Store|
|TM212|Throat Chop|Lilycove Department Store|
|TM213|Darkest Lariat|Lilycove Department Store|
|TM214|Dark Pulse|Lilycove Department Store|
|TM215|Iron Head|Lilycove Department Store|
|TM216|Flash Cannon|Lilycove Department Store|
|TM217|Play Rough|Lilycove Department Store|
|TM218|Moonblast|Lilycove Department Store|
|TM219|Body Press|Lilycove Department Store|
|TM220|Fire Pledge|Lilycove Department Store|
|TM221|Water Pledge|Lilycove Department Store|
|TM222|Grass Pledge|Lilycove Department Store|
|TM223|Electric Terrain|Lilycove Department Store|
|TM224|Grassy Terrain|Lilycove Department Store|
|TM225|Psychic Terrain|Lilycove Department Store|
|TM226|Misty Terrain|Lilycove Department Store|
|TM227|Giga Impact|Lilycove Department Store|
|TM228|Hydro Pump|Lilycove Department Store|
|TM229|Hurricane|Lilycove Department Store|
|TM230|Gunk Shot|Lilycove Department Store|
|TM231|Focus Blast|Victory Road|
|TM232|Stone Edge|Lilycove Department Store|
|TM233|Blast Burn|Lilycove Department Store|
|TM234|Hydro Cannon|Lilycove Department Store|
|TM235|Frenzy Plant|Lilycove Department Store|
|TM236|Flare Blitz|Lilycove Department Store|
|TM237|Brave Bird|Lilycove Department Store|
|TM238|Wild Charge|Lilycove Department Store|
|TM239|Leaf Storm|Lilycove Department Store|
|TM240|Draco Meteor|Lilycove Department Store|
|TM241|Close Combat|Lilycove Department Store|
|TM242|Solar Blade|Lilycove Department Store|
|TM243|Outrage|Lilycove Department Store|
|TM244|Future Sight|Lilycove Department Store|
|TM245|Misty Explosion|Lilycove Department Store|
|TM246|Meteor Beam|Lilycove Department Store|
|TM247|Steel Beam|Lilycove Department Store|
|TM248|Triple Axel|Lilycove Department Store|
|TM249|Poltergeist|Lilycove Department Store|
|TM250|Supercell Slam|Lilycove Department Store|

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
- Dream Eater
- Mega Punch
- Mega Kick
- Dragon Breath
- Stored Power
- Mud-Slap
- Endure
- Rock Climb
- Imprison

#### Battle Frontier Right:
- Counter
- Low Kick
- Low Sweep
- Terrain Pulse
- Rock Blast
- Mystical Fire
- Defense Curl
- Scary Face
- Take Down

### Moves:
- All moves automatically have their max PP amount
- Added custom 40 BP moves for type/category combos that were missing them
    - Animations and descriptions are currently missing
    - No Pokémon currently learn them
- All Pokémon in an Egg Group that shares a name with a type now learn a move of that type by either Egg Move or move tutor. This is reflected in the species changes below
    - Dragon: Dragon Breath by move tutor
    - Fairy: Fairy Wind by Egg Move (except Phione)
    - Grass: Grass Whistle by Egg Move
- Moves are no longer replaced if a Pokémon levels up in the daycare
- Many moves (especially signature moves) were given 100% accuracy and/or 10 PP as opposed to 5
- Some moves had their power or PP slightly updated to make them more similar to other moves (like Ice Beam gaining 5 PP to match Thunderbolt and Flamethrower)
#### Specific move changes:
- Normal:
    - Barrage:
        - Power: 15->25
        - Accuracy: 85->100
    - Bind:
        - Power: 15->35
        - Accuracy: 85->100
    - Blood Moon:
        - PP: 5->10
    - Comet Punch:
        - Power: 18->25
        - Accuracy: 85->100
        - PP: 15->20
    - Constrict:
        - Power: 20->30
        - Chance to reduce speed: 20%->30%
    - Crush Claw:
        - Accuracy: 95->100
    - Crush Grip:
        - PP: 5->10
    - Cut:
        - Accuracy: 95->100
        - PP: 30->35
    - Dizzy Punch:
        - Power: 70->75
        - PP: 10->15
    - Double Hit:
        - Power: 35->40
        - Accuracy: 90->100
        - PP: 10->15
    - Double Slap:
        - Now hits exactly twice
        - Power: 15->30
        - Accuracy: 85->100
        - PP: 10->30
    - Echoed Voice:
        - PP: 15->20
    - Egg Bomb:
        - Accuracy: 75->100
        - PP: 10->15
    - Frustration:
        - Max power: 102->127.5
    - Fury Attack:
        - Power: 15->25
        - Accuracy: 85->100
    - Fury Swipes:
        - Power: 18->25
        - Accuracy: 80->100
        - PP: 15->20
    - Head Charge:
        - No longer causes recoil
    - Horn Attack:
        - PP: 25->30
    - Hyper Drill:
        - PP: 5->10
    - Hyper Fang:
        - Accuracy: 90->100
        - Chance to flinch: 10%->30%
    - Hyper Voice:
        - PP: 10->15
    - Judgment:
        - Power: 100->150
    - Mega Punch:
        - Accuracy: 85->100
    - Pound:
        - PP: 35->40
    - Present:
        - Accuracy: 90->100
        - Damage odds:
            - 40% 40->20% 60
            - 30% 80->40% 80
            - 10% 120->20% 120
    - Rage:
        - Power: 20->30
    - Relic Song:
        - Power: 75->100
    - Rock Climb:
        - Accuracy: 85->100
    - Return:
        - Max power: 102->127.5
    - Scratch:
        - PP: 35->40
    - Slam:
        - Accuracy: 75->100
    - Spike Cannon:
        - Power: 20->25
        - PP: 15->20
    - Strength:
        - PP: 15->20
    - Tackle:
        - PP: 35->40
    - Tail Slap:
        - Accuracy: 85->100
        - PP: 10->20
    - Take Down:
        - Accuracy: 85->100
    - Techno Blast:
        - PP: 5->10
    - Tera Starstorm:
        - PP: 5->10
    - Tri Attack:
        - PP: 10->15
        - Effect: 20%->30%
    - Vise Grip:
        - Power: 55->65
    - Wrap:
        - Power: 15->35
        - Accuracy: 90->100
    - Wring Out:
        - PP: 5->10
- Fighting:
    - Arm Thrust:
        - Power: 15->25
    - Aura Sphere:
        - Power: 80->90
    - Brick Break:
        - Power: 75->85
    - Collision Course:
        - PP: 5->10
    - Dynamic Punch:
        - Power: 100->120
    - Flying Press:
        - Accuracy: 95->100
    - Force Palm:
        - PP: 10->25
    - Jump Kick:
        - PP: 10->15
    - Rock Smash:
        - PP: 15->20
    - Rolling Kick:
        - Power: 60->65
        - Accuracy: 85->100
        - PP: 15->20
    - Sky Uppercut:
        - Accuracy: 90->100
    - Submission:
        - Power: 80->120
        - Accuracy: 80->100
        - PP: 20->15
        - Recoil: 25%->33%
    - Thunderous Kick:
        - PP: 10->15
    - Triple Kick:
        - Power: 10->20
    - Vital Throw:
        - Priority: -1->0
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
    - Beak Blast:
        - PP: 5->10
    - Bleakwind Storm:
        - Power: 100->120
        - Accuracy: 80->100
    - Chatter:
        - Power: 65->80
        - Can now be copied by Sketch
    - Dragon Ascent:
        - PP: 5->10
        - No longer lowers users Defense and Special Defense
    - Dragon Breath:
        - PP: 20->25
    - Dual Wingbeat:
        - Accuracy: 90->100
        - PP: 10->15
    - Fly:
        - Accuracy: 95->100
    - Gust:
        - PP: 35->40
    - Peck:
        - Power: 35->40
        - PP: 35->40
    - Sky Attack:
        - Accuracy: 90->100
        - PP: 5->10
    - Wing Attack:
        - Power: 60->65
        - PP: 35->30
- Poison:
    - Barb Barrage:
        - Power: 60->75
    - Belch:
        - Accuracy: 90->100
    - Malignant Chain:
        - PP: 5->10
    - Mortal Spin:
        - Power: 30->50
    - Poison Sting:
        - Power: 15->30
    - Poison Fang:
        - Power: 50->60
- Ground:
    - Bonemerang:
        - Accuracy: 90->100
        - PP: 10->20
    - Bone Club:
        - Accuracy: 85->100
        - Chance to flinch: 10%->30%
    - Bone Rush:
        - Accuracy: 90->100
        - PP: 10->20
    - Drill Run:
        - Accuracy: 95->100
    - High Horsepower:
        - Accuracy: 95->100
    - Land's Wrath:
        - Power: 90->100
    - Mud Bomb:
        - Accuracy: 85->100
    - Mud Shot:
        - Accuracy: 95->100
        - Target: One foe->both foes
    - Mud-Slap:
        - PP: 10->20
    - Precipice Blades:
        - Accuracy: 85->100
        - Now a slicing move
    - Sandsear Storm:
        - Power: 100->120
        - Accuracy: 80->100
        - Chance to burn: 20%->30%
    - Sand Tomb:
        - Accuracy: 85->100
        - PP: 15->20
    - Scorching Sands:
        - PP: 10->15
    - Thousand Arrows:
        - Power: 90->100
    - Thousand Waves:
        - Power: 90->100
- Rock:
    - Accelrock:
        - PP: 20->30
    - Ancient Power:
        - PP: 5->10
    - Diamond Storm:
        - Accuracy: 95->100
        - PP: 5->10
    - Mighty Cleave:
        - PP: 5->10
    - Rock Blast:
        - Accuracy: 90->100
        - PP: 10->20
    - Rock Slide:
        - Power: 75->80
        - Accuracy: 90->100
    - Rock Throw:
        - Accuracy: 90->100
        - PP: 15->35
    - Rock Tomb:
        - Accuracy: 95->100
    - Salt Cure:
        - PP: 15->20
    - Stone Axe:
        - Power: 65->70
        - Accuracy: 90->100
- Bug:
    - Bug Bite:
        - Now a biting move
    - Infestation:
        - Power: 20->35
    - Pin Missile:
        - Accuracy: 95->100
    - Signal Beam:
        - Power: 75->80
        - PP: 15->20
        - Chance to confuse: 10%->30%
    - Silver Wind:
        - PP: 5->10
    - Skitter Smack:
        - Accuracy: 90->100
    - Twineedle:
        - Power: 25->50
    - X-Scissor:
        - PP: 15->20
- Ghost:
    - Astonish:
        - Power: 30->40
        - PP: 15->20
    - Astral Barrage:
        - Power: 110->120
        - PP: 5->10
    - Bitter Malice:
        - Power: 75->80
    - Infernal Parade:
        - Power: 65->75
    - Lick:
        - PP: 30->35
    - Moongeist Beam:
        - PP: 5->10
    - Ominous Wind:
        - PP: 5->10
    - Poltergeist:
        - Accuracy: 90->100
    - Shadow Claw:
        - PP: 15->20
    - Shadow Force:
        - PP: 5->10
    - Spirit Shackle:
        - PP: 10->20
- Electric:
    - Bolt Strike:
        - Accuracy: 85->100
        - PP: 5->10
    - Double Shock:
        - Power: 120->130
        - PP: 5->10
    - Electro Drift:
        - PP: 5->10
    - Electroweb:
        - Accuracy: 95->100
    - Fusion Bolt:
        - PP: 5->10
    - Overdrive:
        - Power: 80->90
        - PP: 10->15
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
        - Chance to paralyze: 10%->30%
        - No longer causes recoil
    - Wildbolt Storm:
        - Power: 100->120
        - Accuracy: 80->100
        - Chance to paralyze: 20%->30%
    - Wild Charge:
        - Power: 90->120
        - Recoil: 25%->33%
    - Zing Zap:
        - PP: 10->15
- Fire:
    - Blaze Kick:
        - Accuracy: 90->100
    - Blue Flare:
        - Accuracy: 85->100
        - PP: 5->10
    - Burning Jealousy:
        - PP: 5->10
    - Burn Up:
        - PP: 5->10
    - Ember:
        - PP: 25->30
    - Fiery Dance:
        - Effect chance: 50%->100%
    - Fire Fang:
        - Accuracy: 95->100
    - Fire Spin:
        - Accuracy: 85->100
        - PP: 15->20
    - Flame Wheel:
        - Chance to burn: 10%->30%
    - Fusion Flare:
        - PP: 5->10
    - Heat Wave:
        - Power: 95->100
    - Inferno:
        - Power: 100->120
    - Magma Storm:
        - Power: 100->120
        - Accuracy: 75->100
        - PP: 5->10
    - Pyro Ball:
        - Accuracy: 90->100
        - PP: 5->10
        - Chance to burn: 10%->20%
    - Sacred Fire:
        - Accuracy: 95->100
        - PP: 5->10
    - Searing Shot:
        - PP: 5->10
    - V-create:
        - Accuracy: 95->100
- Water:
    - Aqua Jet:
        - PP: 20->30
    - Aqua Tail:
        - Accuracy: 90->100
    - Clamp:
        - Accuracy: 85->100
        - PP: 15->20
    - Crabhammer:
        - Accuracy: 95->100
    - Flip Turn:
        - Power: 60->70
    - Hydro Pump:
        - Accuracy: 80->85
    - Hydro Steam:
        - Power: 80->90
    - Octazooka:
        - Power: 65->90
        - Accuracy: 85->100
        - Effect chance: 50%->100%
    - Origin Pulse:
        - Power: 110->120
        - Accuracy: 85->100
    - Razor Shell:
        - Accuracy: 95->100
    - Scald:
        - PP: 15->20
    - Steam Eruption:
        - Accuracy: 95->100
        - PP: 5->10
    - Surf:
        - Target: Both foes and ally->both foes
    - Surging Strikes:
        - PP: 5->10
    - Triple Dive:
        - Accuracy: 95->100
    - Waterfall:
        - Chance to flinch: 20%->30%
    - Water Gun:
        - PP: 25->40
    - Water Pulse:
        - PP: 20->25
        - Chance to confuse: 20%->30%
    - Water Shuriken:
        - Power: 15->25
    - Wave Crash:
        - PP: 10->15
    - Whirlpool:
        - Accuracy: 85->100
        - PP: 15->20
- Grass:
    - Apple Acid:
        - PP: 10->15
    - Bullet Seed:
        - PP: 30->20
    - Chloroblast:
        - Accuracy: 95->100
        - PP: 5->10
    - Drum Beating:
        - PP: 10->15
    - Leaf Tornado:
        - Accuracy: 90->100
        - Effect: 50%->30%
    - Matcha Gotcha:
        - Accuracy: 90->100
    - Needle Arm:
        - Power: 60->75
        - Now a punching move
    - Petal Blizzard:
        - Target: Both foes and ally->both foes
    - Razor Leaf:
        - Power: 55->60
        - Accuracy: 95->100
    - Seed Bomb:
        - PP: 15->20
    - Seed Flare:
        - Accuracy: 85->100
        - PP: 5->10
    - Sleep Powder:
        - PP: 15->35
    - Snap Trap:
        - PP: 15->20
    - Stun Spore:
        - PP: 30->35
    - Syrup Bomb:
        - Power: 60->80
        - Accuracy: 90->100
    - Trop Kick:
        - Power: 85->90
    - Vine Whip:
        - Power: 45->50
        - PP: 20->35
    - Worry Seed:
        - PP: 10->15
- Psychic:
    - Confusion:
        - Chance to confuse: 10%->20%
    - Eerie Spell:
        - PP: 5->10
    - Freezing Glare:
        - Chance to freeze: 10%->20%
    - Hyperspace Hole:
        - Power: 80->90
        - PP: 5->10
    - Hypnosis:
        - Has an accuracy of 100 when used by Hypno
    - Kinesis:
        - Accuracy: 80->100
    - Luster Purge/Mist Ball:
        - PP: 5->10
        - Effect chance: 50%->100%
    - Mystical Power:
        - Power: 70->90
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
    - Twin Beam:
        - Power: 40->50
        - PP: 10->20
    - Zen Headbutt:
        - Accuracy: 90->100
        - Chance to flinch: 20%->30%
- Ice:
    - Blizzard:
        - PP: 5->10
    - Freeze Shock:
        - Accuracy: 90->100
        - PP: 5->10
    - Frost Breath:
        - Accuracy: 90->100
    - Glacial Lance:
        - PP: 5->10
    - Glaciate:
        - Power: 65->80
        - Accuracy: 95->100
    - Ice Beam:
        - PP: 10->15
    - Ice Burn:
        - Accuracy: 90->100
        - PP: 5->10
    - Ice Fang:
        - Accuracy: 95->100
    - Icicle Crash:
        - Accuracy: 90->100
    - Icicle Spear:
        - PP: 30->20
    - Icy Wind:
        - Accuracy: 95->100
    - Mountain Gale:
        - Accuracy: 85->100
    - Powder Snow:
        - PP: 25->30
- Dragon:
    - Clanging Scales:
        - PP: 5->10
        - No longer lowers user's Defense
    - Dragon Claw:
        - PP: 15->20
    - Dragon Pulse:
        - Power: 85->90
    - Dual Chop:
        - Accuracy: 90->100
    - Dynamax Cannon:
        - PP: 5->10
    - Eternabeam:
        - Accuracy: 90->100
        - PP: 5->10
    - Fickle Beam:
        - PP: 5->10
    - Glaive Rush:
        - PP: 5->10
    - Roar of Time:
        - Power: 150->160
        - Accuracy: 90->100
        - PP: 5->10
    - Spacial Rend:
        - Accuracy: 95->100
        - PP: 5->10
    - Twister:
        - Chance to flinch: 20%->30%
- Dark:
    - Ceaseless Edge:
        - Power: 65->70
        - Accuracy: 90->100
    - Dark Pulse:
        - Chance to flinch: 20%->30%
    - False Surrender:
        - Power: 80->85
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
        - PP: 5->15
    - Flash Cannon:
        - Power: 80->90
    - Gear Grind:
        - Accuracy: 90->100
    - Gigaton Hammer:
        - PP: 5->10
    - Gyro Ball:
        - PP: 5->10
    - Hard Press:
        - Power: 100->120
    - Iron Head
        - Chance to flinch: 20%->30%
    - Make It Rain:
        - Accuracy: 95->100
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
        - No longer lowers user's Speed
        - PP: 10->15
    - Steel Beam:
        - Accuracy: 95->100
    - Steel Wing:
        - Accuracy: 90->100
    - Sunsteel Strike:
        - PP: 5->10
- Fairy:
    - Disarming Voice:
        - Power: 40->60
        - PP: 15->20
    - Fairy Wind:
        - PP: 30->40
    - Fleur Cannon:
        - Power: 130->140
        - Accuracy: 90->100
        - PP: 5->10
    - Light of Ruin:
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
        - Now always hits in rain
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
    Abilities:
        - Tinted Lens
        - Neuroforce
    Misc:
        - Charge
        - Mud Sport/Water Sport

- The following effects on accuracy are now reflected in battle and on the summary screen:
    - Thunder and Hurricane having 50% accuracy in sun
    - Thunder, Hurricane, Bleakwind Storm, Wildbolt Storm, and Sandsear Storm having 100% accuracy in rain
        - Although the last three moves were boosted to have 100% accuracy all the time
    - Blizzard having 100% accuracy in snow/hail
    - Nature Power's move's accuracy
    - OHKO moves
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

- All starters:
    - Any with a STAB attack at level 5 or below had it swapped with the next attack to prevent the rival battle from being too hard

- Pidgey:
    - SpA: 35->45
    - Learns Peck by level up
    - Learns Acrobatics by TM

- Pidgeotto:
    - SpA: 50->60
    - Learns Peck by level up
    - Learns Acrobatics by TM

- Pidgeot:
    - SpA: 70->80
    - Learns Peck by level up
    - Learns Acrobatics by TM

- Mega Pidgeot:
    - Spe: 121->131

- Spearow:
    - Type: Normal/Flying->Flying

- Fearow:
    - HP: 65->70
    - Atk: 90->95
    - SpA: 61->65
    - SpD: 61->65
    - Type: Normal/Flying->Flying

- Pichu:
    - Held item: Light Ball: 0%->100%
    - Evolution: friendship->12
    - Learns Fairy Wind by Egg Move

- Pikachu:
    - Held item: Light Ball: 5%->100%
    - Evolves into Alolan Raichu with a Sun Stone
    - Learns Volt Tackle by level up
    - Learns Fairy Wind by Egg Move

- Raichu:
    - Learns Volt Tackle by level up
    - Learns
    - Learns Fairy Wind by Egg Move

- Alolan Raichu:
    - Learns Volt Tackle and Psybeam by level up
    - Learns Rising Voltage by TM (it gets this move in Champions)

- Sandshrew/Sandslash:
    - Learn Earth Power and Drill Run by level up

- Alolan Sandshrew/Alolan Sandslash (postgame):
    - Learn Ice Shard, Avalanche, and Ice Punch by level up

- Nidoran F:
    - Learns Poison Tail, Venoshock, and Poison Jab by level up

- Nidorina:
    - Egg Groups: None->Monster/Field (can now breed)
    - Learns Poison Tail, Venoshock, and Poison Jab by level up

- Nidoqueen:
    - SpA: 75->85
    - Egg Groups: None->Monster/Field (can now breed)
    - Learns Poison Tail, Venoshock, Poison Jab, Drill Run, and Earthquake by level up

- Nidoran M:
    - Def: 40->42
    - Learns Poison Tail, Venoshock, and Poison Fang by level up

- Nidorino:
    - Learns Poison Tail, Venoshock, and Poison Fang by level up

- Nidoking:
    - SpD: 75->85
    - Learns Poison Tail, Venoshock, Poison Fang, Drill Run, and Earthquake by level up

- Cleffa:
    - Atk: 25->30
    - Def: 28->30
    - Evolution: friendship->12
    - Learns Fairy Wind by level up

- Clefairy:
    - Def: 48->50
    - Learns Fairy Wind and Alluring Voice by level up

- Clefable:
    - Def: 73->75
    - Learns Fairy Wind, Alluring Voice, and Air Slash by level up

- Vulpix/Ninetales:
    - Learn Mystical Fire by level up

- Alolan Vulpix (postgame):
    - Learns Fairy Wind by level up

- Alolan Ninetales (postgame):
    - Learns Fairy Wind, Disarming Voice, and Alluring Voice by level up

- Igglybuff:
    - HP: 90->95
    - Def: 15->20
    - SpA: 40->45
    - Evolution: friendship->12
    - Learns Fairy Wind by level up

- Jigglypuff:
    - Def: 20->35
    - SpA: 35->60
    - SpD: 25->35
    - Spe: 20->35
    - Learns Fairy Wind and Alluring Voice by level up

- Wigglytuff:
    - Def: 45->60
    - SpA: 85->95
    - SpD: 50->60
    - Spe: 45->60
    - Learns Fairy Wind and Alluring Voice by level up

- Zubat:
    - Learns Gust by level up

- Golbat:
    - Evolution: friendship->33
    - Learns Gust by level up

- Crobat:
    - Learns Gust and Poison Jab by level up

- Oddish/Gloom:
    - Learn Energy Ball by level up

- Vileplume:
    - Learns Energy Ball and Sludge Bomb by level up

- Bellossom:
    - Learns Energy Ball by level up

- Meowth (postgame):
    - Atk: 45->55
    - Learns Cut and Covet by level up

- Alolan Meowth (postgame):
    - Def: 35->40
    - SpA: 50->55
    - Evolution: friendship->28
    - Learns Pursuit, Snarl, and Thief by level up
    - Learns Cut by TM

- Galarian Meowth (postgame):
    - Atk: 65->75
    - Learns Bullet Punch by level up
    - Learns Cut by TM

- Persian (postgame):
    - HP: 65->70
    - Atk: 70->75
    - Learns Cut and Covet by level up

- Alolan Persian (postgame):
    - HP: 65->70
    - Def: 60->65
    - Learns Pursuit, Snarl, and Thief by level up
    - Learns Cut by TM

- Perrserker (postgame):
    - Atk: 110->115
    - Spe: 50->55
    - Learns Bullet Punch by level up
    - Learns Cut by TM

- Psyduck:
    - Type: Water->Water/Psychic
    - Learns Psybeam, Extrasensory, and Psychic by level up

- Golduck:
    - Type: Water->Water/Psychic
    - Learns Power Gem upon evolving
    - Learns Psybeam, Extrasensory, and Psychic by level up

- Mankey:
    - Learns Rock Smash, Drain Punch, Brick Break, and Temper Flare by level up

- Primeape:
    - Evolution: Using Rage Fist 20 times->Knowing Rage Fist
    - Learns Rock Smash, Drain Punch, Brick Break, and Temper Flare by level up

- Annihilape:
    - Spe: 90->95
    - Learns Rage, Covet, Karate Chop, Pursuit, Punishment, Rock Smash, Brick Break, Drain Punch, and Temper Flare by level up

- Growlithe/Arcanine (postgame):
    - Learn Temper Flare by level up

- Hisuian Growlithe (postgame):
    - Learns Rock Throw and Temper Flare by level up

- Hisuian Arcanine (postgame):
    - Learns Temper Flare and Head Smash by level up

- Poliwag (postgame):
    - SpA: 40->50
    - Learns Surf by level up

- Poliwhirl (postgame):
    - SpA: 50->65
    - Learns Surf by level up

- Poliwrath (postgame):
    - Atk: 95->100
    - Learns Surf, Liquidation, Drain Punch, and Sky Uppercut by level up

- Politoed (postgame):
    - Def: 75->80
    - SpA: 90->100
    - Learns Surf by level up

- Abra:
    - Catch rate: 200->255

- Kadabra/Alakazam:
    - Held item: Twisted Spoon: 5%->100%

- Machop/Machoke/Machamp:
    - Learn Drain Punch by TM

- Starter Machop:
    - SpD: 35->40
    - Spe: 35->45
    - Evolution: 28->16
    - Gender ratio: 75/25->100/0
    - Learns Tackle at level 1
    - Learns Low Kick and Focus Energy at level 6
    - Learns Drain Punch and Brick Break by level up

- Starter Machoke:
    - SpD: 60->65
    - Spe: 45->55
    - Evolution: Linking Cord->36
    - Gender ratio: 75/25->100/0
    - Learns Tackle, Drain Punch, and Brick Break by level up

- Starter Machamp:
    - Def: 80->90
    - Spe: 55->75
    - Gender ratio: 75/25->100/0
    - Learns Tackle, Drain Punch, and Brick Break by level up

- Mega Machamp:
    - HP: 90
    - Atk: 170
    - Def: 110
    - SpA: 65
    - SpD: 105
    - Spe: 95
    - Ability: Scrappy

- Tentacool/Tentacruel:
    - Learn Venoshock by level up

- Geodude/Graveler:
    - Learn Rock Slide by level up

- Alolan Geodude/Alolan Graveler (postgame):
    - Learn Rock Slide and Supercell Slam by level up

- Golem:
    - Def: 130->145
    - Spe: 45->50
    - Learns Rock Slide by level up

- Alolan Golem (postgame):
    - Def: 130->145
    - Spe: 45->50
    - Learns Rock Slide, Zing Zap, and Supercell Slam by level up

- Slowpoke (postgame):
    - Atk: 65->40
    - SpA: 40->65
    - Learns Psybeam by level up

- Galarian Slowpoke (postgame):
    - Atk: 65->40
    - SpA: 40->65
    - Learns Psybeam by level up

- Slowbro/Slowking (postgame):
    - Learn Psybeam by level up

- Galarian Slowbro/Galarian Slowking (postgame):
    - Learn Sludge, Psybeam, and Sludge Bomb by level up
    - Learn Poison Tail by TM

- Magnemite/Magneton/Magnezone:
    - Held item: Magnet: 0%->50%
    - Learn Shock Wave and Thunderbolt by level up

- Farfetch'd:
    - HP: 52->55
    - SpA: 58->60
    - SpD: 62->65
    - Spe: 60->70
    - Catch rate: 45->90
    - Held item: Leek: 5%->100%
    - Learns Scratch, Dual Wingbeat, and Body Slam by level up
    - Learns Poison Jab at level 55 instead of level 1

- Galarian Farfetch'd:
    - HP: 52->55
    - SpA: 58->60
    - SpD: 62->65
    - Spe: 55->65
    - Catch rate: 45->90
    - Held item: Leek: 5%->100%
    - Learns Revenge and Low Sweep by level up

- Sirfetch'd:
    - HP: 62->65
    - SpA: 68->70
    - SpD: 82->85
    - Spe: 65->75
    - Held item: Leek: 5%->100%
    - Learns Revenge, Low Sweep, Drain Punch, and Sacred Sword by level up

- Doduo/Dodrio:
    - Learn Body Slam by level up

- Seel (postgame):
    - SpA: 45->70
    - Learns Water Gun, Chilling Water, and Surf by level up

- Dewgong (postgame):
    - SpA: 70->95
    - Learns Water Gun, Chilling Water, and Surf by level up

- Grimer/Muk:
    - Learn Poison Jab by level up

- Alolan Grimer/Alolan Muk (postgame):
    - Learn Poison Jab by level up

- Shellder (postgame):
    - Learns Aqua Jet, Chilling Water, Bubble Beam, Waterfall, and Liquidation by level up

- Cloyster (postgame):
    - Held items:
        - Pearl: 50%->0%
        - Big Pearl: 5%->50%
        - Pearl String: 0%->5%
    - Learns Aqua Jet, Chilling Water, Bubble Beam, Waterfall, and Liquidation by level up
    - Learns Body Press by TM

- Gastly/Haunter/Gengar (Battle Frontier in Emerald):
    - Type: Ghost/Poison->Ghost
    - Learn Astonish and Shadow Sneak by level up

- Krabby/Kingler (postgame):
    - Learns Aqua Cutter and Liquidation by level up

- Voltorb:
    - Learns Thunderbolt by level up

- Hisuian Voltorb (postgame):
    - Learns Absorb, Mega Drain, Giga Drain, and Thunderbolt by level up

- Electrode:
    - SpA: 80->90
    - Learns Absorb, Mega Drain, Giga Drain, and Thunderbolt by level up

- Hisuian Electrode (postgame):
    - SpA: 80->90
    - Learns Thunderbolt by level up

- Lickitung (postgame):
    - Atk: 55->65
    - Spe: 30->50
    - Catch rate: 45->90
    - Learns Pound and Body Slam by level up
    - Learns Sludge Bomb by TM
    - Ability: Oblivious->Thick Fat

- Lickilicky (postgame):
    - Atk: 85->100
    - Learns Pound and Body Slam by level up
    - Learns Sludge Bomb by TM
    - Ability: Oblivious->Thick Fat

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
    - Learns Rock Wrecker upon evolving
    - Learns Rock Slide by level up

- Happiny (postgame):
    - Base exp: 110->250
    - Held item: Lucky Egg: 0%->5%
    - Learns Swift by level up

- Chansey (postgame):
    - Held item: Lucky Punch: 50%->100%
    - Evolution: friendship->36
    - Learns Swift, Hyper Voice, and Revival Blessing by level up

- Blissey (postgame):
    - Held item: Lucky Egg: 50%->100%
    - Learns Swift, Hyper Voice, and Revival Blessing by level up
    - Lucky Punch works on Blissey now

- Tangela (postgame):
    - Catch rate: 45->90
    - Learns Energy Ball by level up

- Tangrowth (postgame):
    - Atk: 100->90
    - Spe: 50->60
    - Learns Energy Ball by level up
    - Learns Body Press by TM

- Horsea/Seadra/Kingdra:
    - Learn Surf by level up

- Goldeen:
    - Learns Aqua Jet by level up

- Seaking:
    - HP: 80->90
    - Atk: 92->95
    - Spe: 68->70
    - Learns Aqua Jet by level up
    - Learns Liquidation by TM

- Staryu/Starmie:
    - Learns Water Pulse by level up

- Elekid:
    - Atk: 63->65
    - Def: 37->40
    - SpA: 65->70
    - Catch rate: 45->150
    - Learns Spark and Electric Terrain by level up

- Electabuzz:
    - Atk: 83->85
    - Def: 57->60
    - SpA: 95->100
    - Learns Spark and Electric Terrain by level up
    - Learns Dazzling Gleam and Flash Cannon by TM

- Electivire:
    - Atk: 123->125
    - Def: 67->70
    - SpA: 95->100
    - Learns Spark and Electric Terrain by level up
    - Learns Dazzling Gleam, Drain Punch, and Flash Cannon by TM
    - Learns Zing Zap by tutor

- Magby (postgame):
    - Def: 37->40
    - Spe: 83->85
    - Catch rate: 45->150
    - Learns Incinerate by level up

- Magmar (postgame):
    - Def: 57->60
    - Spe: 93->95
    - Learns Incinerate by level up

- Magmortar (postgame):
    - Ability: Flame Body->Flash Fire
    - Atk: 95->100
    - Def: 67->70
    - Spe: 83->85
    - Learns Incinerate by level up

- Pinsir:
    - Catch rate: 45->90
    - Learns Fury Cutter by level up
    - Learns Aerial Ace and Lunge by TM (it gets these moves in Champions)

- Magikarp:
    - Atk: 10->15
    - SpA: 15->10
    - Learns Bounce and Hydro Pump by level up
    - Learns Dragon Breath by move tutor

- Gyarados:
    - Type: Water/Flying->Water
    - Learns Bounce by level up
    - Learns Dragon Breath by move tutor

- Ditto (postgame):
    - All stats: 48->50

- Porygon:
    - Catch rate: 45->90
    - Learns Swift and Hyper Voice by level up

- Porygon2:
    - Learns Swift and Hyper Voice by level up
    - Learns Double-Edge by level up (Note: Porygon and Porygon-Z already learn it)
    - Learns Lock-On at level 55 instead of level 50 for consistency with Porygon and Porygon-Z

- Porygon-Z:
    - Learns Swift and Hyper Voice by level up

- Omanyte (postgame):
    - Catch rate: 45->90
    - Learns Rock Throw, Rock Tomb, Water Pulse, Rock Slide, and Power Gem by level up

- Omastar (postgame):
    - Learns Rock Throw, Rock Tomb, Water Pulse, Rock Slide, and Power Gem by level up

- Kabuto (postgame):
    - Catch rate: 45->90
    - Learns Rock Throw, Rock Tomb, Aqua Cutter, Rock Slide, and Razor Shell by level up

- Kabutops (postgame):
    - Learns Rock Throw, Rock Tomb, Aqua Cutter, Rock Slide, and Razor Shell by level up

- Aerodactyl (postgame):
    - Catch rate: 45->90
    - Learns Dual Wingbeat, Double-Edge, Head Smash, and Brave Bird by level up

- Munchlax (postgame):
    - Evolution: friendship->20
    - Learns Gastro Acid and Power-Up Punch by Egg Move

- Snorlax (postgame):
    - Hidden Ability: Gluttony->Comatose
    - Learns Slack Off upon evolving

- Articuno (not in Emerald):
    - Learns Aurora Beam, Air Cutter, and Air Slash by level up

- Galarian Articuno (not in Emerald):
    - Learns Psybeam, Air Cutter, and Air Slash by level up

- Zapdos (not in Emerald):
    - Learns Gust, Shock Wave, Air Cutter, Air Slash, Thunderbolt, and Hurricane by level up
    - Theoretically learns Bolt Beak by Egg Move, although it can't breed

- Galarian Zapdos (not in Emerald):
    - Learns Double Kick and Acrobatics by level up

- Moltres (not in Emerald):
    - Learns by Flame Burst and Air Cutter level up

- Galarian Moltres (not in Emerald):
    - Learns Snarl, Air Cutter, and Dark Pulse by level up

- Mew (postgame):
    - Learns Confusion by level up

- Hoothoot/Noctowl:
    - Learn Gust, Air Cutter, Swift, and Hyper Voice by level up

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
    - Learns Pounce, Poison Fang, Bug Bite, and Leech Life by level up

- Ariados (postgame):
    - Spe: 40->60
    - Learns Pounce, Poison Fang, Bug Bite, and Leech Life by level up

- Chinchou/Lanturn:
    - Learn Thunder Shock, Shock Wave, Surf, Thunderbolt, and Thunder by level up
    - Learn Flash Cannon by TM

- Togepi:
    - Ability: Hustle->Early Bird
    - Evolution: friendship->16
    - Learns Fairy Wind, Draining Kiss, and Disarming Voice by level up

- Togetic:
    - Ability: Hustle->Early Bird
    - Learns Gust by evolving instead of Fairy Wind and learns Fairy Wind by level up instead
    - Learns Draining Kiss, Disarming Voice, and Air Cutter by level up

- Togekiss:
    - Ability: Hustle->Early Bird
    - Learns Fairy Wind, Gust, Draining Kiss, Disarming Voice, and Air Cutter by level up

- Natu/Xatu:
    - Learn Confusion, Gust, Psybeam, and Air Cutter by level up

- Mareep/Flaaffy (postgame):
    - Learns Shock Wave and Thunderbolt by level up
    - Learn Tail Glow by Egg Move

- Ampharos (postgame):
    - Spe: 55->65
    - Learns Tail Glow, Shock Wave, and Thunderbolt by level up

- Mega Ampharos (postgame):
    - Atk: 95->85
    - Spe: 45->65

- Azurill:
    - Evolution: friendship->10
    - Type: Normal/Fairy->Water/Fairy
    - Gender ratio: 25/75->50/50
    - Catch rate: 150->255
    - Learns Fairy Wind and Aqua Jet by level up
    - Learns Aqua Tail by TM

- Marill:
    - HP: 70->75
    - Atk: 20->40
    - Def: 50->60
    - SpA: 20->40
    - SpD: 50->60
    - Learns Fairy Wind and Aqua Jet by level up

- Azumarill:
    - Atk: 50->60
    - Spe: 50->60
    - Learns Fairy Wind and Aqua Jet by level up

- Bonsly/Sudowoodo (postgame):
    - Learn Rock Blast by level up

- Hoppip/Skiploom/Jumpluff:
    - Learn Gust, Magical Leaf, Air Cutter, Seed Bomb, Energy Ball, Air Slash, and Pollen Puff by level up

- Aipom (postgame):
    - Catch rate: 45->90
    - Learns Double Slap, Headbutt, and Body Slam by level up

- Ambipom (postgame):
    - Learns Double Slap, Headbutt, and Body Slam by level up

- Sunkern (postgame):
    - SpA: 30->50
    - Learns Magical Leaf and Energy Ball by level up

- Sunflora (postgame):
    - Spe: 30->55
    - Learns Morning Sun upon evolving
    - Learns Magical Leaf and Energy Ball by level up

- Wooper (postgame):
    - Learn Water Pulse, Waterfall, and Earth Power by level up

- Quagsire (postgame):
    - HP: 95->105
    - Atk: 85->95
    - Learn Water Pulse, Waterfall, and Earth Power by level up

- Paldean Wooper (postgame):
    - Learns Poison Sting and Earth Power by level up

- Clodsire (postgame):
    - Atk: 75->95
    - Learns Earth Power by level up

- Murkrow:
    - Atk: 85->95
    - Catch rate: 30->90
    - Learns Pluck, Dual Wingbeat, and Night Slash by level up

- Honchkrow:
    - Spe: 71->81
    - Learns Pluck and Dual Wingbeat by level up

- Unown:
    - HP: 48->50
    - Atk: 72->75
    - Def: 48->50
    - SpA: 72->75
    - SpD: 48->50
    - Spe: 48->75

- Wynaut:
    - HP: 95->100

- Wobbuffet:
    - HP: 190->200

- Girafarig:
    - Catch rate: 60->90
    - Learns Swift and Hyper Voice by level up

- Farigiraf:
    - Learn Swift and Hyper Voice by level up

- Pineco (postgame):
    - Learns Lunge by level up

- Forretress (postgame):
    - Learns Metal Claw, Smart Strike, Lunge, and Iron Head by level up

- Gligar (postgame):
    - Catch rate: 60->90
    - Learns Wing Attack, Bulldoze, Aerial Ace, Dual Wingbeat, and Earthquake by level up

- Gliscor (postgame):
    - Learns Wing Attack, Bulldoze, Aerial Ace, Dual Wingbeat, and Earthquake by level up

- Snubbull:
    - Learns Fairy Wind and Spirit Break by level up

- Granbull:
    - Hidden Ability: Rattled->Strong Jaw
    - Learns Fairy Wind and Spirit Break by level up

- Qwilfish (postgame):
    - Catch rate: 45->90
    - Learns Poison Tail and Waterfall by level up

- Hisuian Qwilfish (postgame):
    - Catch rate: 45->90
    - Learns Poison Tail, Night Slash, and Poison Jab by level up

- Overqwil (postgame):
    - Learns Poison Tail, Night Slash, and Poison Jab by level up

- Shuckle (postgame):
    - Def: 230->255
    - SpD: 230->255
    - Learns Rock Tomb by level up

- Heracross:
    - Catch rate: 45->90
    - Learns Fury Cutter, Bug Bite, and Lunge by level up
    - Learns Drain Punch by TM

- Sneasel/Weavile:
    - Learn Powder Snow, Bite, Ice Fang, Ice Punch, and Razor Wind by level up

- Hisuian Sneasel/Sneasler (postgame):
    - Learn Poison Sting, Cross Poison, Double Kick, and Drain Punch by level up

- Teddiursa (postgame):
    - Learns Body Slam by level up

- Ursaring (postgame):
    - Learns Body Slam by level up
    - Evolves into Bloodmoon Ursaluna with a Moon Stone

- Ursaluna (postgame):
    - Spe: 50->55
    - Type: Ground/Normal->Normal/Ground
    - Learns Bulldoze, Stomping Tantrum, Body Slam, and Earthquake by level up

- Bloodmoon Ursaluna (postgame):
    - Type: Ground/Normal->Normal/Ground
    - Learns Mud-Slap, Swift, Mud Shot, Mud Bomb, and Earth Power by level up

- Slugma:
    - Evolution: 38->32
    - Learns Heat Wave by level up

- Magcargo:
    - HP: 60->70
    - SpA: 90->100
    - Learns Power Gem upon evolving
    - Learns Heat Wave by level up
    - Learns Body Press by TM
    - Learns High Horsepower by TM (since Slugma can)

- Swinub/Piloswine (postgame):
    - Learn Avalanche, Bulldoze, Stomping Tantrum, and High Horsepower by level up

- Mamoswine (postgame):
    - Learns Icicle Crash upon evolving
    - Learns Avalanche, Bulldoze, Stomping Tantrum, and High Horsepower by level up

- Corsola:
    - SpA: 65->80
    - Learns Water Pulse and Surf by level up

- Galarian Corsola:
    - SpA: 65->80
    - Learns Shadow Ball by level up

- Cursola:
    - Learns Shadow Ball by level up

- Remoraid (postgame):
    - Atk: 65->60
    - SpA: 65->70
    - Learns Surf and Snipe Shot by level up

- Octillery (postgame):
    - Atk: 105->100
    - Def: 75->85
    - SpA: 105->110
    - SpD: 75->85
    - Learns Octolock, Surf, and Snipe Shot by level up

- Delibird:
    - HP: 45->75
    - Atk: 55->75
    - Spe: 75->95
    - Catch rate: 45->90
    - Hidden Ability: Insomnia->Technician
    - Learns Ice Punch by level up

- Mantyke (postgame):
    - Catch rate: 25->180
    - Learns Gust, Surf, and Hurricane by level up

- Mantine (postgame):
    - HP: 85->90
    - SpA: 80->90
    - Catch rate: 25->90
    - Learns Gust, Surf, and Hurricane by level up

- Skarmory:
    - HP: 65->90
    - Atk: 80->90
    - Catch rate: 25->90
    - Learns Dual Wingbeat and Iron Head by level up

- Mega Skarmory:
    - HP: 65->90
    - Def: 110->120

- Houndour/Houndoom:
    - Learn Snarl, Burning Jealousy, and Dark Pulse by level up

- Phanpy/Donphan:
    - Learn Mud-Slap, Mud Shot, and High Horsepower by level up

- Stantler (postgame):
    - Catch rate: 45->90
    - Evolves into Wyrdeer by simply knowing Psyshield Bash
    - Learns Psyshield Bash, Headbutt, and Body Slam by level up

- Wyrdeer (postgame):
    - SpA: 105->95
    - Spe: 65->75
    - Learns Me First, Headbutt, Body Slam, Jump Kick, and Captivate by level up

- Smeargle (postgame):
    - Atk: 20->50
    - Def: 35->50
    - SpA: 20->50
    - SpD: 45->50
    - Catch rate: 45->90
    - Ability: Own Tempo->Trace

- Miltank (postgame):
    - Catch rate: 45->90
    - Learns Mega Kick by level up


- Lugia (postgame):
    - Learns Wing Attack, Dual Wingbeat, Brave Bird, Psychic, and Psychic Fangs by level up

- Ho-Oh (postgame):
    - Learns Peck, Wing Attack, Flame Charge, and Dual Wingbeat by level up

- Treecko (postgame):
    - Atk: 45->65
    - SpA: 65->45
    - Learns Seed Bomb by level up

- Grovyle (postgame):
    - Atk: 65->85
    - SpA: 85->65
    - Hidden Ability: Unburden->Sharpness
    - Learns Razor Leaf upon evolving
    - Learns Seed Bomb by level up

- Sceptile (postgame):
    - Atk: 85->105
    - SpA: 105->85
    - Hidden Ability: Unburden->Sharpness
    - Learns Dual Chop upon evolving
    - Learns Razor Leaf, Seed Bomb, and Dragon Claw by level up

- Mega Sceptile (postgame):
    - Atk: 110->145
    - SpA: 145->110
    - Ability: Lightning Rod->Sharpness

- Torchic (postgame):
    - Atk: 60->70
    - SpA: 70->60

- Combusken (postgame):
    - Learns Flame Wheel upon evolving
    - Learns Low Sweep and Fire Punch by level up

- Blaziken (postgame):
    - Learns Flame Wheel, Low Sweep, Drain Punch, Jump Kick, and High Jump Kick by level up

- Mudkip (postgame):
    - Hidden Ability: Damp->Swift Swim
    - Learns Waterfall and Liquidation by level up

- Marshtomp (postgame):
    - Hidden Ability: Damp->Swift Swim
    - Learns Aqua Jet upon evolving
    - Learns Waterfall and Liquidation by level up
    - Learns Surf and Earthquake later to avoid breaking the game

- Swampert (postgame):
    - Hidden Ability: Damp->Swift Swim
    - Learns Aqua Tail upon evolving
    - Learns Aqua Jet, Waterfall, and Liquidation by level up
    - Learns Surf and Earthquake later to avoid breaking the game

- Poochyena:
    - Speed: 35->40
    - Hidden Ability: Rattled->Strong Jaw
    - Learns Lash Out by level up

- Mightyena:
    - Atk: 90->100
    - Speed: 70->80
    - Hidden Ability: Moxie->Strong Jaw
    - Learns Lash Out by level up

- Zigzagoon/Linoone:
    - Learn Body Slam by level up

- Galarian Zigzagoon/Galarian Linoone (postgame):
    - Abilities: Pickup/Gluttony/Quick Feet->Reckless/Guts/Defiant
    - Learn Thief and Body Slam by level up

- Obstagoon (postgame):
    - Learns Thief, Body Slam, Throat Chop, and Darkest Lariat by level up

- Wurmple:
    - Learns Bug Bite at level 7 instead of 15
    - Evolution is now based on time of day

- Beautifly:
    - Learns Signal Beam and Air Slash by level up

- Dustox:
    - Sp. Def: 90->100 (to match Beautifly's stat increase)
    - Learns Acid by evolving
    - Learns Signal Beam and Sludge Bomb by level up

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

- Taillow/Swellow:
    - Learn Facade, Dual Wingbeat, and Acrobatics by level up

- Wingull/Pelipper:
    - Learn Gust and Brine by level up

- Ralts/Kirlia/Gardevoir:
    - Due to Disarming Voice's boost in power, Fairy Wind is learned in its place at level 1 instead. Disarming Voice is now learned at level 17.

- Gallade:
    - Learns Fairy Wind by level up

- Mega Gallade:
    - Ability: Inner Focus->Sharpness

- Surskit:
    - Def: 32->35
    - SpD: 52->55
    - Spe: 65->70
    - Learns Struggle Bug and Signal Beam by level up

- Masquerain:
    - Atk: 60->70
    - Def: 62->65
    - SpD: 82->85
    - Spe: 80->85
    - Learns Struggle Bug and Signal Beam by level up
    - Learns Steel Wing by TM

- Shroomish:
    - Atk: 40->50
    - Learns Bullet Seed by level up
    - Learns Fairy Wind by Egg Move

- Breloom:
    - Held items:
        - Tiny Mushroom: 50%->0%
        - Big Mushroom: 5%->50%
        - Balm Mushroom: 0%->5%
    - Learns Bullet Seed, Arm Thrust, and Drain Punch by level up
    - Learns Fairy Wind by Egg Move

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
    - Learns Steel Wing and Attract by TM
    - Learns Hone Claws by Egg Move

- Shedinja:
    - Learns Struggle Bug, Mud Shot, Fury Cutter, Bug Bite, Swords Dance, and Leech Life by level up
    - Learns Hone Claws by Egg Move

- Whismur:
    - Received Run Away as a second ability
    - Learn Disarming Voice by level up

- Loudred:
    - Received Amplify (Punk Rock) as a second ability
    - Learns Disarming Voice and Dizzy Punch by level up

- Exploud:
    - Received Amplify (Punk Rock) as a second ability
    - Learns Hyper Voice upon evolving
    - Learn Disarming Voice and Dizzy Punch by level up

- Makuhita:
    - Catch rate: 180->220
    - Learns Drain Punch by level up

- Hariyama:
    - Learns Drain Punch by level up

- Nosepass:
    - SpA: 45->55
    - Learns Rock Tomb by level up

- Probopass:
    - Def: 145->150
    - SpD: 150->145
    - Learns Rock Tomb, Mirror Shot, and Flash Cannon by level up

- Skitty:
    - Def: 45->35
    - SpA: 35->55
    - SpD: 35->45
    - Spe: 50->55
    - Learns Quick Attack, Swift, Headbutt, and Hyper Voice by level up
    - Learns Fairy Wind by Egg Move

- Delcatty:
    - HP: 70->75
    - Atk: 65->55
    - Def: 65->55
    - SpA: 55->95
    - SpD: 55->65
    - Spe: 90->105
    - Learns Quick Attack, Swift, Headbutt, and Hyper Voice by level up
    - Learns Fairy Wind by Egg Move

- Sableye:
    - Loses Stall as an ability since it's worthless
    - Atk: 75->65
    - SpA: 65->75
    - Catch rate: 45->90
    - Learns Snarl, Hex, and Dark Pulse by level up

- Mega Sableye:
    - Atk: 85->75
    - SpA: 85->95

- Mawile:
    - Catch rate: 45->90
    - Held item: Occa Berry: 0%->50%
    - Learns Metal Claw, Smart Strike, and Spirit Break by level up

- Aron/Lairon/Aggron:
    - Learn Rock Throw by level up

- Meditite/Medicham:
    - Learn Rock Smash and Drain Punch by level up

- Electrike:
    - Learns Thunder Shock, Snarl, and Thunderbolt by level up

- Manectric:
    - Learns Ice Fang, Thunder Shock, Snarl, and Thunderbolt by level up

- Plusle:
    - SpD: 75->85
    - Learns Thunder Shock and Shock Wave by level up
    - Learns Fairy Wind by Egg Move

- Minun:
    - SpA: 75->85
    - Learns Thunder Shock and Shock Wave by level up
    - Learns Bestow and Trump Card by level up to match Plusle learning Switcheroo and Last Resort
    - Learns Fairy Wind by Egg Move

- Volbeat:
    - Atk: 73->75
    - SpA: 47->75
    - Ability: Illuminate->Tinted Lens

- Illumise:
    - Atk: 47->75
    - SpA: 73->75
    - Abilities: Oblivious/Tinted Lens->Illuminate/Oblivious

- Budew:
    - Evolution: friendship->13
    - Gender ratio: 50/50->25/75
    - Learns Fairy Wind by Egg Move

- Roselia/Roserade:
    - Gender ratio: 50/50->25/75
    - Held items:
        - Poison Barb: 5%->50%
        - Absorb Bulb: 0%->5%
    - Learn Venoshock, Energy Ball, and Sludge Bomb by level up
    - Learns Fairy Wind by Egg Move

- Gulpin:
    - Atk: 43->45
    - Def: 53->55
    - SpA: 43->45
    - SpD: 53->55
    - Learns Acid, Poison Jab, and Sludge Wave by level up

- Swalot:
    - Atk: 73->85
    - Def: 83->85
    - SpA: 73->85
    - SpD: 83->85
    - Learns Acid, Poison Jab, and Sludge Wave by level up

- Carvanha/Sharpedo:
    - Learn Waterfall by level up

- Wailmer/Wailord:
    - Learn Bubble, Waterfall, Liquidation, and Surf by level up

- Numel/Camerupt:
    - Held item: Rawst Berry: 0%->100%
    - Learn Mud-Slap, Mud Shot, and Scorching Sands by level up

- Torkoal:
    - SpA: 85->100
    - Learns Incinerate and Flame Burst by level up

- Spoink/Grumpig:
    - Learn Dazzling Gleam by level up

- Spinda:
    - All stats: 60->80
    - Learns Swift, Rapid Spin, and Body Slam by level up

- Trapinch:
    - Learns Mud Shot by level up
    - Learns Dragon Breath by move tutor

- Vibrava/Flygon:
    - Learn Mud Shot and Breaking Swipe by level up

- Cacnea:
    - Learns Seed Bomb by level up

- Cacturne:
    - Learns Seed Bomb and Throat Chop by level up

- Swablu:
    - SpA: 40->50
    - Type: Normal/Flying->Flying
    - Received Fluffy as a second Ability
    - Learns Gust, Air Cutter, and Air Slash by level up

- Altaria:
    - Atk: 70->60
    - SpA: 70->90
    - Received Fluffy as a second Ability
    - Learns Gust, Air Cutter, and Air Slash by level up

- Mega Altaria:
    - Atk: 110->100
    - SpA: 110->115
    - SpD: 105->120

- Zangoose:
    - HP: 73->75
    - Atk: 115->125
    - Spe: 90->100
    - Abilities: Immunity/Toxic Boost->Poison Heal/Sharpness/Guts
    - Egg Groups: Field->Field/Human-Like
    - Learns Cut and Body Slam by level up

- Seviper:
    - HP: 73->75
    - Spe: 65->85
    - Learns Poison Sting by level up
    - Learns Dragon Breath by move tutor

- Lunatone:
    - Catch rate: 45->90
    - Learns Icy Wind and Peck by level up

- Solrock:
    - Catch rate: 45->90
    - Learns Power Gem and Solar Blade by level up

- Barboach:
    - Atk: 48->55
    - Def: 43->45
    - SpA: 46->50
    - SpD: 41->45
    - Learns Mud Shot, Waterfall, and Dragon Dance by level up

- Whiscash:
    - Atk: 78->90
    - Def: 73->75
    - SpA: 76->80
    - SpD: 71->75
    - Spe: 60->70
    - Learns Mud Shot, Waterfall, and Dragon Dance by level up

- Corphish/Crawdaunt:
    - Learn Aqua Cutter by level up

- Baltoy/Claydol:
    - Learn Mud Shot, Mud Bomb, Zen Headbutt, Drill Run, and Earthquake by level up

- Anorith:
    - Catch rate: 45->90
    - Learns Rock Throw and Rock Slide by level up

- Armaldo:
    - Learns Rock Throw and Rock Slide by level up

- Feebas:
    - Atk: 15->10
    - SpA: 10->15
    - Learns Hydro Pump by level up
    - Learns Aqua Tail by TM

- Milotic:
    - Learns Bubble Beam by level up

- Castform:
    - All stats: 70->80
    - Learns Swift, Surf, Flamethrower, Ice Beam, Thunder, and Solar Beam by level up
    - Learns Overheat, Heat Wave, Icy Wind, and Liquidation by TM
    - Learns Gust, Twister, and Fairy Wind by Egg Move

- Kecleon:
    - Learns Covet and Body Slam by level up

- Banette:
    - Learns Astonish, Shadow Punch, and Shadow Claw by level up

- Duskull/Dusclops:
    - Learn Spite by level up

- Dusknoir:
    - Learns Spite by level up
    - Learns Drain Punch by TM
    - Received Iron Fist as second Ability

- Tropius:
    - HP: 99->100
    - Atk: 68->70
    - Def: 83->85
    - SpA: 72->90
    - SpD: 87->90
    - Spe: 51->55
    - Held item: Nanab Berry: 0%->100%
    - Learns Absorb, Mega Drain, Air Cutter, and Giga Drain by level up
    - Learns Earth Power by TM

- Chingling:
    - Evolution: friendship->19

- Chimecho:
    - Learns Psybeam, Metal Sound, Psychic, and Flash Cannon by level up

- Absol:
    - Hidden Ability: Justified->Sharpness
    - Learns Shadow Sneak, Spite, and Shadow Claw by level up

- Snorunt/Glalie/Froslass:
    - Learn Aurora Beam and Ice Beam by level up
    - Learns Fairy Wind by Egg Move

- Spheal/Sealeo/Walrein:
    - Learn Chilling Water, Bubble Beam, and Ice Beam by level up

- Clamperl:
    - Learns Dive by level up

- Huntail:
    - Holding a Deep Sea Tooth multiplies its Attack by 1.5
    - Atk: 104->114
    - Learns Waterfall by level up
    - Learns Liquidation by TM

- Gorebyss:
    - Holding a Deep Sea Scale multiplies its Defense by 1.5
    - Atk: 84->94
    - Learns Waterfall by level up
    - Learns Leech Life by TM

- Relicanth:
    - Learns Rock Slide by level up

- Luvdisc:
    - HP: 43->50
    - SpA: 40->80
    - Spd: 97->100
    - Held item: Heart Scale: 50%->100%
    - Received Cute Charm as a second ability
    - Evolves into ??? with a Love Sweet
    - Learns Surf by level up

- ???:
    - Type: Water
    - HP: 75
    - Atk: 56
    - Def: 65
    - SpA: 100
    - SpD: 75
    - Spe: 130
    - Abilities: Swift Swim/Cute Charm/Hydration

- Bagon/Shelgon:
    - Received Intimidate as a second ability
    - Learn Dragon Pulse by level up

- Salamence:
    - Received Rock Head as a second ability
    - Learns Dragon Pulse by level up

- Beldum:
    - Learns Metal Claw by level up

- Metang/Metagross:
    - Learn Psybeam and Iron Head by level up

- Regirock:
    - Learns Rest and Endure by level up

- Regice:
    - Learns Rest and Endure by level up

- Registeel:
    - Learns Rest and Endure by level up

- Latios/Latias (postgame):
    - Learn Psybeam by level up
    - Level up learnset slightly restructured to avoid a battle where they only have one attacking move

- Kyogre:
    - Learns Aurora Beam, Surf, and Thunder by level up
    - Learns Origin Pulse at level 63 instead of level 1

- Groudon:
    - Learns Bulldoze and Solar Blade by level up
    - Learns Precipice Blades at level 63 instead of level 1

- Rayquaza:
    - Learns Dragon Claw by level up
    - Swaps Dragon Ascent and Fly levels

- Jirachi (postgame):
    - Learns Mirror Shot, Psybeam, and Flash Cannon by level up

- Deoxys (postgame):
    - Learns Confusion by level up
    - Can use the Meteorite item to change forms

- Piplup (postgame):
    - HP: 53->55
    - SpA: 61->65
    - Learns Surf by level up

- Prinplup (postgame):
    - HP: 64->65
    - Atk: 66->70
    - Def: 68->70
    - SpA: 81->85
    - SpD: 76->80
    - Learns Chilling Water upon evolving
    - Learns Surf by level up

- Empoleon (postgame):
    - HP: 84->85
    - SpA: 111->115
    - Learns Chilling Water, Mirror Shot, Surf, and Flash Cannon by level up

- Starly:
    - Type: Normal/Flying->Flying
    - Learns Dual Wingbeat by level up

- Staravia:
    - Type: Normal/Flying->Flying
    - Learns Dual Wingbeat by level up

- Staraptor:
    - Type: Normal/Flying->Flying
    - Learns Brick Break and Dual Wingbeat by level up

- Mega Staraptor:
    - Type: Fighting/Flying->Flying/Fighting

- Chatot:
    - HP: 76->80
    - SpA: 92->95
    - SpD: 42->45
    - Spe: 91->95
    - Catch rate: 30->90
    - Evolves into ??? with a Linking Cord
    - Learns Gust, Air Cutter, Air Slash, and Boomburst by level up

- ???:
    - Type: Normal/Flying
    - HP: 105
    - Atk: 80
    - Def: 60
    - SpA: 120
    - SpD: 60
    - Spe: 115
    - Abilities: Keen Eye/Own Tempo/Amplify

- Regigigas:
    - Learns Rest, Endure, Headbutt, and Body Slam by level up

- Pidove/Tranquill:
    - Learn Scratch, Peck, Covet, Pluck, and Dual Wingbeat by level up

- Unfezant:
    - Learns Scratch, Peck, Covet, Pluck, and Dual Wingbeat by level up
    - Learns Acrobatics by TM

- Blitzle/Zebstrika (postgame):
    - Learn Thunder Shock, Zing Zap, and Supercell Slam by level up

- Roggenrola:
    - Atk: 75->85
    - SpA: 25->35
    - Learns Rock Throw by level up

- Boldore/Gigalith:
    - Learn Rock Throw by level up

- Woobat:
    - Def: 43->45
    - SpD: 43->45
    - Spe: 72->75
    - Abilities: Unaware/Klutz/Simple->Unaware/Simple/Synchronize
    - Evolution: friendship->24
    - Learns Psybeam and Psychic Noise by level up

- Swoobat:
    - HP: 67->80
    - Atk: 57->60
    - SpA: 77->90
    - Spe: 114->115
    - Abilities: Unaware/Klutz/Simple->Unaware/Simple/Synchronize
    - Learns Psybeam and Psychic Noise by level up

- Drilbur (postgame):
    - Learns Mud Shot, Bulldoze, and Stomping Tantrum by level up

- Excadrill (postgame):
    - Learns Smart Strike upon evolving
    - Learns Mud Shot, Bulldoze, and Stomping Tantrum by level up

- Tympole (postgame):
    - Learns Surf by level up

- Palpitoad (postgame):
    - Learns Mud Bomb upon evolving
    - Learns Bulldoze, Earth Power, and Surf by level up

- Seismitoad (postgame):
    - Learns Mud Bomb, Waterfall, Bulldoze, Stomping Tantrum, Earth Power, Liquidation, Earthquake, and Surf by level up

- Sandile (postgame):
    - Atk: 72->75
    - Evolution: 29->25
    - Learns Bulldoze, Stomping Tantrum, and High Horsepower by level up

- Krokorok (postgame):
    - Atk: 82->85
    - Spe: 74->75
    - Evolution: 40->38
    - Learns Bulldoze, Stomping Tantrum, and High Horsepower by level up

- Krookodile (postgame):
    - Atk: 117->120
    - Spe: 92->95
    - Learns Bulldoze, Stomping Tantrum, and High Horsepower by level up

- Dwebble/Crustle:
    - Learn Rock Throw and Rock Tomb by level up

- Sigilyph:
    - Catch rate: 45->90
    - Learns Psyshock by level up

- Archen:
    - Hidden Ability: None->Early Bird
    - Catch rate: 45->90
    - Learns Dual Wingbeat by level up

- Archeops:
    - Hidden Ability: None->Early Bird
    - Learns Dual Wingbeat by level up

- Ducklett:
    - Evolution: 35->33
    - Learns Surf and Dual Wingbeat by level up

- Swanna:
    - SpA: 87->90
    - Spe: 98->100
    - Learns Surf and Dual Wingbeat by level up

- Vanillite (postgame):
    - Evolution: 35->30
    - Held item: Casteliacone: 0%->50%
    - Learns Powder Snow, Aurora Beam, and Freeze-Dry by level up

- Vanillish (postgame):
    - Evolution: 47->42
    - Held item: Casteliacone: 0%->50%
    - Learns Powder Snow, Aurora Beam, and Freeze-Dry by level up

- Vanilluxe (postgame):
    - Learns Powder Snow, Aurora Beam, and Freeze-Dry by level up

- Foongus (postgame):
    - Evolution: 39->36
    - Learns Venoshock by level up

- Amoonguss (postgame):
    - Held items:
        - Tiny Mushroom: 50%->0%
        - Big Mushroom: 5%->50%
        - Balm Mushroom: 0%->5%
    - Learns Venoshock by level up

- Frillish (postgame):
    - Evolution: 40->35
    - Learns Surf by level up

- Jellicent (postgame):
    - HP: 100->105
    - SpA: 85->90
    - Learns Surf by level up

- Alomomola:
    - Held item: Heart Scale: 0%->100%
    - Learns Heart Stamp, Flip Turn, Waterfall, and Liquidation by level up

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

- Tynamo (postgame):
    - Evolution: 39->32

- Eelektrik (postgame):
    - Learns Thunder Fang, Zing Zap, and Supercell Slam by level up

- Eelektross (postgame):
    - Learns Thunder Fang, Zing Zap, Thunder Punch, and Supercell Slam by level up

- Litwick:
    - Evolution: 41->36
    - Learns Incinerate, Burning Jealousy, Mystical Fire, Lava Plume, and Flamethrower by level up

- Lampent/Chandelure:
    - Learn Incinerate, Burning Jealousy, Mystical Fire, Lava Plume, and Flamethrower by level up

- Axew:
    - Evolution: 38->35
    - Learns Dragon Breath by move tutor

- Fraxure:
    - Evolution: 48->45
    - Learns Dragon Breath by move tutor

- Haxorus:
    - Learns Dragon Breath by move tutor

- Cubchoo:
    - Evolution: 37->35
    - Learns Ice Fang and Ice Punch by level up

- Beartic:
    - Learns Ice Shard, Ice Fang, and Ice Punch by level up

- Stunfisk (postgame):
    - HP: 109->110
    - Atk: 66->85
    - Def: 84->85
    - SpA: 81->85
    - SpD: 99->100
    - Spe: 32->35

- Galarian Stunfisk (postgame):
    - HP: 109->110
    - Atk: 81->85
    - Def: 99->100
    - SpA: 66->85
    - SpD: 84->85
    - Spe: 32->35
    - Learns Terrain Pulse by level up

- Druddigon:
    - Hidden Ability: Mold Breaker->Rock Head
    - Catch rate: 45->90
    - Learns Take Down, Double-Edge, and Head Smash by level up
    - Learns Dragon Breath by move tutor

- Golett:
    - Evolution: 43->35
    - Learns Bulldoze by level up

- Golurk:
    - Learns Bulldoze by level up

- Pawniard:
    - Hidden Ability: Pressure->Sharpness
    - Evolution: 52->35
    - Learns Payback and Smart Strike by level up

- Bisharp:
    - Hidden Ability: Pressure->Sharpness
    - Can also evolve with a Dusk Stone
    - Held item: Leader's Crest: 5%->0%
    - Learns Payback and Smart Strike by level up

- Kingambit:
    - Hidden Ability: Pressure->Sharpness
    - Learns Payback and Smart Strike by level up

- Rufflet:
    - Evolution: 54->35
    - Evolves into Hisuian Braviary with a Shiny Stone
    - Learns Scratch, Cut, Dual Wingbeat, and Body Slam by level up

- Braviary:
    - Learns Scratch, Cut, Dual Wingbeat, and Body Slam by level up

- Hisuian Braviary:
    - Learns Air Cutter by evolving
    - Learns Scratch, Cut, Dual Wingbeat, and Body Slam by level up

- Vullaby:
    - Evolution: 54->35
    - Learns Payback, Peck, Night Slash, Dual Wingbeat, and Throat Chop by level up

- Mandibuzz:
    - Learns Payback, Peck, Night Slash, Dual Wingbeat, and Throat Chop by level up

- Heatmor (postgame):
    - Atk: 97->105
    - Def: 66->70
    - SpD: 66->70
    - Learns Ember, Flame Wheel, Fire Punch, and Lava Plume by level up

- Tornadus (not in game):
    - Learns Acrobatics by level up
    - Learns Bleakwind Storm at level 75 instead of level 77 to match the rest of the group

- Fletchling:
    - Spe: 62->65
    - Type: Normal/Flying->Flying
    - Learns Dual Wingbeat by level up

- Fletchinder:
    - Atk: 73->75
    - Spe: 84->85
    - Type: Fire/Flying->Flying/Fire
    - Learns Flame Wheel, Temper Flare, and Dual Wingbeat by level up

- Talonflame:
    - Atk: 81->90
    - Spe: 126->130
    - Type: Fire/Flying->Flying/Fire
    - Learns Flame Wheel, Temper Flare, and Dual Wingbeat by level up
    - Learns Blaze Kick by TM (it gets this move in Champions)

- Spritzee:
    - Gender ratio: 50/50->25/75
    - Learns Dazzling Gleam by level up

- Aromatisse:
    - Spe: 29->47
    - Base experience: 162->168
    - Gender ratio: 50/50->25/75
    - Learns Aromatic Mist by evolving
    - Learns Dazzling Gleam by level up

- Swirlix/Slurpuff:
    - Learn Lick, Disarming Voice, and Dazzling Gleam by level up

- Binacle:
    - Learns Rock Throw, Rock Tomb, Aqua Cutter, Rock Slide, and Liquidation by level up

- Barbaracle:
    - Learns Rock Throw, Rock Tomb, Aqua Cutter, Drain Punch, Rock Slide, Brick Break, and Liquidation by level up
    - Learns Body Press by TM

- Skrelp (postgame):
    - Evolution: 48->37
    - Learns Sludge and Surf by level up
    - Learns Dragon Breath by move tutor

- Dragalge (postgame):
    - Learns Dragon Breath, Sludge, and Surf by level up

- Clauncher/Clawitzer (postgame):
    - Learn Scald and Surf by level up

- Helioptile (postgame):
    - HP: 44->45
    - Atk: 38->40
    - Def: 33->35
    - SpA: 61->65
    - SpD: 43->45
    - Learns Shock Wave and Swift by level up
    - Learns Dragon Breath by move tutor

- Heliolisk (postgame):
    - HP: 62->65
    - Def: 52->55
    - SpA: 109->110
    - SpD: 94->110
    - Spe: 109->110
    - Learns Weather Ball upon evolving
    - Learns Shock Wave, Swift, Hyper Voice, Solar Beam, and Morning Sun by level up
    - Learns Earth Power by TM
    - Learns Dragon Breath by move tutor

- Hawlucha:
    - Learns Rolling Kick, Drain Punch, Sky Uppercut, Dual Wingbeat, and Acrobatics by level up

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

- Yveltal (not in game):
    - Learns Air Cutter by level up

- Rowlet (postgame):
    - HP: 68->70
    - SpA: 50->45
    - Spe: 42->45
    - Evolution: 17->16
    - Learns Dual Wingbeat by level up

- Dartrix (postgame):
    - HP: 78->80
    - SpA: 70->65
    - Spe: 52->55
    - Evolution: 34->36
    - Learns Dual Wingbeat by level up
    - Evolves in Hisuian Decidueye with a Dusk Stone

- Decidueye (postgame):
    - HP: 78->80
    - Atk: 107->110
    - SpA: 100->85
    - Spe: 70->80
    - Learns Dual Wingbeat by level up

- Hisuian Decidueye (postgame):
    - HP: 88->90
    - Atk: 112->115
    - SpA: 95->80
    - Spe: 60->70

- Pikipek/Trumbeak:
    - Type: Normal/Flying->Flying

- Toucannon:
    - Spe: 60->75
    - Type: Normal/Flying->Flying

- Crabrawler:
    - Learns Drain Punch by level up

- Crabominable:
    - HP: 97->100
    - Atk: 132->135
    - Def: 77->80
    - SpA: 62->65
    - SpD: 67->70
    - Spe: 43->50
    - Learns Drain Punch and Icicle Crash by level up

- Mega Crabominable:
    - HP: 97->100
    - Atk: 157->160
    - Def: 122->125
    - SpA: 62->65
    - SpD: 107->110
    - Spe: 33->40

- Oricorio:
    - SpA: 98->100
    - Spe: 93->95
    - Catch rate: 45->90
    - Held item: Nectar: 50%->100%
    - Learns Gust by level up

- Cutiefly/Ribombee:
    - Learn Disarming Voice and Signal Beam by level up

- Wishiwashi (postgame):
    - Learns Water Pulse, Waterfall, and Surf by level up

- Dewpider (postgame):
    - HP: 38->40
    - Def: 52->55
    - SpD: 72->75
    - Spe: 27->30
    - Learns Waterfall by level up

- Araquanid (postgame):
    - HP: 68->70
    - Atk: 70->80
    - Def: 92->95
    - SpD: 132->135
    - Spe: 42->45
    - Learns Waterfall by level up

- Passimian:
    - Catch rate: 45->90
    - Held item: Watmel Berry: 0%-50%
    - Learns Power-Up Punch, Wake Up-Slap, Drain Punch, and Brick Break by level up

- Sandygast/Palossand:
    - Learn Mud-Slap, Mud Shot, Hex, and Scorching Sands by level up

- Komala:
    - Catch rate: 45->90
    - Learns Pound, Snore, and Body Slam by level up

- Bruxish (postgame):
    - Learns Heart Stamp, Aqua Cutter, Psycho Cut, and Zen Headbutt by level up
    - Learns Dazzling Gleam by TM

- Drampa:
    - Type: Normal/Dragon->Dragon/Normal
    - Catch rate: 70->90
    - Learns Swift by level up

- Mega Drampa:
    - Type: Normal/Dragon->Dragon/Normal

- Dhelmise:
    - Catch rate: 25->90
    - Learns Metal Claw and Shadow Claw by level up

- Tapu Koko (not in game):
    - Learns Spirit Break, Thunder Punch, Zing Zap, Play Rough, Supercell Slam, and Rising Voltage by level up
    - Theoretically learns Bolt Beak by Egg Move, although it can't breed

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

- Starter Rookidee:
    - HP: 38->55
    - Atk: 47->60
    - Def: 35->55
    - SpA: 33->40
    - SpD: 35->50
    - Spe: 57->60
    - Evolution: 18->16
    - Gender ratio: 50/50->0/100
    - Learns Scratch at level 1
    - Learns Peck at level 6
    - Learns Feather Dance by level up

- Starter Corvisquire:
    - HP: 68->75
    - Atk: 67->80
    - Def: 55->75
    - SpA: 43->45
    - SpD: 55->65
    - Spe: 77->80
    - Evolution: 38->36
    - Gender ratio: 50/50->0/100
    - Learns Scratch and Feather Dance by level up

- Starter Corviknight:
    - HP: 98->100
    - Atk: 87->100
    - Def: 105->115
    - SpA: 53->55
    - Spe: 67->80
    - Gender ratio: 50/50->0/100
    - Learns Scratch, Feather Dance, and Iron Head by level up

- Mega Corviknight:
    - HP: 100
    - Atk: 120
    - Def: 155
    - SpA: 55
    - SpD: 105
    - Spe: 100
    - Ability: Mirror Armor

- Rolycoly (postgame):
    - Learns Rock Throw, Rock Tomb, Rock Slide, and Power Gem by level up

- Carkol/Coalossal (postgame):
    - Learn Rock Throw, Rock Tomb, Flame Wheel, Rock Slide, Power Gem, Temper Flare, Flame Burst, Lava Plume, and Flamethrower by level up

- Silicobra/Sandaconda:
    - Learns Mud-Slap, Mud Shot, Scorching Sands, Drill Run, High Horsepower, and Earthquake by level up
    - Learn Dragon Breath by move tutor

- Cramorant:
    - HP: 70->75
    - SpA: 85->95
    - Spe: 85->95
    - Catch rate: 45->90
    - Learns Gust, Water Pulse, Air Cutter, Surf, and Air Slash by level up

- Arrokuda (postgame):
    - HP: 41->45
    - Atk: 63->65
    - Spe: 66->70
    - Learns Aqua Cutter and Waterfall by level up
    - Learns Drill Peck by Egg Move

- Barraskewda (postgame):
    - HP: 61->65
    - Atk: 123->125
    - Spe: 136->140
    - Learns Aqua Cutter and Waterfall by level up
    - Learns Drill Peck by Egg Move

- Sizzlipede/Centiskorch:
    - Learn Pounce and Leech Life by level up

- Clobbopus:
    - Received Suction Cups as a second ability

- Grapploct:
    - Atk: 118->125
    - Spe: 42->50
    - Received Suction Cups as a second ability
    - Learns Circle Throw, Storm Throw, and Aqua Jet by level up
    - Learns Strength by TM

- Pincurchin:
    - HP: 48->50
    - Atk: 101->105
    - SpA: 91->95
    - Learns Supercell Slam by level up

- Snom:
    - Evolution: friendship->21

- Frosmoth:
    - SpD: 90->100
    - Spe: 65->75
    - Learns Silver Wind, Signal Beam, and Ice Beam by level up

- Eiscue:
    - Atk: 80->90
    - Learns Avalanche, Ice Punch, and Icicle Crash by level up

- Cufant:
    - Received Sturdy as a second ability

- Copperajah:
    - Held items:
        - Lagging Tail: 5%->50%
        - Relic Copper: 0%->5%
    - Received Sturdy as a second ability

- Dracozolt:
    - Learns Twister, Shock Wave, and Spark by level up

- Arctozolt:
    - Learns Shock Wave, and Spark by level up

- Regieleki:
    - Learn Rest and Endure by level up

- Regidrago:
    - Learns Rest and Endure by level up

- Enamorus:
    - Learns Play Rough by level up
    - Learns Air Slash by TM

- Quaxly (postgame):
    - Learns Waterfall by level up

- Quaxwell (postgame):
    - Learns Waterfall by level up

- Quaquaval (postgame):
    - Learns Drain Punch, Waterfall, and Sky Uppercut by level up

- Fidough:
    - HP: 37->40
    - Learns Fairy Wind by level up

- Dachsbun:
    - HP: 57->60
    - Atk: 80->90
    - Learns Body Press upon evolving
    - Learns Fairy Wind by level up

- Squawkabilly:
    - Type: Normal/Flying->Flying
    - Learns Dual Wingbeat by level up
    - Learns Steel Wing by TM

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
    - Learn Rain Dance, Steel Wing, and Heat Wave by TM
    - Theoretically learn Bolt Beak by Egg Move, although nothing can pass it down

- Flittle:
    - Ability: Anticipation->Opportunist
    - Learns Psychic by level up

- Espathra:
    - SpA: 101->105

- Bombirdier:
    - Atk: 103->105
    - Spe: 82->85
    - Catch rate: 45->90
    - Learns Aerial Ace, Feint Attack, Drill Peck, and Throat Chop by level up
    - Learns Steel Wing by TM

- Cyclizar:
    - Learns Headbutt and Body Slam by level up

- Flamigo:
    - Learns Brick Break, Dual Wingbeat, Jump Kick, and High Jump Kick by level up
    - Learns Steel Wing by TM

- Veluza (postgame):
    - Learns Waterfall, Zen Headbutt, Aqua Tail, and Psychic Fangs by level up

- Dondozo (postgame):
    - Learns Stockpile, Swallow, Spit Up, Waterfall, and Liquidation by level up

- Tatsugiri:
    - Learns Twister, Dragon Breath, and Surf by level up

- Mega Tatsugiri:
    - Ability: Storm Drain until its official one is revealed

- Iron Bundle:
    - Learns Bubble, Icy Wind, Chilling Water, Aurora Beam, Bubble Beam, Water Pulse, and Surf by level up

- Fezandipiti:
    - Learns Poison Sting, Poison Tail, Spirit Break, Poison Jab, and Play Rough by level up
