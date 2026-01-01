#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;

    vector<int> runners(n - 1, 0);
    for (int i = 0; i < n - 1; i++) {
        int runnerNum;
        cin >> runnerNum;
        runners[runnerNum - 1] = 1; // Mark the runner as present
    }

    for (int i = 0; i < n; i++) {
        if (runners[i] == 0) {
            cout << i + 1 << "\n"; // Output the missing runner number
            break;
        }
    }
    return 0;
}