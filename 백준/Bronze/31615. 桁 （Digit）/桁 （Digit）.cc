#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int a, b;
	int answer = 0;

	cin >> a >> b;
	a += b;

	while (a != 0) {
		a /= 10;
		answer++;
	}
	cout << answer << '\n';
	return 0;
}