#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int T;
	long long N;
	bool odd;
	bool perfectSq;
	cin >> T;

	for (int t = 1; t <= T; t++) {
		cin >> N;
		odd = false;
		perfectSq = false;
		if (N % 2 == 1) {
			odd = true;
		}

		if (N == 0) {
			perfectSq = true;
		} else {
			for (long long i = 1; i * i <= N; i++) {
				if (i * i == N) {
					perfectSq = true;
				}
			}
		}

		if (odd && !perfectSq) {
			cout << "O\n";
		} else if (!odd && perfectSq) {
			cout << "S\n";
		} else if (odd && perfectSq) {
			cout << "OS\n";
		} else {
			cout << "EMPTY\n";
		}
	}

	return 0;
}