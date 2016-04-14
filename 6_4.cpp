#include <iostream>

const int strsize = 20;

struct bop {
	char fullname[strsize];
	char title[strsize];
	char bopname[strsize];
	int preference;
};

int main()
{
	using namespace std;

	bop member[5] = {
		{"Wimp Macho","English Teacher","DEMON", 0},
		{"Raki Rhodes", "Junior Programmer", "BOOM", 1},
		{"Celia Laiter", "Super Star", "MIPS", 2},
		{"Hoppy Hipman", "Analyst Trainee", "WATEE", 1},
		{"Pat Hand", "Police", "LOOPY", 2}
	};

	char ch;

	cout << "Benevolent Order of Programmers Report" << endl
		<< "a. display by name\tb. display by title" << endl
		<< "c. display by bopname\td. display by preference" << endl
		<< "q. quit" << endl;
	cout << "Enter your choice: ";

	while(cin >> ch && 'q' != ch)
	{
		if('a' != ch && 'b' != ch && 'c' != ch && 'd' != ch)
		{
			cout << "Please enter a a, b, c, d";
			continue;
		}

		switch(ch)
		{
			case 'a': 
				for(int i = 0; i < 5; i++)
					cout << member[i].fullname << endl;
				break;
			case 'b':
				for(int i = 0; i < 5; i++)
					cout << member[i].title << endl;
				break;
			case 'c': 
				for(int i = 0; i < 5; i++)
					cout << member[i].bopname << endl;
				break;
			case 'd': 
				for(int i = 0; i < 5; i++)
				{
					if(0 == member[i].preference)
						cout << member[i].fullname << endl;
					else if(1 == member[i].preference)
						cout << member[i].title << endl;
					else
						cout << member[i].bopname << endl;
				}
				break;
		}
		cout << "Next choice: ";
	}

	cout << "Bye!" << endl;

//	system("pause");

	return 0;
}