#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int K;
    cin >> K;

    for (int k = 1; k <= K; k++) {
        int n, b;
        cin >> n >> b;
        vector<string> code(n);
        for (int i = 0; i < n; i++) {
            cin >> code[i];
        }
        string r;
        cin >> r;
        int dist = 0x3f3f3f3f;
        for (int i = 0; i < n; i++) {
            int hdist = 0;
            for (int j = 0; j < b; j++) {
                if (r[j] != code[i][j]) {
                    hdist++;
                }
            }
            dist = min(dist, hdist);
        }
        cout << "Data Set " << k << ":" << '\n';
        cout << dist << "\n\n";
    }

    return 0;
}