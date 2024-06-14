#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	string mobis = "MOBIS";
	int cnt[5] = {0, };
	string str;

	cin >> str;

	for (int i = 0; i < str.length(); i++) {
		for (int j = 0; j < 5; j++) {
			if (str[i] == mobis[j]) {
				cnt[j]++;
			}
		}
	}
	for (int i = 0; i < 5; i++) {
		if (cnt[i] == 0) {
			cout << "NO\n";
			return 0;
		}
	}
	cout << "YES\n";
	return 0;
}