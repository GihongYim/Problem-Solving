#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	int N;
	int num[10];
	fill(num, num + 10, 0);
	cin >> N;
	while (N > 0)
	{
		num[N % 10]++;
		N /= 10;
	}
	num[6] = (num[6] + num[9] + 1) / 2;
	num[9] = num[6];
	int result;

	result = 0;
	for (int i = 0; i < 10; i++)
		if (result < num[i])
			result = num[i];
	cout << result;
	return (0);
}