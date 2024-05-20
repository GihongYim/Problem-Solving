#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int ch[26];
	string s;

	fill(ch, ch + 26, 0);
	
	cin >> s;
	for (int i = 0; i < 25; i++) {
		ch[s[i] - 'A']++;
	}
	for (int i = 0; i < 26; i++) {
		if (ch[i] == 0) {
			cout << (char)(i + 'A');
			break;
		}
	}

	return 0;
}