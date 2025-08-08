#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int T, N;;
	int maxValue;
	int minValue;

	cin >> T;
	while (T--)
	{
		cin >> N;
		int num;

		maxValue = -1000001;
		minValue = 1000001;

		for (int i = 0; i < N; i++)
		{
			cin >> num;
            if (num > maxValue) maxValue = num;
            if (num < minValue) minValue = num;
		}
		cout << minValue << " " << maxValue << "\n";

	}

	return 0;
}