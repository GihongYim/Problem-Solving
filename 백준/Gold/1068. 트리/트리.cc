#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

const int MAX = 51;
int N;
vector<int> adj[MAX];
bool visited[MAX];
int leaf = 0;
int root;
int removed;

void dfs(int curr) 
{
    int child = 0;

    for (auto nxt : adj[curr]) {
        if (nxt == removed) continue;
        child++;
        dfs(nxt);
    }
    if (child == 0)
        leaf++;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    cin >> N;
    for (int i = 0; i < N; i++) {
        int a;
        cin >> a;
        if (a == -1) {
            root = i;
            continue;
        }
        adj[a].push_back(i);
        
    }
    cin >> removed;

    if (root == removed) {
        cout << 0 << '\n';
    } else {
        dfs(root);
        cout << leaf << '\n';
    }
    return 0;
}