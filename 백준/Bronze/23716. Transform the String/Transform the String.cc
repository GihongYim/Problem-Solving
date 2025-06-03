#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int T;
	string s, f;
	int minDiff;
	int diff = 0;
	int total = 0;

	cin >> T;

	for (int test_case = 1; test_case <= T; test_case++)  {
		total = 0;
		cin >> s >> f;
		for (int i = 0; i < s.length(); i++) {
			minDiff = 30;
			for (int j = 0; j < f.length(); j++) {
				diff = abs(s[i] - f[j]);
				minDiff = min(minDiff, diff);
				minDiff = min(minDiff, 26 - diff);
			}
			total += minDiff;
		}

		cout << "Case #" << test_case << ": " << total << '\n';
	}

	return 0;
}