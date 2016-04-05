#include <iostream>

using namespace std;

int main()
{
	int min = 0;
	int max = 0;
	int sum = 0;
	int length = 0;

	cout << "Please enter a number: ";
	while(!(cin >> min))
	{
		cout << "Error! Please re-enter your recode: ";
		cin.clear();
		cin.sync();
	}

	cout << "Please enter a number: ";
	while(!(cin >> max))
	{
		cout << "Error! Please re-enter your recode: ";
		cin.clear();
		cin.sync();
	}

	for(int i = min; i <= max; i++)
	{
		sum += i;
	}

	cout << "The sum of all the integers between " << min << " and " << max << " is " << sum <<endl;

//	system("pause");
	return 0;
}
