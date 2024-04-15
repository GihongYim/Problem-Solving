#include <bits/stdc++.h>
using namespace std;
int N, M;

int maxGtr = 0;
int minCnt = 0x3f3f3f3f;
string table[11];

void dfs(int n, unsigned long long visited, int gtr, int cnt) {
	if (n == N) {
		if (gtr == 0) {

		}
		else if (gtr > maxGtr) {
			maxGtr = gtr;
			minCnt = cnt;
		} else if (gtr == maxGtr) {
			minCnt = min(minCnt, cnt);
		}
		return;
	}
	dfs(n + 1, visited, gtr, cnt);
	for (int i = 0 ; i < M; i++) {
		if (table[n][i] == 'Y' && !(visited & (1LL << i))) {
			visited |= (1LL << i);
			gtr++;
		}
	}
	dfs(n + 1, visited, gtr, cnt + 1);
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	string gtr[11], tbl;


	cin >> N >> M;
	for (int i = 0; i < N ; i++) {
		cin >> gtr[i] >> table[i];
	}
	dfs(0, 0, 0, 0);
	if (minCnt != 0x3f3f3f3f)
		cout << minCnt << '\n';
	else
		cout << -1 << '\n';
	return 0;
}