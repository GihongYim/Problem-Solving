#include <iostream>
#include <vector>
#include <queue>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    int k;
    string cmd;
    int num;
    bool isvalid[1000000];
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>> > minq;
    priority_queue<pair<int , int>> maxq;

    cin >> T;
    for(int t = 0; t < T; t++)
    {
        cin >> k;
        while(!minq.empty())
            minq.pop();
        while(!maxq.empty())
            maxq.pop();
        for (int i = 0; i < k; i++)
        {
            cin >> cmd;
            cin >> num;

            if (cmd[0] == 'I')
            {
                maxq.push({num, i});
                minq.push({num, i});
                isvalid[i] = true;
            }
            else if (cmd[0] == 'D')
            {
                if (num == -1)
                {
                    while (!minq.empty() && !isvalid[minq.top().second])
                        minq.pop();
                    if (!minq.empty())
                    {
                        isvalid[minq.top().second] = false;
                        minq.pop();
                    }
                }
                else if (num == 1)
                {
                    while (!maxq.empty() && !isvalid[maxq.top().second])
                        maxq.pop();
                    if (!maxq.empty())
                    {
                        isvalid[maxq.top().second] = false;
                        maxq.pop();
                    }
                }
            }
        }
        while (!minq.empty() && !isvalid[minq.top().second])
            minq.pop();
        while (!maxq.empty() && !isvalid[maxq.top().second])
            maxq.pop();
        if (minq.empty() || maxq.empty())
            cout << "EMPTY\n";
        else
            cout << maxq.top().first << ' ' << minq.top().first <<'\n';
    }
    return (0);
}