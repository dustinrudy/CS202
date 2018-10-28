#ifndef savingsAccount_H
#define savingsAccount_H

#include <string>
#include "bankAccount.h"

using namespace std;

class savingsAccount : public bankAccount
{
public:
    
    void printAccountInfo() const;

    void setInterestRate();

    double getInterestRate() const;

    void setServiceFee();

    double getServiceFee() const;

    void setMinimumBalance();

    double getMinimumBalance() const;

    double postInterest() const;

    double withdraw(double n);

    double deposit(double n);

    double verifyBalance() const;
    
    savingsAccount();

    savingsAccount(int a, double b, double i, double m, double s);
     


private:
    double interest;
    double minBalance;
    double serviceFee;

};





#endif