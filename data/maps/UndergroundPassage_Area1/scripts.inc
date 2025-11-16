UndergroundPassage_Area1_MapScripts::
	.byte 0

UndergroundPassage_Area1_EventScript_BattleDusclops::
	lockall
	faceplayer
	playmoncry SPECIES_DUSCLOPS, CRY_MODE_ENCOUNTER
	msgbox UndergroundPassage_Area1_TextDusclops, MSGBOX_DEFAULT
	closemessage
	waitmoncry
	setwildbattle SPECIES_DUSCLOPS, 45
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	special BattleSetup_StartLegendaryBattle
	waitstate
	delay 40 
	giveitem ITEM_SPELL_TAG
	setflag FLAG_DEFEATED_DUSCLOPS
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, EventScript_RemoveDusclops
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, EventScript_RemoveDusclops
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, EventScript_RemoveDusclops
	release
	end

EventScript_RemoveDusclops::
	goto Common_EventScript_RemoveStaticPokemon
	end

UndergroundPassage_Area1_TextDusclops::
	.string "Hsssah!$"
