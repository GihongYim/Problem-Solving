#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	string a, b;
	string result;
	cin >> a >> b;

	for (int i = 0; i < a.length() && i < b.length(); i++) {
		if (i % 2 == 0) {
			result += a[i];
		} else {
			result += b[i];
		}
	}
	cout << result << '\n';

	return 0;
}