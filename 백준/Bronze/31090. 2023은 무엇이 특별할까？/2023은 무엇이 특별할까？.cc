#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int T;

	cin >> T;
	for (int t = 1; t <= T; t++) {
		int N; 
		cin >> N;
		if ((N + 1) % (N % 100) == 0) {
			cout << "Good\n";
		} else {
			cout << "Bye\n";
		}
	}

	return 0;
}