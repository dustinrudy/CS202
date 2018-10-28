#ifndef serviceChargeChecking_H
#define serviceChargeChecking_H

#include <string>
#include "../checkingAccount.h"

using namespace std;

class serviceChargeChecking : public checkingAccount
{
public:
    
    

    serviceChargeChecking(string n = "", int a = 0, double b = 0, int l = 0); 
    
private: 
    int limitNumOfChecks;
};





#endif