#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	string str;
	
	cin >> str;
	for (unsigned int i = 0; i < str.length() / 2; i++)
	{
		if (str[i] != str[str.length() - 1 - i])
		{
			cout << 0;
			return 0;
		}
	}
	cout << 1;
	return 0;
}