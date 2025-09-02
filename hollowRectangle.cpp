#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the No. of Rows : ";
    cin >> n;
    cout << endl;
    
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= (2 * n); j++){
            if(i == 1 || i == n || j == 1 || j == (2 *n) ){ // i --> n   and j --> 2 * n
                cout << "*";
            }else{
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}

/*
**********
*        *
*        *
*        *
**********
*/