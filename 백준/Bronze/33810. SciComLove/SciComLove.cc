#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	string SciComLove = "SciComLove";
	string s;
	int cnt = 0;

	cin >> s;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] != SciComLove[i]) {
			cnt++;
		}
	}

	cout << cnt << '\n';

	return 0;
}