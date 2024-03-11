#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int num[4];
	for (int i = 0; i < 4; i++) {
		cin >> num[i];
	}
	if (num[0] != 8 && num[0] != 9) {
		cout << "answer\n";
	} else if (num[1] != num[2]) {
		cout << "answer\n";
	} else if (num[3] != 8 && num[3] != 9) {
		cout << "answer\n";
	} else {
		cout << "ignore\n";
	}

	return 0;
}