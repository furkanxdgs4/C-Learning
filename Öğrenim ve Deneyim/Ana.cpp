#include <iostream>
#include <utility>
#include <bitset>
#include <string>
#include <math.h>
#include <cmath>
#include "C++Header.h"
#include "MainProgramsHeader.h"
using namespace std;
using namespace defaultvalues;

void arrayTesting() {
	int array1[5] = { 1,2,3,4,5 };
	int array2[5] = { 10,9,8,7,6 };
	swap(array1[3], array2[2]);
	cout << "Array1'in 3. Array'i: " << array1[3] << endl;
	cout << "Array2'nin 2. Array'i: " << array2[2] << endl;
}

int main()
{
	cout << "Choose the Aim to use:\n(1) Testing\n(2) Decimal->Bit Transformer\n(3) Bit->Decimal Transformer\n" ;
	int secim;
	cin >> secim;
	switch (secim)
	{
	case 1:
		arrayTest();
	break;

	case 2:
		digitToBitTransformer();
	break;

	case 3:
		while (true)
		{
			bitToDecimalTransformer();
			cout << endl;
		}
	break;

	default:
		cout << "Wrong choice, please repeat it" << endl;
		main();
	break;
	}
	
}