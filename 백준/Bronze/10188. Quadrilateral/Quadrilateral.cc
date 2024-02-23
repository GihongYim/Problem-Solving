#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int T;
	int width, height;

	cin >> T;
	for (int t = 0; t < T; t++) {
		cin >> width >> height;
		for (int i = 0; i < height; i++) {
			for (int j = 0; j < width; j++) {
				cout << 'X';
			}
			cout << '\n';
	}
	cout << '\n';
	}

	return 0;
}