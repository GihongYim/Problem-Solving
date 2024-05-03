#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <set>
using namespace std;

const int MAX = 1001;

int N, M;
string board[MAX];
int area[MAX][MAX];

int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};

int setArea(int x, int y, int areaNum) {
    queue<pair<int, int> > q;
    int nx, ny;
    int areaCnt = 1;

    q.push(make_pair(x, y));
    area[x][y] = areaNum;
    while (!q.empty()) {
        auto curr = q.front(); q.pop();

        for (int d = 0; d < 4; d++) {
            nx = curr.first + dx[d];
            ny = curr.second + dy[d];
            if (nx < 0 || nx >= N || ny < 0 || ny >= M) continue;
            if (board[nx][ny] == '0' && area[nx][ny] == 0) {
                area[nx][ny] = areaNum;
                q.push(make_pair(nx, ny));
                areaCnt++;
            }
        }
    }
    return areaCnt;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int areaNum = 1;
    vector<int> areaCnt;
    areaCnt.push_back(0);
    cin >> N >> M;
    
    for (int i = 0; i < N; i++)
        fill(area[i], area[i] + M, 0);
    for (int i = 0; i < N; i++) {
        cin >> board[i];
    }
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (board[i][j] == '0' && area[i][j] == 0) {
                areaCnt.push_back(setArea(i, j, areaNum++));
            }
        }
    }
    int nbh;
    int nx, ny;
    set<int> nbhNum;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (board[i][j] == '0'){
                cout << "0";
            } else {
                nbhNum.clear();
                for (int d = 0; d < 4; d++) {
                    nx = i + dx[d];
                    ny = j + dy[d];
                    if (nx < 0 || nx >= N || ny < 0 || ny >= M) continue;
                    nbhNum.insert(area[nx][ny]);
                }
                nbh = 0;
                for (auto s : nbhNum) {
                    nbh += areaCnt[s];
                }
                cout << (nbh + 1) % 10;
            }
        }
        cout << '\n';
    }
    return 0;
}