#include <iostream>
#include <cstring>
using namespace std;

char map[2000][2000];
int square[11];

void star(int x, int y, int n)
{
    if (n == 0)
    {
        map[x][y] = '*';
        return ;
    }
    star(x, y, n - 1);
    star(x, y + square[n - 1], n - 1);
    star(x + square[n - 1], y, n - 1);
    
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N;

    cin >> N;
    square[0] = 1;
    for (int i = 1; i <= N; i++)
    {
        square[i] = square[i - 1] * 2;
    }

    memset(map, ' ', sizeof(map));
    star(0, 0, N);
    for (int i = 0; i < square[N]; i++)
    {
        for (int j = 0; j < square[N] - i; j++)
        {
            cout << map[i][j];
        }
        cout << '\n';
    }
    return 0;
}