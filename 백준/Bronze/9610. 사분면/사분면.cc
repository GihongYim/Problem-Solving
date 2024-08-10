#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int n;

    int q[5] = {0, 0, 0, 0, 0};
    int axis = 0;

    cin >> n;
    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        if (x == 0 || y == 0) {
            axis++;
        }
        else if (x > 0 && y > 0) {
            q[1]++;
        }
        else if (x < 0 && y > 0) {
            q[2]++;
        }
        else if (x < 0 && y < 0) {
            q[3]++;
        }
        else if (x > 0 && y < 0) {
            q[4]++;
        }
    }
    cout << "Q1: " << q[1] << '\n';
    cout << "Q2: " << q[2] << '\n';
    cout << "Q3: " << q[3] << '\n';
    cout << "Q4: " << q[4] << '\n';
    cout << "AXIS: " << axis << '\n';


    return 0;
}