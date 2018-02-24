#include <iostream>
#include <math.h>
using namespace std;

float getUserInput();
_Uint4_t getMathematicalOperation();
float calculateResult(float first_number, _Uint4_t operation, float second_number);
float printResult(float result);
bool MustCalculationBeResetted();

void Calculator() {
	float result = printResult(calculateResult(getUserInput(), getMathematicalOperation(), getUserInput()));
	while (true)
	{

		bool mustCalculationBeResetted = MustCalculationBeResetted();

		if (!mustCalculationBeResetted) {
			result = printResult(calculateResult(getUserInput(), getMathematicalOperation(), result));
		}
		else {
			result = printResult(calculateResult(getUserInput(), getMathematicalOperation(), getUserInput()));
		}

	}

}