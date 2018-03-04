#pragma once
#include <iostream>
#include <math.h>
#include <string>
using namespace std;

//Section 4.5 - Enumerations
enum Strogeables {
	TORCH = 1,
	AK_47,
	FLASH_LIGHT,
	WATER
};

int ItemSocketting();
int ItemSelecting();
string writeItemsNames(string Written);

//Section 4.7 - Structs for Enumeration Usage
const struct ItemVariables {
	string nameOfItem;
	int usageDuration;				//By Hours
};

const extern ItemVariables TORCH_t = { "TORCH", 1 };
const extern ItemVariables AK_47_t = { "AK-47", 2 };
const extern ItemVariables FLASH_LIGHT_t = { "FLASH LIGHT", 5 };
const extern ItemVariables WATER_t = { "WATER", 10 };

struct SocketToInventory {
	int socketOfItem;
};

extern SocketToInventory TORCH_i = {1};
extern SocketToInventory AK_47_i = {2};
extern SocketToInventory FLASH_LIGHT_i = {3};
extern SocketToInventory WATER_i = {4};