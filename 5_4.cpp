#include <iostream>
#include <array>

using namespace std;

const double interest = 0.1;
const double compoundInterest = 0.05;


int main()
{
	
	double initDaphne = 100;
	double initCleo = 100;
	double sumDaphne = 110;
	double sumCleo = 105;
	int year = 1;

	while(sumCleo < sumDaphne)
	{	
		++year;
		sumDaphne = initDaphne + initDaphne * interest * year;
		sumCleo = pow((1 + compoundInterest), year) * initCleo;
	}
	
	cout << "After " << year << " years, the investment value of Cleo is more than Daphne." << endl;
	cout << "The investment value of Daphne is " << sumDaphne << endl;
	cout << "The investment value of Cleo is " << sumCleo << endl;

//	system("pause");
	return 0;
}
