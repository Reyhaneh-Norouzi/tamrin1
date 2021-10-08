#include<iostream>
#include<conio.h>
#include<math.h>

using namespace std;

int main() {

	float num1, num2;
	string op;

	cout << "Enter the num1 : ";
	cin >> num1;
	cout << "Enter the num2 : ";
	cin >> num2;

	cout << "Enter op: ";
	cin >> op;

	if (op == "+")
	{
		cout << "num1 + num2 = " << num1 + num2 << endl;
	}
	else if (op == "-")
	{
		cout << "num1 - num2 = " << num1 - num2 << endl;
	}
	else if (op == "*")
	{
		cout << "num1 * num2 = " << num1 * num2 << endl;
	}
	else if (op == "/")
	{
		if (num2 != 0)
		{
			cout << "num1 / num2 = " << num1 / num2 << endl;
		}
		else
			cout << "zero divition!";
	}
	else if (op == "radical")
	{
		cout << "radical = " << sqrt(num1) << endl;
	}
	else if (op == "cos")
	{
		num1 = num1 * 3.14159 / 180;
		cout << "cos = " << cos(num1) << endl;
	}
	else if (op == "cot")
	{
		num1 *= 3.14159 / 180;
		cout << "cot = " << 1 / tan(num1) << endl;
	}
	else if (op == "tan")
	{
		num1 *= 3.14159 / 180;
		cout << "tan = " << tan(num1) << endl;
	}
	else if (op == "fact")
	{
		int fact = 1;
		for (int i = 1; i <= num1; i++)
			fact *= i;
		cout << "fact = " << fact << endl;
	    
	}

	_getch();

}