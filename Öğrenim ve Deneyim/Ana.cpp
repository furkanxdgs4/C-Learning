#include <iostream>
#include <bitset>
#include <string>
#include <math.h>
#include <cmath>
#include "C++Header.h"
#include "MainProgramsHeader.h"
using namespace std;
using namespace defaultvalues;

int main()
{
	cout << "Choose the Aim to use:\n(1) Testing\n(2) Decimal->Bit Transformer\n(3) Bit->Decimal Transformer\n" ;
	int secim;
	cin >> secim;
	switch (secim)
	{
	case 1:
		enumerationSection();
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