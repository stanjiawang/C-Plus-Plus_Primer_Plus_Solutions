#include <iostream>
#include <string>

int main()
{
	using namespace std;

	string firstName;
	string lastName;
	char grade;
	int age;

	cout << "What is your first name? ";
	while(!getline(cin, firstName))
	{
		cout << "Error! Please re-enter your first name: ";
		cin.clear();
		cin.sync();
	}

	cout << "What is your last name? ";
	while(!getline(cin, lastName))
	{
		cout << "Error! Please re-enter your last name: ";
		cin.clear();
		cin.sync();
	}

	cout << "What letter grade do you deserve? ";
	while(!(cin >> grade) || ('A' > grade) || ('Z' < grade))
	{
		cout << "Error! Please re-enter your grade: ";
		cin.clear();
		cin.sync();
	}
	char finalGrade = grade + 1;

	cout << "What is your age? ";
	while(!(cin >> age) || (0 > age))
	{
		cout << "Error! Please re-enter your age: ";
		cin.clear();
		cin.sync();
	}

	cout << "Name: " << lastName << ", " << firstName << endl;
	cout << "Grade: " << finalGrade << endl;
	cout << "Age: " << age << endl;

//	system("pause");
	return 0;
}
