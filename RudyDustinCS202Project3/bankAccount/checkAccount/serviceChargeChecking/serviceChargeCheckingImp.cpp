#include <iostream>
#include <string>
#include "../checkingAccount.h"
#include "serviceChargeChecking.h"

using namespace std;

serviceChargeChecking:: serviceChargeChecking(string n, int a, double b, int l)
    : checkingAccount(n, a, b) {
    limitNumOfChecks = l;
}