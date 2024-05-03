#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
const int MAX = 1005;
int N, M;
bool visited[MAX];
vector<int> adj[MAX];

void dfs(int curr)
{
    for (auto nxt : adj[curr]) {
        if (!visited[nxt]) {
            visited[nxt] = true;
            dfs(nxt);
        }
    }
}
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    cin >> N >> M;
    fill(visited, visited + N + 1, false);
    
    for (int i = 0; i < M; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    int connected = 0;
    for (int i = 1; i <= N; i++) {
        if (!visited[i]) {
            connected++;
            dfs(i);
        }
    }
    cout << connected;
    return 0;
}