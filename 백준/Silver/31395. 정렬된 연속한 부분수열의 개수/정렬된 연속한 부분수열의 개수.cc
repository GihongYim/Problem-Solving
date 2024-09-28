#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int N;

	cin >> N;

	vector<int> arr(N);

	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
	}

	vector<pair<long long, long long>> subArr;

	int start = 0;
	for (int i = 0; i < N - 1; i++) {
		if (arr[i] >= arr[i + 1])
		{
			subArr.push_back(make_pair(start, i));
			start = i + 1;
		}
	}
	subArr.push_back(make_pair(start, N - 1));
	
	long long cnt = 0;
	for (unsigned int i = 0; i < subArr.size(); i++) {

		long long a, b;
		a = subArr[i].first;
		b = subArr[i].second;
		cnt += (((b - a + 1) * (b - a)) / 2 + (b - a + 1));
	}
	cout << cnt << '\n';
	return 0;
}