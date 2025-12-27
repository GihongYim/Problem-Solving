#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    double xa, ya, xb, yb, xc, yc;
    cin >> xa >> ya >> xb >> yb >> xc >> yc;

    double dx1 = xb - xa;
    double dy1 = yb - ya;
    double dx2 = xc - xa;
    double dy2 = yc - ya;

    if (dx1 * dy2 == dy1 * dx2) {
        cout << "-1.0\n";
        return 0;
    }

    double ab = hypot(xa - xb, ya - yb);
    double ac = hypot(xa - xc, ya - yc);
    double bc = hypot(xb - xc, yb - yc);

    double p1 = 2 * (ab + ac);
    double p2 = 2 * (ab + bc);
    double p3 = 2 * (ac + bc);

    double mx = max({p1, p2, p3});
    double mn = min({p1, p2, p3});

    cout << fixed << setprecision(15) << (mx - mn) << '\n';
}
