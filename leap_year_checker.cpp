#include<iostream>
using namespace std;

int main(){
    int year;
    cout << "Enter the Year : ";
    cin >> year;
    
    if((year % 4 == 0 and year % 100 !=0) or (year % 4 ==0 and year % 400 == 0) )
        cout << "LEAP YEAR";
    else
         cout << "NOT LEAP YEAR";
    
}
