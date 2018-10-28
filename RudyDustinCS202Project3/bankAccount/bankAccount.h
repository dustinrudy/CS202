#ifndef bankAccount_H
#define bankAccount_H

#include <string>

using namespace std;

class bankAccount {
    public: 

        string getName() const;

        int getAccountNum() const;

        double getBalance() const;

        virtual double deposit(double num);

        virtual double withdraw(double num);
        
        virtual void createMonthlyStatements() const;

        bankAccount(string n = "", int a = 0, double b = 0);

        //~bankAccount();
    

    private: 
        string name;
        int accountNum;
        double balance;

};

#endif