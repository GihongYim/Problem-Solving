#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int N;

	cin >> N;
	long long s = 0;
	long long result = 0;
	vector<long long> num(N);

	for (int i = 0; i < N; i++) {
		cin >> num[i];
		s += num[i];
	}

	for (int i = 0; i < N; i++) {
		result += (s - num[i]) * num[i];
	}
	cout << result / 2 << '\n';

	return 0;
}

// i * (1 + 2 + (i - 1) + (i + 1) + N)