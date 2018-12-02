#include <iostream>
#include <string>
#include "dateType.h"
#include "invalidDay.h"
#include "invalidMonth.h"

using namespace std;

string dateType::setMonth(string date) {
    
    string newStr;

    int i;
    i = date.find('-');
    

    dMonth = date.substr(0, i);

    newStr = date.substr(i + 1, date.length());

    return newStr;
    
}

string dateType::setDay(string date) {
    string newStr;

    int i;
    i = date.find('-');

    dDay = date.substr(0, i);

    newStr = date.substr(i + 1 , date.length());

    return newStr;
}

string dateType::setYear(string date) {
    string newStr;

    int i;
    i = date.find(date[0]);

    dYear = date.substr(i, date.length());

    newStr = dYear;

    return newStr;
}

void dateType::print() {
    cout << "User Input: " << date << endl;
    cout << "Month: " << dMonth << endl;
    cout << "Day: " << dDay << endl;
    cout << "Year: " << dYear << endl;
}


dateType::dateType(string d) {
    date = d;
    d = setMonth(d);
    d = setDay(d);
    d = setYear(d);
}