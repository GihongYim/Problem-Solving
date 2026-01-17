#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N;
    string address;

    map<string, int> domain;

    cin >> N;

    for (int i = 1; i <= N; i++) {
        cin >> address;
        if (address.substr(0, 7) == "http://") {
            address = address.substr(7);
        }

        size_t endOfDomain = address.find_first_of('/');
        // find / 
        if (endOfDomain != string::npos) {
            address = address.substr(0, endOfDomain);
        }

        size_t lastDot = address.find_last_of('.');
        if (lastDot != string::npos) {
            address = address.substr(lastDot + 1);
        }

        if (domain.find(address) == domain.end()) {
            domain.insert(make_pair(address, 0));
        }
        domain[address]++;
    }

    int maxCount = 0;
    for (const auto& entry : domain) {
        maxCount = max(maxCount, entry.second);
    }

    cout << maxCount << "\n";

    for (const auto& entry : domain) {
        if (entry.second == maxCount) {
            cout << entry.first << " ";
        }
    }

    cout << "\n";
    return 0;
}