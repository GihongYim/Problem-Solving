#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int N, M;
	int a, b;
	int temp;
	int arr[101];


	cin >> N >> M;
	for (int i = 1; i <= N; i++)
		arr[i] = i;
	for (int i = 0; i < M; i++)
	{
		cin >> a >> b;
		temp = arr[a];
		arr[a] = arr[b];
		arr[b] = temp;
	}
	for (int i = 1; i <= N; i++)
		cout << arr[i] << ' ';
	return 0;
}