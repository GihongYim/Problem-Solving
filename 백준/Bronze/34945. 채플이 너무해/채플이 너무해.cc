#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    vector<string> x(8, "Oh My God!");

    for (int i = 6; i <= 7; i++) {
        x[i] = "Success!";
    }

    int n;

    cin >> n;
    cout << x[n] << '\n';

    return 0;
}