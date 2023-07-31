#include <iostream>
using namespace std;

int main(void) 
{
	ios::sync_with_stdio(false);
	long long A, B;

	cin >> A >> B;

	if (A > B) {
		long long temp;

		temp = A;
		A = B;
		B = temp;
	}
	cout << B * (B + 1) / 2 - (A - 1) * A / 2;
	return 0;
}