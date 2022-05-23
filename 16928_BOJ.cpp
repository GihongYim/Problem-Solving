#include <iostream>
using namespace std;

int dp[101];
int ladder_snake[101];


void search(int curr, int cnt)
{
    if (curr >= 100)
        return ;

    while (ladder_snake[curr] != curr && cnt < dp[ladder_snake[curr]])
    {
        curr = ladder_snake[curr];
        dp[ladder_snake[curr]] = cnt;
    }
    if (ladder_snake[curr] != curr)
        return ;

    for (int i = 1; i <= 6; i++)
    {
        if (curr + i <= 100 && dp[curr + i] > cnt + 1)
        {
            dp[curr + i] = cnt + 1;
            if (ladder_snake[curr + i] != curr + i && dp[ladder_snake[curr + i]] > cnt + 1)
            {
                dp[ladder_snake[curr + i]] = cnt + 1;
                search(ladder_snake[curr + i], cnt + 1);
            }
            else
            {
                search(curr + i, cnt + 1);
            }
        }
    }
}

int main()
{
    int N, M;
    int x, y;

    for (int i = 1;i <= 100;i++)
    {
        ladder_snake[i] = i;
        dp[i] = 9999999;
    }
    dp[1] = 0;
    cin >> N >> M;
    for (int i = 0; i < N; i++)
    {
        cin >> x >> y;
        ladder_snake[x] = y;
    }
    for(int i = 0; i < M; i++)
    {
        cin >> x >> y;
        ladder_snake[x] = y;
    }
    search(1, 0);
    cout << dp[100] << '\n';
    return (0);
}