#ifndef bankAccount_H
#define bankAccount_H

#include <string>

using namespace std;

class bankAccount {
    public: 

        int getAccountNum() const;

        int setAccountNum();

        double getBalance() const;

        double setBalance(); 

        double deposit(double num);

        double withdraw(double num);
        
        void printAccountInfo() const;

        bankAccount();

        bankAccount(int a, double b);

        //~bankAccount();
    

    protected: 
        int accountNum;
        double balance;

};

#endif