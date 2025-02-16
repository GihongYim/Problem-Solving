#include <bits/stdc++.h>
using namespace std;

bool pCmp(pair<int, char> a, pair<int, char> b)
{
	if (a.first == b.first) {
		return a.second < b.second;
	} else {
		return a.first > b.first;
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	string str;
	map<char, int> m;
	vector<pair<int, char>> v;

	cin >> str;
	
	for (int i = 0; i < str.length(); i++) {
		if (m.find(str[i]) == m.end()) {
			m.insert(make_pair(str[i], 0));
		}
		m[str[i]]++;
	}

	for (auto it : m) {
		v.push_back(make_pair(it.second, it.first));
	}

	sort(v.begin(), v.end(), pCmp);

	for (int i = 0; i < v.size(); i++) {
		for (int j = 0; j < v[i].first; j++) {
			cout << v[i].second;
		}
	}
	cout << '\n';

	return 0;
}