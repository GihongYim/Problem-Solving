#include <iostream>
#include <queue>
using namespace std;

queue<pair<int,int>> q;
bool visited[200005];

bool isvalid(int n)
{
    if (n < 0 || n >= 200005)
        return (false);
    return (true);
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N, K;
    int min_cnt;
    
    cin >> N >> K;
    
    for(int i = 0 ; i < 200005; i++)
        visited[i] = false;

    q.push({N, 0});
    min_cnt = 0;
    int time = 0;
    bool finished = false;
    while (!q.empty())
    {
        int qsize = q.size();

        for (int i = 0; i < qsize; i++)
        {
            int curr = q.front().first;
            int cnt = q.front().second;
            visited[curr] = true;
            q.pop();
            if (curr == K)
            {
                finished = true;
                min_cnt++;
                time = cnt;
                continue;
            }
            if (isvalid(curr + 1) && !visited[curr + 1])
            {
                q.push({curr + 1, cnt + 1});
            }
            if (isvalid(curr - 1) && !visited[curr - 1])
            {
                q.push({curr - 1, cnt + 1});
            }
            if (isvalid(2 * curr) && !visited[2 * curr])
            {
                q.push({2 * curr, cnt + 1});
            }
        }
        if (finished)
            break;
    }
    cout << time << '\n';
    cout << min_cnt << '\n';
    return (0);
}