#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    float A, B;

    cin >> A >> B;
    float M = (B - A) / 400.0f;

    cout << 1 / (1.0 + pow(10, M)) << '\n';

    return 0;
}