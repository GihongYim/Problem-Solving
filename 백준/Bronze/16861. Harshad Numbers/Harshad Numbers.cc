#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n;
	int m;
	string str;
	cin >> n;

	while (1) {
		m = 0;
		str = to_string(n);
		for (int i = 0; i < str.length(); i++) {
			m += (str[i] - '0');
		}

		if (n % m == 0) {
			cout << n << '\n';
			break;
		}
		n++;
	}

	return 0;
}