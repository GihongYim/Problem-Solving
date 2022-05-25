#include <iostream>
#include <cstring>
using namespace std;

char map[10000][10000];

void fractal(int x, int y, int m, int N)
{
    if (N == 1)
    {
        map[x][y] = '*';
        return;
    }
    if (N % 2 == 0)
    {
        for (int i = 0; i < 2 * m - 1;i++)
            map[x][y + i] = '*';  
        for (int i = 1; i <= m - 2; i++)
        {
            map[x + i][y + i] = '*';
            map[x + i][y + 2 * m - 2 - i] = '*';
        }
        map[x + m - 1][y + m - 1] = '*';
        fractal(x + 1 , y + m / 2 + 1, m / 2, N - 1);
    }
    else
    {
        for (int i = 0; i < m - 1; i++)
        {
            map[x + i][y + m - 1 - i] = '*';
            map[x + i][y + m - 1 + i] = '*';
        }
        for (int i = 0; i < 2 * m - 1; i++)
        {
            map[x + m - 1][y + i] = '*';
        }
        fractal(x + m / 2, y + m / 2 + 1, m / 2, N - 1);
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N;
    int m, d;

    cin >> N;

    m = 0;
    d = 1;
    for (int i = 0; i < N; i++)
    {
        m += d;
        d *= 2;
    }
    memset(map, ' ', sizeof(map));

    fractal(0, 0, m, N);
    if (N % 2 == 0)
    {
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < 2 * m - 1 - i; j++)
            {
                cout << map[i][j];
            }
            cout << '\n';
        }
    }
    else
    {
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < m + i; j++)
            {
                cout << map[i][j];
            }
            cout << '\n';
        }
    }
    return 0;
}