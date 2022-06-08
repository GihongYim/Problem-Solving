#include <iostream>
using namespace std;

int score;
bool visited[4][4];

void move(int map[][4], char dir)
{
    int curr;
    if (dir == 'L')
    {
        for (int i = 0; i < 4; i++)
        {
            for (int j = 1; j < 4; j++)
            {
                if (map[i][j] != 0)
                {
                    curr = j;
                    while ( curr - 1 >= 0 && map[i][curr - 1] == 0)
                    {
                        curr--;
                    }
                    if (curr - 1 >= 0 && !visited[i][curr - 1] && map[i][curr - 1] == map[i][j])
                    {
                        map[i][curr - 1] *= 2;
                        score += map[i][curr - 1];
                        visited[i][curr - 1] = true;
                        map[i][j] = 0;
                    }
                    else
                    {
                    map[i][curr] = map[i][j];
                    if (curr != j)
                        map[i][j] = 0;
                    }
                }
            }
        }
    }
    else if (dir == 'R')
    {
        for (int i = 0; i < 4; i++)
        {
            for (int j = 2; j >= 0; j--)
            {
                if (map[i][j] != 0)
                {
                    curr = j;
                    while ( curr + 1 <= 3 && !visited[i][curr + 1]&& map[i][curr + 1] == 0)
                    {
                        curr++;
                    }
                    if (curr + 1 <= 3 && map[i][curr + 1] == map[i][j])
                    {
                        map[i][curr + 1] *= 2;
                        score += map[i][curr + 1];
                        visited[i][curr + 1] = true;
                        map[i][j] = 0;
                    }
                    else
                    {
                    map[i][curr] = map[i][j];
                    if (curr != j)
                        map[i][j] = 0;
                    }
                }
            }
        }
    }
    else if (dir == 'U')
    {
        for (int j = 0; j < 4; j++)
        {
            for (int i = 1; i < 4; i++)
            {
                if (map[i][j] != 0)
                {
                    curr = i;
                    while ( curr - 1 >= 0 && !visited[curr - 1][j]&& map[curr - 1][j] == 0)
                    {
                        curr--;
                    }
                    if (curr - 1 >= 0 && map[curr - 1][j] == map[i][j])
                    {
                        map[curr - 1][j] *= 2;
                        score += map[curr - 1][j];
                        visited[curr - 1][j] = true;
                        map[i][j] = 0;
                    }
                    else
                    {
                    map[curr][j] = map[i][j];
                    if (curr != i)
                        map[i][j] = 0;
                    }
                }
            }
        }
    }
    else if (dir == 'D')
    {
        for (int j = 0; j < 4; j++)
        {
            for (int i = 2; i >= 0; i--)
            {
                if (map[i][j] != 0)
                {
                    curr = i;
                    while ( curr + 1 <= 3 && map[curr + 1][j] == 0)
                    {
                        curr++;
                    }
                    if (curr + 1 <= 3 && !visited[curr + 1][j] && map[curr + 1][j] == map[i][j])
                    {
                        map[curr + 1][j] *= 2;
                        score += map[curr + 1][j];
                        visited[curr + 1][j] = true;
                        map[i][j] = 0;
                    }
                    else
                    {
                        map[curr][j] = map[i][j];
                        if (curr != i)
                            map[i][j] = 0;
                    }
                }
            }
        }
    }
}

void init()
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            visited[i][j] = false;
        }
    }
}

int main()
{
    int S;
    string cmd;
    int map[4][4];
    char dir;
    int block;
    int x,y;

    cin >> S;
    score = S;
    cin >> cmd;
    for (int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            cin >> map[i][j];
        }
    }
    for (int i = 0; i < cmd.size(); i++)
    {
        init();
        dir = cmd[i++];
        block = cmd[i++] - '0';
        x = cmd[i++] - '0';
        y = cmd[i] - '0';
        move(map,dir);
        map[x][y] = block;
    }
    cout << score << '\n';
    return 0;
}