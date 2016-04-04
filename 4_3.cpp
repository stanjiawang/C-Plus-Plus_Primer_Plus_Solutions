#include <iostream>
#include <cstring>

int main()
{
	using namespace std;

	const int ArSize = 20;
	char firstName[ArSize];
	char lastName[ArSize];

	cout << "Enter your first name: ";
	cin.getline(firstName, ArSize);
	cout << "Enter your first name: ";
	cin.getline(lastName, ArSize);
	cout << "Here's the information in a single string: " << lastName << ", " << firstName << endl;

//	system("pause");
	return 0;
}
