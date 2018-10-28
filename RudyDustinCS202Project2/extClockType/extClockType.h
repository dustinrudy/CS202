#ifndef extClockType_H
#define extClockType_H

#include "clockType.h"
#include <iostream> 

using namespace std;


class extClockType : public clockType
{
public:

    void setTime(int hours, int minutes, int seconds);

    void getTime(int& hours, int& minutes, int& seconds) const;

    void printTime() const;

    void incrementSeconds();

    void incrementMinutes();

    void incrementHours();
    
    bool equalTime(const extClockType& otherClock) const;
    
    extClockType();

    extClockType(int hours, int minutes, int seconds);
     
private: 

};

#endif