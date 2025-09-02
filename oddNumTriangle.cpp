#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the No. of Rows : ";
    cin >> n;
    cout << endl;
    
    for(int i = 1; i <= n; i++){
        int a = 1;
        for(int j = 1; j <= n; j++){
            if(j <= i ){
                cout << a;
                a += 2;
            }else{
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}

/*
1    
13   
135  
1357 
13579
*/