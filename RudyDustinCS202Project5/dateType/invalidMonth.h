
#ifndef invalidMonth_H
#define invalidMonth_H

#include <iostream>
#include <string>

using namespace std;


class invalidMonth {
public: 
    invalidMonth() {
        message = "The Month is invalid!";
    }

    invalidMonth(string str) {
        message = str + " is an invalid Month!";
    }

    string what(){
        return message;
    }

private:
    string message;
};

#endif