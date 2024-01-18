#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    char map[11][11];
    int t;
    int n;

    cin >> t;
    for (int test_case = 1; test_case <= t; test_case++)
    {
        cin >> n;
        for (int i = 0; i < n; i++) {
        fill(map[i], map[i] + n, '#');
        }
        for (int i = 1; i < n - 1; i++) {
            fill(map[i] + 1, map[i] + n - 1, 'J');
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++){
                cout << map[i][j];
            }
            cout << '\n';
        }
        cout << '\n';
    }
    return 0;
}