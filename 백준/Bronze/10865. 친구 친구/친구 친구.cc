#include <bits/stdc++.h>
using namespace std;

int companion[100001];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int n, m;
	int a, b;
	cin >> n >> m;
	fill(companion, companion + n + 1, 0);

	for (int i = 0; i < m; i++) {
		cin >> a >> b;
		companion[a]++;
		companion[b]++;
	}
	for (int i = 1; i <= n; i++) {
		cout << companion[i] << '\n';
	}
	return 0;
}