#include <string>
#include <vector>
#include <iostream>
using namespace std;


int solution(int n, vector<int> money) {
    int answer = 0;
    int dp[200000] = {0,};

    dp[0] = 1;
    for (int i = 0; i < money.size(); i++) {
        for (int j = 0; j <= n; j++){
            if (j - money[i] >= 0){
                dp[j] += dp[j - money[i]];
            }
        }
    }
    answer = dp[n];
    return answer;
}