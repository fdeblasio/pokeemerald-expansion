MysteryGiftScript_AlteringCave::
	setvaddress MysteryGiftScript_AlteringCave
	lock
	faceplayer
	vmessage sText_MysteryGiftAlteringCave
	waitmessage
	waitbuttonpress
	release
	end

sText_MysteryGiftAlteringCave:
	.string "Thank you for using the Mystery\n"
	.string "Gift System.\p"
	.string "There appears to be a rumor about\n"
	.string "rare Pokémon sightings.\p"
	.string "The sightings reportedly came from\n"
	.string "the Altering Cave on Route 103.\p"
	.string "Perhaps it would be worthwhile for\n"
	.string "you to investigate this rumor.$"
