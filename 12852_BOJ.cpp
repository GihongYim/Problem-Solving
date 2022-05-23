#include <iostream>
#include <vector>
using namespace std;


int N;
int dp[1000005];
int pre[1000005];
void search(int n,int cnt)
{
    if (n == 0)
        return ;
    if (n == 1 && dp[1] > cnt)
    {
        dp[1] = cnt;
        return ;
    }
    
    if (n % 3 == 0 && dp[n / 3] > cnt + 1)
    {
        dp[n / 3] = cnt + 1;
        pre[n / 3] = 1;
        search(n / 3, cnt + 1);
    }
    if (n % 2 == 0 && dp[n / 2] > cnt + 1)
    {
        dp[n / 2] = cnt + 1;
        pre[n / 2] = 2;
        search(n / 2, cnt + 1);
    }
    if (n - 1 > 0 && dp[n - 1] > cnt + 1)
    {
        dp[n - 1] = cnt + 1;
        pre[n - 1] = 3;
        search(n - 1, cnt + 1);
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;
    for (int i = 0; i <= N; i++)
        dp[i] = 0x3f3f3f3f;
    dp[N] = 0;
    search(N, 0);
    vector<int> s;
    int curr = 1;
    s.push_back(curr);
    while (curr != N)
    {
        if(pre[curr] == 1){
            curr *= 3;
            s.push_back(curr);
        }
        else if(pre[curr] == 2)
        {
            curr *= 2;
            s.push_back(curr);
        }
        else
        {
            curr += 1;
            s.push_back(curr);
        }
    }
    cout << dp[1] << '\n';
    for (int i = s.size() - 1; i >= 0; i--)
    {
        cout << s[i] << ' ';
    }
    cout << '\n';
    return (0);
}