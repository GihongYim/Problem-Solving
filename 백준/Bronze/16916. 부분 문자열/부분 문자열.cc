#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cstring>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    string p, s;
    cin >> p;
    cin >> s;
    if (strstr(p.c_str(), s.c_str()) == NULL) {
        cout << 0 << '\n';
    } else {
        cout << 1 << '\n';
    }

    return 0;
}