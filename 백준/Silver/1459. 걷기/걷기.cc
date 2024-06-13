#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    long long x, y, w, s;
    long long dist;
    cin >> x >> y >> w >> s;
    dist = (x + y) * w;
    if ((x + y) % 2 == 0) {
        dist = min(dist, max(x, y) * s);
    } else {
        dist = min(dist, (max(x, y) - 1) * s + w);
    }
    dist = min(dist, min(x, y) * s + abs(x - y) * w);
    

    cout << dist << '\n';
    return 0;
}