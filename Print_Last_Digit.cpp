#include<iostream>
using namespace std;

int main(){

    int num;
    cout << "Enter a number: ";
    cin >> num;

    int lastdigit = 0;

    while(num != 0){
        lastdigit = num % 10;
        cout << lastdigit;
        num /= 10;
    }

    

    
    return 0;
}
