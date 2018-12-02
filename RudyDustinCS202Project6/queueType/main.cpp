#include <iostream>
#include "queueADT.h"
#include "queueAsArray.h"

using namespace std;

int main() {


    queueType<int> queue;
    int x, y;

    queue.initializeQueue(); 
    x = 4;
    y = 5;
    queue.addQueue(x);
    queue.addQueue(y);
    x = queue.front(); 
    queue.deleteQueue();
    queue.addQueue(x + 5);
    queue.addQueue(16);
    queue.addQueue(x);
    queue.addQueue(y - 3);

    queueType<int> queue2;

    queue2 = queue;


    cout << "Queue Elements for queue: ";

    while (!queue.isEmptyQueue())
    {
        cout << " " << queue.front();
        queue.deleteQueue();	
    }

    cout << endl;
    cout << endl;

    cout << "Queue Elements for queue2: ";

    while (!queue2.isEmptyQueue())
    {
        cout << " " << queue2.front();
        queue2.deleteQueue();	
    }
    

    cout << endl;



    return 0;
}