#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	string str;
	string s0, s1, s2;
	vector<string> v;

	cin >> str;
	int len = str.length();

	for (int i = 1; i < len - 1; i++) {
		for (int j = i + 1; j < len; j++) {
			s0 = str.substr(0, i);
			s1 = str.substr(i, j - i);
			s2 = str.substr(j);
			reverse(s0.begin(), s0.end());
			reverse(s1.begin(), s1.end());
			reverse(s2.begin(), s2.end());
			v.push_back(s0 + s1 + s2);
		}
	}
	sort(v.begin(), v.end());
	cout << v[0] << '\n';


	return 0;
}