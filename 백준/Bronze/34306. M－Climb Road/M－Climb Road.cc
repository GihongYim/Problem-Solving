#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int M;
    int D;

    cin >> M >> D;

    M *= 5280;

    cout << M / D << '\n';

    return 0;
}