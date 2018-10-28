 
//Implementation File for the class circleType
 
#include <iostream>
#include "circleType.h"
#include <iomanip> 

using namespace std;


void circleType::print() const {
    cout << endl;
    cout << fixed << showpoint << setprecision(2);
    cout << "Radius: " << getRadius() << endl;
    cout << "Area: " << area() << endl;
    cout << "Circumference: " << circumference() << endl;
    cout << endl; 
}

void circleType::setRadius(double r) {
    if (r >= 0)
        radius = r;
    else
        radius = 0;
}

double circleType::getRadius() const {
    return radius;
}

double circleType::area() const {
    return 3.1416 * radius * radius;
}

double circleType::circumference() const {

    return 2 * 3.1416 * radius;
}

circleType::circleType() {
    radius = 0;
}

circleType::circleType(double r){
    setRadius(r);
}
