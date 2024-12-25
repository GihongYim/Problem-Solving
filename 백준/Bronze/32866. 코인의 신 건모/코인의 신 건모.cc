#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	double N, X;

	cin >> N;
	cin >> X;
	cout << setprecision(6);
	cout << fixed;
	cout << (100.0 / (100.0 - X) - 1.0) * 100 << '\n';
	return 0;
}