#include <iostream>

using namespace std;

int main()
{
    long long v1, j1, v2, j2, v, d, j;
    cin >> v1 >> j1 >> v2 >> j2 >> v >> d >> j;
    cout << (v*d*j)*(v1*j1+v2*j2);
    return 0;
}