#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int T, X;
	int N;
	bool avail[1005];
	bool answer = true;
	cin >> T >> X;
	cin >> N;

	for (int n = 1; n <= N; n++) {
		int k;
		cin >> k;
		for (int i = 1; i <= k; i++) {
			int a;
			cin >> a;

			if (a == X) {
				avail[n] = true;
			}
		}
		if (!avail[n])
			answer = false;
	}

	if (answer) {
		cout << "YES\n";
	} else {
		cout << "NO\n";
	}


	return 0;
}