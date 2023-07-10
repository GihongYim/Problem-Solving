#include <iostream>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	long long T, N;

	cin >> T;
	for (long long t = 1; t <= T; t++) {
		cin >> N;
		cout << N * N  <<  '\n';
	}
	return 0;
}