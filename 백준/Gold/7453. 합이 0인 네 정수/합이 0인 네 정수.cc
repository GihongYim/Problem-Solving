#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

#define ll long long

const int MAX = 4005;
int n;

ll arr[4][MAX];


int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> arr[j][i];
        }
    }
    vector<ll> leftSum(n * n);
    vector<ll> rightSum(n * n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            leftSum[i * n + j] = arr[0][i] + arr[1][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            rightSum[i * n + j] = arr[2][i] + arr[3][j];
        }
    }
    sort(leftSum.begin(), leftSum.end());
    sort(rightSum.begin(), rightSum.end());
    long long ans = 0;
    int left = 0;
    int right = rightSum.size() - 1;
    ll Sum;
    ll leftCnt;
    ll rightCnt;
    ll leftFix;
    while (left < leftSum.size() && right >= 0) {
        Sum = leftSum[left] + rightSum[right]; 
        if (Sum == 0) { 
            leftCnt = 0;
        leftFix = left;
        while (leftSum[left] + rightSum[right] == 0) {
            if (left >= leftSum.size()) break;
            leftCnt++;
            left++;
        }
        rightCnt = 0;
        while (leftSum[leftFix] + rightSum[right] == 0) {
            if (right < 0) break;
            rightCnt++;
            right--;
        }
        ans += (leftCnt * rightCnt);
        } else if (Sum < 0) {
            left++;
        } else {
            right--;
        }
    }
    cout << ans << '\n';
    return 0;
}
