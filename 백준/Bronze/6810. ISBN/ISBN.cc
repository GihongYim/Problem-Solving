#include <iostream>
using namespace std;

int main(void)
{
    int result = 91;
    int a;

    for (int i = 0; i < 3; i++)
    {
        cin >> a;
        if (i % 2 == 1)
            result += (a * 3);
        else
            result += a;
    }
    cout << "The 1-3-sum is " << result << '\n';
    return (0);
}