#include <iostream>

using namespace std;

const int SecondsPerMinute = 60;
const int MinutesPerDegree = 60;

int main()
{
	int degrees;
	int minutes;
	int seconds;

	cout << "Enter a latitude in degrees, minutes, and seconds: " << endl;
	cout << "First, enter the degrees: ";
	while(!(cin  >> degrees) || (0 > degrees))
	{
		cout << "Error! Please enter a positive number: ";
		cin.clear();
		cin.sync();
	}
	cout << "Next, enter the minutes of arc: ";
	while(!(cin  >> minutes) || (0 > minutes))
	{
		cout << "Error! Please enter a positive number: ";
		cin.clear();
		cin.sync();
	}
	cout << "Finally, enter the seconds of arc: ";
	while(!(cin  >> seconds) || (0 > seconds))
	{
		cout << "Error! Please enter a positive number: ";
		cin.clear();
		cin.sync();
	}

	double degreesInFraction = (degrees * MinutesPerDegree * SecondsPerMinute + minutes * SecondsPerMinute + seconds) * 1.0 / (SecondsPerMinute * MinutesPerDegree);

	cout << degrees << " degrees, " << minutes << " minutes, " << seconds << " seconds = " << degreesInFraction <<endl;

//	system("pause");
	return 0;
}
