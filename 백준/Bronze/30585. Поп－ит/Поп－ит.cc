#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int h, w;
	string state;
	int zero, one;
	int result = 0;

	cin >> h >> w;

	zero = 0;
	one = 0;
	for (int i = 0; i < h; i++) {
		cin >> state;

		for (int j = 0; j < w; j++) {
			if(state[j] == '0')
				zero++;
			else
				one++;
		}
	}
	result = min(zero, one);
	cout << result << '\n';

	return 0;
}