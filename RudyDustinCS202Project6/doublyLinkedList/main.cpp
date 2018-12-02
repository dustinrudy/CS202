//Program to test various operations on a doubly linked list
  
#include <iostream>
#include "doublyList.h" 
#include "personType.h" 
#include "personType.cpp"
 
using namespace std;  

int main()
{
    doublyLinkedList<personType> listOfPeople;

    listOfPeople.initializeList();

    personType person1("Dustin", "Rudy");

    personType person2("Kayla", "Langley");

    personType person3("EJ", "Rudy");
	
    listOfPeople.insert(person1);
    listOfPeople.insert(person2);
    listOfPeople.insert(person3);


    listOfPeople.print();
    cout << endl;
    cout << "Length of List is: " << listOfPeople.length();
    cout << endl;

    bool found; 
    personType person;

    cout << "Is there a person you are searching for? (Enter First and Last): ";
    cin >> person;

    found = listOfPeople.search(person); 

    if(found) {
        cout << "Search Results: " << endl << person << endl;
        cout << "------------" << endl;
    } else if(!found) {
        cout << "This person is not in the list!" << endl;
    }

    listOfPeople.deleteNode(person3);

    listOfPeople.print();

    cout << endl;
    cout << "Length of List is: " << listOfPeople.length();
    cout << endl;

    listOfPeople.destroy();

    if(listOfPeople.isEmptyList()) {
        cout << endl;
        cout << "The List has been destroyed!" << endl;
    }


return 0;

}