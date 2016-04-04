#include <iostream>
#include <array>

using namespace std;

int main()
{
	int times = 0;
	double sum = 0;
/*
	double * pRecord = new double [3];

	for(times = 0; times < 3; times++)
	{
		cout << "Please enter your #" << times <<  " record of your 40 yards: ";
		while(!(cin >> pRecord[times]))
		{
			cout << "Error! Please re-enter your recode: ";
			cin.clear();
			cin.sync();
		}
		sum += pRecord[times];
	}
*/

	array<double, 3> records;

	for(times = 0; times < 3; times++)
	{
		cout << "Please enter your #" << times <<  " record of your 40 yards: ";
		while(!(cin >> records[times]))
		{
			cout << "Error! Please re-enter your recode: ";
			cin.clear();
			cin.sync();
		}
		sum += records[times];
	}

	cout << "You entered " << times << " records." << endl;
	cout << "Your average record is " << sum / times << endl;

//	system("pause");
	return 0;
}
