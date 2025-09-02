#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the No. of Rows : ";
    cin >> n;
    cout << endl;
    int a = 1;
    
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(j <= i ){
                cout << a;
                a++;
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
23  
456 
78910
*/