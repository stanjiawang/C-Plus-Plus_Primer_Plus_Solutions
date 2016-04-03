#include <iostream>
#include <cmath>

using namespace std;

const int InchesPerFoot = 12;
const double MeterPerInch = 0.0254;
const double PoundsPerKilogram = 2.2;

double caculateBMI(int feet, int inches, int pounds);

int main()
{
	int feet;
	int inches;
	int pounds;

	cout << "Please enter your height: ____feet, ____inches\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b";
	while(!(cin  >> feet) || (0 > feet))
	{
		cout << "Error! Please enter a positive number: _____\b\b\b\b";
		cin.clear();
		cin.sync();
	}
	cout << "Please enter your height: " << feet << " feet, ____inches\b\b\b\b\b\b\b\b\b\b";
	while(!(cin  >> inches) || (0 > inches) || (0 == feet && 0 == inches))
	{
		cout << "Error! Please enter a positive number: _____\b\b\b\b";
		cin.clear();
		cin.sync();
	}
	cout << "Please enter your weight: ____pounds\b\b\b\b\b\b\b\b\b\b";
	while(!(cin  >> pounds) || (0 > pounds))
	{
		cout << "Error! Please enter a positive number: _____\b\b\b\b";
		cin.clear();
		cin.sync();
	}

	double BMI = caculateBMI(feet, inches, pounds);

	cout << "Your BMI is " << BMI << endl;

//	system("pause");
	return 0;
}

double caculateBMI(int feet, int inches, int pounds)
{
	double height = (feet * InchesPerFoot + inches) * MeterPerInch;
//	cout << "Your height is " << height << endl;
	double weight = pounds / PoundsPerKilogram;
//	cout << "Your weight is " << weight << endl;
	return  weight/ pow(height, 2);
}