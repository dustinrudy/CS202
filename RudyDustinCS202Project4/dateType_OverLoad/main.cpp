#include <iostream>
#include "dateType.h"
#include "dateType.cpp"

using namespace std;

int main() {

dateType date1;
dateType date2(10, 20, 1993);

cout << "Enter a date (w / spaces between month, day, and year): ";
cin >> date1;

cout << "date1: " << date1;
cout << "date2: " << date2;


return 0;
}