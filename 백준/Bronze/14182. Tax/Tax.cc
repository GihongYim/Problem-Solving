#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int income;

    while (1) {
        cin >> income;
        if (income == 0) break;

        if (income <= 1000000) {
            cout << income << '\n';
        } else if (income <= 5000000) {
            cout << income - (income * 10) / 100 << '\n';
        } else {
            cout << income - (income * 20) / 100 << '\n';
        }
    }

    return 0;
}