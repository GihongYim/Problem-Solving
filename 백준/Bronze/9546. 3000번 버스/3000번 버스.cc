#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int t;

	cin >> t;
	for (int test_case = 0; test_case < t; test_case++) {
		int k;
		cin >> k;
		int cus = 0;
		for (int i = 0; i < k; i++) {
			cus *= 2;
			cus++;
		}
		cout << cus << '\n';
	}

	return 0;
}