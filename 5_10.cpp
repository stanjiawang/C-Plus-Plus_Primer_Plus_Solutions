#include <iostream>

using namespace std;

int main()
{
	int lineNum = 0;

	cout << "Please enter the line number: ";
	while(!(cin >> lineNum) || 0 > lineNum)
	{
		cout << "Error! Please enter a positive number:";
		cin.clear();
		cin.sync();
	}

	for(int i = 0; i < lineNum; i++)
	{
		for(int j = 0; j < lineNum - i - 1; j++)
		{
			cout << ".";
		}
		for(int k = 0; k <= i; k++)
		{
			cout << "*";
		}
		cout << endl;
	}

//	system("pause");
	return 0;
}
