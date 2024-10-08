#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll A[100005];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int N;
	ll K;

	cin >> N >> K;
	for (ll i = 0; i < N; i++) {
		cin >> A[i];
	}
	ll answer = 0;
	for (int i = 0; i < N / 2; i++) {
		ll diff = abs(A[i] - A[N - i - 1]);
		if ((diff % K) <= K / 2) {
			answer += (diff / K);
			answer += (diff % K);
		}
		else {
			answer += (diff / K) + 1;
			answer += (K - (diff % K));
		}
	}
	cout << answer << '\n';

	return 0;
}