#include <iostream>
 
using namespace std; 
 
const int ARRAYSIZE = 10;
  
int binarySearch(const int list[], int listLength, int searchItem);
void bubbleSort(int list[], int length);

int main()
{
    int list[] = {20, 36, 24, 65, 78, 45, 58, 90, 2, 15};  
    int inputNumber;

    cout << "Unsorted List: " << endl;

    for(int i = 0; i < ARRAYSIZE; i++) {
        cout << list[i] << " ";
    };

    cout << endl;

    bubbleSort(list, ARRAYSIZE);

    cout << endl;
    cout << "After BubbleSort: " << endl;

     for(int i = 0; i < ARRAYSIZE; i++) {
        cout << list[i] << " ";
    };

    cout << endl;
    cout << endl;
    cout << "Which number are you looking for?: ";
    cin >> inputNumber;

    int result; 
    
    result = binarySearch(list, ARRAYSIZE, inputNumber);

    cout << endl;
    cout << endl;
    cout << "Search Results: " << endl;

    if(result == 0) {
        cout << list[result] << " is the " << result + 1 << "st number in the array list" << endl;
    } else if (result == 1) {
        cout << list[result] << " is the " << result + 1 << "nd number in the array list" << endl;
    } else if (result == 2) {
        cout << list[result] << " is the " << result + 1 << "rd number in the array list" << endl;
    } else if(result >= 3) {
        cout << list[result] << " is the " << result + 1 << "th number in the array list" << endl;
    } else if(result == -1) {
        cout << "Could not find the number in the array list";
    }




	return 0;                                             
}

void bubbleSort(int list[], int length)
{
    int temp;

    for (int iteration = 1; iteration < length; iteration++)
    {
        for (int index = 0; index < length - iteration; index++)
            if (list[index] > list[index + 1]) 
            {
                temp = list[index];
                list[index] = list[index + 1];
                list[index + 1] = temp;
            }
    }
}

int binarySearch(const int list[], int listLength, int searchItem) 
{
    int first = 0;
    int last = listLength - 1;
    int mid;

    bool found = false;

    while (first <= last && !found)
    {
        mid = (first + last) / 2;

        if (list[mid] == searchItem)
            found = true;
        else if (list[mid] > searchItem)
            last = mid - 1;
        else
            first = mid + 1;
    }

    if (found) 
        return mid;
    else
        return -1;
}