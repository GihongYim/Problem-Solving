#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	double mpg;
	double lpk;

	cin >> mpg;
	lpk =  3.785411784 / (mpg * 1609.344 * 0.00001);
	cout << fixed << setprecision(6);
	cout << lpk << '\n';
	return 0;
}