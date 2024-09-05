#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n;
	long long files[55];
	long long cluster;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> files[i];
	}

	cin >> cluster;

	long long result = 0;
	for (int i = 0; i < n; i++) {
		result += (files[i] / cluster);
		if (files[i] % cluster != 0)
			result++;
	}
	// cout << result << '\n';
	// cout << cluster << '\n';
	cout << result * cluster << '\n';

	return 0;
}