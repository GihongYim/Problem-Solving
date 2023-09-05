#include <iostream>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int T;
	int n;
	double d, v, f, c;
	int success;

	cin >> T;
	for (int test = 1; test <= T; test++)
	{
		cin >> n >> d;
		success = 0;
		for (int i = 0; i < n; i++)
		{
			cin >> v >> f >> c;
			if (d <= v * f / c)
			{
				success++;
			}
		}
		cout << success << '\n';
	}
	return 0;
}