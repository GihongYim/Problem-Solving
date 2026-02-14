#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string dep, dest;
    long long mileage;
    string cls;

    long long miles = 0;
    while (1) {
        cin >> dep;
        if (dep == "#") break;

        if (dep == "0") {
            cout << miles << '\n';
            miles = 0;
            continue;
        }
        
        if (dep == "0") break;
        cin >> dest >> mileage >> cls;
        
        if (cls == "F") {
            miles += mileage * 2;
        } else if (cls == "B") {
            miles += (mileage * 3 + 1) / 2;
        } else {
            miles += max(mileage, 500LL);
        }
    }


    return 0;
}