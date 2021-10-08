#include<iostream>
#include<conio.h>

using namespace std;

int main() {

	string firstname, lastname;
	float grade1, grade2, grade3, avg;

	cout << "Enter the firstname : " << endl;
	cin >> firstname;

	cout << "Enter the lastname : " << endl;
	cin >> lastname;

	cout << "Enter 3 grades: " << '\n';
	cin >> grade1 >> grade2 >> grade3;

	avg = (grade1 + grade2 + grade3 ) / 3;

		cout << avg << endl;
		if (avg >= 17)

			cout << "Great";

		else if (avg < 17 && avg >= 12)

			cout << "Normal";

		else if (avg < 12)

			cout << "Fail";


		_getch();

}