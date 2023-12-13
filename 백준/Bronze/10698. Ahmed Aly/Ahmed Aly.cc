#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int tt;
    int v1, v2, v3;
    string op;
    string eq;

    cin >> tt;
    for (int t = 1; t <= tt; t++) {
        cin >> v1 >> op >> v2 >> eq >> v3;
        cout << "Case " << t << ": ";
        if (op == "+") {
            if (v1 + v2 == v3) {
                cout << "YES\n";
            } else {
                cout << "NO\n";
            }
        }
        else if (op == "-") {
            if (v1 - v2 == v3) {
                cout << "YES\n";
            } else {
                cout << "NO\n";
            }
        }
    }

    return 0;
}