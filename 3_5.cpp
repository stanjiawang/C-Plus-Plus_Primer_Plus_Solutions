#include <iostream>

int main()
{
	using namespace std;

	long long populationOfUS;
	long long polulationOfWorld;

	cout << "Enter the world's population: ";
	while(!(cin  >> polulationOfWorld) || (0 > polulationOfWorld))
	{
		cout << "Error! Please enter a positive number: ";
		cin.clear();
		cin.sync();
	}

	cout << "Enter the population of the US: ";
	while(!(cin  >> populationOfUS) || (0 > populationOfUS))
	{
		cout << "Error! Please enter a positive number: ";
		cin.clear();
		cin.sync();
	}

	double percentage = populationOfUS * 1.0 / polulationOfWorld * 100;

	cout << "The population of the US is " << percentage << "% of the world population" <<endl;

//	system("pause");
	return 0;
}
