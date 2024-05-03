#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

const int MAX = 100005;

int N, M, P;
vector<int> adj[MAX];
int visited[MAX];
bool ok;
int maxCnt = 0;
void dfs(int n, int cnt) {
    if (adj[n].empty()) return;
    int nxt = adj[n][0];
    maxCnt = max(maxCnt, cnt);
    visited[nxt]++;
    if (visited[nxt] == 1) dfs(nxt, cnt + 1);
    if (visited[nxt] > 1) ok = false;
}
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    cin >> N >> M >> P;
    for (int i = 0; i < N; i++) {
        int a, b;
        cin >> a >> b;
        adj[b].push_back(a);
    }
    fill (visited, visited + N + 1, 0);
    visited[P] = 1;
    ok = true;
    dfs(P, 1);
    if (ok) {
        cout << maxCnt;
    } else {
        cout << -1 << '\n';
    }
    return 0;
}