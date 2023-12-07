#include <iostream>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    
    int n;
    cin >> n;

    if (n / 10 == n % 10) {
        cout << 1 << '\n';
    } else {
        cout << 0 << '\n';
    }
    return 0;
}