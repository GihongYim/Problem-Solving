#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	string format;
	char prev = '0';
	int ret = 1;

	cin >> format;

	for (unsigned int i = 0; i < format.length(); i++)
	{
		if (format[i] == 'c')
		{
			if (prev == 'c')
				ret *= 25;
			else
				ret *= 26;
			prev = 'c';
		}
		else
		{
			if (prev == 'd')
				ret *= 9;
			else
				ret *= 10;
			prev = 'd';

		}
	}
	cout << ret << '\n';
	return 0;
}