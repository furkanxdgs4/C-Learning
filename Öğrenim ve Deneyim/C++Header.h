#ifndef EASYWAYHEADER
#define EASYWAYHEADER
#include <iostream>
#include <string>
using namespace std;


namespace defaultvalues {
	constexpr float pi(3.14159f);
	constexpr double avogadro(6.0221413e23);
	constexpr float realWorldsGravity(9.80665f);
}

void calculateFieldOfACircle();

void determineLettersValues(string introducer);
void determineLettersValuesMain();


void checkIstheNumberPrime();

const double formulationOfGravity(float second);
void fallingSimulator();

void calculatingPow();
float intPow(const int number, const int exponent);

bool areTheyEqual(double x, double y, float percentOfError);

	//TEST AREA OF SECTIONS, AT THE SAME TIME; LITTLE SUMMARIES OF SECTIONS
void testAreaOfSection28();
void checkOfSection32();

int determineBitCapacity(int number, int exponent);
void digitBitTransformer();

#endif // !EASYWAYHEADER
