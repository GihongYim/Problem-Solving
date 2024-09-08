#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n;
	long long fibn, fibn1, fibn2;
	cin >> n;

	if (n == 0) {
		cout << 0 << '\n';
	}
	else if (n == 1) {
		cout << 1 << '\n';
	} else {
		fibn1 = 0;
		fibn = 1;
		for (int i = 2; i <= n; i++) {
			fibn2 = fibn1;
			fibn1 = fibn;
			fibn = fibn1 + fibn2;
			fibn %= 1000000007;
		}
		cout << fibn << '\n';
	}


	return 0;
}