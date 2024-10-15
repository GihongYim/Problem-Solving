#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	int Q;

	cin >> Q;

	for (int q = 0; q < Q; q++) {
		string str;

		cin >> str;
		int cnt = 0;

		int pos = 0;
		int nPos;
		while (1) {
			nPos = str.find("WOW", pos);
			if (nPos == string::npos) break;

			cnt++;
			pos = nPos + 1;
		}
		cout << cnt << '\n';
	}

	return 0;
}