#include<iostream>
using namespace std;

int main() {

	int marks;
    cout << "Enter your Marks : ";
    cin >> marks;

	if ( marks >=90 and marks <= 100 ) cout << "Grade : A";
	else if( marks >=80 and marks <= 89 ) cout << "Grade : B";
	else if( marks >=70 and marks <= 79 ) cout << "Grade : C";
	else if( marks >=60 and marks <= 69 ) cout << "Grade : D";
	else cout << "Grade : F";

    return 0;
}
