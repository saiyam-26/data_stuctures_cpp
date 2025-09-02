#include<iostream>
using namespace std;

int main() {
    int a, b, temp;

    // Input section
    cout << "Enter the first number (a): ";
    cin >> a;
    cout << "Enter the second number (b): ";
    cin >> b;

    // Before swap output
    cout << "Before swapping:\n";
    cout << "a = " << a << ", b = " << b << endl;

    // Swapping logic
    temp = a;
    a = b;
    b = temp;

    // After swap output
    cout << "After swapping:\n";
    cout << "a = " << a << ", b = " << b << endl;

    return 0;
}
