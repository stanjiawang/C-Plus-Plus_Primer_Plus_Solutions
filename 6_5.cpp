#include <iostream>

const double level1 = 5000;
const double level2 = 15000;
const double level3 = 35000;
const double rate1 = 0.10;
const double rate2 = 0.15;
const double rate3 = 0.20;

int main()
{
	using namespace std;

	double income;
	double tax;

	cout << "Please enter your income: ";
	while(cin >> income && 0 <= income)
	{
		if(income <= level1)
			tax = 0;
		else if(income <= level2)
			tax = (income - level2) * rate1;
		else if(income <= level3)
			tax = (level2 - level1) * rate1 + (income - level2) * rate2;
		else
			tax = (level2 - level1) * rate1 + (level3 - level2) * rate2 + (income - level3) * rate3;
		cout << "You owe Neutronia " << tax << " tvarps in taxes." << endl;
		cout << "Please enter the next income: ";
	}

//	system("pause");

	return 0;
}