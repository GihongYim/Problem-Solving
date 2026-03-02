#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    double x, y, z;
    int n;

    cin >> x >> y >> z >> n;

    double dz = z / n;
    
    for (int i = 0; i < n; i++) {

        double z1 = dz * i;
        double z2 = (i == n - 1 ? z : dz * (i + 1));

        cout << fixed << setprecision(8);
        cout << "0 0 " << z1 << ' ';
        cout << x << ' ' << y << ' ' << z2 << "\n";
    }

    return 0;
}