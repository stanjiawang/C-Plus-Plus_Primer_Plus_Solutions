#include <iostream>
#include <string>

int main()
{
	using namespace std;

	string name;
	string desert;

	cout << "Enter your name:\n";
	getline(cin, name);
	cout << "Enter your favourite desert:\n";
	getline(cin, desert);
	cout << "I have some delicious " << desert;
	cout << " for you, " << name << ".\n";

//	system("pause");
	return 0;
}
