#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int n;
    int length;
    while (1) {
        cin >> n;

        length = 1;
        if (n == 0)
            break;
        while (n > 0) {
            if (n % 10 == 0) {
                length += 5;
            } else if (n % 10 == 1) {
                length += 3;
            } else {
                length += 4;
            }
            n /= 10;
        }
        cout << length << '\n';
    }
    return 0;
}