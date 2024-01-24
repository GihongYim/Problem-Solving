#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int T;
	string s, p;

	cin >> T;
	for (int t = 1; t <= T; t++) {
		cin >> s >> p;
		int pos = 0;
		int next = 0;
		int count = 0;
		while (1) {
			next = s.find(p, pos);
			if (next == string::npos) {
				count += (s.length() - pos);
				break;
			} else {
				count += (next - pos);
				count++;
			}
			pos = next + p.length();
		}
		cout << count << '\n';
		
	}
	return 0;
}