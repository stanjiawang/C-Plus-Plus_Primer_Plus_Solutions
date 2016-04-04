#include <iostream>
#include <string>

using namespace std;

struct Pizza
{
	string brand;
	float diameter;
	float weight;
};

int main()
{
	Pizza * pPizza = new Pizza;

	cout << "Please enter the diameter of the pizza: ";
	while(!(cin >> pPizza->diameter))
	{
		cout << "Error! Please re-enter the diameter of the pizza: ";
		cin.clear();
		cin.sync();
	}
	cin.get();	//get the enter

	cout << "Please enter the brand of the pizza: ";
	while(!getline(cin, pPizza->brand))
	{
		cout << "Error! Please re-enter the brand of the pizza: ";
		cin.clear();
		cin.sync();
	}

	cout << "Please enter the weight of the pizza: ";
	while(!(cin >> pPizza->weight))
	{
		cout << "Error! Please re-enter the weight of the pizza: ";
		cin.clear();
		cin.sync();
	}

	cout << "Here's the information of the pizza: " << endl;
	cout << "Brand: " << pPizza->brand << endl;
	cout << "Diameter: " << pPizza->diameter << endl;
	cout << "Weight: " << pPizza->weight << endl;

	delete pPizza;

	system("pause");
	return 0;
}
