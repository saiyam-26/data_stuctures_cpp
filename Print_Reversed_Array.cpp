#include <iostream>
using namespace std;

int main() {
    
    int size;
    cout << "Enter size of array: ";
    cin >> size;

    int arr[size];
    cout << "Enter elements of array: ";

    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    cout << "Original Array :  ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }


    cout << endl <<  "Reversed Array :  ";
    for (int i = size -1; i >= 0 ; i--) {
        cout << arr[i] << " ";
    }

    return 0;
}
