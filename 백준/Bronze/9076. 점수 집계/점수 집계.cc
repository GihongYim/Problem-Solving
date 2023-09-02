#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	vector<int> score(5);
	int total;

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cin >> score[j];
		}
		sort(score.begin(), score.end());
		if (score[3] - score[1] >= 4)
			cout << "KIN\n";
		else
		{
			total = 0;
			for (int j = 1; j < 4; j++)
			{
				total += score[j];
			}
			cout << total << '\n';
		}
	}
	return 0;
}