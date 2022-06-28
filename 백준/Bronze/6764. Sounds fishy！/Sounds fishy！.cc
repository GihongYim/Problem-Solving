#include <iostream>
using namespace std;

int main(void)
{
    int a[4];

    for (int i = 0; i < 4; i++)
    {
        cin >> a[i];
    }
    if (a[0] < a[1] && a[1] < a[2] && a[2] < a[3] )
    {
        cout << "Fish Rising\n";
    }
    else if (a[0] > a[1] && a[1] > a[2] && a[2] > a[3])
    {
        cout << "Fish Diving\n";
    }
    else if (a[0] == a[1] && a[1] == a[2] && a[2] == a[3])
    {
        cout << "Fish At Constant Depth\n";
    }
    else
    {
        cout << "No Fish\n";
    }
    return (0);
}