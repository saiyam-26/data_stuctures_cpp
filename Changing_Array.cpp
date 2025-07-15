#include<iostream>
#include<climits>
using namespace std;

void change_arr(int arr[] ,int size){
    for(int i = 0 ;i < size ;i++){
        arr[i] = 2 * arr[i];
    }
}

int main(){

    int arr[] = {1,2,3};

    change_arr(arr,3); // calling function by Pass by Reference

    
    
    for(int i = 0; i < 3; i++){ //Printing the changed array
        cout << arr[i] << " ";
    }


    


    return 0;
}
