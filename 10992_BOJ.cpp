#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N;

    cin >> N;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N - i - 1;j++)
            cout << ' ';
        cout << '*';
        if (i == N - 1)
        {
            for (int j = 0; j < 2 * i - 1;j++)
                cout << '*';
        }
        else
        {
            for (int j = 0; j < 2 * i - 1;j++)
                cout << ' ';
        }
        if (i == 0)
            cout << '\n';
        else
            cout << "*\n";
    }
    return 0;
}