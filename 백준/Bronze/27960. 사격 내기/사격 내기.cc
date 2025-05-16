#include <iostream>
using namespace std;

int main() {
    int sa, sb;
    cin >> sa >> sb;
    int c = 0;
    for (int i = 0; i < 10; i++) {
        int a = (sa >> i) & 1;
        int b = (sb >> i) & 1;
        if (a ^ b) c += (1 << i);
    }
    cout << c << endl;
    return 0;
}
