#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int n;

	cin >> n;
	vector<int> b(n);

	for (int i = 0; i < n; i++) {
		cin >> b[i];
	}
	sort(b.rbegin(), b.rend());
	
	int cnt = 1;
	int maxScore = b[0] + 1;
	for (int i = 1; i < n; i++) {
		if (maxScore <= b[i] + n) {
			cnt++;
		}
		else {
			break;
		}
		maxScore = max(maxScore, b[i] + i + 1);
	}
	cout << cnt << '\n';
	return 0;
}