#include <iostream>
#include <algorithm>
using namespace std;

int N;
long long M;
long long tree[1000001];



int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> N >> M;
	long long longest = -1;

	for (int i = 0; i < N; i++) {
		cin >> tree[i];
		longest = max(tree[i], longest);
	}

	long long lim = 1;
	while (lim < longest) {
		lim *= 2;
	}
	long long rem;
	long long cur = 0;
	for (long long d = lim / 2; d >= 1; d /= 2) {
		rem = 0;
		for (int i = 0; i < N; i++) {
			if (tree[i] > (cur+d)) {
				rem += (tree[i] - (cur + d));
			}
		}
		if (rem >= M) {
			cur += d;
		}
	}
	cout << cur << '\n';
}