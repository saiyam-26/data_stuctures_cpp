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
    
    int target;
    cout << "Enter Target : ";
    cin >> target;
    
    

    // Triple nested loops to find triplets
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            for (int k = j + 1; k < size; k++) {
                if (arr[i] + arr[j] + arr[k] == target) {
                    cout << "( " << arr[i] << " , " << arr[j] << " , " << arr[k] << " )" << endl;
                    
                }
            }
        }
    }
    
    
    
    return 0;
}
