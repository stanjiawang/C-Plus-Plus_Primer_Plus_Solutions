#include <iostream>
#include <string>

using namespace std;

struct Car
{
	string manufacture;
	int year;
};

int main()
{
	int number = 0;
	cout << "How many cars do you wish to catalog? ";
	while(!(cin >> number) || 0 > number)
	{
		cout << "Error! Please enter a positive number: ";
		cin.clear();
		cin.sync();
	}
	cin.get();

	Car * carCatalog = new Car[number];

	for(int i = 0; i < number; i++)
	{
		cout << "Car #" << i + 1 << ":" << endl;
		cout << "Please enter the make: ";
		while(!getline(cin, carCatalog[i].manufacture))
		{
			cout << "Error! Please enter a string: ";
			cin.clear();
			cin.sync();
		}
		cout << "Please enter the year made: ";
		while(!(cin >> carCatalog[i].year) || 0 > carCatalog[i].year)
		{
			cout << "Error! Please enter a positive number: ";
			cin.clear();
			cin.sync();
		}
		cin.get();
	}

	cout << "Here is your collection: " << endl;
	for(int j = 0; j < number; j++)
	{
		cout << carCatalog[j].year << " " << carCatalog[j].manufacture << endl;
	}
	
	delete [] carCatalog;
//	system("pause");
	return 0;
}
