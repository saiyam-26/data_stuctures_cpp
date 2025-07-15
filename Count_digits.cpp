#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int count = 0;
    int temp = num;

    if (temp == 0) {
        count = 1;  // special case for 0
    } else {
        while (temp != 0) {
            temp /= 10;
            count++;
        }
    }

    cout << "Number of digits in " << num << " is " << count << endl;

    return 0;
}
