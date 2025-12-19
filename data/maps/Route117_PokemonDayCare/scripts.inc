
Route117_PokemonDayCare_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route117_PokemonDayCare_OnTransition
	.byte 0

Route117_PokemonDayCare_OnTransition:
	setflag FLAG_LANDMARK_POKEMON_DAYCARE
	end

Route117_DayCare_Trainer::
	lock
	faceplayer
	msgbox Route117_DayCare_Trainer_Text_DoYouWantToRaise, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, Route117_DayCare_Trainer_TrainMon
	msgbox Route117_DayCare_Trainer_Text_SeeYa, MSGBOX_DEFAULT
	release
	end

Route117_DayCare_Trainer_TrainMon::
	msgbox Route117_DayCare_Trainer_Text_LetsTrain, MSGBOX_DEFAULT
	fadescreen FADE_TO_BLACK
	special ShowLevelTrainingMenu
	waitstate
	msgbox Route117_DayCare_Trainer_Text_SeeYa, MSGBOX_DEFAULT
	release
	end

Route117_DayCare_Trainer_Text_DoYouWantToRaise::
	.string "Roooah! Want to train your weak POKéMON \n"
	.string "to the max level? \p"
	.string "(Editor's note: 'Max' here means your\n"
	.string "current level cap.)$"

Route117_DayCare_Trainer_Text_LetsTrain::
	.string "Roargh! Pick the weakling!$"

Route117_DayCare_Trainer_Text_SeeYa::
	.string "Awh yeah! This is now one beefy \n"
	.string "team! Ready to beat 10 gyms!$"
	.string "Training never ends! I'll see ya \n"
	.string "again very soon!$"
