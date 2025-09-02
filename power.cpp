#include <iostream>
using namespace std;

int main() {
    int base, exponent, ans = 1;

    cout << "Enter the base: ";
    cin >> base;

    cout << "Enter the exponent: ";
    cin >> exponent;

    for (int i = 1; i <= exponent; i++) {
        ans *= base;
    }

    cout << base << " raised to the power " << exponent << " = " << ans << endl;

    return 0;
}
