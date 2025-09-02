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
    
    

    // Nested loops main code
    
        for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] + arr[j] == target) {
                cout << "( " << arr[i] << " , " << arr[j] << " )" << endl;
                
            }
        }
    }
    
    
    
    return 0;
}
