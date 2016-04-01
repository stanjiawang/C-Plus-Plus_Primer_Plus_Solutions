#include <iostream>

using namespace std;

float ligtYearsToAstronomicalUnits(float ligtYears);

int main()
{
	float ligtYears = 0;
	float astronomicalUnits = 0;

	cout << "Enter the number of light years: ";
	while(!(cin >> ligtYears) || (0 > ligtYears))	//check if the input is a float
	{
		cout << "Error!" << endl << "Please enter a positive number: ";
		cin.clear();	//set the ios_base::goodbit
		cin.sync();	//clear the input stream
	}

	astronomicalUnits = ligtYearsToAstronomicalUnits(ligtYears);

	cout << ligtYears << " light years = " << astronomicalUnits << " astronomical units." << endl;
	
	system("pause");
	return 0;
}

float ligtYearsToAstronomicalUnits(float ligtYears)
{
	return 63240 * ligtYears;
}