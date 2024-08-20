#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int cnt = 0;
	string n;
	while (cin >> n) 
	{
		if (n[0] == '-' || n[0] == '0')continue;
		cnt++;
	}
	cout << cnt << '\n';

	return 0;
}