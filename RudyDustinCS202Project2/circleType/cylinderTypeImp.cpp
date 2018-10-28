#include <iostream>
#include "circleType.h"
#include "cylinderType.h"
#include <iomanip> 
#include <cmath>

using namespace std;

void cylinderType::print() const {

    cout << endl;
    circleType::print();
    cout << "Height: " << getHeight() << endl;
    cout << "Surface Area: " << area() << endl;
    cout << "Volume: " << volume() << endl;
    cout << endl; 

}

void cylinderType::setDimension(double r, double h) {
    circleType::setRadius(r);

    if (h >= 0) {
        height = h;
    }  else {
        height = 0; 
    }
    
}
    

double cylinderType::getRadius() const {
    return getRadius();
}

double cylinderType::getHeight() const {
    return height;
}

double cylinderType::area() const {
    return circumference() * (height + radius);   
}

double cylinderType::volume() const {
    return 3.1416 * pow(radius, 2) * height;
}

cylinderType::cylinderType() {
    height = 0;  
}
   
cylinderType::cylinderType(double r, double h)
    : circleType(r) {
        if (h >= 0) {
            height = h;
        } else {
            height = 0;
        }

 }