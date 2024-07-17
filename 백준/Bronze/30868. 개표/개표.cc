#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int T;

	cin >> T;
	for (int t = 1; t <= T; t++) {
		int n;
		
		cin >> n;
		for (int i = 0; i < n / 5; i++) {
			cout << "++++ ";
		}
		for (int i = 0; i < (n % 5); i++) {
			cout << "|";
		}
		cout << '\n';
	}


	return 0;
}