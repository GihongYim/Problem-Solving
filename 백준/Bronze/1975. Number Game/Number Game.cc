#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int T;

	cin >> T;
	for (int t = 1; t <= T; t++) 
	{
		int N;
		cin >> N;
		int cnt = 0;
		for (int b = 2; b <= N; b++) {
			int nn = N;

			while (nn % b == 0) {
				cnt++;
				nn /= b;
			}
		}
		cout << cnt << '\n';
	}
	return 0;
}