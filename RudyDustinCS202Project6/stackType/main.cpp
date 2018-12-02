#include <iostream>
#include "stackADT.h"
#include "stackType.h"

using namespace std;

int main() {


    int length;

    cout << "Enter the length of the first stack: ";
    cin >> length;
    
    stackType<int> stack1(length);

    for(int i = 0; i < length; i++) {
        stack1.push(i);
        
    }

    cout << "Enter the length of the second stack: ";
    cin >> length;

    stackType<int> stack2(length);

    for(int i = 0; i < length; i++) {
        int n = i * 2;
        stack2.push(n);
    }

    cout << endl;
    cout << endl;
    cout << "First Stack: ";
    cout << endl;
    stack1.print();
    cout << endl;
    cout << endl;

    cout << endl;

    cout << "Second Stack: ";
    cout << endl;
    stack2.print();
    cout << endl;
    cout << endl;

    if(stack1 == stack2) {
        cout << "Stacks 1 and 2 are the same!" << endl;
    } else {
        cout << "Stacks 1 and 2 are not the same!" << endl;
    }



    stackType<int> stack3(length);

    for(int i = 0; i < length; i++) {
        int n = i * 2;
        stack3.push(n);
    }

    cout << endl;
    cout << "Second Stack: ";
    cout << endl;
    stack2.print();
    cout << endl;
    cout << endl;

    cout << endl;
    cout << "Third Stack: ";
    cout << endl;
    stack2.print();
    cout << endl;
    cout << endl;

    if(stack2 == stack3) {
        cout << "Stacks 2 and 3 are the same!" << endl;
    } else {
        cout << "Stacks 2 and 3 are not the same!" << endl;
    }


    return 0;
}