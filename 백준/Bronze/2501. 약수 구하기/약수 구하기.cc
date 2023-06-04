#include <iostream>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int N, K;

	cin >> N >> K;
	int cnt = 0;
	for (int i = 1; i <= N; i++)
	{
		if (N % i == 0)
			cnt++;
		if (cnt == K)
		{
			cout << i << '\n';
			return 0;
		}
	}
	cout << 0 << '\n';
	return 0;
}