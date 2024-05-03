#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
const int MAX = 101;
int N;

vector<int> adj[MAX];
bool visited[MAX];

void dfs(int n) {
    

    for (auto nxt : adj[n]) {
        if (visited[nxt]) continue;
        visited[nxt] = true;
        dfs(nxt);
    }
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    cin >> N;
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            int tmp;
            cin >> tmp;
            if (tmp == 1) {
                adj[i].push_back(j);
            }
        }
    }
    for (int i = 1; i <= N; i++) {
        fill(visited, visited + N + 1, false);
        dfs(i);
        for (int j = 1; j <= N; j++) {
            if (visited[j])
                cout << 1 << ' ';
            else
                cout << 0 << ' ';
        }
        cout << '\n';
    }

    return 0;
}