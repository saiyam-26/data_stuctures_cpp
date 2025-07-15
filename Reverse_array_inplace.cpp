#include <iostream>
using namespace std;

// Function for Reversing the array using 2 pointer approach

void Reverse_Arr(int arr[], int size){
    int start = 0;
    int end = size - 1;

    while(start < end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

int main() {
    
    int size;
    cout << "Enter size of array: ";
    cin >> size;

    int arr[size];
    cout << "Enter elements of array: ";

    // Input the array

    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    // Output the original array

    cout << "Original Array :  ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    Reverse_Arr(arr, size);
    cout << endl;


    cout << "Reversed Array :  ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    
    
    return 0;
}
