#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n;
	string line;
	cin >> n;

	for (int i = 0; i < n; i++) {
		int cnt[26] = {0};

		getline(cin, line);
		if (line.empty()) {
			i--;
			continue;
		}
		for (char c : line) {
			if (isalpha(c)) {
				cnt[tolower(c) - 'a']++;
			}
		}
		int maxCount = 0;
		for (int j = 0; j < 26; j++) {
			maxCount = max(maxCount, cnt[j]);
		}
		vector<char> maxChars;
		for (int j = 0; j < 26; j++) {
			if (cnt[j] == maxCount) {
				maxChars.push_back('a' + j);
			}
		}
		if (maxChars.size() == 1) {
			cout << maxChars[0] << endl;
		} else {
			cout << '?' << endl;
		}
	}


	return 0;
}