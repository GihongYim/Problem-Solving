#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string line;
    string date;
    int k;

    int minK = INT_MAX;
    int maxK = INT_MIN;

    while (1){
        getline(cin, line);
        if (line.empty()) break;

        stringstream ss(line);
        ss >> date;

        while (ss >> k) {

            minK = min(minK, k);
            maxK = max(maxK, k);
        }
    }
    cout << minK << " " << maxK << "\n";

    return 0;
}