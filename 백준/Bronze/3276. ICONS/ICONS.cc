#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int n;
	int minValue = 0x3f3f3f3f;
	int x, y;

	cin >> n;
	for (int i = 1; i <= 100; i++) {
		int mat;
		for (int j = 1; j <= 100; j++) {
			if (i * j >= n) {
				mat = i + j;
				if (mat < minValue) {
					minValue = mat;
					x = i;
					y = j;
				}
			}
		}
	}
	cout << x << ' ' << y << '\n';
	return 0;
}