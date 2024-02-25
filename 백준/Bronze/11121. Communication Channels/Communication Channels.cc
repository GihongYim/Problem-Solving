#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int T;
    string src, dst;
    bool ok;

    cin >> T;

    for (int t = 0; t < T; t++) {
        cin >> src >> dst;
        ok = true;
        for (int i = 0; i < src.length(); i++) {
            if (src[i] != dst[i]) {
                ok = false;
                break;
            }
        }
        if (ok) {
            cout << "OK\n";
        } else {
            cout << "ERROR\n";
        }
    }

    return 0;
}