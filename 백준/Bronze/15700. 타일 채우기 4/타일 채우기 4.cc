#include <iostream>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	long long N, M;

	cin >> N >> M;
	
	cout << N * M / 2 << '\n';
	return 0;
}