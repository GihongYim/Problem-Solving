#include <iostream>
using namespace std;

int main()
{
    int x, k;

    cin >> x >> k;

    if (k * 7 <= x)
        cout << (k * 7000);
    else if (k * 3.5 <= x)
        cout << (k * 3500);
    else if (k * 1.75 <= x)
        cout << (k * 1750);
    else
        cout << (0);
    
    return (0);
}