#include <iostream>
#include <string>
#include <fstream>

using namespace std;

struct Patrons
{
	string name;
	double money;
};

const int SIZE = 50;

int main()
{
	char fileName[SIZE];
	fstream inFile;
	
	cout << "Enter the name of the input file: ";
	cin.getline(fileName, SIZE);
	inFile.open(fileName);
	if(!inFile.is_open())
	{
		cout << "Could not open the file " << fileName << endl;
		cout << "Program Terminated." << endl;
		exit(EXIT_FAILURE);
	}

	int number = 0;
	inFile >> number;
	inFile.get();

//	cout << number << "patrons." << endl;

	Patrons * patrons = new Patrons[number];

	for(int i = 0; i < number; i++)
	{
		getline(inFile, patrons[i].name);
		inFile >> patrons[i].money;
		inFile.get();
	}

	cout << "Grand Patron: " << endl;
	for(int j = 0; j < number; j++)
	{
		if(10000 < patrons[j].money)
			cout << patrons[j].name << endl;
	}

	cout << "Patron: " << endl;
	for(int k = 0; k < number; k++)
	{
		if(10000 >= patrons[k].money)
			cout << patrons[k].name << endl;
	}

	delete [] patrons;
	inFile.close();

//	system("pause");

	return 0;
}