#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n;

	map<char, int> uospcCnt = {
		{'u', 0}, {'o', 0}, {'s', 0}, {'p', 0}, {'c', 0}
	};

	cin >> n;

	string s;
	cin >> s;

	for (char c : s)
	{
		if (uospcCnt.find(c) != uospcCnt.end())
		{
			uospcCnt[c]++;
		}
	}

	int minCnt = INT_MAX;
	for (const auto& pair : uospcCnt)
	{
		minCnt = min(minCnt, pair.second);
	}
	cout << minCnt << '\n';

	return 0;
}