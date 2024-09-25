#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int N, H;
	int machine;

	cin >> N >> H;
	int cnt = 0;
	for (int i = 0; i < N; i++) {
		cin >> machine;
		if (H >= machine)
			cnt++;
	}
	cout << cnt << '\n';

	return 0;
}