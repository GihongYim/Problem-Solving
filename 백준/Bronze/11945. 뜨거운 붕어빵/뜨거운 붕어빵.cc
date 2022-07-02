#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    int N, M;
    string map[10];

    cin >> N >> M;
    for (int i = 0; i < N; i++)
    {
        cin >> map[i];
    }
    for (int i = 0; i < N; i++)
    {
        for (int j = M - 1; j >= 0; j--)
        {
            cout << map[i][j];
        }
        cout << '\n';
    }
    return (0);
}