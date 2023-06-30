#include <iostream>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n[5];
	int test = 1;

	while (1)
	{
		cin >> n[0];
		if (n[0] == 0)
			break ;
		n[1] = 3 * n[0];
		if (n[1] % 2 == 1) 
			n[2] = (n[1] + 1) / 2;
		else
			n[2] = n[1] / 2;
		n[3] = 3 * n[2];
		n[4] = n[3] / 9;
		if (n[1] % 2 == 1) 
			cout << test << ". odd " << n[4] << '\n';
		else
			cout << test << ". even " << n[4] << '\n';
		test++;
	}
	return 0;
}