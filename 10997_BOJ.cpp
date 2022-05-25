#include <iostream>
#include <cstring>
using namespace std;

char map[1000][1000];

void star(int n, int x, int y)
{
    int width = 4 * n - 3;
    int height = width + 2;

    for (int i = 1; i < width; i++) map[x][y--] = '*';
    for (int i = 1; i < height; i++) map[x++][y] = '*';
    for (int i = 1; i < width; i++) map[x][y++] = '*';
    for (int i = 1; i < height - 2; i++) map[x--][y] = '*';

    map[x][y] = '*';
    y--;
    map[x][y] = '*';

    if (n == 2){
        map[x][y  -1] = '*';
        map[x + 1][y - 1] = '*';
        map[x + 2][y - 1] = '*';
        return ;
    }
    star(n - 1, x, y - 1);
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    int row, col;

    cin >> N;
    if (N == 1)
    {
        cout << "*\n";
        return 0;
    }
    col = 4 * N - 3;
    row = col + 2;

    for (int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            map[i][j] = ' ';
        }
    }

    star(N ,0 , 4 * N - 4);
    
    for (int i = 0; i < row; i++)
    {
        if (i == 1){
            cout << "*\n";
            continue;
        }

        for(int j = 0; j < col; j++)
        {
            cout << map[i][j];
        }
        cout << "\n";
    }
    return 0;
}