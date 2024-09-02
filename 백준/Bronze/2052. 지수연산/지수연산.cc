#include <bits/stdc++.h>
using namespace std;

int main()
{
	// ios_base::sync_with_stdio(false);
	// cin.tie(NULL); cout.tie(NULL);
	double answer = 1;

	int n;

	cin >> n;

	answer = pow(0.5, n);
	printf("%.*f\n", n, answer);
	return 0;
}