//The user program that uses the class circleType
 
#include <iostream>                                   
#include <iomanip>                                    
#include "circleType.h"
#include "cylinderType.h"    
#include "cylinderTypeImp.cpp"
#include "circleTypeImp.cpp"                       

using namespace std;                                  

int main()                                            
{                                                     
    circleType circle1(8);                            
    circleType circle2; 

    cylinderType cylinder1(4, 10);
    cylinderType cylinder2;                              

    double radius;                                   

    cout << fixed << showpoint << setprecision(2);    

    cout << "Line 11: circle1:  ";
    circle1.print();
                  

    cout << "Line 12: circle2:  ";
    circle2.print();     

    cout << "Line 29: cylinder1: ";
    cylinder1.print();

    cout << "Line 32: cylinder2: ";
    cylinder2.print();

    return 0;                                        
}
