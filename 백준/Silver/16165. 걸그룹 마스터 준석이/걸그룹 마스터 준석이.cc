#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;

int N, M;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin >> N >> M;
    map<string, vector<string>> m;
    map<string, string> w;
    for (int i = 0; i < N; i++) {
        string team, member;
        int n;
        cin >> team;
        cin >> n;
        m.insert(make_pair(team, vector<string>()));
        for (int j = 0; j < n; j++) {
            cin >> member;
            m[team].push_back(member);
            w.insert(make_pair(member, team));
        }
        sort(m[team].begin(), m[team].end());
    }
    for (int quest = 1; quest <= M; quest++) {
        int q;
        string str;
        cin >> str;
        cin >> q;
        if (q == 1) {
            cout << w[str] << '\n';
        } else {
            for (int i = 0; i < m[str].size(); i++) {
                cout << m[str][i] << '\n';
            }
        }
    }
    return 0;
}