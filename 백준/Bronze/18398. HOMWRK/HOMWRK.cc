#include <iostream>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int T, N;
	long long a, b;
	long long A, B;
	A = 0;
	B = 1;
	cin >> T;
	for (int test = 1; test <= T; test++) {
		cin >> N;
		for (int i = 0; i < N; i++) {
			cin >> a >> b;
			A = a + b;
			B = a * b;
			cout << A << ' ' << B << '\n';
		}
	}
	return 0;
}