#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N;
    cin >> N;
    if (N == 1)
    {
        cout << "*\n";
        return 0;   
    }

    for (int i = 0; i < 2 * N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if((i + j) % 2 == 0)
                cout << '*';
            else
                cout << ' ';
        }
        cout << '\n';
    }
    return 0;
}