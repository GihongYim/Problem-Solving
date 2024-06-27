#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int N;
	string line;
	int crypt;
	map<string, char> m;

	m.insert(make_pair("@", 'a'));
	m.insert(make_pair("[", 'c'));
	m.insert(make_pair("!", 'i'));
	m.insert(make_pair(";", 'j'));
	m.insert(make_pair("^", 'n'));
	m.insert(make_pair("0", 'o'));
	m.insert(make_pair("7", 't'));
	m.insert(make_pair("\\\'", 'v'));
	m.insert(make_pair("\\\\'", 'w'));

	cin >> N;
	for (int i = 0; i < N; i++) {
		string result = "";
		crypt = 0;
		cin >> line;
		for (int j = 0; j < line.length(); j++) {
			if (m.find(line.substr(j, 1)) != m.end()) {
				result += m[line.substr(j, 1)];
				crypt++;
			} else if (line.substr(j, 2).length() == 2 && m.find(line.substr(j, 2)) != m.end()) {
				result += m[line.substr(j, 2)];
				j += 1;
				crypt++;
			} else if (line.substr(j, 3).length() == 3 && m.find(line.substr(j, 3)) != m.end()) {
				result += m[line.substr(j, 3)];
				j += 2;
				crypt++;
			} else {
				result += line[j];
			}
		}
		if (crypt * 2 >= result.length()) {
			cout << "I don't understand\n";
		} else {
			cout << result << '\n';
		}
	}
	return 0;
}