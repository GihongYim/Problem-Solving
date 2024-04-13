#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define ll long long

const int MAX = 303;
const ll INF = 0x3f3f3f3f;

int N;
ll dist[MAX][MAX];

void init(vector<pair<ll, ll> >& line) {
    ll l, r;
    for (int i = 0; i <= N; i++) 
        fill(dist[i], dist[i] + N + 1, 0x3f3f3f3f);
    for (int i = 1; i <= N; i++) {
        l = line[i].first; r = line[i].second;
        for (int j = i; j <= N; j++) {
            if (i == j) dist[i][j] = 0;
            if ((l >= line[j].first && l <= line[j].second) 
                || (r >= line[j].first && r <= line[j].second)) {
                dist[i][j] = 1;
                dist[j][i] = 1;
            }
            if (line[j].first >= l && line[j].second <= r) {
                dist[i][j] = 1;
                dist[j][i] = 1;
            }
        }
    }
    // for (int i = 1; i <= N; i++) {
    //     for (int j = 1; j <= N; j++) {
    //         if (dist[i][j] == INF)
    //             cout << "-1 ";
    //         else 
    //             cout << dist[i][j] << ' ';
    //     }
    //     cout << '\n';
    // }
    for (int mid = 1; mid <= N; mid++) {
        for (int i = 1; i <= N; i++) {
            for (int j = 1; j <= N; j++) {
                dist[i][j] = min(dist[i][mid] + dist[mid][j], dist[i][j]);
            }
        }
    }
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    ll l, r;
    int q;
    int a, b;

    cin >> N;
    vector<pair<ll, ll> > line;
    line.push_back(make_pair(-INF, -INF));

    for (int i = 0; i < N; i++) {
        cin >> l >> r;
        line.push_back(make_pair(l, r));
    }
    init(line);
    cin >> q;
    for (int i = 0; i < q; i++) {
        cin >> a >> b;
        if (dist[a][b] >= MAX) {
            cout << "-1\n";
        } else {
            cout << dist[a][b] << '\n';
        }
    }
    
    cout << '\n';
    return 0;
}