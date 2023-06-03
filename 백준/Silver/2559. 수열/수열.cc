#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int N, K;
	int cdf[100005];
	int a;
	int ret;

	cin >> N >> K;
	cdf[0] = 0;
	for (int i = 1; i <= N; i++)
	{
		cin >> a;
		cdf[i] = cdf[i - 1] + a;
	}

	ret = cdf[K];
	for (int i = K + 1; i <= N; i++)
	{
		ret = max(ret, cdf[i] - cdf[i - K]);
	}
	cout << ret << '\n';
	return 0;
}