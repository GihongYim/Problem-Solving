#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n, m;
	cin >> n >> m;
	vector<vector<char>> task;

	task.resize(n, vector<char>(m));
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> task[i][j];
		}
	}

	bool valid = true;
	for (int i = 0; i < n; i++)
	{
		int accountant = 0;
		for (int j = 0; j < m; j++)
		{
			if (task[i][j] == 'A')
			{
				accountant++;
			}
		}
		if (accountant != 1)
		{
			valid = false;
			break;
		}
	}

	if (valid) {
		cout << "Yes" << endl;
	}
	else
	{
		cout << "No" << endl;
	}

	return 0;
}