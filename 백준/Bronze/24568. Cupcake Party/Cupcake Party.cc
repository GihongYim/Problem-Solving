#include <iostream>
using namespace std;

int main()
{
    int reg;
    int small;

    cin >> reg;
    cin >> small;

    cout << reg * 8 + small * 3 - 28 << '\n';
    return 0;
}