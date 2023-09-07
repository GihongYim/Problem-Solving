#include <iostream>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, T;
	int works[100];
	int answer;

	cin >> n >> T;
	for (int i = 0; i < n; i++)
	{
		cin >> works[i];
	}
	answer = n;
	for (int i = 0; i < n; i++)
	{
		if (T - works[i] < 0)
		{
			answer = i;
			break;
		}
		T -= works[i];
	}
	cout << answer << '\n';
	return 0;
}