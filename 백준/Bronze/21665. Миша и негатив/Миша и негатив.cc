#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
const int MAX = 105;

int n, m;
string image[MAX];
string negative[MAX];
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> image[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> negative[i];
    }

    int cnt = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (image[i][j] == negative[i][j])
                cnt++;
        }
    }
    cout << cnt << '\n';

    
    return 0;
}