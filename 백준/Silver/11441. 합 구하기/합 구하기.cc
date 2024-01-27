#include <bits/stdc++.h>
using namespace std;

int n;
int arr[100005];
int acc[100005];
int m, s, e;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	acc[0] = arr[0];
	for (int i = 1; i < n; i++) {
		acc[i] = acc[i - 1] + arr[i];
	}

	cin >> m;
	for (int i = 0; i < m; i++) {
		cin >> s >> e;
		cout << acc[e - 1] - acc[s - 2] << '\n';

	}
	return 0;
}