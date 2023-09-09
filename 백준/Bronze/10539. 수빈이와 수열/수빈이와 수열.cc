#include <iostream>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	long long N;
	long long total = 0;
	long long num;
	cin >> N;
	for (long long i = 1; i <= N; i++)
	{
		cin >> num;
		num = num * i;
		cout << num - total << ' ';
		total = num;
	}
	return 0;
}