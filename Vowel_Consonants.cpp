#include <iostream>
using namespace std;

int main()
{
    char ch;
    cout << "Enter the Character : ";
    cin >> ch;
    
    if(ch == 'A' or ch == 'E' or ch == 'I' or ch == 'O' or ch == 'U' or ch == 'a' or ch == 'e' or ch == 'i' or  ch == 'o' or ch == 'u' )
         cout << "VOWEL";
    else 
        cout << "CONSONANT";
    
    

    return 0;
}
