#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int K;
    string str;
    string newStr;

    cin >> K;
    str = "A";
    long long a = 1, b = 0;
    long long na, nb;
    for (int i = 0; i < K; i++) {
        na = b;
        nb = a + b;
        a = na;
        b = nb;
    }
    cout << a << ' ' << b << '\n';
    return 0;
}