#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the No. of Rows : ";
    cin >> n;
    cout << endl;
    
    // upper half
    
    for(int i = 1; i <= n ; i++){
        for(int j = 1; j <= n + 4 ; j++){
            if(j>n+1-i and j< n-1+i ){
                cout << "*";
                
            }else{
                cout << " ";
            }
        }
        cout << endl;
    }
    
    // lower half
    
    for(int i = 1; i <= n-1 ; i++){
        for(int j = 1; j <= n + 4 ; j++){
            if(j>i+1 and j< n+4-i ){
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
 ******* 
  *****  
   ***   
    *    

*/