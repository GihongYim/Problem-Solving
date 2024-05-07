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

    cin >> n;
    string line;
    int day;
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        cin >> line;
        day = stoi(line.substr(2));
        if (day <= 90) {
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}