#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int N, Q;

	int a[1001];
	int diff[1001];

	cin >> N >> Q;
	a[0] = 0;
	for (int i = 1; i <= N; i++) {
		cin >> a[i];
	}
	diff[0] = 0;
	for (int i = 1; i <= N; i++) {
		diff[i] = diff[i - 1];
		diff[i] += abs(a[i] - a[i - 1]);
	}
	for (int i = 0; i < Q; i++) {
		int s, e;

		cin >> s >> e;
		cout << diff[e] - diff[s] << '\n';
	}


	return 0;
}