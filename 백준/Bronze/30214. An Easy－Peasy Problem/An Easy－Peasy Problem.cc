#include <iostream>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);

    int s1, s2;

    cin >> s1 >> s2;

    if (s1 * 2 >= s2) {
        cout << "E\n";
    } else {
        cout << "H\n";
    }
    return 0;
}