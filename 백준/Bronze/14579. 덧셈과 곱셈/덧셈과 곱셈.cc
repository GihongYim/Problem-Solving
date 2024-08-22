#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int a, b;
	int answer = 1;
	const int MOD = 14579;

	cin >> a >> b;

	for (int i = a; i <= b; i++) 
	{
		answer *= (i * (i + 1) / 2);
		answer %= 14579;
	}
	cout << answer << '\n';

	return 0;
}