#include <iostream>

int main()
{
	using namespace std;
	char ch;

	cout << "Please enter one of the following choices: " << endl;
	cout << "c) carnivore\t\tp) pianist" << endl;
	cout << "t) tree\t\t\tg) game" << endl;
	cout << "Please enter a c, p, t or g: ";

	cin >> ch;
	while('c' != ch && 'p' != ch && 't' != ch && 'g' != ch)
	{
		cout << "Please enter a c, p, t or g: ";
		cin >> ch;
	}

	switch(ch)
	{
		case 'c': cout << "A cat is a carnivore." << endl;
			break;
		case 'p': cout << "Radu Lupu is a pianist." << endl;
			break;
		case 't': cout << "A maple is a tree." << endl;
			break;
		case 'g': cout << "Golf is a game.";
			break;
		default:
			cout <<  "The program shouldn't get here!" << endl;
	}
	
//	system("pause");

	return 0;
}
