#include <iostream>
#include <string>

#include "bankAccount.h"
#include "checkingAccount.h"

using namespace std;

void checkingAccount::printAccountInfo() const {
    bankAccount::printAccountInfo();
    cout << "-------------------------------------";
    cout << endl;
    cout << "Checking Account #: " << getAccountNum() << endl;
    cout << "Checking Balance: " << "$" << verifyBalance() << endl;
    cout << "Interest Rate: " << getInterestRate() << "%" << endl;
    cout << "Interest Per Year: " << "$" << postInterest() << endl;
    cout << "Minimum Balance: " << "$" << getMinimumBalance() << endl;
    cout << "Service Charges: " << "$" << getServiceFee() << endl;
    cout << "-------------------------------------"; 
    cout << endl;
}

void checkingAccount::setInterestRate() {
    interest = 0.0005;
}

double checkingAccount::getInterestRate() const {
    return interest * 100;
}

void checkingAccount::setServiceFee() {
    serviceFee = 15.00;
}

double checkingAccount::getServiceFee() const {
    return serviceFee; 
}

void checkingAccount::setMinimumBalance() {
    minBalance = 1000.00;
}

double checkingAccount::getMinimumBalance() const {
    return minBalance;
}

double checkingAccount::deposit(double n) {
    return balance = balance + n;
}

double checkingAccount::withdraw(double n) {
    return balance = balance - n;
}

double checkingAccount::postInterest() const {

    return balance * interest * 1;
}

double checkingAccount::verifyBalance() const {
    double n;
    double s;
    n = balance;
    s = getServiceFee();
     if(n >= minBalance) {
        return n - 15; 
    } else {
        return n - s;   
    }
}

checkingAccount::checkingAccount(){
    accountNum = getAccountNum();
    balance = getBalance();
    setInterestRate();
    setMinimumBalance();
    setServiceFee(); 
}

checkingAccount::checkingAccount(int a, double b, double i, double m, double s) {
     accountNum = a; 
     balance = b;
     interest = i;
     minBalance = m;
     serviceFee = s;
     
}

