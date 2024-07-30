#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int T;

	cin >> T;

	for (int test_case = 1; test_case <= T; test_case++) {
		unsigned long long N;

		cin >> N;
		unsigned long long total = 0;
		unsigned long long candy;
		for (int i = 0; i < N; i++) {
			cin >> candy;
			total += candy;
			total %= N; 
		}

		if (total % N == 0) {
			cout << "YES\n";
		} else {
			cout << "NO\n";
		}

	}


	return 0;
}