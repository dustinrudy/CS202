#include <iostream>
#include <string>

#include "dayType.h"

using namespace std;


//Implementation File for the class dayType



void dayType::printDay() const {

  cout << "The day is: " << day << endl;

  cout << "Position: " << numPosition << endl;
}


void dayType::setDay(string d) {

	day = d.substr(0, 3);

	if(day == "SUN") {

		numPosition = numPosition += 0;

	} else if(day == "MON") {

		numPosition = numPosition += 1;

	} else if(day == "TUE") {

		numPosition = numPosition += 2;

	} else if(day == "WED") {

		numPosition = numPosition += 3;

	} else if(day == "THU") {

		numPosition = numPosition += 4;

	} else if(day == "FRI") {

		numPosition = numPosition += 5;

	} else if(day == "SAT") {

		numPosition = numPosition += 6;

	}

}

void dayType::returnNextDay() {


		switch (numPosition) {
			case 0: cout << "Yesterday was Saturday" << endl;
			break;
			case 1: cout << "Yesterday was Sunday" << endl;
			break;
			case 2: cout << "Yesterday was Monday" << endl;
			break;
			case 3: cout << "Yesterday was Tuesday" << endl;
			break;
			case 4: cout << "Yesterday was Wednesday" << endl;
			break;
			case 5: cout << "Yesterday was Thursday" << endl;
			break;
			case 6: cout << "Yesterday was Friday" << endl;
			break;
		}
	}

void dayType::returnPreviousDay() {
	switch (numPosition) {
			case 0: cout << "Tomorrow is Monday" << endl;
			break;
			case 1: cout << "Tomorrow is Tuesday" << endl;
			break;
			case 2: cout << "Tomorrow is Wednesday" << endl;
			break;
			case 3: cout << "Tomorrow is Thursday" << endl;
			break;
			case 4: cout << "Tomorrow is Friday" << endl;
			break;
			case 5: cout << "Tomorrow is Saturday" << endl;
			break;
			case 6: cout << "Tomorrow is Sunday" << endl;
			break;
		}
	
}







dayType::dayType(string d) {

  day = d;
}





