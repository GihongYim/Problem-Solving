#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N, M;
    cin >> N >> M;

    vector<vector<int>> adj(N + 1);
    for (int i = 0; i < M; ++i) {
        int u, v;
        cin >> u >> v;
        adj[v].push_back(u);
    }

    int x;
    cin >> x;

    vector<bool> visited(N + 1, false);
    function<void(int)> dfs = [&](int node) {
        visited[node] = true;
        for (int neighbor : adj[node]) {
            if (!visited[neighbor]) {
                dfs(neighbor);
            }
        }
    };
    dfs(x);
    int count = 0;
    for (int i = 1; i <= N; ++i) {
        if (visited[i]) {
            count++;
        }
    }
    cout << count - 1 << '\n';

    return 0;
}