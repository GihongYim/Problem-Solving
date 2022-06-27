#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    int ans;
    ans = 0;
    cin >> n;
    for(int i = 1; i <= n; i++) ans += pow(i,3);
    cout << ans;
    return 0;
}