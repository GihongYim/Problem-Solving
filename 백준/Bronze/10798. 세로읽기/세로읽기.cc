#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	string map[5];
	bool valid;
	for (int i = 0; i < 5; i++)
		cin >> map[i];
	valid = true;
	unsigned int idx = 0;
	while (valid)
	{
		valid = false;
		for (int i = 0; i < 5; i++)
		{
			if (idx >=map[i].length())
				continue;
			valid = true;
			cout << map[i][idx];
		}
		idx++;
	}
	return 0;
}