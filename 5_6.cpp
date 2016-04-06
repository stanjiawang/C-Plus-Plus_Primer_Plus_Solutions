#include <iostream>
#include <string>

using namespace std;

const int monthsPerYear = 12;

int main()
{
	string months[monthsPerYear] = {"January", "Februaby", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
	int sales[3][monthsPerYear] = {0};
	int sum[3] = {0};
	int sumAll = 0;

	for(int i = 0; i < 3; i++)
	{
		for(int j = 0; j < monthsPerYear; j++)
		{
			cout << "Please enter the sales of year " << i + 1 << " for " << months[j] << " : ";
			while(!(cin >> sales[i][j]) || 0 > sales[i][j])
			{
				cout << "Error! Please enter a positive number : ";
				cin.clear();
				cin.sync();
			}
		}
	}

	for(int i = 0; i < 3; i++)
	{
		for(int j = 0; j < monthsPerYear; j++)
		{
			sum[i] += sales[i][j];
		}
		cout << "The sum of the sales for year " << i + 1 << " is " << sum[i] << endl;
		sumAll += sum[i];
	}
	cout << "The sum of the sales for all three years is " << sumAll << endl;

//	system("pause");
	return 0;
}
