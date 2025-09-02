#include <iostream>
using namespace std;

int main() {
    
    int size;
    cout << "Enter size of array : ";
    cin >> size;
    
    int arr[size];
    cout << "Enter elements of array : ";
    
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }
    
    bool sorted = 1;

    for(int i = 0; i < size; i++){
        if(arr[i] > arr[i + 1]){
            sorted = 0;
        }
    }
    
    if(sorted) cout << " Yes sorted";
    else cout << " No Not sorted";
    
    return 0;
}
