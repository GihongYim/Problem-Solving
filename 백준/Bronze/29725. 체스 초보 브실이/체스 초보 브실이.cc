#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	map<char, int> m;

	m.insert(make_pair('.', 0));
	m.insert(make_pair('K', 0));
	m.insert(make_pair('k', 0));
	m.insert(make_pair('P', 1));
	m.insert(make_pair('p', -1));
	m.insert(make_pair('N', 3));
	m.insert(make_pair('n', -3));
	m.insert(make_pair('B', 3));
	m.insert(make_pair('b', -3));
	m.insert(make_pair('R', 5));
	m.insert(make_pair('r', -5));
	m.insert(make_pair('Q', 9));
	m.insert(make_pair('q', -9));
	
	string line;
	int score = 0;
	for (int i = 0; i < 8; i++) {
		cin >> line;
		for (int j = 0; j < line.length(); j++) {
			score += m[line[j]];
		}
	}
	cout << score << '\n';

	return 0;
}