#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int N, s, t;
	string a;
	map<string, int> tagCount;

	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> s >> t;
		for (int j = 0; j < t; j++) {
			cin >> a;
			if (tagCount.find(a) == tagCount.end()) {
				tagCount.insert(make_pair(a, 0));
			}
			tagCount[a]++;
		}
	}

	int maxCount = 0;
	string maxS;
	for (auto it : tagCount) {
		if (it.second > maxCount) {
			maxCount = it.second;
			maxS = it.first;
		}
	}

	int maxSameCnt = 0;
	for (auto it : tagCount) {
		if (it.second == maxCount) {
			maxSameCnt++;
		}
	}
	if (maxSameCnt > 1) {
		cout << -1 << '\n';
	} else {
		cout << maxS << '\n';
	}

	return 0;
}