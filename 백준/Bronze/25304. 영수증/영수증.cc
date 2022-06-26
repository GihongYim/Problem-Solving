#include <iostream>
using namespace std;

int main()
{
    int x;
    int n;
    int a;
    int b;
    int total;

    cin >> x;
    cin >> n;
    total = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        total += (a * b);
    }
    if (x == total)
        cout << "Yes\n";
    else
        cout << "No\n";
    
    return 0;
}