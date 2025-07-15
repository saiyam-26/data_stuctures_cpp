#include<iostream>
#include<climits>
using namespace std;

int main(){

    int size ;
    cout << "Enter size of Array : ";
    cin >> size ;

    int marks[size];
    cout << "Enter elements  of Array : ";
    
    for(int i = 0; i < size; i++){
        cin >> marks[i];
    }

    int smallest = INT_MAX;
    int largest = INT_MIN;

    cout << endl;

    for(int i = 0; i < size; i++){
        smallest = min(marks[i],smallest);
        largest = max(marks[i],largest);
    }

    cout << "smallest Element : " << smallest << endl;
    cout << "largest Element : " << largest << endl;

    return 0;
}
