#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;

    cin >> n >> m;

    vector<int> ingre(n);
    for (int i = 0; i < n; i++) {
        cin >> ingre[i];
    }
    sort(ingre.begin(), ingre.end());
    int start = 0;
    int end = n - 1;
    int answer = 0;
    while (start < end) {
        if (ingre[start] + ingre[end] < m) {
            start++;
        } else if (ingre[start] + ingre[end] > m) {
            end--;
        } else {
            answer++;
            start++;
            end--;
        }
    }
    cout << answer << '\n';
    return 0;
}