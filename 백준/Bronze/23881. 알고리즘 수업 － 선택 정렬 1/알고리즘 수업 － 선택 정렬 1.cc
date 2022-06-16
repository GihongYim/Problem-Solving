#include <iostream>
using namespace std;

int main()
{
    int N, K;
    int arr[10005];
    int cnt = 0;
    int max_idx;
    cin >> N >> K;

    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    for (int last = N - 1; last >= 1; last--)
    {
        max_idx = last;
        for (int i = 0; i < last; i++)
        {
            if (arr[i] > arr[max_idx])
            {
                max_idx = i;
            }
        }
        if (max_idx != last)
        {
            cnt++;
            if (cnt == K)
            {
                cout << arr[last] << ' ' << arr[max_idx] << '\n';
                break;
            }
            int temp = arr[max_idx];
            arr[max_idx] = arr[last];
            arr[last] = temp;
        }
    }
    if (cnt < K)
        cout << -1 << '\n';
    return 0;
}