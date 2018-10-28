#include <iostream>
#include <string>
#include <iomanip>
#include "upperCase.h"
#include "upperCaseImp.cpp"

using namespace std;


int main() {

    upperCase *strPtr;

    strPtr = new upperCase("DuStIn");
    strPtr->convertToUpper();
    strPtr->print();

    strPtr->setString("kayla");
    strPtr->convertToUpper();
    strPtr->print();

    strPtr->setString("steve");
    strPtr->convertToUpper();
    strPtr->print(); 
    


    

    

return 0;
}




