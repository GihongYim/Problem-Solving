#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int length, width, height;

    cin >> length >> width >> height;

    if (min(length, width) >= 2 * height && max(length, width) <= 2 * min(length, width)) {
        cout << "good\n";
    } else {
        cout << "bad\n";
    }
    return 0;
}