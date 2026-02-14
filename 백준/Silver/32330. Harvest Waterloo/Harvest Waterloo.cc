#include <bits/stdc++.h>
using namespace std;

int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};

int getPumpkin(char ch)
{
    if (ch == 'S') 
        return 1;
    else if (ch == 'M')
        return 5;
    else if (ch == 'L')
        return 10;
    else
        return 0;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int R, C;
    int A, B;
    int V = 0;
    cin >> R >> C;

    vector<string> m(R);
    vector<vector<bool>> visited(R);
    for (int i = 0; i < R; i++) {
        cin >> m[i];
        visited[i] = vector<bool> (C, false);
    }

    cin >> A >> B;

    queue<pair<int, int>> q;

    q.push(make_pair(A, B));
    visited[A][B] = true;

    while (!q.empty()) {
        int cx = q.front().first;
        int cy = q.front().second;
        q.pop();

        V += getPumpkin(m[cx][cy]);
    
        for (int d = 0; d < 4; d++) {
            int nx = cx + dx[d];
            int ny = cy + dy[d];

            if (nx < 0 || nx >= R || ny < 0 || ny >= C) continue;
            if (m[nx][ny] == '*' || visited[nx][ny]) continue;
            visited[nx][ny] = true;
            q.push(make_pair(nx, ny));
        }
    }
    
    cout << V << '\n';
    return 0;
}