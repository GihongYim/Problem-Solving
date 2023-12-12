#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n;
    int answer = 1;
    cin >> n;
    while (n != 1) {
        if (n % 2 == 1) {
            answer = 0;
            break;
        }
        n /= 2;
    }
    cout << answer << '\n';
    return 0;
}