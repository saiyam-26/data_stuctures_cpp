#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements:\n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int evenSum = 0;
    int oddSum = 0;

    for(int i = 0; i < n; i++) {
        if(i % 2 == 0)
            evenSum += arr[i];  // Index is even
        else
            oddSum += arr[i];   // Index is odd
    }

    int diff = evenSum - oddSum;

    cout << "Sum at even indices: " << evenSum << endl;
    cout << "Sum at odd indices: " << oddSum << endl;
    cout << "Difference (even - odd): " << diff << endl;

    return 0;
}
