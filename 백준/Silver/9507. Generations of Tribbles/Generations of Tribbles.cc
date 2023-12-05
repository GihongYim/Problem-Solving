#include <iostream>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int t;
    long long fib[70];
    long long n;
    
    fib[0] = 1;
    fib[1] = 1;
    fib[2] = 2;
    fib[3] = 4;
    
    cin >> t;
    for (int test_case = 1; test_case <= t; test_case++) {
        cin >> n;
        for (int i = 4; i <= n; i++) {
            fib[i] = fib[i - 1] + fib[i - 2] + fib[i - 3] + fib[i - 4];
        }
        cout << fib[n] << '\n';
    }
    return 0;
}