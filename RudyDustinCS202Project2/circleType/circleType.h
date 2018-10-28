#ifndef circleType_H
#define circleType_H

#include <string>

using namespace std;

class circleType
{
public:

    void print() const;

    void setRadius(double r);
      //Function to set the radius.
      //Postcondition: if (r >= 0) radius = r;
      //               otherwise radius = 0;

    double getRadius() const;
      //Function to return the radius.
      //Postcondition: The value of radius is returned.

    double area() const;
      //Function to return the area of a circle.
      //Postcondition: Area is calculated and returned.

    double circumference() const;
      //Function to return the circumference of a circle.
      //Postcondition: Circumference is calculated and returned.

    circleType();

    circleType(double r);
      //Constructor with a default parameter.
      //Radius is set according to the parameter.
      //The default value of the radius is 0.0;
      //Postcondition: radius = r;
      

protected:
    double radius; 
};

#endif