#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, k, l;

	vector<vector<int> > successTeam;
	int team = 0;
	int success;
	int totalSuccess = 0;
	cin >> n >> k >> l;

	for (int test = 0; test < n; test++)
	{
		vector<int> score(3);
		for (int i = 0; i < 3; i++)
		{
			cin >> score[i];
		}
		success = 1;
		for (int i = 0; i < 3; i++)
		{
			if (score[i] < l)
			{
				success = 0;
			}
		}
		if (success)
		{
			team = 0;
			for (int i = 0; i < 3; i++)
			{
				team += score[i];
			}
			if (team < k)
			{
				success = 0;
			}
		}
		if (success)
		{
			totalSuccess += success;
			successTeam.push_back(score);
		}
	}
	cout << totalSuccess << '\n';
	for (int i = 0; i < successTeam.size(); i++)
	{
		for (int j = 0; j < successTeam[i].size(); j++)
		{
			cout << successTeam[i][j] << ' ';
		}
	}
	cout << '\n';
	return 0;
}