#include <bits/stdc++.h>
using namespace std;

int n;
int a[101];

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	while (1)
	{

		cin >> n;

		if (n == 0) break;

		int minTarget = 0;
		int minDist = 0x3f3f3f3f;
		int dist;
		for (int i = 0; i < n; i++) {
			cin >> a[i];

			dist = abs(a[i] - 2023);
			if (dist < minDist) {
				minTarget = i;
				minDist = dist;
			}
		}

		cout << minTarget + 1 << '\n';
	}


	return 0;
}