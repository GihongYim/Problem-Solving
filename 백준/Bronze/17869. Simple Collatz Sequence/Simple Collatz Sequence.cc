#include <iostream>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	long long n;
	int answer = 0;
	cin >> n;
	while (n != 1)
	{
		if (n % 2 == 0)
			n /= 2;
		else
			n += 1;
		answer++;
	}
	cout << answer << '\n';
	return 0;
}