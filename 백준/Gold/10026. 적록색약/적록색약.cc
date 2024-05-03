#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
const int MAX = 101;
int N;
string land[MAX];
bool visited[MAX][MAX];

int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};

void dfs(int x, int y, char c) 
{
    int nx, ny;
    
    visited[x][y] = true;

    for (int d = 0; d < 4; d++) {
        nx = x + dx[d];
        ny = y + dy[d];
        if (nx < 0 || nx >= N || ny < 0 || ny >= N) continue;
        if (land[nx][ny] != c || visited[nx][ny]) continue;
        dfs(nx, ny, c);
    }
}


int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    cin >> N;

    for (int i = 0; i < N; i++)
        cin >> land[i];
    for (int i = 0; i < N; i++) {
        fill(visited[i], visited[i] + N, false);
    }
    int cnt = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (!visited[i][j]) {
                cnt++;
                dfs(i, j, land[i][j]);
            }
        }
    }
    cout << cnt << ' ';

    for (int i = 0; i < N; i++) 
        fill(visited[i], visited[i] + N, false);
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (land[i][j] == 'G')
                land[i][j] = 'R';
        }
    }
    cnt = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (!visited[i][j]) {
                cnt++;
                dfs(i, j, land[i][j]);
            }
        }
    }
    cout << cnt << ' ';
    
    return 0;
}