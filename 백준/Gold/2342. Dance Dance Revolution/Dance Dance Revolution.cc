#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;

#define INF 0x3f3f3f3f

const int MAX = 100005;
int dp[MAX][5][5];

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int button;
    int i = 0;

    for (int i = 0; i < MAX; i++) {
        for (int j = 0; j < 5; j++) {
            for (int k = 0; k < 5; k++) {
                dp[i][j][k] = INF;     
            }
        }
    }
    dp[0][0][0] = 0;
    while (1) {
        cin >> button;
        if (button == 0)
            break;
        for (int left = 0; left < 5; left++) {
            for (int right = 0; right < 5; right++) {
                if (dp[i][left][right] != INF) {
                    if (left == button) {
                        dp[i + 1][button][right] = min(dp[i + 1][button][right], dp[i][left][right] + 1);
                    } else if(button != right){
                        if (left == 0) {
                            dp[i + 1][button][right] = min(dp[i + 1][button][right], dp[i][left][right] + 2);
                        } else if (abs(left - button) == 1 || abs(left - button) == 3) {
                            dp[i + 1][button][right] = min(dp[i + 1][button][right], dp[i][left][right] + 3);
                        } else {
                            dp[i + 1][button][right] = min(dp[i + 1][button][right], dp[i][left][right] + 4);
                        }
                    }

                    if (right == button) {
                        dp[i + 1][left][button] = min(dp[i + 1][left][button], dp[i][left][right] + 1);
                    } else if (button != left) {
                        if (right == 0) {
                            dp[i + 1][left][button] = min(dp[i + 1][left][button], dp[i][left][right] + 2);
                        } else if (abs(right - button) == 1 || abs(right - button) == 3) {
                            dp[i + 1][left][button] = min(dp[i + 1][left][button], dp[i][left][right] + 3);
                        } else {
                            dp[i + 1][left][button] = min(dp[i + 1][left][button], dp[i][left][right] + 4);
                        }
                    }
                }
            }
        }
        i++;
    }
    int answer = INF;
    for (int left = 0; left < 5; left++) {
        for (int right = 0; right < 5; right++) {
            answer = min(answer, dp[i][left][right]);
        }
    }
    cout << answer << '\n';
    return 0;
}