#include <iostream>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int total;
	int price;

	cin >> total;
	for (int i = 0; i < 9; i++) {
		cin >> price;
		total -= price;
	}
	cout << total << '\n';
	return 0;
} 