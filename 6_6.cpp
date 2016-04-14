#include <iostream>
#include <string>

using namespace std;

struct Patrons
{
	string name;
	double money;
};

int main()
{
	cout << "Please enter the number of the patrons: ";
	int number;
	while(!(cin >> number) || 0 > number)
	{
		cout << "Please enter a positive number: ";
		cin.clear();
		cin.sync();
	}
	cin.get();

	Patrons * patrons = new Patrons[number];

	cout << "Please enter the name and the money of the patrons" << endl;
	for(int i = 0; i < number; i++)
	{
		cout << "Please enter the #" << i + 1 << " patron's name: ";
		while(!getline(cin, patrons[i].name))
		{
			cout << "Error! Please enter the name again: ";
			cin.clear();
			cin.sync();
		}
		cout << "Please enter the #" << i + 1 << " patron's money: ";
		while(!(cin >> patrons[i].money) || 0 >= patrons[i].money)
		{
			cout << "Error! Please enter a positive number: ";
			cin.clear();
			cin.sync();	
		}
		cin.get();
	}

	cout << "Grand Patron: " << endl;
	for(int j = 0; j < number; j++)
	{
		if(10000 < patrons[j].money)
			cout << patrons[j].name << endl;
	}

	cout << "Patron: " << endl;
	for(int k = 0; k < number; k++)
	{
		if(10000 >= patrons[k].money)
			cout << patrons[k].name << endl;
	}

//	system("pause");

	return 0;
}