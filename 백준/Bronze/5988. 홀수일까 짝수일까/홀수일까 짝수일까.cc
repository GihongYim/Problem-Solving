#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int N;
	string k;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> k;
		if ((k[k.size() - 1] - '0') % 2 == 0)
		{
			cout << "even\n";
		}
		else
		{
			cout << "odd\n";
		}
	}
	return 0;
}