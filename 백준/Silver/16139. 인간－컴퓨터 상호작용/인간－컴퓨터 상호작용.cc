#include <bits/stdc++.h>
using namespace std;

const int MAX = 200005;

int alpha[26][MAX];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	string s;

	cin >> s;
	for (int i = 0; i < 26; i++) {
		fill(alpha[i], alpha[i] + MAX, 0);
	}
	alpha[s[0] - 'a'][0] = 1;
	for (int i = 1; i < s.length(); i++) {
		for (char j = 'a'; j <= 'z'; j++) {
			if (s[i] == j) {
				alpha[j - 'a'][i] = alpha[j - 'a'][i - 1] + 1;
			} else {
				alpha[j - 'a'][i] = alpha[j - 'a'][i - 1];
			}
		}
	}

	int q;

	cin >> q;
	for (int t = 1; t <= q; t++) {
		char a;
		int l, r;
		cin >> a >> l >> r;
		cout << alpha[a - 'a'][r] - alpha[a - 'a'][l - 1] << '\n';
	}
	return 0;
}