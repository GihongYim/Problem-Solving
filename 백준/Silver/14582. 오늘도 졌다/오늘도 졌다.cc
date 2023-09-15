#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	vector<int> g(9);
	vector<int> s(9);

	int diff = 0;
	for (int i = 0; i < 9; i++)
	{
		cin >> g[i];
	}

	for (int i = 0; i < 9; i++)
	{
		cin >> s[i];
	}

	for (int i = 0; i < 9; i++)
	{
		diff += g[i];
		if (diff > 0)
		{
			cout << "Yes\n";
			return 0;
		}
		diff -= s[i];
	}
	cout << "No\n";
	return 0;
}