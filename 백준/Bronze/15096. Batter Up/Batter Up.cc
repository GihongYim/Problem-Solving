#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n;
	cin >> n;

	double a;
	double avg = 0.0;
	int cnt = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> a;
		if (a < 0)
			continue;
		avg += a;
		cnt++;
	}

	cout << avg / cnt << endl;

	return 0;
}