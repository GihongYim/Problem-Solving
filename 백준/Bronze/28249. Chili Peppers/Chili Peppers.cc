#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	map<string, int> m;

	m.insert(make_pair("Poblano", 1500));
	m.insert(make_pair("Mirasol", 6000));
	m.insert(make_pair("Serrano", 15500));
	m.insert(make_pair("Cayenne", 40000));
	m.insert(make_pair("Thai", 75000));
	m.insert(make_pair("Habanero", 125000));
	int total = 0;
	int n;

	cin >> n;
	string menu;
	for (int i = 0; i < n; i++) {
		cin >> menu;
		total += m[menu];
	}
	cout << total << '\n';
	return 0;
}