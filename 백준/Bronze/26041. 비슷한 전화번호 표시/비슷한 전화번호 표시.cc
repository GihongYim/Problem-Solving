#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	string A;
	string str;
	string B;
	getline(cin, A);


	stringstream sin(A);
	int cnt = 0;
	vector<string> v;
	while (sin >> str) {
		v.push_back(str);
	}
	cin >> B;

	for (int i = 0; i < v.size(); i++) {
		if (v[i].length() > B.length() && v[i].substr(0, B.length()) == B) {
			cnt++;
		}
	}

	cout << cnt << '\n';

	return 0;
}