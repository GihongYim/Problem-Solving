#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n;

	while (1) {
		cin >> n;

		if (n == 0) break;

		vector<int> cnt(50, 0);
		cnt[0] = 1;

		for (int i = 0; i < n; i++) {
			for (int j = 0; j < 6; j++) {
				int x; cin >> x;
				cnt[x]++;
			}
		}

		if (find(cnt.begin(), cnt.end(), 0) != cnt.end()) {
			cout << "No\n";
		}
		else {
			cout << "Yes\n";
		}
	}

	return 0;
}