#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	string line;

	cin >> line;
	for (int i = 0; i < line.length() - 1; i++) {
		if (line[i] == line[i + 1]) {
			cout << "Or not.\n";
			return 0;
		}
	}
	cout << "Odd.\n";
	return 0;
}