#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	double a, b;

	cin >> a >> b;
	cout << setprecision(10);
	cout << fixed;
	cout << (a + b) - sqrt(a * a + b * b) << endl;
	return 0;
}