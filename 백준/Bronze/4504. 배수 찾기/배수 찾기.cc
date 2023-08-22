#include <iostream>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	int i;
	
	cin >> n;
	while (1) {
		cin >> i;
		if (i == 0)
			break;
		if (i % n != 0) {
			cout << i << " is NOT a multiple of " << n << ".\n";
		} else  {
			cout << i << " is a multiple of " << n << ".\n";
		}
	}
	return 0;
}