#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, m;
    int r, g, b;
    int intensity;
    cin >> n >> m;
    
    vector<string> ascii(n);
    string line;

    for (int i = 0; i < n; i++) {
        ascii[i] = "";

        for (int j = 0; j < m; j++) {
            cin >> r >> g >> b;
            
            intensity = 2126 * r + 7152 * g + 722 * b;

            if (intensity < 510000) {
                ascii[i] += '#';
            } else if (intensity < 1020000) {
                ascii[i] += 'o';
            } else if (intensity < 1530000) {
                ascii[i] += '+';
            } else if (intensity < 2040000) {
                ascii[i] += '-';
            } else {
                ascii[i] += '.';
            }
        }
    }

    for (int i = 0; i < n; i++) {
        cout << ascii[i] << '\n';
    }

    return 0;
 }