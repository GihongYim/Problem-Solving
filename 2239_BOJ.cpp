#include <iostream>
#include <string>
using namespace std;

string map[9];
bool row[9][10];
bool col[9][10];
bool square[9][10];
bool finish;

void search (int r, int c)
{
    if (finish) return;
    if (r == 9)
    {
        for (int i = 0; i < 9; i++)
            cout << map[i] << '\n';
        finish = true;
        return;
    }
    int next_r;
    int next_c;
    if (c == 8)
    {
        next_r = r + 1;
        next_c = 0;
    }
    else
    {
        next_r = r;
        next_c = c + 1;
    }

    if (map[r][c] == '0')
    {
        for (int k = 1; k <= 9; k++)
        {
            if (!row[r][k] && !col[c][k] && !square[(r / 3) * 3 + (c / 3)][k])
            {
                row[r][k] = true;
                col[c][k] = true;
                square[(r / 3) * 3 + (c / 3)][k] = true;
                map[r][c] = k + '0';
                search(next_r, next_c);
                row[r][k] = false;
                col[c][k] = false;
                square[(r / 3) * 3 + (c / 3)][k] = false;
                map[r][c] = '0';
            }
        }
    }
    else
    {
        search(next_r, next_c);
    }
}

int main()
{
    
    int num;

    for (int i = 0; i < 9; i++)
    {
        cin >> map[i];
    }
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            if (map[i][j] == '0') continue;
            num = map[i][j] - '0';
            row[i][num] = true;
            col[j][num] = true;
            square[(i / 3) * 3 + (j / 3)][num] = true;
        }
    }
    finish = false;
    search(0,0);

    return 0;
}