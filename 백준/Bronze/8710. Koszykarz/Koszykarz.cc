#include <iostream>
using namespace std;

int main()
{
    int k, w, m;
    int result;
    cin >> k >> w >> m;

    result = (w - k) / m;
    if ((w - k) % m != 0)
        result++;
    
    cout << result << '\n';
    return (0);
}