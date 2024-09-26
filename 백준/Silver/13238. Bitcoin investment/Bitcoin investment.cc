#include <bits/stdc++.h>
using namespace std;

int price[10005];

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> price[i];
	}

	int prevMin = 0x3f3f3f3f;
	int maxProfit = 0;

	for (int i = 0; i < n; i++) {
		maxProfit = max(maxProfit, price[i] - prevMin);
		prevMin = min(prevMin, price[i]);
	}
	cout << maxProfit << '\n';

	return 0;
}