#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int h, m;

    cin >> h >> m;
    cout << h * 60 + m << '\n';

    return 0;
}