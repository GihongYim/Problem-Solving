#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

vector<int> card(5);
int value;

void dfs(int index, int cnt, int sum) {
    if (cnt >= 3) {
        if (sum > value) {
            value = sum;
        }
        return ;
    }
    if (index >= 5) {
        return ;
    }
    dfs(index + 1, cnt + 1, (sum + card[index]) % 10);
    dfs(index + 1, cnt, sum % 10);
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int N;
    int maxIndex = 0;
    int maxValue = -1;
    cin >> N;
    for (int i = 1; i <= N; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> card[j];
            card[j] %= 10;
        }
        value = 0;
        dfs(0, 0, 0);
        if (value >= maxValue) {
            maxValue = value;
            maxIndex = i;
        }
    }
    cout << maxIndex << '\n'; 
    return 0;
}