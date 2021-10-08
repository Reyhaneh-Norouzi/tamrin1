#include<iostream>
#include<conio.h>
#include<math.h>

using namespace std;

int main() {

	float weight, height, BMI;

	cout << "Enter your weight(kg): " << endl;
	cin >> weight;

	cout << "Enter your height(meter): " << endl;
	cin >> height;

	BMI = weight / (height * height);

	cout << "BMI : " << BMI << endl;

	if (BMI < 18.5) {

		cout << "underweight" << endl;

	}
	else if (BMI >= 18.5 && BMI <= 24.9)

		cout << "normal" << endl;

	else if (BMI >= 25 && BMI <= 29.9)

		cout << "overweight" << endl;

	else if (BMI >= 30 && BMI <= 34.9)

		cout << "obese" << endl;

	 else if (BMI > 35)

		cout << "extremely obese" << endl;

	_getch();

}