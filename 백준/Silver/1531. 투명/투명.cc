#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    int n, m;
    int map[101][101];
    int x1, y1, x2, y2;
    int total = 0;
    for (int i = 0; i <= 100; i++) {
        fill(map[i], map[i] + 101, 0);
    }
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> x1 >> y1 >> x2 >> y2;
        for (int x = x1; x <= x2; x++) {
            for (int y = y1; y <= y2; y++){
                map[x][y]++;
            }
        }
    }
    for (int i = 1; i <= 100; i++) {
        for (int j = 1; j <= 100; j++) {
            if (map[i][j] > m)
                total++;
        }
    }
    cout << total << '\n';
    return 0;
}