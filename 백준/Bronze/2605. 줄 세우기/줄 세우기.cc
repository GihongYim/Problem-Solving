#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	list<int> l;
	int n;
	int num;
	list<int>::iterator it;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> num;
		it = l.end();
		while (num--) {
			it--;
		}
		l.insert(it, i + 1);
	}
	for (auto iter : l) {
		cout << iter << ' ';
	}
	cout << '\n';
	return 0;
}