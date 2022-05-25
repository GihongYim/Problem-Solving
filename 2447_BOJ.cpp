#include <iostream>
#include <string>
#include <cstring>
using namespace std;

char map[2201][2201];

void pattern(int r, int c, int num)
{
    if (num == 1)
    {
        map[r][c] = '*';
        return;
    }

    int div = num / 3;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (!(i == 1 && j == 1))
                pattern(r + (i * div), c + (j*div), div);
        }
    }
}

int main()
{
    int N;

    cin >> N;
    memset(map, ' ', sizeof(map));

    pattern(0, 0, N);
    for (int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
        {
            cout << map[i][j];
        }
        cout << '\n';
    }
}