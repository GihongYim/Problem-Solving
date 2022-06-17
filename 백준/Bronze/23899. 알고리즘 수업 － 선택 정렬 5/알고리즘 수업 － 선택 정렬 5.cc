#include <iostream>
using namespace std;

int main()
{
    int N;
    int A[10005];
    int B[10005];
    int max_idx;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }
    for (int i = 0; i < N; i++)
    {
        cin >> B[i];
    }
    bool is_same = true;
    for (int i = 0; i < N; i++)
    {
        if (A[i] != B[i])
            is_same = false;
    }
    if (is_same)
    {
        cout << 1 << '\n';
        return 0;
    }
    for (int last = N - 1; last >= 1; last--)
    {
        max_idx = last;
        for (int i = 0; i < last; i++)
        {
            if (A[i] > A[max_idx])
            {
                max_idx = i;
            }
        }
        if (max_idx != last)
        {
            int temp = A[max_idx];
            A[max_idx] = A[last];
            A[last] = temp;
        }
        is_same = true;
        for (int i = 0; i < N; i++)
        {
            if (A[i] != B[i])
                is_same = false;
        }
        if (is_same)
        {
            cout << 1 << '\n';
            return 0;
        }
    }
    cout << 0 << '\n';
    return 0;
}