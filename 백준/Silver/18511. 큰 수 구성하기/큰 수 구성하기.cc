#include <bits/stdc++.h>
using namespace std;

int maxNum = 0;
int N, K;

void dfs(int n, int num, vector<int>& s)
{
	if (num > N) {
		return;
	}
	else
	{
		maxNum = max(maxNum, num);
	}
	

	for (int i = 0; i < s.size(); i++)
	{
		dfs(n + 1, num * 10 + s[i], s);
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);


	cin >> N >> K;

	vector<int> s(K);
	for (int i = 0; i < K; i++)
		cin >> s[i];

	dfs(0, 0, s);
	cout << maxNum << '\n';
	return 0;
}