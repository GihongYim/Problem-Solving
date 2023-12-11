#include <bits/stdc++.h>
using namespace std;
int n, k;
int a[5000001];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	cin >> n >> k;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort(a, a + n);
	cout << a[k - 1] << '\n';
	return 0;
}