#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the No. of Rows : ";
    cin >> n;
    cout << endl;
    
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= 4 + n; j++){
            if(j >= n + 1 - i and j <= n - 1 + i ){
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
    *    
   ***   
  *****  
 ******* 
*********
*/