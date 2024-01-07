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
    int curr = 5;
    // 5 
    cin >> n;
    for (int i = 2; i <= n; i++) {
        curr += (i * 3 + 1);
        curr %= 45678; 
    }
    cout << curr << '\n';
    return 0;
}