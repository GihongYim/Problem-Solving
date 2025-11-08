#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int m, n;
    
    cin >> m >> n;

    int low = max(1, 10 - n);
    int high = min(m, 9);

    int count = max(0, high - low + 1);

    if (count == 1)
        cout << "There is 1 way to get the sum 10.";
    else
        cout << "There are " << count << " ways to get the sum 10.";

    return 0;
}