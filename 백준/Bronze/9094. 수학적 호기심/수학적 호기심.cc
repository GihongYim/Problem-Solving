#include <iostream>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int T;
	int n, m;
	int count;

	cin >> T;
	for (int t = 0; t < T; t++)
	{
		count = 0;
		cin >> n >> m;
		for (int i = 1; i < n - 1; i++)
		{
			for (int j = i + 1; j < n; j++)
			{
				if ((i * i + j * j + m) % (i * j) == 0)
					count++;
			}
		}
		cout << count << '\n';
	}
	return 0;
}