#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <queue>
#include <cmath>
using namespace std;

int n;
pair<int, int> home;
pair<int, int > festival;
bool visited[101];

int dist(pair<int, int> a, pair<int, int> b) {
    return abs(a.first - b.first) + abs(a.second - b.second);
}
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int T;

    cin >> T;
    for (int t = 1; t <= T; t++) {
        cin >> n;
        cin >> home.first >> home.second;
        vector<pair<int, int> > conv(n);
        fill(visited, visited + 101, false);
        for (int i = 0; i < n; i++) {
            cin >> conv[i].first >> conv[i].second;
        }
        cin >> festival.first >> festival.second;
        queue<pair<int, int> > q;
        q.push(home);
        bool ok = false;
        while (!q.empty()) {
            pair<int, int> curr = q.front(); q.pop();

            if (dist(curr, festival) <= 1000) {
                ok = true;
                break;
            }


            for (int i = 0; i < n; i++) {
                if (visited[i]) continue;
                if (dist(curr, conv[i]) <= 1000) {
                    visited[i] = true;
                    q.push(conv[i]);
                }
            }
        }
        if (ok) {
            cout << "happy\n";
        } else {
            cout << "sad\n";
        }
    }

    return 0;
}
