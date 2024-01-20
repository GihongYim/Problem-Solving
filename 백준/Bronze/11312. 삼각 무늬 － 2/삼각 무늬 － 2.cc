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
    long long a, b;
    int div;
    cin >> T;
    for (int t = 1; t <= T; t++) {
        cin >> a >> b;
        cout <<  (a / b) * (a / b) << '\n';
    }
    return 0;
}



