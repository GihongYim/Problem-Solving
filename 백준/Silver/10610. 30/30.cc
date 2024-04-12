#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int arr[10];
    
    fill(arr, arr + 10 ,0);

    string str;
    string result;
    long long total = 0;

    cin >> str;

    for (int i = 0; i < str.length(); i++) {
        arr[str[i] - '0']++;
    }
    if (arr[0] == 0) {
        cout << -1 << '\n';
        return 0;
    }
    for (int i = 0; i < 10; i++) {
        total += (i * arr[i]);
    }
    if (total % 3 != 0) {
        cout << -1 << '\n';
        return 0;
    }
    for (int i = 9; i >= 0; i--) {
        for (int j = 0; j < arr[i]; j++) {
            cout << i;
        }
    }

    return 0;
}