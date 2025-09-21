#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n;
	int x, s;
	int c, p;

	int win = 0;

	cin >> n;
	cin >> x >> s;

	for(int i = 0 ; i < n; i++)
	{
		cin >> c >> p;

		if(c <= x && p > s)
			win++;
	}

	cout << (win >= 1 ? "YES" : "NO") << "\n";

	return 0;
}