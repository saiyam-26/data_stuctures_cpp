#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a Decimal Number: ";
    cin >> num;
    cout << endl;

    int binary = 0, place = 1;

    while (num > 0) {
        int rem = num % 2;
        binary += rem * place;
        place *= 10;
        num /= 2;
    }

    cout << "Binary Number = " << binary << endl;

    return 0;
}
