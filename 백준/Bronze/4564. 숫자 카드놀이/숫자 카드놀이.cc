#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n;
    int next;
    while (1)
    {
        cin >> n;
        if (n == 0)
            break;
        while (1) {
            cout << n << ' ';
            if (n < 10)
                break;
            next = 1;
            while (n > 0) {
                next *= (n % 10);
                n /= 10;
            }
            n = next;
        }
        cout << '\n';
    }

    return 0;
}