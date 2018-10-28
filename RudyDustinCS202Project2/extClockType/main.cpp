//The user program that uses the class clockType
   
#include <iostream>
#include "clockType.h"
#include "extClockType.h"
#include "clockTypeImp.cpp"
#include "extClockTypeImp.cpp"
  
using namespace std; 

int main()
{
    extClockType clock1;
    extClockType clock2;  

    int hours;
    int minutes;
    int seconds;

    //Set the time of clock1
    clock1.setTime(5, 4, 30);                        

    cout << "clock1: ";                       
    clock1.printTime();  
    cout << endl;                                                                     

    //Set the time of clock2
    clock2.setTime(5, 4, 30);                     

    cout << "clock2: ";      
    clock2.printTime(); 
    cout << endl;                                      

        //Compare clock1 and clock2
    if (clock1.equalTime(clock2))                  
        cout << "Both times are equal."
             << endl;                                  
    else                                               
        cout << "The two times are not equal."
             << endl;                                  

    cout << "Enter the hours, minutes, and "
         << "seconds for clock1: ";                              
    cin >> hours >> minutes >> seconds;                
    cout << endl;                                      

    //Set the time of clock1 using the value of the
    //variables hours, minutes, and seconds
    clock1.setTime(hours, minutes, seconds);  

     cout << "Enter the hours, minutes, and "
         << "seconds for clock2: ";                              
    cin >> hours >> minutes >> seconds;                
    cout << endl;    

    clock2.setTime(hours, minutes, seconds);  

    cout << "New clock1: ";                 
    clock1.printTime();  
    cout << endl;  


    cout << "New clock2: ";                 
    clock2.printTime();  
    cout << endl;  

    if (clock1.equalTime(clock2))                  
        cout << "Both times are equal."
             << endl;                                  
    else                                               
        cout << "The two times are not equal."
             << endl;                                               
                                                                         

    clock1.getTime(hours, minutes, seconds);          
    cout << "Clock 1: Hours = " << hours 
         << ", Minutes = " << minutes 
         << ", Seconds = " << seconds << endl;  

    clock2.getTime(hours, minutes, seconds);    
     cout << "Clock 2: Hours = " << hours 
         << ", Minutes = " << minutes 
         << ", Seconds = " << seconds << endl;     

    return 0;
}//end main



