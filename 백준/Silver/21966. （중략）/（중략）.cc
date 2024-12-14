#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int N;
	string s;

	cin >> N;
	cin >> s;

	if (s.length() <= 25) {
		cout << s << '\n';
	} else if (s.length() > 25) {
		string hide = s.substr(11, N - 22);
		int pos = hide.find(".");
		if (pos == string::npos || pos == hide.length() - 1) {
			cout << s.substr(0, 11) << "..." << s.substr(N - 11) << '\n';		
		} else {
			cout << s.substr(0, 9) << "......" << s.substr(N - 10) << '\n';		
		}
	}
	return 0;
}