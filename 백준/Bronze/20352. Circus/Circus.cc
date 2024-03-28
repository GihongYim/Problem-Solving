#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	double area;
	double radius;

	cin >> area;

	radius = sqrt(area / M_PI);
	// cout << fixed;
	cout << setprecision(12);
	cout << 2 * radius * M_PI;
	return 0;
}