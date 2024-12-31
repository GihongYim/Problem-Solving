#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int N;

	cin >> N;
	
	int a;
	int maxValue = 0;
	map<int, int> m;
	for (int i = 0; i < N; i++) {
		cin >> a;
		if (m.find(a) == m.end()) {
			m.insert(make_pair(a, 0));
		}
		m[a]++;
		maxValue = max(maxValue, a);
	}
	
	int answer = 0;
	for (auto kvp : m) {
		answer += min(kvp.second, 2);
	}
	cout << answer << '\n';
	return 0;
}