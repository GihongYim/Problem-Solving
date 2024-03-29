#include <iostream>
#include <string>
using namespace std;
string encryption;
long long dp[5005];

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    cin >> encryption;
    fill(dp, dp + encryption.length() + 1, 0);
    dp[0] = 1;
    long long twoDigit;
    for (int i = 0; i < encryption.length(); i++) {
        if (encryption[i] != '0') {
            dp[i + 1] += dp[i];
            dp[i + 1] %= 1000000;
        }
        if (i + 1 < encryption.length()) {
            twoDigit = stol(encryption.substr(i, 2));
            if (twoDigit >= 10 && twoDigit <= 26) {
                dp[i + 2] += dp[i];
                dp[i + 2] %= 1000000;
            }
        }
    }
    cout << dp[encryption.length()] << '\n';

    return 0;
}