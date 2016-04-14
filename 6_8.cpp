#include <iostream>
#include <fstream>

const int SIZE = 50;
int main()
{
	using namespace std;

	char fileName[SIZE];
	fstream inFile;
	int count = 0;
	char ch;
	
	cout << "Enter the name of the input file: ";
	cin.getline(fileName, SIZE);
	inFile.open(fileName);
	if(!inFile.is_open())
	{
		cout << "Could not open the file " << fileName << endl;
		cout << "Program Terminated." << endl;
		exit(EXIT_FAILURE);
	}

	while(inFile >> ch)
	{
		count++;
	}

	cout << count << " characters in file " << fileName << endl;

	system("pause");

	return 0;
}