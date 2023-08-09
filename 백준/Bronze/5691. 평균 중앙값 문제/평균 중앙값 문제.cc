#include <iostream>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	long long A, B;

	while(1)
	{
		cin >> A >> B;
		if (!A && !B)
			break;
		cout << A - (B - A) << '\n';
	}
	return 0;
}