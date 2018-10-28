#include "certificateOfDeposit.h"

#include <iostream>
#include <iomanip>



using namespace std;


certificateOfDeposit:: certificateOfDeposit(string n, int a, int b, int m, int i, string c)
    : bankAccount(n, a, b) 
    {
        numOfMaturityMonths = m;
        interest = i;
        currentCDMonth = c;
    }


