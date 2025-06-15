#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n, p, s;
	int m, a;
	bool keep;

	cin >> n >> p >> s;

	for (int test = 1; test <= s; test++) {
		cin >> m;
		keep = false;
		for (int i = 0; i < m; i++) {
			cin >> a;
			if (a == p) {
				keep = true;
			}
		}
		if (keep) {
			cout << "KEEP\n";
		} else {
			cout << "REMOVE\n";
		}
	}


	return 0;
}