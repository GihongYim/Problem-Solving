#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int N;

	long long angry = 0;
	long long suho = 0;
	cin >> N;

	int day;
	for (int i = 0; i < N; i++) {
		cin >> day;
		if (day == 1)
			angry++;
		else
			angry--;
		suho += angry;
	}
	cout << suho << '\n';

	return 0;
}