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
	Pizza pizza;

	cout << "Please enter the brand of the pizza: ";
	while(!getline(cin, pizza.brand))
	{
		cout << "Error! Please re-enter the brand of the pizza: ";
		cin.clear();
		cin.sync();
	}

	cout << "Please enter the diameter of the pizza: ";
	while(!(cin >> pizza.diameter))
	{
		cout << "Error! Please re-enter the diameter of the pizza: ";
		cin.clear();
		cin.sync();
	}

	cout << "Please enter the weight of the pizza: ";
	while(!(cin >> pizza.diameter))
	{
		cout << "Error! Please re-enter the weight of the pizza: ";
		cin.clear();
		cin.sync();
	}

	cout << "Here's the information of the pizza: " << endl;
	cout << "Brand: " << pizza.brand << endl;
	cout << "Diameter: " << pizza.diameter << endl;
	cout << "Weight: " << pizza.weight << endl;

//	system("pause");
	return 0;
}
