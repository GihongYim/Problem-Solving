#include <string>
#include <vector>
#include <iostream>
using namespace std;


int solution(vector<vector<int>> triangle) {
    int answer = 0;
    int dp[501][501];
    int height = triangle.size();
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < height; j++) {
            dp[i][j] = -1;
        }
    }
    dp[0][0] = triangle[0][0];
    for (int i = 1; i < height; i++) {
        dp[i][0] = dp[i - 1][0] + triangle[i][0];
        for (int j = 0; j <= i; j++) {
            dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - 1]) + triangle[i][j];
        }
    }
    
    
    for (int i = 0; i < height; i++) {
        answer = max(answer, dp[height - 1][i]);
    }
    return answer;
}