#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int N, M;

	cin >> N >> M;
	vector<long long> p(M);

	for (int i = 0; i < M; i++) {
		cin >> p[i];
	}

	sort(p.begin(), p.end());

	long long maxProfit = 0;
	long long price;
	for (int i = 0; i < M; i++) {
		long long profit;
		if (N > M - i)
			profit = p[i] * (M - i);
		else
			profit = p[i] * N;

		if (profit > maxProfit) {
			price = p[i];
			maxProfit = profit;
		}
	}

	cout << price << ' ' << maxProfit << '\n';

	return 0;
}