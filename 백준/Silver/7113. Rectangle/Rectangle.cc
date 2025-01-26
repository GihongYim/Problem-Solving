#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int n, m;
	int nextN, nextM;

	int triangleCnt = 1;

	cin >> n >> m;

	while (true) {

		if (n == m) break;
		nextN = max(n, m) - min(n, m);
		nextM = min(n, m);
		triangleCnt++;
		n = nextN;
		m = nextM;
	}

	cout << triangleCnt << '\n';

	return 0;
}