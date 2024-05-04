#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n;
    int num[10];
    bool zack, mack;

    cin >> n;
    for (int i = 0; i < n; i++) {
        zack = false;
        mack = false;
        for (int j = 0; j < 10; j++) {
            cin >> num[j];
            if (num[j] == 18)
                mack = true;
            if (num[j] == 17)
                zack = true;
        }
        for (int j = 0; j < 10; j++) {
            cout << num[j] << ' ';
        }
        cout << '\n';
        if (mack && zack) {
            cout << "both\n\n";
        } else if (mack) {
            cout << "mack\n\n";
        } else if (zack) {
            cout << "zack\n\n";
        } else {
            cout << "none\n\n";
        }

    }

    return 0;
}