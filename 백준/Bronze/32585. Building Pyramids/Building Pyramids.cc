#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	long long n;

	cin >> n;

	long long total_blocks = (n * (n + 1) * (n + 2)) / 6;
	cout << total_blocks << "\n";


	return 0;
}