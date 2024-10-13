#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int N, L;

	ll c = 0;
	int answer = 0;
	int hours = 0;
	cin >> N >> L;

	queue<int> q;

	for (int i = 0; i < N; i++)
	{
		ll a;
		cin >> a;
		c += a ;
		q.push(a);
		if (q.size() > L) {
			ll b = q.front();
			c -= b;
			q.pop();
		}
		if (c >= 129 && c <= 138) {
			hours++;
		} else {
			// answer = max(answer, hours);
			// hours = 0;
		}
	}
	// answer = max(answer, hours);
	cout << hours << '\n';
	return 0;
}