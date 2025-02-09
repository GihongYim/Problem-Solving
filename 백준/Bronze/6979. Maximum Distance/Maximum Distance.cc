#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int T;
	int n;

	vector<int> x;
	vector<int> y;

	cin >> T;

	for (int t = 1; t <= T; t++) {
		cin >> n;

		x.resize(n);
		y.resize(n);

		for (int i = 0; i < n; i++) {
			cin >> x[i];
		}

		for (int i = 0; i < n; i++) {
			cin >> y[i];
		}

		int maxDist = 0;

		for (int i = 0; i < n; i++) {
			for (int j = i; j < n; j++) {
				if(y[j] >= x[i])
					maxDist = max(maxDist, j - i);
			}
		}
		cout << "The maximum distance is " << maxDist << "\n\n";
	}

	return 0;
}