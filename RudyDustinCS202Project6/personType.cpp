//personTypeImp.cpp
    
#include <iostream> 
#include <string>
#include "personType.h"

using namespace std;

void personType::print() const
{
    cout << firstName << " " << lastName;
}

void personType::setName(string first, string last)
{
    firstName = first;
    lastName = last;
}

string personType::getFirstName() const
{
    return firstName;
}

string personType::getLastName() const
{
    return lastName;
}

bool operator==(const personType& firstPerson,
                const personType& secondPerson)
{
    return (firstPerson.firstName == secondPerson.firstName && 
            firstPerson.lastName == secondPerson.lastName);
}


bool operator!=(const personType& firstPerson,
                const personType& secondPerson)
{
    return (firstPerson.firstName != secondPerson.firstName ||
            firstPerson.lastName != secondPerson.lastName);
}

bool operator<=(const personType& firstPerson, const personType& secondPerson) {
    return ((firstPerson.firstName <= firstPerson.firstName) && (secondPerson.lastName <= secondPerson.lastName));
}

bool operator<(const personType& firstPerson, const personType& secondPerson) {
    return ((firstPerson.firstName < firstPerson.firstName) && (secondPerson.lastName < secondPerson.lastName));
}

bool operator>=(const personType& firstPerson, const personType& secondPerson) {
    return ((firstPerson.firstName >= firstPerson.firstName) && (secondPerson.lastName >= secondPerson.lastName));
}

bool operator>(const personType& firstPerson, const personType& secondPerson) {
    return ((firstPerson.firstName > firstPerson.firstName) && (secondPerson.lastName > secondPerson.lastName));
}

ostream& operator << (ostream& osObject, 
                      const personType& person)
{
    osObject << endl << "First Name = "  << person.firstName
             << "; Last Name = " << person.lastName << endl;

    return osObject;
}

istream& operator >> (istream& isObject, 
                      personType& person)
{
    isObject >> person.firstName >> person.lastName;

    return isObject;
}

    //constructor
personType::personType(string first, string last) 

{ 
    firstName = first;
    lastName = last;
}

