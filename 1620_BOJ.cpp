#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
using namespace std;

bool check_num(string str)
{
    int i = 0;
    while (str[i])
    {
        if (str[i] < '0' || str[i] > '9')
            return (false);
        i++;
    }
    return (true);
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int            N;
    int            M;
    string monster;
    unordered_map<string, int> map;
    

    cin >> N >> M;
    vector<string> v(N + 1);
    for (int i = 1; i <= N; i++)
    {
        cin >> monster;
        map[monster] = i;
        v[i] = monster;
    }
    for (int i = 0; i < M; i++)
    {
        cin >> monster;
        if (check_num(monster))
            cout << v[stoi(monster)] << '\n';
        else
            cout << map[monster] << '\n';
    }
    return (0);
}