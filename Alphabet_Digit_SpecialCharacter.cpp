#include <iostream>
using namespace std;

int main()
{
    char ch;
    cout << "Enter the Character : ";
    cin >> ch;
    
    if((ch >= 'a' and ch <= 'z') or (ch >= 'A' and ch <= 'Z')) cout << "ALPHABET";
    else if(ch >= '0' and ch <= '9') cout << "DIGIT";
    else cout << "SPECIAL CHARACTER";
    
    

    return 0;
}
