#include <iostream>
using namespace std;

int main()
{
    int N, M;
    int arr1[100][100];
    int arr2[100][100];

    cin >> N >> M;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin >> arr1[i][j];
        }
    }
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin >> arr2[i][j];
        }
    }
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cout << arr1[i][j] + arr2[i][j];
            if (j != M -1)
                cout << ' ';
        }
        cout << '\n';
    }
    return 0;
}