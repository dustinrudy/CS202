#include <iostream>
#include <string>
#include "romanType.h"

using namespace std;


int main () {

romanType userNumber;
string inputNumber;

cout << "Please enter a number: ";
cin >> inputNumber;

userNumber.setRomanNum(inputNumber);

userNumber.printRoman();

userNumber.convertToInteger();

userNumber.printInt();



return 0;

}