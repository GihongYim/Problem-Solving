#include <iostream>
using namespace std;

int main()
{
    int bottle;
    int total;
    total = 0;
    for (int i = 0; i < 6; i++)
    {
        cin >> bottle;
        total += bottle;
    }
    cout << total * 5 << '\n';
    return 0;
}