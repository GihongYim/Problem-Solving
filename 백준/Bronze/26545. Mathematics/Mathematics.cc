#include <iostream>
using namespace std;

int main(void)
{

	int n, m;
	int sum;

	sum = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> m;
		sum += m;
	}
	cout << sum << '\n';
	return (0);
}