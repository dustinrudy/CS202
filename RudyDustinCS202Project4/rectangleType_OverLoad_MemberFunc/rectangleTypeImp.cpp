#include <iostream>
#include "rectangleType.h" 

using namespace std; 


rectangleType rectangleType::operator++(){
    length++;
    width++;

    return *this;
}

rectangleType rectangleType::operator--(){
    if(length && width > 0) {
        length--;
        width--;
    }
    return *this;
}

bool rectangleType::operator==(const rectangleType& otherRectangle) const {
    return (area() == otherRectangle.area());
}

bool rectangleType::operator!=(const rectangleType& otherRectangle) const {
    return(area() != otherRectangle.area());
}

bool rectangleType::operator<(const rectangleType& otherRectangle) const {
    return(area() < otherRectangle.area());
}

bool rectangleType::operator<=(const rectangleType& otherRectangle) const {
    return (area() <= otherRectangle.area());
} 

bool rectangleType::operator>(const rectangleType& otherRectangle) const {
    return (area() > otherRectangle.area());
}

bool rectangleType::operator>=(const rectangleType& otherRectangle) const {
    return (area() >= otherRectangle.area());
}

rectangleType rectangleType::operator-(const rectangleType& otherRectangle) const {
    rectangleType tempRect;
    
    if(length && width > 0) {
        tempRect.length = length - otherRectangle.length;
        tempRect.width = width - otherRectangle.width;
    } else {
        cout << "Number cannot be negative";
    }

    return tempRect;

}


 
void rectangleType::setDimension(double l, double w)
{
    if (l >= 0)
        length = l;
    else
        length = 0;

    if (w >= 0)
        width = w;
    else
        width = 0;
}

double rectangleType::getLength() const
{
    return length;
}

double rectangleType::getWidth()const
{
    return width;
}

double rectangleType::area() const
{
    return length * width;
}

double rectangleType::perimeter() const
{
     return 2 * (length + width);
}

void rectangleType::print() const
{
    cout << "Length = "  << length
         << "; Width = " << width;
}

rectangleType::rectangleType(double l, double w)
{
    setDimension(l, w);
}

rectangleType::rectangleType()
{
    length = 0;
    width = 0;
}

