#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	vector<int> a(3);

	cin >> a[0] >> a[1] >> a[2];
	sort(a.begin(), a.end());

	if (a[0] + a[1] == a[2]) {
		cout << "1\n";
	} else if (a[0] * a[1] == a[2]) {
		cout << "2\n";
	} else {
		cout << "3\n";
	}

	return 0;
}