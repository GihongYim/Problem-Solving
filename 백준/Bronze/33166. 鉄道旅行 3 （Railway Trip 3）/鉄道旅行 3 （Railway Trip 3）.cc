#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int p, q, a, b;
	int fare = 0;

	cin >> p  >> q >> a >> b;

	if (q < p) {
		fare = q * a;
	} else {
		fare = p * a + (q - p) * b;
	}
	cout << fare << '\n';
	return 0;
}