#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t;
    int m, n;
    int map[101][101];
    
    cin >> t;
    for (int test_case = 1; test_case <= t; test_case++) {
        cin >> m >> n;
        for (int i = m - 1; i >= 0; i--) {
            for (int j = 0; j < n; j++) {
                cin >>map[i][j];
            }
        }
        int move = 0;
        for (int i = 0; i < n; i++) {
            int index = 0;
            for (int j = 0; j < m; j++) {
                if (map[j][i] == 1) {
                    move += (j - index);
                    index++;
                }
            }
        }
        cout << move << '\n';
    }
    return 0;
}