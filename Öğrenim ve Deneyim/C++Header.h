#ifndef EASYWAYHEADER
#define EASYWAYHEADER
#include <iostream>
#include <utility>
#include <string>
using namespace std;

namespace defaultvalues {
	extern const float pi;
	extern const double avogadro;
	extern const float realWorldsGravity;
}

void calculateFieldOfACircle();

void determineLettersValues(char x);
void determineLettersValuesMain();


void checkIstheNumberPrime();

const double formulationOfGravity(float second);
void fallingSimulator();

void calculatingPow();
int intPow(const int number, const int exponent);

bool areTheyEqual(double x, double y, float percentOfError);

int determineNearestPow(int number, int exponent);
void digitToBitTransformer();


void bitToDecimalTransformer();




	//TEST AREA OF SECTIONS, AT THE SAME TIME; LITTLE SUMMARIES OF SECTIONS

 //Section 2.9 - Const & Consexpr Usages
void testAreaOfSection29();

 //Section 3.2 - Some of the Arithmetic Operator; In this Function, Reaminder Operator
void checkOfSection32();

 //Section 3.8a - BitFlags and Bitwise Operators
void testingBoolBits();
void testingSection38a();

 //Section 4.3 - Local Scope Globals
void writeOutStatic(int input);

 //Section 4.4b - Beginning to String
void yearsPerLetter();

 //Section 4.5 - Enumerations
void enumerationSection();

 //Section 6.3 - Arrays
void arrayTest();



 //Section 4.6 - Typedefs
typedef int error_t;

int proccessOfSomething();
void mainFunction();
error_t isProccessSucceeded(int returnOfFunction);
#endif // !EASYWAYHEADER
