#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the No. of Rows : ";
    cin >> n;
    cout << endl;
    
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(true ){
                cout << (char)(j + 64);
            }else{
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}

/*
ABCD
ABCD
ABCD
ABCD
*/