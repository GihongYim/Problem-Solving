#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    
    int a, b, c;
    int avg;
    int result = 0;

    cin >> a >> b >> c;
    avg = (a + b + c) / 3;
    result = (avg - a) + (avg - (b - (avg - a)));
    cout << result << '\n';
    return 0;
}