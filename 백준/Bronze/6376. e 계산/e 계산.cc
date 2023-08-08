#include <iostream>
using namespace std;

double fact(int n)
{
	double f = 1;
	for (double i = 2; i <= n; i++)
		f *= i;
	return f;
}

int main(void)
{
	double i;
	double e;

	e = 1.0;
	i = 1;
	cout << "n e\n" << "- -----------" << '\n' << "0 1\n";
	for (int n = 1; n <= 9; n++) {
		e +=  1 / fact(n);
		cout << n << ' ';
		if (n == 1) printf("%d\n", 2);
		else if (n == 2) printf("2.5\n");
		else printf("%.9f\n", e);
	}
	return 0;
}