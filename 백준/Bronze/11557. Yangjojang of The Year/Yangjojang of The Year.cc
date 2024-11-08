#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int T;

	cin >> T;
	for (int t = 1; t <= T; t++) {
		vector<pair<int, string>> v;

		int n;

		cin >> n;
		for (int i = 0; i < n; i++) {
			pair<int, string> p;
			cin >> p.second >> p.first;
			v.push_back(p);
		}
		sort(v.begin(), v.end());
		cout << v[v.size() - 1].second << '\n';
	}

	return 0;
}