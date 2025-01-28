#include <bits/stdc++.h>
using namespace std;
#define MAX 0x3f3f3f3f3f

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int N;

	long long evenMin = MAX;
	long long oddMin = MAX;

	cin >> N;

	vector<long long> v(N);

	for (int i = 0; i < N; i++) {
		cin >> v[i];
	}

	sort(v.begin(), v.end());

	for (int i = 0; i < N - 1; i++) {

		for (int j = i + 1; j < N; j++) {
			if ((v[j] - v[i]) % 2 == 0) {
				evenMin = min(v[j] - v[i], evenMin);
				break;
			}
		}

		for (int j = i + 1; j < N; j++) {
			if ((v[j] - v[i]) % 2 == 1) {
				oddMin = min(v[j] - v[i], oddMin);
				break;
			}
		}
	}
	if (evenMin == MAX)
		evenMin = -1;
	if (oddMin == MAX)
		oddMin = -1;

	cout << evenMin << ' ' << oddMin << '\n';

	return 0;
}