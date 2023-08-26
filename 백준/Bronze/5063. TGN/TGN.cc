#include <iostream>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int N;
	int r, e, c;
	cin >> N;
	for (int test = 1; test <= N; test++)
	{
		cin >> r >> e >> c;

		if (r < e - c)
		{
			cout << "advertise\n";
		}
		else if (r > e - c)
		{
			cout << "do not advertise\n";
		}
		else
		{
			cout << "does not matter\n";
		}
	}
	return 0;
}