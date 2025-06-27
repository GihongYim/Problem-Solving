#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n, k;
	double score;
	double total = 0.0;

	cin >> n >> k;
	for (int i = 0; i < k; i++) {
		cin >> score;
		total += score;
	}

	cout << (total - 3.0 * (n - k)) / (double)n << ' ' << (total + 3.0 * (n - k)) / (double)n << '\n';


	return 0;
}