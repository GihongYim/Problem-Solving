#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int p1, s1, s2, p2;

    cin >> p1 >> s1;
    cin >> s2 >> p2;
    if (p1 + p2 > s1 + s2) {
        cout << "Persepolis\n";
    } else if (p1 + p2 < s1 + s2) {
        cout << "Esteghlal\n";
    } else {
        if (p2 > s1) {
            cout << "Persepolis\n";
        } else if (p2 < s1) {
            cout << "Esteghlal\n";
        } else {
            cout << "Penalty\n";
        }
    }

    return 0;
}