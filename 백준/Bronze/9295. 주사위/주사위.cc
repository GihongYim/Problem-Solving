#include <iostream>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int T;
    int a,b;

    cin >> T;
    for (int t = 1; t <= T; t++) {
        cin >> a >> b;
        cout << "Case " << t << ": " << a + b << '\n';
    }
    return 0;
}