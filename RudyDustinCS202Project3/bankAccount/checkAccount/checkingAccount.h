#ifndef checkingAccount_H
#define checkingAccount_H

#include <string>
#include "../bankAccount.h"

using namespace std;

class checkingAccount : public bankAccount
{
public:
    
    virtual void writeCheck();

    checkingAccount(string n = "", int a = 0, double b = 0); 
    

};





#endif