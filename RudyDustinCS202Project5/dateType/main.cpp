#include <iostream>
#include <string>

#include "dateType.h"
#include "dateType.cpp"

using namespace std;


int main() {

string date;
cout << "Enter a date of birth (8-27-1980): ";
cin >> date;

dateType date1(date);

date1.print();

cout << "End of Program!";



return 0;
}