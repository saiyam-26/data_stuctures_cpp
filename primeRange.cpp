#include<iostream>
#include<cmath>
using namespace std;

int CheckPrime(int num){
    if(num < 2) return false;
    
    for(int i = 2; i <= sqrt(num); i++){
        if(num % i == 0){
            return false;
        }
    }
    return true;
    
    
}



int main(){

    int start;
    cout << "Enter start : ";
    cin >> start;
    
    int end;
    cout << "Enter end : ";
    cin >> end;
    
    cout << "All Prime Numbers betweeen " << start <<" & " << end << " are : ";
    
    for(int i = start; i <= end; i++){
        if(CheckPrime(i)){
            cout << i<< "  ";
        }
    }

    return 0;
}
