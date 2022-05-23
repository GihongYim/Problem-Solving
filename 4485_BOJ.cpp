#include <iostream>
#include <queue>
using namespace std;

int dx[] = {-1, 1, 0, 0};
int dy[] = { 0, 0,-1, 1};

bool isvalid(int x, int y, int N)
{
    if (x < 0 || x >= N || y < 0 || y >= N)
        return (false);
    return (true);
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    int N;
    int dp[126][126];
    int map[126][126];
    int x,y,nx,ny;
    T = 1;
    while (1)
    {
        cin >> N;
        if (N == 0)
            break;
        for (int i = 0; i < N; i++)
            for(int j = 0; j < N;j++)
                cin >> map[i][j];
        for (int i = 0; i < N; i++)
            for(int j = 0; j < N;j++)
                dp[i][j] = 999999;
        queue<int> q;
        q.push(0);
        dp[0][0] = map[0][0];
        while (!q.empty())
        {
            x = q.front() / N;
            y = q.front() % N;
            q.pop();
            for (int d = 0; d < 4; d++)
            {
                nx = x + dx[d];
                ny = y + dy[d];
                if(isvalid(nx, ny, N) && dp[x][y] + map[nx][ny] < dp[nx][ny])
                {
                    dp[nx][ny] = dp[x][y] + map[nx][ny];
                    q.push(nx * N + ny);
                }
            }
        }
        cout << "Problem " << T << ": " << dp[N - 1][N - 1] << '\n';
        T++;                               
    }
    return (0);
}