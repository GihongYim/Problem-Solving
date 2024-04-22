#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int M, N;
	
	cin >> M >> N;
	vector<int> l(N);
	for (int i = 0; i < N; i++)
		cin >> l[i];
	
	int left = 1;
	int right = *max_element(l.begin(), l.end());
	int cnt = 0;
	int mid;
	int result = 0;
	while (left <= right) {
		mid = (left + right) / 2;
		cnt = 0;
		for (int i = 0; i < N; i++) {
			cnt += l[i] / mid;
		}

		if (cnt < M) {
			right = mid - 1;
		} else {
			result = mid;
			left = mid + 1;
		}
	}
	cout << result << '\n';
	return 0;
}