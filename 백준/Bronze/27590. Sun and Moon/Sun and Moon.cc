#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int ds, ys;
	int dm, ym;
	int sun, moon;
	int answer = 0;

	cin >> ds >> ys;
	cin >> dm >> ym;
	sun = ds;
	moon = dm;
	while (1) {
		if (sun == 0 && moon == 0) break;

		sun++;
		moon++;

		if (sun == ys)
			sun = 0;
		
		if (moon == ym)
			moon = 0;
		answer++;
	}
	cout << answer << '\n';

	return 0;
}