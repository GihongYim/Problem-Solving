#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <tuple>
using namespace std;

#define ll long long
const int MAX = 1001;

tuple<ll, int, int>  edge[1000001];
vector<int> p(MAX, -1);

int find(int x) {
    if (p[x] < 0) return x;
    return p[x] = find(p[x]);
}

bool is_diff_group(int u, int v) {
    u = find(u); v = find(v);
    if (u == v) return false;
    if (p[u] == p[v]) p[u]--;
    if (p[u] < p[v]) p[v] = u;
    else p[u] = v;
    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int N;
    cin >> N;
    int eCnt = 0;
    int e = N * N;
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            ll c;
            cin >> c;
            if (i == j) continue;
            edge[eCnt++] = {c, i, j};
        }
    }
    sort(edge, edge + eCnt);
    int cnt = 0;
    ll ans = 0;
    for (int i = 0; i < eCnt; i++) {
        int a, b;
        ll cost;
        tie(cost, a, b) = edge[i];
        if (!is_diff_group(a, b)) continue;
        ans += cost;
        cnt++;
        if (cnt == N - 1)break;
    }
    cout << ans << '\n';
    return 0;
}