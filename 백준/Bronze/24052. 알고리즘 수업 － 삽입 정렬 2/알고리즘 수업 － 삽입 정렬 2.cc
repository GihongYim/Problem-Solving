#include <iostream>
using namespace std;

int main()
{
    int N, K;
    int A[10005];
    int cnt = 0;
    int newitem;
    cin >> N >> K;
    for (int i = 0; i < N; i++)
        cin >> A[i];

    for (int i = 1; i < N; i++)
    {
        newitem = A[i];
        int loc = i - 1;
        while (0 <= loc && newitem < A[loc])
        {
            A[loc + 1] = A[loc];
            cnt++;
            if (cnt == K)
            {
                for (int i = 0; i < N; i++)
                    cout << A[i] << ' ';
                return 0;
            }
            loc--;
        }
        if (loc + 1 != i)
        {
            A[loc + 1] = newitem;
            cnt++;
        }
    }
    cout << -1 << '\n';
    return 0;
}