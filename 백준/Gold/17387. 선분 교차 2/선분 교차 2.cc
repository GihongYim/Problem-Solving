#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define ll long long

#define pll pair<ll, ll>

pll p1, p2, p3, p4;
int ccw(pll x, pll y, pll z) {
    ll answer = 0;
    answer += (x.first * y.second + y.first * z.second + z.first * x.second);
    answer -= (y.first * x.second + z.first * y.second + x.first * z.second);
    if (answer > 0) return 1;
    else if (answer == 0) return 0;
    else return -1;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);


    cin >> p1.first >> p1.second;
    cin >> p2.first >> p2.second;
    cin >> p3.first >> p3.second;
    cin >> p4.first >> p4.second;

    int a = ccw(p1, p2, p3) * ccw(p1, p2, p4); 
    int b = ccw(p3, p4, p1) * ccw(p3, p4, p2); 
    if (a == 0 && b == 0) {
        if (p1 > p2) swap(p1, p2);
        if (p3 > p4) swap(p3, p4);
        if (p2 >= p3 && p1 <= p4) cout << "1\n";
        else cout << "0\n";
    }
    else if (a <= 0 && b <= 0) cout << "1\n";
    else cout << "0\n";

           
    return 0;
}
