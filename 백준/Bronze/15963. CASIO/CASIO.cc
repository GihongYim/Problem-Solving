#include <iostream>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	long long N, M;

	cin >> N >> M;
	if (N == M)
		cout << "1\n";
	else
		cout << "0\n";
	return 0;
}