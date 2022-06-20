#include <iostream>
using namespace std;

int main()
{
    int n;
    int ret;
    int number;

    cin >> n;

    ret = 0;
    while (n > 0)
    {
        number = n % 10;
        ret += number * number * number * number * number;
        n /= 10;
    }
    cout << ret << '\n';
    return 0;
}