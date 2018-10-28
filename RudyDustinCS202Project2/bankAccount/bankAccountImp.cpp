#include <iostream>
#include <string>

#include "bankAccount.h"

using namespace std;



void bankAccount::printAccountInfo() const {
    
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

int bankAccount::setAccountNum() {
    accountNum = rand() % 1000000;
    return accountNum;
}

double bankAccount::getBalance() const {
    return balance;
}

double bankAccount::setBalance() {
    balance = 25.00; 
    return balance; 
}

double bankAccount::deposit(double num) {
    return balance = balance + num;
}

double bankAccount::withdraw(double num) {
    return balance = balance - num;
}

bankAccount::bankAccount(){
    setAccountNum(); 
    setBalance();
}

bankAccount::bankAccount(int a, double b) {
    a = setAccountNum();
    b = setBalance();

    accountNum = a;
    balance = b;
}




