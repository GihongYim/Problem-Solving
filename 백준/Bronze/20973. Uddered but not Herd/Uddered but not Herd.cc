#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	string cowphabet;
	string cow;

	cin >> cowphabet;
	cin >> cow;

	int cnt = 1;
	int pos = 0;
	while (1) {
		for (int i = 0; i < cowphabet.length(); i++) {
			if (cow[pos] == cowphabet[i]) {
				pos++;
				if (pos == cow.length()) {
					cout << cnt << '\n';
					return 0;
				}
			}
		}
		cnt++;
	}
	return 0;
}