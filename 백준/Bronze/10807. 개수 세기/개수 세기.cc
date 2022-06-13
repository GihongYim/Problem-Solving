#include <iostream>
using namespace std;

int main()
{
    int N;
    int arr[101];
    int v;
    cin >> N;
    for (int i = 0; i < N; i++)
        cin >> arr[i];
    cin >> v;

    int ret = 0;
    for (int i = 0; i < N; i++)
        if(arr[i] == v)
            ret++;
    cout << ret << '\n';
    return 0;
}