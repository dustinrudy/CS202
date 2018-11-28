
#include <iostream>

using namespace std;

int sumOfIntArray(int numArr[], int n);

int main() {

    int IntArray1[] = {5, 1, 2, 5, 6, 9, 10};
    int n1 = sizeof(IntArray1) / sizeof(IntArray1[0]);

    int IntArray2[] = {4, 2, 0, 4, 2, 5, 10};
    int n2 = sizeof(IntArray2) / sizeof(IntArray2[0]);

    int IntArray3[] = {2, 12, 20};
    int n3 = sizeof(IntArray3) / sizeof(IntArray3[0]);

    cout << "Sum of the IntArray1 is: " << sumOfIntArray(IntArray1, n1) << endl;
    cout << "Sum of the IntArray2 is: " << sumOfIntArray(IntArray2, n2) << endl;
    cout << "Sum of the IntArray3 is: " << sumOfIntArray(IntArray3, n3) << endl;

    return 0;
}


int sumOfIntArray(int numArr[], int n) {
    if (n <= 0) {
        return 0;
    } else {
        return (sumOfIntArray(numArr, n - 1) + numArr[n - 1]);
    }
}