#include <iostream>
#include <string>

#include "bankAccount.h"

using namespace std;



void bankAccount::createMonthlyStatements() const {
    
    cout << endl;
    cout << "-------------------------------------";
    cout << endl;
    cout << "Account #: " << getAccountNum() << endl;
    cout << "Balance: " << getBalance() << endl;
    cout << "-------------------------------------";
    cout << endl;
}


int bankAccount::getAccountNum() const {
    return accountNum;
}


double bankAccount::getBalance() const {
    return balance;
}

double bankAccount::deposit(double num) {
    return balance = balance + num;
}

double bankAccount::withdraw(double num) {
    return balance = balance - num;
} 

bankAccount::bankAccount(string n, int a, double b) {
   
    name = n;
    accountNum = a;
    balance = b;
}




