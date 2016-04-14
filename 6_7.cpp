#include <iostream>
#include <string>
#include <cctype>

int main()
{
	using namespace std;

	string word;
	int vowels = 0;
	int consonants = 0;
	int other  = 0;
	char ch;

	cout << "Enter words (q to quit): " << endl;
	while(cin >> word && "q" != word)
	{
		ch = tolower(word[0]);
		if(isalpha(ch))
		{
			if('a' == ch || 'e' == ch || 'i' == ch || 'o' == ch || 'u' == ch)
			{
				vowels++;			
			}
			else
				consonants++;
		}
		else
			other++;
	}

	cout << vowels << " words beginning with vowels" << endl;
	cout << consonants << " words beginning with consonants" << endl;
	cout << other << " others" << endl;

//	system("pause");

	return 0;
}