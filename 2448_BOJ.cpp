#include <iostream>
#include <cstring>
using namespace std;

char map[10000][10000];

void star(int r, int c,int num)
{
    if (num == 3)
    {
        map[r][c] = '*';
        map[r + 1][c - 1] = '*';
        map[r + 1][c + 1] = '*';
        map[r + 2][c - 2] = '*';
        map[r + 2][c - 1] = '*';
        map[r + 2][c] = '*';
        map[r + 2][c + 1] = '*';
        map[r + 2][c + 2] = '*';
        return ;
    }
    star(r, c, num / 2);
    star(r + num / 2, c - num / 2, num / 2);
    star(r + num / 2, c + num / 2, num / 2);
    
}
int main()
{
    int N;

    cin >> N;
    memset(map, ' ',sizeof(map));
    star(0, N, N);

    for (int i = 0; i < N; i++)
    {
        for (int j = 1; j <= 2 * N - 1; j++)
        {
            cout << map[i][j];
        }
        cout << '\n';
    }
    return 0;
}