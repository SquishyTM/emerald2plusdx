
LittlerootTown_DXHouse1_MapScripts::
	.byte 0
LittlerootTown_DXHouse1_EventScript_Azumarill::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_AZUMARILL, CRY_MODE_NORMAL
	msgbox LittlerootTown_DXHouse1_Text_Azumarill, MSGBOX_DEFAULT
	waitmoncry
	release
	end
	
LittlerootTown_DXHouse1_Text_Azumarill:
	.string "Azumarill: do u rp$"

LittlerootTown_DXHouse1_EventScript_Giftball::
	lockall
	showmonpic SPECIES_MEW, 10, 3
	playmoncry SPECIES_MEW, 0
	waitmoncry
	msgbox LittlerootTown_DXHouse1_EventScript_Giftball_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq LittlerootTown_DXHouse1_EventScript_Giftball_2
	msgbox LittlerootTown_DXHouse1_EventScript_Giftball_Text_1
LittlerootTown_DXHouse1_EventScript_Giftball_1:
	hidemonpic
	releaseall
	end

LittlerootTown_DXHouse1_EventScript_Giftball_2:
	removeobject 2
	playfanfare MUS_OBTAIN_ITEM
	waitfanfare
	setflag FLAG_GIFTMON_LITTLEROOT_DXHOUSE
	goto LittlerootTown_DXHouse1_EventScript_Giftball_1


LittlerootTown_DXHouse1_EventScript_Giftball_Text_0:
	.string "You can almost taste it...\n"
	.string "Do you want to eat the Mew?$"

LittlerootTown_DXHouse1_EventScript_Giftball_Text_1:
	.string "You decided to be merciful to the\n"
	.string "critter today...$"
