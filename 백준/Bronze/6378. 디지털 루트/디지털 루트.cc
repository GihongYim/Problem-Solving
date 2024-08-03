#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	string n;

	while (1) {
		cin >> n;
		if (n == "0")
			return 0;
		while (n.length() > 1) {
			int nextN = 0;
			for (int i = 0; i < n.length(); i++) {
				nextN += (n[i] -'0');
			}
			n = to_string(nextN);
		}
		cout << n << '\n';
	}
	return 0;
}