#include <iostream>
using namespace std;

int main()
{
    int t;
    int a, b;

    cin >> t;
    for (int TC = 0; TC < t; TC++)
    {
        cin >> a >> b;
        cout << a + b << '\n';
    }
    return (0);
}