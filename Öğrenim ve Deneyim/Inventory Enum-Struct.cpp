#include <iostream>
#include <utility>
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
	switch (whichObject){
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
		switch (WhichObject)
		{

		case 1:
			TORCH_i.socketOfItem = ItemSocketting();
			break;

		case 2:
			AK_47_i.socketOfItem = ItemSocketting();
			break;

		case 3:
			FLASH_LIGHT_i.socketOfItem = ItemSocketting();
			break;

		case 4:
			WATER_i.socketOfItem = ItemSocketting();
			break;

		default:
			cout << "Nesne bulunamadi, 'TORCH'a donuluyor" << endl;
			TORCH_i.socketOfItem = ItemSocketting();
			break;
		}
		cout << "Nesnenizin yeni soketi: " << getObjectsVar(WhichObject).socketOfItem << endl;
	}

	return 0;
}

void enumerationSection() {
	cout << "Bu programda, verdiginiz bilgilere gore programin sonunda hangi nesnenin hangi sirada oldugunu ogreneceksiniz\n";
	while (true) {
		ItemSelecting();
	}
}


	// Array Section

void arrayTest() {
	const int testarraylength = 3;
	static int testarray[testarraylength] = { 2,10,5 };


	cout << "Merhaba, bu programda girdiginiz sayi kumesindeki en buyuk sayiyi bulacaksiniz\n";
	int maxNumber = 0;
	int arrayofMax = -1;
	if (arrayofMax > -1) {																										//If the Loop doesn't run first time

		for (int step = 0; step < testarraylength; ++step) {
			if (maxNumber < testarray[step])
			{
				maxNumber = testarray[step];
				arrayofMax = step;
			}
		}

		cout << "Yeni en buyuk sayiniz: " << maxNumber << endl << "Sayinizin bulundugu Array: " << arrayofMax << " (Bastan " << arrayofMax + 1 << ". Array)" << endl;
	}

	else {																														//If the Loop run first time

		for (int step = 0; step < testarraylength; ++step) {
			if (maxNumber < testarray[step])
			{
				maxNumber = testarray[step];
				arrayofMax = step;
			}
		}

		cout << "En buyuk sayi: " << maxNumber << endl << "Sayinizin bulundugu Array: " << arrayofMax  << " (Bastan " << arrayofMax + 1 << ". Array)" << endl;
	}

	cout << "Islem surecini gormek ister misiniz? (1) Evet, (0) Hayir\n";
	int secim;
	cin >> secim;

	for (int precision = 0; precision < testarraylength; ++precision)													
	{
		if (precision > 0) {
			maxNumber = 0;
			for (int step = precision; step < testarraylength; ++step) {
				if (maxNumber < testarray[step])
				{
					maxNumber = testarray[step];
					arrayofMax = step;
				}
			}
		}
		else {
			maxNumber = 0;
			for (int step = precision; step < testarraylength; ++step) {
				if (maxNumber < testarray[step])
				{
					maxNumber = testarray[step];
					arrayofMax = step;
				}
			}
		}

		swap(testarray[precision], testarray[arrayofMax]);


		if (secim) {
			cout << "Su sayinizin: " << maxNumber;


			cout << " yeri artik surasi: " << precision << endl;
		}
	}

	cout << "Array 0 = " << testarray[0] << endl <<"Array 1 = " << testarray[1] << endl << "Array 2 = " << testarray[2] << endl;
}