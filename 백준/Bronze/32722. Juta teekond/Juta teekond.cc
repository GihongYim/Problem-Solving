#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	vector<int> path[3] = { {1, 3}, {6, 8}, {2, 5} };

	vector<int> juta(3);
	for (int i = 0; i < 3; i++)
	{
		int n;
		cin >> n;
		juta[i] = n;
	}
	bool valid = true;
	for (int i = 0; i < 3; i++)
	{
		if (juta[i] != path[i][0] && juta[i] != path[i][1])
		{
			valid = false;
			break;
		}
	}

	if (valid)
	{
		cout << "JAH" << '\n';
	}
	else
	{
		cout << "EI" << '\n';
	}
	return 0;
}