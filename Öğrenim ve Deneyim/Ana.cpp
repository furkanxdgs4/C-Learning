#include <iostream>
#include <string>
#include <math.h>
#include <cmath>
#include "C++Header.h"
#include "MainProgramsHeader.h"
using namespace std;
using namespace defaultvalues;



int main()
{
	cout << "Kullanim Amacinizi Seciniz:\n(1) Asal Sayi Kontrolu\n(2) Hesap Makinesi\n" ;
	int secim;
	cin >> secim;
	switch (secim)
	{
	case 1:
		while (true)
		{
			checkIstheNumberPrime();
			cout << endl;
		}
	break;

	case 2:
		Calculator();
	break;

	default:
		cout << "Yanlis Secim Yaptiniz" << endl;
		main();
	break;
	}
	
}