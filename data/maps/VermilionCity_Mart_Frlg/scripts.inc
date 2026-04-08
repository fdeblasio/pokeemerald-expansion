VermilionCity_Mart_Frlg_MapScripts::
	.byte 0

VermilionCity_Mart_EventScript_CooltrainerF::
	msgbox VermilionCity_Mart_Text_MonsGoodOrBadDependingOnTrainer, MSGBOX_NPC
	end

VermilionCity_Mart_EventScript_BaldingMan::
	msgbox VermilionCity_Mart_Text_TeamRocketAreWickedPeople, MSGBOX_NPC
	end

VermilionCity_Mart_EventScript_Clerk::
	mart_clerk 0

VermilionCity_Mart_Text_TeamRocketAreWickedPeople::
	.string "There are wicked people who will\n"
	.string "use Pokémon for criminal acts.\p"
	.string "Team Rocket traffics in rare\n"
	.string "Pokémon, for example.\p"
	.string "They also abandon Pokémon that\n"
	.string "they consider unpopular or useless.\p"
	.string "That's the sort of horrid people\n"
	.string "they are, Team Rocket.$"

VermilionCity_Mart_Text_MonsGoodOrBadDependingOnTrainer::
	.string "I think Pokémon can be good or\n"
	.string "bad. It depends on the Trainer.$"

