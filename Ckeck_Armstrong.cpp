#include<iostream>
#include<cmath>
using namespace std;

int CountDigits(int num){
    
    int count = 0;

    while(num != 0){
        count ++;
        num /= 10;
    }

    return count;
}


int CheckArmstrong(int num){
    
    double sum = 0;  // power function returns a double
    int temp = num;
    int lastdigit = 0;
    int digits = CountDigits(num);

    while(num != 0){
        lastdigit = num % 10;
        sum += pow(lastdigit,digits);
        num /= 10;
    }

    if(temp == sum) return 1;
    else {
        return 0;
    }
}



int main(){

    int num;
    cout << "Enter a number : ";
    cin >> num;

    int armstrong = CheckArmstrong(num);
    
    if (armstrong == 1) cout << "YES" ;
    else cout << "NO";

    return 0;
}
