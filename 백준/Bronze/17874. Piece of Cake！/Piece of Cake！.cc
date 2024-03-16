#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n, h, v;

    cin >> n >> h >> v;
    cout << max(n - h, h) * max(n - v, v) * 4 << '\n';

    return 0;
}