#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int N;
	int alpha[26];
	string str;

	cin >> N;
	getline(cin, str);
	for (int i = 0; i < N; ++i) {
		for (int i = 0; i < 26; i++) alpha[i] = 0;
		getline(cin, str);
		for (int j = 0; j < str.length(); ++j) {
			if (str[j] >= 'a' && str[j] <= 'z') {
				alpha[str[j] - 'a'] ++;
			}
			if (str[j] >= 'A' && str[j] <= 'Z') {
				alpha[tolower(str[j]) - 'a']++;
			}
		}
		vector<char> v;
		for (int j = 0; j < 26; j++) {
			if (alpha[j] == 0) {
				v.push_back(j + 'a');
			}
		}
		if (v.empty()) {
			cout << "pangram\n";
		} else {
			cout << "missing ";
			for (int j = 0; j < v.size(); j++) {
				cout << v[j];
			}
			cout << '\n';
		}
	}
	return 0;
}