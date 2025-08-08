#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int T, N;;
	int maxValue = -1000001;
	int minValue = 1000001;

	cin >> T;
	while (T--)
	{
		cin >> N;
		int num;
		for (int i = 0; i < N; i++)
		{
			cin >> num;
			maxValue = max(maxValue, num);
			minValue = min(minValue, num);
		}
		cout << minValue << " " << maxValue << "\n";
		maxValue = -1000001;
		minValue = 1000001;
	}

	return 0;
}