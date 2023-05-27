#include <iostream>
using namespace std;

int main(void)
{
	int n;
	int a, b;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> a >> b;
		if (a < b)
			cout << "NO BRAINS\n";
		else
			cout << "MMM BRAINS\n";
	}
	return 0;
}