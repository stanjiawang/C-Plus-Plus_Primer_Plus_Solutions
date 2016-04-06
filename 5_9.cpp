#include <iostream>
#include <string>

using namespace std;

int main()
{
	cout << "Enter words (to stop, type the word done):" << endl;
	int count = 0;
	string word;
	cin >> word;
	while("done" != word)
	{
		count++;
		cin >> word;
	}

	cout << "You entered a total of " << count << " words" << endl;

//	system("pause");
	return 0;
}