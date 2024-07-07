#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

#define MAXN 100005

int N;
long long A[MAXN];
long long B[MAXN];
long long diff[MAXN];
long long cnt[MAXN];
long long X[MAXN];

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> A[i];
	}
	for (int i = 0; i < N; i++) {
		cin >> B[i];
	}
	for (int i = 0; i < N; i++) {
		cin >> X[i];
	}
	for (int i = 0; i < N; i++) {
		diff[i] = abs(A[i] - B[i]);
		if ((diff[i] % X[i]) != 0) {
			cout << "-1\n";
			return 0;
		}
		cnt[i] = diff[i] / X[i];
	}
	for (int i = 0; i < N - 1; i++) {
		if ((cnt[i] % 2) != (cnt[i + 1] % 2)) {
			cout << "-1\n";
			return 0;
		}
	}
	long long maxCnt = cnt[0];
	for (int i = 0; i < N; i++) {
		maxCnt = max(maxCnt, cnt[i]);
	}
	cout << maxCnt << '\n';
	return 0;
}