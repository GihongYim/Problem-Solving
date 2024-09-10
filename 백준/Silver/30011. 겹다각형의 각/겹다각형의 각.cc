#include <bits/stdc++.h>
using namespace std;


int n;
long long a[1001];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	long long total = 0;

	cin >> a[0];
	total = 0 ;
	for (int i = 1; i < n; i++) {
		total += a[i];
	}
	cout << (a[0] * 180 - 360)  + total * 180 << '\n';
	return 0;
}