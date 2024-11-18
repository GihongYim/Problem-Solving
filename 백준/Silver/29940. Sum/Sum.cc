#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	int n, s;
	
	cin >> n >> s;

	vector<int> a(n);

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int left = 0;
	int right = n - 1;
	int cnt = 0;

	while (left < right) {
		if (a[left] + a[right] == s) {
			cnt++;
			left++;
			right--;
		} else if (a[left] + a[right] < s) {
			left++;
		} else if (a[left] + a[right] > s) {
			right--;
		}
	}
	cout << cnt << '\n';

	return 0;
}