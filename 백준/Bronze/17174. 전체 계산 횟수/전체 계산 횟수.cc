#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	int n, m;
	cin >> n >> m;
	int answer = 0;
	while (n >= m) {
		answer += n;
		int remainder = n % m;
		n /= m;
		// n += remainder;
	}
	cout << answer + n << '\n';
	return 0;
}