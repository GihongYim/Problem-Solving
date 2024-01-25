#include <iostream>
#include <algorithm>
using namespace std;

pair<int, int> p[400000];


int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int N, r;
	r = 0;
	cin >> N;
	int s, t;
	for (int i = 0; i < N; i++) {
		cin >> s >> t;
		p[i] = { s,1 };
		p[i + N] = { t,-1 };
	}
	sort(p, p + 2 * N);
	for (int i = 0, s = 0; i < 2 * N; i++) {
		r = max(r, s += p[i].second);
	}
	cout << r << '\n';

	return 0;
}