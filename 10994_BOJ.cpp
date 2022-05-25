#include <iostream>
#include <cstring>
using namespace std;

char map[1000][1000];

void star(int x,int y, int len)
{
    if (len == 1)
    {
        map[x][y] = '*';
        return ;
    }
    for (int i = 0; i < len; i++)
    {
        map[x][y + i] = '*';
        map[x + len - 1][y + i] = '*';
    }
    for (int i = 1; i < len - 1; i++)
    {
        map[x + i][y] = '*';
        map[x + i][y + len - 1] = '*';
    }
    star(x + 2, y + 2, len - 4);
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N;
    int len;
    
    cin >> N;
    memset(map, ' ', sizeof(map));
    len = 4 * (N - 1) + 1; 
    star(0, 0, len);
    for (int i = 0; i < len; i++)
    {
        for(int j = 0; j < len; j++)
        {
            cout << map[i][j];
        }
        cout << '\n';
    }
    return 0;
}