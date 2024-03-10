#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    long long a;

    cin >> a;
    cout << fixed;
    cout << (double)(4.0f * sqrt(a)) << '\n';
    return 0;
}