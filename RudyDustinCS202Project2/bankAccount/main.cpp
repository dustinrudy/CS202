#include <iostream>
#include <string>
#include <iomanip>
#include "bankAccount.h"
#include "checkingAccount.h"
#include "checkingAccountImp.cpp"
#include "bankAccountImp.cpp" 
#include "savingsAccount.h"
#include "savingsAccountImp.cpp"
#include <cmath>

using namespace std;


int main () {

int numAccount;
char decision;
char savingsDecision; 

cout << fixed << setprecision(2);

cout << "Would you like to open a checking bank account with us? (Minimum Deposit is $25.00) (Y/N) ";
cin >> decision;

cout << endl;
cout << "Would you like to open a savings account as well? (Y/N) ";
cin >> savingsDecision;

if(decision == 'Y') {
    bool choice = false;

    bankAccount account1;
    checkingAccount checking1;
    checking1.printAccountInfo();
 
    savingsAccount savings1;
    savings1.printAccountInfo();



    do {
        char decision2;
        double amount;

        cout << "Would you like to make a deposit or withdraw? (Type 'D' / 'W' / 'N'): ";
        cin >> decision2;

        if(decision2 == 'W') {

            char decision3;

            cout << "Would you like to withdraw from your savings or checking? (S / C)"; 
            cin >> decision3;

            if(decision3 == 'C') {
                cout << "Enter amount you would like to withdraw: ";
                cin >> amount;
                checking1.withdraw(amount);

                checking1.printAccountInfo();

                decision3 = 'Y';
                 
            } else if (decision3 == 'S') {
                cout << "Enter amount you would like to withdraw: ";
                cin >> amount;
                savings1.withdraw(amount);

                savings1.printAccountInfo(); 

                decision3 = 'Y';
            }



        } else if (decision2 == 'D') {

            char decision3;

            cout << "Would you like to deposit into your savings or checking? (S / C) "; 
            cin >> decision3;

            if(decision3 == 'C') {
                cout << "Enter amount you would like to deposit: ";
                cin >> amount;
                checking1.deposit(amount);

                checking1.printAccountInfo();

                decision3 = 'Y';
                 
            } else if (decision3 == 'S') {
                cout << "Enter amount you would like to deposit: ";
                cin >> amount;
                savings1.deposit(amount);
                savings1.printAccountInfo(); 

                decision3 = 'Y';
            }
            

        } else if (decision2 == 'N') {
            choice = true;
        }

    } while(choice == false);

} else {
    exit(0);
}



return 0;

}


