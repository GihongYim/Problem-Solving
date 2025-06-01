#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n;
	int eat[2] = {0, 0};
	int curr = 1;

	cin >> n;

	while (n > 0) {
		if (n % 2) {
			eat[curr]++;
		}
		eat[curr] += n / 2;
		curr = 1 - curr;
		n /= 2;
	}

	cout << eat[0] << ' ' << eat[1] << '\n';

	return 0;
}