#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	long long a, b, c;
	double answer;
	int count = 1;
	while (1)
	{
		cin >> a >> b >> c;
		if (a == 0 && b == 0 && c == 0)
			break;
		if (a == -1)
		{
			cout << "Triangle #" << count << '\n';
			answer = c * c - b * b;
			if (answer <= 0)
			{
				cout << "Impossible.\n";
			}
			else
			{
				cout << "a = " << fixed << setprecision(3) << sqrt(answer) << '\n';
			}
		}
		else if (b == -1)
		{
			cout << "Triangle #" << count << '\n';
			answer = c * c - a * a;
			if (answer <= 0)
			{
				cout << "Impossible.\n";
			}
			else
			{
				cout << "b = " << fixed << setprecision(3) << sqrt(answer) << '\n';
			}
		}
		else if (c == -1)
		{
			cout << "Triangle #" << count << '\n';
			answer = a * a + b * b;
			if (answer <= 0)
			{
				cout << "Impossible.\n";
			}
			else
			{
				cout << "c = " << fixed << setprecision(3) << sqrt(answer) << '\n';
			}
		}
		cout << '\n';
		count++;
	}
	return 0;
}