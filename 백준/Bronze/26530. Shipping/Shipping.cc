#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n, x;
	string name;
	int cnt;
	float price;

	cin >> n;
	for (int t = 1; t <= n; t++) {
		cin >> x;
		float total = 0.0;
		for (int i = 0; i < x; i++) {
			cin >> name >> cnt >> price;
			total += cnt * price;
		}
		cout << setprecision(2);
		cout << fixed;
		cout << "$" << total << '\n';
	}
	return 0;
}