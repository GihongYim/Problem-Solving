#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int stat[4], n;
	int result = 0;
	for (int i = 0; i < 4; i++)
		cin >> stat[i];
	cin >> n;
	for (int i = 0; i < 4; i++) {
		result += (n - stat[i]);
	}
	if (result >= 0)
		cout << result << '\n';
	else
		cout << 0 << '\n';
	return 0;
}