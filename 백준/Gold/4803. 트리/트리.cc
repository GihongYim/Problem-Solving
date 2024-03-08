#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;


const int MAX = 501;
int n, m;
vector<int> adj[MAX];
bool visited[MAX];
int tree;
bool cycle;

void dfs(int n, int parent) {
    for (auto child : adj[n]) {
        if (child == parent) continue;
        if (visited[child]) {
            cycle = true;
            return;
        }
        visited[child] = true;
        dfs(child, n);
        if (cycle)
            return;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int test = 1;
    while (1) {
        cin >> n >> m;
        if (n == 0 && m == 0)
            break;
        for (int i = 1; i <= n; i++) {
            adj[i].clear();
        }
        fill(visited, visited + 1 + n, false);
        for (int i = 0; i < m; i++) {
            int a, b;
            cin >> a >> b;
            adj[a].push_back(b);
            adj[b].push_back(a);
        }
        tree = 0;
        for (int i = 1; i <= n; i++) {
            if (visited[i]) continue;
            cycle = false;
            dfs(i, 0);
            if (!cycle)
                tree++;
        }
        cout << "Case " << test << ": ";
        if (tree == 0) {
            cout << "No trees.\n";
        } else if (tree == 1) {
            cout << "There is one tree.\n";
        } else {
            cout << "A forest of " << tree << " trees.\n";
        }
        test++;
    }
    return 0;
}