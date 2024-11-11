#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	long long N;

	cin >> N;

	long long sum = 0;

	sum += (N - 1);

	sum += (N - 1) * (N - 2);

	cout << sum << '\n';
	for (int i = 2; i <= N; i++) {
		cout << 1 << ' ' << i << '\n';
	}

	return 0;
}
