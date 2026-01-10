#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int m[101][101] = {0};

    int n;

    cin >> n;
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        
        for (int j = a; j < a + 10; j++) {
            for (int k = b; k < b + 10; k++) {
                m[j][k] = 1;
            }
        }
    }

    int perimeter = 0;
    for (int i = 0; i <= 100; i++) {
        for (int j = 0; j <= 100; j++) {
            if (m[i][j] == 1) {
                if (i == 0 || m[i - 1][j] == 0
                ) perimeter++;
                if (i == 100 || m[i + 1][j] == 0
                ) perimeter++;
                if (j == 0 || m[i][j - 1] == 0
                ) perimeter++;
                if (j == 100 || m[i][j + 1] == 0
                ) perimeter++;
            }
        }
    }
    cout << perimeter << "\n";
    return 0;
}