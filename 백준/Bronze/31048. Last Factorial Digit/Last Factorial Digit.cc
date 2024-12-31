#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int T;
	int N;

	cin >> T;
	for (int t = 1; t <= T; t++) {
		int fact = 1;
		cin >> N;

		for (int i = 2; i <= N; i++) {
			fact *= i;
			fact %= 10;
		}
		cout << fact << '\n';
	}



	return 0;
}