#include <iostream>
using namespace std;

int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n;
    int num[3];
    int gcds[3];
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> num[i];
    }
    for (int i = 0; i < n - 1; i++) {
        gcds[i] = gcd(num[i], num[i + 1]);
    }
    for (int i = 0; i < n - 1; i++) {
        gcds[0] = gcd(gcds[0], gcds[i]);
    }
    for (int i = 1; i <= gcds[0]; i++) {
        if (gcds[0] % i == 0) {
            cout << i << '\n';
        }
    }
    return 0;
}