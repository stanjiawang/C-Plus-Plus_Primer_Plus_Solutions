#include <iostream>

const double KilometerPerMile = 1.6093;
const double LiterPerGallon = 3.7854;
int main()
{
	using namespace std;

	double gallons = 0;
	double miles = 0;

	cout << "Please enter the distance (in miles): ";
	while(!(cin  >> miles) || (0 >= miles))
	{
		cout << "Error! Please enter a positive number: ";
		cin.clear();
		cin.sync();
	}

	cout << "Please enter the fuel (in gallons): ";
	while(!(cin  >> gallons) || (0 >= gallons))
	{
		cout << "Error! Please enter a positive number: ";
		cin.clear();
		cin.sync();
	}

	double distancePerGallon = miles / gallons;

	cout << "The distance per gallon is " << distancePerGallon << " miles." << endl;

	double liters = 0;
	double kilometers = 0;

	cout << "Please enter the distance (in kilometers): ";
	while(!(cin  >> kilometers) || (0 >= kilometers))
	{
		cout << "Error! Please enter a positive number: ";
		cin.clear();
		cin.sync();
	}

	cout << "Please enter the fuel (in liters): ";
	while(!(cin  >> liters) || (0 >= liters))
	{
		cout << "Error! Please enter a positive number: ";
		cin.clear();
		cin.sync();
	}

	double fuelConsumption = liters * 100 / kilometers;
	cout << "The fuel consumption is " << fuelConsumption << " liter every 100 kilometers." << endl;

//	system("pause");
	return 0;
}
