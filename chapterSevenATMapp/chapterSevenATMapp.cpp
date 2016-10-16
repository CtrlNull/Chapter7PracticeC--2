// This program is a driver that tests a function comparing
// the contents of two int arrays

#include "stdafx.h"
#include <iostream>
using namespace std;

// Function Prototype
bool testPIN(const int[], const int[], int);

int main()
{
	const int Num_Digits = 7;	// Number of digits in a PIN
	int pin1[Num_Digits] = { 2, 4, 1, 8, 7, 9, 0 };	// Base set of values
	int pin2[Num_Digits] = { 2, 4, 6, 8, 7, 9, 0 };	// Only one element is
													// different from pin1
	int pin3[Num_Digits] = { 1, 2, 3, 4, 5, 6, 7 };	// All elements are
													// different from pin1
	if (testPIN(pin1, pin2, Num_Digits))
		cout << "ERROR: pin1 and pin2 are different.\n";
	else
		cout << "SUCCESS: pin1 an pin2 are different.\n";

	if (testPIN(pin1, pin3, Num_Digits))
		cout << "ERROR: pin1 and pin3 report to be the same.\n";
	else
		cout << "SUCCESS: pin1 and pin3 are different.\n";

	if (testPIN(pin1, pin1, Num_Digits))
		cout << "SUCCESS: pint1 and pin1 repoort to be the  same.\n";
	else
		cout << "ERROR: pin1 and pin1 report to be different.\n";
	return 0;
}

//******************************************************************
// The following function accepts two int arrays. The arrays are 
// compared. If they contain the same values, true is returned.
// If they contain different values, false is returned.
//******************************************************************

bool testPIN(const int custPIN[], const int databasePIN[], int size)
{
	for (int index = 0; index < size; index++)
	{
		if (custPIN[index] != databasePIN[index])
			return false;	// We've found two different values
	}
	return true;	// If we make it this far, the values are the same
}
