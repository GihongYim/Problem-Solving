#include <iostream>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int S, K, H;
	cin >> S >> K >> H;
	if (S + K + H >= 100)
		cout << "OK\n";
	else if (S < K && S < H)
		cout << "Soongsil\n";
	else if (K < S && K < H)
		cout << "Korea\n";	
	else if (H < S && H < K)
		cout << "Hanyang\n";
	return 0;
}