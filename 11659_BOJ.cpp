#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int N;
    int M;
    int arr[100001];
    int num;
    int a, b;

    cin >> N >> M;
    arr[0] = 0;
    for (int i = 1; i <= N; i++)
    {
        cin >> num;
        if (i != 0)
            arr[i] = arr[i - 1];
        arr[i] += num;
    }
    for(int i = 0; i < M; i++)
    {
        cin >> a >> b;
        cout << arr[b] - arr[a - 1] << '\n';
    }
    return (0);
}