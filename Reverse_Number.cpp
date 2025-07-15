#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int reversed = 0;
    

    while (num != 0) {
        int lastdigit = num % 10;
        reversed = reversed * 10 + lastdigit;
        num /= 10;
    }

    cout << "Reversed number: " << reversed << endl;

    return 0;
}
