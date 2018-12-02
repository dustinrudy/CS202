#ifndef dateType_H
#define dateType_H

#include <iostream>
#include <string>

using namespace std;


class dateType
{
public:

    void print();
    
    string setMonth(string date);

    string setDay(string date);

    string setYear(string date);

    string convertDateToFormal(string numDate);

    string convertDateToNum(string numDate);

    dateType(string d = "");
      

private:
    string date;
    string dMonth;
    string dDay;
    string dYear;
};

#endif