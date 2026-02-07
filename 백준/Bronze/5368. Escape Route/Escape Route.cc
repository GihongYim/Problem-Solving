#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int m;
    
    cin >> n;
    for (int t = 1; t <= n; t++) {
        cin >> m;

        int x_s, y_s;
        int x_p, y_p;

        vector<string> Map(m);
        vector<pair<int, int>> vp;
        for (int i = 0; i < m; i++) {
            cin >> Map[i];
        }

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < m; j++) {
                if (Map[i][j] == 's') {
                    x_s = i;
                    y_s = j;
                    Map[i][j] = '-';
                }
                else if (Map[i][j] == 'p') {
                    vp.push_back(make_pair(i, j));
                }
            }
        }

        int minDist = m * m + m * m;
        int dist;
        for (int i = 0; i < vp.size(); i++) {
            dist = (vp[i].first - x_s) * (vp[i].first - x_s) + (vp[i].second - y_s) * (vp[i].second - y_s);
            if (dist < minDist) {
                x_p = vp[i].first;
                y_p = vp[i].second;
                minDist = dist;
            }
        }
        cout << setprecision(2) << fixed;
        cout << "(" << x_s << "," << y_s << "):(" << x_p << "," << y_p << "):" << sqrt(minDist) << '\n';
    }
}