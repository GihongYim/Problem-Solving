#include <iostream>
#include <cstring>
using namespace std;

char map[1000][1000];
int dx[] = { 0, 1, 0,-1};
int dy[] = {-1, 0, 1, 0};
int N;

bool isvalid(int x, int y)
{
    if (x < 0 || x >= N || y < 0 || y >= N)
        return false;
    else
        return true;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int x, y;
    int vlen, hlen;
    int d;
    cin >> N;
    if (N == 1)
    {
        cout << "*\n";
        return (0);
    }
    memset(map, ' ', sizeof(map));

    x = 0;
    y = 4 * (N - 1);
    int nx, ny, nnx, nny;
    d = 0;
    while (!(x == 2 * N - 1 && y == 2 * N - 2))
    {
        cout << x << ' ' << y << '\n';
        map[x][y] = '*';
        nx = x + dx[d];
        ny = y + dy[d];
        nnx = nx + dx[d];
        nny = ny + dy[d];
        if (!isvalid(nx, ny))
        {
            d = d + 1;
            d %= 4;
        }
        x = x + dx[d];
        y = y + dy[d];
    }
    return 0;
}