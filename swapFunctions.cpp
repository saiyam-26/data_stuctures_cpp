#include <iostream>
using namespace std;

// Function to swap using reference
void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int x, y;

    cout << "Enter two numbers: ";
    cin >> x >> y;

    cout << "Before swapping: x = " << x << ", y = " << y << endl;

    swap(x, y); // Pass by reference

    cout << "After swapping:  x = " << x << ", y = " << y << endl;

    return 0;
}
