#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int TC;

    cin >> TC;

    for (int test_case = 1; test_case <= TC; test_case++)
    {
        int N, M, W;
        
        cin >> N >> M >> W;
        vector<pair<int, int>> edge[501];
        for(int i = 0; i < M; i++)
        {
            int s, e, t;
            cin >> s >> e >> t;
            edge[s].push_back({e, t});
            edge[e].push_back({s, t});
        }
        for (int i = 0; i < W; i++)
        {
            int s, e, t;
            cin >> s >> e >> t;
            edge[s].push_back({e, -t});
        }

        int time[501];
        for (int i = 2; i <= N; i++)
            time[i] = 0x3f3f3f3f;
        time[1] = 0;
        for (int i = 1; i <= N; i++)
        {
            for(int j = 1; j <= N; j++)
            {
                for(int k = 0; k < edge[j].size(); k++){
                    if (time[j] + edge[j][k].second < time[edge[j][k].first])
                        time[edge[j][k].first] = time[j] + edge[j][k].second;
                }
            } 
        }
        bool rev_time = false;
        for (int i = 1; i <= N; i++)
        {
            for (int j = 0; j < edge[i].size(); j++)
            {
                if (time[i] + edge[i][j].second < time[edge[i][j].first])
                {
                    rev_time = true;
                    break;
                }

            }
            if (rev_time)
                break;
        }
        if (rev_time)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return (0);
}