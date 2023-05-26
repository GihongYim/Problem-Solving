#include <iostream>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int N, M;
	int i, j, k;
	int arr[105];
	cin >> N >> M;
	fill(arr,arr + N + 1, 0);
	for (int m = 0; m < M; m++)
	{
		cin >> i >> j >> k;
		for (int t = i; t <= j; t++)
		{
			arr[t] = k;
		}
	}
	for (int i = 1; i <= N; i++)
	{
		cout << arr[i] << ' ';
	}
	return 0;
}