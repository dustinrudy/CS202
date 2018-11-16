#include <iostream>
#include "rectangleType.h"
#include "rectangleTypeImp.cpp"

using namespace std;

int main() {

rectangleType yard1(10, 20);
rectangleType yard2(10, 10);

if(yard1 > yard2) {
    cout << "yard 1 is Bigger than yard 2!" << endl;
}

yard1.setDimension(5, 5);

if(yard1 < yard2) {
    cout << "yard 1 is Smaller than yard 2!" << endl;
} 

yard2.setDimension(5, 5);

if(yard1 == yard2) {
    cout << "yard 1 is Equal to yard 2!" << endl;
}

++yard1;


cout << "Length after Pre-Increment of yard 1: " << yard1.getLength();
cout << endl;
cout << "Width after Pre-Increment of yard 1: " << yard1.getWidth();
cout << endl;


//--yard1;

/*
cout << "Length after Pre-Decrement of yard 1: " << yard1.getLength();
cout << endl;
cout << "Width after Pre-Decrement of yard 1: " << yard1.getWidth();
cout << endl;
*/

if(yard1 <= yard2) {
    cout << "yard 1 is Less Than Or Equal to yard 2!" << endl;
}

rectangleType yard3;

yard3 = yard1 - yard2;

cout << "Length of yard 3 is: " << yard3.getLength() << endl;
cout << "Width of yard 3 is: " << yard3.getWidth() << endl;

cout << "Length of yard 1 is: " << yard1.getLength() << endl;
cout << "Width of yard 1 is: " << yard1.getWidth() << endl;

if(yard3 != yard1) {
    cout << "yard 3 and yard 1 are not equal!" << endl;
}

yard3.setDimension(6, 6);

cout << "Length of yard 3 is: " << yard3.getLength() << endl;
cout << "Width of yard 3 is: " << yard3.getWidth() << endl;

if(yard3 >= yard1) {
    cout << "yard 3 is Greater than or equal to yard 1! " << endl;
}





cout << "End of Program!";



return 0;
}