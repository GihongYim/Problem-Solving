#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int P;

	cin >> P;
	int remain = 100 - P;

	int coin[4] = {25, 10, 5, 1};
	int coinCnt[4] = {0,};
	for (int i = 0; i < 4; i++)
	{
		int cnt = remain / coin[i];
		coinCnt[i] = cnt;
		remain -= (cnt * coin[i]);
	}
	for (int i = 0; i < 4; i++)
	{
		cout << coinCnt[i] << ' ';
	}
	return 0;
}