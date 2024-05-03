#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


const int MAX = 26;
int N;
string apart[MAX];
bool visited[MAX][MAX];
// int part[MAX][MAX];
int cnt;
vector<int> building;

int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};



void dfs(int x, int y) {
    int nx, ny;
    cnt++;

    for (int d = 0; d < 4; d++) {
        nx = x + dx[d];
        ny = y + dy[d];
        if (nx < 0 || nx >= N || ny < 0 || ny >= N) continue;
        if (apart[nx][ny] == '0' || visited[nx][ny]) continue;
        visited[nx][ny] = true;
        dfs(nx, ny);
    }
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    cin >> N;

    for (int i = 0; i < N; i++) 
        cin >> apart[i];
    
    cnt = 1;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (apart[i][j] == '1' && !visited[i][j]) {
                cnt = 0;
                visited[i][j] = true;
                dfs(i, j);
                building.push_back(cnt);
            }
        }
    }
    sort(building.begin(), building.end());
    cout << building.size() << '\n';
    for (int i = 0; i < building.size(); i++) {
        cout << building[i] << '\n';
    }
    return 0;
}