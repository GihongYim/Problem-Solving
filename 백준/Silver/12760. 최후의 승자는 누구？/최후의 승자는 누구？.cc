#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n, m;
    int num;
    int score[101];
    cin >> n >> m;

    fill(score, score + n + 1, 0);
    priority_queue<int> q[101];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> num;
            q[i].push(num);
        }
    }
    for (int i = 0; i < m; i++) {
        int maxIdx = -1;
        int maxNum = 0;
        for (int j = 0; j < n; j++) {
            num = q[j].top();
            if (num >= maxNum) {
                maxIdx = j;
                maxNum = num;
            }
        }
        for (int i = 0; i < n; i++) {
            if (q[i].top() == maxNum)
                score[i]++;
            q[i].pop();
        }
    }
    int maxNum = -1;
    for (int i = 0; i < n; i++) {
        if (score[i] > maxNum) {
            maxNum = score[i];
        }
    }
    for (int i = 0; i < n; i++) {
        if (score[i] == maxNum) {
            cout << i + 1 << ' ' ;
        }
    }
    return 0;
}