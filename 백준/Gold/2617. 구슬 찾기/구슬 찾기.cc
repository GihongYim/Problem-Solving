#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

const int MAX = 100;
int N, M;
vector<int> adj[MAX];
vector<int> radj[MAX];
bool visited[MAX];
int cnt1;
int cnt2;
int answer = 0;

void dfs(int n) 
{
    visited[n] = true;
    for (auto nxt : adj[n]) {
        if (!visited[nxt]) {
            cnt1++;
            dfs(nxt);
        }
    }
}

void dfs2(int n) 
{
    visited[n] = true;
    for (auto nxt : radj[n]) {
        if (!visited[nxt]) {
            cnt2++;
            dfs2(nxt);
        }
    }
}
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int a, b;

    cin >> N >> M;
    for (int i = 0; i < M; i++) {
        cin >> a >> b;
        adj[b].push_back(a);
        radj[a].push_back(b);
    }
    for (int i = 1; i <= N; i++) {
        cnt1 = 0;
        fill(visited, visited + N + 1, false);
        dfs(i);

        cnt2 = 0;
        fill(visited, visited + N + 1, false);
        dfs2(i);

        if (cnt1 >= (N + 1) / 2 || cnt2 >= (N + 1) / 2)
            answer++;
    }
    cout << answer << '\n';
    return 0;
}
