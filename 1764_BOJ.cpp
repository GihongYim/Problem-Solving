#include <iostream>
#include <map>
#include <string>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    int M;
    string name;
    map<string, int> map;
    int cnt;

    cin >> N >> M;
    for(int i = 0; i < N;i++)
    {
        cin >> name;
        if (map[name] > 0)
            map[name]++;
        else
            map[name] = 1;
    }
    for(int i = 0; i < M; i++)
    {
        cin >> name;
        if (map[name] > 0)
            map[name]++;
        else
            map[name] = 1;
    }
    cnt = 0;
    for (auto u : map)
    {
        if (u.second == 2)
            cnt++;
    }
    cout << cnt << '\n';
    for (auto u : map)
    {
        if (u.second == 2)
            cout << u.first << '\n';
    }
    return (0);
}