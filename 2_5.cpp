#include <iostream>

using namespace std;

float CelsiusToFahrenheit(float degree);

int main()
{
	float degreeInCelsius = 0;
	float degreeInFahrenheit = 0;

	cout << "Please enter a Celsius value: ";
	while(!(cin >> degreeInCelsius))	//check if the input is a float
	{
		cout << "Error!" << endl << "Please enter a number: ";
		cin.clear();	//set the ios_base::goodbit
		cin.sync();	//clear the input stream
	}

	degreeInFahrenheit = CelsiusToFahrenheit(degreeInCelsius);

	cout << degreeInCelsius << " degrees Celsius is " << degreeInFahrenheit << " degrees Fahrenheit." << endl;
	
//	system("pause");
	return 0;
}

float CelsiusToFahrenheit(float degree)
{
	return 1.8 * degree + 32.0;
}