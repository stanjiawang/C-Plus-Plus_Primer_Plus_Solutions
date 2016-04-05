#include <iostream>
#include <array>

using namespace std;

const int ArSize = 101;

int main()
{
	
	int input = 0;
	int sum = 0;

	cout << "Please enter a number: ";
	while((cin >> input) && (0 != input))
	{	
		sum += input;
		cout << "The sum is " << sum << " up to now." << endl;
		cout << "Please enter another number: ";
	}
	
	system("pause");
	return 0;
}