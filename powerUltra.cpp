#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter base : ";
    cin >> a;

    cout << "Enter exponent : ";
    cin >> b;

    bool flag = true; // true means power is positive

    if (b < 0) {
        flag = false; // false -> negative power
        b = -b;
    }

    float power = 1;
    for (int i = 1; i <= b; i++) {
        power = power * a;
    }

    if (flag == false) {
        power = 1 / power;
        b = -b;
    }

    cout << a << " raised to the power " << b << " is " << power << endl;

    return 0;
}
