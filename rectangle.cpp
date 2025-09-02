#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the No. of Rows : ";
    cin >> n;
    int m;
    cout << "Enter the No. of columns : ";
    cin >> m;
    cout << endl;
    
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            if(true){
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
**********
**********
**********
**********
*/