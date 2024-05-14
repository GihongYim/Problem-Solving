#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int w, h;
    int area;
    cin >> w >> h;

    area = w * h;
    int acer = area / 4840;
    if (area % 4840 != 0)
        acer++;
    int result = acer / 5;
    if (acer % 5 != 0)
        result++;
    cout << result << '\n';

    return 0;
}