#include <iostream>
using namespace std;

int gcd(int a, int b)
{
	if (b == 0)
		return a;
	else
		return gcd(b, a % b);
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int a,b,c,d;
	int num;
	int den;
	int divisor;

	cin >> a >> b;
	cin >> c >> d;

	num = a * d + c * b;
	den = b * d;
	divisor = gcd(num, den);
	cout << num / divisor << ' ' << den / divisor;
	return 0;
}