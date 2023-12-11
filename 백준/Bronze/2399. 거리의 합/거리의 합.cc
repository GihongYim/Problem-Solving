#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n;
	long long x[10001];
	long long answer = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> x[i];
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			answer += abs(x[i] - x[j]);
		}
	}
	cout << answer << '\n';
	return 0;
}