#include <iostream>

using namespace std;

int longToYard(int distance);

int main()
{
	int distanceInLong = 0;
	int distanceInYard = 0;

	cout << "Please enter a number: ";
	while(!(cin >> distanceInLong))	//check if the input is a number
	{
		cout << "Error!" << endl << "Please enter a number: ";
		cin.clear();	//set the ios_base::goodbit
		cin.sync();		//clear the input stream
	}

	distanceInYard = longToYard(distanceInLong);

	cout << "You entered " << distanceInLong << endl;
	cout << distanceInLong << " long equals to " << distanceInYard << " yard." << endl;
	
//system("pause");
	return 0;
}

int longToYard(int distanceInLong)
{
	return distanceInLong * 220;
}