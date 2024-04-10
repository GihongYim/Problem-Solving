#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int n;
    int arr[101];
    int answer = 0;
    
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int i = n - 1; i > 0; i--) {
        if (arr[i] <= arr[i - 1]) {
            answer += (arr[i - 1] - arr[i] + 1);
            arr[i - 1] = arr[i] - 1;
        }
    }
    cout << answer << '\n';

    return 0;
}