#include <iostream>
#include "rectangleType.h"
#include "rectangleType.cpp"
#include "boxType.h"
#include "boxType.cpp"

using namespace std;

int main() {

boxType box1(5, 5, 5);
boxType box2(5, 5, 5);

cout << endl;

cout << "box1: " << box1;
cout << endl;
cout << "box2: " << box2;
cout << endl;


if (box1 == box2) {
    cout << "Both Boxes are Equal";
    cout << endl;
}

box1.setDimension(2, 2, 2);

cout << endl;

cout << "box1: " << box1;
cout << endl;

if(box1 < box2) {
    cout << "Box1 is smaller than Box2";
    cout << endl;
}

if(box2 > box1) {
    cout << "Box2 is larger than Box1";
    cout << endl;
}

cout << "Enter new dimensions for box2: ";
cin >> box2;

cout << "box2: " << box2;
cout << endl;

if(box2 != box1) {
    cout << "These Boxes are Not Equal";
    cout << endl;
} else {
    cout << "These Boxes are Equal";
    cout << endl;
}

boxType box3;

cout << endl; 

cout << "Addition of box1 and box2: " << endl;
box3 = box1 + box2;
cout << "box3: " << box3;
cout << endl;

boxType box4;

cout << endl;
cout << "Multiplaction of box1 and box2: " << endl;
box4 = box1 * box2;
cout << "box4: " << box4;
cout << endl;

boxType box5;
cout << endl;
cout << "Subtraction of box2 from box1: " << endl;
box5 = box2 - box1;
cout << "box5: " << box5;
cout << endl;


cout << endl;
cout << "Increment of box1: " << endl;
++box1;
cout << "box1: " << box1;
cout << endl;

cout << endl;
cout << "Decrement of box2: " << endl;

--box2;
cout << "box2: " << box2;
cout << endl;


cout << "End of Program!";

return 0;

}