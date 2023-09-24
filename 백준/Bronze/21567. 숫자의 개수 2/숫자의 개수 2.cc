#include <iostream>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	long long a, b, c;
	int cnt[10];
	fill(cnt, cnt + 10, 0);

	cin >> a >> b >> c;
	a *= b;
	a *= c;
	if (a == 0) {
		cnt[0] = 1;
	} else {
		while (a > 0) {
			cnt[a % 10]++;
			a /= 10;
		}
	}
	for (int i = 0; i < 10; i++) {
		cout << cnt[i] << '\n';
	}
	return 0;
}