#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    int arr[100005];
    int left, right;
    int min_left, min_right;
    int min_num;

    cin >> N;

    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    left = 0;
    right = N - 1;
    min_num = 2000000005;
    min_left = 0;
    min_right = N - 1;
    while (left < right)
    {
        if (abs(arr[left] + arr[right]) <= min_num)
        {
            min_left = left;
            min_right = right;
            min_num = abs(arr[left] + arr[right]);
        }
        if (arr[left] + arr[right] == 0)
        {
            min_left = left;
            min_right = right;
            min_num = 0;
            break;
        }
        else if (arr[left] + arr[right] < 0)
        {
            left++;
        }
        else
        {
            right--;
        }
    }
    cout << arr[min_left] << ' ' << arr[min_right] << '\n';
    return (0);
}