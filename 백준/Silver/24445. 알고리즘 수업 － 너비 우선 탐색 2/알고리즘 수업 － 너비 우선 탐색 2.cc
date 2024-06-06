#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <queue>
using namespace std;


const int MAX = 100005;
int N, M, R;
vector<int> adj[MAX];
int visited[MAX];

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    cin >> N >> M >> R;
    fill (visited, visited + N + 1, 0);
    for (int i = 0; i < M; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    for (int i = 1; i <= N; i++) {
        sort(adj[i].rbegin(), adj[i].rend());
    }

    int order = 1;
    visited[R] = order++;

    queue<int> q;
    q.push(R);
    while (!q.empty()) {
        int curr = q.front(); q.pop();

        for (auto n : adj[curr]) {
            if (visited[n]) continue;
            visited[n]= order++;
            q.push(n);
        }
    }

    for (int i = 1; i <= N; i++) {
        cout << visited[i] << '\n';
    }
    return 0;
}