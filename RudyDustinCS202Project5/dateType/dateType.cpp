#include <iostream>
#include <string>
#include "dateType.h"
#include "invalidDay.h"
#include "invalidMonth.h"

using namespace std;

int dateType::setMonth(string date) {

    for(int i = 0; i < date.length(); i++) {
        if (date[i] == '-') {
            break;
        }
    }
    return dMonth;
}

int dateType::setDay(string date) {
    int day;
    for(int i = 0; i < date.length(); i++) {
        dDay = date[2] + date[3];
    }
    return dDay;
}

int dateType::setYear(string date) {
    int year;
    for(int i = 0; i < date.length(); i++) {
        dYear = date[4]++;
    }
    return dYear;
}

void dateType::print() {
    cout << "User Input: " << date << endl;
    cout << "Month: " << dMonth << endl;
    cout << "Day: " << dDay << endl;
    cout << "Year: " << dYear << endl;
}


dateType::dateType(string d) {
    date = d;
    setMonth(d);
    setDay(d);
    setYear(d);
}