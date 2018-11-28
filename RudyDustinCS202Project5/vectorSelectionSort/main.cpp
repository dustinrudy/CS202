
#include <iostream>
#include <string>
#include <vector>

using namespace std;


void printList(const vector<string> &list);

int main() {

    vector<string> stringList;
    int arraySize;

    stringList.push_back("Dustin");
    stringList.push_back("Kayla");
    stringList.push_back("Ben");
    stringList.push_back("Tyrell");
    stringList.push_back("Rami");
    stringList.push_back("Angela");


    cout << endl;
    cout << "Unsorted List: " << endl;
    printList(stringList);

    sort(stringList.begin(), stringList.end());

    cout << endl;
    cout << endl;
    cout << "Sorted List: " << endl;
    printList(stringList);




    return 0;
}


void printList(const vector<string> &list){

    for(int i = 0; i < list.size(); i++) {
        cout << "----------------------------";
        cout << endl;
        cout << list[i]; 
        cout << endl;
        cout << "----------------------------";
    }
}
