#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    string alpha = "abcdefgh";
    int n;

    cin >> n;
    n--;
    cout  << alpha[n % 8] << (n / 8) + 1 << '\n';

    return 0;
}