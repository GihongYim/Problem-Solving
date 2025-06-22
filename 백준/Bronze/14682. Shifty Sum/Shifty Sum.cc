#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int N, k;
	int curr;
	int shiftSum;

	cin >> N >> k;

	shiftSum = N;
	curr = N;
	for (int i = 0; i < k; i++) {
		curr *= 10;
		shiftSum += curr;
	}

	cout << shiftSum << '\n';

	return 0;
}