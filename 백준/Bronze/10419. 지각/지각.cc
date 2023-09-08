#include <iostream>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	int t, d;

	cin >> n;
	for (int test = 0; test < n; test++)
	{
		cin >> d;
		for (int i = 1; i < 10000; i++)
		{
			t = i + i * i;
			if (t > d)
			{
				cout << i - 1 << '\n';
				break;
			}
		}
	}
	return 0;
}