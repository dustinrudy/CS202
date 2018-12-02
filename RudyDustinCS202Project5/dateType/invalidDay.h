#ifndef invalidDay_H
#define invalidDay_H

#include <iostream>
#include <string>

using namespace std;


class invalidDay {
public: 
    invalidDay() {
        message = "The day is invalid!";
    }

    invalidDay(string str) {
        message = str + " is an invalid day!";
    }

    string what(){
        return message;
    }

private:
    string message;
};

#endif