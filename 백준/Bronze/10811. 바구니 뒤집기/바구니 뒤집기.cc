#include <iostream>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int N, M;
	int arr[101];
	unsigned int begin, end;
	int temp;

	cin >> N >> M;
	for (int i = 1; i <= N; i++)
		arr[i] = i;
	for (int i = 0; i < M; i++)
	{
		cin >> begin >> end;
		while (begin < end)
		{
			temp = arr[begin];
			arr[begin] = arr[end];
			arr[end] = temp;
			begin++;
			end--;
		}
	}
	for (int i = 1; i <= N; i++)
		cout << arr[i] << ' ';
	return 0;
}