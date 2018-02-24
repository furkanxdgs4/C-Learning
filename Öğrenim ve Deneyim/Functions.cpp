#include <iostream>
#include <math.h>
#include <string>
using namespace std;

float add(float x, float y) {
	return x + y;
}

float substract(float x, float y) {
	return x - y;
}

float multiply(float x, float y) {
	return x * y;
}

float divide(float x, float y) {
	return x / y;
}

float getUserInput() {
	float x;
	cout << "Sayinizi giriniz: ";
	cin >> x;
	return x;
}

_Uint4_t getMathematicalOperation() {
	_Uint4_t x;
	cout << "Yapmak istediginiz islemi giriniz;" << endl << "(1) Toplama" << endl << "(2) Cikarma" << endl << "(3) Carpma" << endl << "(4) Bolme" << endl;
	cin >> x;
	return x;
}

float calculateResult(float second_number, _Uint4_t operation, float first_number) { //first_number sonda, çünkü fonksiyon çaðrýldýðý zaman ilk olarak first_number üzerindeki aktif olacak
	float result;
	switch (operation)
	{
		case 1:
			result = add(first_number, second_number);
		break;

		case 2:
			result = substract(first_number, second_number);
		break;

		case 3:
			result = multiply(first_number, second_number);
		break;

		case 4:
			result = divide(first_number, second_number);
		break;

		default:
			cout << "Yanlis bir islem girdiniz, lutfen tekrar deneyiniz \n";
			operation = getMathematicalOperation();
			result = calculateResult(second_number, operation, first_number);
		break;
	}
	return result;
}

bool MustCalculationBeResetted() {
	int ResetorNot;
	bool x;

	cout << "Islemleriniz Sifirlansin mi?" << endl << "(1) Sifirlansin" << endl << "(2) Sifirlanmasin" << endl;
	cin >> ResetorNot;

	if (ResetorNot == 1) {
		x = true;
	}
	else {
		x = false;
	}
	return x;
}

float printResult(float result) {
	cout << "Elde ettiginiz sonuc: " << result << endl;
	return result;
}