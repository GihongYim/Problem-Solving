#include <iostream>
#include <queue>
using namespace std;

int dx[] = {-1, 1, 0, 0};
int dy[] = { 0, 0,-1, 1};

bool isvalid(int x, int y, int n, int m)
{
    if (x < 0 || x >= n || y < 0 || y >= m)
        return false;
    else
        return true;
}


int main()
{
    ios::sync_with_stdio(0);
    
    int N, M;
    int map[101][101];
    bool visited[101][101];
    int touch[101][101];
    int time = 0;

    cin >> N >> M;

    for (int i = 0; i < N; i++)
        for(int j = 0; j < M; j++)
            cin >> map[i][j];

    while (1)
    {
        queue<pair<int, int>> q;
        for (int i = 0; i < N; i++)
        {
            for(int j = 0; j < M; j++)
            {
                visited[i][j] = false;
                touch[i][j] = 0;
            }
        }
        visited[0][0] = true;
        q.push({0, 0});
        while (!q.empty())
        {
            int x,y;
            x = q.front().first;
            y = q.front().second;
            q.pop();
            int nx,ny;
            for (int d = 0; d < 4; d++)
            {
                nx = x + dx[d];
                ny = y + dy[d];
                if (isvalid(nx, ny, N, M) && !visited[nx][ny])
                {
                    if (map[nx][ny] == 0)
                    {
                        visited[nx][ny] = true;
                        q.push({nx,ny});
                    }
                    else
                    {
                        touch[nx][ny]++;
                    }
                }
            }
        }
        bool cheese = false;
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < M; j++)
            {
                if (map[i][j] == 1)
                {
                    if (touch[i][j] >= 2)
                        map[i][j] = 0;
                    cheese = true;
                }
            }
        }
        if (!cheese) break;
        time++;
    }
    cout << time << '\n';
    return (0);    
}