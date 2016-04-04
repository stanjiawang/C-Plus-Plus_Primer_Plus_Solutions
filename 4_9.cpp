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
	CandyBar * pCandyBar = new CandyBar [3];

	pCandyBar[0].brand = "Mocha Munch";
	pCandyBar[0].weight = 2.3;
	pCandyBar[0].calories = 350;

	pCandyBar[1].brand = "Apple Pie";
	pCandyBar[1].weight = 1.2;
	pCandyBar[1].calories = 1.2;

	pCandyBar[2].brand = "Tiramisu";
	pCandyBar[2].weight = 3.4;
	pCandyBar[2].calories = 410;

	for(int i = 0; i < 3; i++)
	{
		cout << "Snack info: " << endl;
		cout << "Brand: " << pCandyBar[i].brand << endl;
		cout << "Weight: " << pCandyBar[i].weight << endl;
		cout << "Calories: " << pCandyBar[i].calories << endl << endl;	
	}

//	system("pause");
	return 0;
}
