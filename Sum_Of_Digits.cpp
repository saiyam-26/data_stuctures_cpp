#include<iostream>
using namespace std;

int main(){

    int num ;
    int sum = 0;

    cout << "Enter the Number : ";
    cin >> num;

    while(num != 0){
        
        sum += num % 10;
        num /= 10;
    }

    cout << "Sum of Digits : " << sum;

    
    return 0;
}
