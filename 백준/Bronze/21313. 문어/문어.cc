#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n;

	cin >> n;

	int m = n / 2;

	for (int i = 0; i < m; i++) {
		cout << "1 2 ";
	}
	if (n % 2 == 1) {
		cout << "3";
	}

	return 0;
}