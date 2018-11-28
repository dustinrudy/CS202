#include <iostream>
#include <cmath> 

using namespace std;

int sumOfSquares(int n);

int main() {

    int two;
    int three;
    int four;
    int five;
    int six;

    two = sumOfSquares(2);
    three = sumOfSquares(3);
    four = sumOfSquares(4);
    five = sumOfSquares(5);
    six = sumOfSquares(6);

    cout << "Sum of Squares up to 2: " << two << endl;
    cout << "Sum of Squares up to 3: " << three << endl;
    cout << "Sum of Squares up to 4: " << four << endl;
    cout << "Sum of Squares up to 5: " << five << endl;
    cout << "Sum of Squares up to 6: " << six << endl;

return 0; 
}

int sumOfSquares(int n) {
    if(n <= 0) {
        return n = pow(n, 2);

    } else {
        return pow(n, 2) + sumOfSquares(n - 1);
    }

}