#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N;

    cin >> N;
    int aj = 1;

    for (int i = 1; i < N; i++) {
        if (to_string(i).find("50") != string::npos) {
            aj++;
        }
        aj++;
    }

    cout << aj << '\n';
    return 0;
}