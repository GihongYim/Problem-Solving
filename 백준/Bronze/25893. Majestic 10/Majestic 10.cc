#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n;
    int a;
    int count;
    
    cin >> n;
    for (int i = 0; i < n; i++) {
        count = 0;
        for (int j = 0; j < 3; j++) {
            cin >> a;
            cout << a << ' ';
            if (a >= 10)
                count++;
        }
        cout << '\n';
        if (count == 0) {
            cout << "zilch\n\n";
        } else if (count == 1) {
            cout << "double\n\n";
        } else if (count == 2) {
            cout << "double-double\n\n";
        } else {
            cout << "triple-double\n\n";
        }
    }
    return 0;
}