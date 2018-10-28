#include "upperCase.h"
#include <string>
#include <iostream>

void upperCase::setString(string s) {
    str = s;
}

void upperCase::convertToUpper() {
    for(int i = 0; i < str.length(); i++) {
        str[i] = toupper(str[i]);
    }
}

void upperCase::print() const {
    cout << endl;
    cout << str; 
    cout << endl;
}
upperCase::upperCase(string s) {
    str = s;
}
