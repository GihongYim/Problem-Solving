#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <iomanip>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    float x, y;
    int n;

    cin >> x >> y;
    cin >> n;
    float gram, won;
    vector<float> conv;
    conv.push_back(x / y);
    for (int i = 0; i < n; i++) {
        cin >> won >> gram;
        conv.push_back(won / gram);
    }
    sort(conv.begin(), conv.end());
    cout << fixed;
    cout << setprecision(2);
    cout << conv[0] * 1000 << '\n';

    return 0;
}