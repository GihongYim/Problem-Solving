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
		for (char &ch : plane) {
			int index = letters.find(ch);

			index = (index + N) % MOD;

			ch = letters[index];
		}

		cout << plane << '\n';
	}

	return 0;
}