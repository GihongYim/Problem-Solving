#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <string>
using namespace std;
int N, M, K;
const int MAX = 11;
string Map[MAX];
map<string, int> m;
set<string> s;
int dx[8] = {-1, -1, 0, 1, 1, 1, 0, -1};
int dy[8] = {0, 1, 1, 1, 0, -1, -1, -1};

void dfs(int x, int y, string str) {
    int nx, ny;
    if (s.find(str) == s.end())
        return;
    if (m.find(str) != m.end()) {
        m[str]++;
    }
    for (int d = 0; d < 8; d++) {
        nx = x + dx[d] + N;
        ny = y + dy[d] + M;
        nx %= N;
        ny %= M;
        dfs(nx, ny, str + Map[nx][ny]);
    }
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    
    cin >> N >> M >> K;
    for (int i = 0; i < N; i++) {
        cin >> Map[i];
    }
    string tmp;
    vector<string> v(K);

    for (int i = 0; i < K; i++) {
        cin >> tmp;
        v[i] = tmp;
        m.insert(make_pair(tmp, 0));
        for (size_t j = 1; j <= tmp.length(); j++) {
            s.insert(tmp.substr(0, j));
        }
    }
    s.insert("");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            string start = "";
            dfs(i, j, start + Map[i][j]);
        }
    }
    for (size_t i = 0; i < v.size(); i++) {
        cout << m[v[i]] << '\n';
    }
    return 0;
}