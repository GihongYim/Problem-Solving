#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n;
    int v, s;
    int arr[1001];

    cin >> n;
    for (int test_case = 1; test_case <= n; test_case++) {
        fill(arr, arr + 1001, 0);
        cin >> v;
        for (int i = 0; i < v; i++) {
            cin >> s;
            arr[s]++;
        }
        int maxNum = -1;
        int maxIdx = -1;
        for (int i = 0; i < 1001; i++) {
            if (arr[i] > maxNum) {
                maxNum = arr[i];
                maxIdx = i;
            }
        }
        cout << maxIdx << '\n';

    }
    return 0;
}