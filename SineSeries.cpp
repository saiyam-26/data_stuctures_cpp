#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the No. : ";
    cin >> n;
    cout << endl;
    int sum = 0;
    
    for(int i = 1; i <= n; i++){
        if(i%2==0){
            sum += -i;
        }
        else{
            sum+= i;
        }
        
    }
    
    cout << "sum = "<< sum << endl;  // s = 1 - 2 + 3 - 4 + 5 ............ n

    return 0;
}