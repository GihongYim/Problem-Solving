#include <iostream>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, c, v;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> c >> v;
        cout << "You get " << c / v <<  " piece(s) and your dad gets " << c % v << " piece(s).\n";
    }   
    return 0;
}