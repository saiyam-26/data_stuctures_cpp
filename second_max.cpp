#include <iostream>
#include <climits>
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

    int max = INT_MIN;
    int smax = INT_MIN;

    // Find maximum element
    for (int i = 0; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    // Find second maximum element
    for (int i = 0; i < size; i++) {
        if (arr[i] > smax && arr[i] < max) {
            smax = arr[i];
        }
    }

    if (smax == INT_MIN) {
        cout << "No second maximum in the array." << endl;
    } else {
        cout << "Second maximum: " << smax << endl;
    }

    return 0;
}
