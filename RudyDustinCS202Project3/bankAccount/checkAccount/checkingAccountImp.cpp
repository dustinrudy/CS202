#include <iostream>
#include <string>

#include "../bankAccount.h"
#include "checkingAccount.h"

using namespace std;

void checkingAccount::writeCheck(){
    
}

checkingAccount:: checkingAccount(string n, int a, double b)
    : bankAccount(n, a, b) {
    
}
