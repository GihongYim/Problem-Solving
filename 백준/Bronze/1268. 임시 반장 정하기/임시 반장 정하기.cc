#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int N;
int table[1001][5];
bool same[1001][1001];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> N;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> table[i][j];
        }
    }
    for (int i = 0; i < N; i++) {
        fill(same[i], same[i] + N, false);
    }
    bool fri;
    for (int i = 0; i < N - 1; i++) {
        for (int j = i + 1; j < N; j++) {
            fri = false;
            for (int k = 0; k < 5; k++) {
                if (table[i][k] == table[j][k]) {
                    fri = true;
                    break;
                }
            }
            same[i][j] = fri;
            same[j][i] = fri;
        }
    }
    int maxIndex;
    int maxStudent = -1;
    for (int i = 0; i < N; i++) {
        int cnt = 0;
        for (int j = 0; j < N; j++) {
            if (same[i][j])
                cnt++;
        }
        if (cnt > maxStudent) {
            maxStudent = cnt;
            maxIndex = i;
        }
    }
    cout << maxIndex + 1 << '\n';
    return 0;
}
