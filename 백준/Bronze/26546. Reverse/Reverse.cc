#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n;
    int a,b;
    string str;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> str >> a >> b;
        str.erase(a, b - a);
        cout << str <<'\n';
    }

    return 0;
}