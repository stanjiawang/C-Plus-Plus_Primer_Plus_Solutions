#include <iostream>

using namespace std;

const int SecondsPerMinute = 60;
const int MinutesPerHour = 60;
const int HoursPerDay = 24;

int main()
{
	long inputInSeconds;

	cout << "Enter the number of seconds: ";
	while(!(cin  >> inputInSeconds) || (0 > inputInSeconds))
	{
		cout << "Error! Please enter a positive number: ";
		cin.clear();
		cin.sync();
	}

	int days = inputInSeconds / (SecondsPerMinute * MinutesPerHour * HoursPerDay);
	
	int remainder = inputInSeconds % (SecondsPerMinute * MinutesPerHour * HoursPerDay);
	cout << remainder << endl;
	int hours = remainder / (SecondsPerMinute * MinutesPerHour);
	
	remainder = remainder % (SecondsPerMinute * MinutesPerHour);
	int minutes = remainder / SecondsPerMinute;

	int seconds = remainder % SecondsPerMinute;

	cout << inputInSeconds << " seconds =  " << days << " days, " << hours << " hours, " << minutes << " minutes, " << seconds << " seconds" <<endl;

//	system("pause");
	return 0;
}
