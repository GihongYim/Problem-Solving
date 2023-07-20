#include <iostream>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int s, m, l;
	int total;

	cin >> s >> m >> l;
	total = s + 2 * m + 3 * l;
	if (total < 10)
		cout << "sad\n";
	else
		cout << "happy\n";
	return 0;
}