UndergroundPassage_Area1_MapScripts::
	.byte 0

UndergroundPassage_Area1_EventScript_BattleRegidrago::
	lockall
	faceplayer
	playmoncry SPECIES_REGIDRAGO, CRY_MODE_ENCOUNTER
	msgbox UndergroundPassage_Area1_TextRegidrago, MSGBOX_DEFAULT
	waitmoncry
	closemessage
	setwildbattle SPECIES_REGIDRAGO, 55
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	setflag B_FLAG_NO_CATCHING
	special StartRegiBattle
	waitstate
	delay 40
	giveitem ITEM_EJECT_BUTTON
	waitse
	setflag FLAG_DEFEATED_REGIDRAGO
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	clearflag B_FLAG_NO_CATCHING
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, EventScript_RemoveRegidrago
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, EventScript_RemoveRegidrago
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, EventScript_RemoveRegidrago
	release
	end

EventScript_RemoveRegidrago::
	goto Common_EventScript_RemoveStaticPokemon
	end

UndergroundPassage_Area1_TextRegidrago::
	.string "Hsssah!$"
