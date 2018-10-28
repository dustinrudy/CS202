#include <iostream>
#include <string>

#include "bankAccount.h"
#include "savingsAccount.h" 

using namespace std;

void savingsAccount::printAccountInfo() const {
    bankAccount::printAccountInfo();
    cout << "-------------------------------------";
    cout << endl;
    cout << "Savings Account #: " << getAccountNum() << endl;
    cout << "Savings Balance: " << "$" << verifyBalance() << endl;
    cout << "Interest Rate: " << getInterestRate() << "%" << endl;
    cout << "Interest Per Year: " << "$" << postInterest() << endl;
    cout << "Minimum Balance: " << "$" << getMinimumBalance() << endl;
    cout << "Service Charges: " << "$" << getServiceFee() << endl;
    cout << "-------------------------------------"; 
    cout << endl;
}

void savingsAccount::setInterestRate() {
    interest = 0.0005;
}

double savingsAccount::getInterestRate() const {
    return interest * 100;
}

void savingsAccount::setServiceFee() {
    serviceFee = 25.00;
}

double savingsAccount::getServiceFee() const {
    return serviceFee; 
}

void savingsAccount::setMinimumBalance() {
    minBalance = 500.00;
}

double savingsAccount::getMinimumBalance() const {
    return minBalance;
}

double savingsAccount::deposit(double n) {
    return balance = balance + n;
}

double savingsAccount::withdraw(double n) {
    return balance = balance - n;
}

double savingsAccount::postInterest() const {

    return balance * interest * 1;
}

double savingsAccount::verifyBalance() const {
    double n;
    double s;
    n = balance;
    s = getServiceFee();
     if(n >= minBalance) {
        return n - 25; 
    } else {
        return n - s;   
    }
}

savingsAccount::savingsAccount(){
    accountNum = getAccountNum();
    balance = getBalance();
    setInterestRate();
    setMinimumBalance();
    setServiceFee(); 
}

savingsAccount::savingsAccount(int a, double b, double i, double m, double s) {
     accountNum = a; 
     balance = b;
     interest = i;
     minBalance = m;
     serviceFee = s;
     
}
