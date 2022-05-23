#include <iostream>
#include <vector>
#include <queue>
using namespace std;
#define MAXN 32005

int main()
{
    ios::sync_with_stdio(0);
    int N, M;
    int cnt[MAXN];
    vector<int> adj[MAXN];

    cin >> N >> M;
    for (int i = 0 ; i <= N; i++)
        cnt[i] = 0;
    for (int i = 0; i < M; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        cnt[v]++;
    }

    queue<int> q;
    for (int i = 1; i <= N; i++)
    {
        if (cnt[i] == 0)
            q.push(i);
    }
    while (!q.empty())
    {
        int curr = q.front();
        q.pop();

        cout << curr << " ";
        for (auto u : adj[curr])
        {
            int next = u;
            cnt[next]--;

            if (cnt[next] == 0) q.push(next);
        }
    }
    cout << '\n';

    return (0);
}