# 1 "data/maps/LittlerootTown_DXHouse1/scripts.pory"

# 2 "data/maps/LittlerootTown_DXHouse1/scripts.pory"
LittlerootTown_DXHouse1_MapScripts::
# 3 "data/maps/LittlerootTown_DXHouse1/scripts.pory"
	.byte 0
# 4 "data/maps/LittlerootTown_DXHouse1/scripts.pory"
LittlerootTown_DXHouse1_EventScript_Azumarill::
# 5 "data/maps/LittlerootTown_DXHouse1/scripts.pory"
	lock
# 6 "data/maps/LittlerootTown_DXHouse1/scripts.pory"
	faceplayer
# 7 "data/maps/LittlerootTown_DXHouse1/scripts.pory"
	waitse
# 8 "data/maps/LittlerootTown_DXHouse1/scripts.pory"
	playmoncry SPECIES_AZUMARILL, CRY_MODE_NORMAL
# 9 "data/maps/LittlerootTown_DXHouse1/scripts.pory"
	msgbox LittlerootTown_DXHouse1_Text_Azumarill, MSGBOX_DEFAULT
# 10 "data/maps/LittlerootTown_DXHouse1/scripts.pory"
	waitmoncry
# 11 "data/maps/LittlerootTown_DXHouse1/scripts.pory"
	release
# 12 "data/maps/LittlerootTown_DXHouse1/scripts.pory"
	end
# 13 "data/maps/LittlerootTown_DXHouse1/scripts.pory"
	
# 14 "data/maps/LittlerootTown_DXHouse1/scripts.pory"
LittlerootTown_DXHouse1_Text_Azumarill:
# 15 "data/maps/LittlerootTown_DXHouse1/scripts.pory"
	.string "Azumarill: do u rp$"

LittlerootTown_DXHouse1_EventScript_Giftball::
# 18 "data/maps/LittlerootTown_DXHouse1/scripts.pory"
	lockall
# 19 "data/maps/LittlerootTown_DXHouse1/scripts.pory"
	showmonpic SPECIES_MEW, 10, 3
# 20 "data/maps/LittlerootTown_DXHouse1/scripts.pory"
	playmoncry SPECIES_MEW, 0
# 21 "data/maps/LittlerootTown_DXHouse1/scripts.pory"
	waitmoncry
# 22 "data/maps/LittlerootTown_DXHouse1/scripts.pory"
	msgbox LittlerootTown_DXHouse1_EventScript_Giftball_Text_0, MSGBOX_YESNO
# 23 "data/maps/LittlerootTown_DXHouse1/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LittlerootTown_DXHouse1_EventScript_Giftball_2
# 30 "data/maps/LittlerootTown_DXHouse1/scripts.pory"
	msgbox LittlerootTown_DXHouse1_EventScript_Giftball_Text_1
LittlerootTown_DXHouse1_EventScript_Giftball_1:
# 32 "data/maps/LittlerootTown_DXHouse1/scripts.pory"
	hidemonpic
# 33 "data/maps/LittlerootTown_DXHouse1/scripts.pory"
	releaseall
	end

LittlerootTown_DXHouse1_EventScript_Giftball_2:
# 24 "data/maps/LittlerootTown_DXHouse1/scripts.pory"
	removeobject 2
# 25 "data/maps/LittlerootTown_DXHouse1/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 26 "data/maps/LittlerootTown_DXHouse1/scripts.pory"
	waitfanfare
# 27 "data/maps/LittlerootTown_DXHouse1/scripts.pory"
	setflag FLAG_GIFTMON_LITTLEROOT_DXHOUSE
	goto LittlerootTown_DXHouse1_EventScript_Giftball_1


LittlerootTown_DXHouse1_EventScript_Giftball_Text_0:
# 22 "data/maps/LittlerootTown_DXHouse1/scripts.pory"
	.string "You can almost taste it...\n"
	.string "Do you want to eat the Mew?$"

LittlerootTown_DXHouse1_EventScript_Giftball_Text_1:
# 30 "data/maps/LittlerootTown_DXHouse1/scripts.pory"
	.string "You decided to be merciful to the\n"
	.string "critter today...$"
