#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	int N;
	string plane;
	string letters;
	int MOD;
	int index;
	for(char c = 'A'; c <= 'Z'; c++) {
		letters += c;
	}

	letters += "_.";
	MOD = letters.length();

	while (1) {
		cin >> N;
		if (N == 0)
			break;
		cin >> plane;
		reverse(plane.begin(), plane.end());
		for (int i = 0; i < plane.length(); i++) {
			if (plane[i] >= 'A' && plane[i] <= 'Z')
				index = plane[i] - 'A';
			else if (plane[i] == '_') {
				index = 'Z' + 1 - 'A';
			} else if (plane[i] == '.') {
				index = 'Z' + 2 - 'A';
			}
			index += N;
			index %= MOD;
			plane[i] = letters[index];
		}
		cout << plane << '\n';
	}

	return 0;
}