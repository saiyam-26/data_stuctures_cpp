#include<iostream>
#include<cmath>
using namespace std;

void CheckPrime(int num){
    int isPrime = 1;
    for(int i = 2; i <= sqrt(num); i++){
        if(num % i == 0){
            isPrime = 0;
            break;
        }
    }
    if(num == 1) cout << "Neither Prime nor Composite";
    else if (isPrime == 1) cout << "Prime Number";
    else cout << "Not Prime";
    
}



int main(){

    int num;
    cout << "Enter a number : ";
    cin >> num;
    CheckPrime(num);

    return 0;
}
