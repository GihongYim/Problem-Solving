#include <bits/stdc++.h>
using namespace std;


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int n, m;
	int answer = 0;
	vector<int> opt;
	int p[101];
	int l[101];
	int person;
	vector<int> mileage[101];

	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> p[i] >> l[i];
		for (int j = 0; j < p[i]; j++) {
			cin >> person;
			mileage[i].push_back(person);
		}
		sort(mileage[i].rbegin(), mileage[i].rend());
		if (l[i] > mileage[i].size()) {
			opt.push_back(1);
		} else {
			opt.push_back(mileage[i][l[i] - 1]);
		}
	}
	sort(opt.begin(), opt.end());
	for (int i = 0; i < opt.size(); i++) {
		if (m < opt[i])
			break;
		m -= opt[i];
		answer++;
	}
	cout << answer << '\n';
	return 0;
}