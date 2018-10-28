#ifndef certificateOfDeposit_H
#define certificateOfDeposit_H

#include <string>
#include "../bankAccount.h"

using namespace std;

class certificateOfDeposit : public bankAccount
{
public:
    

    certificateOfDeposit(string n = "", int a = 0, double b = 0, int m = 0, int i = 0, string c = ""); 
    
private: 
    int numOfMaturityMonths;
    int interest;
    string currentCDMonth;
};





#endif