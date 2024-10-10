#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int T = 0;
	
	cin >> T;

	for (int test_case = 1; test_case <= T; test_case++)
	{
		long long a, b, c;
		long long minLen = LLONG_MAX;
		cin >> a >> b >> c;

		minLen = min(minLen ,a * a + (b + c) * (b + c));
		minLen = min(minLen ,b * b + (a + c) * (a + c));
		minLen = min(minLen ,c * c + (a + b) * (a + b));
		cout << minLen << '\n';
	}
	
	return 0;
}