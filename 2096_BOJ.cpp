#include <iostream>
using namespace std;

bool isvalid(int n)
{
    if (n < 0 || n >= 3)
        return (false);
    return (true);
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    int arr[100005][3];
    int dp[2][3];
    int max_score = 0;
    int min_score = 987654321;

    cin >> N;
    for(int i = 0;i < N; i++)
    {
        cin >> arr[i][0] >> arr[i][1] >> arr[i][2];
    }
    // max score

    dp[1][0] = arr[0][0];
    dp[1][1] = arr[0][1];
    dp[1][2] = arr[0][2];

    for (int i = 0; i < N - 1;i++)
    {
        dp[0][0] = dp[1][0];
        dp[0][1] = dp[1][1];
        dp[0][2] = dp[1][2];
        dp[1][0] = 0;
        dp[1][1] = 0;
        dp[1][2] = 0;
        for (int j = 0; j < 3; j++)
        {
            for (int k = -1; k <= 1; k++)
            {
                if (isvalid(j + k) && dp[1][j + k] < dp[0][j] + arr[i + 1][j + k])
                    dp[1][j + k] = dp[0][j] + arr[i + 1][j + k];
            }
        }
    }
    for (int i = 0; i < 3;i++){
        if (max_score < dp[1][i])
            max_score = dp[1][i];
    }
    // min score

    dp[1][0] = arr[0][0];
    dp[1][1] = arr[0][1];
    dp[1][2] = arr[0][2];

    for (int i = 0; i < N - 1;i++)
    {
        dp[0][0] = dp[1][0];
        dp[0][1] = dp[1][1];
        dp[0][2] = dp[1][2];
        dp[1][0] = 987654321;
        dp[1][1] = 987654321;
        dp[1][2] = 987654321;
        for (int j = 0; j < 3; j++)
        {
            for (int k = -1; k <= 1; k++)
            {
                if (isvalid(j + k) && dp[1][j + k] > dp[0][j] + arr[i + 1][j + k])
                    dp[1][j + k] = dp[0][j] + arr[i + 1][j + k];
            }
        }
    }
    for (int i = 0; i < 3;i++){
        if (min_score > dp[1][i])
            min_score = dp[1][i];
    }
    cout << max_score << ' ' << min_score << '\n';
    return (0);
}