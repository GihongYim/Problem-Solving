#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() 
{
    int n;
    string s;
    int cubeCnt  = 0;

    cin >> n;
    cin >> s;

    if (n < s.length()) {
        cout << "Impossible" << '\n';
        return 0;
    }

    for (int i = 0; i < s.length(); i++) {
        cubeCnt = cubeCnt + (s[i] - 'a' + 1);
    }

    cout << cubeCnt << '\n';

    return 0;
}