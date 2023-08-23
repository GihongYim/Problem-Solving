#include <iostream>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int a[3];
	while (1)
	{
		for (int i = 0; i < 3; i++)
		{
			cin >> a[i];
		}
		if (a[0] == 0 && a[1] == 0 && a[2] == 0)
			break;
		if (a[1] - a[0] == a[2] - a[1]) {
			cout << "AP " << a[2] + (a[1] - a[0]) << '\n';
		} else  {
			cout << "GP " << a[2] * (a[1] / a[0]) << '\n';
		}
	}
	return 0;
}