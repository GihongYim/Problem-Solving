#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N, H, W;
    string toWork;
    string toHome;

    cin >> N >> H >> W;

    for (int i = 0; i < N; i++) {
        cin >> toWork >> toHome;

        if (toWork == "Y" || W == 0) {
            H--;
            W++;
            cout << "Y ";
        } else {
            cout << "N ";
        }

        if (toHome == "Y" || H == 0) {
            W--;
            H++;
            cout << "Y";
        } else {
            cout << "N";
        }

        cout << '\n';
    }
    return 0;
}