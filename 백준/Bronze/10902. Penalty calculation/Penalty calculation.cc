#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n;

	cin >> n;
	vector<int> s(n);
	vector<int> t(n);
	int f = 0;
	int maxS = 0;

	for (int i = 0; i < n; i++) {
		cin >> t[i] >> s[i];
		if (s[i] > maxS) {
			maxS = s[i];
			f = i;
		}
	}

	if (maxS == 0) {
		cout << "0" << '\n';
	} else {
		cout << t[f] + (f) * 20 << '\n';
	}

	return 0;
}