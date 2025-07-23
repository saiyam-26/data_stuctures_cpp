#include<iostream>
using namespace std;

void ArrUnique(int arr[], int size){
    cout << "Unique elements: ";
    for(int i = 0; i < size ; i++){
        int count = 0;
        for(int j = 0; j < size ; j++){
            if(arr[i] == arr[j]){
                count++;
            }
        }
        if(count == 1){
            cout << arr[i] << " ";
        }
    }
    cout << endl;
}

int main(){
    int size;
    cout << "Enter size of array: ";
    cin >> size;

    int arr[size];
    cout << "Enter elements of array: ";
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }

    ArrUnique(arr, size);

    return 0;
}
