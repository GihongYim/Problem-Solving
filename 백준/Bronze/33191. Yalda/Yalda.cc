#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	vector<string> fruits = {"Watermelon", "Pomegranates", "Nuts"};
	vector<int> prices(3);

	int budget;
	cin >> budget;
	for (int i = 0; i < 3; i++)
	{
		cin >> prices[i];
	}

	for (int i = 0; i < 3; i++)
	{
		if (budget >= prices[i])
		{
			cout << fruits[i] << " ";
			return 0;
		}
	}
	cout << "Nothing";
	return 0;
}