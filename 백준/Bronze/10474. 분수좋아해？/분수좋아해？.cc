#include <iostream>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int numerator, denominator;

    while (1) {
        cin >> numerator >> denominator;
        if (numerator == 0 && denominator == 0) 
            break;
        cout << numerator / denominator << ' ' << numerator % denominator << " / " << denominator << '\n';
    }
    return 0;
}