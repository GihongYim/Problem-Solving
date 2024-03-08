#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;


const int MAX = 200005;
int N, R, Q;
vector<int> adj[MAX];
bool visited[MAX];
int child[MAX];

int dfs(int n) {

    int cnt = 1;
    for (auto nxt : adj[n]) {
        if (visited[nxt]) continue;
        visited[nxt] = true;
        cnt += dfs(nxt);
    }
    return child[n] = cnt;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> N >> R >> Q;

    for (int i = 0; i < N - 1; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    fill(visited, visited + 1 + N, false);
    fill(child, child + 1 + N, 0);
    visited[R] = true;
    dfs(R);
    for (int i = 0; i < Q; i++) {
        int U;
        cin >> U;
        cout << child[U] << '\n';
    }

    return 0;
}