#include <bits/stdc++.h>
using namespace std;

int arr[2000005];

int main(void)
{
	int n, x;
	int ret = 0;
	int num[100005];
	fill(arr, arr + 2000001, 0);

	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> num[i];
	cin >> x;
	for (int i = 0; i < n; i++)
	{
		if (x - num[i] > 0 && arr[x - num[i]] > 0)
			ret++;
		arr[num[i]]++;
	}
	cout << ret << '\n';
	return 0;
}