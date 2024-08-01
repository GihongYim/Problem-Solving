#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int a, b, c, d;

	cin >> a >> b >> c >> d;

	b += a;
	d += c;

	int pmn;

	for (int i = 0; i < 3; i++) {
		cin >> pmn;
		int cnt = 0;
		if ((pmn % b) > 0 && (pmn % b) <= a) {
			cnt++;
		} 

		if ((pmn % d) > 0 && (pmn % d) <= c) {
			cnt++;
		} 
		cout << cnt << '\n';
	}
	return 0;
}