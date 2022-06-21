#include <iostream>
using namespace std;

int N, K;
int cnt;
int A[500005];
int tmp[500005];

void merge(int arr[], int p, int q, int r)
{
    if (cnt >= K) return;
    int i = p;
    int j = q + 1;
    int t = 0;
    while (i <= q && j <= r)
    {
        if (arr[i] <= arr[j])
        {
            tmp[t++] = arr[i++];
        }
        else
        {
            tmp[t++] = arr[j++];
        }
    }
    while (i <= q)
        tmp[t++] = arr[i++];
    while (j <= r)
        tmp[t++] = arr[j++];
    i = p;
    t = 0;
    while (i <= r)
    {
        arr[i++] = tmp[t++];
        cnt++;
        if (cnt == K)
        {
            cout << tmp[t - 1] << '\n';
            return;
        }
    }
}

void merge_sort(int arr[], int p, int r)
{
    if (cnt == K) return;
    if (p < r)
    {
        int q = (p + r) / 2;
        merge_sort(arr, p, q);
        merge_sort(arr, q + 1, r);
        merge(arr, p, q, r);
    }
}



int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N >> K;
    for (int i = 0; i < N; i++)
        cin >> A[i];
    cnt = 0;
    merge_sort(A, 0, N - 1);
    if (cnt < K)
        cout << -1 << '\n';
    return 0;
}