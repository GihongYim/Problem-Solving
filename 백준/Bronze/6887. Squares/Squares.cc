#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n;
    int i = 1;

    cin >> n;
    for (i = 1; i * i <= n; i++);
    cout << "The largest square has side length "<< i - 1 << ".\n";

    return 0;
}