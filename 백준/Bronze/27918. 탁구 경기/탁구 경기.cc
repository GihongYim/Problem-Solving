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
    int N;
    int dalgu = 0;
    int ponix = 0;
    string win;

    cin >> N;
    for (int i = 0; i < N; i++) {
        if (abs(dalgu - ponix) >= 2) {
            break;
        }
        cin >> win;
        if (win == "D") {
            dalgu++;
        } else {
            ponix++;
        }
    }
    cout << dalgu << ":" << ponix << '\n';
    return 0;
}