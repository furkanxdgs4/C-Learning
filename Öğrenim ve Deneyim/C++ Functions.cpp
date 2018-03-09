#include <iostream>
#include <utility>
#include <bitset>
#include <string>
#include <math.h>
#include <cmath>
#include "C++Header.h"
using namespace std;
using namespace defaultvalues;



namespace defaultvalues {
	extern const float pi(3.14159f);
	extern const double avogadro(6.0221413e23);
	extern const float realWorldsGravity(9.80665f);
}


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




	// Converting Letter Values to Their Integer Values
	// Sorunlu yapý; Yapý, her zaman "For" döngüsünde takýlý kalýyor. Ýþlevsellik var, ancak istenen davranýþý sergilemiyor.
	// Sorun þurada; Ne zaman girdiðimiz harfler tükense, beklendiði gibi "Yazinizi girin" yazmýyor.
	// Tam tersine, "For" döngüsü içerisinde sýkýþýp sadece geçirilen verilerin, "Integer" deðerlerini veriyor.
	// Buyüzden geçici olarak bir düzenleme yapýlýyor ve çakma da olsa, hoþ gözükmesi için arayüzsel bir deðiþiklik yapýlýyor.		
void determineLettersValues(char x) {
	int i = 1;																
	cout << "Girilen deger: " << x << " harfinizin degeri: " << static_cast<int>(x) << endl;
	while (x > 0)
	{
		cin >> x;
		cout << "Girilen deger: " << x << " harfinizin degeri: " << static_cast<int>(x) << endl;
	}
}


void determineLettersValuesMain() {														//Girilen 'Char'ýn 'Int' deðerini girer
	cout << "Bu programda girdiginiz 'Char'in 'Integer' olarak degeri verilecek\n";
	cout << "'Char'inizi giriniz: ";
	for (int i = 1; i > 0; ++i) {
		char word;
		cin >> word;
		determineLettersValues(word);
	}
}



	//Checking Const & Constexpr Usages
void testAreaOfSection29() {
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
		remainheight = static_cast<float>(height - formulationOfGravity(second));
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


int intPow(int number, int exponent) {
	float exponented_Number = 1;
	for (int i=0; exponent > i; ++i) {
		exponented_Number *= number;
	}
	/*for (int i = 0; exponent < i; --i) {																//Bu kýsým, "IntPow" mantýðýna uymadýðý için (Döndürdüðü sayi float) iptal edildi
		exponented_Number *= 1.0 / number;
		cout << "Adim: " << i + 1 << " de sayiniz: " << exponented_Number << endl;
	}*/
	return static_cast<int>(exponented_Number);
}

	//Truthest Equalition Calculation
bool areTheyEqual(double x, double y, float percentOfError) {
	double resultOfAbstraction((x > y) ? (x - y) : (y - x));
	if (resultOfAbstraction > 1) {
		int greaterTwo(static_cast<int>((x > y) ? x : y));
		int exponent = 1;
		for (exponent = 1; greaterTwo > 1; ++exponent) {

			greaterTwo = (static_cast<int>(((x > y) ? x : y) / pow(10, exponent)));
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
	int temporaryNumber(static_cast<int>((pow(2, exponent) > number) ? (0) : (number - pow(2, exponent))));
	return static_cast<int>(pow(2, exponent));
}


void digitToBitTransformer() {
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

	//Transforming Bits To Decimals
void bitToDecimalTransformer() {
	cout << "Bitinizi giriniz: ";
	int bitizednumber, decimalnumber = 0;
	cin >> bitizednumber;
	int bitsOrder = 1;
	for (bitsOrder; bitizednumber > 2; ++bitsOrder && (bitizednumber /= 10))
	{
		if ((bitizednumber % 10) > 0) {
			decimalnumber += static_cast<int>(pow(2, bitsOrder - 1));
		}
		else {

		}
		/* cout << "Bulundugunuz adim: " << bitsOrder << endl << "Bitized Number: " << bitizednumber << endl << "Decimal Number: " << decimalnumber << endl;*/ //Debugging Prints
	}
	decimalnumber += static_cast<int>(pow(2, bitsOrder - 1));
	cout << "10'dalik sayiniz: " << decimalnumber << endl;
}





	//Testing BitFlags As Bools & Integers
void testingBoolBits() {
	bool IsHappy;
	bool IsLaughing;
	bool IsBlowByLaughing;

	cout << "Mutlu musunuz? (0) Hayir, (1) Evet\n";
	cin >> IsHappy;
	cout << "Guluyor musunuz peki? (0) Hayir, (1) Evet\n";
	cin >> IsLaughing;
	cout << "Gulmekten yarildiniz mi? (0) Hayir, (1) Evet\n";
	cin >> IsBlowByLaughing;


	int status = ((IsHappy << 0) | (IsLaughing << 1) | (IsBlowByLaughing << 2) );
	string stopLaughing = "Yeter lan, kesin su gulmeyi\n";
	string happy = "Allah nesenizi eksik etmesin\n";
	string semiHappy = "Iyisiniz, fena degil\n";
	string unHappy = "Cok cok kotu\n";
	string done = "Tamam bu gunluk bu kadar yeter\n";
	cout << "O zaman durumunuz: " << (status > 1 ? happy : (status > 0 ? semiHappy : unHappy)) << endl;
	cout << (status == 3 ? stopLaughing : done) << "Status degeriniz: ";
	cout << (status >= 3 ? (status &= ~(IsLaughing << 1)) : status << 0) << endl;

	cout << "Mutlu muyum? " << static_cast<bool>((static_cast<bool>(status) & IsHappy)) << endl;
	cout << "Kahkahadan yarildim mi? " << static_cast<bool>((status << 0) & (IsBlowByLaughing << 2)) << endl;
	cout << "Herhangi birini gerceklesti mi? " << static_cast<bool>(0 | status) << endl;
}

void testingSection38a() {
	cout << "In this program, we will test Bit Flags usage\nEnter the Number: " << endl;
	int x;
	cin >> x;

	unsigned char mainNumber = x << 0 , manipulatedNumber;

	cout << "Main Number: " << (mainNumber << 0) << endl;

	unsigned char manipulatorNumber = 28;
	manipulatedNumber = (mainNumber^manipulatorNumber);
	cout << "Turning On Number: "  << (manipulatedNumber << 0) << endl;
	manipulatedNumber = (manipulatorNumber & (mainNumber));
	cout << "Vice-Versa of Main Number: " << (~mainNumber << 0) << endl << "Turning Off Number: " << ((manipulatorNumber << 0) & (~mainNumber << 0)) << endl;
}


		//Static GLOBAL Variables
static int x;

void writeOutStatic(int input) {
	x = input;
	cout << "Static'iniz: " << x << endl;
}

		//Section 4.4b - A Program for Asking Your Name and Age for Calculating Your Age Average per Letter
void yearsPerLetter() {
	cout << "Merhaba, bu programda girdiginiz adiniz ve yasiniz sayesinde adinizdaki her harfe dusen ortalama yasadiginiz sureyi hesaplayacagiz\n";
	while (true)
	{
		string firstname, secondname, surname;
		int age;
		cout << "Ilk isminizi giriniz: ";
		cin >> firstname;
		cout << "Ikinci isminiz var mi? (1) Evet, (2) Hayir\n";
		int secondName;
		cin >> secondName;
		if (secondName == 1)
		{
			cout << "O zaman ikinci isminizi giriniz: ";
			cin >> secondname;
		}
		cout << "Soyadinizi giriniz: ";
		cin >> surname;
		cout << "Yasinizi giriniz: ";
		cin >> age;
		cout << "Harfiniz basina dusen yasadiginiz sure: " << age / ((firstname.length()) + ((secondname.length()) ? (secondname.length()) : 0) + (surname.length())) << endl;
	}
}





	//Section 4.6 - Type Defining and Type Aliasing in C++11


void mainFunction() {
	isProccessSucceeded(proccessOfSomething());
}

error_t isProccessSucceeded(int returnOfFunction) {
	error_t returnValue(returnOfFunction);
	switch (returnValue)
	{
	case 0:
		cout << "Isleminiz basariliymis\n";
		return 0;
		break;

	case 1:
		cout << "Isleminiz basarisizmis\n";
		return 1;
		break;

	default:
		cout << "Isleminize ne oldugu tespit edilemedi\n";
		return -1;
		break;
	}
}

int proccessOfSomething() {
	cout << "Burada bir seyler yapilmali, suanlik 0 donduruluyor" << endl;
	return 0;
}