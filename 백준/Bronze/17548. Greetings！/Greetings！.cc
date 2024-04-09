#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	string msg;
	string ans;

	cin >> msg;
	for (int i = 0; i < msg.size(); i++) {
		if (msg[i] == 'e') {
			ans += "ee";
		} else {
			ans += msg[i];
		}
	}
	cout << ans << '\n';

	return 0;
}