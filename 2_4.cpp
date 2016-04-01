#include <iostream>

using namespace std;

int yearToMonth(int year);

int main()
{
	int year = 0;
	int month = 0;

	cout << "Enter your age: ";
	while(!(cin >> year) && (0 <= year))	//check if the input is a number
	{
		cout << "Error!" << endl << "Please enter a positive number: ";
		cin.clear();	//set the ios_base::goodbit
		cin.sync();	//clear the input stream
	}

	month = yearToMonth(year);

	cout << "You entered " << year << endl;
	cout << year << " years includes " << month << " month." << endl;
	
	system("pause");
	return 0;
}

int yearToMonth(int year)
{
	return year * 12;
}