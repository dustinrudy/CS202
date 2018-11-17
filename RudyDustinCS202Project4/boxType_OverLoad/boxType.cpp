#include <iostream>
#include "rectangleType.h"
#include "boxType.h" 
  
using namespace std; 

ostream& operator << (ostream& osObject, 
                      const boxType& box)
{
    osObject << "Length = "  << box.length 
             << "; Width = " << box.width
             << "; Height = " << box.height;

    return osObject;
}

istream& operator >> (istream& isObject, 
                      boxType& box)
{
    isObject >> box.length >> box.width >> box.height;

    return isObject;
}


boxType boxType::operator++(){
    length++;
    width++;
    height++;

    return *this;
}

boxType boxType::operator--(){
    if(length && width && height >= 0) {
        length--;
        width--;
        height--;
    }
    return *this;
}

bool boxType::operator==(const boxType& otherBox) const {
    return (volume() == otherBox.volume());
}

bool boxType::operator!=(const boxType& otherBox) const {
    return(volume() != otherBox.volume());
}

bool boxType::operator<(const boxType& otherBox) const {
    return(volume() < otherBox.volume());
}

bool boxType::operator<=(const boxType& otherBox) const {
    return (volume() <= otherBox.volume());
} 

bool boxType::operator>(const boxType& otherBox) const {
    return (volume() > otherBox.volume());
}

bool boxType::operator>=(const boxType& otherBox) const {
    return (volume() >= otherBox.volume());
}

boxType boxType::operator+(const boxType& otherBox) const {
    boxType tempBox;
    
    if(length && width >= 0) {
        tempBox.length = length + otherBox.length;
        tempBox.width = width + otherBox.width;
        tempBox.height = height + otherBox.height;
    }

    return tempBox;

}

boxType boxType::operator-(const boxType& otherBox) const {
    boxType tempBox;
    
    if(length && width > 0) {
        tempBox.length = length - otherBox.length;
        tempBox.width = width - otherBox.width;
        tempBox.height = height - otherBox.height;
    }

    return tempBox;

}

boxType boxType::operator*(const boxType& otherBox) const {
    boxType tempBox;
    
    if(length && width >= 0) {
        tempBox.length = length * otherBox.length;
        tempBox.width = width * otherBox.width;
        tempBox.height = height * otherBox.height;
    }

    return tempBox;

}

void boxType::setDimension(double l, double w, double h)
{
    rectangleType::setDimension(l, w);

    if (h >= 0)
        height = h;
    else
        height = 0;
}

double boxType::getHeight() const
{
    return height;
}

double boxType::area() const
{
    return  2 * (getLength() * getWidth()
               + getLength() * height 
               + getWidth() * height);
}

double boxType::volume() const
{
    return rectangleType::area() * height;
}

void boxType::print() const
{
    rectangleType::print();
    cout << "; Height = " << height;
}

boxType::boxType()	
{
    height = 0.0;
}

boxType::boxType(double l, double w, double h)
         : rectangleType(l, w)
{ 
    if (h >= 0)
        height = h;
    else
        height = 0;
}
