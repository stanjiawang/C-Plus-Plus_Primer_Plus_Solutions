#include <iostream>
#include <string>

using namespace std;

struct CandyBar
{
	string brand;
	float weight;
	int calories;
};

int main()
{
	CandyBar candyBar[3] = 
	{
		{"Mocha Munch", 2.3, 350},
		{"Apple Pie", 1.2, 230},
		{"Tiramisu", 3.4, 410}
	};

	for(int i = 0; i < 3; i++)
	{
		cout << "Snack info: " << endl;
		cout << "Brand: " << candyBar[i].brand << endl;
		cout << "Weight: " << candyBar[i].weight << endl;
		cout << "Calories: " << candyBar[i].calories << endl << endl;	
	}

	system("pause");
	return 0;
}
