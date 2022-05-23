#include <iostream>
#include <unordered_map>
#include <string>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    int M;
    string site;
    string pw;
    unordered_map<string, string> dict;

    cin >> N >> M;
    for (int i = 0; i < N; i++)
    {
        cin >> site >> pw;
        dict[site] = pw;
    }
    for (int i = 0; i < M; i++)
    {
        cin >> site;
        cout << dict[site] << '\n';
    }
    return (0);
}
