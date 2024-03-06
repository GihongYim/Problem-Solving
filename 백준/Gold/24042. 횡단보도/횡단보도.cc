#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <queue>
#include <climits>
using namespace std;

#define ll long long
int N;
ll M;
const int MAX = 100005;
const ll INF = LLONG_MAX;
ll d[MAX];
vector<pair<int, ll>> adj[MAX];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin >> N >> M;
    fill(d, d + 1 + N, INF);

    for (int i = 0; i < M; i++) {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(make_pair(b, i));
        adj[b].push_back(make_pair(a, i));
    }
    priority_queue<pair<ll, int>, vector<pair<ll, int>>, greater<pair<ll, int>> > pq;
    pq.push(make_pair(0, 1));
    d[1] = 0;
    ll diff;
    while (!pq.empty()) {
        auto curr = pq.top(); pq.pop();

        if (curr.first != d[curr.second]) continue;
        for (auto next : adj[curr.second]) {
            if (curr.first % M <= next.second % M) {
                diff = (next.second % M) - (curr.first % M);
            } else {
                diff = (next.second % M) + M - (curr.first % M);
            }
            if (curr.first + diff + 1 < d[next.first]) {
                d[next.first] = curr.first + diff + 1;
                pq.push(make_pair(d[next.first], next.first));
            }
        }
    }
    cout << d[N] << '\n';
    return 0;
}