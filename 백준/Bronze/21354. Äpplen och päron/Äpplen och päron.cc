#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int a, p;

    cin >> a >> p;
    if (a * 7 > p * 13) {
        cout << "Axel\n";
    } else if (a * 7 < p * 13) {
        cout << "Petra\n";
    } else {
        cout << "lika\n";
    }
    return 0;
}