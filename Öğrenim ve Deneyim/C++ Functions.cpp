#include <iostream>
#include <math.h>
#include <cmath>
#include "C++Header.h"
using namespace std;
using namespace defaultvalues;



	//Calculating the Area of Given Radius
void calculateFieldOfACircle() {														// Yarýçapý girilen yuvarlaðýn alanýný döndürür (Pi.r^2)
	cout << "Bu programda, yaricapini gireceginiz bir yuvarlagin alanini hesaplayacagiz\n";
	while (true)
	{
		cout << "Yaricapinizi giriniz: ";
		int radius;
		cin >> radius;
		cout << "Alaniniz: " << pi * pow(radius, 2) << endl;
	}
}




	//Converting Letter Values to Their Integer Values
void determineLettersValues(string introducer) {							// Sorunlu yapý; Yapý, her zaman "For" döngüsünde takýlý kalýyor. Ýþlevsellik var, ancak istenen davranýþý sergilemiyor.
	cout << introducer;														// Sorun þurada; Ne zaman girdiðimiz harfler tükense, beklendiði gibi "Yazinizi girin" yazmýyor.
	char x = 1; 															// Tam tersine, "For" döngüsü içerisinde sýkýþýp sadece geçirilen verilerin, "Integer" deðerlerini veriyor.
	int i = 1;																// Buyüzden geçici olarak bir düzenleme yapýlýyor ve çakma da olsa, hoþ gözükmesi için arayüzsel bir deðiþiklik yapýlýyor.		
	cout << "Girilen yazi: ";
	cin >> x;
	for (i = 1; x != 0; ++i) {
		cout << x << " harfinizin degeri: " << static_cast<int>(x) << endl;
		cout << "Girilen yazi: ";
		cin >> x;
	}
}


void determineLettersValuesMain() {														//Girilen 'Char'ýn 'Int' deðerini girer
	string introducerofDeterminer = "Bu programda girdiginiz \'Char\'in \'Integer\' olarak degeri verilecek\n";
	for (int i = 1; i > 0; ++i) {
		determineLettersValues(introducerofDeterminer);
	}
}



	//Checking Const & Constexpr Usages
void testAreaOfSection28() {
	constexpr int classNumber = 20;											//Compile-Time Instance: Compile gerçekleþirken direkt degerler girilir
	int numberofStudents;													//Run-Time Instace: Çalýþma sýrasýnda, maxStudentCapacity oluþturulduðunda direkt olarak deger sabitlenir.
	cout << "Sinif basina ogrenci sayisini giriniz: ";
	cin >> numberofStudents;
	const int maxStudentCapacity = classNumber * numberofStudents;
	cout << "Varsayilan derslik sayisi: " << classNumber << endl << "Degeriniz: " << maxStudentCapacity << endl;
}



	//Checker of whether the Number is prime
void checkIstheNumberPrime()														
{
	while (true)
	{
		int x;
		cout << "Lutfen sayinizi giriniz: ";
		cin >> x;
		bool isNumberPrime;
		int remainder;
		double doubleresult = 2;
		for (int a = 2; a < 100; a++) {
			if (x == a) {
			}
			else {
				remainder = x % a;
				if (remainder == 0) {
					cout << "Girdiginiz sayi asal degil" << endl;
					a = 105;
					isNumberPrime = false;
				}
				else if (a == 99) {
					a = 105;
					cout << "Girdiginiz sayi asal" << endl;
					isNumberPrime = true;
				}
			}
		}
	}
}





	//Formula Of Gravity & Falling Simulator Depending on It
const double formulationOfGravity(float second) {
	return ((defaultvalues::realWorldsGravity * (second * second)) / 2);
}

void fallingSimulator() {
	float height;
	cout << "Kulenizin yuksekligini giriniz: ";
	cin >> height;
	float remainheight = height;
	for (float second = 0; remainheight > 0; second = 0.1f + second) {
		remainheight = height - formulationOfGravity(second);
		cout << "Su saniyede:   " << second << "\tsu yuksekliktesiniz: " << remainheight << endl;
	}
}



	//Hand-Crafted, Faulty 'Power' Function
void calculatingPow() {
	int number, exponention;
	cout << "Bu programda girdiginiz sayinin, girdiginiz kadarki ussunu alacagiz\n";
	while (true)
	{
		cout << "Sayinizi giriniz: ";
		cin >> number;
		cout << "Ussunuzu giriniz: ";
		cin >> exponention;
		cout << "Cevabiniz: " << intPow(number, exponention) << endl;
	}
}


float intPow(int number, int exponent) {
	float no = number * number;
	int expo = exponent - 2;
	for (int i=0; expo > 0; expo = expo - 1) {
		no = number * no;
	}
	for (int i = 0; expo <= 0; expo = expo + 1) {
		no = 1 / (number * no);
	}
	return no;
}

	//Truthest Equalition Calculation
bool areTheyEqual(double x, double y, float percentOfError) {
	double resultOfAbstraction((x > y) ? (x - y) : (y - x));
	if (resultOfAbstraction > 1) {
		int greaterTwo((x > y) ? x : y);
		int exponent = 1;
		for (exponent = 1; greaterTwo > 1; ++exponent) {

			greaterTwo = ((x > y) ? x : y) / pow(10, exponent);
			if (greaterTwo > 1) {
				cout << "Ussunuz bu: " << exponent << " ve hala 1'den buyuk" << endl;
			}
			else {
				cout << "Ussunuz bu: " << exponent << " ve 1'den kucuk" << endl;
			}
		}
		cout << "Sayilarinizin basamagi: " << exponent << endl;
		double percentOfError = pow(10, exponent - 4);
		return (!(resultOfAbstraction > percentOfError));
	}
	else {
		double a = fabs(resultOfAbstraction);
		return (!(a > percentOfError));
	}
}



	//Checking of Remainder Operator
void checkOfSection32() {
	while (true)
	{
		cout << "Sayinizi giriniz: ";
		int x, i = 2;
		cin >> x;
		cout << "Sayinizin 2\'ye bolumunden kalan: " << x % i << endl;
	}
}



	//Determining the Number's Bit Version
int determineNearestPow(int number, int exponent) {
	bool x = true;
	int temporaryNumber((pow(2, exponent) > number) ? (0) : (number - pow(2, exponent)));
	return pow(2, exponent);
}


void digitBitTransformer() {
	cout << "Merhaba, bu programda girdiginiz sayinin 2'lik sistemdeki karsiligini alicaksiniz\nSayinizi giriniz: ";
	int number;
	cin >> number;
	int exponent;
	for (exponent = 0; number >= pow(2, exponent); ++exponent) {								// Kapladigi Bit

	}
	int bitCapacity = exponent;
	cout << "Sayinizin kapladigi Bit: " << bitCapacity << endl;
	int temporaryNumber = number;
	bool forController = true;
	int bitizedNumber = 0;
	for (temporaryNumber; temporaryNumber > 0 && exponent > -1; --exponent) {					// Bit Baþý Düþen Sayýnýn Hesaplanmasý
		if (temporaryNumber < pow(2, exponent)) {
			bitizedNumber = 10 * bitizedNumber;
		}
		else {
			temporaryNumber = temporaryNumber - determineNearestPow(temporaryNumber, exponent);
			bitizedNumber = 10 * bitizedNumber;
			++bitizedNumber;
		}
	}
	for (exponent; exponent > -1; --exponent) {
		bitizedNumber *= 10;
	}
	cout << "Bit karsiliginiz: " << bitizedNumber << endl;
}