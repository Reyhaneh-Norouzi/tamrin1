#include<iostream>
#include<conio.h>

using namespace std;

int main() {

	int a, b, c;
	cout << "Enter a,b,c : " << endl;
	cin >> a >> b >> c;

	if (a <= b + c && b <= a + c && c <= a + b)
	
		cout << "YES";
	else
	  
		cout << "NO";
	  

	_getch();

}



