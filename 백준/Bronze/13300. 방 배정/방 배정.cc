#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int N, K;
	int S, Y;
	int ans = 0;
	int cat[14];

	fill(cat, cat + 14, 0);
	cin >> N >> K;
	for (int i = 0; i < N; i++)
	{
		cin >> S >> Y;
		cat[S + Y * 2]++;
	}
	for (int i = 2; i <= 13; i++)
	{
		ans += (cat[i] + 1) / 2;
	}
	cout << ans << '\n';
	return 0;
}