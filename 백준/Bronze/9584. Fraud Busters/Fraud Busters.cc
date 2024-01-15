#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	string src;
	string tar;
	vector<string> v;

	int n;
	
	cin >> src;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> tar;
		bool valid = true;
		for (int i = 0; i < src.length(); i++) {
			if (src[i] == '*')
				continue;
			
			if (src[i] != tar[i]) {
				valid = false;
				break;
			}
		}
		if (valid)
			v.push_back(tar);
	}
	cout << v.size() << '\n';
	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << '\n';
	}
	return 0;
}