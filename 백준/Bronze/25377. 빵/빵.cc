#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int N;
	int a, b;
	int minScore = 0x3f3f3f3f;

	cin >> N;
	for (int i = 1; i <= N; i++) {
		cin >> a >> b;
		if (a > b) continue;
		else {
			minScore = min(minScore, b);
		}
	}
	if (minScore == 0x3f3f3f3f) {
		cout << -1 << '\n';
	} else {
		cout << minScore << '\n';
	}

	return 0;
}