#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int curr = 0;
	string dir = "NESW";
	int t;

	for (int i = 0; i < 10; i++) {
		cin >> t;
		curr += t;
		curr %= 4;
	}
	cout << dir[curr] << '\n';


	return 0;
}