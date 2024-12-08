#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int N;
	int cnt = 0;

	cin >> N;
	
	int m;
	
	for (int i = 1; i <= N; i++) {
		cin >> m;
		if (i != m) cnt++;
	}

	cout << cnt << '\n';

	return 0;
}