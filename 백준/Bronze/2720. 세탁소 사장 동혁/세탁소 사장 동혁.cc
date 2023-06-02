#include <iostream>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int T;
	int cent;

	cin >> T;
	int coin[4];
	for (int t = 0; t < T; t++)
	{
		fill(coin, coin + 4, 0);
		cin >> cent;
		coin[0] = cent / 25;
		cent -= 25 * coin[0];
		coin[1] = cent / 10;
		cent -= 10 * coin[1];
		coin[2] = cent / 5;
		cent -= 5 * coin[2];
		coin[3] = cent / 1;
		cent -= 1 * coin[3];
		for (int i = 0; i < 4; i++)
			cout << coin[i] << ' ';
		cout << '\n';
	}
	return 0;
}