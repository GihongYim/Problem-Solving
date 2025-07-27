#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int total = 0;
	int t;

	for (int i = 0; i < 4; i++) {
		cin >> t;
		total += t;
	}

	if (total + 300 <= 1800) {
		cout << "Yes" << '\n';
	} else {
		cout << "No" << '\n';
	}


	return 0;
}