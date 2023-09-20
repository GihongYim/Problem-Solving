#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int N, L;

	cin >> N >> L;

	vector<int> h(N);
	for (int i = 0; i < N; i++)
	{
		cin >> h[i];
	}
	sort(h.begin(), h.end());
	for (int i = 0; i < N; i++)
	{
		if (L >= h[i])
			L++;
	}
	cout << L << '\n';
	return 0;
}