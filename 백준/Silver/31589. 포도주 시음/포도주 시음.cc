#include <bits/stdc++.h>
using namespace std;

int N, K;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> N >> K;

	vector<long long> T(N );
	for (int i = 0; i < N; i++) {
		cin >> T[i];
	}
	sort(T.begin(), T.end());

	int left = 0;
	int right = N - 2;
	long long maxValue = T[N - 1];
	K -= 2;
	while (K > 0) {
		long long diff = T[right] - T[left];
		maxValue += diff;
		right--;
		left++;
		K -= 2;
	}

	cout << maxValue << '\n';
	return 0;
}