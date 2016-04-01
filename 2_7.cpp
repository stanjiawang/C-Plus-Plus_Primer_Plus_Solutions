#include <iostream>

using namespace std;

void showTime(int hours, int minutes);

int main()
{
	int hours = 0;
	int minutes = 0;

	cout << "Enter the number of hours: ";
	while(!(cin >> hours) || (0 > hours) || (24 < hours))	//check if the input is a float
	{
		cout << "Error!" << endl << "Please enter a positive number between 0 and 24: ";
		cin.clear();	//set the ios_base::goodbit
		cin.sync();	//clear the input stream
	}

	cout << "Enter the number of minutes: ";
	while(!(cin >> minutes) || (0 > minutes) || (60 < minutes))	//check if the input is a float
	{
		cout << "Error!" << endl << "Please enter a positive number between 0 and 60: ";
		cin.clear();	//set the ios_base::goodbit
		cin.sync();	//clear the input stream
	}

	showTime(hours, minutes);
	
//	system("pause");
	return 0;
}

void showTime(int hours, int minutes)
{
	cout << "Time: " << hours << ":" << minutes << endl;
}
