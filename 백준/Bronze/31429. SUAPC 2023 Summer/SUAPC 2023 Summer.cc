#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int n;
	vector<pair<int, int> > v;

	v.push_back(make_pair(0, 0));
	v.push_back(make_pair(12, 1600));
	v.push_back(make_pair(11, 894));
	v.push_back(make_pair(11, 1327));
	v.push_back(make_pair(10, 1311));
	v.push_back(make_pair(9, 1004));
	v.push_back(make_pair(9, 1178));
	v.push_back(make_pair(9, 1357));
	v.push_back(make_pair(8, 837));
	v.push_back(make_pair(7, 1055));
	v.push_back(make_pair(6, 556));
	v.push_back(make_pair(6, 773));
	cin >> n;
	cout << v[n].first << ' ' << v[n].second << '\n';


	return 0;
}