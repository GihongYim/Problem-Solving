#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

#define ll long long

const int MAX = 150000;
ll sheep[MAX];
ll wolf[MAX];
vector<int> adj[MAX];
bool leaf[MAX];
int N;
ll total;

ll dfs(int n) {
    if (adj[n].empty()) {
        return sheep[n];
    }
    ll sheepSum = sheep[n];
    for (auto nxt : adj[n]) {
        sheepSum += dfs(nxt);
    }
    if (sheepSum >= wolf[n])
        return sheepSum - wolf[n];
    else
        return 0;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    string t;
    ll a;
    int p;
    
    cin >> N;
    fill(leaf, leaf + N + 1, true);
    fill(sheep, sheep + N + 1, 0);
    fill(wolf, wolf + N + 1, 0);

    for (int i = 2; i <= N; i++) {
        cin >> t >> a >> p;
        if (t == "W") {
            wolf[i] = a;
        } else {
            sheep[i] = a;
        }
        adj[p].push_back(i);
    }
    total = dfs(1);
    cout << total;
    return 0;
}