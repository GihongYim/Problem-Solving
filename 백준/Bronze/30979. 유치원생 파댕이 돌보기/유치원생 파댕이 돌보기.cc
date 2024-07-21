#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int T;

	cin >> T;

	int N;

	cin >> N;

	int F;
	int total = 0;
	for (int i = 0; i < N; i++) {
		cin >> F;
		total += F;
		if (total >= T) {
			cout << "Padaeng_i Happy\n";
			return 0;
		}
	}
	cout << "Padaeng_i Cry\n";

	return 0;
}