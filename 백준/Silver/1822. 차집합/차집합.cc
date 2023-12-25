#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int an, bn;
	int num;
	cin >> an >> bn;
	set<int> a;
	for (int i = 0; i < an; i++) {
		cin >> num;
		a.insert(num);
	}

	for (int i = 0; i < bn; i++) {
		cin >> num;
		if (a.find(num) != a.end()) {
			a.erase(num);
		}
	}
	cout << a.size() << '\n';
	for (auto it : a) {
		cout << it << ' ';
	}
	cout << '\n';
	// vector<int> diff;

	// for (int i = 0; i < an; i++) {
	// 	if (find(b.begin(), b.end(), a[i]) == b.end()) {
	// 		diff.push_back(a[i]);
	// 	}
	// }
	// cout << diff.size() << '\n';
	// for (int i = 0; i < diff.size(); i++) {
	// 	cout << diff[i] << ' ';
	// }
	// cout << '\n';
	return 0;
}