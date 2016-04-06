#include <iostream>
#include <string>

using namespace std;

const int monthsPerYear = 12;

int main()
{
	string months[monthsPerYear] = {"January", "Februaby", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
	int sales[monthsPerYear] = {0};

	for(int i = 0; i < monthsPerYear; i++)
	{
		cout << "Please enter the sales for " << months[i] << " : ";
		while(!(cin >> sales[i]) || 0 > sales[i])
		{
			cout << "Error! Please enter a positive number : ";
			cin.clear();
			cin.sync();
		}
	}

	for(int j = 0; j < monthsPerYear; j++)
	{
		cout << "The sales for " << months[j] << " is " << sales[j] << endl;
	}

//	system("pause");
	return 0;
}
