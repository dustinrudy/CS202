#include <iostream>
#include <string>
#include "dayType.h"

using namespace std;

void convertToUpper(string& str);


int main () {

string inputDay;

dayType day;

cout << "Please enter a day of the week: ";
cin >> inputDay;

convertToUpper(inputDay);

day.setDay(inputDay);

day.printDay();

day.returnNextDay();

day.returnPreviousDay();




return 0;

}


void convertToUpper(string& str) {
	for(int i = 0; i < str.length(); i++) {
		str[i] = toupper(str[i]);
	}
}
