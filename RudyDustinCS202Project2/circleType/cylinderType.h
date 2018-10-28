#ifndef cylinderType_H
#define cylinderType_H

#include <string>
#include "circleType.h"

using namespace std;

class cylinderType : public circleType
{
public:

    void print() const;

    void setDimension(double r, double h);
      //Function to set the radius.
      //Postcondition: if (r >= 0) radius = r;
      //               otherwise radius = 0;

    double getRadius() const;
      //Function to return the radius.
      //Postcondition: The value of radius is returned.

    double getHeight() const;

    double area() const;
      //Function to return the surface area of a cylinder.
      //Postcondition: Area is calculated and returned.

    double volume() const;
      //Function to return the volume of the cylinder. 
      //Postcondition: The volume of the cylinder is 
      //               calculated and returned..

    cylinderType();

    cylinderType(double r, double h);
      //Constructor with a default parameter.
      //Radius is set according to the parameter.
      //The default value of the radius is 0.0;
      //Postcondition: radius = r;
      

private:
    double height;
};

#endif