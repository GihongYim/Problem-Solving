#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int T;
	int n;
	long long  Tn[302];
	long long Wn[301];
	fill(Wn, Wn + 301, 0);
	for (int i = 0; i <= 301; i++) {
		Tn[i] = i * (i + 1) / 2;
	}

	cin >> T;
	for (int t = 1; t <= T; t++) {
		cin >> n;
		for (int i = 1; i <= n; i++) {
			if (Wn[i] != 0)
				continue;
			Wn[i] = Wn[i - 1] + i * Tn[i + 1];
		}
		cout << Wn[n] << '\n';
	}

	return 0;
}