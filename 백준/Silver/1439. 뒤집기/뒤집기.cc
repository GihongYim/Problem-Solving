#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int zeroCnt = 0;
    int oneCnt = 0;
    string str;

    cin >> str;
    
    for (int i = 1; i < str.length(); i++) {
        if (str[i - 1] != str[i]) {
            if (str[i - 1] == '0') {
                zeroCnt++;
            } else {
                oneCnt++;
            }
        }
    }
    if (str[str.length() - 1] == '0') {
        zeroCnt++;
    } else {
        oneCnt++;
    }
    cout << min(zeroCnt, oneCnt);
    

    return 0;
}