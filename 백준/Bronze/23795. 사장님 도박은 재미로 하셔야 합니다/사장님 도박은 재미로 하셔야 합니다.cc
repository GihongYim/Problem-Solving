#include <iostream>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	long long num;
	long long total = 0;
	while (1) {
		cin >> num;
		if (num == -1)
			break;
		total += num;
	}
	cout << total << '\n';
	return 0;
}