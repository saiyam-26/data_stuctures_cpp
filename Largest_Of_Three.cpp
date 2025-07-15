#include <iostream>
using namespace std;

int main()
{
    int a,b,c;
    
    cout << "Enter First Number : ";
    cin >> a;
    cout << endl ;

    cout << "Enter second Number : ";
    cin >> b;
    cout << endl ;

    cout << "Enter Third Number : ";
    cin >> c;
    cout << endl ;
    
    if(a > b and a > c) cout << a << " is largest ";
    if(b > a and b > c) cout << b << " is largest ";
    if(c > b and a < c) cout << c << " is largest ";
    
    return 0;
}
