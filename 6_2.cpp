#include <iostream>
#include <cctype>

const int ArrSize = 10;

int main()
{
	using namespace std;

	double array[ArrSize];
	double sum = 0.0;
	double average = 0.0;
	int count = 0;
	int num = 0;

	while((cin >> array[count]) && count < ArrSize)
	{
		sum += array[count];
		++count;
	}

	if(0 < count)
	{
		average = sum / count;
	}

	for(int i = 0; i <= count; i++)
	{
		if(average < array[i])
			++num;
	}

	cout << "The average of the " << count << " numbers is " << average << endl;
	cout << num << " number(s) are large than the average" << endl;  

//	system("pause");

	return 0;
}
