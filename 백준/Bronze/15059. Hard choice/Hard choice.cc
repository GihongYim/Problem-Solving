#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int a[3];
    int b[3];
    for (int i = 0; i < 3; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < 3; i++) {
        cin >> b[i];
    }
    int cnt = 0;
    for (int i = 0; i < 3; i++) {
        cnt += max(0 , b[i] - a[i]);
    }
    cout << cnt << '\n';
    return 0;
}