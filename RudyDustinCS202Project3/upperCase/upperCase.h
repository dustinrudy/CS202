#ifndef upperCase_H
#define upperCase_H

#include <string>

using namespace std;

class upperCase
{
public:
    void setString(string str);

    virtual void print() const;

    void convertToUpper();

    upperCase(string s = "");


private:
    string str;
    

};





#endif