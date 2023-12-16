#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int n;

	int sq[101];
	sq[1] = 1;
	sq[0] = 0;
	for (int i = 2; i <= 101; i++) {
		sq[i] = 1;
		for (int j = 1; j < i; j++) {
			sq[i] += (i - j + 1) * (i - j + 1);
		}
	}
	while (1) {
		cin >> n;
		if (n == 0)
			break;
		cout << sq[n] << '\n';
	}

	return 0;
}