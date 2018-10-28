#include <iostream>
#include <string>

#include "romanType.h"

using namespace std;


//Implementation File for the class romanType


void romanType::printRoman() const {
    cout << "The roman number you entered was:  " << romanNumeral << endl;
}

void romanType::printInt() const {
		cout << "The real number version is: " << positiveInt << endl;
}

void romanType::convertToInteger() {

	enum romans {I = 1, V = 5, X = 10, L = 50, C = 100, D = 500, M = 1000};

	for(int i = 0; i < romanNumeral.length(); i++) {

	switch (romanNumeral[i]) 
		{
			case 'M': positiveInt += M; break;
			case 'D': positiveInt += D; break;
			case 'C': positiveInt += C; break;
			case 'L': positiveInt += L; break;
			case 'X': positiveInt += X; break;
			case 'V': positiveInt += V; break;
			case 'I':
				if (romanNumeral[i + 1] != 'I' && i + 1 != romanNumeral.size())
					positiveInt-=1;
				else
					positiveInt+=1;
				break;
		}
	}
}

bool romanType::checkIfValid(string a) {

	bool isValid = false;

	// cout << "isValid: " << isValid << endl; 

		while(isValid) {

			for(int i = 0; i < a.length(); i++) {

				if((a[i] == 'M') || (a[i] == 'D') || (a[i] == 'C') || (a[i] == 'L') || (a[i] == 'X') || (a[i] == 'V') || (a[i] != 'I')) {
					
					isValid = true;

				} else {

					cout << "Invalid Number! Give me a number (Ex: III): ";
					cin >> a;

					isValid = false;

				}
		}
	}
	return isValid;
	
}

void romanType::setRomanNum(string n) {
	bool correct = false;
	bool result = checkIfValid(n);

	//cout << "result: " << result << endl;
	if(result == correct) {
		romanNumeral = n;
	} else if(result != correct) {
		checkIfValid(n);
	};
}

/*
string romanType::getRomanNum() const {
	setRomanNum()
	return romanNumeral;
}
*/


romanType::romanType(string num)
{
   romanNumeral = num;
}




