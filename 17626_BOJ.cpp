#include <iostream>
using namespace std;

int cnt;
int dp[50005];

void search(int num, int target, int c)
{
    if (num > target || c > 4)
        return ;
    if (num == target)
    {
        if (c < cnt)
            cnt = c;
        return ;
    }
    for (int i = 1; i * i <= (target - num); i++)
    {
        if (dp[num + i * i] > c + 1)
        {
            dp[num + i * i] = c + 1;
            search(num + i * i, target, c + 1);
        }
    }
}
int main()
{
    int n;

    cin >> n;
    for(int i = 0; i <= n; i++)
        dp[i] = 10;
    cnt = 4;
    search(0, n, 0);
    cout << dp[n] << '\n';
    return (0);
}