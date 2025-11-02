#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n;
	string line;
	string word;
	int year;
	map<char, int> digit;

	digit['I'] = 1;
	digit['V'] = 5;
	digit['X'] = 10;
	digit['L'] = 50;
	digit['C'] = 100;
	digit['D'] = 500;
	digit['M'] = 1000;

	cin >> n;
	getline(cin, line);

	for (int t = 0; t < n; t++)
	{
		getline(cin, line);
		year = 0;
		stringstream sin(line);

		while (sin >> word)
		{
			for (int i = 0; i < word.size(); i++)
			{
				year += digit[word[i]];
			}
		}

		cout << year << '\n';
	}


	return 0;
}