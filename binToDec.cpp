#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter the Binary Number: ";
    cin >> num;
    cout << endl;

    int ans = 0;
    int power = 1;

    while (num > 0) {
        int lastDigit = num % 10;
        ans += lastDigit * power;
        power *= 2;
        num /= 10; 
    }

    cout << "Decimal Number = " << ans << endl;

    return 0;
}
