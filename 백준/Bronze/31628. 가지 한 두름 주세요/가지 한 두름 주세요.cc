#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	bool isAvail = true;

	vector<vector<string>> m(10, vector<string>(10));
	for (int i = 0; i < 10; i++)
		for (int j = 0; j < 10; j++)
			cin >> m[i][j];

	for (int i = 0; i < 10; i++){
		isAvail = true;
		for (int j = 0; j < 9; j++) {
			if (m[i][j] != m[i][j + 1]) {
				isAvail = false;
				break;
			}
		}
		if (isAvail) {
			cout << "1" << "\n";
			return 0;
		}
	}

	for (int j = 0; j < 10; j++) {
		isAvail = true;
		for (int i = 0; i < 9; i++) {
			if (m[i][j] != m[i + 1][j]) {
				isAvail = false;
				break;
			}
		}
		if (isAvail) {
			cout << "1" << "\n";
			return 0;
		}
	}

	cout << "0" << "\n";

	return 0;
}