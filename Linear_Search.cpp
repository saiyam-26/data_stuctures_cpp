#include<iostream>
using namespace std;

int LinearSearch(int arr[], int size, int target){
    for(int i = 0; i < size; i++){
        if(arr[i] == target) return i;
    }

    return -1;
}

int main(){

    int size;
    cout << "Enter the size of Array : ";
    cin >> size;
    cout << endl;

    int arr[size];
    cout << "Enter the Elements of Array : ";

    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }
    cout << endl;

    int target;
    cout << "Enter the Target Element : ";
    cin >> target;
    cout << endl;

    cout << target << " is at " << LinearSearch(arr, size, target) << " index ";

    
    return 0;
}
