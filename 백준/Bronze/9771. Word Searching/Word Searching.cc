#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	string token;
	string word;

	cin >> token;

	for (int i = 0; i < token.length(); i++) {
		token[i] = tolower(token[i]);
	}

	int cnt = 0;
	while (cin >> word) {

		if (word.find(token) != string::npos)
			cnt++;
	}
	cout << cnt << '\n';

	return 0;
}