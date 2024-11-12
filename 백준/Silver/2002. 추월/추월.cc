#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int n;

	cin >> n;

	map<string, int> in;

	string car;
	for (int i = 0; i < n; i++) {
		cin >> car;
		in.insert(make_pair(car, i));
	}

	vector<int> order(n);

	for (int i = 0; i < n; i++) {
		cin >> car;
		order[i] = in[car];
	}
	int cnt = 0;
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (order[i] > order[j])
			{
				cnt++;
				break;
			}
		}
	}

	cout << cnt << '\n';
	return 0;
}