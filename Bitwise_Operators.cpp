#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "Bitwise AND (a & b): " << (a & b) << endl;
    cout << "Bitwise OR (a | b): " << (a | b) << endl;
    cout << "Bitwise XOR (a ^ b): " << (a ^ b) << endl;
    cout << "Bitwise LEFT SHIFT (a << b): " << (a << b) << " (equivalent to a * 2^b)" << endl;
    cout << "Bitwise RIGHT SHIFT (a >> b): " << (a >> b) << " (equivalent to a / 2^b)" << endl;

    return 0;
}
