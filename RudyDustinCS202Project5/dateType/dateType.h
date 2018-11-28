#ifndef dateType_H
#define dateType_H

#include <iostream>
#include <string>

using namespace std;


class dateType
{
public:

    void print();
    
    int setMonth(string date);

    int setDay(string date);

    int setYear(string date);

    string convertDateToFormal(string numDate);

    string convertDateToNum(string numDate);

    dateType(string d = "");
      

private:
    string date;
    int dMonth;
    int dDay;
    int dYear;
};

#endif