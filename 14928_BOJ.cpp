#include <iostream>
#include <string>
using namespace std;

int main()
{
    string num;
    int ret = 0;
    int digit;

    cin >> num;

    for (int i = 0; i < num.size(); i++)
    {
        ret *= 10;
        ret %= 20000303;

        digit = num[i] - '0';
        ret += digit;
        ret %= 20000303;
    }

    cout << ret << '\n';
    return 0;
}