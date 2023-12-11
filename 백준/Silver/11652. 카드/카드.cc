#include <bits/stdc++.h>
using namespace std;
#define ll long long
int n;
map<ll, ll> m;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> n;
	ll num;
	for (int i = 0; i < n; i++) {
		cin >> num;
		if (m.find(num) == m.end()) {
			m[num] = 0;
		}
		m[num]++;
	}
	int maxCount = 0;
	num = -1;
	for (auto it : m) {
		if (it.second > maxCount) {
			num = it.first;
			maxCount = it.second;
		} else if (it.second == maxCount) {
			if (it.first < num) {
				num = it.first;
			}
		}
	}
	cout << num << '\n';
	return 0;
}