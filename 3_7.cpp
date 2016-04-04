#include <iostream>

const double MilesPerHunderdKilometers = 62.14;
const double LiterPerGallon = 3.875;

int main()
{
	using namespace std;

	double fuelConsumption = 0;

	cout << "Please enter the fuel consumption is Europe style (liters/hundred kilometers): " << endl;
	while(!(cin  >> fuelConsumption) || (0 >= fuelConsumption))
	{
		cout << "Error! Please enter a positive number: ";
		cin.clear();
		cin.sync();
	}

	double milesPerGallon = MilesPerHunderdKilometers / (fuelConsumption / LiterPerGallon);

	cout << "The miles per gallon is " << milesPerGallon << endl;

//	system("pause");
	return 0;
}
