#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	string a, b;
	string tmp;
	string result;

	cin >> a >> b;
	if (a.length() != b.length()) {
		if (a.length() < b.length()){
			tmp = a;
			a = b;
			b = tmp;
		}
		while (a.length() != b.length()) {
				b = "0" + b;
		}
	}

	for (int i = 0; i < a.length(); i++) {
		if (a[i] <= '2' && b[i] <= '2') {
			result += "0";
		} else if (a[i] >= '7' && b[i] >= '7') {
			result += "0";
		} else {
			result += "9";
		}
	}

	cout << result << '\n';

	return 0;
}