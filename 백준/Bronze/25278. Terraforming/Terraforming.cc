#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    int oxygen = 0;
    int ocean = 0;
    int temperature = -30;
    int num;

    cin >> n;

    for (int i = 0; i < n; i++) {
        string event;
        cin >> event >> num;

        if (event == "oxygen") {
            oxygen += num;
        } else if (event == "ocean") {
            ocean += num;
        } else if (event == "temperature") {
            temperature += num;
        }
    }

    if (oxygen >= 14 && ocean >= 9 && temperature >= 8) {
        cout << "liveable";
    } else {
        cout << "not liveable";
    }


    return 0;
}