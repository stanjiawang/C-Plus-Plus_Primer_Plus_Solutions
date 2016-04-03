#include <iostream>

int main()
{
	using namespace std;

	const int InchesPerFoot = 12;
	int input = 0;

	cout << "Please enter your height: ____\b\b\b\b";
	while(!(cin  >> input) || (input <= 0))
	{
		cout << "Error! Please enter a positive number: _____\b\b\b\b";
		cin.clear();
		cin.sync();
	}
	
	int feet = input / InchesPerFoot;
	int inches = input %  InchesPerFoot;

	cout << "Your height is " << feet << " feets, " << inches << " inch(es)." << endl;

	system("pause");
	return 0;
}