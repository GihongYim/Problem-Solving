#include <iostream>
#include <string>
using namespace std;


bool visited[10][10];
int N;

void move(int map[][10], string dir)
{
    int curr;
    if (dir == "left")
    {
        for (int i = 0; i < N; i++)
        {
            for (int j = 1; j < N; j++)
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
    else if (dir == "right")
    {
        for (int i = 0; i < N; i++)
        {
            for (int j = N - 2; j >= 0; j--)
            {
                if (map[i][j] != 0)
                {
                    curr = j;
                    while ( curr + 1 <= N - 1 && !visited[i][curr + 1]&& map[i][curr + 1] == 0)
                    {
                        curr++;
                    }
                    if (curr + 1 <= N - 1 && map[i][curr + 1] == map[i][j])
                    {
                        map[i][curr + 1] *= 2;
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
    else if (dir == "up")
    {
        for (int j = 0; j < N; j++)
        {
            for (int i = 1; i < N; i++)
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
    else if (dir == "down")
    {
        for (int j = 0; j < N; j++)
        {
            for (int i = N - 2; i >= 0; i--)
            {
                if (map[i][j] != 0)
                {
                    curr = i;
                    while ( curr + 1 <= N - 1 && map[curr + 1][j] == 0)
                    {
                        curr++;
                    }
                    if (curr + 1 <= N - 1 && !visited[curr + 1][j] && map[curr + 1][j] == map[i][j])
                    {
                        map[curr + 1][j] *= 2;
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

void init(int n)
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            visited[i][j] = false;
        }
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int T;
    int map[10][10];
    string dir;
    int block;
    int x,y;

    cin >> T;
    for (int TC = 1; TC <= T; TC++)
    {
        cin >> N;
        cin >> dir;
        for (int i = 0; i < N; i++)
        {
            for(int j = 0; j < N; j++)
            {
                cin >> map[i][j];
            }
        }
        init(N);
        move(map,dir);
        cout << "Case #" << TC << ":\n";
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
            {
                cout << map[i][j];
                if (j != N - 1)
                    cout << ' ';
            }
            cout << '\n';
        }
    }
    return 0;
}