#include <iostream>
#include <math.h>
#include <string>
#include "Inventory_H.h"
#include "C++Header.h"
using namespace std;

//Section 4.5 - A Enumeration Type Defining and Making An Inventory System

string writeItemsNames(string Written) {
	cout << Written << endl;
	return Written;;
}

int ItemSocketting() {
	cout << "Hangi sokete takilacagini giriniz: ";
	int socket;
	cin >> socket;
	return socket;
}

ItemVariables getObjectsStruct(int selectedObject) {
	switch (selectedObject)
	{
	case 1:
		return TORCH_t;
		break;

	case 2:
		return AK_47_t;
		break;

	case 3:
		return FLASH_LIGHT_t;
		break;

	case 4:
		return WATER_t;
		break;

	default:
		cout << "Nesne bulunamadi, giris 'TORCH'a donduruldu";
		return TORCH_t;
		break;

	}
}

SocketToInventory getObjectsVar(int whichObject) {
	switch (whichObject)
	{

	case 1:
		return TORCH_i;
		break;

	case 2:
		return AK_47_i;
		break;

	case 3:
		return FLASH_LIGHT_i;
		break;

	case 4:
		return WATER_i;
		break;

	default:
		cout << "Nesne bulunamadi, 'TORCH'a donuluyor" << endl;
		return TORCH_i;
		break;
	}
}

void setObjectsValue(int socket, int whichObject) {
	switch (whichObject)
	{
	case 1:
		TORCH_i.socketOfItem = socket;
		break;

	case 2:
		AK_47_i.socketOfItem = socket;
		break;

	case 3:
		FLASH_LIGHT_i.socketOfItem = socket;
		break;

	case 4:
		WATER_i.socketOfItem = socket;
		break;

	default:
		cout << "Nesne bulunamadi\n";
		break;
	}
}

int ItemSelecting() {
	cout << "Nesnenizi secin:\n(1) TORCH\n(2) AK_47\n(3) FLASH_LIGHT\n(4) WATER\n";
	int WhichObject;
	cin >> WhichObject;

	ItemVariables ItemsStruct = getObjectsStruct(WhichObject);
	SocketToInventory ItemsSocket = getObjectsVar(WhichObject);
	{
		string nameOfItem = ItemsStruct.nameOfItem;
		cout << "Nesnenizin adi: " << getObjectsStruct(WhichObject).nameOfItem << endl;
	}
	{
		cout << "Nesnenizin kullanim suresi: " << getObjectsStruct(WhichObject).usageDuration << endl;
	}
	{
		cout << "Nesnenizin soketi: " << getObjectsVar(WhichObject).socketOfItem << endl;
	}

	cout << "Iteminizin soketini degistirmek ister misiniz? (1) Evet, (0) Hayir\n";
	bool x;
	cin >> x;
	if (x) {
		cout << "Nesnenizin yeni soketi: " << getObjectsVar(WhichObject).getSocketOfItem << endl;
	}

	return 0;
}

void enumerationSection() {
	cout << "Bu programda, verdiginiz bilgilere gore programin sonunda hangi nesnenin hangi sirada oldugunu ogreneceksiniz\n";
	while (true) {
		ItemSelecting();
	}
}


