#include <bits/stdc++.h>
using namespace std;
int N;
vector<long long> price;

long long profit(int n) {
	long long result = 0;

	int j = N - 1;
	for (int i = N - 2; i > -1; i--) {
		if (price[i] < price[j]) result += price[j] - price[i];
		else j = i;
	}
	return result;
}



int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int T;

	cin >> T;
	for (int t = 1; t <= T; t++) {
		cin >> N;
		price.resize(N);
		for (int i = 0; i < N; i++) {
			cin >> price[i];
		}
		cout << profit(N) << '\n';
	}
	

	return 0;
}