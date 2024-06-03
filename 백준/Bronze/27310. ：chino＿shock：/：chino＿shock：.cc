#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	string s;
	int score = 0;
	int col = 0;
	int ubar = 0;
	cin >> s;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == ':') {
			col++;
		} else if (s[i] == '_') {
			ubar++;
		}
	}
	score = col + s.length() + ubar * 5;
	cout << score << '\n';

	return 0;
}